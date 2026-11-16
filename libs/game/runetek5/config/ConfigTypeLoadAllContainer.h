// libs/game/runetek5/config/ConfigTypeLoadAllContainer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    template <typename...> // 30 instantiations, e.g. <AchievementType>, <BASType>, <CursorType>
    class ConfigTypeLoadAllContainer {
    public:
        // virtual methods in vtable order
        virtual ~ConfigTypeLoadAllContainer();
        virtual LoadList();
        virtual List(int, DataStatus const**);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>&,
                                   Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*,
                                   unsigned int);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<VarType>&, Js5ResourceProvider&,
                                   Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<SeqType>&, Js5ResourceProvider&,
                                   Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<ObjType>&, Js5ResourceProvider&,
                                   Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<NPCType>&, Js5ResourceProvider&,
                                   Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<LocType>&, Js5ResourceProvider&,
                                   Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<ParamType>&, Js5ResourceProvider&,
                                   Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<DBRowType>&, Js5ResourceProvider&,
                                   Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<DBTableType>&, Js5ResourceProvider&,
                                   Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<InvType>&, Js5ResourceProvider&,
                                   Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<VarBitType>&, Js5ResourceProvider&,
                                   Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<BASType>&, Js5ResourceProvider&,
                                   Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<FloorUnderlayType>&, Js5ResourceProvider&,
                                   Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<FloorOverlayType>&, Js5ResourceProvider&,
                                   Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<HitmarkType>&, Js5ResourceProvider&,
                                   Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<HeadbarType>&, Js5ResourceProvider&,
                                   Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<IDKType>&, Js5ResourceProvider&,
                                   Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<MapElementType>&, Js5ResourceProvider&,
                                   Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<MSIType>&, Js5ResourceProvider&,
                                   Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<QuestType>&, Js5ResourceProvider&,
                                   Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<SeqGroupType>&, Js5ResourceProvider&,
                                   Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<LightType>&, Js5ResourceProvider&,
                                   Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<SkyBoxType>&, Js5ResourceProvider&,
                                   Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<WaterType>&, Js5ResourceProvider&,
                                   Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<CursorType>&, Js5ResourceProvider&,
                                   Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<WorldAreaType>&, Js5ResourceProvider&,
                                   Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<EnumType>&, Js5ResourceProvider&,
                                   Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<EffectAnimType>&, Js5ResourceProvider&,
                                   Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<StructType>&, Js5ResourceProvider&,
                                   Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<AchievementType>&, Js5ResourceProvider&,
                                   Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
    };

    // 0x100142b80, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x100142ba0, 128 bytes, base-object constructor, inline, placed by class name and debug map
    // ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList* param_1, Js5ResourceProvider* param_2, Js5ArchiveSettings* param_3,
        Js5ConfigGroup* param_4, uint param_5) {
        undefined* puVar1;

        new (this)
            BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>(param_1, param_2, param_3, param_4);
        new ((this + 40)) BaseLoadAllConfigTypeContainer(param_5);
        puVar1 = PTR_vtable_100ee82e0;
        *(undefined**)this = PTR_vtable_100ee82e0 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        new ((this + 72)) Array<shared_ptr<oldscape::configdecoder::OldscapeVarType>, eastl::allocator>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
    }

    // 0x100142c30, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType>::~ConfigTypeLoadAllContainer(): jumps straight to the base-object destructor

    // 0x100142c40, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType>::~ConfigTypeLoadAllContainer() {
        ~ConfigTypeLoadAllContainer(this);
        operator_delete(this);
    }

    // 0x100142c60, 976 bytes, inline, placed by class name and debug map
    // ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType>::LoadList()
    /* WARNING: Removing unreachable block (ram,4296290299) */
    /* ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType>::LoadList()
    */

    undefined* ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType>::LoadList() {
        int iVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        undefined** ppuVar4;
        bool bVar5;
        Js5Index* this_00;
        OldscapeVarType* pOVar6;
        char cVar7;
        uint uVar8;
        uint uVar9;
        undefined* puVar10;
        undefined8 uVar11;
        long* plVar12;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_01;
        ulonglong uVar13;
        undefined* in_RCX;
        uint* puVar14;
        _func_decltype_nullptr* p_Var15;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* this_02;
        uint uVar16;
        shared_ptr local_90;
        undefined8 local_80;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* local_78;
        ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType>* local_70;
        Js5Index* local_68[2];
        OldscapeVarType* local_58;
        Js5ArchiveSettings* local_50;
        DownloadWaitHandler* local_48;
        undefined* local_40;
        uint local_38;
        uint local_34;

        if (*(int*)(this + 48) != 2) {
            pJVar2 = *(Js5ArchiveSettings**)(this + 16);
            local_58 = (OldscapeVarType*)(this + 8);
            local_38 = (*(Mixer**)(this + 8))->GetStreamCountLastMix();
            *(uint*)(this + 64) = local_38;
            if (*(int*)(this + 48) == 0) {
                ((this + 72))->set_max_size((ulong)local_38, 0);
                local_68[0] = (Js5Index*)0;
                local_40 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, local_68, *(undefined8*)(this + 24));
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pJVar2;
                std::make_unique<DownloadWaitHandler, unsigned int&>((uint*)&local_90);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96),
                    (unique_ptr*)&local_90);
                local_90.~unique_ptr();
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                        (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
                pOVar6 = local_58;
                if (local_38 != 0) {
                    uVar16 = 0;
                    do {
                        this_00 = local_68[0];
                        uVar8 = (pOVar6->field_0, uVar16)->GetClientGroupID();
                        uVar9 = (pOVar6->field_0, uVar16)->GetClientFileID();
                        cVar7 = this_00->DoesFileExist(uVar8, uVar9);
                        if (cVar7 == '\0') {
                            *(int*)(this + 60) = *(int*)(this + 60) + 1;
                        } else {
                            local_48->SetExists(uVar16);
                        }
                        uVar16 = uVar16 + 1;
                    } while (uVar16 < local_38);
                }
                *(undefined4*)(this + 48) = 1;
                iVar1 = *(int*)(this + 48);
                pJVar2 = local_50;
            } else {
                iVar1 = *(int*)(this + 48);
                local_40 = in_RCX;
            }
            if (iVar1 == 1) {
                local_80 = 0;
                pJVar3 = *(Js5ArchiveSettings**)(this + 24);
                puVar10 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, &local_80, pJVar3);
                if (puVar10 != DataStatus::READY) {
                    return puVar10;
                }
                local_78 = (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96);
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(local_78);
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = this + 72;
                    p_Var15 = (_func_decltype_nullptr*)0;
                    local_50 = pJVar3;
                    do {
                        if (*(int*)(this + 52) == 0)
                            break;
                        cVar7 = local_48->CanCheck((int)p_Var15);
                        if (cVar7 != '\0') {
                            new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var15);
                            uVar16 = local_34;
                            ppuVar4 = local_58->field_0;
                            uVar11 = local_50->GetPrefetchPriority();
                            puVar14 = (uint*)(ulong)uVar16;
                            puVar10 = (undefined*)(**(code**)(*ppuVar4 + 64))(ppuVar4, local_68, local_50, puVar14,
                                                                              uVar11, 1);
                            if (puVar10 == DataStatus::READY) {
                                oldscape::configdecoder::OldscapeVarType::MakeShared<
                                    BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>*&,
                                    unsigned int&>(&local_90, local_58, (BaseTemplateConfigTypeList**)&local_34,
                                                   puVar14);
                                plVar12 = (long*)shared_ptr<oldscape::configdecoder::OldscapeVarType>::operator->(
                                    (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)&local_90);
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                puVar10 = (undefined*)(**(code**)(*plVar12 + 32))(plVar12);
                                if (puVar10 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar10;
                                } else {
                                    plVar12 = (long*)shared_ptr<oldscape::configdecoder::OldscapeVarType>::operator->(
                                        (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)&local_90);
                                    (**(code**)(*plVar12 + 24))(plVar12);
                                    puVar10 = (undefined*)(**(code**)(*local_58->field_0 + 72))();
                                    if (puVar10 == DataStatus::READY) {
                                        this_01 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)Array<
                                            shared_ptr<oldscape::configdecoder::OldscapeVarType>, eastl::allocator>::
                                        operator[]((Array<shared_ptr<oldscape::configdecoder::OldscapeVarType>,
                                                          eastl::allocator>*)local_70,
                                                   (ulong)local_34);
                                        shared_ptr<oldscape::configdecoder::OldscapeVarType>::operator=(this_01,
                                                                                                        &local_90);
                                        *(int*)(this + 60) = *(int*)(this + 60) + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                local_90.~shared_ptr();
                                if (bVar5)
                                    goto LAB_100142e1b;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_100142e1b:
                                bVar5 = true;
                            }
                            local_68->~shared_ptr();
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_100142f8a;
                            }
                        }
                        local_34 = local_34 + 1;
                        p_Var15 = (_func_decltype_nullptr*)(ulong)local_34;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_100142f8a:
                if (!bVar5) {
                    return local_40;
                }
                if (*(uint*)(this + 60) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(code**)(**(long**)(this + 8) + 80))();
                *(undefined4*)(this + 48) = 2;
                this_02 = local_78;
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::reset(
                    local_78, (DownloadWaitHandler*)0);
                uVar13 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                *(ulonglong*)(*(long*)(this + 8) + 40) = uVar13;
            }
        }
        return DataStatus::READY;
    }

    // 0x100143030, 96 bytes, inline, placed by class name and debug map
    // ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType>::List(int, DataStatus const**)
    undefined1* ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType>::List(int param_1,
                                                                                           DataStatus** param_2) {
        int iVar1;
        undefined1* puVar2;

        iVar1 = *(int*)(this + 48);
        if (iVar1 == 2) {
            *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar1 != 1) {
                return &oldscape::configdecoder::OldscapeVarType::NullConfigType;
            }
        }
        puVar2 = (undefined1*)Array<shared_ptr<oldscape::configdecoder::OldscapeVarType>, eastl::allocator>::operator[](
            (Array<shared_ptr<oldscape::configdecoder::OldscapeVarType>, eastl::allocator>*)(this + 72), (long)param_1);
        return puVar2;
    }

    // 0x1001430e0, 80 bytes, base-object destructor, inline, placed by class name and debug map
    // ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType>::~ConfigTypeLoadAllContainer() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee82e0;
        *(undefined**)this = PTR_vtable_100ee82e0 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        ((this + 96))->~unique_ptr();
        ((this + 72))->~Array();
        ((this + 40))->~AutoSingleton();
        ~AutoSingleton();
    }

    // 0x1004dbf90, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<VarType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<VarType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1004dbfb0, 128 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<VarType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<VarType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeLoadAllContainer<VarType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList* param_1,
                                                                         Js5ResourceProvider* param_2,
                                                                         Js5ArchiveSettings* param_3,
                                                                         Js5ConfigGroup* param_4, uint param_5) {
        undefined* puVar1;

        new (this) BaseConfigTypeContainer<VarType>(param_1, param_2, param_3, param_4);
        new ((this + 40)) BaseLoadAllConfigTypeContainer(param_5);
        puVar1 = PTR_vtable_100ee82a8;
        *(undefined**)this = PTR_vtable_100ee82a8 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        new ((this + 72)) Array<shared_ptr<VarType>, eastl::allocator>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
    }

    // 0x1004dc040, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<VarType>::~ConfigTypeLoadAllContainer(): jumps straight to the base-object destructor

    // 0x1004dc050, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<VarType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<VarType>::~ConfigTypeLoadAllContainer() {
        ~ConfigTypeLoadAllContainer(this);
        operator_delete(this);
    }

    // 0x1004dc070, 976 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<VarType>::LoadList()
    /* WARNING: Removing unreachable block (ram,4300063755) */
    /* ConfigTypeLoadAllContainer<VarType>::LoadList() */

    undefined* ConfigTypeLoadAllContainer<VarType>::LoadList() {
        int iVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        bool bVar4;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<VarType>* pCVar5;
        char cVar6;
        uint uVar7;
        uint uVar8;
        undefined* puVar9;
        undefined8 uVar10;
        long* plVar11;
        shared_ptr<VarType>* this_01;
        ulonglong uVar12;
        undefined* in_RCX;
        uint* puVar13;
        _func_decltype_nullptr* p_Var14;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* this_02;
        uint uVar15;
        shared_ptr local_90;
        undefined8 local_80;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* local_78;
        ConfigTypeLoadAllContainer<VarType>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<VarType>* local_58;
        Js5ArchiveSettings* local_50;
        DownloadWaitHandler* local_48;
        undefined* local_40;
        uint local_38;
        uint local_34;

        if (*(int*)(this + 48) != 2) {
            pJVar2 = *(Js5ArchiveSettings**)(this + 16);
            local_58 = this + 8;
            local_38 = (*(Mixer**)(this + 8))->GetStreamCountLastMix();
            *(uint*)(this + 64) = local_38;
            if (*(int*)(this + 48) == 0) {
                ((this + 72))->set_max_size((ulong)local_38, 0);
                local_68[0] = (Js5Index*)0;
                local_40 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, local_68, *(undefined8*)(this + 24));
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pJVar2;
                std::make_unique<DownloadWaitHandler, unsigned int&>((uint*)&local_90);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96),
                    (unique_ptr*)&local_90);
                local_90.~unique_ptr();
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                        (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
                pCVar5 = local_58;
                if (local_38 != 0) {
                    uVar15 = 0;
                    do {
                        this_00 = local_68[0];
                        uVar7 = (*(BaseConfigTypeList**)pCVar5)->GetClientGroupID(uVar15);
                        uVar8 = (*(BaseConfigTypeList**)pCVar5)->GetClientFileID(uVar15);
                        cVar6 = this_00->DoesFileExist(uVar7, uVar8);
                        if (cVar6 == '\0') {
                            *(int*)(this + 60) = *(int*)(this + 60) + 1;
                        } else {
                            local_48->SetExists(uVar15);
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < local_38);
                }
                *(undefined4*)(this + 48) = 1;
                iVar1 = *(int*)(this + 48);
                pJVar2 = local_50;
            } else {
                iVar1 = *(int*)(this + 48);
                local_40 = in_RCX;
            }
            if (iVar1 == 1) {
                local_80 = 0;
                pJVar3 = *(Js5ArchiveSettings**)(this + 24);
                puVar9 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, &local_80, pJVar3);
                if (puVar9 != DataStatus::READY) {
                    return puVar9;
                }
                local_78 = (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96);
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(local_78);
                local_34 = 0;
                bVar4 = true;
                if (local_38 != 0) {
                    local_70 = this + 72;
                    p_Var14 = (_func_decltype_nullptr*)0;
                    local_50 = pJVar3;
                    do {
                        if (*(int*)(this + 52) == 0)
                            break;
                        cVar6 = local_48->CanCheck((int)p_Var14);
                        if (cVar6 != '\0') {
                            new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var14);
                            uVar15 = local_34;
                            plVar11 = *(long**)local_58;
                            uVar10 = local_50->GetPrefetchPriority();
                            puVar13 = (uint*)(ulong)uVar15;
                            puVar9 = (undefined*)(**(code**)(*plVar11 + 64))(plVar11, local_68, local_50, puVar13,
                                                                             uVar10, 1);
                            if (puVar9 == DataStatus::READY) {
                                MakeSharedPool<VarType, 5504>::MakeShared<BaseTemplateConfigTypeList<VarType>*&,
                                                                          unsigned int&>(
                                    &local_90, (MakeSharedPool<VarType, 5504>*)local_58,
                                    (BaseTemplateConfigTypeList**)&local_34, puVar13);
                                plVar11 = (long*)shared_ptr<VarType>::operator->((shared_ptr<VarType>*)&local_90);
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                puVar9 = (undefined*)(**(code**)(*plVar11 + 32))(plVar11);
                                if (puVar9 == DataStatus::NOTLOADED) {
                                    bVar4 = false;
                                    local_40 = puVar9;
                                } else {
                                    plVar11 = (long*)shared_ptr<VarType>::operator->((shared_ptr<VarType>*)&local_90);
                                    (**(code**)(*plVar11 + 24))(plVar11);
                                    puVar9 = (undefined*)(**(code**)(**(long**)local_58 + 72))();
                                    if (puVar9 == DataStatus::READY) {
                                        this_01 = (shared_ptr<VarType>*)
                                            Array<shared_ptr<VarType>, eastl::allocator>::operator[](
                                                (Array<shared_ptr<VarType>, eastl::allocator>*)local_70,
                                                (ulong)local_34);
                                        shared_ptr<VarType>::operator=(this_01, &local_90);
                                        *(int*)(this + 60) = *(int*)(this + 60) + 1;
                                        bVar4 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar4 = false;
                                    }
                                }
                                local_90.~shared_ptr();
                                if (bVar4)
                                    goto LAB_1004dc22b;
                                bVar4 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1004dc22b:
                                bVar4 = true;
                            }
                            local_68->~shared_ptr();
                            if (!bVar4) {
                                bVar4 = false;
                                goto LAB_1004dc39a;
                            }
                        }
                        local_34 = local_34 + 1;
                        p_Var14 = (_func_decltype_nullptr*)(ulong)local_34;
                    } while (local_34 < local_38);
                    bVar4 = true;
                }
            LAB_1004dc39a:
                if (!bVar4) {
                    return local_40;
                }
                if (*(uint*)(this + 60) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(code**)(**(long**)(this + 8) + 80))();
                *(undefined4*)(this + 48) = 2;
                this_02 = local_78;
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::reset(
                    local_78, (DownloadWaitHandler*)0);
                uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                *(ulonglong*)(*(long*)(this + 8) + 40) = uVar12;
            }
        }
        return DataStatus::READY;
    }

    // 0x1004dc440, 96 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<VarType>::List(int, DataStatus const**)
    undefined* ConfigTypeLoadAllContainer<VarType>::List(int param_1, DataStatus** param_2) {
        int iVar1;
        undefined* puVar2;

        iVar1 = *(int*)(this + 48);
        if (iVar1 == 2) {
            *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar1 != 1) {
                return PTR_NullConfigType_100ee6578;
            }
        }
        puVar2 = (undefined*)Array<shared_ptr<VarType>, eastl::allocator>::operator[](
            (Array<shared_ptr<VarType>, eastl::allocator>*)(this + 72), (long)param_1);
        return puVar2;
    }

    // 0x1004dc4f0, 80 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<VarType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<VarType>::~ConfigTypeLoadAllContainer() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee82a8;
        *(undefined**)this = PTR_vtable_100ee82a8 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        ((this + 96))->~unique_ptr();
        ((this + 72))->~Array();
        ((this + 40))->~AutoSingleton();
        ~AutoSingleton();
    }

    // 0x1004ef520, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<SeqType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<SeqType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1004ef540, 128 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<SeqType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<SeqType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeLoadAllContainer<SeqType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList* param_1,
                                                                         Js5ResourceProvider* param_2,
                                                                         Js5ArchiveSettings* param_3,
                                                                         Js5ConfigGroup* param_4, uint param_5) {
        undefined* puVar1;

        new (this) BaseConfigTypeContainer<SeqType>(param_1, param_2, param_3, param_4);
        new ((this + 40)) BaseLoadAllConfigTypeContainer(param_5);
        puVar1 = PTR_vtable_100ee82a0;
        *(undefined**)this = PTR_vtable_100ee82a0 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        new ((this + 72)) Array<shared_ptr<SeqType>, eastl::allocator>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
    }

    // 0x1004ef5d0, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<SeqType>::~ConfigTypeLoadAllContainer(): jumps straight to the base-object destructor

    // 0x1004ef5e0, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<SeqType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<SeqType>::~ConfigTypeLoadAllContainer() {
        ~ConfigTypeLoadAllContainer(this);
        operator_delete(this);
    }

    // 0x1004ef600, 976 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<SeqType>::LoadList()
    /* WARNING: Removing unreachable block (ram,4300143003) */
    /* ConfigTypeLoadAllContainer<SeqType>::LoadList() */

    undefined* ConfigTypeLoadAllContainer<SeqType>::LoadList() {
        int iVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        bool bVar4;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<SeqType>* pCVar5;
        char cVar6;
        uint uVar7;
        uint uVar8;
        undefined* puVar9;
        undefined8 uVar10;
        long* plVar11;
        shared_ptr<SeqType>* this_01;
        ulonglong uVar12;
        undefined* in_RCX;
        uint* puVar13;
        _func_decltype_nullptr* p_Var14;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* this_02;
        uint uVar15;
        shared_ptr local_90;
        undefined8 local_80;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* local_78;
        ConfigTypeLoadAllContainer<SeqType>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<SeqType>* local_58;
        Js5ArchiveSettings* local_50;
        DownloadWaitHandler* local_48;
        undefined* local_40;
        uint local_38;
        uint local_34;

        if (*(int*)(this + 48) != 2) {
            pJVar2 = *(Js5ArchiveSettings**)(this + 16);
            local_58 = this + 8;
            local_38 = (*(Mixer**)(this + 8))->GetStreamCountLastMix();
            *(uint*)(this + 64) = local_38;
            if (*(int*)(this + 48) == 0) {
                ((this + 72))->set_max_size((ulong)local_38, 0);
                local_68[0] = (Js5Index*)0;
                local_40 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, local_68, *(undefined8*)(this + 24));
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pJVar2;
                std::make_unique<DownloadWaitHandler, unsigned int&>((uint*)&local_90);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96),
                    (unique_ptr*)&local_90);
                local_90.~unique_ptr();
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                        (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
                pCVar5 = local_58;
                if (local_38 != 0) {
                    uVar15 = 0;
                    do {
                        this_00 = local_68[0];
                        uVar7 = (*(BaseConfigTypeList**)pCVar5)->GetClientGroupID(uVar15);
                        uVar8 = (*(BaseConfigTypeList**)pCVar5)->GetClientFileID(uVar15);
                        cVar6 = this_00->DoesFileExist(uVar7, uVar8);
                        if (cVar6 == '\0') {
                            *(int*)(this + 60) = *(int*)(this + 60) + 1;
                        } else {
                            local_48->SetExists(uVar15);
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < local_38);
                }
                *(undefined4*)(this + 48) = 1;
                iVar1 = *(int*)(this + 48);
                pJVar2 = local_50;
            } else {
                iVar1 = *(int*)(this + 48);
                local_40 = in_RCX;
            }
            if (iVar1 == 1) {
                local_80 = 0;
                pJVar3 = *(Js5ArchiveSettings**)(this + 24);
                puVar9 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, &local_80, pJVar3);
                if (puVar9 != DataStatus::READY) {
                    return puVar9;
                }
                local_78 = (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96);
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(local_78);
                local_34 = 0;
                bVar4 = true;
                if (local_38 != 0) {
                    local_70 = this + 72;
                    p_Var14 = (_func_decltype_nullptr*)0;
                    local_50 = pJVar3;
                    do {
                        if (*(int*)(this + 52) == 0)
                            break;
                        cVar6 = local_48->CanCheck((int)p_Var14);
                        if (cVar6 != '\0') {
                            new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var14);
                            uVar15 = local_34;
                            plVar11 = *(long**)local_58;
                            uVar10 = local_50->GetPrefetchPriority();
                            puVar13 = (uint*)(ulong)uVar15;
                            puVar9 = (undefined*)(**(code**)(*plVar11 + 64))(plVar11, local_68, local_50, puVar13,
                                                                             uVar10, 1);
                            if (puVar9 == DataStatus::READY) {
                                MakeSharedPool<SeqType, 96>::MakeShared<BaseTemplateConfigTypeList<SeqType>*&,
                                                                        unsigned int&>(
                                    &local_90, (MakeSharedPool<SeqType, 96>*)local_58,
                                    (BaseTemplateConfigTypeList**)&local_34, puVar13);
                                plVar11 = (long*)shared_ptr<SeqType>::operator->((shared_ptr<SeqType>*)&local_90);
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                puVar9 = (undefined*)(**(code**)(*plVar11 + 32))(plVar11);
                                if (puVar9 == DataStatus::NOTLOADED) {
                                    bVar4 = false;
                                    local_40 = puVar9;
                                } else {
                                    plVar11 = (long*)shared_ptr<SeqType>::operator->((shared_ptr<SeqType>*)&local_90);
                                    (**(code**)(*plVar11 + 24))(plVar11);
                                    puVar9 = (undefined*)(**(code**)(**(long**)local_58 + 72))();
                                    if (puVar9 == DataStatus::READY) {
                                        this_01 = (shared_ptr<SeqType>*)
                                            Array<shared_ptr<SeqType>, eastl::allocator>::operator[](
                                                (Array<shared_ptr<SeqType>, eastl::allocator>*)local_70,
                                                (ulong)local_34);
                                        shared_ptr<SeqType>::operator=(this_01, &local_90);
                                        *(int*)(this + 60) = *(int*)(this + 60) + 1;
                                        bVar4 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar4 = false;
                                    }
                                }
                                local_90.~shared_ptr();
                                if (bVar4)
                                    goto LAB_1004ef7bb;
                                bVar4 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1004ef7bb:
                                bVar4 = true;
                            }
                            local_68->~shared_ptr();
                            if (!bVar4) {
                                bVar4 = false;
                                goto LAB_1004ef92a;
                            }
                        }
                        local_34 = local_34 + 1;
                        p_Var14 = (_func_decltype_nullptr*)(ulong)local_34;
                    } while (local_34 < local_38);
                    bVar4 = true;
                }
            LAB_1004ef92a:
                if (!bVar4) {
                    return local_40;
                }
                if (*(uint*)(this + 60) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(code**)(**(long**)(this + 8) + 80))();
                *(undefined4*)(this + 48) = 2;
                this_02 = local_78;
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::reset(
                    local_78, (DownloadWaitHandler*)0);
                uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                *(ulonglong*)(*(long*)(this + 8) + 40) = uVar12;
            }
        }
        return DataStatus::READY;
    }

    // 0x1004ef9d0, 96 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<SeqType>::List(int, DataStatus const**)
    undefined* ConfigTypeLoadAllContainer<SeqType>::List(int param_1, DataStatus** param_2) {
        int iVar1;
        undefined* puVar2;

        iVar1 = *(int*)(this + 48);
        if (iVar1 == 2) {
            *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar1 != 1) {
                return PTR_NullConfigType_100ee6570;
            }
        }
        puVar2 = (undefined*)Array<shared_ptr<SeqType>, eastl::allocator>::operator[](
            (Array<shared_ptr<SeqType>, eastl::allocator>*)(this + 72), (long)param_1);
        return puVar2;
    }

    // 0x1004efa80, 80 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<SeqType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<SeqType>::~ConfigTypeLoadAllContainer() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee82a0;
        *(undefined**)this = PTR_vtable_100ee82a0 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        ((this + 96))->~unique_ptr();
        ((this + 72))->~Array();
        ((this + 40))->~AutoSingleton();
        ~AutoSingleton();
    }

    // 0x1004fbc40, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<ObjType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<ObjType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1004fbc60, 128 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<ObjType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<ObjType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeLoadAllContainer<ObjType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList* param_1,
                                                                         Js5ResourceProvider* param_2,
                                                                         Js5ArchiveSettings* param_3,
                                                                         Js5ConfigGroup* param_4, uint param_5) {
        undefined* puVar1;

        new (this) BaseConfigTypeContainer<ObjType>(param_1, param_2, param_3, param_4);
        new ((this + 40)) BaseLoadAllConfigTypeContainer(param_5);
        puVar1 = PTR_vtable_100ee8298;
        *(undefined**)this = PTR_vtable_100ee8298 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        new ((this + 72)) Array<shared_ptr<ObjType>, eastl::allocator>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
    }

    // 0x1004fbcf0, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<ObjType>::~ConfigTypeLoadAllContainer(): jumps straight to the base-object destructor

    // 0x1004fbd00, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<ObjType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<ObjType>::~ConfigTypeLoadAllContainer() {
        ~ConfigTypeLoadAllContainer(this);
        operator_delete(this);
    }

    // 0x1004fbd20, 976 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<ObjType>::LoadList()
    /* WARNING: Removing unreachable block (ram,4300193979) */
    /* ConfigTypeLoadAllContainer<ObjType>::LoadList() */

    undefined* ConfigTypeLoadAllContainer<ObjType>::LoadList() {
        int iVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        bool bVar4;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<ObjType>* pCVar5;
        char cVar6;
        uint uVar7;
        uint uVar8;
        undefined* puVar9;
        undefined8 uVar10;
        long* plVar11;
        shared_ptr<ObjType>* this_01;
        ulonglong uVar12;
        undefined* in_RCX;
        uint* puVar13;
        _func_decltype_nullptr* p_Var14;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* this_02;
        uint uVar15;
        shared_ptr local_90;
        undefined8 local_80;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* local_78;
        ConfigTypeLoadAllContainer<ObjType>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<ObjType>* local_58;
        Js5ArchiveSettings* local_50;
        DownloadWaitHandler* local_48;
        undefined* local_40;
        uint local_38;
        uint local_34;

        if (*(int*)(this + 48) != 2) {
            pJVar2 = *(Js5ArchiveSettings**)(this + 16);
            local_58 = this + 8;
            local_38 = (*(Mixer**)(this + 8))->GetStreamCountLastMix();
            *(uint*)(this + 64) = local_38;
            if (*(int*)(this + 48) == 0) {
                ((this + 72))->set_max_size((ulong)local_38, 0);
                local_68[0] = (Js5Index*)0;
                local_40 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, local_68, *(undefined8*)(this + 24));
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pJVar2;
                std::make_unique<DownloadWaitHandler, unsigned int&>((uint*)&local_90);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96),
                    (unique_ptr*)&local_90);
                local_90.~unique_ptr();
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                        (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
                pCVar5 = local_58;
                if (local_38 != 0) {
                    uVar15 = 0;
                    do {
                        this_00 = local_68[0];
                        uVar7 = (*(BaseConfigTypeList**)pCVar5)->GetClientGroupID(uVar15);
                        uVar8 = (*(BaseConfigTypeList**)pCVar5)->GetClientFileID(uVar15);
                        cVar6 = this_00->DoesFileExist(uVar7, uVar8);
                        if (cVar6 == '\0') {
                            *(int*)(this + 60) = *(int*)(this + 60) + 1;
                        } else {
                            local_48->SetExists(uVar15);
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < local_38);
                }
                *(undefined4*)(this + 48) = 1;
                iVar1 = *(int*)(this + 48);
                pJVar2 = local_50;
            } else {
                iVar1 = *(int*)(this + 48);
                local_40 = in_RCX;
            }
            if (iVar1 == 1) {
                local_80 = 0;
                pJVar3 = *(Js5ArchiveSettings**)(this + 24);
                puVar9 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, &local_80, pJVar3);
                if (puVar9 != DataStatus::READY) {
                    return puVar9;
                }
                local_78 = (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96);
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(local_78);
                local_34 = 0;
                bVar4 = true;
                if (local_38 != 0) {
                    local_70 = this + 72;
                    p_Var14 = (_func_decltype_nullptr*)0;
                    local_50 = pJVar3;
                    do {
                        if (*(int*)(this + 52) == 0)
                            break;
                        cVar6 = local_48->CanCheck((int)p_Var14);
                        if (cVar6 != '\0') {
                            new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var14);
                            uVar15 = local_34;
                            plVar11 = *(long**)local_58;
                            uVar10 = local_50->GetPrefetchPriority();
                            puVar13 = (uint*)(ulong)uVar15;
                            puVar9 = (undefined*)(**(code**)(*plVar11 + 64))(plVar11, local_68, local_50, puVar13,
                                                                             uVar10, 1);
                            if (puVar9 == DataStatus::READY) {
                                MakeSharedPool<ObjType, 96>::MakeShared<BaseTemplateConfigTypeList<ObjType>*&,
                                                                        unsigned int&>(
                                    &local_90, (MakeSharedPool<ObjType, 96>*)local_58,
                                    (BaseTemplateConfigTypeList**)&local_34, puVar13);
                                plVar11 = (long*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)&local_90);
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                puVar9 = (undefined*)(**(code**)(*plVar11 + 32))(plVar11);
                                if (puVar9 == DataStatus::NOTLOADED) {
                                    bVar4 = false;
                                    local_40 = puVar9;
                                } else {
                                    plVar11 = (long*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)&local_90);
                                    (**(code**)(*plVar11 + 24))(plVar11);
                                    puVar9 = (undefined*)(**(code**)(**(long**)local_58 + 72))();
                                    if (puVar9 == DataStatus::READY) {
                                        this_01 = (shared_ptr<ObjType>*)
                                            Array<shared_ptr<ObjType>, eastl::allocator>::operator[](
                                                (Array<shared_ptr<ObjType>, eastl::allocator>*)local_70,
                                                (ulong)local_34);
                                        shared_ptr<ObjType>::operator=(this_01, &local_90);
                                        *(int*)(this + 60) = *(int*)(this + 60) + 1;
                                        bVar4 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar4 = false;
                                    }
                                }
                                local_90.~shared_ptr();
                                if (bVar4)
                                    goto LAB_1004fbedb;
                                bVar4 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1004fbedb:
                                bVar4 = true;
                            }
                            local_68->~shared_ptr();
                            if (!bVar4) {
                                bVar4 = false;
                                goto LAB_1004fc04a;
                            }
                        }
                        local_34 = local_34 + 1;
                        p_Var14 = (_func_decltype_nullptr*)(ulong)local_34;
                    } while (local_34 < local_38);
                    bVar4 = true;
                }
            LAB_1004fc04a:
                if (!bVar4) {
                    return local_40;
                }
                if (*(uint*)(this + 60) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(code**)(**(long**)(this + 8) + 80))();
                *(undefined4*)(this + 48) = 2;
                this_02 = local_78;
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::reset(
                    local_78, (DownloadWaitHandler*)0);
                uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                *(ulonglong*)(*(long*)(this + 8) + 40) = uVar12;
            }
        }
        return DataStatus::READY;
    }

    // 0x1004fc0f0, 96 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<ObjType>::List(int, DataStatus const**)
    undefined* ConfigTypeLoadAllContainer<ObjType>::List(int param_1, DataStatus** param_2) {
        int iVar1;
        undefined* puVar2;

        iVar1 = *(int*)(this + 48);
        if (iVar1 == 2) {
            *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar1 != 1) {
                return PTR_NullConfigType_100ee6568;
            }
        }
        puVar2 = (undefined*)Array<shared_ptr<ObjType>, eastl::allocator>::operator[](
            (Array<shared_ptr<ObjType>, eastl::allocator>*)(this + 72), (long)param_1);
        return puVar2;
    }

    // 0x1004fc1a0, 80 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<ObjType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<ObjType>::~ConfigTypeLoadAllContainer() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee8298;
        *(undefined**)this = PTR_vtable_100ee8298 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        ((this + 96))->~unique_ptr();
        ((this + 72))->~Array();
        ((this + 40))->~AutoSingleton();
        ~AutoSingleton();
    }

    // 0x100512430, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<NPCType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<NPCType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x100512450, 128 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<NPCType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<NPCType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeLoadAllContainer<NPCType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList* param_1,
                                                                         Js5ResourceProvider* param_2,
                                                                         Js5ArchiveSettings* param_3,
                                                                         Js5ConfigGroup* param_4, uint param_5) {
        undefined* puVar1;

        new (this) BaseConfigTypeContainer<NPCType>(param_1, param_2, param_3, param_4);
        new ((this + 40)) BaseLoadAllConfigTypeContainer(param_5);
        puVar1 = PTR_vtable_100ee8290;
        *(undefined**)this = PTR_vtable_100ee8290 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        new ((this + 72)) Array<shared_ptr<NPCType>, eastl::allocator>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
    }

    // 0x1005124e0, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<NPCType>::~ConfigTypeLoadAllContainer(): jumps straight to the base-object destructor

    // 0x1005124f0, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<NPCType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<NPCType>::~ConfigTypeLoadAllContainer() {
        ~ConfigTypeLoadAllContainer(this);
        operator_delete(this);
    }

    // 0x100512510, 976 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<NPCType>::LoadList()
    /* WARNING: Removing unreachable block (ram,4300286123) */
    /* ConfigTypeLoadAllContainer<NPCType>::LoadList() */

    undefined* ConfigTypeLoadAllContainer<NPCType>::LoadList() {
        int iVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        bool bVar4;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<NPCType>* pCVar5;
        char cVar6;
        uint uVar7;
        uint uVar8;
        undefined* puVar9;
        undefined8 uVar10;
        long* plVar11;
        shared_ptr<NPCType>* this_01;
        ulonglong uVar12;
        undefined* in_RCX;
        uint* puVar13;
        _func_decltype_nullptr* p_Var14;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* this_02;
        uint uVar15;
        shared_ptr local_90;
        undefined8 local_80;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* local_78;
        ConfigTypeLoadAllContainer<NPCType>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<NPCType>* local_58;
        Js5ArchiveSettings* local_50;
        DownloadWaitHandler* local_48;
        undefined* local_40;
        uint local_38;
        uint local_34;

        if (*(int*)(this + 48) != 2) {
            pJVar2 = *(Js5ArchiveSettings**)(this + 16);
            local_58 = this + 8;
            local_38 = (*(Mixer**)(this + 8))->GetStreamCountLastMix();
            *(uint*)(this + 64) = local_38;
            if (*(int*)(this + 48) == 0) {
                ((this + 72))->set_max_size((ulong)local_38, 0);
                local_68[0] = (Js5Index*)0;
                local_40 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, local_68, *(undefined8*)(this + 24));
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pJVar2;
                std::make_unique<DownloadWaitHandler, unsigned int&>((uint*)&local_90);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96),
                    (unique_ptr*)&local_90);
                local_90.~unique_ptr();
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                        (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
                pCVar5 = local_58;
                if (local_38 != 0) {
                    uVar15 = 0;
                    do {
                        this_00 = local_68[0];
                        uVar7 = (*(BaseConfigTypeList**)pCVar5)->GetClientGroupID(uVar15);
                        uVar8 = (*(BaseConfigTypeList**)pCVar5)->GetClientFileID(uVar15);
                        cVar6 = this_00->DoesFileExist(uVar7, uVar8);
                        if (cVar6 == '\0') {
                            *(int*)(this + 60) = *(int*)(this + 60) + 1;
                        } else {
                            local_48->SetExists(uVar15);
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < local_38);
                }
                *(undefined4*)(this + 48) = 1;
                iVar1 = *(int*)(this + 48);
                pJVar2 = local_50;
            } else {
                iVar1 = *(int*)(this + 48);
                local_40 = in_RCX;
            }
            if (iVar1 == 1) {
                local_80 = 0;
                pJVar3 = *(Js5ArchiveSettings**)(this + 24);
                puVar9 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, &local_80, pJVar3);
                if (puVar9 != DataStatus::READY) {
                    return puVar9;
                }
                local_78 = (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96);
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(local_78);
                local_34 = 0;
                bVar4 = true;
                if (local_38 != 0) {
                    local_70 = this + 72;
                    p_Var14 = (_func_decltype_nullptr*)0;
                    local_50 = pJVar3;
                    do {
                        if (*(int*)(this + 52) == 0)
                            break;
                        cVar6 = local_48->CanCheck((int)p_Var14);
                        if (cVar6 != '\0') {
                            new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var14);
                            uVar15 = local_34;
                            plVar11 = *(long**)local_58;
                            uVar10 = local_50->GetPrefetchPriority();
                            puVar13 = (uint*)(ulong)uVar15;
                            puVar9 = (undefined*)(**(code**)(*plVar11 + 64))(plVar11, local_68, local_50, puVar13,
                                                                             uVar10, 1);
                            if (puVar9 == DataStatus::READY) {
                                MakeSharedPool<NPCType, 216>::MakeShared<BaseTemplateConfigTypeList<NPCType>*&,
                                                                         unsigned int&>(
                                    &local_90, (MakeSharedPool<NPCType, 216>*)local_58,
                                    (BaseTemplateConfigTypeList**)&local_34, puVar13);
                                plVar11 = (long*)shared_ptr<NPCType>::operator->((shared_ptr<NPCType>*)&local_90);
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                puVar9 = (undefined*)(**(code**)(*plVar11 + 32))(plVar11);
                                if (puVar9 == DataStatus::NOTLOADED) {
                                    bVar4 = false;
                                    local_40 = puVar9;
                                } else {
                                    plVar11 = (long*)shared_ptr<NPCType>::operator->((shared_ptr<NPCType>*)&local_90);
                                    (**(code**)(*plVar11 + 24))(plVar11);
                                    puVar9 = (undefined*)(**(code**)(**(long**)local_58 + 72))();
                                    if (puVar9 == DataStatus::READY) {
                                        this_01 = (shared_ptr<NPCType>*)
                                            Array<shared_ptr<NPCType>, eastl::allocator>::operator[](
                                                (Array<shared_ptr<NPCType>, eastl::allocator>*)local_70,
                                                (ulong)local_34);
                                        shared_ptr<NPCType>::operator=(this_01, &local_90);
                                        *(int*)(this + 60) = *(int*)(this + 60) + 1;
                                        bVar4 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar4 = false;
                                    }
                                }
                                local_90.~shared_ptr();
                                if (bVar4)
                                    goto LAB_1005126cb;
                                bVar4 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005126cb:
                                bVar4 = true;
                            }
                            local_68->~shared_ptr();
                            if (!bVar4) {
                                bVar4 = false;
                                goto LAB_10051283a;
                            }
                        }
                        local_34 = local_34 + 1;
                        p_Var14 = (_func_decltype_nullptr*)(ulong)local_34;
                    } while (local_34 < local_38);
                    bVar4 = true;
                }
            LAB_10051283a:
                if (!bVar4) {
                    return local_40;
                }
                if (*(uint*)(this + 60) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(code**)(**(long**)(this + 8) + 80))();
                *(undefined4*)(this + 48) = 2;
                this_02 = local_78;
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::reset(
                    local_78, (DownloadWaitHandler*)0);
                uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                *(ulonglong*)(*(long*)(this + 8) + 40) = uVar12;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005128e0, 96 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<NPCType>::List(int, DataStatus const**)
    undefined* ConfigTypeLoadAllContainer<NPCType>::List(int param_1, DataStatus** param_2) {
        int iVar1;
        undefined* puVar2;

        iVar1 = *(int*)(this + 48);
        if (iVar1 == 2) {
            *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar1 != 1) {
                return PTR_NullConfigType_100ee6560;
            }
        }
        puVar2 = (undefined*)Array<shared_ptr<NPCType>, eastl::allocator>::operator[](
            (Array<shared_ptr<NPCType>, eastl::allocator>*)(this + 72), (long)param_1);
        return puVar2;
    }

    // 0x100512990, 80 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<NPCType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<NPCType>::~ConfigTypeLoadAllContainer() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee8290;
        *(undefined**)this = PTR_vtable_100ee8290 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        ((this + 96))->~unique_ptr();
        ((this + 72))->~Array();
        ((this + 40))->~AutoSingleton();
        ~AutoSingleton();
    }

    // 0x10051dfa0, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<LocType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<LocType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x10051dfc0, 128 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<LocType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<LocType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeLoadAllContainer<LocType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList* param_1,
                                                                         Js5ResourceProvider* param_2,
                                                                         Js5ArchiveSettings* param_3,
                                                                         Js5ConfigGroup* param_4, uint param_5) {
        undefined* puVar1;

        new (this) BaseConfigTypeContainer<LocType>(param_1, param_2, param_3, param_4);
        new ((this + 40)) BaseLoadAllConfigTypeContainer(param_5);
        puVar1 = PTR_vtable_100ee8280;
        *(undefined**)this = PTR_vtable_100ee8280 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        new ((this + 72)) Array<shared_ptr<LocType>, eastl::allocator>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
    }

    // 0x10051e050, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<LocType>::~ConfigTypeLoadAllContainer(): jumps straight to the base-object destructor

    // 0x10051e060, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<LocType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<LocType>::~ConfigTypeLoadAllContainer() {
        ~ConfigTypeLoadAllContainer(this);
        operator_delete(this);
    }

    // 0x10051e080, 976 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<LocType>::LoadList()
    /* WARNING: Removing unreachable block (ram,4300334107) */
    /* ConfigTypeLoadAllContainer<LocType>::LoadList() */

    undefined* ConfigTypeLoadAllContainer<LocType>::LoadList() {
        int iVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        bool bVar4;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<LocType>* pCVar5;
        char cVar6;
        uint uVar7;
        uint uVar8;
        undefined* puVar9;
        undefined8 uVar10;
        long* plVar11;
        shared_ptr<LocType>* this_01;
        ulonglong uVar12;
        undefined* in_RCX;
        uint* puVar13;
        _func_decltype_nullptr* p_Var14;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* this_02;
        uint uVar15;
        shared_ptr local_90;
        undefined8 local_80;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* local_78;
        ConfigTypeLoadAllContainer<LocType>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<LocType>* local_58;
        Js5ArchiveSettings* local_50;
        DownloadWaitHandler* local_48;
        undefined* local_40;
        uint local_38;
        uint local_34;

        if (*(int*)(this + 48) != 2) {
            pJVar2 = *(Js5ArchiveSettings**)(this + 16);
            local_58 = this + 8;
            local_38 = (*(Mixer**)(this + 8))->GetStreamCountLastMix();
            *(uint*)(this + 64) = local_38;
            if (*(int*)(this + 48) == 0) {
                ((this + 72))->set_max_size((ulong)local_38, 0);
                local_68[0] = (Js5Index*)0;
                local_40 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, local_68, *(undefined8*)(this + 24));
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pJVar2;
                std::make_unique<DownloadWaitHandler, unsigned int&>((uint*)&local_90);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96),
                    (unique_ptr*)&local_90);
                local_90.~unique_ptr();
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                        (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
                pCVar5 = local_58;
                if (local_38 != 0) {
                    uVar15 = 0;
                    do {
                        this_00 = local_68[0];
                        uVar7 = (*(BaseConfigTypeList**)pCVar5)->GetClientGroupID(uVar15);
                        uVar8 = (*(BaseConfigTypeList**)pCVar5)->GetClientFileID(uVar15);
                        cVar6 = this_00->DoesFileExist(uVar7, uVar8);
                        if (cVar6 == '\0') {
                            *(int*)(this + 60) = *(int*)(this + 60) + 1;
                        } else {
                            local_48->SetExists(uVar15);
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < local_38);
                }
                *(undefined4*)(this + 48) = 1;
                iVar1 = *(int*)(this + 48);
                pJVar2 = local_50;
            } else {
                iVar1 = *(int*)(this + 48);
                local_40 = in_RCX;
            }
            if (iVar1 == 1) {
                local_80 = 0;
                pJVar3 = *(Js5ArchiveSettings**)(this + 24);
                puVar9 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, &local_80, pJVar3);
                if (puVar9 != DataStatus::READY) {
                    return puVar9;
                }
                local_78 = (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96);
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(local_78);
                local_34 = 0;
                bVar4 = true;
                if (local_38 != 0) {
                    local_70 = this + 72;
                    p_Var14 = (_func_decltype_nullptr*)0;
                    local_50 = pJVar3;
                    do {
                        if (*(int*)(this + 52) == 0)
                            break;
                        cVar6 = local_48->CanCheck((int)p_Var14);
                        if (cVar6 != '\0') {
                            new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var14);
                            uVar15 = local_34;
                            plVar11 = *(long**)local_58;
                            uVar10 = local_50->GetPrefetchPriority();
                            puVar13 = (uint*)(ulong)uVar15;
                            puVar9 = (undefined*)(**(code**)(*plVar11 + 64))(plVar11, local_68, local_50, puVar13,
                                                                             uVar10, 1);
                            if (puVar9 == DataStatus::READY) {
                                MakeSharedPool<LocType, 256>::MakeShared<BaseTemplateConfigTypeList<LocType>*&,
                                                                         unsigned int&>(
                                    &local_90, (MakeSharedPool<LocType, 256>*)local_58,
                                    (BaseTemplateConfigTypeList**)&local_34, puVar13);
                                plVar11 = (long*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)&local_90);
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                puVar9 = (undefined*)(**(code**)(*plVar11 + 32))(plVar11);
                                if (puVar9 == DataStatus::NOTLOADED) {
                                    bVar4 = false;
                                    local_40 = puVar9;
                                } else {
                                    plVar11 = (long*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)&local_90);
                                    (**(code**)(*plVar11 + 24))(plVar11);
                                    puVar9 = (undefined*)(**(code**)(**(long**)local_58 + 72))();
                                    if (puVar9 == DataStatus::READY) {
                                        this_01 = (shared_ptr<LocType>*)
                                            Array<shared_ptr<LocType>, eastl::allocator>::operator[](
                                                (Array<shared_ptr<LocType>, eastl::allocator>*)local_70,
                                                (ulong)local_34);
                                        shared_ptr<LocType>::operator=(this_01, &local_90);
                                        *(int*)(this + 60) = *(int*)(this + 60) + 1;
                                        bVar4 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar4 = false;
                                    }
                                }
                                local_90.~shared_ptr();
                                if (bVar4)
                                    goto LAB_10051e23b;
                                bVar4 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_10051e23b:
                                bVar4 = true;
                            }
                            local_68->~shared_ptr();
                            if (!bVar4) {
                                bVar4 = false;
                                goto LAB_10051e3aa;
                            }
                        }
                        local_34 = local_34 + 1;
                        p_Var14 = (_func_decltype_nullptr*)(ulong)local_34;
                    } while (local_34 < local_38);
                    bVar4 = true;
                }
            LAB_10051e3aa:
                if (!bVar4) {
                    return local_40;
                }
                if (*(uint*)(this + 60) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(code**)(**(long**)(this + 8) + 80))();
                *(undefined4*)(this + 48) = 2;
                this_02 = local_78;
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::reset(
                    local_78, (DownloadWaitHandler*)0);
                uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                *(ulonglong*)(*(long*)(this + 8) + 40) = uVar12;
            }
        }
        return DataStatus::READY;
    }

    // 0x10051e450, 96 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<LocType>::List(int, DataStatus const**)
    undefined* ConfigTypeLoadAllContainer<LocType>::List(int param_1, DataStatus** param_2) {
        int iVar1;
        undefined* puVar2;

        iVar1 = *(int*)(this + 48);
        if (iVar1 == 2) {
            *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar1 != 1) {
                return PTR_NullConfigType_100ee6550;
            }
        }
        puVar2 = (undefined*)Array<shared_ptr<LocType>, eastl::allocator>::operator[](
            (Array<shared_ptr<LocType>, eastl::allocator>*)(this + 72), (long)param_1);
        return puVar2;
    }

    // 0x10051e500, 80 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<LocType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<LocType>::~ConfigTypeLoadAllContainer() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee8280;
        *(undefined**)this = PTR_vtable_100ee8280 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        ((this + 96))->~unique_ptr();
        ((this + 72))->~Array();
        ((this + 40))->~AutoSingleton();
        ~AutoSingleton();
    }

    // 0x100576240, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<ParamType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<ParamType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x100576260, 128 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<ParamType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<ParamType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeLoadAllContainer<ParamType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList* param_1,
                                                                           Js5ResourceProvider* param_2,
                                                                           Js5ArchiveSettings* param_3,
                                                                           Js5ConfigGroup* param_4, uint param_5) {
        undefined* puVar1;

        new (this) BaseConfigTypeContainer<ParamType>(param_1, param_2, param_3, param_4);
        new ((this + 40)) BaseLoadAllConfigTypeContainer(param_5);
        puVar1 = PTR_vtable_100ee82c8;
        *(undefined**)this = PTR_vtable_100ee82c8 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        new ((this + 72)) Array<shared_ptr<ParamType>, eastl::allocator>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
    }

    // 0x1005762f0, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<ParamType>::~ConfigTypeLoadAllContainer(): jumps straight to the base-object destructor

    // 0x100576300, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<ParamType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<ParamType>::~ConfigTypeLoadAllContainer() {
        ~ConfigTypeLoadAllContainer(this);
        operator_delete(this);
    }

    // 0x100576320, 976 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<ParamType>::LoadList()
    /* WARNING: Removing unreachable block (ram,4300695227) */
    /* ConfigTypeLoadAllContainer<ParamType>::LoadList() */

    undefined* ConfigTypeLoadAllContainer<ParamType>::LoadList() {
        int iVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        bool bVar4;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<ParamType>* pCVar5;
        char cVar6;
        uint uVar7;
        uint uVar8;
        undefined* puVar9;
        undefined8 uVar10;
        long* plVar11;
        shared_ptr<ParamType>* this_01;
        ulonglong uVar12;
        undefined* in_RCX;
        uint* puVar13;
        _func_decltype_nullptr* p_Var14;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* this_02;
        uint uVar15;
        shared_ptr local_90;
        undefined8 local_80;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* local_78;
        ConfigTypeLoadAllContainer<ParamType>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<ParamType>* local_58;
        Js5ArchiveSettings* local_50;
        DownloadWaitHandler* local_48;
        undefined* local_40;
        uint local_38;
        uint local_34;

        if (*(int*)(this + 48) != 2) {
            pJVar2 = *(Js5ArchiveSettings**)(this + 16);
            local_58 = this + 8;
            local_38 = (*(Mixer**)(this + 8))->GetStreamCountLastMix();
            *(uint*)(this + 64) = local_38;
            if (*(int*)(this + 48) == 0) {
                ((this + 72))->set_max_size((ulong)local_38, 0);
                local_68[0] = (Js5Index*)0;
                local_40 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, local_68, *(undefined8*)(this + 24));
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pJVar2;
                std::make_unique<DownloadWaitHandler, unsigned int&>((uint*)&local_90);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96),
                    (unique_ptr*)&local_90);
                local_90.~unique_ptr();
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                        (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
                pCVar5 = local_58;
                if (local_38 != 0) {
                    uVar15 = 0;
                    do {
                        this_00 = local_68[0];
                        uVar7 = (*(BaseConfigTypeList**)pCVar5)->GetClientGroupID(uVar15);
                        uVar8 = (*(BaseConfigTypeList**)pCVar5)->GetClientFileID(uVar15);
                        cVar6 = this_00->DoesFileExist(uVar7, uVar8);
                        if (cVar6 == '\0') {
                            *(int*)(this + 60) = *(int*)(this + 60) + 1;
                        } else {
                            local_48->SetExists(uVar15);
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < local_38);
                }
                *(undefined4*)(this + 48) = 1;
                iVar1 = *(int*)(this + 48);
                pJVar2 = local_50;
            } else {
                iVar1 = *(int*)(this + 48);
                local_40 = in_RCX;
            }
            if (iVar1 == 1) {
                local_80 = 0;
                pJVar3 = *(Js5ArchiveSettings**)(this + 24);
                puVar9 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, &local_80, pJVar3);
                if (puVar9 != DataStatus::READY) {
                    return puVar9;
                }
                local_78 = (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96);
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(local_78);
                local_34 = 0;
                bVar4 = true;
                if (local_38 != 0) {
                    local_70 = this + 72;
                    p_Var14 = (_func_decltype_nullptr*)0;
                    local_50 = pJVar3;
                    do {
                        if (*(int*)(this + 52) == 0)
                            break;
                        cVar6 = local_48->CanCheck((int)p_Var14);
                        if (cVar6 != '\0') {
                            new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var14);
                            uVar15 = local_34;
                            plVar11 = *(long**)local_58;
                            uVar10 = local_50->GetPrefetchPriority();
                            puVar13 = (uint*)(ulong)uVar15;
                            puVar9 = (undefined*)(**(code**)(*plVar11 + 64))(plVar11, local_68, local_50, puVar13,
                                                                             uVar10, 1);
                            if (puVar9 == DataStatus::READY) {
                                MakeSharedPool<ParamType, 640>::MakeShared<BaseTemplateConfigTypeList<ParamType>*&,
                                                                           unsigned int&>(
                                    &local_90, (MakeSharedPool<ParamType, 640>*)local_58,
                                    (BaseTemplateConfigTypeList**)&local_34, puVar13);
                                plVar11 = (long*)shared_ptr<ParamType>::operator->((shared_ptr<ParamType>*)&local_90);
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                puVar9 = (undefined*)(**(code**)(*plVar11 + 32))(plVar11);
                                if (puVar9 == DataStatus::NOTLOADED) {
                                    bVar4 = false;
                                    local_40 = puVar9;
                                } else {
                                    plVar11 =
                                        (long*)shared_ptr<ParamType>::operator->((shared_ptr<ParamType>*)&local_90);
                                    (**(code**)(*plVar11 + 24))(plVar11);
                                    puVar9 = (undefined*)(**(code**)(**(long**)local_58 + 72))();
                                    if (puVar9 == DataStatus::READY) {
                                        this_01 = (shared_ptr<ParamType>*)
                                            Array<shared_ptr<ParamType>, eastl::allocator>::operator[](
                                                (Array<shared_ptr<ParamType>, eastl::allocator>*)local_70,
                                                (ulong)local_34);
                                        shared_ptr<ParamType>::operator=(this_01, &local_90);
                                        *(int*)(this + 60) = *(int*)(this + 60) + 1;
                                        bVar4 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar4 = false;
                                    }
                                }
                                local_90.~shared_ptr();
                                if (bVar4)
                                    goto LAB_1005764db;
                                bVar4 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005764db:
                                bVar4 = true;
                            }
                            local_68->~shared_ptr();
                            if (!bVar4) {
                                bVar4 = false;
                                goto LAB_10057664a;
                            }
                        }
                        local_34 = local_34 + 1;
                        p_Var14 = (_func_decltype_nullptr*)(ulong)local_34;
                    } while (local_34 < local_38);
                    bVar4 = true;
                }
            LAB_10057664a:
                if (!bVar4) {
                    return local_40;
                }
                if (*(uint*)(this + 60) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(code**)(**(long**)(this + 8) + 80))();
                *(undefined4*)(this + 48) = 2;
                this_02 = local_78;
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::reset(
                    local_78, (DownloadWaitHandler*)0);
                uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                *(ulonglong*)(*(long*)(this + 8) + 40) = uVar12;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005766f0, 96 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<ParamType>::List(int, DataStatus const**)
    undefined* ConfigTypeLoadAllContainer<ParamType>::List(int param_1, DataStatus** param_2) {
        int iVar1;
        undefined* puVar2;

        iVar1 = *(int*)(this + 48);
        if (iVar1 == 2) {
            *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar1 != 1) {
                return PTR_NullConfigType_100ee6598;
            }
        }
        puVar2 = (undefined*)Array<shared_ptr<ParamType>, eastl::allocator>::operator[](
            (Array<shared_ptr<ParamType>, eastl::allocator>*)(this + 72), (long)param_1);
        return puVar2;
    }

    // 0x1005767a0, 80 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<ParamType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<ParamType>::~ConfigTypeLoadAllContainer() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee82c8;
        *(undefined**)this = PTR_vtable_100ee82c8 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        ((this + 96))->~unique_ptr();
        ((this + 72))->~Array();
        ((this + 40))->~AutoSingleton();
        ~AutoSingleton();
    }

    // 0x10057bd00, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<DBRowType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<DBRowType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x10057bd20, 128 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<DBRowType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<DBRowType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeLoadAllContainer<DBRowType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList* param_1,
                                                                           Js5ResourceProvider* param_2,
                                                                           Js5ArchiveSettings* param_3,
                                                                           Js5ConfigGroup* param_4, uint param_5) {
        undefined* puVar1;

        new (this) BaseConfigTypeContainer<DBRowType>(param_1, param_2, param_3, param_4);
        new ((this + 40)) BaseLoadAllConfigTypeContainer(param_5);
        puVar1 = PTR_vtable_100ee82b8;
        *(undefined**)this = PTR_vtable_100ee82b8 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        new ((this + 72)) Array<shared_ptr<DBRowType>, eastl::allocator>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
    }

    // 0x10057bdb0, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<DBRowType>::~ConfigTypeLoadAllContainer(): jumps straight to the base-object destructor

    // 0x10057bdc0, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<DBRowType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<DBRowType>::~ConfigTypeLoadAllContainer() {
        ~ConfigTypeLoadAllContainer(this);
        operator_delete(this);
    }

    // 0x10057bde0, 976 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<DBRowType>::LoadList()
    /* WARNING: Removing unreachable block (ram,4300718459) */
    /* ConfigTypeLoadAllContainer<DBRowType>::LoadList() */

    undefined* ConfigTypeLoadAllContainer<DBRowType>::LoadList() {
        int iVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        bool bVar4;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<DBRowType>* pCVar5;
        char cVar6;
        uint uVar7;
        uint uVar8;
        undefined* puVar9;
        undefined8 uVar10;
        long* plVar11;
        shared_ptr<DBRowType>* this_01;
        ulonglong uVar12;
        undefined* in_RCX;
        uint* puVar13;
        _func_decltype_nullptr* p_Var14;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* this_02;
        uint uVar15;
        shared_ptr local_90;
        undefined8 local_80;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* local_78;
        ConfigTypeLoadAllContainer<DBRowType>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<DBRowType>* local_58;
        Js5ArchiveSettings* local_50;
        DownloadWaitHandler* local_48;
        undefined* local_40;
        uint local_38;
        uint local_34;

        if (*(int*)(this + 48) != 2) {
            pJVar2 = *(Js5ArchiveSettings**)(this + 16);
            local_58 = this + 8;
            local_38 = (*(Mixer**)(this + 8))->GetStreamCountLastMix();
            *(uint*)(this + 64) = local_38;
            if (*(int*)(this + 48) == 0) {
                ((this + 72))->set_max_size((ulong)local_38, 0);
                local_68[0] = (Js5Index*)0;
                local_40 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, local_68, *(undefined8*)(this + 24));
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pJVar2;
                std::make_unique<DownloadWaitHandler, unsigned int&>((uint*)&local_90);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96),
                    (unique_ptr*)&local_90);
                local_90.~unique_ptr();
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                        (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
                pCVar5 = local_58;
                if (local_38 != 0) {
                    uVar15 = 0;
                    do {
                        this_00 = local_68[0];
                        uVar7 = (*(BaseConfigTypeList**)pCVar5)->GetClientGroupID(uVar15);
                        uVar8 = (*(BaseConfigTypeList**)pCVar5)->GetClientFileID(uVar15);
                        cVar6 = this_00->DoesFileExist(uVar7, uVar8);
                        if (cVar6 == '\0') {
                            *(int*)(this + 60) = *(int*)(this + 60) + 1;
                        } else {
                            local_48->SetExists(uVar15);
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < local_38);
                }
                *(undefined4*)(this + 48) = 1;
                iVar1 = *(int*)(this + 48);
                pJVar2 = local_50;
            } else {
                iVar1 = *(int*)(this + 48);
                local_40 = in_RCX;
            }
            if (iVar1 == 1) {
                local_80 = 0;
                pJVar3 = *(Js5ArchiveSettings**)(this + 24);
                puVar9 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, &local_80, pJVar3);
                if (puVar9 != DataStatus::READY) {
                    return puVar9;
                }
                local_78 = (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96);
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(local_78);
                local_34 = 0;
                bVar4 = true;
                if (local_38 != 0) {
                    local_70 = this + 72;
                    p_Var14 = (_func_decltype_nullptr*)0;
                    local_50 = pJVar3;
                    do {
                        if (*(int*)(this + 52) == 0)
                            break;
                        cVar6 = local_48->CanCheck((int)p_Var14);
                        if (cVar6 != '\0') {
                            new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var14);
                            uVar15 = local_34;
                            plVar11 = *(long**)local_58;
                            uVar10 = local_50->GetPrefetchPriority();
                            puVar13 = (uint*)(ulong)uVar15;
                            puVar9 = (undefined*)(**(code**)(*plVar11 + 64))(plVar11, local_68, local_50, puVar13,
                                                                             uVar10, 1);
                            if (puVar9 == DataStatus::READY) {
                                MakeSharedPool<DBRowType, 128>::MakeShared<BaseTemplateConfigTypeList<DBRowType>*&,
                                                                           unsigned int&>(
                                    &local_90, (MakeSharedPool<DBRowType, 128>*)local_58,
                                    (BaseTemplateConfigTypeList**)&local_34, puVar13);
                                plVar11 = (long*)shared_ptr<DBRowType>::operator->((shared_ptr<DBRowType>*)&local_90);
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                puVar9 = (undefined*)(**(code**)(*plVar11 + 32))(plVar11);
                                if (puVar9 == DataStatus::NOTLOADED) {
                                    bVar4 = false;
                                    local_40 = puVar9;
                                } else {
                                    plVar11 =
                                        (long*)shared_ptr<DBRowType>::operator->((shared_ptr<DBRowType>*)&local_90);
                                    (**(code**)(*plVar11 + 24))(plVar11);
                                    puVar9 = (undefined*)(**(code**)(**(long**)local_58 + 72))();
                                    if (puVar9 == DataStatus::READY) {
                                        this_01 = (shared_ptr<DBRowType>*)
                                            Array<shared_ptr<DBRowType>, eastl::allocator>::operator[](
                                                (Array<shared_ptr<DBRowType>, eastl::allocator>*)local_70,
                                                (ulong)local_34);
                                        shared_ptr<DBRowType>::operator=(this_01, &local_90);
                                        *(int*)(this + 60) = *(int*)(this + 60) + 1;
                                        bVar4 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar4 = false;
                                    }
                                }
                                local_90.~shared_ptr();
                                if (bVar4)
                                    goto LAB_10057bf9b;
                                bVar4 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_10057bf9b:
                                bVar4 = true;
                            }
                            local_68->~shared_ptr();
                            if (!bVar4) {
                                bVar4 = false;
                                goto LAB_10057c10a;
                            }
                        }
                        local_34 = local_34 + 1;
                        p_Var14 = (_func_decltype_nullptr*)(ulong)local_34;
                    } while (local_34 < local_38);
                    bVar4 = true;
                }
            LAB_10057c10a:
                if (!bVar4) {
                    return local_40;
                }
                if (*(uint*)(this + 60) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(code**)(**(long**)(this + 8) + 80))();
                *(undefined4*)(this + 48) = 2;
                this_02 = local_78;
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::reset(
                    local_78, (DownloadWaitHandler*)0);
                uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                *(ulonglong*)(*(long*)(this + 8) + 40) = uVar12;
            }
        }
        return DataStatus::READY;
    }

    // 0x10057c1b0, 96 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<DBRowType>::List(int, DataStatus const**)
    undefined* ConfigTypeLoadAllContainer<DBRowType>::List(int param_1, DataStatus** param_2) {
        int iVar1;
        undefined* puVar2;

        iVar1 = *(int*)(this + 48);
        if (iVar1 == 2) {
            *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar1 != 1) {
                return PTR_NullConfigType_100ee6588;
            }
        }
        puVar2 = (undefined*)Array<shared_ptr<DBRowType>, eastl::allocator>::operator[](
            (Array<shared_ptr<DBRowType>, eastl::allocator>*)(this + 72), (long)param_1);
        return puVar2;
    }

    // 0x10057c260, 80 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<DBRowType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<DBRowType>::~ConfigTypeLoadAllContainer() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee82b8;
        *(undefined**)this = PTR_vtable_100ee82b8 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        ((this + 96))->~unique_ptr();
        ((this + 72))->~Array();
        ((this + 40))->~AutoSingleton();
        ~AutoSingleton();
    }

    // 0x1005813e0, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<DBTableType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<DBTableType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x100581400, 128 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<DBTableType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<DBTableType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeLoadAllContainer<DBTableType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList* param_1,
                                                                             Js5ResourceProvider* param_2,
                                                                             Js5ArchiveSettings* param_3,
                                                                             Js5ConfigGroup* param_4, uint param_5) {
        undefined* puVar1;

        new (this) BaseConfigTypeContainer<DBTableType>(param_1, param_2, param_3, param_4);
        new ((this + 40)) BaseLoadAllConfigTypeContainer(param_5);
        puVar1 = PTR_vtable_100ee8218;
        *(undefined**)this = PTR_vtable_100ee8218 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        new ((this + 72)) Array<shared_ptr<DBTableType>, eastl::allocator>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
    }

    // 0x100581490, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<DBTableType>::~ConfigTypeLoadAllContainer(): jumps straight to the base-object destructor

    // 0x1005814a0, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<DBTableType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<DBTableType>::~ConfigTypeLoadAllContainer() {
        ~ConfigTypeLoadAllContainer(this);
        operator_delete(this);
    }

    // 0x1005814c0, 976 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<DBTableType>::LoadList()
    /* WARNING: Removing unreachable block (ram,4300740699) */
    /* ConfigTypeLoadAllContainer<DBTableType>::LoadList() */

    undefined* ConfigTypeLoadAllContainer<DBTableType>::LoadList() {
        int iVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        bool bVar4;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<DBTableType>* pCVar5;
        char cVar6;
        uint uVar7;
        uint uVar8;
        undefined* puVar9;
        undefined8 uVar10;
        long* plVar11;
        shared_ptr<DBTableType>* this_01;
        ulonglong uVar12;
        undefined* in_RCX;
        uint* puVar13;
        _func_decltype_nullptr* p_Var14;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* this_02;
        uint uVar15;
        shared_ptr local_90;
        undefined8 local_80;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* local_78;
        ConfigTypeLoadAllContainer<DBTableType>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<DBTableType>* local_58;
        Js5ArchiveSettings* local_50;
        DownloadWaitHandler* local_48;
        undefined* local_40;
        uint local_38;
        uint local_34;

        if (*(int*)(this + 48) != 2) {
            pJVar2 = *(Js5ArchiveSettings**)(this + 16);
            local_58 = this + 8;
            local_38 = (*(Mixer**)(this + 8))->GetStreamCountLastMix();
            *(uint*)(this + 64) = local_38;
            if (*(int*)(this + 48) == 0) {
                ((this + 72))->set_max_size((ulong)local_38, 0);
                local_68[0] = (Js5Index*)0;
                local_40 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, local_68, *(undefined8*)(this + 24));
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pJVar2;
                std::make_unique<DownloadWaitHandler, unsigned int&>((uint*)&local_90);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96),
                    (unique_ptr*)&local_90);
                local_90.~unique_ptr();
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                        (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
                pCVar5 = local_58;
                if (local_38 != 0) {
                    uVar15 = 0;
                    do {
                        this_00 = local_68[0];
                        uVar7 = (*(BaseConfigTypeList**)pCVar5)->GetClientGroupID(uVar15);
                        uVar8 = (*(BaseConfigTypeList**)pCVar5)->GetClientFileID(uVar15);
                        cVar6 = this_00->DoesFileExist(uVar7, uVar8);
                        if (cVar6 == '\0') {
                            *(int*)(this + 60) = *(int*)(this + 60) + 1;
                        } else {
                            local_48->SetExists(uVar15);
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < local_38);
                }
                *(undefined4*)(this + 48) = 1;
                iVar1 = *(int*)(this + 48);
                pJVar2 = local_50;
            } else {
                iVar1 = *(int*)(this + 48);
                local_40 = in_RCX;
            }
            if (iVar1 == 1) {
                local_80 = 0;
                pJVar3 = *(Js5ArchiveSettings**)(this + 24);
                puVar9 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, &local_80, pJVar3);
                if (puVar9 != DataStatus::READY) {
                    return puVar9;
                }
                local_78 = (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96);
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(local_78);
                local_34 = 0;
                bVar4 = true;
                if (local_38 != 0) {
                    local_70 = this + 72;
                    p_Var14 = (_func_decltype_nullptr*)0;
                    local_50 = pJVar3;
                    do {
                        if (*(int*)(this + 52) == 0)
                            break;
                        cVar6 = local_48->CanCheck((int)p_Var14);
                        if (cVar6 != '\0') {
                            new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var14);
                            uVar15 = local_34;
                            plVar11 = *(long**)local_58;
                            uVar10 = local_50->GetPrefetchPriority();
                            puVar13 = (uint*)(ulong)uVar15;
                            puVar9 = (undefined*)(**(code**)(*plVar11 + 64))(plVar11, local_68, local_50, puVar13,
                                                                             uVar10, 1);
                            if (puVar9 == DataStatus::READY) {
                                MakeSharedPool<DBTableType, 4>::MakeShared<BaseTemplateConfigTypeList<DBTableType>*&,
                                                                           unsigned int&>(
                                    &local_90, (MakeSharedPool<DBTableType, 4>*)local_58,
                                    (BaseTemplateConfigTypeList**)&local_34, puVar13);
                                plVar11 =
                                    (long*)shared_ptr<DBTableType>::operator->((shared_ptr<DBTableType>*)&local_90);
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                puVar9 = (undefined*)(**(code**)(*plVar11 + 32))(plVar11);
                                if (puVar9 == DataStatus::NOTLOADED) {
                                    bVar4 = false;
                                    local_40 = puVar9;
                                } else {
                                    plVar11 =
                                        (long*)shared_ptr<DBTableType>::operator->((shared_ptr<DBTableType>*)&local_90);
                                    (**(code**)(*plVar11 + 24))(plVar11);
                                    puVar9 = (undefined*)(**(code**)(**(long**)local_58 + 72))();
                                    if (puVar9 == DataStatus::READY) {
                                        this_01 = (shared_ptr<DBTableType>*)
                                            Array<shared_ptr<DBTableType>, eastl::allocator>::operator[](
                                                (Array<shared_ptr<DBTableType>, eastl::allocator>*)local_70,
                                                (ulong)local_34);
                                        shared_ptr<DBTableType>::operator=(this_01, &local_90);
                                        *(int*)(this + 60) = *(int*)(this + 60) + 1;
                                        bVar4 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar4 = false;
                                    }
                                }
                                local_90.~shared_ptr();
                                if (bVar4)
                                    goto LAB_10058167b;
                                bVar4 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_10058167b:
                                bVar4 = true;
                            }
                            local_68->~shared_ptr();
                            if (!bVar4) {
                                bVar4 = false;
                                goto LAB_1005817ea;
                            }
                        }
                        local_34 = local_34 + 1;
                        p_Var14 = (_func_decltype_nullptr*)(ulong)local_34;
                    } while (local_34 < local_38);
                    bVar4 = true;
                }
            LAB_1005817ea:
                if (!bVar4) {
                    return local_40;
                }
                if (*(uint*)(this + 60) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(code**)(**(long**)(this + 8) + 80))();
                *(undefined4*)(this + 48) = 2;
                this_02 = local_78;
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::reset(
                    local_78, (DownloadWaitHandler*)0);
                uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                *(ulonglong*)(*(long*)(this + 8) + 40) = uVar12;
            }
        }
        return DataStatus::READY;
    }

    // 0x100581890, 96 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<DBTableType>::List(int, DataStatus const**)
    undefined* ConfigTypeLoadAllContainer<DBTableType>::List(int param_1, DataStatus** param_2) {
        int iVar1;
        undefined* puVar2;

        iVar1 = *(int*)(this + 48);
        if (iVar1 == 2) {
            *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar1 != 1) {
                return PTR_NullConfigType_100ee64e8;
            }
        }
        puVar2 = (undefined*)Array<shared_ptr<DBTableType>, eastl::allocator>::operator[](
            (Array<shared_ptr<DBTableType>, eastl::allocator>*)(this + 72), (long)param_1);
        return puVar2;
    }

    // 0x100581940, 80 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<DBTableType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<DBTableType>::~ConfigTypeLoadAllContainer() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee8218;
        *(undefined**)this = PTR_vtable_100ee8218 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        ((this + 96))->~unique_ptr();
        ((this + 72))->~Array();
        ((this + 40))->~AutoSingleton();
        ~AutoSingleton();
    }

    // 0x100586ac0, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<InvType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<InvType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x100586ae0, 128 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<InvType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<InvType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeLoadAllContainer<InvType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList* param_1,
                                                                         Js5ResourceProvider* param_2,
                                                                         Js5ArchiveSettings* param_3,
                                                                         Js5ConfigGroup* param_4, uint param_5) {
        undefined* puVar1;

        new (this) BaseConfigTypeContainer<InvType>(param_1, param_2, param_3, param_4);
        new ((this + 40)) BaseLoadAllConfigTypeContainer(param_5);
        puVar1 = PTR_vtable_100ee8278;
        *(undefined**)this = PTR_vtable_100ee8278 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        new ((this + 72)) Array<shared_ptr<InvType>, eastl::allocator>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
    }

    // 0x100586b70, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<InvType>::~ConfigTypeLoadAllContainer(): jumps straight to the base-object destructor

    // 0x100586b80, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<InvType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<InvType>::~ConfigTypeLoadAllContainer() {
        ~ConfigTypeLoadAllContainer(this);
        operator_delete(this);
    }

    // 0x100586ba0, 976 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<InvType>::LoadList()
    /* WARNING: Removing unreachable block (ram,4300762939) */
    /* ConfigTypeLoadAllContainer<InvType>::LoadList() */

    undefined* ConfigTypeLoadAllContainer<InvType>::LoadList() {
        int iVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        bool bVar4;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<InvType>* pCVar5;
        char cVar6;
        uint uVar7;
        uint uVar8;
        undefined* puVar9;
        undefined8 uVar10;
        long* plVar11;
        shared_ptr<InvType>* this_01;
        ulonglong uVar12;
        undefined* in_RCX;
        uint* puVar13;
        _func_decltype_nullptr* p_Var14;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* this_02;
        uint uVar15;
        shared_ptr local_90;
        undefined8 local_80;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* local_78;
        ConfigTypeLoadAllContainer<InvType>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<InvType>* local_58;
        Js5ArchiveSettings* local_50;
        DownloadWaitHandler* local_48;
        undefined* local_40;
        uint local_38;
        uint local_34;

        if (*(int*)(this + 48) != 2) {
            pJVar2 = *(Js5ArchiveSettings**)(this + 16);
            local_58 = this + 8;
            local_38 = (*(Mixer**)(this + 8))->GetStreamCountLastMix();
            *(uint*)(this + 64) = local_38;
            if (*(int*)(this + 48) == 0) {
                ((this + 72))->set_max_size((ulong)local_38, 0);
                local_68[0] = (Js5Index*)0;
                local_40 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, local_68, *(undefined8*)(this + 24));
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pJVar2;
                std::make_unique<DownloadWaitHandler, unsigned int&>((uint*)&local_90);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96),
                    (unique_ptr*)&local_90);
                local_90.~unique_ptr();
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                        (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
                pCVar5 = local_58;
                if (local_38 != 0) {
                    uVar15 = 0;
                    do {
                        this_00 = local_68[0];
                        uVar7 = (*(BaseConfigTypeList**)pCVar5)->GetClientGroupID(uVar15);
                        uVar8 = (*(BaseConfigTypeList**)pCVar5)->GetClientFileID(uVar15);
                        cVar6 = this_00->DoesFileExist(uVar7, uVar8);
                        if (cVar6 == '\0') {
                            *(int*)(this + 60) = *(int*)(this + 60) + 1;
                        } else {
                            local_48->SetExists(uVar15);
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < local_38);
                }
                *(undefined4*)(this + 48) = 1;
                iVar1 = *(int*)(this + 48);
                pJVar2 = local_50;
            } else {
                iVar1 = *(int*)(this + 48);
                local_40 = in_RCX;
            }
            if (iVar1 == 1) {
                local_80 = 0;
                pJVar3 = *(Js5ArchiveSettings**)(this + 24);
                puVar9 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, &local_80, pJVar3);
                if (puVar9 != DataStatus::READY) {
                    return puVar9;
                }
                local_78 = (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96);
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(local_78);
                local_34 = 0;
                bVar4 = true;
                if (local_38 != 0) {
                    local_70 = this + 72;
                    p_Var14 = (_func_decltype_nullptr*)0;
                    local_50 = pJVar3;
                    do {
                        if (*(int*)(this + 52) == 0)
                            break;
                        cVar6 = local_48->CanCheck((int)p_Var14);
                        if (cVar6 != '\0') {
                            new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var14);
                            uVar15 = local_34;
                            plVar11 = *(long**)local_58;
                            uVar10 = local_50->GetPrefetchPriority();
                            puVar13 = (uint*)(ulong)uVar15;
                            puVar9 = (undefined*)(**(code**)(*plVar11 + 64))(plVar11, local_68, local_50, puVar13,
                                                                             uVar10, 1);
                            if (puVar9 == DataStatus::READY) {
                                MakeSharedPool<InvType, 32>::MakeShared<BaseTemplateConfigTypeList<InvType>*&,
                                                                        unsigned int&>(
                                    &local_90, (MakeSharedPool<InvType, 32>*)local_58,
                                    (BaseTemplateConfigTypeList**)&local_34, puVar13);
                                plVar11 = (long*)shared_ptr<InvType>::operator->((shared_ptr<InvType>*)&local_90);
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                puVar9 = (undefined*)(**(code**)(*plVar11 + 32))(plVar11);
                                if (puVar9 == DataStatus::NOTLOADED) {
                                    bVar4 = false;
                                    local_40 = puVar9;
                                } else {
                                    plVar11 = (long*)shared_ptr<InvType>::operator->((shared_ptr<InvType>*)&local_90);
                                    (**(code**)(*plVar11 + 24))(plVar11);
                                    puVar9 = (undefined*)(**(code**)(**(long**)local_58 + 72))();
                                    if (puVar9 == DataStatus::READY) {
                                        this_01 = (shared_ptr<InvType>*)
                                            Array<shared_ptr<InvType>, eastl::allocator>::operator[](
                                                (Array<shared_ptr<InvType>, eastl::allocator>*)local_70,
                                                (ulong)local_34);
                                        shared_ptr<InvType>::operator=(this_01, &local_90);
                                        *(int*)(this + 60) = *(int*)(this + 60) + 1;
                                        bVar4 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar4 = false;
                                    }
                                }
                                local_90.~shared_ptr();
                                if (bVar4)
                                    goto LAB_100586d5b;
                                bVar4 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_100586d5b:
                                bVar4 = true;
                            }
                            local_68->~shared_ptr();
                            if (!bVar4) {
                                bVar4 = false;
                                goto LAB_100586eca;
                            }
                        }
                        local_34 = local_34 + 1;
                        p_Var14 = (_func_decltype_nullptr*)(ulong)local_34;
                    } while (local_34 < local_38);
                    bVar4 = true;
                }
            LAB_100586eca:
                if (!bVar4) {
                    return local_40;
                }
                if (*(uint*)(this + 60) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(code**)(**(long**)(this + 8) + 80))();
                *(undefined4*)(this + 48) = 2;
                this_02 = local_78;
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::reset(
                    local_78, (DownloadWaitHandler*)0);
                uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                *(ulonglong*)(*(long*)(this + 8) + 40) = uVar12;
            }
        }
        return DataStatus::READY;
    }

    // 0x100586f70, 96 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<InvType>::List(int, DataStatus const**)
    undefined* ConfigTypeLoadAllContainer<InvType>::List(int param_1, DataStatus** param_2) {
        int iVar1;
        undefined* puVar2;

        iVar1 = *(int*)(this + 48);
        if (iVar1 == 2) {
            *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar1 != 1) {
                return PTR_NullConfigType_100ee6548;
            }
        }
        puVar2 = (undefined*)Array<shared_ptr<InvType>, eastl::allocator>::operator[](
            (Array<shared_ptr<InvType>, eastl::allocator>*)(this + 72), (long)param_1);
        return puVar2;
    }

    // 0x100587020, 80 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<InvType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<InvType>::~ConfigTypeLoadAllContainer() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee8278;
        *(undefined**)this = PTR_vtable_100ee8278 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        ((this + 96))->~unique_ptr();
        ((this + 72))->~Array();
        ((this + 40))->~AutoSingleton();
        ~AutoSingleton();
    }

    // 0x10058ae50, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<VarBitType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<VarBitType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x10058ae70, 128 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<VarBitType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<VarBitType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeLoadAllContainer<VarBitType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList* param_1,
                                                                            Js5ResourceProvider* param_2,
                                                                            Js5ArchiveSettings* param_3,
                                                                            Js5ConfigGroup* param_4, uint param_5) {
        undefined* puVar1;

        new (this) BaseConfigTypeContainer<VarBitType>(param_1, param_2, param_3, param_4);
        new ((this + 40)) BaseLoadAllConfigTypeContainer(param_5);
        puVar1 = PTR_vtable_100ee8210;
        *(undefined**)this = PTR_vtable_100ee8210 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        new ((this + 72)) Array<shared_ptr<VarBitType>, eastl::allocator>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
    }

    // 0x10058af00, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<VarBitType>::~ConfigTypeLoadAllContainer(): jumps straight to the base-object destructor

    // 0x10058af10, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<VarBitType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<VarBitType>::~ConfigTypeLoadAllContainer() {
        ~ConfigTypeLoadAllContainer(this);
        operator_delete(this);
    }

    // 0x10058af30, 976 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<VarBitType>::LoadList()
    /* WARNING: Removing unreachable block (ram,4300780235) */
    /* ConfigTypeLoadAllContainer<VarBitType>::LoadList() */

    undefined* ConfigTypeLoadAllContainer<VarBitType>::LoadList() {
        int iVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        bool bVar4;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<VarBitType>* pCVar5;
        char cVar6;
        uint uVar7;
        uint uVar8;
        undefined* puVar9;
        undefined8 uVar10;
        long* plVar11;
        shared_ptr<VarBitType>* this_01;
        ulonglong uVar12;
        undefined* in_RCX;
        uint* puVar13;
        _func_decltype_nullptr* p_Var14;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* this_02;
        uint uVar15;
        shared_ptr local_90;
        undefined8 local_80;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* local_78;
        ConfigTypeLoadAllContainer<VarBitType>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<VarBitType>* local_58;
        Js5ArchiveSettings* local_50;
        DownloadWaitHandler* local_48;
        undefined* local_40;
        uint local_38;
        uint local_34;

        if (*(int*)(this + 48) != 2) {
            pJVar2 = *(Js5ArchiveSettings**)(this + 16);
            local_58 = this + 8;
            local_38 = (*(Mixer**)(this + 8))->GetStreamCountLastMix();
            *(uint*)(this + 64) = local_38;
            if (*(int*)(this + 48) == 0) {
                ((this + 72))->set_max_size((ulong)local_38, 0);
                local_68[0] = (Js5Index*)0;
                local_40 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, local_68, *(undefined8*)(this + 24));
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pJVar2;
                std::make_unique<DownloadWaitHandler, unsigned int&>((uint*)&local_90);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96),
                    (unique_ptr*)&local_90);
                local_90.~unique_ptr();
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                        (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
                pCVar5 = local_58;
                if (local_38 != 0) {
                    uVar15 = 0;
                    do {
                        this_00 = local_68[0];
                        uVar7 = (*(BaseConfigTypeList**)pCVar5)->GetClientGroupID(uVar15);
                        uVar8 = (*(BaseConfigTypeList**)pCVar5)->GetClientFileID(uVar15);
                        cVar6 = this_00->DoesFileExist(uVar7, uVar8);
                        if (cVar6 == '\0') {
                            *(int*)(this + 60) = *(int*)(this + 60) + 1;
                        } else {
                            local_48->SetExists(uVar15);
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < local_38);
                }
                *(undefined4*)(this + 48) = 1;
                iVar1 = *(int*)(this + 48);
                pJVar2 = local_50;
            } else {
                iVar1 = *(int*)(this + 48);
                local_40 = in_RCX;
            }
            if (iVar1 == 1) {
                local_80 = 0;
                pJVar3 = *(Js5ArchiveSettings**)(this + 24);
                puVar9 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, &local_80, pJVar3);
                if (puVar9 != DataStatus::READY) {
                    return puVar9;
                }
                local_78 = (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96);
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(local_78);
                local_34 = 0;
                bVar4 = true;
                if (local_38 != 0) {
                    local_70 = this + 72;
                    p_Var14 = (_func_decltype_nullptr*)0;
                    local_50 = pJVar3;
                    do {
                        if (*(int*)(this + 52) == 0)
                            break;
                        cVar6 = local_48->CanCheck((int)p_Var14);
                        if (cVar6 != '\0') {
                            new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var14);
                            uVar15 = local_34;
                            plVar11 = *(long**)local_58;
                            uVar10 = local_50->GetPrefetchPriority();
                            puVar13 = (uint*)(ulong)uVar15;
                            puVar9 = (undefined*)(**(code**)(*plVar11 + 64))(plVar11, local_68, local_50, puVar13,
                                                                             uVar10, 1);
                            if (puVar9 == DataStatus::READY) {
                                MakeSharedPool<VarBitType, 2048>::MakeShared<BaseTemplateConfigTypeList<VarBitType>*&,
                                                                             unsigned int&>(
                                    &local_90, (MakeSharedPool<VarBitType, 2048>*)local_58,
                                    (BaseTemplateConfigTypeList**)&local_34, puVar13);
                                plVar11 = (long*)shared_ptr<VarBitType>::operator->((shared_ptr<VarBitType>*)&local_90);
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                puVar9 = (undefined*)(**(code**)(*plVar11 + 32))(plVar11);
                                if (puVar9 == DataStatus::NOTLOADED) {
                                    bVar4 = false;
                                    local_40 = puVar9;
                                } else {
                                    plVar11 =
                                        (long*)shared_ptr<VarBitType>::operator->((shared_ptr<VarBitType>*)&local_90);
                                    (**(code**)(*plVar11 + 24))(plVar11);
                                    puVar9 = (undefined*)(**(code**)(**(long**)local_58 + 72))();
                                    if (puVar9 == DataStatus::READY) {
                                        this_01 = (shared_ptr<VarBitType>*)
                                            Array<shared_ptr<VarBitType>, eastl::allocator>::operator[](
                                                (Array<shared_ptr<VarBitType>, eastl::allocator>*)local_70,
                                                (ulong)local_34);
                                        shared_ptr<VarBitType>::operator=(this_01, &local_90);
                                        *(int*)(this + 60) = *(int*)(this + 60) + 1;
                                        bVar4 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar4 = false;
                                    }
                                }
                                local_90.~shared_ptr();
                                if (bVar4)
                                    goto LAB_10058b0eb;
                                bVar4 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_10058b0eb:
                                bVar4 = true;
                            }
                            local_68->~shared_ptr();
                            if (!bVar4) {
                                bVar4 = false;
                                goto LAB_10058b25a;
                            }
                        }
                        local_34 = local_34 + 1;
                        p_Var14 = (_func_decltype_nullptr*)(ulong)local_34;
                    } while (local_34 < local_38);
                    bVar4 = true;
                }
            LAB_10058b25a:
                if (!bVar4) {
                    return local_40;
                }
                if (*(uint*)(this + 60) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(code**)(**(long**)(this + 8) + 80))();
                *(undefined4*)(this + 48) = 2;
                this_02 = local_78;
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::reset(
                    local_78, (DownloadWaitHandler*)0);
                uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                *(ulonglong*)(*(long*)(this + 8) + 40) = uVar12;
            }
        }
        return DataStatus::READY;
    }

    // 0x10058b300, 96 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<VarBitType>::List(int, DataStatus const**)
    undefined* ConfigTypeLoadAllContainer<VarBitType>::List(int param_1, DataStatus** param_2) {
        int iVar1;
        undefined* puVar2;

        iVar1 = *(int*)(this + 48);
        if (iVar1 == 2) {
            *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar1 != 1) {
                return PTR_NullConfigType_100ee64e0;
            }
        }
        puVar2 = (undefined*)Array<shared_ptr<VarBitType>, eastl::allocator>::operator[](
            (Array<shared_ptr<VarBitType>, eastl::allocator>*)(this + 72), (long)param_1);
        return puVar2;
    }

    // 0x10058b3b0, 80 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<VarBitType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<VarBitType>::~ConfigTypeLoadAllContainer() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee8210;
        *(undefined**)this = PTR_vtable_100ee8210 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        ((this + 96))->~unique_ptr();
        ((this + 72))->~Array();
        ((this + 40))->~AutoSingleton();
        ~AutoSingleton();
    }

    // 0x100590600, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<BASType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<BASType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x100590620, 128 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<BASType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<BASType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeLoadAllContainer<BASType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList* param_1,
                                                                         Js5ResourceProvider* param_2,
                                                                         Js5ArchiveSettings* param_3,
                                                                         Js5ConfigGroup* param_4, uint param_5) {
        undefined* puVar1;

        new (this) BaseConfigTypeContainer<BASType>(param_1, param_2, param_3, param_4);
        new ((this + 40)) BaseLoadAllConfigTypeContainer(param_5);
        puVar1 = PTR_vtable_100ee8268;
        *(undefined**)this = PTR_vtable_100ee8268 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        new ((this + 72)) Array<shared_ptr<BASType>, eastl::allocator>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
    }

    // 0x1005906b0, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<BASType>::~ConfigTypeLoadAllContainer(): jumps straight to the base-object destructor

    // 0x1005906c0, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<BASType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<BASType>::~ConfigTypeLoadAllContainer() {
        ~ConfigTypeLoadAllContainer(this);
        operator_delete(this);
    }

    // 0x1005906e0, 976 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<BASType>::LoadList()
    /* WARNING: Removing unreachable block (ram,4300802683) */
    /* ConfigTypeLoadAllContainer<BASType>::LoadList() */

    undefined* ConfigTypeLoadAllContainer<BASType>::LoadList() {
        int iVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        bool bVar4;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<BASType>* pCVar5;
        char cVar6;
        uint uVar7;
        uint uVar8;
        undefined* puVar9;
        undefined8 uVar10;
        long* plVar11;
        shared_ptr<BASType>* this_01;
        ulonglong uVar12;
        undefined* in_RCX;
        uint* puVar13;
        _func_decltype_nullptr* p_Var14;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* this_02;
        uint uVar15;
        shared_ptr local_90;
        undefined8 local_80;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* local_78;
        ConfigTypeLoadAllContainer<BASType>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<BASType>* local_58;
        Js5ArchiveSettings* local_50;
        DownloadWaitHandler* local_48;
        undefined* local_40;
        uint local_38;
        uint local_34;

        if (*(int*)(this + 48) != 2) {
            pJVar2 = *(Js5ArchiveSettings**)(this + 16);
            local_58 = this + 8;
            local_38 = (*(Mixer**)(this + 8))->GetStreamCountLastMix();
            *(uint*)(this + 64) = local_38;
            if (*(int*)(this + 48) == 0) {
                ((this + 72))->set_max_size((ulong)local_38, 0);
                local_68[0] = (Js5Index*)0;
                local_40 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, local_68, *(undefined8*)(this + 24));
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pJVar2;
                std::make_unique<DownloadWaitHandler, unsigned int&>((uint*)&local_90);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96),
                    (unique_ptr*)&local_90);
                local_90.~unique_ptr();
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                        (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
                pCVar5 = local_58;
                if (local_38 != 0) {
                    uVar15 = 0;
                    do {
                        this_00 = local_68[0];
                        uVar7 = (*(BaseConfigTypeList**)pCVar5)->GetClientGroupID(uVar15);
                        uVar8 = (*(BaseConfigTypeList**)pCVar5)->GetClientFileID(uVar15);
                        cVar6 = this_00->DoesFileExist(uVar7, uVar8);
                        if (cVar6 == '\0') {
                            *(int*)(this + 60) = *(int*)(this + 60) + 1;
                        } else {
                            local_48->SetExists(uVar15);
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < local_38);
                }
                *(undefined4*)(this + 48) = 1;
                iVar1 = *(int*)(this + 48);
                pJVar2 = local_50;
            } else {
                iVar1 = *(int*)(this + 48);
                local_40 = in_RCX;
            }
            if (iVar1 == 1) {
                local_80 = 0;
                pJVar3 = *(Js5ArchiveSettings**)(this + 24);
                puVar9 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, &local_80, pJVar3);
                if (puVar9 != DataStatus::READY) {
                    return puVar9;
                }
                local_78 = (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96);
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(local_78);
                local_34 = 0;
                bVar4 = true;
                if (local_38 != 0) {
                    local_70 = this + 72;
                    p_Var14 = (_func_decltype_nullptr*)0;
                    local_50 = pJVar3;
                    do {
                        if (*(int*)(this + 52) == 0)
                            break;
                        cVar6 = local_48->CanCheck((int)p_Var14);
                        if (cVar6 != '\0') {
                            new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var14);
                            uVar15 = local_34;
                            plVar11 = *(long**)local_58;
                            uVar10 = local_50->GetPrefetchPriority();
                            puVar13 = (uint*)(ulong)uVar15;
                            puVar9 = (undefined*)(**(code**)(*plVar11 + 64))(plVar11, local_68, local_50, puVar13,
                                                                             uVar10, 1);
                            if (puVar9 == DataStatus::READY) {
                                MakeSharedPool<BASType, 96>::MakeShared<BaseTemplateConfigTypeList<BASType>*&,
                                                                        unsigned int&>(
                                    &local_90, (MakeSharedPool<BASType, 96>*)local_58,
                                    (BaseTemplateConfigTypeList**)&local_34, puVar13);
                                plVar11 = (long*)shared_ptr<BASType>::operator->((shared_ptr<BASType>*)&local_90);
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                puVar9 = (undefined*)(**(code**)(*plVar11 + 32))(plVar11);
                                if (puVar9 == DataStatus::NOTLOADED) {
                                    bVar4 = false;
                                    local_40 = puVar9;
                                } else {
                                    plVar11 = (long*)shared_ptr<BASType>::operator->((shared_ptr<BASType>*)&local_90);
                                    (**(code**)(*plVar11 + 24))(plVar11);
                                    puVar9 = (undefined*)(**(code**)(**(long**)local_58 + 72))();
                                    if (puVar9 == DataStatus::READY) {
                                        this_01 = (shared_ptr<BASType>*)
                                            Array<shared_ptr<BASType>, eastl::allocator>::operator[](
                                                (Array<shared_ptr<BASType>, eastl::allocator>*)local_70,
                                                (ulong)local_34);
                                        shared_ptr<BASType>::operator=(this_01, &local_90);
                                        *(int*)(this + 60) = *(int*)(this + 60) + 1;
                                        bVar4 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar4 = false;
                                    }
                                }
                                local_90.~shared_ptr();
                                if (bVar4)
                                    goto LAB_10059089b;
                                bVar4 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_10059089b:
                                bVar4 = true;
                            }
                            local_68->~shared_ptr();
                            if (!bVar4) {
                                bVar4 = false;
                                goto LAB_100590a0a;
                            }
                        }
                        local_34 = local_34 + 1;
                        p_Var14 = (_func_decltype_nullptr*)(ulong)local_34;
                    } while (local_34 < local_38);
                    bVar4 = true;
                }
            LAB_100590a0a:
                if (!bVar4) {
                    return local_40;
                }
                if (*(uint*)(this + 60) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(code**)(**(long**)(this + 8) + 80))();
                *(undefined4*)(this + 48) = 2;
                this_02 = local_78;
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::reset(
                    local_78, (DownloadWaitHandler*)0);
                uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                *(ulonglong*)(*(long*)(this + 8) + 40) = uVar12;
            }
        }
        return DataStatus::READY;
    }

    // 0x100590ab0, 96 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<BASType>::List(int, DataStatus const**)
    undefined* ConfigTypeLoadAllContainer<BASType>::List(int param_1, DataStatus** param_2) {
        int iVar1;
        undefined* puVar2;

        iVar1 = *(int*)(this + 48);
        if (iVar1 == 2) {
            *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar1 != 1) {
                return PTR_NullConfigType_100ee6538;
            }
        }
        puVar2 = (undefined*)Array<shared_ptr<BASType>, eastl::allocator>::operator[](
            (Array<shared_ptr<BASType>, eastl::allocator>*)(this + 72), (long)param_1);
        return puVar2;
    }

    // 0x100590b60, 80 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<BASType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<BASType>::~ConfigTypeLoadAllContainer() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee8268;
        *(undefined**)this = PTR_vtable_100ee8268 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        ((this + 96))->~unique_ptr();
        ((this + 72))->~Array();
        ((this + 40))->~AutoSingleton();
        ~AutoSingleton();
    }

    // 0x100595ca0, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<FloorUnderlayType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<FloorUnderlayType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x100595cc0, 128 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<FloorUnderlayType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<FloorUnderlayType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeLoadAllContainer<FloorUnderlayType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList* param_1,
                                                                                   Js5ResourceProvider* param_2,
                                                                                   Js5ArchiveSettings* param_3,
                                                                                   Js5ConfigGroup* param_4,
                                                                                   uint param_5) {
        undefined* puVar1;

        new (this) BaseConfigTypeContainer<FloorUnderlayType>(param_1, param_2, param_3, param_4);
        new ((this + 40)) BaseLoadAllConfigTypeContainer(param_5);
        puVar1 = PTR_vtable_100ee8260;
        *(undefined**)this = PTR_vtable_100ee8260 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        new ((this + 72)) Array<shared_ptr<FloorUnderlayType>, eastl::allocator>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
    }

    // 0x100595d50, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<FloorUnderlayType>::~ConfigTypeLoadAllContainer(): jumps straight to the base-object destructor

    // 0x100595d60, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<FloorUnderlayType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<FloorUnderlayType>::~ConfigTypeLoadAllContainer() {
        ~ConfigTypeLoadAllContainer(this);
        operator_delete(this);
    }

    // 0x100595d80, 976 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<FloorUnderlayType>::LoadList()
    /* WARNING: Removing unreachable block (ram,4300824859) */
    /* ConfigTypeLoadAllContainer<FloorUnderlayType>::LoadList() */

    undefined* ConfigTypeLoadAllContainer<FloorUnderlayType>::LoadList() {
        int iVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        bool bVar4;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<FloorUnderlayType>* pCVar5;
        char cVar6;
        uint uVar7;
        uint uVar8;
        undefined* puVar9;
        undefined8 uVar10;
        long* plVar11;
        shared_ptr<FloorUnderlayType>* this_01;
        ulonglong uVar12;
        undefined* in_RCX;
        uint* puVar13;
        _func_decltype_nullptr* p_Var14;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* this_02;
        uint uVar15;
        shared_ptr local_90;
        undefined8 local_80;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* local_78;
        ConfigTypeLoadAllContainer<FloorUnderlayType>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<FloorUnderlayType>* local_58;
        Js5ArchiveSettings* local_50;
        DownloadWaitHandler* local_48;
        undefined* local_40;
        uint local_38;
        uint local_34;

        if (*(int*)(this + 48) != 2) {
            pJVar2 = *(Js5ArchiveSettings**)(this + 16);
            local_58 = this + 8;
            local_38 = (*(Mixer**)(this + 8))->GetStreamCountLastMix();
            *(uint*)(this + 64) = local_38;
            if (*(int*)(this + 48) == 0) {
                ((this + 72))->set_max_size((ulong)local_38, 0);
                local_68[0] = (Js5Index*)0;
                local_40 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, local_68, *(undefined8*)(this + 24));
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pJVar2;
                std::make_unique<DownloadWaitHandler, unsigned int&>((uint*)&local_90);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96),
                    (unique_ptr*)&local_90);
                local_90.~unique_ptr();
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                        (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
                pCVar5 = local_58;
                if (local_38 != 0) {
                    uVar15 = 0;
                    do {
                        this_00 = local_68[0];
                        uVar7 = (*(BaseConfigTypeList**)pCVar5)->GetClientGroupID(uVar15);
                        uVar8 = (*(BaseConfigTypeList**)pCVar5)->GetClientFileID(uVar15);
                        cVar6 = this_00->DoesFileExist(uVar7, uVar8);
                        if (cVar6 == '\0') {
                            *(int*)(this + 60) = *(int*)(this + 60) + 1;
                        } else {
                            local_48->SetExists(uVar15);
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < local_38);
                }
                *(undefined4*)(this + 48) = 1;
                iVar1 = *(int*)(this + 48);
                pJVar2 = local_50;
            } else {
                iVar1 = *(int*)(this + 48);
                local_40 = in_RCX;
            }
            if (iVar1 == 1) {
                local_80 = 0;
                pJVar3 = *(Js5ArchiveSettings**)(this + 24);
                puVar9 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, &local_80, pJVar3);
                if (puVar9 != DataStatus::READY) {
                    return puVar9;
                }
                local_78 = (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96);
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(local_78);
                local_34 = 0;
                bVar4 = true;
                if (local_38 != 0) {
                    local_70 = this + 72;
                    p_Var14 = (_func_decltype_nullptr*)0;
                    local_50 = pJVar3;
                    do {
                        if (*(int*)(this + 52) == 0)
                            break;
                        cVar6 = local_48->CanCheck((int)p_Var14);
                        if (cVar6 != '\0') {
                            new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var14);
                            uVar15 = local_34;
                            plVar11 = *(long**)local_58;
                            uVar10 = local_50->GetPrefetchPriority();
                            puVar13 = (uint*)(ulong)uVar15;
                            puVar9 = (undefined*)(**(code**)(*plVar11 + 64))(plVar11, local_68, local_50, puVar13,
                                                                             uVar10, 1);
                            if (puVar9 == DataStatus::READY) {
                                MakeSharedPool<FloorUnderlayType, 128>::MakeShared<
                                    BaseTemplateConfigTypeList<FloorUnderlayType>*&, unsigned int&>(
                                    &local_90, (MakeSharedPool<FloorUnderlayType, 128>*)local_58,
                                    (BaseTemplateConfigTypeList**)&local_34, puVar13);
                                plVar11 = (long*)shared_ptr<FloorUnderlayType>::operator->(
                                    (shared_ptr<FloorUnderlayType>*)&local_90);
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                puVar9 = (undefined*)(**(code**)(*plVar11 + 32))(plVar11);
                                if (puVar9 == DataStatus::NOTLOADED) {
                                    bVar4 = false;
                                    local_40 = puVar9;
                                } else {
                                    plVar11 = (long*)shared_ptr<FloorUnderlayType>::operator->(
                                        (shared_ptr<FloorUnderlayType>*)&local_90);
                                    (**(code**)(*plVar11 + 24))(plVar11);
                                    puVar9 = (undefined*)(**(code**)(**(long**)local_58 + 72))();
                                    if (puVar9 == DataStatus::READY) {
                                        this_01 = (shared_ptr<FloorUnderlayType>*)
                                            Array<shared_ptr<FloorUnderlayType>, eastl::allocator>::operator[](
                                                (Array<shared_ptr<FloorUnderlayType>, eastl::allocator>*)local_70,
                                                (ulong)local_34);
                                        shared_ptr<FloorUnderlayType>::operator=(this_01, &local_90);
                                        *(int*)(this + 60) = *(int*)(this + 60) + 1;
                                        bVar4 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar4 = false;
                                    }
                                }
                                local_90.~shared_ptr();
                                if (bVar4)
                                    goto LAB_100595f3b;
                                bVar4 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_100595f3b:
                                bVar4 = true;
                            }
                            local_68->~shared_ptr();
                            if (!bVar4) {
                                bVar4 = false;
                                goto LAB_1005960aa;
                            }
                        }
                        local_34 = local_34 + 1;
                        p_Var14 = (_func_decltype_nullptr*)(ulong)local_34;
                    } while (local_34 < local_38);
                    bVar4 = true;
                }
            LAB_1005960aa:
                if (!bVar4) {
                    return local_40;
                }
                if (*(uint*)(this + 60) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(code**)(**(long**)(this + 8) + 80))();
                *(undefined4*)(this + 48) = 2;
                this_02 = local_78;
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::reset(
                    local_78, (DownloadWaitHandler*)0);
                uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                *(ulonglong*)(*(long*)(this + 8) + 40) = uVar12;
            }
        }
        return DataStatus::READY;
    }

    // 0x100596150, 96 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<FloorUnderlayType>::List(int, DataStatus const**)
    undefined* ConfigTypeLoadAllContainer<FloorUnderlayType>::List(int param_1, DataStatus** param_2) {
        int iVar1;
        undefined* puVar2;

        iVar1 = *(int*)(this + 48);
        if (iVar1 == 2) {
            *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar1 != 1) {
                return PTR_NullConfigType_100ee6530;
            }
        }
        puVar2 = (undefined*)Array<shared_ptr<FloorUnderlayType>, eastl::allocator>::operator[](
            (Array<shared_ptr<FloorUnderlayType>, eastl::allocator>*)(this + 72), (long)param_1);
        return puVar2;
    }

    // 0x100596200, 80 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<FloorUnderlayType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<FloorUnderlayType>::~ConfigTypeLoadAllContainer() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee8260;
        *(undefined**)this = PTR_vtable_100ee8260 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        ((this + 96))->~unique_ptr();
        ((this + 72))->~Array();
        ((this + 40))->~AutoSingleton();
        ~AutoSingleton();
    }

    // 0x10059b350, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<FloorOverlayType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<FloorOverlayType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x10059b370, 128 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<FloorOverlayType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<FloorOverlayType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeLoadAllContainer<FloorOverlayType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList* param_1,
                                                                                  Js5ResourceProvider* param_2,
                                                                                  Js5ArchiveSettings* param_3,
                                                                                  Js5ConfigGroup* param_4,
                                                                                  uint param_5) {
        undefined* puVar1;

        new (this) BaseConfigTypeContainer<FloorOverlayType>(param_1, param_2, param_3, param_4);
        new ((this + 40)) BaseLoadAllConfigTypeContainer(param_5);
        puVar1 = PTR_vtable_100ee8258;
        *(undefined**)this = PTR_vtable_100ee8258 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        new ((this + 72)) Array<shared_ptr<FloorOverlayType>, eastl::allocator>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
    }

    // 0x10059b400, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<FloorOverlayType>::~ConfigTypeLoadAllContainer(): jumps straight to the base-object destructor

    // 0x10059b410, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<FloorOverlayType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<FloorOverlayType>::~ConfigTypeLoadAllContainer() {
        ~ConfigTypeLoadAllContainer(this);
        operator_delete(this);
    }

    // 0x10059b430, 976 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<FloorOverlayType>::LoadList()
    /* WARNING: Removing unreachable block (ram,4300847051) */
    /* ConfigTypeLoadAllContainer<FloorOverlayType>::LoadList() */

    undefined* ConfigTypeLoadAllContainer<FloorOverlayType>::LoadList() {
        int iVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        bool bVar4;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<FloorOverlayType>* pCVar5;
        char cVar6;
        uint uVar7;
        uint uVar8;
        undefined* puVar9;
        undefined8 uVar10;
        long* plVar11;
        shared_ptr<FloorOverlayType>* this_01;
        ulonglong uVar12;
        undefined* in_RCX;
        uint* puVar13;
        _func_decltype_nullptr* p_Var14;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* this_02;
        uint uVar15;
        shared_ptr local_90;
        undefined8 local_80;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* local_78;
        ConfigTypeLoadAllContainer<FloorOverlayType>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<FloorOverlayType>* local_58;
        Js5ArchiveSettings* local_50;
        DownloadWaitHandler* local_48;
        undefined* local_40;
        uint local_38;
        uint local_34;

        if (*(int*)(this + 48) != 2) {
            pJVar2 = *(Js5ArchiveSettings**)(this + 16);
            local_58 = this + 8;
            local_38 = (*(Mixer**)(this + 8))->GetStreamCountLastMix();
            *(uint*)(this + 64) = local_38;
            if (*(int*)(this + 48) == 0) {
                ((this + 72))->set_max_size((ulong)local_38, 0);
                local_68[0] = (Js5Index*)0;
                local_40 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, local_68, *(undefined8*)(this + 24));
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pJVar2;
                std::make_unique<DownloadWaitHandler, unsigned int&>((uint*)&local_90);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96),
                    (unique_ptr*)&local_90);
                local_90.~unique_ptr();
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                        (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
                pCVar5 = local_58;
                if (local_38 != 0) {
                    uVar15 = 0;
                    do {
                        this_00 = local_68[0];
                        uVar7 = (*(BaseConfigTypeList**)pCVar5)->GetClientGroupID(uVar15);
                        uVar8 = (*(BaseConfigTypeList**)pCVar5)->GetClientFileID(uVar15);
                        cVar6 = this_00->DoesFileExist(uVar7, uVar8);
                        if (cVar6 == '\0') {
                            *(int*)(this + 60) = *(int*)(this + 60) + 1;
                        } else {
                            local_48->SetExists(uVar15);
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < local_38);
                }
                *(undefined4*)(this + 48) = 1;
                iVar1 = *(int*)(this + 48);
                pJVar2 = local_50;
            } else {
                iVar1 = *(int*)(this + 48);
                local_40 = in_RCX;
            }
            if (iVar1 == 1) {
                local_80 = 0;
                pJVar3 = *(Js5ArchiveSettings**)(this + 24);
                puVar9 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, &local_80, pJVar3);
                if (puVar9 != DataStatus::READY) {
                    return puVar9;
                }
                local_78 = (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96);
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(local_78);
                local_34 = 0;
                bVar4 = true;
                if (local_38 != 0) {
                    local_70 = this + 72;
                    p_Var14 = (_func_decltype_nullptr*)0;
                    local_50 = pJVar3;
                    do {
                        if (*(int*)(this + 52) == 0)
                            break;
                        cVar6 = local_48->CanCheck((int)p_Var14);
                        if (cVar6 != '\0') {
                            new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var14);
                            uVar15 = local_34;
                            plVar11 = *(long**)local_58;
                            uVar10 = local_50->GetPrefetchPriority();
                            puVar13 = (uint*)(ulong)uVar15;
                            puVar9 = (undefined*)(**(code**)(*plVar11 + 64))(plVar11, local_68, local_50, puVar13,
                                                                             uVar10, 1);
                            if (puVar9 == DataStatus::READY) {
                                MakeSharedPool<FloorOverlayType, 128>::MakeShared<
                                    BaseTemplateConfigTypeList<FloorOverlayType>*&, unsigned int&>(
                                    &local_90, (MakeSharedPool<FloorOverlayType, 128>*)local_58,
                                    (BaseTemplateConfigTypeList**)&local_34, puVar13);
                                plVar11 = (long*)shared_ptr<FloorOverlayType>::operator->(
                                    (shared_ptr<FloorOverlayType>*)&local_90);
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                puVar9 = (undefined*)(**(code**)(*plVar11 + 32))(plVar11);
                                if (puVar9 == DataStatus::NOTLOADED) {
                                    bVar4 = false;
                                    local_40 = puVar9;
                                } else {
                                    plVar11 = (long*)shared_ptr<FloorOverlayType>::operator->(
                                        (shared_ptr<FloorOverlayType>*)&local_90);
                                    (**(code**)(*plVar11 + 24))(plVar11);
                                    puVar9 = (undefined*)(**(code**)(**(long**)local_58 + 72))();
                                    if (puVar9 == DataStatus::READY) {
                                        this_01 = (shared_ptr<FloorOverlayType>*)
                                            Array<shared_ptr<FloorOverlayType>, eastl::allocator>::operator[](
                                                (Array<shared_ptr<FloorOverlayType>, eastl::allocator>*)local_70,
                                                (ulong)local_34);
                                        shared_ptr<FloorOverlayType>::operator=(this_01, &local_90);
                                        *(int*)(this + 60) = *(int*)(this + 60) + 1;
                                        bVar4 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar4 = false;
                                    }
                                }
                                local_90.~shared_ptr();
                                if (bVar4)
                                    goto LAB_10059b5eb;
                                bVar4 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_10059b5eb:
                                bVar4 = true;
                            }
                            local_68->~shared_ptr();
                            if (!bVar4) {
                                bVar4 = false;
                                goto LAB_10059b75a;
                            }
                        }
                        local_34 = local_34 + 1;
                        p_Var14 = (_func_decltype_nullptr*)(ulong)local_34;
                    } while (local_34 < local_38);
                    bVar4 = true;
                }
            LAB_10059b75a:
                if (!bVar4) {
                    return local_40;
                }
                if (*(uint*)(this + 60) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(code**)(**(long**)(this + 8) + 80))();
                *(undefined4*)(this + 48) = 2;
                this_02 = local_78;
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::reset(
                    local_78, (DownloadWaitHandler*)0);
                uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                *(ulonglong*)(*(long*)(this + 8) + 40) = uVar12;
            }
        }
        return DataStatus::READY;
    }

    // 0x10059b800, 96 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<FloorOverlayType>::List(int, DataStatus const**)
    undefined* ConfigTypeLoadAllContainer<FloorOverlayType>::List(int param_1, DataStatus** param_2) {
        int iVar1;
        undefined* puVar2;

        iVar1 = *(int*)(this + 48);
        if (iVar1 == 2) {
            *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar1 != 1) {
                return PTR_NullConfigType_100ee6528;
            }
        }
        puVar2 = (undefined*)Array<shared_ptr<FloorOverlayType>, eastl::allocator>::operator[](
            (Array<shared_ptr<FloorOverlayType>, eastl::allocator>*)(this + 72), (long)param_1);
        return puVar2;
    }

    // 0x10059b8b0, 80 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<FloorOverlayType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<FloorOverlayType>::~ConfigTypeLoadAllContainer() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee8258;
        *(undefined**)this = PTR_vtable_100ee8258 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        ((this + 96))->~unique_ptr();
        ((this + 72))->~Array();
        ((this + 40))->~AutoSingleton();
        ~AutoSingleton();
    }

    // 0x10059ffc0, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<HitmarkType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<HitmarkType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x10059ffe0, 128 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<HitmarkType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<HitmarkType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeLoadAllContainer<HitmarkType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList* param_1,
                                                                             Js5ResourceProvider* param_2,
                                                                             Js5ArchiveSettings* param_3,
                                                                             Js5ConfigGroup* param_4, uint param_5) {
        undefined* puVar1;

        new (this) BaseConfigTypeContainer<HitmarkType>(param_1, param_2, param_3, param_4);
        new ((this + 40)) BaseLoadAllConfigTypeContainer(param_5);
        puVar1 = PTR_vtable_100ee8228;
        *(undefined**)this = PTR_vtable_100ee8228 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        new ((this + 72)) Array<shared_ptr<HitmarkType>, eastl::allocator>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
    }

    // 0x1005a0070, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<HitmarkType>::~ConfigTypeLoadAllContainer(): jumps straight to the base-object destructor

    // 0x1005a0080, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<HitmarkType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<HitmarkType>::~ConfigTypeLoadAllContainer() {
        ~ConfigTypeLoadAllContainer(this);
        operator_delete(this);
    }

    // 0x1005a00a0, 976 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<HitmarkType>::LoadList()
    /* WARNING: Removing unreachable block (ram,4300866619) */
    /* ConfigTypeLoadAllContainer<HitmarkType>::LoadList() */

    undefined* ConfigTypeLoadAllContainer<HitmarkType>::LoadList() {
        int iVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        bool bVar4;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<HitmarkType>* pCVar5;
        char cVar6;
        uint uVar7;
        uint uVar8;
        undefined* puVar9;
        undefined8 uVar10;
        long* plVar11;
        shared_ptr<HitmarkType>* this_01;
        ulonglong uVar12;
        undefined* in_RCX;
        uint* puVar13;
        _func_decltype_nullptr* p_Var14;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* this_02;
        uint uVar15;
        shared_ptr local_90;
        undefined8 local_80;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* local_78;
        ConfigTypeLoadAllContainer<HitmarkType>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<HitmarkType>* local_58;
        Js5ArchiveSettings* local_50;
        DownloadWaitHandler* local_48;
        undefined* local_40;
        uint local_38;
        uint local_34;

        if (*(int*)(this + 48) != 2) {
            pJVar2 = *(Js5ArchiveSettings**)(this + 16);
            local_58 = this + 8;
            local_38 = (*(Mixer**)(this + 8))->GetStreamCountLastMix();
            *(uint*)(this + 64) = local_38;
            if (*(int*)(this + 48) == 0) {
                ((this + 72))->set_max_size((ulong)local_38, 0);
                local_68[0] = (Js5Index*)0;
                local_40 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, local_68, *(undefined8*)(this + 24));
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pJVar2;
                std::make_unique<DownloadWaitHandler, unsigned int&>((uint*)&local_90);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96),
                    (unique_ptr*)&local_90);
                local_90.~unique_ptr();
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                        (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
                pCVar5 = local_58;
                if (local_38 != 0) {
                    uVar15 = 0;
                    do {
                        this_00 = local_68[0];
                        uVar7 = (*(BaseConfigTypeList**)pCVar5)->GetClientGroupID(uVar15);
                        uVar8 = (*(BaseConfigTypeList**)pCVar5)->GetClientFileID(uVar15);
                        cVar6 = this_00->DoesFileExist(uVar7, uVar8);
                        if (cVar6 == '\0') {
                            *(int*)(this + 60) = *(int*)(this + 60) + 1;
                        } else {
                            local_48->SetExists(uVar15);
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < local_38);
                }
                *(undefined4*)(this + 48) = 1;
                iVar1 = *(int*)(this + 48);
                pJVar2 = local_50;
            } else {
                iVar1 = *(int*)(this + 48);
                local_40 = in_RCX;
            }
            if (iVar1 == 1) {
                local_80 = 0;
                pJVar3 = *(Js5ArchiveSettings**)(this + 24);
                puVar9 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, &local_80, pJVar3);
                if (puVar9 != DataStatus::READY) {
                    return puVar9;
                }
                local_78 = (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96);
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(local_78);
                local_34 = 0;
                bVar4 = true;
                if (local_38 != 0) {
                    local_70 = this + 72;
                    p_Var14 = (_func_decltype_nullptr*)0;
                    local_50 = pJVar3;
                    do {
                        if (*(int*)(this + 52) == 0)
                            break;
                        cVar6 = local_48->CanCheck((int)p_Var14);
                        if (cVar6 != '\0') {
                            new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var14);
                            uVar15 = local_34;
                            plVar11 = *(long**)local_58;
                            uVar10 = local_50->GetPrefetchPriority();
                            puVar13 = (uint*)(ulong)uVar15;
                            puVar9 = (undefined*)(**(code**)(*plVar11 + 64))(plVar11, local_68, local_50, puVar13,
                                                                             uVar10, 1);
                            if (puVar9 == DataStatus::READY) {
                                MakeSharedPool<HitmarkType, 32>::MakeShared<BaseTemplateConfigTypeList<HitmarkType>*&,
                                                                            unsigned int&>(
                                    &local_90, (MakeSharedPool<HitmarkType, 32>*)local_58,
                                    (BaseTemplateConfigTypeList**)&local_34, puVar13);
                                plVar11 =
                                    (long*)shared_ptr<HitmarkType>::operator->((shared_ptr<HitmarkType>*)&local_90);
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                puVar9 = (undefined*)(**(code**)(*plVar11 + 32))(plVar11);
                                if (puVar9 == DataStatus::NOTLOADED) {
                                    bVar4 = false;
                                    local_40 = puVar9;
                                } else {
                                    plVar11 =
                                        (long*)shared_ptr<HitmarkType>::operator->((shared_ptr<HitmarkType>*)&local_90);
                                    (**(code**)(*plVar11 + 24))(plVar11);
                                    puVar9 = (undefined*)(**(code**)(**(long**)local_58 + 72))();
                                    if (puVar9 == DataStatus::READY) {
                                        this_01 = (shared_ptr<HitmarkType>*)
                                            Array<shared_ptr<HitmarkType>, eastl::allocator>::operator[](
                                                (Array<shared_ptr<HitmarkType>, eastl::allocator>*)local_70,
                                                (ulong)local_34);
                                        shared_ptr<HitmarkType>::operator=(this_01, &local_90);
                                        *(int*)(this + 60) = *(int*)(this + 60) + 1;
                                        bVar4 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar4 = false;
                                    }
                                }
                                local_90.~shared_ptr();
                                if (bVar4)
                                    goto LAB_1005a025b;
                                bVar4 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005a025b:
                                bVar4 = true;
                            }
                            local_68->~shared_ptr();
                            if (!bVar4) {
                                bVar4 = false;
                                goto LAB_1005a03ca;
                            }
                        }
                        local_34 = local_34 + 1;
                        p_Var14 = (_func_decltype_nullptr*)(ulong)local_34;
                    } while (local_34 < local_38);
                    bVar4 = true;
                }
            LAB_1005a03ca:
                if (!bVar4) {
                    return local_40;
                }
                if (*(uint*)(this + 60) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(code**)(**(long**)(this + 8) + 80))();
                *(undefined4*)(this + 48) = 2;
                this_02 = local_78;
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::reset(
                    local_78, (DownloadWaitHandler*)0);
                uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                *(ulonglong*)(*(long*)(this + 8) + 40) = uVar12;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005a0470, 96 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<HitmarkType>::List(int, DataStatus const**)
    undefined* ConfigTypeLoadAllContainer<HitmarkType>::List(int param_1, DataStatus** param_2) {
        int iVar1;
        undefined* puVar2;

        iVar1 = *(int*)(this + 48);
        if (iVar1 == 2) {
            *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar1 != 1) {
                return PTR_NullConfigType_100ee64f8;
            }
        }
        puVar2 = (undefined*)Array<shared_ptr<HitmarkType>, eastl::allocator>::operator[](
            (Array<shared_ptr<HitmarkType>, eastl::allocator>*)(this + 72), (long)param_1);
        return puVar2;
    }

    // 0x1005a0520, 80 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<HitmarkType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<HitmarkType>::~ConfigTypeLoadAllContainer() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee8228;
        *(undefined**)this = PTR_vtable_100ee8228 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        ((this + 96))->~unique_ptr();
        ((this + 72))->~Array();
        ((this + 40))->~AutoSingleton();
        ~AutoSingleton();
    }

    // 0x1005a5a50, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<HeadbarType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<HeadbarType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005a5a70, 128 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<HeadbarType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<HeadbarType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeLoadAllContainer<HeadbarType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList* param_1,
                                                                             Js5ResourceProvider* param_2,
                                                                             Js5ArchiveSettings* param_3,
                                                                             Js5ConfigGroup* param_4, uint param_5) {
        undefined* puVar1;

        new (this) BaseConfigTypeContainer<HeadbarType>(param_1, param_2, param_3, param_4);
        new ((this + 40)) BaseLoadAllConfigTypeContainer(param_5);
        puVar1 = PTR_vtable_100ee8220;
        *(undefined**)this = PTR_vtable_100ee8220 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        new ((this + 72)) Array<shared_ptr<HeadbarType>, eastl::allocator>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
    }

    // 0x1005a5b00, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<HeadbarType>::~ConfigTypeLoadAllContainer(): jumps straight to the base-object destructor

    // 0x1005a5b10, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<HeadbarType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<HeadbarType>::~ConfigTypeLoadAllContainer() {
        ~ConfigTypeLoadAllContainer(this);
        operator_delete(this);
    }

    // 0x1005a5b30, 976 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<HeadbarType>::LoadList()
    /* WARNING: Removing unreachable block (ram,4300889803) */
    /* ConfigTypeLoadAllContainer<HeadbarType>::LoadList() */

    undefined* ConfigTypeLoadAllContainer<HeadbarType>::LoadList() {
        int iVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        bool bVar4;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<HeadbarType>* pCVar5;
        char cVar6;
        uint uVar7;
        uint uVar8;
        undefined* puVar9;
        undefined8 uVar10;
        long* plVar11;
        shared_ptr<HeadbarType>* this_01;
        ulonglong uVar12;
        undefined* in_RCX;
        uint* puVar13;
        _func_decltype_nullptr* p_Var14;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* this_02;
        uint uVar15;
        shared_ptr local_90;
        undefined8 local_80;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* local_78;
        ConfigTypeLoadAllContainer<HeadbarType>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<HeadbarType>* local_58;
        Js5ArchiveSettings* local_50;
        DownloadWaitHandler* local_48;
        undefined* local_40;
        uint local_38;
        uint local_34;

        if (*(int*)(this + 48) != 2) {
            pJVar2 = *(Js5ArchiveSettings**)(this + 16);
            local_58 = this + 8;
            local_38 = (*(Mixer**)(this + 8))->GetStreamCountLastMix();
            *(uint*)(this + 64) = local_38;
            if (*(int*)(this + 48) == 0) {
                ((this + 72))->set_max_size((ulong)local_38, 0);
                local_68[0] = (Js5Index*)0;
                local_40 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, local_68, *(undefined8*)(this + 24));
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pJVar2;
                std::make_unique<DownloadWaitHandler, unsigned int&>((uint*)&local_90);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96),
                    (unique_ptr*)&local_90);
                local_90.~unique_ptr();
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                        (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
                pCVar5 = local_58;
                if (local_38 != 0) {
                    uVar15 = 0;
                    do {
                        this_00 = local_68[0];
                        uVar7 = (*(BaseConfigTypeList**)pCVar5)->GetClientGroupID(uVar15);
                        uVar8 = (*(BaseConfigTypeList**)pCVar5)->GetClientFileID(uVar15);
                        cVar6 = this_00->DoesFileExist(uVar7, uVar8);
                        if (cVar6 == '\0') {
                            *(int*)(this + 60) = *(int*)(this + 60) + 1;
                        } else {
                            local_48->SetExists(uVar15);
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < local_38);
                }
                *(undefined4*)(this + 48) = 1;
                iVar1 = *(int*)(this + 48);
                pJVar2 = local_50;
            } else {
                iVar1 = *(int*)(this + 48);
                local_40 = in_RCX;
            }
            if (iVar1 == 1) {
                local_80 = 0;
                pJVar3 = *(Js5ArchiveSettings**)(this + 24);
                puVar9 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, &local_80, pJVar3);
                if (puVar9 != DataStatus::READY) {
                    return puVar9;
                }
                local_78 = (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96);
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(local_78);
                local_34 = 0;
                bVar4 = true;
                if (local_38 != 0) {
                    local_70 = this + 72;
                    p_Var14 = (_func_decltype_nullptr*)0;
                    local_50 = pJVar3;
                    do {
                        if (*(int*)(this + 52) == 0)
                            break;
                        cVar6 = local_48->CanCheck((int)p_Var14);
                        if (cVar6 != '\0') {
                            new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var14);
                            uVar15 = local_34;
                            plVar11 = *(long**)local_58;
                            uVar10 = local_50->GetPrefetchPriority();
                            puVar13 = (uint*)(ulong)uVar15;
                            puVar9 = (undefined*)(**(code**)(*plVar11 + 64))(plVar11, local_68, local_50, puVar13,
                                                                             uVar10, 1);
                            if (puVar9 == DataStatus::READY) {
                                MakeSharedPool<HeadbarType, 32>::MakeShared<BaseTemplateConfigTypeList<HeadbarType>*&,
                                                                            unsigned int&>(
                                    &local_90, (MakeSharedPool<HeadbarType, 32>*)local_58,
                                    (BaseTemplateConfigTypeList**)&local_34, puVar13);
                                plVar11 =
                                    (long*)shared_ptr<HeadbarType>::operator->((shared_ptr<HeadbarType>*)&local_90);
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                puVar9 = (undefined*)(**(code**)(*plVar11 + 32))(plVar11);
                                if (puVar9 == DataStatus::NOTLOADED) {
                                    bVar4 = false;
                                    local_40 = puVar9;
                                } else {
                                    plVar11 =
                                        (long*)shared_ptr<HeadbarType>::operator->((shared_ptr<HeadbarType>*)&local_90);
                                    (**(code**)(*plVar11 + 24))(plVar11);
                                    puVar9 = (undefined*)(**(code**)(**(long**)local_58 + 72))();
                                    if (puVar9 == DataStatus::READY) {
                                        this_01 = (shared_ptr<HeadbarType>*)
                                            Array<shared_ptr<HeadbarType>, eastl::allocator>::operator[](
                                                (Array<shared_ptr<HeadbarType>, eastl::allocator>*)local_70,
                                                (ulong)local_34);
                                        shared_ptr<HeadbarType>::operator=(this_01, &local_90);
                                        *(int*)(this + 60) = *(int*)(this + 60) + 1;
                                        bVar4 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar4 = false;
                                    }
                                }
                                local_90.~shared_ptr();
                                if (bVar4)
                                    goto LAB_1005a5ceb;
                                bVar4 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005a5ceb:
                                bVar4 = true;
                            }
                            local_68->~shared_ptr();
                            if (!bVar4) {
                                bVar4 = false;
                                goto LAB_1005a5e5a;
                            }
                        }
                        local_34 = local_34 + 1;
                        p_Var14 = (_func_decltype_nullptr*)(ulong)local_34;
                    } while (local_34 < local_38);
                    bVar4 = true;
                }
            LAB_1005a5e5a:
                if (!bVar4) {
                    return local_40;
                }
                if (*(uint*)(this + 60) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(code**)(**(long**)(this + 8) + 80))();
                *(undefined4*)(this + 48) = 2;
                this_02 = local_78;
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::reset(
                    local_78, (DownloadWaitHandler*)0);
                uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                *(ulonglong*)(*(long*)(this + 8) + 40) = uVar12;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005a5f00, 96 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<HeadbarType>::List(int, DataStatus const**)
    undefined* ConfigTypeLoadAllContainer<HeadbarType>::List(int param_1, DataStatus** param_2) {
        int iVar1;
        undefined* puVar2;

        iVar1 = *(int*)(this + 48);
        if (iVar1 == 2) {
            *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar1 != 1) {
                return PTR_NullConfigType_100ee64f0;
            }
        }
        puVar2 = (undefined*)Array<shared_ptr<HeadbarType>, eastl::allocator>::operator[](
            (Array<shared_ptr<HeadbarType>, eastl::allocator>*)(this + 72), (long)param_1);
        return puVar2;
    }

    // 0x1005a5fb0, 80 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<HeadbarType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<HeadbarType>::~ConfigTypeLoadAllContainer() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee8220;
        *(undefined**)this = PTR_vtable_100ee8220 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        ((this + 96))->~unique_ptr();
        ((this + 72))->~Array();
        ((this + 40))->~AutoSingleton();
        ~AutoSingleton();
    }

    // 0x1005ab330, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<IDKType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<IDKType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005ab350, 128 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<IDKType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<IDKType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeLoadAllContainer<IDKType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList* param_1,
                                                                         Js5ResourceProvider* param_2,
                                                                         Js5ArchiveSettings* param_3,
                                                                         Js5ConfigGroup* param_4, uint param_5) {
        undefined* puVar1;

        new (this) BaseConfigTypeContainer<IDKType>(param_1, param_2, param_3, param_4);
        new ((this + 40)) BaseLoadAllConfigTypeContainer(param_5);
        puVar1 = PTR_vtable_100ee8270;
        *(undefined**)this = PTR_vtable_100ee8270 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        new ((this + 72)) Array<shared_ptr<IDKType>, eastl::allocator>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
    }

    // 0x1005ab3e0, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<IDKType>::~ConfigTypeLoadAllContainer(): jumps straight to the base-object destructor

    // 0x1005ab3f0, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<IDKType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<IDKType>::~ConfigTypeLoadAllContainer() {
        ~ConfigTypeLoadAllContainer(this);
        operator_delete(this);
    }

    // 0x1005ab410, 976 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<IDKType>::LoadList()
    /* WARNING: Removing unreachable block (ram,4300912555) */
    /* ConfigTypeLoadAllContainer<IDKType>::LoadList() */

    undefined* ConfigTypeLoadAllContainer<IDKType>::LoadList() {
        int iVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        bool bVar4;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<IDKType>* pCVar5;
        char cVar6;
        uint uVar7;
        uint uVar8;
        undefined* puVar9;
        undefined8 uVar10;
        long* plVar11;
        shared_ptr<IDKType>* this_01;
        ulonglong uVar12;
        undefined* in_RCX;
        uint* puVar13;
        _func_decltype_nullptr* p_Var14;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* this_02;
        uint uVar15;
        shared_ptr local_90;
        undefined8 local_80;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* local_78;
        ConfigTypeLoadAllContainer<IDKType>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<IDKType>* local_58;
        Js5ArchiveSettings* local_50;
        DownloadWaitHandler* local_48;
        undefined* local_40;
        uint local_38;
        uint local_34;

        if (*(int*)(this + 48) != 2) {
            pJVar2 = *(Js5ArchiveSettings**)(this + 16);
            local_58 = this + 8;
            local_38 = (*(Mixer**)(this + 8))->GetStreamCountLastMix();
            *(uint*)(this + 64) = local_38;
            if (*(int*)(this + 48) == 0) {
                ((this + 72))->set_max_size((ulong)local_38, 0);
                local_68[0] = (Js5Index*)0;
                local_40 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, local_68, *(undefined8*)(this + 24));
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pJVar2;
                std::make_unique<DownloadWaitHandler, unsigned int&>((uint*)&local_90);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96),
                    (unique_ptr*)&local_90);
                local_90.~unique_ptr();
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                        (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
                pCVar5 = local_58;
                if (local_38 != 0) {
                    uVar15 = 0;
                    do {
                        this_00 = local_68[0];
                        uVar7 = (*(BaseConfigTypeList**)pCVar5)->GetClientGroupID(uVar15);
                        uVar8 = (*(BaseConfigTypeList**)pCVar5)->GetClientFileID(uVar15);
                        cVar6 = this_00->DoesFileExist(uVar7, uVar8);
                        if (cVar6 == '\0') {
                            *(int*)(this + 60) = *(int*)(this + 60) + 1;
                        } else {
                            local_48->SetExists(uVar15);
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < local_38);
                }
                *(undefined4*)(this + 48) = 1;
                iVar1 = *(int*)(this + 48);
                pJVar2 = local_50;
            } else {
                iVar1 = *(int*)(this + 48);
                local_40 = in_RCX;
            }
            if (iVar1 == 1) {
                local_80 = 0;
                pJVar3 = *(Js5ArchiveSettings**)(this + 24);
                puVar9 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, &local_80, pJVar3);
                if (puVar9 != DataStatus::READY) {
                    return puVar9;
                }
                local_78 = (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96);
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(local_78);
                local_34 = 0;
                bVar4 = true;
                if (local_38 != 0) {
                    local_70 = this + 72;
                    p_Var14 = (_func_decltype_nullptr*)0;
                    local_50 = pJVar3;
                    do {
                        if (*(int*)(this + 52) == 0)
                            break;
                        cVar6 = local_48->CanCheck((int)p_Var14);
                        if (cVar6 != '\0') {
                            new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var14);
                            uVar15 = local_34;
                            plVar11 = *(long**)local_58;
                            uVar10 = local_50->GetPrefetchPriority();
                            puVar13 = (uint*)(ulong)uVar15;
                            puVar9 = (undefined*)(**(code**)(*plVar11 + 64))(plVar11, local_68, local_50, puVar13,
                                                                             uVar10, 1);
                            if (puVar9 == DataStatus::READY) {
                                MakeSharedPool<IDKType, 32>::MakeShared<BaseTemplateConfigTypeList<IDKType>*&,
                                                                        unsigned int&>(
                                    &local_90, (MakeSharedPool<IDKType, 32>*)local_58,
                                    (BaseTemplateConfigTypeList**)&local_34, puVar13);
                                plVar11 = (long*)shared_ptr<IDKType>::operator->((shared_ptr<IDKType>*)&local_90);
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                puVar9 = (undefined*)(**(code**)(*plVar11 + 32))(plVar11);
                                if (puVar9 == DataStatus::NOTLOADED) {
                                    bVar4 = false;
                                    local_40 = puVar9;
                                } else {
                                    plVar11 = (long*)shared_ptr<IDKType>::operator->((shared_ptr<IDKType>*)&local_90);
                                    (**(code**)(*plVar11 + 24))(plVar11);
                                    puVar9 = (undefined*)(**(code**)(**(long**)local_58 + 72))();
                                    if (puVar9 == DataStatus::READY) {
                                        this_01 = (shared_ptr<IDKType>*)
                                            Array<shared_ptr<IDKType>, eastl::allocator>::operator[](
                                                (Array<shared_ptr<IDKType>, eastl::allocator>*)local_70,
                                                (ulong)local_34);
                                        shared_ptr<IDKType>::operator=(this_01, &local_90);
                                        *(int*)(this + 60) = *(int*)(this + 60) + 1;
                                        bVar4 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar4 = false;
                                    }
                                }
                                local_90.~shared_ptr();
                                if (bVar4)
                                    goto LAB_1005ab5cb;
                                bVar4 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005ab5cb:
                                bVar4 = true;
                            }
                            local_68->~shared_ptr();
                            if (!bVar4) {
                                bVar4 = false;
                                goto LAB_1005ab73a;
                            }
                        }
                        local_34 = local_34 + 1;
                        p_Var14 = (_func_decltype_nullptr*)(ulong)local_34;
                    } while (local_34 < local_38);
                    bVar4 = true;
                }
            LAB_1005ab73a:
                if (!bVar4) {
                    return local_40;
                }
                if (*(uint*)(this + 60) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(code**)(**(long**)(this + 8) + 80))();
                *(undefined4*)(this + 48) = 2;
                this_02 = local_78;
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::reset(
                    local_78, (DownloadWaitHandler*)0);
                uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                *(ulonglong*)(*(long*)(this + 8) + 40) = uVar12;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005ab7e0, 96 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<IDKType>::List(int, DataStatus const**)
    undefined* ConfigTypeLoadAllContainer<IDKType>::List(int param_1, DataStatus** param_2) {
        int iVar1;
        undefined* puVar2;

        iVar1 = *(int*)(this + 48);
        if (iVar1 == 2) {
            *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar1 != 1) {
                return PTR_NullConfigType_100ee6540;
            }
        }
        puVar2 = (undefined*)Array<shared_ptr<IDKType>, eastl::allocator>::operator[](
            (Array<shared_ptr<IDKType>, eastl::allocator>*)(this + 72), (long)param_1);
        return puVar2;
    }

    // 0x1005ab890, 80 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<IDKType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<IDKType>::~ConfigTypeLoadAllContainer() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee8270;
        *(undefined**)this = PTR_vtable_100ee8270 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        ((this + 96))->~unique_ptr();
        ((this + 72))->~Array();
        ((this + 40))->~AutoSingleton();
        ~AutoSingleton();
    }

    // 0x1005b1590, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<MapElementType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<MapElementType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005b15b0, 128 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<MapElementType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<MapElementType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeLoadAllContainer<MapElementType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList* param_1,
                                                                                Js5ResourceProvider* param_2,
                                                                                Js5ArchiveSettings* param_3,
                                                                                Js5ConfigGroup* param_4, uint param_5) {
        undefined* puVar1;

        new (this) BaseConfigTypeContainer<MapElementType>(param_1, param_2, param_3, param_4);
        new ((this + 40)) BaseLoadAllConfigTypeContainer(param_5);
        puVar1 = PTR_vtable_100ee8248;
        *(undefined**)this = PTR_vtable_100ee8248 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        new ((this + 72)) Array<shared_ptr<MapElementType>, eastl::allocator>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
    }

    // 0x1005b1640, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<MapElementType>::~ConfigTypeLoadAllContainer(): jumps straight to the base-object destructor

    // 0x1005b1650, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<MapElementType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<MapElementType>::~ConfigTypeLoadAllContainer() {
        ~ConfigTypeLoadAllContainer(this);
        operator_delete(this);
    }

    // 0x1005b1670, 976 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<MapElementType>::LoadList()
    /* WARNING: Removing unreachable block (ram,4300937739) */
    /* ConfigTypeLoadAllContainer<MapElementType>::LoadList() */

    undefined* ConfigTypeLoadAllContainer<MapElementType>::LoadList() {
        int iVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        bool bVar4;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<MapElementType>* pCVar5;
        char cVar6;
        uint uVar7;
        uint uVar8;
        undefined* puVar9;
        undefined8 uVar10;
        long* plVar11;
        shared_ptr<MapElementType>* this_01;
        ulonglong uVar12;
        undefined* in_RCX;
        uint* puVar13;
        _func_decltype_nullptr* p_Var14;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* this_02;
        uint uVar15;
        shared_ptr local_90;
        undefined8 local_80;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* local_78;
        ConfigTypeLoadAllContainer<MapElementType>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<MapElementType>* local_58;
        Js5ArchiveSettings* local_50;
        DownloadWaitHandler* local_48;
        undefined* local_40;
        uint local_38;
        uint local_34;

        if (*(int*)(this + 48) != 2) {
            pJVar2 = *(Js5ArchiveSettings**)(this + 16);
            local_58 = this + 8;
            local_38 = (*(Mixer**)(this + 8))->GetStreamCountLastMix();
            *(uint*)(this + 64) = local_38;
            if (*(int*)(this + 48) == 0) {
                ((this + 72))->set_max_size((ulong)local_38, 0);
                local_68[0] = (Js5Index*)0;
                local_40 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, local_68, *(undefined8*)(this + 24));
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pJVar2;
                std::make_unique<DownloadWaitHandler, unsigned int&>((uint*)&local_90);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96),
                    (unique_ptr*)&local_90);
                local_90.~unique_ptr();
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                        (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
                pCVar5 = local_58;
                if (local_38 != 0) {
                    uVar15 = 0;
                    do {
                        this_00 = local_68[0];
                        uVar7 = (*(BaseConfigTypeList**)pCVar5)->GetClientGroupID(uVar15);
                        uVar8 = (*(BaseConfigTypeList**)pCVar5)->GetClientFileID(uVar15);
                        cVar6 = this_00->DoesFileExist(uVar7, uVar8);
                        if (cVar6 == '\0') {
                            *(int*)(this + 60) = *(int*)(this + 60) + 1;
                        } else {
                            local_48->SetExists(uVar15);
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < local_38);
                }
                *(undefined4*)(this + 48) = 1;
                iVar1 = *(int*)(this + 48);
                pJVar2 = local_50;
            } else {
                iVar1 = *(int*)(this + 48);
                local_40 = in_RCX;
            }
            if (iVar1 == 1) {
                local_80 = 0;
                pJVar3 = *(Js5ArchiveSettings**)(this + 24);
                puVar9 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, &local_80, pJVar3);
                if (puVar9 != DataStatus::READY) {
                    return puVar9;
                }
                local_78 = (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96);
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(local_78);
                local_34 = 0;
                bVar4 = true;
                if (local_38 != 0) {
                    local_70 = this + 72;
                    p_Var14 = (_func_decltype_nullptr*)0;
                    local_50 = pJVar3;
                    do {
                        if (*(int*)(this + 52) == 0)
                            break;
                        cVar6 = local_48->CanCheck((int)p_Var14);
                        if (cVar6 != '\0') {
                            new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var14);
                            uVar15 = local_34;
                            plVar11 = *(long**)local_58;
                            uVar10 = local_50->GetPrefetchPriority();
                            puVar13 = (uint*)(ulong)uVar15;
                            puVar9 = (undefined*)(**(code**)(*plVar11 + 64))(plVar11, local_68, local_50, puVar13,
                                                                             uVar10, 1);
                            if (puVar9 == DataStatus::READY) {
                                MakeSharedPool<MapElementType, 512>::MakeShared<
                                    BaseTemplateConfigTypeList<MapElementType>*&, unsigned int&>(
                                    &local_90, (MakeSharedPool<MapElementType, 512>*)local_58,
                                    (BaseTemplateConfigTypeList**)&local_34, puVar13);
                                plVar11 = (long*)shared_ptr<MapElementType>::operator->(
                                    (shared_ptr<MapElementType>*)&local_90);
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                puVar9 = (undefined*)(**(code**)(*plVar11 + 32))(plVar11);
                                if (puVar9 == DataStatus::NOTLOADED) {
                                    bVar4 = false;
                                    local_40 = puVar9;
                                } else {
                                    plVar11 = (long*)shared_ptr<MapElementType>::operator->(
                                        (shared_ptr<MapElementType>*)&local_90);
                                    (**(code**)(*plVar11 + 24))(plVar11);
                                    puVar9 = (undefined*)(**(code**)(**(long**)local_58 + 72))();
                                    if (puVar9 == DataStatus::READY) {
                                        this_01 = (shared_ptr<MapElementType>*)
                                            Array<shared_ptr<MapElementType>, eastl::allocator>::operator[](
                                                (Array<shared_ptr<MapElementType>, eastl::allocator>*)local_70,
                                                (ulong)local_34);
                                        shared_ptr<MapElementType>::operator=(this_01, &local_90);
                                        *(int*)(this + 60) = *(int*)(this + 60) + 1;
                                        bVar4 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar4 = false;
                                    }
                                }
                                local_90.~shared_ptr();
                                if (bVar4)
                                    goto LAB_1005b182b;
                                bVar4 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005b182b:
                                bVar4 = true;
                            }
                            local_68->~shared_ptr();
                            if (!bVar4) {
                                bVar4 = false;
                                goto LAB_1005b199a;
                            }
                        }
                        local_34 = local_34 + 1;
                        p_Var14 = (_func_decltype_nullptr*)(ulong)local_34;
                    } while (local_34 < local_38);
                    bVar4 = true;
                }
            LAB_1005b199a:
                if (!bVar4) {
                    return local_40;
                }
                if (*(uint*)(this + 60) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(code**)(**(long**)(this + 8) + 80))();
                *(undefined4*)(this + 48) = 2;
                this_02 = local_78;
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::reset(
                    local_78, (DownloadWaitHandler*)0);
                uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                *(ulonglong*)(*(long*)(this + 8) + 40) = uVar12;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005b1a40, 96 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<MapElementType>::List(int, DataStatus const**)
    undefined* ConfigTypeLoadAllContainer<MapElementType>::List(int param_1, DataStatus** param_2) {
        int iVar1;
        undefined* puVar2;

        iVar1 = *(int*)(this + 48);
        if (iVar1 == 2) {
            *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar1 != 1) {
                return PTR_NullConfigType_100ee6518;
            }
        }
        puVar2 = (undefined*)Array<shared_ptr<MapElementType>, eastl::allocator>::operator[](
            (Array<shared_ptr<MapElementType>, eastl::allocator>*)(this + 72), (long)param_1);
        return puVar2;
    }

    // 0x1005b1af0, 80 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<MapElementType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<MapElementType>::~ConfigTypeLoadAllContainer() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee8248;
        *(undefined**)this = PTR_vtable_100ee8248 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        ((this + 96))->~unique_ptr();
        ((this + 72))->~Array();
        ((this + 40))->~AutoSingleton();
        ~AutoSingleton();
    }

    // 0x1005b72e0, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<MSIType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<MSIType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005b7300, 128 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<MSIType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<MSIType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeLoadAllContainer<MSIType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList* param_1,
                                                                         Js5ResourceProvider* param_2,
                                                                         Js5ArchiveSettings* param_3,
                                                                         Js5ConfigGroup* param_4, uint param_5) {
        undefined* puVar1;

        new (this) BaseConfigTypeContainer<MSIType>(param_1, param_2, param_3, param_4);
        new ((this + 40)) BaseLoadAllConfigTypeContainer(param_5);
        puVar1 = PTR_vtable_100ee8288;
        *(undefined**)this = PTR_vtable_100ee8288 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        new ((this + 72)) Array<shared_ptr<MSIType>, eastl::allocator>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
    }

    // 0x1005b7390, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<MSIType>::~ConfigTypeLoadAllContainer(): jumps straight to the base-object destructor

    // 0x1005b73a0, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<MSIType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<MSIType>::~ConfigTypeLoadAllContainer() {
        ~ConfigTypeLoadAllContainer(this);
        operator_delete(this);
    }

    // 0x1005b73c0, 976 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<MSIType>::LoadList()
    /* WARNING: Removing unreachable block (ram,4300961627) */
    /* ConfigTypeLoadAllContainer<MSIType>::LoadList() */

    undefined* ConfigTypeLoadAllContainer<MSIType>::LoadList() {
        int iVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        bool bVar4;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<MSIType>* pCVar5;
        char cVar6;
        uint uVar7;
        uint uVar8;
        undefined* puVar9;
        undefined8 uVar10;
        long* plVar11;
        shared_ptr<MSIType>* this_01;
        ulonglong uVar12;
        undefined* in_RCX;
        uint* puVar13;
        _func_decltype_nullptr* p_Var14;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* this_02;
        uint uVar15;
        shared_ptr local_90;
        undefined8 local_80;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* local_78;
        ConfigTypeLoadAllContainer<MSIType>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<MSIType>* local_58;
        Js5ArchiveSettings* local_50;
        DownloadWaitHandler* local_48;
        undefined* local_40;
        uint local_38;
        uint local_34;

        if (*(int*)(this + 48) != 2) {
            pJVar2 = *(Js5ArchiveSettings**)(this + 16);
            local_58 = this + 8;
            local_38 = (*(Mixer**)(this + 8))->GetStreamCountLastMix();
            *(uint*)(this + 64) = local_38;
            if (*(int*)(this + 48) == 0) {
                ((this + 72))->set_max_size((ulong)local_38, 0);
                local_68[0] = (Js5Index*)0;
                local_40 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, local_68, *(undefined8*)(this + 24));
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pJVar2;
                std::make_unique<DownloadWaitHandler, unsigned int&>((uint*)&local_90);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96),
                    (unique_ptr*)&local_90);
                local_90.~unique_ptr();
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                        (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
                pCVar5 = local_58;
                if (local_38 != 0) {
                    uVar15 = 0;
                    do {
                        this_00 = local_68[0];
                        uVar7 = (*(BaseConfigTypeList**)pCVar5)->GetClientGroupID(uVar15);
                        uVar8 = (*(BaseConfigTypeList**)pCVar5)->GetClientFileID(uVar15);
                        cVar6 = this_00->DoesFileExist(uVar7, uVar8);
                        if (cVar6 == '\0') {
                            *(int*)(this + 60) = *(int*)(this + 60) + 1;
                        } else {
                            local_48->SetExists(uVar15);
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < local_38);
                }
                *(undefined4*)(this + 48) = 1;
                iVar1 = *(int*)(this + 48);
                pJVar2 = local_50;
            } else {
                iVar1 = *(int*)(this + 48);
                local_40 = in_RCX;
            }
            if (iVar1 == 1) {
                local_80 = 0;
                pJVar3 = *(Js5ArchiveSettings**)(this + 24);
                puVar9 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, &local_80, pJVar3);
                if (puVar9 != DataStatus::READY) {
                    return puVar9;
                }
                local_78 = (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96);
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(local_78);
                local_34 = 0;
                bVar4 = true;
                if (local_38 != 0) {
                    local_70 = this + 72;
                    p_Var14 = (_func_decltype_nullptr*)0;
                    local_50 = pJVar3;
                    do {
                        if (*(int*)(this + 52) == 0)
                            break;
                        cVar6 = local_48->CanCheck((int)p_Var14);
                        if (cVar6 != '\0') {
                            new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var14);
                            uVar15 = local_34;
                            plVar11 = *(long**)local_58;
                            uVar10 = local_50->GetPrefetchPriority();
                            puVar13 = (uint*)(ulong)uVar15;
                            puVar9 = (undefined*)(**(code**)(*plVar11 + 64))(plVar11, local_68, local_50, puVar13,
                                                                             uVar10, 1);
                            if (puVar9 == DataStatus::READY) {
                                MakeSharedPool<MSIType, 32>::MakeShared<BaseTemplateConfigTypeList<MSIType>*&,
                                                                        unsigned int&>(
                                    &local_90, (MakeSharedPool<MSIType, 32>*)local_58,
                                    (BaseTemplateConfigTypeList**)&local_34, puVar13);
                                plVar11 = (long*)shared_ptr<MSIType>::operator->((shared_ptr<MSIType>*)&local_90);
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                puVar9 = (undefined*)(**(code**)(*plVar11 + 32))(plVar11);
                                if (puVar9 == DataStatus::NOTLOADED) {
                                    bVar4 = false;
                                    local_40 = puVar9;
                                } else {
                                    plVar11 = (long*)shared_ptr<MSIType>::operator->((shared_ptr<MSIType>*)&local_90);
                                    (**(code**)(*plVar11 + 24))(plVar11);
                                    puVar9 = (undefined*)(**(code**)(**(long**)local_58 + 72))();
                                    if (puVar9 == DataStatus::READY) {
                                        this_01 = (shared_ptr<MSIType>*)
                                            Array<shared_ptr<MSIType>, eastl::allocator>::operator[](
                                                (Array<shared_ptr<MSIType>, eastl::allocator>*)local_70,
                                                (ulong)local_34);
                                        shared_ptr<MSIType>::operator=(this_01, &local_90);
                                        *(int*)(this + 60) = *(int*)(this + 60) + 1;
                                        bVar4 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar4 = false;
                                    }
                                }
                                local_90.~shared_ptr();
                                if (bVar4)
                                    goto LAB_1005b757b;
                                bVar4 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005b757b:
                                bVar4 = true;
                            }
                            local_68->~shared_ptr();
                            if (!bVar4) {
                                bVar4 = false;
                                goto LAB_1005b76ea;
                            }
                        }
                        local_34 = local_34 + 1;
                        p_Var14 = (_func_decltype_nullptr*)(ulong)local_34;
                    } while (local_34 < local_38);
                    bVar4 = true;
                }
            LAB_1005b76ea:
                if (!bVar4) {
                    return local_40;
                }
                if (*(uint*)(this + 60) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(code**)(**(long**)(this + 8) + 80))();
                *(undefined4*)(this + 48) = 2;
                this_02 = local_78;
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::reset(
                    local_78, (DownloadWaitHandler*)0);
                uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                *(ulonglong*)(*(long*)(this + 8) + 40) = uVar12;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005b7790, 96 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<MSIType>::List(int, DataStatus const**)
    undefined* ConfigTypeLoadAllContainer<MSIType>::List(int param_1, DataStatus** param_2) {
        int iVar1;
        undefined* puVar2;

        iVar1 = *(int*)(this + 48);
        if (iVar1 == 2) {
            *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar1 != 1) {
                return PTR_NullConfigType_100ee6558;
            }
        }
        puVar2 = (undefined*)Array<shared_ptr<MSIType>, eastl::allocator>::operator[](
            (Array<shared_ptr<MSIType>, eastl::allocator>*)(this + 72), (long)param_1);
        return puVar2;
    }

    // 0x1005b7840, 80 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<MSIType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<MSIType>::~ConfigTypeLoadAllContainer() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee8288;
        *(undefined**)this = PTR_vtable_100ee8288 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        ((this + 96))->~unique_ptr();
        ((this + 72))->~Array();
        ((this + 40))->~AutoSingleton();
        ~AutoSingleton();
    }

    // 0x1005bd290, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<QuestType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<QuestType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005bd2b0, 128 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<QuestType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<QuestType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeLoadAllContainer<QuestType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList* param_1,
                                                                           Js5ResourceProvider* param_2,
                                                                           Js5ArchiveSettings* param_3,
                                                                           Js5ConfigGroup* param_4, uint param_5) {
        undefined* puVar1;

        new (this) BaseConfigTypeContainer<QuestType>(param_1, param_2, param_3, param_4);
        new ((this + 40)) BaseLoadAllConfigTypeContainer(param_5);
        puVar1 = PTR_vtable_100ee82d0;
        *(undefined**)this = PTR_vtable_100ee82d0 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        new ((this + 72)) Array<shared_ptr<QuestType>, eastl::allocator>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
    }

    // 0x1005bd340, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<QuestType>::~ConfigTypeLoadAllContainer(): jumps straight to the base-object destructor

    // 0x1005bd350, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<QuestType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<QuestType>::~ConfigTypeLoadAllContainer() {
        ~ConfigTypeLoadAllContainer(this);
        operator_delete(this);
    }

    // 0x1005bd370, 976 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<QuestType>::LoadList()
    /* WARNING: Removing unreachable block (ram,4300986123) */
    /* ConfigTypeLoadAllContainer<QuestType>::LoadList() */

    undefined* ConfigTypeLoadAllContainer<QuestType>::LoadList() {
        int iVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        bool bVar4;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<QuestType>* pCVar5;
        char cVar6;
        uint uVar7;
        uint uVar8;
        undefined* puVar9;
        undefined8 uVar10;
        long* plVar11;
        shared_ptr<QuestType>* this_01;
        ulonglong uVar12;
        undefined* in_RCX;
        uint* puVar13;
        _func_decltype_nullptr* p_Var14;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* this_02;
        uint uVar15;
        shared_ptr local_90;
        undefined8 local_80;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* local_78;
        ConfigTypeLoadAllContainer<QuestType>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<QuestType>* local_58;
        Js5ArchiveSettings* local_50;
        DownloadWaitHandler* local_48;
        undefined* local_40;
        uint local_38;
        uint local_34;

        if (*(int*)(this + 48) != 2) {
            pJVar2 = *(Js5ArchiveSettings**)(this + 16);
            local_58 = this + 8;
            local_38 = (*(Mixer**)(this + 8))->GetStreamCountLastMix();
            *(uint*)(this + 64) = local_38;
            if (*(int*)(this + 48) == 0) {
                ((this + 72))->set_max_size((ulong)local_38, 0);
                local_68[0] = (Js5Index*)0;
                local_40 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, local_68, *(undefined8*)(this + 24));
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pJVar2;
                std::make_unique<DownloadWaitHandler, unsigned int&>((uint*)&local_90);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96),
                    (unique_ptr*)&local_90);
                local_90.~unique_ptr();
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                        (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
                pCVar5 = local_58;
                if (local_38 != 0) {
                    uVar15 = 0;
                    do {
                        this_00 = local_68[0];
                        uVar7 = (*(BaseConfigTypeList**)pCVar5)->GetClientGroupID(uVar15);
                        uVar8 = (*(BaseConfigTypeList**)pCVar5)->GetClientFileID(uVar15);
                        cVar6 = this_00->DoesFileExist(uVar7, uVar8);
                        if (cVar6 == '\0') {
                            *(int*)(this + 60) = *(int*)(this + 60) + 1;
                        } else {
                            local_48->SetExists(uVar15);
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < local_38);
                }
                *(undefined4*)(this + 48) = 1;
                iVar1 = *(int*)(this + 48);
                pJVar2 = local_50;
            } else {
                iVar1 = *(int*)(this + 48);
                local_40 = in_RCX;
            }
            if (iVar1 == 1) {
                local_80 = 0;
                pJVar3 = *(Js5ArchiveSettings**)(this + 24);
                puVar9 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, &local_80, pJVar3);
                if (puVar9 != DataStatus::READY) {
                    return puVar9;
                }
                local_78 = (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96);
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(local_78);
                local_34 = 0;
                bVar4 = true;
                if (local_38 != 0) {
                    local_70 = this + 72;
                    p_Var14 = (_func_decltype_nullptr*)0;
                    local_50 = pJVar3;
                    do {
                        if (*(int*)(this + 52) == 0)
                            break;
                        cVar6 = local_48->CanCheck((int)p_Var14);
                        if (cVar6 != '\0') {
                            new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var14);
                            uVar15 = local_34;
                            plVar11 = *(long**)local_58;
                            uVar10 = local_50->GetPrefetchPriority();
                            puVar13 = (uint*)(ulong)uVar15;
                            puVar9 = (undefined*)(**(code**)(*plVar11 + 64))(plVar11, local_68, local_50, puVar13,
                                                                             uVar10, 1);
                            if (puVar9 == DataStatus::READY) {
                                MakeSharedPool<QuestType, 128>::MakeShared<BaseTemplateConfigTypeList<QuestType>*&,
                                                                           unsigned int&>(
                                    &local_90, (MakeSharedPool<QuestType, 128>*)local_58,
                                    (BaseTemplateConfigTypeList**)&local_34, puVar13);
                                plVar11 = (long*)shared_ptr<QuestType>::operator->((shared_ptr<QuestType>*)&local_90);
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                puVar9 = (undefined*)(**(code**)(*plVar11 + 32))(plVar11);
                                if (puVar9 == DataStatus::NOTLOADED) {
                                    bVar4 = false;
                                    local_40 = puVar9;
                                } else {
                                    plVar11 =
                                        (long*)shared_ptr<QuestType>::operator->((shared_ptr<QuestType>*)&local_90);
                                    (**(code**)(*plVar11 + 24))(plVar11);
                                    puVar9 = (undefined*)(**(code**)(**(long**)local_58 + 72))();
                                    if (puVar9 == DataStatus::READY) {
                                        this_01 = (shared_ptr<QuestType>*)
                                            Array<shared_ptr<QuestType>, eastl::allocator>::operator[](
                                                (Array<shared_ptr<QuestType>, eastl::allocator>*)local_70,
                                                (ulong)local_34);
                                        shared_ptr<QuestType>::operator=(this_01, &local_90);
                                        *(int*)(this + 60) = *(int*)(this + 60) + 1;
                                        bVar4 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar4 = false;
                                    }
                                }
                                local_90.~shared_ptr();
                                if (bVar4)
                                    goto LAB_1005bd52b;
                                bVar4 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005bd52b:
                                bVar4 = true;
                            }
                            local_68->~shared_ptr();
                            if (!bVar4) {
                                bVar4 = false;
                                goto LAB_1005bd69a;
                            }
                        }
                        local_34 = local_34 + 1;
                        p_Var14 = (_func_decltype_nullptr*)(ulong)local_34;
                    } while (local_34 < local_38);
                    bVar4 = true;
                }
            LAB_1005bd69a:
                if (!bVar4) {
                    return local_40;
                }
                if (*(uint*)(this + 60) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(code**)(**(long**)(this + 8) + 80))();
                *(undefined4*)(this + 48) = 2;
                this_02 = local_78;
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::reset(
                    local_78, (DownloadWaitHandler*)0);
                uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                *(ulonglong*)(*(long*)(this + 8) + 40) = uVar12;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005bd740, 96 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<QuestType>::List(int, DataStatus const**)
    undefined* ConfigTypeLoadAllContainer<QuestType>::List(int param_1, DataStatus** param_2) {
        int iVar1;
        undefined* puVar2;

        iVar1 = *(int*)(this + 48);
        if (iVar1 == 2) {
            *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar1 != 1) {
                return PTR_NullConfigType_100ee65a0;
            }
        }
        puVar2 = (undefined*)Array<shared_ptr<QuestType>, eastl::allocator>::operator[](
            (Array<shared_ptr<QuestType>, eastl::allocator>*)(this + 72), (long)param_1);
        return puVar2;
    }

    // 0x1005bd7f0, 80 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<QuestType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<QuestType>::~ConfigTypeLoadAllContainer() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee82d0;
        *(undefined**)this = PTR_vtable_100ee82d0 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        ((this + 96))->~unique_ptr();
        ((this + 72))->~Array();
        ((this + 40))->~AutoSingleton();
        ~AutoSingleton();
    }

    // 0x1005c29b0, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<SeqGroupType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<SeqGroupType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005c29d0, 128 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<SeqGroupType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<SeqGroupType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeLoadAllContainer<SeqGroupType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList* param_1,
                                                                              Js5ResourceProvider* param_2,
                                                                              Js5ArchiveSettings* param_3,
                                                                              Js5ConfigGroup* param_4, uint param_5) {
        undefined* puVar1;

        new (this) BaseConfigTypeContainer<SeqGroupType>(param_1, param_2, param_3, param_4);
        new ((this + 40)) BaseLoadAllConfigTypeContainer(param_5);
        puVar1 = PTR_vtable_100ee8230;
        *(undefined**)this = PTR_vtable_100ee8230 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        new ((this + 72)) Array<shared_ptr<SeqGroupType>, eastl::allocator>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
    }

    // 0x1005c2a60, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<SeqGroupType>::~ConfigTypeLoadAllContainer(): jumps straight to the base-object destructor

    // 0x1005c2a70, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<SeqGroupType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<SeqGroupType>::~ConfigTypeLoadAllContainer() {
        ~ConfigTypeLoadAllContainer(this);
        operator_delete(this);
    }

    // 0x1005c2a90, 976 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<SeqGroupType>::LoadList()
    /* WARNING: Removing unreachable block (ram,4301008427) */
    /* ConfigTypeLoadAllContainer<SeqGroupType>::LoadList() */

    undefined* ConfigTypeLoadAllContainer<SeqGroupType>::LoadList() {
        int iVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        bool bVar4;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<SeqGroupType>* pCVar5;
        char cVar6;
        uint uVar7;
        uint uVar8;
        undefined* puVar9;
        undefined8 uVar10;
        long* plVar11;
        shared_ptr<SeqGroupType>* this_01;
        ulonglong uVar12;
        undefined* in_RCX;
        uint* puVar13;
        _func_decltype_nullptr* p_Var14;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* this_02;
        uint uVar15;
        shared_ptr local_90;
        undefined8 local_80;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* local_78;
        ConfigTypeLoadAllContainer<SeqGroupType>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<SeqGroupType>* local_58;
        Js5ArchiveSettings* local_50;
        DownloadWaitHandler* local_48;
        undefined* local_40;
        uint local_38;
        uint local_34;

        if (*(int*)(this + 48) != 2) {
            pJVar2 = *(Js5ArchiveSettings**)(this + 16);
            local_58 = this + 8;
            local_38 = (*(Mixer**)(this + 8))->GetStreamCountLastMix();
            *(uint*)(this + 64) = local_38;
            if (*(int*)(this + 48) == 0) {
                ((this + 72))->set_max_size((ulong)local_38, 0);
                local_68[0] = (Js5Index*)0;
                local_40 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, local_68, *(undefined8*)(this + 24));
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pJVar2;
                std::make_unique<DownloadWaitHandler, unsigned int&>((uint*)&local_90);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96),
                    (unique_ptr*)&local_90);
                local_90.~unique_ptr();
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                        (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
                pCVar5 = local_58;
                if (local_38 != 0) {
                    uVar15 = 0;
                    do {
                        this_00 = local_68[0];
                        uVar7 = (*(BaseConfigTypeList**)pCVar5)->GetClientGroupID(uVar15);
                        uVar8 = (*(BaseConfigTypeList**)pCVar5)->GetClientFileID(uVar15);
                        cVar6 = this_00->DoesFileExist(uVar7, uVar8);
                        if (cVar6 == '\0') {
                            *(int*)(this + 60) = *(int*)(this + 60) + 1;
                        } else {
                            local_48->SetExists(uVar15);
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < local_38);
                }
                *(undefined4*)(this + 48) = 1;
                iVar1 = *(int*)(this + 48);
                pJVar2 = local_50;
            } else {
                iVar1 = *(int*)(this + 48);
                local_40 = in_RCX;
            }
            if (iVar1 == 1) {
                local_80 = 0;
                pJVar3 = *(Js5ArchiveSettings**)(this + 24);
                puVar9 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, &local_80, pJVar3);
                if (puVar9 != DataStatus::READY) {
                    return puVar9;
                }
                local_78 = (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96);
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(local_78);
                local_34 = 0;
                bVar4 = true;
                if (local_38 != 0) {
                    local_70 = this + 72;
                    p_Var14 = (_func_decltype_nullptr*)0;
                    local_50 = pJVar3;
                    do {
                        if (*(int*)(this + 52) == 0)
                            break;
                        cVar6 = local_48->CanCheck((int)p_Var14);
                        if (cVar6 != '\0') {
                            new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var14);
                            uVar15 = local_34;
                            plVar11 = *(long**)local_58;
                            uVar10 = local_50->GetPrefetchPriority();
                            puVar13 = (uint*)(ulong)uVar15;
                            puVar9 = (undefined*)(**(code**)(*plVar11 + 64))(plVar11, local_68, local_50, puVar13,
                                                                             uVar10, 1);
                            if (puVar9 == DataStatus::READY) {
                                MakeSharedPool<SeqGroupType, 64>::MakeShared<BaseTemplateConfigTypeList<SeqGroupType>*&,
                                                                             unsigned int&>(
                                    &local_90, (MakeSharedPool<SeqGroupType, 64>*)local_58,
                                    (BaseTemplateConfigTypeList**)&local_34, puVar13);
                                plVar11 =
                                    (long*)shared_ptr<SeqGroupType>::operator->((shared_ptr<SeqGroupType>*)&local_90);
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                puVar9 = (undefined*)(**(code**)(*plVar11 + 32))(plVar11);
                                if (puVar9 == DataStatus::NOTLOADED) {
                                    bVar4 = false;
                                    local_40 = puVar9;
                                } else {
                                    plVar11 = (long*)shared_ptr<SeqGroupType>::operator->(
                                        (shared_ptr<SeqGroupType>*)&local_90);
                                    (**(code**)(*plVar11 + 24))(plVar11);
                                    puVar9 = (undefined*)(**(code**)(**(long**)local_58 + 72))();
                                    if (puVar9 == DataStatus::READY) {
                                        this_01 = (shared_ptr<SeqGroupType>*)
                                            Array<shared_ptr<SeqGroupType>, eastl::allocator>::operator[](
                                                (Array<shared_ptr<SeqGroupType>, eastl::allocator>*)local_70,
                                                (ulong)local_34);
                                        shared_ptr<SeqGroupType>::operator=(this_01, &local_90);
                                        *(int*)(this + 60) = *(int*)(this + 60) + 1;
                                        bVar4 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar4 = false;
                                    }
                                }
                                local_90.~shared_ptr();
                                if (bVar4)
                                    goto LAB_1005c2c4b;
                                bVar4 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005c2c4b:
                                bVar4 = true;
                            }
                            local_68->~shared_ptr();
                            if (!bVar4) {
                                bVar4 = false;
                                goto LAB_1005c2dba;
                            }
                        }
                        local_34 = local_34 + 1;
                        p_Var14 = (_func_decltype_nullptr*)(ulong)local_34;
                    } while (local_34 < local_38);
                    bVar4 = true;
                }
            LAB_1005c2dba:
                if (!bVar4) {
                    return local_40;
                }
                if (*(uint*)(this + 60) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(code**)(**(long**)(this + 8) + 80))();
                *(undefined4*)(this + 48) = 2;
                this_02 = local_78;
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::reset(
                    local_78, (DownloadWaitHandler*)0);
                uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                *(ulonglong*)(*(long*)(this + 8) + 40) = uVar12;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005c2e60, 96 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<SeqGroupType>::List(int, DataStatus const**)
    undefined* ConfigTypeLoadAllContainer<SeqGroupType>::List(int param_1, DataStatus** param_2) {
        int iVar1;
        undefined* puVar2;

        iVar1 = *(int*)(this + 48);
        if (iVar1 == 2) {
            *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar1 != 1) {
                return PTR_NullConfigType_100ee6500;
            }
        }
        puVar2 = (undefined*)Array<shared_ptr<SeqGroupType>, eastl::allocator>::operator[](
            (Array<shared_ptr<SeqGroupType>, eastl::allocator>*)(this + 72), (long)param_1);
        return puVar2;
    }

    // 0x1005c2f10, 80 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<SeqGroupType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<SeqGroupType>::~ConfigTypeLoadAllContainer() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee8230;
        *(undefined**)this = PTR_vtable_100ee8230 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        ((this + 96))->~unique_ptr();
        ((this + 72))->~Array();
        ((this + 40))->~AutoSingleton();
        ~AutoSingleton();
    }

    // 0x1005c8060, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<LightType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<LightType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005c8080, 128 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<LightType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<LightType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeLoadAllContainer<LightType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList* param_1,
                                                                           Js5ResourceProvider* param_2,
                                                                           Js5ArchiveSettings* param_3,
                                                                           Js5ConfigGroup* param_4, uint param_5) {
        undefined* puVar1;

        new (this) BaseConfigTypeContainer<LightType>(param_1, param_2, param_3, param_4);
        new ((this + 40)) BaseLoadAllConfigTypeContainer(param_5);
        puVar1 = PTR_vtable_100ee82c0;
        *(undefined**)this = PTR_vtable_100ee82c0 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        new ((this + 72)) Array<shared_ptr<LightType>, eastl::allocator>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
    }

    // 0x1005c8110, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<LightType>::~ConfigTypeLoadAllContainer(): jumps straight to the base-object destructor

    // 0x1005c8120, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<LightType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<LightType>::~ConfigTypeLoadAllContainer() {
        ~ConfigTypeLoadAllContainer(this);
        operator_delete(this);
    }

    // 0x1005c8140, 976 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<LightType>::LoadList()
    /* WARNING: Removing unreachable block (ram,4301030619) */
    /* ConfigTypeLoadAllContainer<LightType>::LoadList() */

    undefined* ConfigTypeLoadAllContainer<LightType>::LoadList() {
        int iVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        bool bVar4;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<LightType>* pCVar5;
        char cVar6;
        uint uVar7;
        uint uVar8;
        undefined* puVar9;
        undefined8 uVar10;
        long* plVar11;
        shared_ptr<LightType>* this_01;
        ulonglong uVar12;
        undefined* in_RCX;
        uint* puVar13;
        _func_decltype_nullptr* p_Var14;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* this_02;
        uint uVar15;
        shared_ptr local_90;
        undefined8 local_80;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* local_78;
        ConfigTypeLoadAllContainer<LightType>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<LightType>* local_58;
        Js5ArchiveSettings* local_50;
        DownloadWaitHandler* local_48;
        undefined* local_40;
        uint local_38;
        uint local_34;

        if (*(int*)(this + 48) != 2) {
            pJVar2 = *(Js5ArchiveSettings**)(this + 16);
            local_58 = this + 8;
            local_38 = (*(Mixer**)(this + 8))->GetStreamCountLastMix();
            *(uint*)(this + 64) = local_38;
            if (*(int*)(this + 48) == 0) {
                ((this + 72))->set_max_size((ulong)local_38, 0);
                local_68[0] = (Js5Index*)0;
                local_40 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, local_68, *(undefined8*)(this + 24));
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pJVar2;
                std::make_unique<DownloadWaitHandler, unsigned int&>((uint*)&local_90);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96),
                    (unique_ptr*)&local_90);
                local_90.~unique_ptr();
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                        (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
                pCVar5 = local_58;
                if (local_38 != 0) {
                    uVar15 = 0;
                    do {
                        this_00 = local_68[0];
                        uVar7 = (*(BaseConfigTypeList**)pCVar5)->GetClientGroupID(uVar15);
                        uVar8 = (*(BaseConfigTypeList**)pCVar5)->GetClientFileID(uVar15);
                        cVar6 = this_00->DoesFileExist(uVar7, uVar8);
                        if (cVar6 == '\0') {
                            *(int*)(this + 60) = *(int*)(this + 60) + 1;
                        } else {
                            local_48->SetExists(uVar15);
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < local_38);
                }
                *(undefined4*)(this + 48) = 1;
                iVar1 = *(int*)(this + 48);
                pJVar2 = local_50;
            } else {
                iVar1 = *(int*)(this + 48);
                local_40 = in_RCX;
            }
            if (iVar1 == 1) {
                local_80 = 0;
                pJVar3 = *(Js5ArchiveSettings**)(this + 24);
                puVar9 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, &local_80, pJVar3);
                if (puVar9 != DataStatus::READY) {
                    return puVar9;
                }
                local_78 = (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96);
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(local_78);
                local_34 = 0;
                bVar4 = true;
                if (local_38 != 0) {
                    local_70 = this + 72;
                    p_Var14 = (_func_decltype_nullptr*)0;
                    local_50 = pJVar3;
                    do {
                        if (*(int*)(this + 52) == 0)
                            break;
                        cVar6 = local_48->CanCheck((int)p_Var14);
                        if (cVar6 != '\0') {
                            new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var14);
                            uVar15 = local_34;
                            plVar11 = *(long**)local_58;
                            uVar10 = local_50->GetPrefetchPriority();
                            puVar13 = (uint*)(ulong)uVar15;
                            puVar9 = (undefined*)(**(code**)(*plVar11 + 64))(plVar11, local_68, local_50, puVar13,
                                                                             uVar10, 1);
                            if (puVar9 == DataStatus::READY) {
                                MakeSharedPool<LightType, 32>::MakeShared<BaseTemplateConfigTypeList<LightType>*&,
                                                                          unsigned int&>(
                                    &local_90, (MakeSharedPool<LightType, 32>*)local_58,
                                    (BaseTemplateConfigTypeList**)&local_34, puVar13);
                                plVar11 = (long*)shared_ptr<LightType>::operator->((shared_ptr<LightType>*)&local_90);
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                puVar9 = (undefined*)(**(code**)(*plVar11 + 32))(plVar11);
                                if (puVar9 == DataStatus::NOTLOADED) {
                                    bVar4 = false;
                                    local_40 = puVar9;
                                } else {
                                    plVar11 =
                                        (long*)shared_ptr<LightType>::operator->((shared_ptr<LightType>*)&local_90);
                                    (**(code**)(*plVar11 + 24))(plVar11);
                                    puVar9 = (undefined*)(**(code**)(**(long**)local_58 + 72))();
                                    if (puVar9 == DataStatus::READY) {
                                        this_01 = (shared_ptr<LightType>*)
                                            Array<shared_ptr<LightType>, eastl::allocator>::operator[](
                                                (Array<shared_ptr<LightType>, eastl::allocator>*)local_70,
                                                (ulong)local_34);
                                        shared_ptr<LightType>::operator=(this_01, &local_90);
                                        *(int*)(this + 60) = *(int*)(this + 60) + 1;
                                        bVar4 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar4 = false;
                                    }
                                }
                                local_90.~shared_ptr();
                                if (bVar4)
                                    goto LAB_1005c82fb;
                                bVar4 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005c82fb:
                                bVar4 = true;
                            }
                            local_68->~shared_ptr();
                            if (!bVar4) {
                                bVar4 = false;
                                goto LAB_1005c846a;
                            }
                        }
                        local_34 = local_34 + 1;
                        p_Var14 = (_func_decltype_nullptr*)(ulong)local_34;
                    } while (local_34 < local_38);
                    bVar4 = true;
                }
            LAB_1005c846a:
                if (!bVar4) {
                    return local_40;
                }
                if (*(uint*)(this + 60) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(code**)(**(long**)(this + 8) + 80))();
                *(undefined4*)(this + 48) = 2;
                this_02 = local_78;
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::reset(
                    local_78, (DownloadWaitHandler*)0);
                uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                *(ulonglong*)(*(long*)(this + 8) + 40) = uVar12;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005c8510, 96 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<LightType>::List(int, DataStatus const**)
    undefined* ConfigTypeLoadAllContainer<LightType>::List(int param_1, DataStatus** param_2) {
        int iVar1;
        undefined* puVar2;

        iVar1 = *(int*)(this + 48);
        if (iVar1 == 2) {
            *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar1 != 1) {
                return PTR_NullConfigType_100ee6590;
            }
        }
        puVar2 = (undefined*)Array<shared_ptr<LightType>, eastl::allocator>::operator[](
            (Array<shared_ptr<LightType>, eastl::allocator>*)(this + 72), (long)param_1);
        return puVar2;
    }

    // 0x1005c85c0, 80 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<LightType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<LightType>::~ConfigTypeLoadAllContainer() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee82c0;
        *(undefined**)this = PTR_vtable_100ee82c0 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        ((this + 96))->~unique_ptr();
        ((this + 72))->~Array();
        ((this + 40))->~AutoSingleton();
        ~AutoSingleton();
    }

    // 0x1005cd800, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<SkyBoxType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<SkyBoxType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005cd820, 128 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<SkyBoxType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<SkyBoxType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeLoadAllContainer<SkyBoxType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList* param_1,
                                                                            Js5ResourceProvider* param_2,
                                                                            Js5ArchiveSettings* param_3,
                                                                            Js5ConfigGroup* param_4, uint param_5) {
        undefined* puVar1;

        new (this) BaseConfigTypeContainer<SkyBoxType>(param_1, param_2, param_3, param_4);
        new ((this + 40)) BaseLoadAllConfigTypeContainer(param_5);
        puVar1 = PTR_vtable_100ee8200;
        *(undefined**)this = PTR_vtable_100ee8200 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        new ((this + 72)) Array<shared_ptr<SkyBoxType>, eastl::allocator>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
    }

    // 0x1005cd8b0, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<SkyBoxType>::~ConfigTypeLoadAllContainer(): jumps straight to the base-object destructor

    // 0x1005cd8c0, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<SkyBoxType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<SkyBoxType>::~ConfigTypeLoadAllContainer() {
        ~ConfigTypeLoadAllContainer(this);
        operator_delete(this);
    }

    // 0x1005cd8e0, 976 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<SkyBoxType>::LoadList()
    /* WARNING: Removing unreachable block (ram,4301053051) */
    /* ConfigTypeLoadAllContainer<SkyBoxType>::LoadList() */

    undefined* ConfigTypeLoadAllContainer<SkyBoxType>::LoadList() {
        int iVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        bool bVar4;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<SkyBoxType>* pCVar5;
        char cVar6;
        uint uVar7;
        uint uVar8;
        undefined* puVar9;
        undefined8 uVar10;
        long* plVar11;
        shared_ptr<SkyBoxType>* this_01;
        ulonglong uVar12;
        undefined* in_RCX;
        uint* puVar13;
        _func_decltype_nullptr* p_Var14;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* this_02;
        uint uVar15;
        shared_ptr local_90;
        undefined8 local_80;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* local_78;
        ConfigTypeLoadAllContainer<SkyBoxType>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<SkyBoxType>* local_58;
        Js5ArchiveSettings* local_50;
        DownloadWaitHandler* local_48;
        undefined* local_40;
        uint local_38;
        uint local_34;

        if (*(int*)(this + 48) != 2) {
            pJVar2 = *(Js5ArchiveSettings**)(this + 16);
            local_58 = this + 8;
            local_38 = (*(Mixer**)(this + 8))->GetStreamCountLastMix();
            *(uint*)(this + 64) = local_38;
            if (*(int*)(this + 48) == 0) {
                ((this + 72))->set_max_size((ulong)local_38, 0);
                local_68[0] = (Js5Index*)0;
                local_40 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, local_68, *(undefined8*)(this + 24));
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pJVar2;
                std::make_unique<DownloadWaitHandler, unsigned int&>((uint*)&local_90);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96),
                    (unique_ptr*)&local_90);
                local_90.~unique_ptr();
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                        (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
                pCVar5 = local_58;
                if (local_38 != 0) {
                    uVar15 = 0;
                    do {
                        this_00 = local_68[0];
                        uVar7 = (*(BaseConfigTypeList**)pCVar5)->GetClientGroupID(uVar15);
                        uVar8 = (*(BaseConfigTypeList**)pCVar5)->GetClientFileID(uVar15);
                        cVar6 = this_00->DoesFileExist(uVar7, uVar8);
                        if (cVar6 == '\0') {
                            *(int*)(this + 60) = *(int*)(this + 60) + 1;
                        } else {
                            local_48->SetExists(uVar15);
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < local_38);
                }
                *(undefined4*)(this + 48) = 1;
                iVar1 = *(int*)(this + 48);
                pJVar2 = local_50;
            } else {
                iVar1 = *(int*)(this + 48);
                local_40 = in_RCX;
            }
            if (iVar1 == 1) {
                local_80 = 0;
                pJVar3 = *(Js5ArchiveSettings**)(this + 24);
                puVar9 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, &local_80, pJVar3);
                if (puVar9 != DataStatus::READY) {
                    return puVar9;
                }
                local_78 = (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96);
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(local_78);
                local_34 = 0;
                bVar4 = true;
                if (local_38 != 0) {
                    local_70 = this + 72;
                    p_Var14 = (_func_decltype_nullptr*)0;
                    local_50 = pJVar3;
                    do {
                        if (*(int*)(this + 52) == 0)
                            break;
                        cVar6 = local_48->CanCheck((int)p_Var14);
                        if (cVar6 != '\0') {
                            new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var14);
                            uVar15 = local_34;
                            plVar11 = *(long**)local_58;
                            uVar10 = local_50->GetPrefetchPriority();
                            puVar13 = (uint*)(ulong)uVar15;
                            puVar9 = (undefined*)(**(code**)(*plVar11 + 64))(plVar11, local_68, local_50, puVar13,
                                                                             uVar10, 1);
                            if (puVar9 == DataStatus::READY) {
                                MakeSharedPool<SkyBoxType, 16>::MakeShared<BaseTemplateConfigTypeList<SkyBoxType>*&,
                                                                           unsigned int&>(
                                    &local_90, (MakeSharedPool<SkyBoxType, 16>*)local_58,
                                    (BaseTemplateConfigTypeList**)&local_34, puVar13);
                                plVar11 = (long*)shared_ptr<SkyBoxType>::operator->((shared_ptr<SkyBoxType>*)&local_90);
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                puVar9 = (undefined*)(**(code**)(*plVar11 + 32))(plVar11);
                                if (puVar9 == DataStatus::NOTLOADED) {
                                    bVar4 = false;
                                    local_40 = puVar9;
                                } else {
                                    plVar11 =
                                        (long*)shared_ptr<SkyBoxType>::operator->((shared_ptr<SkyBoxType>*)&local_90);
                                    (**(code**)(*plVar11 + 24))(plVar11);
                                    puVar9 = (undefined*)(**(code**)(**(long**)local_58 + 72))();
                                    if (puVar9 == DataStatus::READY) {
                                        this_01 = (shared_ptr<SkyBoxType>*)
                                            Array<shared_ptr<SkyBoxType>, eastl::allocator>::operator[](
                                                (Array<shared_ptr<SkyBoxType>, eastl::allocator>*)local_70,
                                                (ulong)local_34);
                                        shared_ptr<SkyBoxType>::operator=(this_01, &local_90);
                                        *(int*)(this + 60) = *(int*)(this + 60) + 1;
                                        bVar4 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar4 = false;
                                    }
                                }
                                local_90.~shared_ptr();
                                if (bVar4)
                                    goto LAB_1005cda9b;
                                bVar4 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005cda9b:
                                bVar4 = true;
                            }
                            local_68->~shared_ptr();
                            if (!bVar4) {
                                bVar4 = false;
                                goto LAB_1005cdc0a;
                            }
                        }
                        local_34 = local_34 + 1;
                        p_Var14 = (_func_decltype_nullptr*)(ulong)local_34;
                    } while (local_34 < local_38);
                    bVar4 = true;
                }
            LAB_1005cdc0a:
                if (!bVar4) {
                    return local_40;
                }
                if (*(uint*)(this + 60) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(code**)(**(long**)(this + 8) + 80))();
                *(undefined4*)(this + 48) = 2;
                this_02 = local_78;
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::reset(
                    local_78, (DownloadWaitHandler*)0);
                uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                *(ulonglong*)(*(long*)(this + 8) + 40) = uVar12;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005cdcb0, 96 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<SkyBoxType>::List(int, DataStatus const**)
    undefined* ConfigTypeLoadAllContainer<SkyBoxType>::List(int param_1, DataStatus** param_2) {
        int iVar1;
        undefined* puVar2;

        iVar1 = *(int*)(this + 48);
        if (iVar1 == 2) {
            *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar1 != 1) {
                return PTR_NullConfigType_100ee64d0;
            }
        }
        puVar2 = (undefined*)Array<shared_ptr<SkyBoxType>, eastl::allocator>::operator[](
            (Array<shared_ptr<SkyBoxType>, eastl::allocator>*)(this + 72), (long)param_1);
        return puVar2;
    }

    // 0x1005cdd60, 80 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<SkyBoxType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<SkyBoxType>::~ConfigTypeLoadAllContainer() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee8200;
        *(undefined**)this = PTR_vtable_100ee8200 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        ((this + 96))->~unique_ptr();
        ((this + 72))->~Array();
        ((this + 40))->~AutoSingleton();
        ~AutoSingleton();
    }

    // 0x1005d22a0, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<WaterType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<WaterType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005d22c0, 128 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<WaterType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<WaterType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeLoadAllContainer<WaterType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList* param_1,
                                                                           Js5ResourceProvider* param_2,
                                                                           Js5ArchiveSettings* param_3,
                                                                           Js5ConfigGroup* param_4, uint param_5) {
        undefined* puVar1;

        new (this) BaseConfigTypeContainer<WaterType>(param_1, param_2, param_3, param_4);
        new ((this + 40)) BaseLoadAllConfigTypeContainer(param_5);
        puVar1 = PTR_vtable_100ee82d8;
        *(undefined**)this = PTR_vtable_100ee82d8 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        new ((this + 72)) Array<shared_ptr<WaterType>, eastl::allocator>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
    }

    // 0x1005d2350, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<WaterType>::~ConfigTypeLoadAllContainer(): jumps straight to the base-object destructor

    // 0x1005d2360, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<WaterType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<WaterType>::~ConfigTypeLoadAllContainer() {
        ~ConfigTypeLoadAllContainer(this);
        operator_delete(this);
    }

    // 0x1005d2380, 976 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<WaterType>::LoadList()
    /* WARNING: Removing unreachable block (ram,4301072155) */
    /* ConfigTypeLoadAllContainer<WaterType>::LoadList() */

    undefined* ConfigTypeLoadAllContainer<WaterType>::LoadList() {
        int iVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        bool bVar4;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<WaterType>* pCVar5;
        char cVar6;
        uint uVar7;
        uint uVar8;
        undefined* puVar9;
        undefined8 uVar10;
        long* plVar11;
        shared_ptr<WaterType>* this_01;
        ulonglong uVar12;
        undefined* in_RCX;
        uint* puVar13;
        _func_decltype_nullptr* p_Var14;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* this_02;
        uint uVar15;
        shared_ptr local_90;
        undefined8 local_80;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* local_78;
        ConfigTypeLoadAllContainer<WaterType>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<WaterType>* local_58;
        Js5ArchiveSettings* local_50;
        DownloadWaitHandler* local_48;
        undefined* local_40;
        uint local_38;
        uint local_34;

        if (*(int*)(this + 48) != 2) {
            pJVar2 = *(Js5ArchiveSettings**)(this + 16);
            local_58 = this + 8;
            local_38 = (*(Mixer**)(this + 8))->GetStreamCountLastMix();
            *(uint*)(this + 64) = local_38;
            if (*(int*)(this + 48) == 0) {
                ((this + 72))->set_max_size((ulong)local_38, 0);
                local_68[0] = (Js5Index*)0;
                local_40 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, local_68, *(undefined8*)(this + 24));
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pJVar2;
                std::make_unique<DownloadWaitHandler, unsigned int&>((uint*)&local_90);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96),
                    (unique_ptr*)&local_90);
                local_90.~unique_ptr();
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                        (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
                pCVar5 = local_58;
                if (local_38 != 0) {
                    uVar15 = 0;
                    do {
                        this_00 = local_68[0];
                        uVar7 = (*(BaseConfigTypeList**)pCVar5)->GetClientGroupID(uVar15);
                        uVar8 = (*(BaseConfigTypeList**)pCVar5)->GetClientFileID(uVar15);
                        cVar6 = this_00->DoesFileExist(uVar7, uVar8);
                        if (cVar6 == '\0') {
                            *(int*)(this + 60) = *(int*)(this + 60) + 1;
                        } else {
                            local_48->SetExists(uVar15);
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < local_38);
                }
                *(undefined4*)(this + 48) = 1;
                iVar1 = *(int*)(this + 48);
                pJVar2 = local_50;
            } else {
                iVar1 = *(int*)(this + 48);
                local_40 = in_RCX;
            }
            if (iVar1 == 1) {
                local_80 = 0;
                pJVar3 = *(Js5ArchiveSettings**)(this + 24);
                puVar9 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, &local_80, pJVar3);
                if (puVar9 != DataStatus::READY) {
                    return puVar9;
                }
                local_78 = (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96);
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(local_78);
                local_34 = 0;
                bVar4 = true;
                if (local_38 != 0) {
                    local_70 = this + 72;
                    p_Var14 = (_func_decltype_nullptr*)0;
                    local_50 = pJVar3;
                    do {
                        if (*(int*)(this + 52) == 0)
                            break;
                        cVar6 = local_48->CanCheck((int)p_Var14);
                        if (cVar6 != '\0') {
                            new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var14);
                            uVar15 = local_34;
                            plVar11 = *(long**)local_58;
                            uVar10 = local_50->GetPrefetchPriority();
                            puVar13 = (uint*)(ulong)uVar15;
                            puVar9 = (undefined*)(**(code**)(*plVar11 + 64))(plVar11, local_68, local_50, puVar13,
                                                                             uVar10, 1);
                            if (puVar9 == DataStatus::READY) {
                                MakeSharedPool<WaterType, 16>::MakeShared<BaseTemplateConfigTypeList<WaterType>*&,
                                                                          unsigned int&>(
                                    &local_90, (MakeSharedPool<WaterType, 16>*)local_58,
                                    (BaseTemplateConfigTypeList**)&local_34, puVar13);
                                plVar11 = (long*)shared_ptr<WaterType>::operator->((shared_ptr<WaterType>*)&local_90);
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                puVar9 = (undefined*)(**(code**)(*plVar11 + 32))(plVar11);
                                if (puVar9 == DataStatus::NOTLOADED) {
                                    bVar4 = false;
                                    local_40 = puVar9;
                                } else {
                                    plVar11 =
                                        (long*)shared_ptr<WaterType>::operator->((shared_ptr<WaterType>*)&local_90);
                                    (**(code**)(*plVar11 + 24))(plVar11);
                                    puVar9 = (undefined*)(**(code**)(**(long**)local_58 + 72))();
                                    if (puVar9 == DataStatus::READY) {
                                        this_01 = (shared_ptr<WaterType>*)
                                            Array<shared_ptr<WaterType>, eastl::allocator>::operator[](
                                                (Array<shared_ptr<WaterType>, eastl::allocator>*)local_70,
                                                (ulong)local_34);
                                        shared_ptr<WaterType>::operator=(this_01, &local_90);
                                        *(int*)(this + 60) = *(int*)(this + 60) + 1;
                                        bVar4 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar4 = false;
                                    }
                                }
                                local_90.~shared_ptr();
                                if (bVar4)
                                    goto LAB_1005d253b;
                                bVar4 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005d253b:
                                bVar4 = true;
                            }
                            local_68->~shared_ptr();
                            if (!bVar4) {
                                bVar4 = false;
                                goto LAB_1005d26aa;
                            }
                        }
                        local_34 = local_34 + 1;
                        p_Var14 = (_func_decltype_nullptr*)(ulong)local_34;
                    } while (local_34 < local_38);
                    bVar4 = true;
                }
            LAB_1005d26aa:
                if (!bVar4) {
                    return local_40;
                }
                if (*(uint*)(this + 60) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(code**)(**(long**)(this + 8) + 80))();
                *(undefined4*)(this + 48) = 2;
                this_02 = local_78;
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::reset(
                    local_78, (DownloadWaitHandler*)0);
                uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                *(ulonglong*)(*(long*)(this + 8) + 40) = uVar12;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005d2750, 96 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<WaterType>::List(int, DataStatus const**)
    undefined* ConfigTypeLoadAllContainer<WaterType>::List(int param_1, DataStatus** param_2) {
        int iVar1;
        undefined* puVar2;

        iVar1 = *(int*)(this + 48);
        if (iVar1 == 2) {
            *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar1 != 1) {
                return PTR_NullConfigType_100ee65a8;
            }
        }
        puVar2 = (undefined*)Array<shared_ptr<WaterType>, eastl::allocator>::operator[](
            (Array<shared_ptr<WaterType>, eastl::allocator>*)(this + 72), (long)param_1);
        return puVar2;
    }

    // 0x1005d2800, 80 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<WaterType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<WaterType>::~ConfigTypeLoadAllContainer() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee82d8;
        *(undefined**)this = PTR_vtable_100ee82d8 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        ((this + 96))->~unique_ptr();
        ((this + 72))->~Array();
        ((this + 40))->~AutoSingleton();
        ~AutoSingleton();
    }

    // 0x1005d7910, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<CursorType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<CursorType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005d7930, 128 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<CursorType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<CursorType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeLoadAllContainer<CursorType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList* param_1,
                                                                            Js5ResourceProvider* param_2,
                                                                            Js5ArchiveSettings* param_3,
                                                                            Js5ConfigGroup* param_4, uint param_5) {
        undefined* puVar1;

        new (this) BaseConfigTypeContainer<CursorType>(param_1, param_2, param_3, param_4);
        new ((this + 40)) BaseLoadAllConfigTypeContainer(param_5);
        puVar1 = PTR_vtable_100ee81f8;
        *(undefined**)this = PTR_vtable_100ee81f8 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        new ((this + 72)) Array<shared_ptr<CursorType>, eastl::allocator>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
    }

    // 0x1005d79c0, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<CursorType>::~ConfigTypeLoadAllContainer(): jumps straight to the base-object destructor

    // 0x1005d79d0, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<CursorType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<CursorType>::~ConfigTypeLoadAllContainer() {
        ~ConfigTypeLoadAllContainer(this);
        operator_delete(this);
    }

    // 0x1005d79f0, 976 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<CursorType>::LoadList()
    /* WARNING: Removing unreachable block (ram,4301094283) */
    /* ConfigTypeLoadAllContainer<CursorType>::LoadList() */

    undefined* ConfigTypeLoadAllContainer<CursorType>::LoadList() {
        int iVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        bool bVar4;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<CursorType>* pCVar5;
        char cVar6;
        uint uVar7;
        uint uVar8;
        undefined* puVar9;
        undefined8 uVar10;
        long* plVar11;
        shared_ptr<CursorType>* this_01;
        ulonglong uVar12;
        undefined* in_RCX;
        uint* puVar13;
        _func_decltype_nullptr* p_Var14;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* this_02;
        uint uVar15;
        shared_ptr local_90;
        undefined8 local_80;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* local_78;
        ConfigTypeLoadAllContainer<CursorType>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<CursorType>* local_58;
        Js5ArchiveSettings* local_50;
        DownloadWaitHandler* local_48;
        undefined* local_40;
        uint local_38;
        uint local_34;

        if (*(int*)(this + 48) != 2) {
            pJVar2 = *(Js5ArchiveSettings**)(this + 16);
            local_58 = this + 8;
            local_38 = (*(Mixer**)(this + 8))->GetStreamCountLastMix();
            *(uint*)(this + 64) = local_38;
            if (*(int*)(this + 48) == 0) {
                ((this + 72))->set_max_size((ulong)local_38, 0);
                local_68[0] = (Js5Index*)0;
                local_40 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, local_68, *(undefined8*)(this + 24));
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pJVar2;
                std::make_unique<DownloadWaitHandler, unsigned int&>((uint*)&local_90);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96),
                    (unique_ptr*)&local_90);
                local_90.~unique_ptr();
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                        (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
                pCVar5 = local_58;
                if (local_38 != 0) {
                    uVar15 = 0;
                    do {
                        this_00 = local_68[0];
                        uVar7 = (*(BaseConfigTypeList**)pCVar5)->GetClientGroupID(uVar15);
                        uVar8 = (*(BaseConfigTypeList**)pCVar5)->GetClientFileID(uVar15);
                        cVar6 = this_00->DoesFileExist(uVar7, uVar8);
                        if (cVar6 == '\0') {
                            *(int*)(this + 60) = *(int*)(this + 60) + 1;
                        } else {
                            local_48->SetExists(uVar15);
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < local_38);
                }
                *(undefined4*)(this + 48) = 1;
                iVar1 = *(int*)(this + 48);
                pJVar2 = local_50;
            } else {
                iVar1 = *(int*)(this + 48);
                local_40 = in_RCX;
            }
            if (iVar1 == 1) {
                local_80 = 0;
                pJVar3 = *(Js5ArchiveSettings**)(this + 24);
                puVar9 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, &local_80, pJVar3);
                if (puVar9 != DataStatus::READY) {
                    return puVar9;
                }
                local_78 = (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96);
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(local_78);
                local_34 = 0;
                bVar4 = true;
                if (local_38 != 0) {
                    local_70 = this + 72;
                    p_Var14 = (_func_decltype_nullptr*)0;
                    local_50 = pJVar3;
                    do {
                        if (*(int*)(this + 52) == 0)
                            break;
                        cVar6 = local_48->CanCheck((int)p_Var14);
                        if (cVar6 != '\0') {
                            new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var14);
                            uVar15 = local_34;
                            plVar11 = *(long**)local_58;
                            uVar10 = local_50->GetPrefetchPriority();
                            puVar13 = (uint*)(ulong)uVar15;
                            puVar9 = (undefined*)(**(code**)(*plVar11 + 64))(plVar11, local_68, local_50, puVar13,
                                                                             uVar10, 1);
                            if (puVar9 == DataStatus::READY) {
                                MakeSharedPool<CursorType, 64>::MakeShared<BaseTemplateConfigTypeList<CursorType>*&,
                                                                           unsigned int&>(
                                    &local_90, (MakeSharedPool<CursorType, 64>*)local_58,
                                    (BaseTemplateConfigTypeList**)&local_34, puVar13);
                                plVar11 = (long*)shared_ptr<CursorType>::operator->((shared_ptr<CursorType>*)&local_90);
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                puVar9 = (undefined*)(**(code**)(*plVar11 + 32))(plVar11);
                                if (puVar9 == DataStatus::NOTLOADED) {
                                    bVar4 = false;
                                    local_40 = puVar9;
                                } else {
                                    plVar11 =
                                        (long*)shared_ptr<CursorType>::operator->((shared_ptr<CursorType>*)&local_90);
                                    (**(code**)(*plVar11 + 24))(plVar11);
                                    puVar9 = (undefined*)(**(code**)(**(long**)local_58 + 72))();
                                    if (puVar9 == DataStatus::READY) {
                                        this_01 = (shared_ptr<CursorType>*)
                                            Array<shared_ptr<CursorType>, eastl::allocator>::operator[](
                                                (Array<shared_ptr<CursorType>, eastl::allocator>*)local_70,
                                                (ulong)local_34);
                                        shared_ptr<CursorType>::operator=(this_01, &local_90);
                                        *(int*)(this + 60) = *(int*)(this + 60) + 1;
                                        bVar4 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar4 = false;
                                    }
                                }
                                local_90.~shared_ptr();
                                if (bVar4)
                                    goto LAB_1005d7bab;
                                bVar4 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005d7bab:
                                bVar4 = true;
                            }
                            local_68->~shared_ptr();
                            if (!bVar4) {
                                bVar4 = false;
                                goto LAB_1005d7d1a;
                            }
                        }
                        local_34 = local_34 + 1;
                        p_Var14 = (_func_decltype_nullptr*)(ulong)local_34;
                    } while (local_34 < local_38);
                    bVar4 = true;
                }
            LAB_1005d7d1a:
                if (!bVar4) {
                    return local_40;
                }
                if (*(uint*)(this + 60) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(code**)(**(long**)(this + 8) + 80))();
                *(undefined4*)(this + 48) = 2;
                this_02 = local_78;
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::reset(
                    local_78, (DownloadWaitHandler*)0);
                uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                *(ulonglong*)(*(long*)(this + 8) + 40) = uVar12;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005d7dc0, 96 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<CursorType>::List(int, DataStatus const**)
    undefined* ConfigTypeLoadAllContainer<CursorType>::List(int param_1, DataStatus** param_2) {
        int iVar1;
        undefined* puVar2;

        iVar1 = *(int*)(this + 48);
        if (iVar1 == 2) {
            *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar1 != 1) {
                return PTR_NullConfigType_100ee64c8;
            }
        }
        puVar2 = (undefined*)Array<shared_ptr<CursorType>, eastl::allocator>::operator[](
            (Array<shared_ptr<CursorType>, eastl::allocator>*)(this + 72), (long)param_1);
        return puVar2;
    }

    // 0x1005d7e70, 80 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<CursorType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<CursorType>::~ConfigTypeLoadAllContainer() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee81f8;
        *(undefined**)this = PTR_vtable_100ee81f8 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        ((this + 96))->~unique_ptr();
        ((this + 72))->~Array();
        ((this + 40))->~AutoSingleton();
        ~AutoSingleton();
    }

    // 0x1005dce20, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<WorldAreaType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<WorldAreaType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005dce40, 128 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<WorldAreaType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<WorldAreaType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeLoadAllContainer<WorldAreaType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList* param_1,
                                                                               Js5ResourceProvider* param_2,
                                                                               Js5ArchiveSettings* param_3,
                                                                               Js5ConfigGroup* param_4, uint param_5) {
        undefined* puVar1;

        new (this) BaseConfigTypeContainer<WorldAreaType>(param_1, param_2, param_3, param_4);
        new ((this + 40)) BaseLoadAllConfigTypeContainer(param_5);
        puVar1 = PTR_vtable_100ee8238;
        *(undefined**)this = PTR_vtable_100ee8238 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        new ((this + 72)) Array<shared_ptr<WorldAreaType>, eastl::allocator>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
    }

    // 0x1005dced0, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<WorldAreaType>::~ConfigTypeLoadAllContainer(): jumps straight to the base-object destructor

    // 0x1005dcee0, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<WorldAreaType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<WorldAreaType>::~ConfigTypeLoadAllContainer() {
        ~ConfigTypeLoadAllContainer(this);
        operator_delete(this);
    }

    // 0x1005dcf00, 976 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<WorldAreaType>::LoadList()
    /* WARNING: Removing unreachable block (ram,4301116059) */
    /* ConfigTypeLoadAllContainer<WorldAreaType>::LoadList() */

    undefined* ConfigTypeLoadAllContainer<WorldAreaType>::LoadList() {
        int iVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        bool bVar4;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<WorldAreaType>* pCVar5;
        char cVar6;
        uint uVar7;
        uint uVar8;
        undefined* puVar9;
        undefined8 uVar10;
        long* plVar11;
        shared_ptr<WorldAreaType>* this_01;
        ulonglong uVar12;
        undefined* in_RCX;
        uint* puVar13;
        _func_decltype_nullptr* p_Var14;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* this_02;
        uint uVar15;
        shared_ptr local_90;
        undefined8 local_80;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* local_78;
        ConfigTypeLoadAllContainer<WorldAreaType>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<WorldAreaType>* local_58;
        Js5ArchiveSettings* local_50;
        DownloadWaitHandler* local_48;
        undefined* local_40;
        uint local_38;
        uint local_34;

        if (*(int*)(this + 48) != 2) {
            pJVar2 = *(Js5ArchiveSettings**)(this + 16);
            local_58 = this + 8;
            local_38 = (*(Mixer**)(this + 8))->GetStreamCountLastMix();
            *(uint*)(this + 64) = local_38;
            if (*(int*)(this + 48) == 0) {
                ((this + 72))->set_max_size((ulong)local_38, 0);
                local_68[0] = (Js5Index*)0;
                local_40 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, local_68, *(undefined8*)(this + 24));
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pJVar2;
                std::make_unique<DownloadWaitHandler, unsigned int&>((uint*)&local_90);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96),
                    (unique_ptr*)&local_90);
                local_90.~unique_ptr();
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                        (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
                pCVar5 = local_58;
                if (local_38 != 0) {
                    uVar15 = 0;
                    do {
                        this_00 = local_68[0];
                        uVar7 = (*(BaseConfigTypeList**)pCVar5)->GetClientGroupID(uVar15);
                        uVar8 = (*(BaseConfigTypeList**)pCVar5)->GetClientFileID(uVar15);
                        cVar6 = this_00->DoesFileExist(uVar7, uVar8);
                        if (cVar6 == '\0') {
                            *(int*)(this + 60) = *(int*)(this + 60) + 1;
                        } else {
                            local_48->SetExists(uVar15);
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < local_38);
                }
                *(undefined4*)(this + 48) = 1;
                iVar1 = *(int*)(this + 48);
                pJVar2 = local_50;
            } else {
                iVar1 = *(int*)(this + 48);
                local_40 = in_RCX;
            }
            if (iVar1 == 1) {
                local_80 = 0;
                pJVar3 = *(Js5ArchiveSettings**)(this + 24);
                puVar9 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, &local_80, pJVar3);
                if (puVar9 != DataStatus::READY) {
                    return puVar9;
                }
                local_78 = (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96);
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(local_78);
                local_34 = 0;
                bVar4 = true;
                if (local_38 != 0) {
                    local_70 = this + 72;
                    p_Var14 = (_func_decltype_nullptr*)0;
                    local_50 = pJVar3;
                    do {
                        if (*(int*)(this + 52) == 0)
                            break;
                        cVar6 = local_48->CanCheck((int)p_Var14);
                        if (cVar6 != '\0') {
                            new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var14);
                            uVar15 = local_34;
                            plVar11 = *(long**)local_58;
                            uVar10 = local_50->GetPrefetchPriority();
                            puVar13 = (uint*)(ulong)uVar15;
                            puVar9 = (undefined*)(**(code**)(*plVar11 + 64))(plVar11, local_68, local_50, puVar13,
                                                                             uVar10, 1);
                            if (puVar9 == DataStatus::READY) {
                                MakeSharedPool<WorldAreaType, 1024>::MakeShared<
                                    BaseTemplateConfigTypeList<WorldAreaType>*&, unsigned int&>(
                                    &local_90, (MakeSharedPool<WorldAreaType, 1024>*)local_58,
                                    (BaseTemplateConfigTypeList**)&local_34, puVar13);
                                plVar11 =
                                    (long*)shared_ptr<WorldAreaType>::operator->((shared_ptr<WorldAreaType>*)&local_90);
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                puVar9 = (undefined*)(**(code**)(*plVar11 + 32))(plVar11);
                                if (puVar9 == DataStatus::NOTLOADED) {
                                    bVar4 = false;
                                    local_40 = puVar9;
                                } else {
                                    plVar11 = (long*)shared_ptr<WorldAreaType>::operator->(
                                        (shared_ptr<WorldAreaType>*)&local_90);
                                    (**(code**)(*plVar11 + 24))(plVar11);
                                    puVar9 = (undefined*)(**(code**)(**(long**)local_58 + 72))();
                                    if (puVar9 == DataStatus::READY) {
                                        this_01 = (shared_ptr<WorldAreaType>*)
                                            Array<shared_ptr<WorldAreaType>, eastl::allocator>::operator[](
                                                (Array<shared_ptr<WorldAreaType>, eastl::allocator>*)local_70,
                                                (ulong)local_34);
                                        shared_ptr<WorldAreaType>::operator=(this_01, &local_90);
                                        *(int*)(this + 60) = *(int*)(this + 60) + 1;
                                        bVar4 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar4 = false;
                                    }
                                }
                                local_90.~shared_ptr();
                                if (bVar4)
                                    goto LAB_1005dd0bb;
                                bVar4 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005dd0bb:
                                bVar4 = true;
                            }
                            local_68->~shared_ptr();
                            if (!bVar4) {
                                bVar4 = false;
                                goto LAB_1005dd22a;
                            }
                        }
                        local_34 = local_34 + 1;
                        p_Var14 = (_func_decltype_nullptr*)(ulong)local_34;
                    } while (local_34 < local_38);
                    bVar4 = true;
                }
            LAB_1005dd22a:
                if (!bVar4) {
                    return local_40;
                }
                if (*(uint*)(this + 60) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(code**)(**(long**)(this + 8) + 80))();
                *(undefined4*)(this + 48) = 2;
                this_02 = local_78;
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::reset(
                    local_78, (DownloadWaitHandler*)0);
                uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                *(ulonglong*)(*(long*)(this + 8) + 40) = uVar12;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005dd2d0, 96 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<WorldAreaType>::List(int, DataStatus const**)
    undefined* ConfigTypeLoadAllContainer<WorldAreaType>::List(int param_1, DataStatus** param_2) {
        int iVar1;
        undefined* puVar2;

        iVar1 = *(int*)(this + 48);
        if (iVar1 == 2) {
            *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar1 != 1) {
                return PTR_NullConfigType_100ee6508;
            }
        }
        puVar2 = (undefined*)Array<shared_ptr<WorldAreaType>, eastl::allocator>::operator[](
            (Array<shared_ptr<WorldAreaType>, eastl::allocator>*)(this + 72), (long)param_1);
        return puVar2;
    }

    // 0x1005dd380, 80 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<WorldAreaType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<WorldAreaType>::~ConfigTypeLoadAllContainer() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee8238;
        *(undefined**)this = PTR_vtable_100ee8238 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        ((this + 96))->~unique_ptr();
        ((this + 72))->~Array();
        ((this + 40))->~AutoSingleton();
        ~AutoSingleton();
    }

    // 0x1005e3240, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<EnumType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<EnumType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005e3260, 128 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<EnumType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<EnumType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeLoadAllContainer<EnumType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList* param_1,
                                                                          Js5ResourceProvider* param_2,
                                                                          Js5ArchiveSettings* param_3,
                                                                          Js5ConfigGroup* param_4, uint param_5) {
        undefined* puVar1;

        new (this) BaseConfigTypeContainer<EnumType>(param_1, param_2, param_3, param_4);
        new ((this + 40)) BaseLoadAllConfigTypeContainer(param_5);
        puVar1 = PTR_vtable_100ee82b0;
        *(undefined**)this = PTR_vtable_100ee82b0 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        new ((this + 72)) Array<shared_ptr<EnumType>, eastl::allocator>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
    }

    // 0x1005e32f0, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<EnumType>::~ConfigTypeLoadAllContainer(): jumps straight to the base-object destructor

    // 0x1005e3300, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<EnumType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<EnumType>::~ConfigTypeLoadAllContainer() {
        ~ConfigTypeLoadAllContainer(this);
        operator_delete(this);
    }

    // 0x1005e3320, 976 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<EnumType>::LoadList()
    /* WARNING: Removing unreachable block (ram,4301141691) */
    /* ConfigTypeLoadAllContainer<EnumType>::LoadList() */

    undefined* ConfigTypeLoadAllContainer<EnumType>::LoadList() {
        int iVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        bool bVar4;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<EnumType>* pCVar5;
        char cVar6;
        uint uVar7;
        uint uVar8;
        undefined* puVar9;
        undefined8 uVar10;
        long* plVar11;
        shared_ptr<EnumType>* this_01;
        ulonglong uVar12;
        undefined* in_RCX;
        uint* puVar13;
        _func_decltype_nullptr* p_Var14;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* this_02;
        uint uVar15;
        shared_ptr local_90;
        undefined8 local_80;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* local_78;
        ConfigTypeLoadAllContainer<EnumType>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<EnumType>* local_58;
        Js5ArchiveSettings* local_50;
        DownloadWaitHandler* local_48;
        undefined* local_40;
        uint local_38;
        uint local_34;

        if (*(int*)(this + 48) != 2) {
            pJVar2 = *(Js5ArchiveSettings**)(this + 16);
            local_58 = this + 8;
            local_38 = (*(Mixer**)(this + 8))->GetStreamCountLastMix();
            *(uint*)(this + 64) = local_38;
            if (*(int*)(this + 48) == 0) {
                ((this + 72))->set_max_size((ulong)local_38, 0);
                local_68[0] = (Js5Index*)0;
                local_40 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, local_68, *(undefined8*)(this + 24));
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pJVar2;
                std::make_unique<DownloadWaitHandler, unsigned int&>((uint*)&local_90);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96),
                    (unique_ptr*)&local_90);
                local_90.~unique_ptr();
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                        (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
                pCVar5 = local_58;
                if (local_38 != 0) {
                    uVar15 = 0;
                    do {
                        this_00 = local_68[0];
                        uVar7 = (*(BaseConfigTypeList**)pCVar5)->GetClientGroupID(uVar15);
                        uVar8 = (*(BaseConfigTypeList**)pCVar5)->GetClientFileID(uVar15);
                        cVar6 = this_00->DoesFileExist(uVar7, uVar8);
                        if (cVar6 == '\0') {
                            *(int*)(this + 60) = *(int*)(this + 60) + 1;
                        } else {
                            local_48->SetExists(uVar15);
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < local_38);
                }
                *(undefined4*)(this + 48) = 1;
                iVar1 = *(int*)(this + 48);
                pJVar2 = local_50;
            } else {
                iVar1 = *(int*)(this + 48);
                local_40 = in_RCX;
            }
            if (iVar1 == 1) {
                local_80 = 0;
                pJVar3 = *(Js5ArchiveSettings**)(this + 24);
                puVar9 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, &local_80, pJVar3);
                if (puVar9 != DataStatus::READY) {
                    return puVar9;
                }
                local_78 = (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96);
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(local_78);
                local_34 = 0;
                bVar4 = true;
                if (local_38 != 0) {
                    local_70 = this + 72;
                    p_Var14 = (_func_decltype_nullptr*)0;
                    local_50 = pJVar3;
                    do {
                        if (*(int*)(this + 52) == 0)
                            break;
                        cVar6 = local_48->CanCheck((int)p_Var14);
                        if (cVar6 != '\0') {
                            new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var14);
                            uVar15 = local_34;
                            plVar11 = *(long**)local_58;
                            uVar10 = local_50->GetPrefetchPriority();
                            puVar13 = (uint*)(ulong)uVar15;
                            puVar9 = (undefined*)(**(code**)(*plVar11 + 64))(plVar11, local_68, local_50, puVar13,
                                                                             uVar10, 1);
                            if (puVar9 == DataStatus::READY) {
                                MakeSharedPool<EnumType, 128>::MakeShared<BaseTemplateConfigTypeList<EnumType>*&,
                                                                          unsigned int&>(
                                    &local_90, (MakeSharedPool<EnumType, 128>*)local_58,
                                    (BaseTemplateConfigTypeList**)&local_34, puVar13);
                                plVar11 = (long*)shared_ptr<EnumType>::operator->((shared_ptr<EnumType>*)&local_90);
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                puVar9 = (undefined*)(**(code**)(*plVar11 + 32))(plVar11);
                                if (puVar9 == DataStatus::NOTLOADED) {
                                    bVar4 = false;
                                    local_40 = puVar9;
                                } else {
                                    plVar11 = (long*)shared_ptr<EnumType>::operator->((shared_ptr<EnumType>*)&local_90);
                                    (**(code**)(*plVar11 + 24))(plVar11);
                                    puVar9 = (undefined*)(**(code**)(**(long**)local_58 + 72))();
                                    if (puVar9 == DataStatus::READY) {
                                        this_01 = (shared_ptr<EnumType>*)
                                            Array<shared_ptr<EnumType>, eastl::allocator>::operator[](
                                                (Array<shared_ptr<EnumType>, eastl::allocator>*)local_70,
                                                (ulong)local_34);
                                        shared_ptr<EnumType>::operator=(this_01, &local_90);
                                        *(int*)(this + 60) = *(int*)(this + 60) + 1;
                                        bVar4 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar4 = false;
                                    }
                                }
                                local_90.~shared_ptr();
                                if (bVar4)
                                    goto LAB_1005e34db;
                                bVar4 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005e34db:
                                bVar4 = true;
                            }
                            local_68->~shared_ptr();
                            if (!bVar4) {
                                bVar4 = false;
                                goto LAB_1005e364a;
                            }
                        }
                        local_34 = local_34 + 1;
                        p_Var14 = (_func_decltype_nullptr*)(ulong)local_34;
                    } while (local_34 < local_38);
                    bVar4 = true;
                }
            LAB_1005e364a:
                if (!bVar4) {
                    return local_40;
                }
                if (*(uint*)(this + 60) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(code**)(**(long**)(this + 8) + 80))();
                *(undefined4*)(this + 48) = 2;
                this_02 = local_78;
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::reset(
                    local_78, (DownloadWaitHandler*)0);
                uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                *(ulonglong*)(*(long*)(this + 8) + 40) = uVar12;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005e36f0, 96 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<EnumType>::List(int, DataStatus const**)
    undefined* ConfigTypeLoadAllContainer<EnumType>::List(int param_1, DataStatus** param_2) {
        int iVar1;
        undefined* puVar2;

        iVar1 = *(int*)(this + 48);
        if (iVar1 == 2) {
            *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar1 != 1) {
                return PTR_NullConfigType_100ee6580;
            }
        }
        puVar2 = (undefined*)Array<shared_ptr<EnumType>, eastl::allocator>::operator[](
            (Array<shared_ptr<EnumType>, eastl::allocator>*)(this + 72), (long)param_1);
        return puVar2;
    }

    // 0x1005e37a0, 80 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<EnumType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<EnumType>::~ConfigTypeLoadAllContainer() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee82b0;
        *(undefined**)this = PTR_vtable_100ee82b0 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        ((this + 96))->~unique_ptr();
        ((this + 72))->~Array();
        ((this + 40))->~AutoSingleton();
        ~AutoSingleton();
    }

    // 0x1005e8c60, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<EffectAnimType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<EffectAnimType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005e8c80, 128 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<EffectAnimType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<EffectAnimType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeLoadAllContainer<EffectAnimType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList* param_1,
                                                                                Js5ResourceProvider* param_2,
                                                                                Js5ArchiveSettings* param_3,
                                                                                Js5ConfigGroup* param_4, uint param_5) {
        undefined* puVar1;

        new (this) BaseConfigTypeContainer<EffectAnimType>(param_1, param_2, param_3, param_4);
        new ((this + 40)) BaseLoadAllConfigTypeContainer(param_5);
        puVar1 = PTR_vtable_100ee8240;
        *(undefined**)this = PTR_vtable_100ee8240 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        new ((this + 72)) Array<shared_ptr<EffectAnimType>, eastl::allocator>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
    }

    // 0x1005e8d10, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<EffectAnimType>::~ConfigTypeLoadAllContainer(): jumps straight to the base-object destructor

    // 0x1005e8d20, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<EffectAnimType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<EffectAnimType>::~ConfigTypeLoadAllContainer() {
        ~ConfigTypeLoadAllContainer(this);
        operator_delete(this);
    }

    // 0x1005e8d40, 976 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<EffectAnimType>::LoadList()
    /* WARNING: Removing unreachable block (ram,4301164763) */
    /* ConfigTypeLoadAllContainer<EffectAnimType>::LoadList() */

    undefined* ConfigTypeLoadAllContainer<EffectAnimType>::LoadList() {
        int iVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        bool bVar4;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<EffectAnimType>* pCVar5;
        char cVar6;
        uint uVar7;
        uint uVar8;
        undefined* puVar9;
        undefined8 uVar10;
        long* plVar11;
        shared_ptr<EffectAnimType>* this_01;
        ulonglong uVar12;
        undefined* in_RCX;
        uint* puVar13;
        _func_decltype_nullptr* p_Var14;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* this_02;
        uint uVar15;
        shared_ptr local_90;
        undefined8 local_80;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* local_78;
        ConfigTypeLoadAllContainer<EffectAnimType>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<EffectAnimType>* local_58;
        Js5ArchiveSettings* local_50;
        DownloadWaitHandler* local_48;
        undefined* local_40;
        uint local_38;
        uint local_34;

        if (*(int*)(this + 48) != 2) {
            pJVar2 = *(Js5ArchiveSettings**)(this + 16);
            local_58 = this + 8;
            local_38 = (*(Mixer**)(this + 8))->GetStreamCountLastMix();
            *(uint*)(this + 64) = local_38;
            if (*(int*)(this + 48) == 0) {
                ((this + 72))->set_max_size((ulong)local_38, 0);
                local_68[0] = (Js5Index*)0;
                local_40 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, local_68, *(undefined8*)(this + 24));
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pJVar2;
                std::make_unique<DownloadWaitHandler, unsigned int&>((uint*)&local_90);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96),
                    (unique_ptr*)&local_90);
                local_90.~unique_ptr();
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                        (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
                pCVar5 = local_58;
                if (local_38 != 0) {
                    uVar15 = 0;
                    do {
                        this_00 = local_68[0];
                        uVar7 = (*(BaseConfigTypeList**)pCVar5)->GetClientGroupID(uVar15);
                        uVar8 = (*(BaseConfigTypeList**)pCVar5)->GetClientFileID(uVar15);
                        cVar6 = this_00->DoesFileExist(uVar7, uVar8);
                        if (cVar6 == '\0') {
                            *(int*)(this + 60) = *(int*)(this + 60) + 1;
                        } else {
                            local_48->SetExists(uVar15);
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < local_38);
                }
                *(undefined4*)(this + 48) = 1;
                iVar1 = *(int*)(this + 48);
                pJVar2 = local_50;
            } else {
                iVar1 = *(int*)(this + 48);
                local_40 = in_RCX;
            }
            if (iVar1 == 1) {
                local_80 = 0;
                pJVar3 = *(Js5ArchiveSettings**)(this + 24);
                puVar9 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, &local_80, pJVar3);
                if (puVar9 != DataStatus::READY) {
                    return puVar9;
                }
                local_78 = (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96);
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(local_78);
                local_34 = 0;
                bVar4 = true;
                if (local_38 != 0) {
                    local_70 = this + 72;
                    p_Var14 = (_func_decltype_nullptr*)0;
                    local_50 = pJVar3;
                    do {
                        if (*(int*)(this + 52) == 0)
                            break;
                        cVar6 = local_48->CanCheck((int)p_Var14);
                        if (cVar6 != '\0') {
                            new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var14);
                            uVar15 = local_34;
                            plVar11 = *(long**)local_58;
                            uVar10 = local_50->GetPrefetchPriority();
                            puVar13 = (uint*)(ulong)uVar15;
                            puVar9 = (undefined*)(**(code**)(*plVar11 + 64))(plVar11, local_68, local_50, puVar13,
                                                                             uVar10, 1);
                            if (puVar9 == DataStatus::READY) {
                                MakeSharedPool<EffectAnimType, 256>::MakeShared<
                                    BaseTemplateConfigTypeList<EffectAnimType>*&, unsigned int&>(
                                    &local_90, (MakeSharedPool<EffectAnimType, 256>*)local_58,
                                    (BaseTemplateConfigTypeList**)&local_34, puVar13);
                                plVar11 = (long*)shared_ptr<EffectAnimType>::operator->(
                                    (shared_ptr<EffectAnimType>*)&local_90);
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                puVar9 = (undefined*)(**(code**)(*plVar11 + 32))(plVar11);
                                if (puVar9 == DataStatus::NOTLOADED) {
                                    bVar4 = false;
                                    local_40 = puVar9;
                                } else {
                                    plVar11 = (long*)shared_ptr<EffectAnimType>::operator->(
                                        (shared_ptr<EffectAnimType>*)&local_90);
                                    (**(code**)(*plVar11 + 24))(plVar11);
                                    puVar9 = (undefined*)(**(code**)(**(long**)local_58 + 72))();
                                    if (puVar9 == DataStatus::READY) {
                                        this_01 = (shared_ptr<EffectAnimType>*)
                                            Array<shared_ptr<EffectAnimType>, eastl::allocator>::operator[](
                                                (Array<shared_ptr<EffectAnimType>, eastl::allocator>*)local_70,
                                                (ulong)local_34);
                                        shared_ptr<EffectAnimType>::operator=(this_01, &local_90);
                                        *(int*)(this + 60) = *(int*)(this + 60) + 1;
                                        bVar4 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar4 = false;
                                    }
                                }
                                local_90.~shared_ptr();
                                if (bVar4)
                                    goto LAB_1005e8efb;
                                bVar4 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005e8efb:
                                bVar4 = true;
                            }
                            local_68->~shared_ptr();
                            if (!bVar4) {
                                bVar4 = false;
                                goto LAB_1005e906a;
                            }
                        }
                        local_34 = local_34 + 1;
                        p_Var14 = (_func_decltype_nullptr*)(ulong)local_34;
                    } while (local_34 < local_38);
                    bVar4 = true;
                }
            LAB_1005e906a:
                if (!bVar4) {
                    return local_40;
                }
                if (*(uint*)(this + 60) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(code**)(**(long**)(this + 8) + 80))();
                *(undefined4*)(this + 48) = 2;
                this_02 = local_78;
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::reset(
                    local_78, (DownloadWaitHandler*)0);
                uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                *(ulonglong*)(*(long*)(this + 8) + 40) = uVar12;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005e9110, 96 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<EffectAnimType>::List(int, DataStatus const**)
    undefined* ConfigTypeLoadAllContainer<EffectAnimType>::List(int param_1, DataStatus** param_2) {
        int iVar1;
        undefined* puVar2;

        iVar1 = *(int*)(this + 48);
        if (iVar1 == 2) {
            *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar1 != 1) {
                return PTR_NullConfigType_100ee6510;
            }
        }
        puVar2 = (undefined*)Array<shared_ptr<EffectAnimType>, eastl::allocator>::operator[](
            (Array<shared_ptr<EffectAnimType>, eastl::allocator>*)(this + 72), (long)param_1);
        return puVar2;
    }

    // 0x1005e91c0, 80 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<EffectAnimType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<EffectAnimType>::~ConfigTypeLoadAllContainer() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee8240;
        *(undefined**)this = PTR_vtable_100ee8240 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        ((this + 96))->~unique_ptr();
        ((this + 72))->~Array();
        ((this + 40))->~AutoSingleton();
        ~AutoSingleton();
    }

    // 0x1005ee8b0, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<StructType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<StructType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005ee8d0, 128 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<StructType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<StructType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeLoadAllContainer<StructType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList* param_1,
                                                                            Js5ResourceProvider* param_2,
                                                                            Js5ArchiveSettings* param_3,
                                                                            Js5ConfigGroup* param_4, uint param_5) {
        undefined* puVar1;

        new (this) BaseConfigTypeContainer<StructType>(param_1, param_2, param_3, param_4);
        new ((this + 40)) BaseLoadAllConfigTypeContainer(param_5);
        puVar1 = PTR_vtable_100ee8208;
        *(undefined**)this = PTR_vtable_100ee8208 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        new ((this + 72)) Array<shared_ptr<StructType>, eastl::allocator>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
    }

    // 0x1005ee960, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<StructType>::~ConfigTypeLoadAllContainer(): jumps straight to the base-object destructor

    // 0x1005ee970, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<StructType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<StructType>::~ConfigTypeLoadAllContainer() {
        ~ConfigTypeLoadAllContainer(this);
        operator_delete(this);
    }

    // 0x1005ee990, 976 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<StructType>::LoadList()
    /* WARNING: Removing unreachable block (ram,4301188395) */
    /* ConfigTypeLoadAllContainer<StructType>::LoadList() */

    undefined* ConfigTypeLoadAllContainer<StructType>::LoadList() {
        int iVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        bool bVar4;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<StructType>* pCVar5;
        char cVar6;
        uint uVar7;
        uint uVar8;
        undefined* puVar9;
        undefined8 uVar10;
        long* plVar11;
        shared_ptr<StructType>* this_01;
        ulonglong uVar12;
        undefined* in_RCX;
        uint* puVar13;
        _func_decltype_nullptr* p_Var14;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* this_02;
        uint uVar15;
        shared_ptr local_90;
        undefined8 local_80;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* local_78;
        ConfigTypeLoadAllContainer<StructType>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<StructType>* local_58;
        Js5ArchiveSettings* local_50;
        DownloadWaitHandler* local_48;
        undefined* local_40;
        uint local_38;
        uint local_34;

        if (*(int*)(this + 48) != 2) {
            pJVar2 = *(Js5ArchiveSettings**)(this + 16);
            local_58 = this + 8;
            local_38 = (*(Mixer**)(this + 8))->GetStreamCountLastMix();
            *(uint*)(this + 64) = local_38;
            if (*(int*)(this + 48) == 0) {
                ((this + 72))->set_max_size((ulong)local_38, 0);
                local_68[0] = (Js5Index*)0;
                local_40 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, local_68, *(undefined8*)(this + 24));
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pJVar2;
                std::make_unique<DownloadWaitHandler, unsigned int&>((uint*)&local_90);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96),
                    (unique_ptr*)&local_90);
                local_90.~unique_ptr();
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                        (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
                pCVar5 = local_58;
                if (local_38 != 0) {
                    uVar15 = 0;
                    do {
                        this_00 = local_68[0];
                        uVar7 = (*(BaseConfigTypeList**)pCVar5)->GetClientGroupID(uVar15);
                        uVar8 = (*(BaseConfigTypeList**)pCVar5)->GetClientFileID(uVar15);
                        cVar6 = this_00->DoesFileExist(uVar7, uVar8);
                        if (cVar6 == '\0') {
                            *(int*)(this + 60) = *(int*)(this + 60) + 1;
                        } else {
                            local_48->SetExists(uVar15);
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < local_38);
                }
                *(undefined4*)(this + 48) = 1;
                iVar1 = *(int*)(this + 48);
                pJVar2 = local_50;
            } else {
                iVar1 = *(int*)(this + 48);
                local_40 = in_RCX;
            }
            if (iVar1 == 1) {
                local_80 = 0;
                pJVar3 = *(Js5ArchiveSettings**)(this + 24);
                puVar9 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, &local_80, pJVar3);
                if (puVar9 != DataStatus::READY) {
                    return puVar9;
                }
                local_78 = (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96);
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(local_78);
                local_34 = 0;
                bVar4 = true;
                if (local_38 != 0) {
                    local_70 = this + 72;
                    p_Var14 = (_func_decltype_nullptr*)0;
                    local_50 = pJVar3;
                    do {
                        if (*(int*)(this + 52) == 0)
                            break;
                        cVar6 = local_48->CanCheck((int)p_Var14);
                        if (cVar6 != '\0') {
                            new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var14);
                            uVar15 = local_34;
                            plVar11 = *(long**)local_58;
                            uVar10 = local_50->GetPrefetchPriority();
                            puVar13 = (uint*)(ulong)uVar15;
                            puVar9 = (undefined*)(**(code**)(*plVar11 + 64))(plVar11, local_68, local_50, puVar13,
                                                                             uVar10, 1);
                            if (puVar9 == DataStatus::READY) {
                                MakeSharedPool<StructType, 1024>::MakeShared<BaseTemplateConfigTypeList<StructType>*&,
                                                                             unsigned int&>(
                                    &local_90, (MakeSharedPool<StructType, 1024>*)local_58,
                                    (BaseTemplateConfigTypeList**)&local_34, puVar13);
                                plVar11 = (long*)shared_ptr<StructType>::operator->((shared_ptr<StructType>*)&local_90);
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                puVar9 = (undefined*)(**(code**)(*plVar11 + 32))(plVar11);
                                if (puVar9 == DataStatus::NOTLOADED) {
                                    bVar4 = false;
                                    local_40 = puVar9;
                                } else {
                                    plVar11 =
                                        (long*)shared_ptr<StructType>::operator->((shared_ptr<StructType>*)&local_90);
                                    (**(code**)(*plVar11 + 24))(plVar11);
                                    puVar9 = (undefined*)(**(code**)(**(long**)local_58 + 72))();
                                    if (puVar9 == DataStatus::READY) {
                                        this_01 = (shared_ptr<StructType>*)
                                            Array<shared_ptr<StructType>, eastl::allocator>::operator[](
                                                (Array<shared_ptr<StructType>, eastl::allocator>*)local_70,
                                                (ulong)local_34);
                                        shared_ptr<StructType>::operator=(this_01, &local_90);
                                        *(int*)(this + 60) = *(int*)(this + 60) + 1;
                                        bVar4 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar4 = false;
                                    }
                                }
                                local_90.~shared_ptr();
                                if (bVar4)
                                    goto LAB_1005eeb4b;
                                bVar4 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005eeb4b:
                                bVar4 = true;
                            }
                            local_68->~shared_ptr();
                            if (!bVar4) {
                                bVar4 = false;
                                goto LAB_1005eecba;
                            }
                        }
                        local_34 = local_34 + 1;
                        p_Var14 = (_func_decltype_nullptr*)(ulong)local_34;
                    } while (local_34 < local_38);
                    bVar4 = true;
                }
            LAB_1005eecba:
                if (!bVar4) {
                    return local_40;
                }
                if (*(uint*)(this + 60) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(code**)(**(long**)(this + 8) + 80))();
                *(undefined4*)(this + 48) = 2;
                this_02 = local_78;
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::reset(
                    local_78, (DownloadWaitHandler*)0);
                uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                *(ulonglong*)(*(long*)(this + 8) + 40) = uVar12;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005eed60, 96 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<StructType>::List(int, DataStatus const**)
    undefined* ConfigTypeLoadAllContainer<StructType>::List(int param_1, DataStatus** param_2) {
        int iVar1;
        undefined* puVar2;

        iVar1 = *(int*)(this + 48);
        if (iVar1 == 2) {
            *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar1 != 1) {
                return PTR_NullConfigType_100ee64d8;
            }
        }
        puVar2 = (undefined*)Array<shared_ptr<StructType>, eastl::allocator>::operator[](
            (Array<shared_ptr<StructType>, eastl::allocator>*)(this + 72), (long)param_1);
        return puVar2;
    }

    // 0x1005eee10, 80 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<StructType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<StructType>::~ConfigTypeLoadAllContainer() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee8208;
        *(undefined**)this = PTR_vtable_100ee8208 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        ((this + 96))->~unique_ptr();
        ((this + 72))->~Array();
        ((this + 40))->~AutoSingleton();
        ~AutoSingleton();
    }

    // 0x1005f4800, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<AchievementType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<AchievementType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005f4820, 128 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<AchievementType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<AchievementType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeLoadAllContainer<AchievementType>::ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList* param_1,
                                                                                 Js5ResourceProvider* param_2,
                                                                                 Js5ArchiveSettings* param_3,
                                                                                 Js5ConfigGroup* param_4,
                                                                                 uint param_5) {
        undefined* puVar1;

        new (this) BaseConfigTypeContainer<AchievementType>(param_1, param_2, param_3, param_4);
        new ((this + 40)) BaseLoadAllConfigTypeContainer(param_5);
        puVar1 = PTR_vtable_100ee8250;
        *(undefined**)this = PTR_vtable_100ee8250 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        new ((this + 72)) Array<shared_ptr<AchievementType>, eastl::allocator>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
    }

    // 0x1005f48b0, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<AchievementType>::~ConfigTypeLoadAllContainer(): jumps straight to the base-object destructor

    // 0x1005f48c0, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<AchievementType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<AchievementType>::~ConfigTypeLoadAllContainer() {
        ~ConfigTypeLoadAllContainer(this);
        operator_delete(this);
    }

    // 0x1005f48e0, 976 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<AchievementType>::LoadList()
    /* WARNING: Removing unreachable block (ram,4301212795) */
    /* ConfigTypeLoadAllContainer<AchievementType>::LoadList() */

    undefined* ConfigTypeLoadAllContainer<AchievementType>::LoadList() {
        int iVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        bool bVar4;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<AchievementType>* pCVar5;
        char cVar6;
        uint uVar7;
        uint uVar8;
        undefined* puVar9;
        undefined8 uVar10;
        long* plVar11;
        shared_ptr<AchievementType>* this_01;
        ulonglong uVar12;
        undefined* in_RCX;
        uint* puVar13;
        _func_decltype_nullptr* p_Var14;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* this_02;
        uint uVar15;
        shared_ptr local_90;
        undefined8 local_80;
        unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>* local_78;
        ConfigTypeLoadAllContainer<AchievementType>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<AchievementType>* local_58;
        Js5ArchiveSettings* local_50;
        DownloadWaitHandler* local_48;
        undefined* local_40;
        uint local_38;
        uint local_34;

        if (*(int*)(this + 48) != 2) {
            pJVar2 = *(Js5ArchiveSettings**)(this + 16);
            local_58 = this + 8;
            local_38 = (*(Mixer**)(this + 8))->GetStreamCountLastMix();
            *(uint*)(this + 64) = local_38;
            if (*(int*)(this + 48) == 0) {
                ((this + 72))->set_max_size((ulong)local_38, 0);
                local_68[0] = (Js5Index*)0;
                local_40 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, local_68, *(undefined8*)(this + 24));
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pJVar2;
                std::make_unique<DownloadWaitHandler, unsigned int&>((uint*)&local_90);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96),
                    (unique_ptr*)&local_90);
                local_90.~unique_ptr();
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                        (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96));
                pCVar5 = local_58;
                if (local_38 != 0) {
                    uVar15 = 0;
                    do {
                        this_00 = local_68[0];
                        uVar7 = (*(BaseConfigTypeList**)pCVar5)->GetClientGroupID(uVar15);
                        uVar8 = (*(BaseConfigTypeList**)pCVar5)->GetClientFileID(uVar15);
                        cVar6 = this_00->DoesFileExist(uVar7, uVar8);
                        if (cVar6 == '\0') {
                            *(int*)(this + 60) = *(int*)(this + 60) + 1;
                        } else {
                            local_48->SetExists(uVar15);
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < local_38);
                }
                *(undefined4*)(this + 48) = 1;
                iVar1 = *(int*)(this + 48);
                pJVar2 = local_50;
            } else {
                iVar1 = *(int*)(this + 48);
                local_40 = in_RCX;
            }
            if (iVar1 == 1) {
                local_80 = 0;
                pJVar3 = *(Js5ArchiveSettings**)(this + 24);
                puVar9 = (undefined*)(**(code**)(*(long*)pJVar2 + 24))(pJVar2, &local_80, pJVar3);
                if (puVar9 != DataStatus::READY) {
                    return puVar9;
                }
                local_78 = (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)(this + 96);
                local_48 = (DownloadWaitHandler*)
                    std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(local_78);
                local_34 = 0;
                bVar4 = true;
                if (local_38 != 0) {
                    local_70 = this + 72;
                    p_Var14 = (_func_decltype_nullptr*)0;
                    local_50 = pJVar3;
                    do {
                        if (*(int*)(this + 52) == 0)
                            break;
                        cVar6 = local_48->CanCheck((int)p_Var14);
                        if (cVar6 != '\0') {
                            new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var14);
                            uVar15 = local_34;
                            plVar11 = *(long**)local_58;
                            uVar10 = local_50->GetPrefetchPriority();
                            puVar13 = (uint*)(ulong)uVar15;
                            puVar9 = (undefined*)(**(code**)(*plVar11 + 64))(plVar11, local_68, local_50, puVar13,
                                                                             uVar10, 1);
                            if (puVar9 == DataStatus::READY) {
                                MakeSharedPool<AchievementType, 256>::MakeShared<
                                    BaseTemplateConfigTypeList<AchievementType>*&, unsigned int&>(
                                    &local_90, (MakeSharedPool<AchievementType, 256>*)local_58,
                                    (BaseTemplateConfigTypeList**)&local_34, puVar13);
                                plVar11 = (long*)shared_ptr<AchievementType>::operator->(
                                    (shared_ptr<AchievementType>*)&local_90);
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                puVar9 = (undefined*)(**(code**)(*plVar11 + 32))(plVar11);
                                if (puVar9 == DataStatus::NOTLOADED) {
                                    bVar4 = false;
                                    local_40 = puVar9;
                                } else {
                                    plVar11 = (long*)shared_ptr<AchievementType>::operator->(
                                        (shared_ptr<AchievementType>*)&local_90);
                                    (**(code**)(*plVar11 + 24))(plVar11);
                                    puVar9 = (undefined*)(**(code**)(**(long**)local_58 + 72))();
                                    if (puVar9 == DataStatus::READY) {
                                        this_01 = (shared_ptr<AchievementType>*)
                                            Array<shared_ptr<AchievementType>, eastl::allocator>::operator[](
                                                (Array<shared_ptr<AchievementType>, eastl::allocator>*)local_70,
                                                (ulong)local_34);
                                        shared_ptr<AchievementType>::operator=(this_01, &local_90);
                                        *(int*)(this + 60) = *(int*)(this + 60) + 1;
                                        bVar4 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar4 = false;
                                    }
                                }
                                local_90.~shared_ptr();
                                if (bVar4)
                                    goto LAB_1005f4a9b;
                                bVar4 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005f4a9b:
                                bVar4 = true;
                            }
                            local_68->~shared_ptr();
                            if (!bVar4) {
                                bVar4 = false;
                                goto LAB_1005f4c0a;
                            }
                        }
                        local_34 = local_34 + 1;
                        p_Var14 = (_func_decltype_nullptr*)(ulong)local_34;
                    } while (local_34 < local_38);
                    bVar4 = true;
                }
            LAB_1005f4c0a:
                if (!bVar4) {
                    return local_40;
                }
                if (*(uint*)(this + 60) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(code**)(**(long**)(this + 8) + 80))();
                *(undefined4*)(this + 48) = 2;
                this_02 = local_78;
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::reset(
                    local_78, (DownloadWaitHandler*)0);
                uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
                *(ulonglong*)(*(long*)(this + 8) + 40) = uVar12;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005f4cb0, 96 bytes, inline, placed by class name
    // ConfigTypeLoadAllContainer<AchievementType>::List(int, DataStatus const**)
    undefined* ConfigTypeLoadAllContainer<AchievementType>::List(int param_1, DataStatus** param_2) {
        int iVar1;
        undefined* puVar2;

        iVar1 = *(int*)(this + 48);
        if (iVar1 == 2) {
            *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (param_2 != (DataStatus**)0) {
                *param_2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar1 != 1) {
                return PTR_NullConfigType_100ee6520;
            }
        }
        puVar2 = (undefined*)Array<shared_ptr<AchievementType>, eastl::allocator>::operator[](
            (Array<shared_ptr<AchievementType>, eastl::allocator>*)(this + 72), (long)param_1);
        return puVar2;
    }

    // 0x1005f4d60, 80 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeLoadAllContainer<AchievementType>::~ConfigTypeLoadAllContainer()
    void ConfigTypeLoadAllContainer<AchievementType>::~ConfigTypeLoadAllContainer() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee8250;
        *(undefined**)this = PTR_vtable_100ee8250 + 16;
        *(undefined**)(this + 40) = puVar1 + 112;
        ((this + 96))->~unique_ptr();
        ((this + 72))->~Array();
        ((this + 40))->~AutoSingleton();
        ~AutoSingleton();
    }

} // namespace jag::game

