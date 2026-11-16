// libs/game/runetek5/config/ConfigProvider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ConfigProvider.h"

namespace jag::game {
    // 0x100564000
    ConfigProvider::ConfigProvider(Js5ResourceProvider& js5ResourceProvider, const Language* language,
                                   const ModeGame* modeGame, bool arg4, PlayerVarDomain* playerVarDomain,
                                   Array<ConfigTypeListContainerStrategy>& configTypeListContainerStrategys,
                                   bool arg7) {
        PlayerVarDomain* local_40 = playerVarDomain;
        new (this) IConfigProvider();
        new (&field_8) PlayerGroupResourceProvider();
        field_8 = &PTR_GetVarPlayerTypeList_100f04828;
        field_16 = js5ResourceProvider;
        field_24 = language;
        field_32 = modeGame;
        field_40 = arg4;
        field_48 = local_40;
        new (&field_56) Array<ConfigTypeListContainerStrategy>(configTypeListContainerStrategys);
        field_80 = arg7;
        field_96 = 0;
        field_84 = 0;
        field_88 = 0;
        field_92 = 0;
        local_40 = (PlayerVarDomain*)&field_56;
        new (&field_104) eastl::hash_map<Js5ArchiveSettings const*, ConfigDecoderInfo>(local_1e0);
        uint8_t* local_1d8 = &field_104;
        new (&field_160) Array<BaseConfigTypeList*>();
        uint8_t* local_1d0 = &field_160;
        new (&field_184) Array<BaseConfigTypeList*>();
        &field_208->unique_ptr<true, void>();
        &field_216->unique_ptr<true, void>();
        &field_224->unique_ptr<true, void>();
        &field_232->unique_ptr<true, void>();
        &field_240->unique_ptr<true, void>();
        &field_248->unique_ptr<true, void>();
        &field_256->unique_ptr<true, void>();
        &field_264->unique_ptr<true, void>();
        &field_272->unique_ptr<true, void>();
        &field_280->unique_ptr<true, void>();
        &field_288->unique_ptr<true, void>();
        &field_296->unique_ptr<true, void>();
        &field_304->unique_ptr<true, void>();
        &field_312->unique_ptr<true, void>();
        &field_320->unique_ptr<true, void>();
        &field_328->unique_ptr<true, void>();
        &field_336->unique_ptr<true, void>();
        &field_344->unique_ptr<true, void>();
        &field_352->unique_ptr<true, void>();
        &field_360->unique_ptr<true, void>();
        &field_368->unique_ptr<true, void>();
        &field_376->unique_ptr<true, void>();
        &field_384->unique_ptr<true, void>();
        &field_392->unique_ptr<true, void>();
        &field_400->unique_ptr<true, void>();
        &field_408->unique_ptr<true, void>();
        &field_416->unique_ptr<true, void>();
        &field_424->unique_ptr<true, void>();
        &field_432->unique_ptr<true, void>();
        &field_440->unique_ptr<true, void>();
        &field_448->unique_ptr<true, void>();
        &field_456->unique_ptr<true, void>();
        &field_464->unique_ptr<true, void>();
        &field_472->unique_ptr<true, void>();
        &field_480->unique_ptr<true, void>();
        &field_488->unique_ptr<true, void>();
        &field_496->unique_ptr<true, void>();
        &field_504->unique_ptr<true, void>();
        &field_512->unique_ptr<true, void>();
        &field_520->unique_ptr<true, void>();
        &field_528->unique_ptr<true, void>();
        &field_536->unique_ptr<true, void>();
        &field_544->unique_ptr<true, void>();
        &field_552->unique_ptr<true, void>();
        &field_560->unique_ptr<true, void>();
        uint8_t* local_58 = &field_568;
        uint8_t* local_1c8 = &field_184;
        new (local_58) Array<PacketT<Array<unsigned char>>>();
        uint8_t* local_50 = &field_592;
        new (local_50) Array<eastl::vector<PacketT<Array<unsigned char>>>>();
        uint8_t* local_48 = &field_616;
        new (local_48) Array<eastl::vector<PacketT<Array<unsigned char>>>>();
        new (&field_640) Array<eastl::vector<PacketT<Array<unsigned char>>>>();
        new (&field_664) eastl::vector_map<int, shared_ptr<graphics::AnimationStateMachineProvider>>();
        field_704.unique_ptr<true, void>();
        new (&field_712) eastl::vector<shared_ptr<ConfigProviderBatchInterface>>();
        field_744 = 0;
        field_748 = 0;
        field_752 = -1;
        field_760 = nullptr;
        BaseVarType::Initialise();
        ScriptVarType::Initialise();
        VarDomainType::Initialise();
    }

    // 0x100564de0
    ConfigProvider::~ConfigProvider() {
        field_8 = &PTR_GetVarPlayerTypeList_100f04828;
        BaseVarType::Destroy();
        ScriptVarType::Destroy();
        VarDomainType::Destroy();
        Destroy();
        field_712.~vector();
        field_704.~unique_ptr();
        field_664.~vector_map();
        field_640.~Array();
        field_616.~Array();
        field_592.~Array();
        field_568.~Array();
        field_560.~unique_ptr();
        field_552.~unique_ptr();
        field_544.~unique_ptr();
        field_536.~unique_ptr();
        field_528.~unique_ptr();
        field_520.~unique_ptr();
        field_512.~unique_ptr();
        field_504.~unique_ptr();
        field_184.~Array();
        field_160.~Array();
        field_104.~hash_map();
        field_56.~Array();
    }

    // 0x1005653c0
    void ConfigProvider::EnableServerSyncing() {
        field_760 = Create<>();
    }

    // 0x100565430
    void ConfigProvider::SetMembersServer(bool arg1) {
        NPCTypeList* pNVar1;

        if (field_40 != arg1) {
            field_40 = arg1;
            pNVar1 = (NPCTypeList*)field_304.operator->();
            pNVar1->SetMembersServer(arg1);
            pNVar1 = (NPCTypeList*)field_328.operator->();
            pNVar1->SetMembersServer(arg1);
            ((ObjTypeList*)field_336.operator->())->SetMembersServer(arg1);
        }
    }