namespace jag {
    // 0x1001434a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::OldscapeVarTypeList>::ref_counter_shared(unsigned long, oldscape::configdecoder::OldscapeVarTypeList*): jumps straight to the base-object constructor

    // 0x1001434b0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::OldscapeVarTypeList>::ref_counter_shared(unsigned long, oldscape::configdecoder::OldscapeVarTypeList*)
    void
    ref_counter_shared<oldscape::configdecoder::OldscapeVarTypeList>::ref_counter_shared(ulong param_1,
                                                                                         OldscapeVarTypeList* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee75f0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(OldscapeVarTypeList**)(this + 24) = param_2;
    }

    // 0x1001434f0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::OldscapeVarTypeList>::DeleteData()
    /* ref_counter_shared<oldscape::midi2::LoadSongTask>::DeleteData() */

    void ref_counter_shared<oldscape::midi2::LoadSongTask>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 128;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1001435c0, 32 bytes, inline, placed by debug map only (low confidence)
    // Array<oldscape::graphics::Pix8, eastl::allocator>* placement_new<Array<oldscape::graphics::Pix8, eastl::allocator>, Array<oldscape::graphics::Pix8, eastl::allocator> >(void*, Array<oldscape::graphics::Pix8, eastl::allocator>&&)
    Array* jag::placement_new<Array<oldscape::graphics::Pix8, eastl::allocator>,
                              Array<oldscape::graphics::Pix8, eastl::allocator>>(void* param_1, Array* param_2) {
        Array<oldscape::graphics::Pix8, eastl::allocator>::Array(param_1, param_2);
        return param_1;
    }

    // 0x1001435e0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<oldscape::graphics::Pix8, eastl::allocator> >* placement_new<ref_counter_shared<Array<oldscape::graphics::Pix8, eastl::allocator> >, int, Array<oldscape::graphics::Pix8, eastl::allocator>*&>(void*, int&&, Array<oldscape::graphics::Pix8, eastl::allocator>*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<Array<oldscape::graphics::Pix8, eastl::allocator>>, int,
                                           Array<oldscape::graphics::Pix8, eastl::allocator>*&>(void* param_1,
                                                                                                int* param_2,
                                                                                                Array** param_3) {
        ref_counter_shared<Array<oldscape::graphics::Pix8, eastl::allocator>>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100143660, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<oldscape::graphics::Pix8, eastl::allocator> >::ref_counter_shared(unsigned long, Array<oldscape::graphics::Pix8, eastl::allocator>*): jumps straight to the base-object constructor

    // 0x100143670, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<oldscape::graphics::Pix8, eastl::allocator> >::ref_counter_shared(unsigned long, Array<oldscape::graphics::Pix8, eastl::allocator>*)
    void ref_counter_shared<Array<oldscape::graphics::Pix8, eastl::allocator>>::ref_counter_shared(
        ref_counter_shared<Array<oldscape::graphics::Pix8, eastl::allocator>>* this, ulong param_1, Array* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee73f8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Array**)(this + 24) = param_2;
    }