    // 0x1005654f0
    uint8_t* ConfigProvider::GetVarType(VarDomainType* varDomainType, int arg2) const {
        BaseTemplateConfigTypeList<VarType>* this_00;
        unique_ptr<VarTypeList>* this_01;

        uint8_t* puVar1 = &NullVarType;
        if (field_96 == 4) {
            if (VarDomainType::PLAYER == varDomainType) {
                this_01 = (unique_ptr<VarTypeList>*)&field_440;
            } else if (VarDomainType::NPC == varDomainType) {
                this_01 = (unique_ptr<VarTypeList>*)&field_448;
            } else if (VarDomainType::CLIENT == varDomainType) {
                this_01 = (unique_ptr<VarTypeList>*)&field_456;
            } else if (VarDomainType::OBJECT == varDomainType) {
                this_01 = (unique_ptr<VarTypeList>*)&field_464;
            } else if (VarDomainType::CLAN == varDomainType) {
                this_01 = (unique_ptr<VarTypeList>*)&field_472;
            } else if (VarDomainType::CLAN_SETTING == varDomainType) {
                this_01 = (unique_ptr<VarTypeList>*)&field_480;
            } else {
                if (VarDomainType::PLAYER_GROUP != varDomainType) {
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/config/ConfigProvider.cpp",
                                    142, "ConfigProvider: Unsupported var domain type: %u",
                                    (unsigned long)varDomainType->field_8);
                }
                this_01 = (unique_ptr<VarTypeList>*)&field_488;
            }
            this_00 = (BaseTemplateConfigTypeList<VarType>*)(*this_01).operator->();
            puVar1 = (uint8_t*)this_00->List(arg2, nullptr);
        }
        return puVar1;
    }

    // 0x100565620
    uint8_t* ConfigProvider::GetVarBitType(int arg1) const {
        BaseTemplateConfigTypeList<VarBitType>* this_00;
        uint8_t* puVar1;

        if (field_96 == 4) {
            this_00 = (BaseTemplateConfigTypeList<VarBitType>*)field_496.operator->();
            puVar1 = (uint8_t*)this_00->List(arg1, nullptr);
        } else {
            puVar1 = &NullVarBitType;
        }
        return puVar1;
    }

    // 0x1005656a0
    void ConfigProvider::CacheReset() {
        unsigned long uVar2;
        long* plVar3;
        uint64_t* puVar4;
        unsigned long arg1;

        uint8_t* this_00 = &field_160;
        if (this_00->end() != 0) {
            arg1 = 0;
            do {
                plVar3 = (long*)(*this_00)[arg1];
                if (*plVar3 != 0) {
                    puVar4 = (uint64_t*)(*this_00)[arg1];
                    (**(void (**)(...))(*(long*)*puVar4 + 32))();
                }
                arg1 = arg1 + 1;
                uVar2 = this_00->end();
            } while (arg1 < uVar2);
        }
    }

    // 0x100565710
    void ConfigProvider::CheckLoaded(bool& arg1, bool arg2, const Js5ArchiveSettings& js5ArchiveSettings) {
        uint8_t uVar2;
        uint64_t extraout_var;
        uint32_t in_register_00000011;

        int arg1_00 = js5ArchiveSettings.GetX();
        DownloadWaitHandler* this_00 = (DownloadWaitHandler*)*field_704;
        if ((((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2) != 0) {
            this_00->SetExists(arg1_00);
        }
        if (!(this_00->CanCheck(arg1_00))) {
            if (!(this_00->IsComplete(arg1_00))) {
                arg1 = false;
            }
        } else {
            uVar2 = field_16->IndexReady();
            if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2) == DataStatus::READY) {
                this_00->Completed(arg1_00);
            } else {
                arg1 = false;
                this_00->Request(arg1_00);
            }
        }
    }

    // 0x1005657e0
    void ConfigProvider::MainLogic() {
        uint8_t* puVar1;
        long* plVar3;
        bool bVar4;
        bool cVar5;
        uint8_t uVar6;
        unsigned int uVar7;
        int iVar8;
        shared_ptr<ConfigProviderBatchInterface>* psVar9;
        long* plVar10;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        int* piVar11;
        ConfigTypeListContainerStrategy* pCVar12;
        uint64_t uVar13;
        ModeGame** ppMVar14;
        uint64_t extraout_var_01;
        uint64_t* puVar15;
        unsigned long uVar16;
        Logger* pLVar17;
        long* plVar18;
        long lVar19;
        unsigned long uVar20;
        uint64_t extraout_var_02;
        uint64_t extraout_var_03;
        uint64_t extraout_var_04;
        uint64_t extraout_var_05;
        uint64_t extraout_var_06;
        uint64_t extraout_var_07;
        uint64_t extraout_var_08;
        SeqGroupTypeList* seqGroupTypeList;
        unsigned int uVar21;
        vector<shared_ptr<ConfigProviderBatchInterface>> local_78;
        uint32_t local_58;
        ReturnValue local_50;
        ReturnValue local_48;
        ReturnValue local_38;

        Js5ResourceProvider** arg2 = &field_16;
        ConfigProvider* configProvider = (ConfigProvider*)field_16;
        uint8_t* puVar2 = &field_712;
        auto this_00 = puVar2->HeapBeginPtr();
        do {
            psVar9 = (shared_ptr<ConfigProviderBatchInterface>*)puVar2->end();
            if (this_00 == psVar9)
                break;
            plVar10 = (long*)**this_00;
            cVar5 = (**(void (**)(...))(*plVar10 + 16))(plVar10);
            if (!cVar5) {
                this_00 = this_00 + 16;
                bVar4 = true;
            } else {
                this_00 = (shared_ptr<ConfigProviderBatchInterface>*)puVar2->erase(this_00);
                cVar5 = puVar2->empty();
                bVar4 = true;
                if (cVar5) {
                    local_78 = eastl::vector<shared_ptr<ConfigProviderBatchInterface>>();
                    *puVar2 = local_78;
                    bVar4 = false;
                }
            }
        } while (bVar4);
        switch (field_96) {
        case 0:
            pLVar17 = logger::default_logger();
            pLVar17->Log(false, 8,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                         "ConfigProvider.cpp",
                         226, "ConfigProvider: Initialising Script/Interface loaders...");
            if (field_80 != false) {
                local_50 = (ReturnValue)&field_568;
                local_38 = (ReturnValue)this;
                make_shared<ConfigProviderMultiGroupSingleFileLoader, ConfigProvider*, Js5ResourceProvider*&,
                            Js5ArchiveSettings*&, Array<PacketT<Array<unsigned char>>>*>(
                    &local_48, (ConfigProvider**)&local_38, arg2, (Js5ArchiveSettings**)&Js5Archive::JS5_CLIENTSCRIPTS,
                    (Array<PacketT<Array<unsigned char> _>>**)&local_50);
                local_78.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_48);
                puVar2->push_back(local_78);
                local_50 = (ReturnValue)&field_592;
                local_38 = (ReturnValue)this;
                make_shared<ConfigProviderMultiGroupMultiFileLoader, ConfigProvider*, Js5ResourceProvider*&,
                            Js5ArchiveSettings*&, Array<eastl::vector<PacketT<Array<unsigned char>>>>*>(
                    &local_48, (ConfigProvider**)&local_38, arg2, (Js5ArchiveSettings**)&Js5Archive::JS5_INTERFACES,
                    (Array<eastl::vector<PacketT<Array<unsigned char> _>>>**)&local_50);
                local_78.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_48);
                puVar2->push_back(local_78);
                local_50 = (ReturnValue)&field_616;
                local_38 = (ReturnValue)this;
                make_shared<ConfigProviderMultiGroupMultiFileLoader, ConfigProvider*, Js5ResourceProvider*&,
                            Js5ArchiveSettings*&, Array<eastl::vector<PacketT<Array<unsigned char>>>>*>(
                    &local_48, (ConfigProvider**)&local_38, arg2, (Js5ArchiveSettings**)&Js5Archive::JS5_DBTABLEINDEX,
                    (Array<eastl::vector<PacketT<Array<unsigned char> _>>>**)&local_50);
                local_78.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_48);
                puVar2->push_back(local_78);
                local_50 = (ReturnValue)&field_640;
                local_38 = (ReturnValue)this;
                make_shared<ConfigProviderMultiGroupMultiFileLoader, ConfigProvider*, Js5ResourceProvider*&,
                            Js5ArchiveSettings*&, Array<eastl::vector<PacketT<Array<unsigned char>>>>*>(
                    &local_48, (ConfigProvider**)&local_38, arg2, (Js5ArchiveSettings**)&Js5Archive::JS5_QUICKCHAT,
                    (Array<eastl::vector<PacketT<Array<unsigned char> _>>>**)&local_50);
                local_78.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_48);
                puVar2->push_back(local_78);
                local_38 = (ReturnValue)this;
                make_shared<ConfigProviderMultiGroupSingleFileLoader, ConfigProvider*, Js5ResourceProvider*&,
                            Js5ArchiveSettings*&>(&local_48, (ConfigProvider**)&local_38, arg2,
                                                  (Js5ArchiveSettings**)&Js5Archive::JS5_STYLESHEETS);
                local_78.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_48);
                puVar2->push_back(local_78);
                local_38 = (ReturnValue)this;
                make_shared<ConfigProviderMultiGroupMultiFileLoader, ConfigProvider*, Js5ResourceProvider*&,
                            Js5ArchiveSettings*&>(&local_48, (ConfigProvider**)&local_38, arg2,
                                                  (Js5ArchiveSettings**)&Js5Archive::JS5_UI_ANIMATIONS);
                local_78.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_48);
                puVar2->push_back(local_78);
                local_38 = (ReturnValue)this;
                make_shared<ConfigProviderMultiGroupSingleFileLoader, ConfigProvider*, Js5ResourceProvider*&,
                            Js5ArchiveSettings*&>(&local_48, (ConfigProvider**)&local_38, arg2,
                                                  (Js5ArchiveSettings**)&Js5Archive::JS5_CUTSCENES2D);
                local_78.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_48);
                puVar2->push_back(local_78);
            }
            local_38 = (ReturnValue)this;
            make_shared<ConfigProviderMultiGroupSingleFileLoader, ConfigProvider*, Js5ResourceProvider*&,
                        Js5ArchiveSettings*&>(&local_48, (ConfigProvider**)&local_38, arg2,
                                              (Js5ArchiveSettings**)&Js5Archive::JS5_VFX);
            local_78.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_48);
            puVar2->push_back(local_78);
            local_38 = (ReturnValue)this;
            make_shared<ConfigProviderFontMetricsLoader, ConfigProvider*, Js5ResourceProvider*&, Js5ArchiveSettings*&>(
                &local_48, (ConfigProvider**)&local_38, arg2, (Js5ArchiveSettings**)&Js5Archive::JS5_FONTMETRICSRT7);
            local_78.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_48);
            puVar2->push_back(local_78);
            local_38 = (ReturnValue)this;
            make_shared<ConfigProviderAnimationStateMachineLoader, ConfigProvider*, Js5ResourceProvider*&,
                        Js5ArchiveSettings*&>(&local_48, (ConfigProvider**)&local_38, arg2,
                                              (Js5ArchiveSettings**)&Js5Archive::JS5_ANIMSTATEMACHINES);
            local_78.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_48);
            puVar2->push_back(local_78);
            local_38 = (ReturnValue)this;
            make_shared<ConfigProviderDefaultsLoader, ConfigProvider*, Js5ResourceProvider*&, Js5ArchiveSettings*&>(
                &local_48, (ConfigProvider**)&local_38, arg2, (Js5ArchiveSettings**)&Js5Archive::JS5_DEFAULTS);
            local_78.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_48);
            puVar2->push_back(local_78);
            iVar8 = puVar2->size();
            field_752 = iVar8;
            iVar8 = Js5ConfigGroup::GetMaximumConfigGroupID();
            uVar21 = 0;
            field_160.set_max_size((unsigned long)(iVar8 + 1), 0);
            Js5ConfigGroup::GetMaximumConfigGroupID();
            do {
                puVar15 = &field_160[(unsigned long)uVar21];
                *puVar15 = 0;
                uVar21 = uVar21 + 1;
                uVar7 = Js5ConfigGroup::GetMaximumConfigGroupID();
            } while (uVar21 <= uVar7);
            field_96 = 1;
            break;
        case 1:
            if ((field_92 == '\0') &&
                (uVar6 = configProvider->GetVarPlayerTypeList(&local_78),
                 (uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar6) == DataStatus::READY)) {
                PerformIndexDownload(*configProvider);
                field_92 = 1;
            }
            configProvider->GetDecoder();
            local_58 = (uint32_t)(((uint64_t)extraout_var_00 << 8) | (uint8_t)(local_48[0] != (ReturnValue)0));
            if (local_48[0] != (ReturnValue)0) {
                puVar2 = &field_344;
                cVar5 = puVar2->operator_cast_to_bool();
                if (!cVar5) {
                    iVar8 = ((CoordMapSquare*)Js5ConfigGroup::PARAMTYPE)->GetX();
                    piVar11 = &field_56[(long)iVar8];
                    if (*piVar11 != 0) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::PARAMTYPE)->GetX();
                        pCVar12 = &field_56[(long)iVar8];
                        local_38 = std::make_unique<ParamTypeList, ConfigTypeListContainerStrategy&, ModeGame const*&,
                                                    Language const*&, Js5ResourceProvider&>(*pCVar12, field_32,
                                                                                            field_24, *configProvider);
                        *puVar2 = &local_38;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::PARAMTYPE)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    }
                }
                puVar2 = &field_224;
                cVar5 = puVar2->operator_cast_to_bool();
                if (!cVar5) {
                    iVar8 = ((CoordMapSquare*)Js5ConfigGroup::DBROWTYPE)->GetX();
                    piVar11 = &field_56[(long)iVar8];
                    if (*piVar11 != 0) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::DBROWTYPE)->GetX();
                        pCVar12 = &field_56[(long)iVar8];
                        local_38 = std::make_unique<DBRowTypeList, ConfigTypeListContainerStrategy&, ModeGame const*&,
                                                    Language const*&, Js5ResourceProvider&>(*pCVar12, field_32,
                                                                                            field_24, *configProvider);
                        *puVar2 = &local_38;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::DBROWTYPE)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    }
                }
                puVar2 = &field_232;
                cVar5 = puVar2->operator_cast_to_bool();
                if (!cVar5) {
                    iVar8 = ((CoordMapSquare*)Js5ConfigGroup::DBTABLETYPE)->GetX();
                    piVar11 = &field_56[(long)iVar8];
                    if (*piVar11 != 0) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::DBTABLETYPE)->GetX();
                        pCVar12 = &field_56[(long)iVar8];
                        local_38 = std::make_unique<DBTableTypeList, ConfigTypeListContainerStrategy&, ModeGame const*&,
                                                    Language const*&, Js5ResourceProvider&>(*pCVar12, field_32,
                                                                                            field_24, *configProvider);
                        *puVar2 = &local_38;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::DBTABLETYPE)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    }
                }
                puVar2 = &field_296;
                cVar5 = puVar2->operator_cast_to_bool();
                if (!cVar5) {
                    iVar8 = ((CoordMapSquare*)Js5ConfigGroup::INVTYPE)->GetX();
                    piVar11 = &field_56[(long)iVar8];
                    if (*piVar11 != 0) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::INVTYPE)->GetX();
                        pCVar12 = &field_56[(long)iVar8];
                        local_38 = std::make_unique<InvTypeList, ConfigTypeListContainerStrategy&, ModeGame const*&,
                                                    Language const*&, Js5ResourceProvider&>(*pCVar12, field_32,
                                                                                            field_24, *configProvider);
                        *puVar2 = &local_38;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::INVTYPE)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    }
                }
                puVar2 = &field_496;
                cVar5 = puVar2->operator_cast_to_bool();
                if (!cVar5) {
                    iVar8 = ((CoordMapSquare*)Js5ConfigGroup::VAR_BIT)->GetX();
                    piVar11 = &field_56[(long)iVar8];
                    if (*piVar11 != 0) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::VAR_BIT)->GetX();
                        pCVar12 = &field_56[(long)iVar8];
                        local_38 = std::make_unique<VarBitTypeList, ConfigTypeListContainerStrategy&, ModeGame const*&,
                                                    Language const*&, Js5ResourceProvider&, ConfigProvider&>(
                            *pCVar12, field_32, field_24, *configProvider, *this);
                        *puVar2 = &local_38;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::VAR_BIT)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    }
                }
                puVar2 = &field_472;
                cVar5 = puVar2->operator_cast_to_bool();
                if (!cVar5) {
                    iVar8 = ((CoordMapSquare*)Js5ConfigGroup::VAR_CLAN)->GetX();
                    piVar11 = &field_56[(long)iVar8];
                    if (*piVar11 != 0) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::VAR_CLAN)->GetX();
                        ppMVar14 = &field_56[(long)iVar8];
                        std::make_unique<VarTypeList, ConfigTypeListContainerStrategy&, ModeGame const*&,
                                         Language const*&, Js5ResourceProvider&, Js5ConfigGroup const*&,
                                         VarDomainType*&>(local_38, *ppMVar14, field_32, field_24, *configProvider,
                                                          *((VarDomainType**)&Js5ConfigGroup::VAR_CLAN));
                        *puVar2 = &local_38;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::VAR_CLAN)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    }
                }
                puVar2 = &field_480;
                cVar5 = puVar2->operator_cast_to_bool();
                if (!cVar5) {
                    iVar8 = ((CoordMapSquare*)Js5ConfigGroup::VAR_CLAN)->GetX();
                    piVar11 = &field_56[(long)iVar8];
                    if (*piVar11 != 0) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::VAR_CLAN)->GetX();
                        ppMVar14 = &field_56[(long)iVar8];
                        std::make_unique<VarTypeList, ConfigTypeListContainerStrategy&, ModeGame const*&,
                                         Language const*&, Js5ResourceProvider&, Js5ConfigGroup const*&,
                                         VarDomainType*&>(local_38, *ppMVar14, field_32, field_24, *configProvider,
                                                          *((VarDomainType**)&Js5ConfigGroup::VAR_CLAN_SETTING));
                        *puVar2 = &local_38;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::VAR_CLAN_SETTING)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    }
                }
                puVar2 = &field_456;
                cVar5 = puVar2->operator_cast_to_bool();
                if (!cVar5) {
                    iVar8 = ((CoordMapSquare*)Js5ConfigGroup::VAR_CLIENT)->GetX();
                    piVar11 = &field_56[(long)iVar8];
                    if (*piVar11 != 0) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::VAR_CLIENT)->GetX();
                        ppMVar14 = &field_56[(long)iVar8];
                        std::make_unique<VarTypeList, ConfigTypeListContainerStrategy&, ModeGame const*&,
                                         Language const*&, Js5ResourceProvider&, Js5ConfigGroup const*&,
                                         VarDomainType*&>(local_38, *ppMVar14, field_32, field_24, *configProvider,
                                                          *((VarDomainType**)&Js5ConfigGroup::VAR_CLIENT));
                        *puVar2 = &local_38;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::VAR_CLIENT)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    }
                }
                puVar2 = &field_464;
                cVar5 = puVar2->operator_cast_to_bool();
                if (!cVar5) {
                    iVar8 = ((CoordMapSquare*)Js5ConfigGroup::VAR_OBJECT)->GetX();
                    piVar11 = &field_56[(long)iVar8];
                    if (*piVar11 != 0) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::VAR_OBJECT)->GetX();
                        ppMVar14 = &field_56[(long)iVar8];
                        std::make_unique<VarTypeList, ConfigTypeListContainerStrategy&, ModeGame const*&,
                                         Language const*&, Js5ResourceProvider&, Js5ConfigGroup const*&,
                                         VarDomainType*&>(local_38, *ppMVar14, field_32, field_24, *configProvider,
                                                          *((VarDomainType**)&Js5ConfigGroup::VAR_OBJECT));
                        *puVar2 = &local_38;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::VAR_OBJECT)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    }
                }
                puVar2 = &field_448;
                cVar5 = puVar2->operator_cast_to_bool();
                if (!cVar5) {
                    iVar8 = ((CoordMapSquare*)Js5ConfigGroup::VAR_NPC)->GetX();
                    piVar11 = &field_56[(long)iVar8];
                    if (*piVar11 != 0) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::VAR_NPC)->GetX();
                        ppMVar14 = &field_56[(long)iVar8];
                        std::make_unique<VarTypeList, ConfigTypeListContainerStrategy&, ModeGame const*&,
                                         Language const*&, Js5ResourceProvider&, Js5ConfigGroup const*&,
                                         VarDomainType*&>(local_38, *ppMVar14, field_32, field_24, *configProvider,
                                                          *((VarDomainType**)&Js5ConfigGroup::VAR_NPC));
                        *puVar2 = &local_38;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::VAR_NPC)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    }
                }
                puVar2 = &field_440;
                cVar5 = puVar2->operator_cast_to_bool();
                if (!cVar5) {
                    iVar8 = ((CoordMapSquare*)Js5ConfigGroup::VAR_PLAYER)->GetX();
                    piVar11 = &field_56[(long)iVar8];
                    if (*piVar11 != 0) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::VAR_PLAYER)->GetX();
                        ppMVar14 = &field_56[(long)iVar8];
                        std::make_unique<VarTypeList, ConfigTypeListContainerStrategy&, ModeGame const*&,
                                         Language const*&, Js5ResourceProvider&, Js5ConfigGroup const*&,
                                         VarDomainType*&>(local_38, *ppMVar14, field_32, field_24, *configProvider,
                                                          *((VarDomainType**)&Js5ConfigGroup::VAR_PLAYER));
                        *puVar2 = &local_38;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::VAR_PLAYER)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    }
                }
                puVar2 = &field_488;
                cVar5 = puVar2->operator_cast_to_bool();
                if (!cVar5) {
                    iVar8 = ((CoordMapSquare*)Js5ConfigGroup::VAR_PLAYER_GROUP)->GetX();
                    piVar11 = &field_56[(long)iVar8];
                    if (*piVar11 != 0) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::VAR_PLAYER_GROUP)->GetX();
                        ppMVar14 = &field_56[(long)iVar8];
                        std::make_unique<VarTypeList, ConfigTypeListContainerStrategy&, ModeGame const*&,
                                         Language const*&, Js5ResourceProvider&, Js5ConfigGroup const*&,
                                         VarDomainType*&>(local_38, *ppMVar14, field_32, field_24, *configProvider,
                                                          *((VarDomainType**)&Js5ConfigGroup::VAR_PLAYER_GROUP));
                        *puVar2 = &local_38;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::VAR_PLAYER_GROUP)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    }
                }
                puVar2 = &field_208;
                cVar5 = puVar2->operator_cast_to_bool();
                if (!cVar5) {
                    iVar8 = ((CoordMapSquare*)Js5ConfigGroup::BASTYPE)->GetX();
                    piVar11 = &field_56[(long)iVar8];
                    if (*piVar11 != 0) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::BASTYPE)->GetX();
                        pCVar12 = &field_56[(long)iVar8];
                        local_38 = std::make_unique<BASTypeList, ConfigTypeListContainerStrategy&, ModeGame const*&,
                                                    Language const*&, Js5ResourceProvider&>(*pCVar12, field_32,
                                                                                            field_24, *configProvider);
                        *puVar2 = &local_38;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::BASTYPE)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    }
                }
                puVar2 = &field_256;
                cVar5 = puVar2->operator_cast_to_bool();
                if (!cVar5) {
                    iVar8 = ((CoordMapSquare*)Js5ConfigGroup::FLUTYPE)->GetX();
                    piVar11 = &field_56[(long)iVar8];
                    if (*piVar11 != 0) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::FLUTYPE)->GetX();
                        pCVar12 = &field_56[(long)iVar8];
                        local_38 = std::make_unique<FloorUnderlayTypeList, ConfigTypeListContainerStrategy&,
                                                    ModeGame const*&, Language const*&, Js5ResourceProvider&>(
                            *pCVar12, field_32, field_24, *configProvider);
                        *puVar2 = &local_38;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::FLUTYPE)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    }
                }
                puVar2 = &field_248;
                cVar5 = puVar2->operator_cast_to_bool();
                if (!cVar5) {
                    iVar8 = ((CoordMapSquare*)Js5ConfigGroup::FLOTYPE)->GetX();
                    piVar11 = &field_56[(long)iVar8];
                    if (*piVar11 != 0) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::FLOTYPE)->GetX();
                        pCVar12 = &field_56[(long)iVar8];
                        local_38 = std::make_unique<FloorOverlayTypeList, ConfigTypeListContainerStrategy&,
                                                    ModeGame const*&, Language const*&, Js5ResourceProvider&>(
                            *pCVar12, field_32, field_24, *configProvider);
                        *puVar2 = &local_38;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::FLOTYPE)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    }
                }
                puVar2 = &field_280;
                cVar5 = puVar2->operator_cast_to_bool();
                if (!cVar5) {
                    iVar8 = ((CoordMapSquare*)Js5ConfigGroup::HITMARKTYPE)->GetX();
                    piVar11 = &field_56[(long)iVar8];
                    if (*piVar11 != 0) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::HITMARKTYPE)->GetX();
                        pCVar12 = &field_56[(long)iVar8];
                        local_38 = std::make_unique<HitmarkTypeList, ConfigTypeListContainerStrategy&, ModeGame const*&,
                                                    Language const*&, Js5ResourceProvider&>(*pCVar12, field_32,
                                                                                            field_24, *configProvider);
                        *puVar2 = &local_38;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::HITMARKTYPE)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    }
                }
                puVar2 = &field_272;
                cVar5 = puVar2->operator_cast_to_bool();
                if (!cVar5) {
                    iVar8 = ((CoordMapSquare*)Js5ConfigGroup::HEADBARTYPE)->GetX();
                    piVar11 = &field_56[(long)iVar8];
                    if (*piVar11 != 0) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::HEADBARTYPE)->GetX();
                        pCVar12 = &field_56[(long)iVar8];
                        local_38 = std::make_unique<HeadbarTypeList, ConfigTypeListContainerStrategy&, ModeGame const*&,
                                                    Language const*&, Js5ResourceProvider&>(*pCVar12, field_32,
                                                                                            field_24, *configProvider);
                        *puVar2 = &local_38;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::HEADBARTYPE)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    }
                }
                puVar2 = &field_288;
                cVar5 = puVar2->operator_cast_to_bool();
                if (!cVar5) {
                    iVar8 = ((CoordMapSquare*)Js5ConfigGroup::IDKTYPE)->GetX();
                    piVar11 = &field_56[(long)iVar8];
                    if (*piVar11 != 0) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::IDKTYPE)->GetX();
                        pCVar12 = &field_56[(long)iVar8];
                        local_38 = std::make_unique<IDKTypeList, ConfigTypeListContainerStrategy&, ModeGame const*&,
                                                    Language const*&, Js5ResourceProvider&>(*pCVar12, field_32,
                                                                                            field_24, *configProvider);
                        *puVar2 = &local_38;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::IDKTYPE)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    }
                }
                puVar2 = &field_312;
                cVar5 = puVar2->operator_cast_to_bool();
                if (!cVar5) {
                    iVar8 = ((CoordMapSquare*)Js5ConfigGroup::MELTYPE)->GetX();
                    piVar11 = &field_56[(long)iVar8];
                    if (*piVar11 != 0) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::MELTYPE)->GetX();
                        pCVar12 = &field_56[(long)iVar8];
                        local_38 = std::make_unique<MapElementTypeList, ConfigTypeListContainerStrategy&,
                                                    ModeGame const*&, Language const*&, Js5ResourceProvider&>(
                            *pCVar12, field_32, field_24, *configProvider);
                        *puVar2 = &local_38;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::MELTYPE)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    }
                }
                puVar2 = &field_320;
                cVar5 = puVar2->operator_cast_to_bool();
                if (!cVar5) {
                    iVar8 = ((CoordMapSquare*)Js5ConfigGroup::MSITYPE)->GetX();
                    piVar11 = &field_56[(long)iVar8];
                    if (*piVar11 != 0) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::MSITYPE)->GetX();
                        pCVar12 = &field_56[(long)iVar8];
                        local_38 = std::make_unique<MSITypeList, ConfigTypeListContainerStrategy&, ModeGame const*&,
                                                    Language const*&, Js5ResourceProvider&>(*pCVar12, field_32,
                                                                                            field_24, *configProvider);
                        *puVar2 = &local_38;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::MSITYPE)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    }
                }
                puVar2 = &field_352;
                cVar5 = puVar2->operator_cast_to_bool();
                if (!cVar5) {
                    iVar8 = ((CoordMapSquare*)Js5ConfigGroup::QUESTTYPE)->GetX();
                    piVar11 = &field_56[(long)iVar8];
                    if (*piVar11 != 0) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::QUESTTYPE)->GetX();
                        pCVar12 = &field_56[(long)iVar8];
                        local_38 = std::make_unique<QuestTypeList, ConfigTypeListContainerStrategy&, ModeGame const*&,
                                                    Language const*&, Js5ResourceProvider&, ConfigProvider&>(
                            *pCVar12, field_32, field_24, *configProvider, *this);
                        *puVar2 = &local_38;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::QUESTTYPE)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    }
                }
                puVar2 = &field_376;
                cVar5 = puVar2->operator_cast_to_bool();
                if (!cVar5) {
                    iVar8 = ((CoordMapSquare*)Js5ConfigGroup::SEQGROUPTYPE)->GetX();
                    piVar11 = &field_56[(long)iVar8];
                    if (*piVar11 != 0) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::SEQGROUPTYPE)->GetX();
                        pCVar12 = &field_56[(long)iVar8];
                        local_38 = std::make_unique<SeqGroupTypeList, ConfigTypeListContainerStrategy&,
                                                    ModeGame const*&, Language const*&, Js5ResourceProvider&>(
                            *pCVar12, field_32, field_24, *configProvider);
                        *puVar2 = &local_38;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::SEQGROUPTYPE)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    }
                }
                puVar2 = &field_424;
                cVar5 = puVar2->operator_cast_to_bool();
                if (!cVar5) {
                    iVar8 = ((CoordMapSquare*)Js5ConfigGroup::LIGHTTYPE)->GetX();
                    piVar11 = &field_56[(long)iVar8];
                    if (*piVar11 != 0) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::LIGHTTYPE)->GetX();
                        pCVar12 = &field_56[(long)iVar8];
                        local_38 = std::make_unique<LightTypeList, ConfigTypeListContainerStrategy&, ModeGame const*&,
                                                    Language const*&, Js5ResourceProvider&>(*pCVar12, field_32,
                                                                                            field_24, *configProvider);
                        *puVar2 = &local_38;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::LIGHTTYPE)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    }
                }
                puVar2 = &field_392;
                cVar5 = puVar2->operator_cast_to_bool();
                if (!cVar5) {
                    iVar8 = ((CoordMapSquare*)Js5ConfigGroup::SKYBOXTYPE)->GetX();
                    piVar11 = &field_56[(long)iVar8];
                    if (*piVar11 != 0) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::SKYBOXTYPE)->GetX();
                        pCVar12 = &field_56[(long)iVar8];
                        local_38 = std::make_unique<SkyBoxTypeList, ConfigTypeListContainerStrategy&, ModeGame const*&,
                                                    Language const*&, Js5ResourceProvider&>(*pCVar12, field_32,
                                                                                            field_24, *configProvider);
                        *puVar2 = &local_38;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::SKYBOXTYPE)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    }
                }
                puVar2 = &field_408;
                cVar5 = puVar2->operator_cast_to_bool();
                if (!cVar5) {
                    iVar8 = ((CoordMapSquare*)Js5ConfigGroup::WATERTYPE)->GetX();
                    piVar11 = &field_56[(long)iVar8];
                    if (*piVar11 != 0) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::WATERTYPE)->GetX();
                        pCVar12 = &field_56[(long)iVar8];
                        local_38 = std::make_unique<WaterTypeList, ConfigTypeListContainerStrategy&, ModeGame const*&,
                                                    Language const*&, Js5ResourceProvider&>(*pCVar12, field_32,
                                                                                            field_24, *configProvider);
                        *puVar2 = &local_38;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::WATERTYPE)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    }
                }
                puVar2 = &field_216;
                cVar5 = puVar2->operator_cast_to_bool();
                if (!cVar5) {
                    iVar8 = ((CoordMapSquare*)Js5ConfigGroup::CURSORTYPE)->GetX();
                    piVar11 = &field_56[(long)iVar8];
                    if (*piVar11 != 0) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::CURSORTYPE)->GetX();
                        pCVar12 = &field_56[(long)iVar8];
                        local_38 = std::make_unique<CursorTypeList, ConfigTypeListContainerStrategy&, ModeGame const*&,
                                                    Language const*&, Js5ResourceProvider&>(*pCVar12, field_32,
                                                                                            field_24, *configProvider);
                        *puVar2 = &local_38;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::CURSORTYPE)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    }
                }
                puVar2 = &field_416;
                cVar5 = puVar2->operator_cast_to_bool();
                if (!cVar5) {
                    puVar1 = &field_56;
                    iVar8 = ((CoordMapSquare*)Js5ConfigGroup::WORLDAREATYPE)->GetX();
                    piVar11 = (int*)(*puVar1)[(long)iVar8];
                    if (*piVar11 != 0) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::WORLDAREATYPE)->GetX();
                        piVar11 = (int*)(*puVar1)[(long)iVar8];
                        if (*piVar11 != 3) {
                            LogAssert("m_configGroupsToLoad[Js5ConfigGroup::WORLDAREATYPE->GetGroupID()] == "
                                      "ConfigTypeListContainerStrategy::PRELOAD_ALL",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/config/ConfigProvider.cpp",
                                      460, "Only the PRELOAD_ALL strategy is supported for WorldAreaTypeList");
                        }
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::WORLDAREATYPE)->GetX();
                        pCVar12 = (ConfigTypeListContainerStrategy*)(*puVar1)[(long)iVar8];
                        local_38 = std::make_unique<WorldAreaTypeList, ConfigTypeListContainerStrategy&,
                                                    ModeGame const*&, Language const*&, Js5ResourceProvider&>(
                            *pCVar12, field_32, field_24, *configProvider);
                        *puVar2 = &local_38;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::WORLDAREATYPE)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    }
                }
            }
            puVar2 = &field_264;
            cVar5 = puVar2->operator_cast_to_bool();
            if (!cVar5) {
                iVar8 = ((CoordMapSquare*)Js5ConfigGroup::ENUMTYPE)->GetX();
                piVar11 = &field_56[(long)iVar8];
                if (*piVar11 != 0) {
                    uVar6 = configProvider->GetDecoder();
                    if ((uint8_t*)(((uint64_t)extraout_var_01 << 8) | (uint8_t)uVar6) == DataStatus::READY) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::ENUMTYPE)->GetX();
                        pCVar12 = &field_56[(long)iVar8];
                        local_50 = std::make_unique<EnumTypeList, ConfigTypeListContainerStrategy&, ModeGame const*&,
                                                    Language const*&, Js5ResourceProvider&>(*pCVar12, field_32,
                                                                                            field_24, *configProvider);
                        *puVar2 = &local_50;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::ENUMTYPE)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    } else {
                        local_58 = 0;
                    }
                }
            }
            puVar2 = &field_336;
            cVar5 = puVar2->operator_cast_to_bool();
            if (!cVar5) {
                iVar8 = ((CoordMapSquare*)Js5ConfigGroup::OBJTYPE)->GetX();
                piVar11 = &field_56[(long)iVar8];
                if (*piVar11 != 0) {
                    uVar6 = configProvider->GetDecoder();
                    if ((uint8_t*)(((uint64_t)extraout_var_02 << 8) | (uint8_t)uVar6) == DataStatus::READY) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::OBJTYPE)->GetX();
                        ppMVar14 = &field_56[(long)iVar8];
                        std::make_unique<ObjTypeList, ConfigTypeListContainerStrategy&, ModeGame const*&,
                                         Language const*&, Js5ResourceProvider&, ConfigProvider&, bool&>(
                            local_50, *ppMVar14, field_32, field_24, *configProvider, *this);
                        *puVar2 = &local_50;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::OBJTYPE)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    } else {
                        local_58 = 0;
                    }
                }
            }
            cVar5 = (&field_360)->operator_cast_to_bool();
            if (!cVar5) {
                local_38 = std::make_unique<QuickChatCatTypeList, Array<eastl::vector<PacketT<Array<unsigned char>>>>&>(
                    field_640);
                field_360 = &local_38;
            }
            cVar5 = (&field_368)->operator_cast_to_bool();
            if (!cVar5) {
                local_38 =
                    std::make_unique<QuickChatPhraseTypeList, Array<eastl::vector<PacketT<Array<unsigned char>>>>&>(
                        field_640);
                field_368 = &local_38;
            }
            puVar2 = &field_240;
            cVar5 = puVar2->operator_cast_to_bool();
            if (!cVar5) {
                iVar8 = ((CoordMapSquare*)Js5ConfigGroup::SPOTTYPE)->GetX();
                piVar11 = &field_56[(long)iVar8];
                if (*piVar11 != 0) {
                    uVar6 = configProvider->GetDecoder();
                    if ((uint8_t*)(((uint64_t)extraout_var_03 << 8) | (uint8_t)uVar6) == DataStatus::READY) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::SPOTTYPE)->GetX();
                        pCVar12 = &field_56[(long)iVar8];
                        local_50 = std::make_unique<EffectAnimTypeList, ConfigTypeListContainerStrategy&,
                                                    ModeGame const*&, Language const*&, Js5ResourceProvider&>(
                            *pCVar12, field_32, field_24, *configProvider);
                        *puVar2 = &local_50;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::SPOTTYPE)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    } else {
                        local_58 = 0;
                    }
                }
            }
            puVar2 = &field_304;
            cVar5 = puVar2->operator_cast_to_bool();
            if (!cVar5) {
                iVar8 = ((CoordMapSquare*)Js5ConfigGroup::LOCTYPE)->GetX();
                piVar11 = &field_56[(long)iVar8];
                if (*piVar11 != 0) {
                    uVar6 = configProvider->GetDecoder();
                    if ((uint8_t*)(((uint64_t)extraout_var_04 << 8) | (uint8_t)uVar6) == DataStatus::READY) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::LOCTYPE)->GetX();
                        pCVar12 = &field_56[(long)iVar8];
                        local_50 = std::make_unique<LocTypeList, ConfigTypeListContainerStrategy&, ModeGame const*&,
                                                    Language const*&, Js5ResourceProvider&, bool&>(
                            *pCVar12, field_32, field_24, *configProvider, field_40);
                        *puVar2 = &local_50;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::LOCTYPE)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    } else {
                        local_58 = 0;
                    }
                }
            }
            puVar2 = &field_328;
            cVar5 = puVar2->operator_cast_to_bool();
            if (!cVar5) {
                iVar8 = ((CoordMapSquare*)Js5ConfigGroup::NPCTYPE)->GetX();
                piVar11 = &field_56[(long)iVar8];
                if (*piVar11 != 0) {
                    uVar6 = configProvider->GetDecoder();
                    if ((uint8_t*)(((uint64_t)extraout_var_05 << 8) | (uint8_t)uVar6) == DataStatus::READY) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::NPCTYPE)->GetX();
                        pCVar12 = &field_56[(long)iVar8];
                        local_50 = std::make_unique<NPCTypeList, ConfigTypeListContainerStrategy&, ModeGame const*&,
                                                    Language const*&, Js5ResourceProvider&, bool&>(
                            *pCVar12, field_32, field_24, *configProvider, field_40);
                        *puVar2 = &local_50;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::NPCTYPE)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    } else {
                        local_58 = 0;
                    }
                }
            }
            puVar2 = &field_384;
            cVar5 = puVar2->operator_cast_to_bool();
            if (!cVar5) {
                iVar8 = ((CoordMapSquare*)Js5ConfigGroup::SEQTYPE)->GetX();
                piVar11 = &field_56[(long)iVar8];
                if (*piVar11 != 0) {
                    cVar5 = (&field_376)->operator_cast_to_bool();
                    if ((!cVar5) ||
                        (uVar6 = configProvider->GetDecoder(),
                         (uint8_t*)(((uint64_t)extraout_var_06 << 8) | (uint8_t)uVar6) != DataStatus::READY)) {
                        local_58 = 0;
                    } else {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::SEQTYPE)->GetX();
                        pCVar12 = &field_56[(long)iVar8];
                        seqGroupTypeList = (SeqGroupTypeList*)field_376.get();
                        local_50 = std::make_unique<SeqTypeList, ConfigTypeListContainerStrategy&, ModeGame const*&,
                                                    Language const*&, Js5ResourceProvider&, SeqGroupTypeList&>(
                            *pCVar12, field_32, field_24, *configProvider, *seqGroupTypeList);
                        *puVar2 = &local_50;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::SEQTYPE)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    }
                }
            }
            puVar2 = &field_400;
            cVar5 = puVar2->operator_cast_to_bool();
            if (!cVar5) {
                iVar8 = ((CoordMapSquare*)Js5ConfigGroup::STRUCTTYPE)->GetX();
                piVar11 = &field_56[(long)iVar8];
                if (*piVar11 != 0) {
                    uVar6 = configProvider->GetDecoder();
                    if ((uint8_t*)(((uint64_t)extraout_var_07 << 8) | (uint8_t)uVar6) == DataStatus::READY) {
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::STRUCTTYPE)->GetX();
                        pCVar12 = &field_56[(long)iVar8];
                        local_50 = std::make_unique<StructTypeList, ConfigTypeListContainerStrategy&, ModeGame const*&,
                                                    Language const*&, Js5ResourceProvider&>(*pCVar12, field_32,
                                                                                            field_24, *configProvider);
                        *puVar2 = &local_50;
                        uVar13 = puVar2->get();
                        iVar8 = ((CoordMapSquare*)Js5ConfigGroup::STRUCTTYPE)->GetX();
                        puVar15 = &field_160[(long)iVar8];
                        *puVar15 = uVar13;
                    } else {
                        local_58 = 0;
                    }
                }
            }
            puVar2 = &field_432;
            cVar5 = puVar2->operator_cast_to_bool();
            if (!cVar5) {
                iVar8 = ((CoordMapSquare*)Js5ConfigGroup::ACHIEVEMENTTYPE)->GetX();
                piVar11 = &field_56[(long)iVar8];
                if (*piVar11 == 0)
                    goto LAB_1005678d5;
                local_38 = (ReturnValue)0;
                uVar6 = configProvider->GetDecoder();
                if ((uint8_t*)(((uint64_t)extraout_var_08 << 8) | (uint8_t)uVar6) == DataStatus::READY) {
                    iVar8 = ((CoordMapSquare*)Js5ConfigGroup::ACHIEVEMENTTYPE)->GetX();
                    pCVar12 = &field_56[(long)iVar8];
                    local_50 = std::make_unique<AchievementTypeList, ConfigTypeListContainerStrategy&, ModeGame const*&,
                                                Language const*&, Js5ResourceProvider&, ConfigProvider&>(
                        *pCVar12, field_32, field_24, *configProvider, *this);
                    *puVar2 = &local_50;
                    uVar13 = puVar2->get();
                    iVar8 = ((CoordMapSquare*)Js5ConfigGroup::ACHIEVEMENTTYPE)->GetX();
                    puVar15 = &field_160[(long)iVar8];
                    *puVar15 = uVar13;
                    goto LAB_1005678d5;
                }
                local_58._0_1_ = '\0';
            } else {
            LAB_1005678d5:
            }
            if ((char)local_58 != '\0') {
                field_96 = 2;
            }
            break;
        case 2:
            puVar2 = &field_184;
            puVar1 = &field_160;
            uVar20 = puVar1->end();
            puVar2->set_max_size(uVar20, 0);
            lVar19 = puVar1->end();
            if (lVar19 != 0) {
                uVar21 = 1;
                uVar20 = 0;
                do {
                    puVar15 = (uint64_t*)(*puVar1)[uVar20];
                    uVar13 = *puVar15;
                    puVar15 = (uint64_t*)(*puVar2)[uVar20];
                    *puVar15 = uVar13;
                    uVar20 = (unsigned long)uVar21;
                    uVar16 = puVar1->end();
                    uVar21 = uVar21 + 1;
                } while (uVar20 < uVar16);
            }
            cVar5 = puVar2->empty();
            if ((!cVar5) && (lVar19 = puVar2->end(), lVar19 != 0)) {
                uVar21 = 1;
                uVar20 = 0;
                do {
                    puVar15 = (uint64_t*)(*puVar2)[uVar20];
                    if ((BaseConfigTypeList*)*puVar15 != nullptr) {
                        iVar8 = (*puVar15)->GetProgressTarget();
                        field_84 = field_84 + iVar8;
                    }
                    uVar20 = (unsigned long)uVar21;
                    uVar16 = puVar2->end();
                    uVar21 = uVar21 + 1;
                } while (uVar20 < uVar16);
            }
            pLVar17 = logger::default_logger();
            pLVar17->Log(false, 8,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                         "ConfigProvider.cpp",
                         641, "ConfigProvider: Prepared configuration listings!");
            field_96 = 3;
            break;
        case 3:
            cVar5 = PerformIndexDownload(*configProvider);
            if ((cVar5) && (cVar5 = puVar2->empty(), cVar5)) {
                pLVar17 = logger::default_logger();
                pLVar17->Log(false, 8,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                             "config/ConfigProvider.cpp",
                             648, "ConfigProvider: Finished Checking Indexes...");
                field_96 = 4;
            }
            break;
        case 4:
            puVar2 = &field_184;
            cVar5 = puVar2->empty();
            if (!cVar5) {
                field_88 = 0;
                lVar19 = puVar2->end();
                if (lVar19 != 0) {
                    uVar20 = 0;
                    uVar16 = 1;
                    do {
                        plVar10 = (long*)(*puVar2)[uVar20];
                        plVar10 = (long*)*plVar10;
                        if (plVar10 != nullptr) {
                            (**(void (**)(...))(*plVar10 + 48))(plVar10);
                        }
                        uVar20 = puVar2->end();
                        bVar4 = uVar16 < uVar20;
                        uVar20 = uVar16;
                        uVar16 = (unsigned long)((int)uVar16 + 1);
                    } while (bVar4);
                }
                puVar2->clear();
            } else {
                plVar10 = (long*)field_160.data();
                plVar18 = (long*)field_160.end();
                for (; plVar10 != plVar18; plVar10 = plVar10 + 1) {
                    plVar3 = (long*)*plVar10;
                    if (plVar3 != nullptr) {
                        (**(void (**)(...))(*plVar3 + 40))(plVar3, 2000);
                    }
                }
            }
        }
    }

    // 0x100568200
    bool ConfigProvider::PerformIndexDownload(Js5ResourceProvider& js5ResourceProvider) {
        uint8_t uVar2;
        uint64_t extraout_var;
        ReturnValue local_40;
        CoordMapSquare* local_38;
        unsigned int local_30;

        (logger::default_logger())
            ->Log(true, 8,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                  "ConfigProvider.cpp",
                  767, "ConfigProvider: Starting Preload");
        bool local_29 = true;
        uint8_t bVar1 = (&field_704)->operator_cast_to_bool();
        if (bVar1 == 0) {
            uVar2 = (js5ResourceProvider._vptr->GetMasterIndex)((Js5MasterIndex**)js5ResourceProvider);
            if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2) != DataStatus::READY) {
                return false;
            }
            local_30 = local_38->GetX() + 1;
            local_40 = std::make_unique<DownloadWaitHandler, unsigned int>(local_30);
            field_704 = local_40;
        }
        bool arg2 = (bool)(bVar1 ^ 1);
        CheckLoaded(local_29, arg2, *(Js5Archive::JS5_CONFIG));
        CheckLoaded(local_29, arg2, *(Js5Archive::JS5_CONFIG_ACHIEVEMENT));
        CheckLoaded(local_29, arg2, *(Js5Archive::JS5_CONFIG_LOC));
        CheckLoaded(local_29, arg2, *(Js5Archive::JS5_CONFIG_ENUM));
        CheckLoaded(local_29, arg2, *(Js5Archive::JS5_CONFIG_NPC));
        CheckLoaded(local_29, arg2, *(Js5Archive::JS5_CONFIG_OBJ));
        CheckLoaded(local_29, arg2, *(Js5Archive::JS5_CONFIG_SEQ));
        CheckLoaded(local_29, arg2, *(Js5Archive::JS5_CONFIG_SPOT));
        CheckLoaded(local_29, arg2, *(Js5Archive::JS5_CONFIG_STRUCT));
        CheckLoaded(local_29, arg2, *(Js5Archive::JS5_DEFAULTS));
        CheckLoaded(local_29, arg2, *(Js5Archive::JS5_FONTMETRICS));
        CheckLoaded(local_29, arg2, *(Js5Archive::JS5_FONTMETRICSRT7));
        CheckLoaded(local_29, arg2, *(Js5Archive::JS5_TRUETYPEFONTS));
        if (field_80 != false) {
            CheckLoaded(local_29, arg2, *(Js5Archive::JS5_CLIENTSCRIPTS));
            CheckLoaded(local_29, arg2, *(Js5Archive::JS5_INTERFACES));
            CheckLoaded(local_29, arg2, *(Js5Archive::JS5_SPRITES));
            CheckLoaded(local_29, arg2, *(Js5Archive::JS5_QUICKCHAT));
            CheckLoaded(local_29, arg2, *(Js5Archive::JS5_CONFIG_PARTICLE));
            CheckLoaded(local_29, arg2, *(Js5Archive::JS5_CONFIG_BILLBOARD));
            CheckLoaded(local_29, arg2, *(Js5Archive::JS5_MATERIALS));
            if (Version::ConnectedServerMeetsVersion(928) != '\0') {
                CheckLoaded(local_29, arg2, *(Js5Archive::JS5_UI_ANIMATIONS));
            }
        }
        return local_29 != false;
    }

    // 0x10056a0d0
    uint64_t ConfigProvider::GetPreloadProgress() const {
        uint8_t* this_00;
        int iVar2;
        unsigned int uVar3;
        long* plVar4;
        unsigned int uVar5;
        int iVar6;
        float fVar7;
        uint32_t extraout_XMM0_Db;
        uint32_t uVar8;
        uint32_t extraout_XMM0_Db_00;

        switch (field_96) {
        case 0:
            goto switchD_10056a0f5_caseD_0;
        case 1:
        case 2:
            this_00 = &field_160;
            if (!(this_00->empty())) {
                iVar2 = this_00->end();
                Js5ConfigGroup::GetMaximumConfigGroupID();
                uVar5 = 0;
                iVar6 = 0;
                do {
                    plVar4 = (long*)(*this_00)[(unsigned long)uVar5];
                    iVar6 = (iVar6 + 1) - (unsigned int)(*plVar4 == 0);
                    uVar5 = uVar5 + 1;
                    uVar3 = Js5ConfigGroup::GetMaximumConfigGroupID();
                } while (uVar5 <= uVar3);
                fVar7 = ((float)iVar6 * 10.0) / (float)iVar2 + 1.0;
                uVar8 = extraout_XMM0_Db_00;
                goto LAB_10056a22d;
            }
        switchD_10056a0f5_caseD_0:
            fVar7 = 1.0;
            uVar8 = 0;
            if (field_752 != 0)
                goto LAB_10056a22d;
            goto LAB_10056a208;
        case 3:
            fVar7 = 11.0;
            iVar2 = field_752;
        joined_r0x00010056a149:
            uVar8 = 0;
            break;
        case 4:
            if (field_184.empty()) {
                fVar7 = 45.0;
                iVar2 = field_752;
                goto joined_r0x00010056a149;
            }
            fVar7 = ((float)field_88 * 34.0) / (float)field_84 + 11.0;
            iVar2 = field_752;
            uVar8 = extraout_XMM0_Db;
            break;
        default:
            fVar7 = 0.0;
            uVar8 = 0;
            iVar2 = field_752;
        }
        if (iVar2 == 0) {
        LAB_10056a208:
            fVar7 = fVar7 + ((float)field_748 * 30.0) / (float)field_744;
        }
    LAB_10056a22d:
        return (((uint64_t)uVar8 << 32) | (uint32_t)fVar7);
    }

    // 0x10056a300
    void ConfigProvider::Reload() {
        void* in_RSI;

        field_96 = 0;
        field_744 = 0;
        field_748 = 0;
        field_84 = 0;
        field_88 = 0;
        field_184.clear();
        field_432 = in_RSI;
        field_208 = in_RSI;
        field_216 = in_RSI;
        field_224 = in_RSI;
        field_232 = in_RSI;
        field_240 = in_RSI;
        field_248 = in_RSI;
        field_256 = in_RSI;
        field_264 = in_RSI;
        field_272 = in_RSI;
        field_280 = in_RSI;
        field_288 = in_RSI;
        field_296 = in_RSI;
        field_424 = in_RSI;
        field_304 = in_RSI;
        field_312 = in_RSI;
        field_320 = in_RSI;
        field_328 = in_RSI;
        field_336 = in_RSI;
        field_344 = in_RSI;
        field_352 = in_RSI;
        field_360 = in_RSI;
        field_368 = in_RSI;
        field_376 = in_RSI;
        field_384 = in_RSI;
        field_392 = in_RSI;
        field_400 = in_RSI;
        field_408 = in_RSI;
        field_416 = in_RSI;
        field_440 = in_RSI;
        field_448 = in_RSI;
        field_456 = in_RSI;
        field_464 = in_RSI;
        field_472 = in_RSI;
        field_480 = in_RSI;
        field_488 = in_RSI;
        field_496 = in_RSI;
    }

    // 0x10056a6f0
    void ConfigProvider::DumpUsage() {
        BaseConfigTypeList* this_00;
        long lVar3;
        Logger* pLVar4;
        Js5ConfigGroup* in_RSI;
        int iVar5;
        char* str2;

        auto puVar1 = field_160.data();
        auto puVar2 = field_160.end();
        do {
            if (puVar1 == puVar2) {
                return;
            }
            this_00 = (BaseConfigTypeList*)*puVar1;
            if ((this_00 != nullptr) &&
                ((*(int*)(this_00->field_8 + 8) != 0 || (*(int*)(this_00->field_8 + 16) != 0)))) {
                lVar3 = ((Js5ConfigGroup*)this_00->GetConfigGroup())->GetTypeName(in_RSI);
                if (lVar3 == 0) {
                    LogAssert("archive",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigProvider.cpp",
                              888, nullptr);
                }
                if (*(int*)(this_00->field_8 + 12) == 0) {
                    iVar5 = *(int*)(this_00->field_8 + 20);
                    pLVar4 = logger::default_logger();
                    if (iVar5 == 0) {
                        iVar5 = 900;
                        str2 = "%s: %d misses, %d LRU hits";
                    } else {
                        iVar5 = 896;
                        str2 = "%s: %d misses, %d LRU hits, %d misses for loading";
                    }
                    in_RSI = nullptr;
                    pLVar4->Log(false, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.cpp",
                                iVar5, str2, lVar3, (unsigned long)*(unsigned int*)(this_00->field_8 + 16),
                                (unsigned long)*(unsigned int*)(this_00->field_8 + 8));
                } else {
                    pLVar4 = logger::default_logger();
                    in_RSI = nullptr;
                    pLVar4->Log(false, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.cpp",
                                892, "%s: %d misses, %d LRU hits, %d weak hits", lVar3,
                                (unsigned long)*(unsigned int*)(this_00->field_8 + 16),
                                (unsigned long)*(unsigned int*)(this_00->field_8 + 8),
                                (unsigned long)*(unsigned int*)(this_00->field_8 + 12));
                }
            }
            puVar1 = puVar1 + 1;
        } while (true);
    }

    // 0x10056a880
    void ConfigProvider::ResetUsage() {
        long lVar1;
        AABB local_38;

        auto plVar2 = field_160.data();
        auto plVar3 = field_160.end();
        if (plVar2 != plVar3) {
            do {
                if (*plVar2 != 0) {
                    local_38.field_0 = 0;
                    local_38.field_4 = 0;
                    local_38.field_8 = 0;
                    local_38.field_12 = 0;
                    local_38.field_16 = 0;
                    local_38.field_20 = 0;
                    local_38 = oldscape::dash3d::ModelLit::AABB();
                    lVar1 = *plVar2;
                    *(uint64_t*)(lVar1 + 24) = local_38._16_8_;
                    *(uint32_t*)(lVar1 + 8) = local_38.field_0;
                    *(uint32_t*)(lVar1 + 12) = local_38.field_4;
                    *(uint32_t*)(lVar1 + 16) = local_38.field_8;
                    *(uint32_t*)(lVar1 + 20) = local_38.field_12;
                }
                plVar2 = plVar2 + 1;
            } while (plVar2 != plVar3);
        }
    }

} // namespace jag::game