    // 0x1001436b0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<oldscape::graphics::Pix8, eastl::allocator> >::DeleteData()
    void ref_counter_shared<Array<oldscape::graphics::Pix8, eastl::allocator>>::DeleteData(
        ref_counter_shared<Array<oldscape::graphics::Pix8, eastl::allocator>>* this) {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~Array();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 24;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100143700, 32 bytes, inline, placed by debug map only (low confidence)
    // Array<oldscape::graphics::Pix32, eastl::allocator>* placement_new<Array<oldscape::graphics::Pix32, eastl::allocator>, Array<oldscape::graphics::Pix32, eastl::allocator> >(void*, Array<oldscape::graphics::Pix32, eastl::allocator>&&)
    Array* jag::placement_new<Array<oldscape::graphics::Pix32, eastl::allocator>,
                              Array<oldscape::graphics::Pix32, eastl::allocator>>(void* param_1, Array* param_2) {
        Array<oldscape::graphics::Pix32, eastl::allocator>::Array(param_1, param_2);
        return param_1;
    }

    // 0x100143720, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<oldscape::graphics::Pix32, eastl::allocator> >* placement_new<ref_counter_shared<Array<oldscape::graphics::Pix32, eastl::allocator> >, int, Array<oldscape::graphics::Pix32, eastl::allocator>*&>(void*, int&&, Array<oldscape::graphics::Pix32, eastl::allocator>*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<Array<oldscape::graphics::Pix32, eastl::allocator>>, int,
                                           Array<oldscape::graphics::Pix32, eastl::allocator>*&>(void* param_1,
                                                                                                 int* param_2,
                                                                                                 Array** param_3) {
        ref_counter_shared<Array<oldscape::graphics::Pix32, eastl::allocator>>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1001437a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<oldscape::graphics::Pix32, eastl::allocator> >::ref_counter_shared(unsigned long, Array<oldscape::graphics::Pix32, eastl::allocator>*): jumps straight to the base-object constructor

    // 0x1001437b0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<oldscape::graphics::Pix32, eastl::allocator> >::ref_counter_shared(unsigned long, Array<oldscape::graphics::Pix32, eastl::allocator>*)
    void ref_counter_shared<Array<oldscape::graphics::Pix32, eastl::allocator>>::ref_counter_shared(
        ref_counter_shared<Array<oldscape::graphics::Pix32, eastl::allocator>>* this, ulong param_1, Array* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7400 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Array**)(this + 24) = param_2;
    }

    // 0x1001437f0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<oldscape::graphics::Pix32, eastl::allocator> >::DeleteData()
    void ref_counter_shared<Array<oldscape::graphics::Pix32, eastl::allocator>>::DeleteData(
        ref_counter_shared<Array<oldscape::graphics::Pix32, eastl::allocator>>* this) {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~Array();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 24;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100143840, 48 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::TextureCache* placement_new<oldscape::dash3d::TextureCache, oldscape::jagex3::Js5*&, oldscape::jagex3::Js5*&, int, float const&, int>(void*, oldscape::jagex3::Js5*&, oldscape::jagex3::Js5*&, int&&, float const&, int&&)
    TextureCache* jag::placement_new<oldscape::dash3d::TextureCache, oldscape::jagex3::Js5*&, oldscape::jagex3::Js5*&,
                                     int, float const&, int>(void* param_1, Js5** param_2, Js5** param_3, int* param_4,
                                                             float* param_5, int* param_6) {
        oldscape::dash3d::TextureCache::TextureCache(param_1, *param_2, *param_3, *param_4, (double)*param_5, *param_6);
        return param_1;
    }

    // 0x100143870, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::TextureCache>* placement_new<ref_counter_shared<oldscape::dash3d::TextureCache>, int, oldscape::dash3d::TextureCache*&>(void*, int&&, oldscape::dash3d::TextureCache*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::dash3d::TextureCache>, int, oldscape::dash3d::TextureCache*&>(
        void* param_1, int* param_2, TextureCache** param_3) {
        ref_counter_shared<oldscape::dash3d::TextureCache>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100143890, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::TextureCache>::ref_counter_shared(unsigned long, oldscape::dash3d::TextureCache*): jumps straight to the base-object constructor

    // 0x1001438a0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::TextureCache>::ref_counter_shared(unsigned long, oldscape::dash3d::TextureCache*)
    void ref_counter_shared<oldscape::dash3d::TextureCache>::ref_counter_shared(ulong param_1, TextureCache* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7730 + 16;
        *(ulong*)(this + 16) = param_1;
        *(TextureCache**)(this + 24) = param_2;
    }

    // 0x1001438e0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::TextureCache>::DeleteData()
    void ref_counter_shared<oldscape::dash3d::TextureCache>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~TextureCache();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 88;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag
