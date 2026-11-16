// libs/game/runetek5/config/ConfigTypeLoadAllContainer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    template <typename...> // 30 instantiations, e.g. <AchievementType>, <BASType>, <CursorType>
    class ConfigTypeLoadAllContainer {
    public:
        // virtual methods in vtable order
        virtual ~ConfigTypeLoadAllContainer();
        virtual uint8_t* LoadList();
        virtual uint8_t* List(int arg1, const DataStatus** arg2);
        ConfigTypeLoadAllContainer(
            BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>& baseTemplateConfigTypeList,
            Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
            const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<VarType>& baseTemplateConfigTypeList,
                                   Js5ResourceProvider& js5ResourceProvider,
                                   const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                   unsigned int arg5);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<SeqType>& baseTemplateConfigTypeList,
                                   Js5ResourceProvider& js5ResourceProvider,
                                   const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                   unsigned int arg5);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<ObjType>& baseTemplateConfigTypeList,
                                   Js5ResourceProvider& js5ResourceProvider,
                                   const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                   unsigned int arg5);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<NPCType>& baseTemplateConfigTypeList,
                                   Js5ResourceProvider& js5ResourceProvider,
                                   const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                   unsigned int arg5);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<LocType>& baseTemplateConfigTypeList,
                                   Js5ResourceProvider& js5ResourceProvider,
                                   const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                   unsigned int arg5);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<ParamType>& baseTemplateConfigTypeList,
                                   Js5ResourceProvider& js5ResourceProvider,
                                   const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                   unsigned int arg5);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<DBRowType>& baseTemplateConfigTypeList,
                                   Js5ResourceProvider& js5ResourceProvider,
                                   const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                   unsigned int arg5);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<DBTableType>& baseTemplateConfigTypeList,
                                   Js5ResourceProvider& js5ResourceProvider,
                                   const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                   unsigned int arg5);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<InvType>& baseTemplateConfigTypeList,
                                   Js5ResourceProvider& js5ResourceProvider,
                                   const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                   unsigned int arg5);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<VarBitType>& baseTemplateConfigTypeList,
                                   Js5ResourceProvider& js5ResourceProvider,
                                   const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                   unsigned int arg5);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<BASType>& baseTemplateConfigTypeList,
                                   Js5ResourceProvider& js5ResourceProvider,
                                   const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                   unsigned int arg5);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<FloorUnderlayType>& baseTemplateConfigTypeList,
                                   Js5ResourceProvider& js5ResourceProvider,
                                   const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                   unsigned int arg5);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<FloorOverlayType>& baseTemplateConfigTypeList,
                                   Js5ResourceProvider& js5ResourceProvider,
                                   const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                   unsigned int arg5);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<HitmarkType>& baseTemplateConfigTypeList,
                                   Js5ResourceProvider& js5ResourceProvider,
                                   const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                   unsigned int arg5);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<HeadbarType>& baseTemplateConfigTypeList,
                                   Js5ResourceProvider& js5ResourceProvider,
                                   const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                   unsigned int arg5);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<IDKType>& baseTemplateConfigTypeList,
                                   Js5ResourceProvider& js5ResourceProvider,
                                   const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                   unsigned int arg5);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<MapElementType>& baseTemplateConfigTypeList,
                                   Js5ResourceProvider& js5ResourceProvider,
                                   const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                   unsigned int arg5);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<MSIType>& baseTemplateConfigTypeList,
                                   Js5ResourceProvider& js5ResourceProvider,
                                   const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                   unsigned int arg5);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<QuestType>& baseTemplateConfigTypeList,
                                   Js5ResourceProvider& js5ResourceProvider,
                                   const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                   unsigned int arg5);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<SeqGroupType>& baseTemplateConfigTypeList,
                                   Js5ResourceProvider& js5ResourceProvider,
                                   const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                   unsigned int arg5);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<LightType>& baseTemplateConfigTypeList,
                                   Js5ResourceProvider& js5ResourceProvider,
                                   const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                   unsigned int arg5);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<SkyBoxType>& baseTemplateConfigTypeList,
                                   Js5ResourceProvider& js5ResourceProvider,
                                   const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                   unsigned int arg5);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<WaterType>& baseTemplateConfigTypeList,
                                   Js5ResourceProvider& js5ResourceProvider,
                                   const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                   unsigned int arg5);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<CursorType>& baseTemplateConfigTypeList,
                                   Js5ResourceProvider& js5ResourceProvider,
                                   const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                   unsigned int arg5);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<WorldAreaType>& baseTemplateConfigTypeList,
                                   Js5ResourceProvider& js5ResourceProvider,
                                   const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                   unsigned int arg5);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<EnumType>& baseTemplateConfigTypeList,
                                   Js5ResourceProvider& js5ResourceProvider,
                                   const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                   unsigned int arg5);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<EffectAnimType>& baseTemplateConfigTypeList,
                                   Js5ResourceProvider& js5ResourceProvider,
                                   const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                   unsigned int arg5);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<StructType>& baseTemplateConfigTypeList,
                                   Js5ResourceProvider& js5ResourceProvider,
                                   const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                   unsigned int arg5);
        ConfigTypeLoadAllContainer(BaseTemplateConfigTypeList<AchievementType>& baseTemplateConfigTypeList,
                                   Js5ResourceProvider& js5ResourceProvider,
                                   const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                   unsigned int arg5);
    };

    // 0x100142ba0
    ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>& baseTemplateConfigTypeList,
        Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
        const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>(
              baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee82e0;
        new ((this + 9)) Array<shared_ptr<oldscape::configdecoder::OldscapeVarType>>();
        ((this + 12))->unique_ptr<true, void>();
    }

    // 0x100142c60
    uint8_t* ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType>::LoadList() {
        int* piVar1;
        int iVar2;
        ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType> _vtbl* pCVar3;
        ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType> _vtbl* pCVar4;
        bool bVar5;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType>* pCVar6;
        unsigned int arg1;
        unsigned int arg2;
        uint8_t* puVar8;
        uint64_t uVar9;
        long* plVar10;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_01;
        CacheReset__3* pCVar11;
        uint8_t* in_RCX;
        unsigned int uVar12;
        ReturnValue local_90;
        uint64_t local_80;
        VarTypeList* local_78;
        Array<shared_ptr<oldscape::configdecoder::OldscapeVarType>>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType>* local_58;
        ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType> _vtbl* local_50;
        DownloadWaitHandler* local_48;
        uint8_t* local_40;
        unsigned int local_38;
        unsigned int local_34;

        if (*(int*)&this[6]._vptr != 2) {
            pCVar3 = this[2]._vptr;
            local_58 = this + 1;
            local_38 = this[1]._vptr->GetStreamCountLastMix();
            *(unsigned int*)&this[8]._vptr = local_38;
            if (*(int*)&this[6]._vptr == 0) {
                ((this + 9))->set_max_size((unsigned long)local_38, 0);
                local_68[0] = nullptr;
                local_40 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, local_68, this[3]._vptr);
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pCVar3;
                local_90 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_38);
                (*((this + 12))) = local_90;
                local_48 = (DownloadWaitHandler*)*(*((this + 12)));
                pCVar6 = local_58;
                if (local_38 != 0) {
                    uVar12 = 0;
                    do {
                        this_00 = local_68[0];
                        arg1 = pCVar6->_vptr->GetClientGroupID(uVar12);
                        arg2 = pCVar6->_vptr->GetClientFileID(uVar12);
                        if (!(this_00->DoesFileExist(arg1, arg2))) {
                            piVar1 = (int*)((long)&this[7]._vptr + 4);
                            *piVar1 = *piVar1 + 1;
                        } else {
                            local_48->SetExists(uVar12);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_38);
                }
                *(uint32_t*)&this[6]._vptr = 1;
                iVar2 = *(int*)&this[6]._vptr;
                pCVar3 = local_50;
            } else {
                iVar2 = *(int*)&this[6]._vptr;
                local_40 = in_RCX;
            }
            if (iVar2 == 1) {
                local_80 = 0;
                pCVar4 = this[3]._vptr;
                puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, &local_80, pCVar4);
                if (puVar8 != DataStatus::READY) {
                    return puVar8;
                }
                local_78 = (VarTypeList*)(this + 12);
                local_48 = (DownloadWaitHandler*)**local_78;
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = (Array<shared_ptr<oldscape::configdecoder::OldscapeVarType>>*)(this + 9);
                    local_50 = pCVar4;
                    do {
                        if (*(int*)((long)&this[6]._vptr + 4) == 0)
                            break;
                        if (local_48->CanCheck(local_34)) {
                            new (local_68) shared_ptr();
                            uVar12 = local_34;
                            pCVar3 = local_58->_vptr;
                            uVar9 = local_50->GetPrefetchPriority();
                            puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 64))(pCVar3, local_68, local_50,
                                                                                        uVar12, uVar9, 1);
                            if (puVar8 == DataStatus::READY) {
                                oldscape::configdecoder::OldscapeVarType::MakeShared<
                                    BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>*&,
                                    unsigned int&>(
                                    &local_90,
                                    (BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>**)local_58,
                                    (int*)&local_34);
                                plVar10 = (long*)local_90.operator->();
                                **local_68;
                                puVar8 = (uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10);
                                if (puVar8 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar8;
                                } else {
                                    plVar10 = (long*)local_90.operator->();
                                    (**(void (**)(...))(*plVar10 + 24))(plVar10);
                                    puVar8 = (uint8_t*)(**(void (**)(...))(local_58->_vptr->_dtor + 72))();
                                    if (puVar8 == DataStatus::READY) {
                                        this_01 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*local_70)[(
                                            unsigned long)local_34];
                                        *this_01 = local_90;
                                        piVar1 = (int*)((long)&this[7]._vptr + 4);
                                        *piVar1 = *piVar1 + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                if (bVar5)
                                    goto LAB_100142e1b;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_100142e1b:
                                bVar5 = true;
                            }
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_100142f8a;
                            }
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_100142f8a:
                if (!bVar5) {
                    return local_40;
                }
                if (*(unsigned int*)((long)&this[7]._vptr + 4) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(void (**)(...))((this[1]._vptr)->_dtor + 80))();
                *(uint32_t*)&this[6]._vptr = 2;
                local_78->reset(nullptr);
                pCVar11 = (CacheReset__3*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->CacheReset__3 = pCVar11;
            }
        }
        return DataStatus::READY;
    }

    // 0x100143030
    uint8_t* ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType>::List(int arg1,
                                                                                        const DataStatus** arg2) {
        int* piVar1;

        int iVar2 = *(int*)&this[6]._vptr;
        if (iVar2 == 2) {
            piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
            *piVar1 = *piVar1 + 1;
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar2 != 1) {
                return &oldscape::configdecoder::OldscapeVarType::NullConfigType;
            }
        }
        return (uint8_t*)(*((this + 9)))[(long)arg1];
    }

    // 0x1001430e0
    ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType>::~ConfigTypeLoadAllContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee82e0;
        ((this + 12))->~unique_ptr();
        ((this + 9))->~Array();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1004dbfb0
    ConfigTypeLoadAllContainer<VarType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList<VarType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<VarType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                           js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee82a8;
        new ((this + 9)) Array<shared_ptr<VarType>>();
        ((this + 12))->unique_ptr<true, void>();
    }

    // 0x1004dc070
    uint8_t* ConfigTypeLoadAllContainer<VarType>::LoadList() {
        int* piVar1;
        int iVar2;
        ConfigTypeLoadAllContainer<VarType> _vtbl* pCVar3;
        ConfigTypeLoadAllContainer<VarType> _vtbl* pCVar4;
        bool bVar5;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<VarType>* pCVar6;
        unsigned int arg1;
        unsigned int arg2;
        uint8_t* puVar8;
        uint64_t uVar9;
        long* plVar10;
        shared_ptr<VarType>* this_01;
        CacheReset__3* pCVar11;
        uint8_t* in_RCX;
        unsigned int uVar12;
        ReturnValue local_90;
        uint64_t local_80;
        unique_ptr<DownloadWaitHandler>* local_78;
        Array<shared_ptr<VarType>>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<VarType>* local_58;
        ConfigTypeLoadAllContainer<VarType> _vtbl* local_50;
        DownloadWaitHandler* local_48;
        uint8_t* local_40;
        unsigned int local_38;
        unsigned int local_34;

        if (*(int*)&this[6]._vptr != 2) {
            pCVar3 = this[2]._vptr;
            local_58 = this + 1;
            local_38 = this[1]._vptr->GetStreamCountLastMix();
            *(unsigned int*)&this[8]._vptr = local_38;
            if (*(int*)&this[6]._vptr == 0) {
                ((this + 9))->set_max_size((unsigned long)local_38, 0);
                local_68[0] = nullptr;
                local_40 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, local_68, this[3]._vptr);
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pCVar3;
                local_90 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_38);
                (*((this + 12))) = local_90;
                local_48 = (DownloadWaitHandler*)*(*((this + 12)));
                pCVar6 = local_58;
                if (local_38 != 0) {
                    uVar12 = 0;
                    do {
                        this_00 = local_68[0];
                        arg1 = pCVar6->_vptr->GetClientGroupID(uVar12);
                        arg2 = pCVar6->_vptr->GetClientFileID(uVar12);
                        if (!(this_00->DoesFileExist(arg1, arg2))) {
                            piVar1 = (int*)((long)&this[7]._vptr + 4);
                            *piVar1 = *piVar1 + 1;
                        } else {
                            local_48->SetExists(uVar12);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_38);
                }
                *(uint32_t*)&this[6]._vptr = 1;
                iVar2 = *(int*)&this[6]._vptr;
                pCVar3 = local_50;
            } else {
                iVar2 = *(int*)&this[6]._vptr;
                local_40 = in_RCX;
            }
            if (iVar2 == 1) {
                local_80 = 0;
                pCVar4 = this[3]._vptr;
                puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, &local_80, pCVar4);
                if (puVar8 != DataStatus::READY) {
                    return puVar8;
                }
                local_78 = (unique_ptr<DownloadWaitHandler>*)(this + 12);
                local_48 = (DownloadWaitHandler*)**local_78;
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = (Array<shared_ptr<VarType>>*)(this + 9);
                    local_50 = pCVar4;
                    do {
                        if (*(int*)((long)&this[6]._vptr + 4) == 0)
                            break;
                        if (local_48->CanCheck(local_34)) {
                            new (local_68) shared_ptr();
                            uVar12 = local_34;
                            pCVar3 = local_58->_vptr;
                            uVar9 = local_50->GetPrefetchPriority();
                            puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 64))(pCVar3, local_68, local_50,
                                                                                        uVar12, uVar9, 1);
                            if (puVar8 == DataStatus::READY) {
                                MakeSharedPool<VarType, 5504>::MakeShared<BaseTemplateConfigTypeList<VarType>*&,
                                                                          unsigned int&>(
                                    (BaseTemplateConfigTypeList<VarType>**)&local_90, (unsigned int*)local_58);
                                plVar10 = (long*)local_90.operator->();
                                **local_68;
                                puVar8 = (uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10);
                                if (puVar8 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar8;
                                } else {
                                    plVar10 = (long*)local_90.operator->();
                                    (**(void (**)(...))(*plVar10 + 24))(plVar10);
                                    puVar8 = (uint8_t*)(**(void (**)(...))(local_58->_vptr->_dtor + 72))();
                                    if (puVar8 == DataStatus::READY) {
                                        this_01 = (shared_ptr<VarType>*)(*local_70)[(unsigned long)local_34];
                                        *this_01 = local_90;
                                        piVar1 = (int*)((long)&this[7]._vptr + 4);
                                        *piVar1 = *piVar1 + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                if (bVar5)
                                    goto LAB_1004dc22b;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1004dc22b:
                                bVar5 = true;
                            }
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_1004dc39a;
                            }
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_1004dc39a:
                if (!bVar5) {
                    return local_40;
                }
                if (*(unsigned int*)((long)&this[7]._vptr + 4) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(void (**)(...))((this[1]._vptr)->_dtor + 80))();
                *(uint32_t*)&this[6]._vptr = 2;
                local_78->reset(nullptr);
                pCVar11 = (CacheReset__3*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->CacheReset__3 = pCVar11;
            }
        }
        return DataStatus::READY;
    }

    // 0x1004dc440
    uint8_t* ConfigTypeLoadAllContainer<VarType>::List(int arg1, const DataStatus** arg2) {
        int* piVar1;

        int iVar2 = *(int*)&this[6]._vptr;
        if (iVar2 == 2) {
            piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
            *piVar1 = *piVar1 + 1;
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar2 != 1) {
                return PTR_NullConfigType_100ee6578;
            }
        }
        return (uint8_t*)(*((this + 9)))[(long)arg1];
    }

    // 0x1004dc4f0
    ConfigTypeLoadAllContainer<VarType>::~ConfigTypeLoadAllContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee82a8;
        ((this + 12))->~unique_ptr();
        ((this + 9))->~Array();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1004ef540
    ConfigTypeLoadAllContainer<SeqType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList<SeqType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<SeqType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                           js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee82a0;
        new ((this + 9)) Array<shared_ptr<SeqType>>();
        ((this + 12))->unique_ptr<true, void>();
    }

    // 0x1004ef600
    uint8_t* ConfigTypeLoadAllContainer<SeqType>::LoadList() {
        int* piVar1;
        int iVar2;
        ConfigTypeLoadAllContainer<SeqType> _vtbl* pCVar3;
        ConfigTypeLoadAllContainer<SeqType> _vtbl* pCVar4;
        bool bVar5;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<SeqType>* pCVar6;
        unsigned int arg1;
        unsigned int arg2;
        uint8_t* puVar8;
        uint64_t uVar9;
        long* plVar10;
        shared_ptr<SeqType>* this_01;
        CacheReset__3* pCVar11;
        uint8_t* in_RCX;
        unsigned int uVar12;
        ReturnValue local_90;
        uint64_t local_80;
        unique_ptr<DownloadWaitHandler>* local_78;
        Array<shared_ptr<SeqType>>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<SeqType>* local_58;
        ConfigTypeLoadAllContainer<SeqType> _vtbl* local_50;
        DownloadWaitHandler* local_48;
        uint8_t* local_40;
        unsigned int local_38;
        unsigned int local_34;

        if (*(int*)&this[6]._vptr != 2) {
            pCVar3 = this[2]._vptr;
            local_58 = this + 1;
            local_38 = this[1]._vptr->GetStreamCountLastMix();
            *(unsigned int*)&this[8]._vptr = local_38;
            if (*(int*)&this[6]._vptr == 0) {
                ((this + 9))->set_max_size((unsigned long)local_38, 0);
                local_68[0] = nullptr;
                local_40 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, local_68, this[3]._vptr);
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pCVar3;
                local_90 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_38);
                (*((this + 12))) = local_90;
                local_48 = (DownloadWaitHandler*)*(*((this + 12)));
                pCVar6 = local_58;
                if (local_38 != 0) {
                    uVar12 = 0;
                    do {
                        this_00 = local_68[0];
                        arg1 = pCVar6->_vptr->GetClientGroupID(uVar12);
                        arg2 = pCVar6->_vptr->GetClientFileID(uVar12);
                        if (!(this_00->DoesFileExist(arg1, arg2))) {
                            piVar1 = (int*)((long)&this[7]._vptr + 4);
                            *piVar1 = *piVar1 + 1;
                        } else {
                            local_48->SetExists(uVar12);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_38);
                }
                *(uint32_t*)&this[6]._vptr = 1;
                iVar2 = *(int*)&this[6]._vptr;
                pCVar3 = local_50;
            } else {
                iVar2 = *(int*)&this[6]._vptr;
                local_40 = in_RCX;
            }
            if (iVar2 == 1) {
                local_80 = 0;
                pCVar4 = this[3]._vptr;
                puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, &local_80, pCVar4);
                if (puVar8 != DataStatus::READY) {
                    return puVar8;
                }
                local_78 = (unique_ptr<DownloadWaitHandler>*)(this + 12);
                local_48 = (DownloadWaitHandler*)**local_78;
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = (Array<shared_ptr<SeqType>>*)(this + 9);
                    local_50 = pCVar4;
                    do {
                        if (*(int*)((long)&this[6]._vptr + 4) == 0)
                            break;
                        if (local_48->CanCheck(local_34)) {
                            new (local_68) shared_ptr();
                            uVar12 = local_34;
                            pCVar3 = local_58->_vptr;
                            uVar9 = local_50->GetPrefetchPriority();
                            puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 64))(pCVar3, local_68, local_50,
                                                                                        uVar12, uVar9, 1);
                            if (puVar8 == DataStatus::READY) {
                                MakeSharedPool<SeqType, 96>::MakeShared<BaseTemplateConfigTypeList<SeqType>*&,
                                                                        unsigned int&>(
                                    (BaseTemplateConfigTypeList<SeqType>**)&local_90, (unsigned int*)local_58);
                                plVar10 = (long*)local_90.operator->();
                                **local_68;
                                puVar8 = (uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10);
                                if (puVar8 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar8;
                                } else {
                                    plVar10 = (long*)local_90.operator->();
                                    (**(void (**)(...))(*plVar10 + 24))(plVar10);
                                    puVar8 = (uint8_t*)(**(void (**)(...))(local_58->_vptr->_dtor + 72))();
                                    if (puVar8 == DataStatus::READY) {
                                        this_01 = (shared_ptr<SeqType>*)(*local_70)[(unsigned long)local_34];
                                        *this_01 = local_90;
                                        piVar1 = (int*)((long)&this[7]._vptr + 4);
                                        *piVar1 = *piVar1 + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                if (bVar5)
                                    goto LAB_1004ef7bb;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1004ef7bb:
                                bVar5 = true;
                            }
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_1004ef92a;
                            }
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_1004ef92a:
                if (!bVar5) {
                    return local_40;
                }
                if (*(unsigned int*)((long)&this[7]._vptr + 4) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(void (**)(...))((this[1]._vptr)->_dtor + 80))();
                *(uint32_t*)&this[6]._vptr = 2;
                local_78->reset(nullptr);
                pCVar11 = (CacheReset__3*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->CacheReset__3 = pCVar11;
            }
        }
        return DataStatus::READY;
    }

    // 0x1004ef9d0
    uint8_t* ConfigTypeLoadAllContainer<SeqType>::List(int arg1, const DataStatus** arg2) {
        int* piVar1;

        int iVar2 = *(int*)&this[6]._vptr;
        if (iVar2 == 2) {
            piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
            *piVar1 = *piVar1 + 1;
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar2 != 1) {
                return PTR_NullConfigType_100ee6570;
            }
        }
        return (uint8_t*)(*((this + 9)))[(long)arg1];
    }

    // 0x1004efa80
    ConfigTypeLoadAllContainer<SeqType>::~ConfigTypeLoadAllContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee82a0;
        ((this + 12))->~unique_ptr();
        ((this + 9))->~Array();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1004fbc60
    ConfigTypeLoadAllContainer<ObjType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList<ObjType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<ObjType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                           js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8298;
        new ((this + 9)) Array<shared_ptr<ObjType>>();
        ((this + 12))->unique_ptr<true, void>();
    }

    // 0x1004fbd20
    uint8_t* ConfigTypeLoadAllContainer<ObjType>::LoadList() {
        int* piVar1;
        int iVar2;
        ConfigTypeLoadAllContainer<ObjType> _vtbl* pCVar3;
        ConfigTypeLoadAllContainer<ObjType> _vtbl* pCVar4;
        bool bVar5;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<ObjType>* pCVar6;
        unsigned int arg1;
        unsigned int arg2;
        uint8_t* puVar8;
        uint64_t uVar9;
        long* plVar10;
        shared_ptr<ObjType>* this_01;
        CacheReset__3* pCVar11;
        uint8_t* in_RCX;
        unsigned int uVar12;
        ReturnValue local_90;
        uint64_t local_80;
        unique_ptr<DownloadWaitHandler>* local_78;
        Array<shared_ptr<ObjType>>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<ObjType>* local_58;
        ConfigTypeLoadAllContainer<ObjType> _vtbl* local_50;
        DownloadWaitHandler* local_48;
        uint8_t* local_40;
        unsigned int local_38;
        unsigned int local_34;

        if (*(int*)&this[6]._vptr != 2) {
            pCVar3 = this[2]._vptr;
            local_58 = this + 1;
            local_38 = this[1]._vptr->GetStreamCountLastMix();
            *(unsigned int*)&this[8]._vptr = local_38;
            if (*(int*)&this[6]._vptr == 0) {
                ((this + 9))->set_max_size((unsigned long)local_38, 0);
                local_68[0] = nullptr;
                local_40 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, local_68, this[3]._vptr);
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pCVar3;
                local_90 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_38);
                (*((this + 12))) = local_90;
                local_48 = (DownloadWaitHandler*)*(*((this + 12)));
                pCVar6 = local_58;
                if (local_38 != 0) {
                    uVar12 = 0;
                    do {
                        this_00 = local_68[0];
                        arg1 = pCVar6->_vptr->GetClientGroupID(uVar12);
                        arg2 = pCVar6->_vptr->GetClientFileID(uVar12);
                        if (!(this_00->DoesFileExist(arg1, arg2))) {
                            piVar1 = (int*)((long)&this[7]._vptr + 4);
                            *piVar1 = *piVar1 + 1;
                        } else {
                            local_48->SetExists(uVar12);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_38);
                }
                *(uint32_t*)&this[6]._vptr = 1;
                iVar2 = *(int*)&this[6]._vptr;
                pCVar3 = local_50;
            } else {
                iVar2 = *(int*)&this[6]._vptr;
                local_40 = in_RCX;
            }
            if (iVar2 == 1) {
                local_80 = 0;
                pCVar4 = this[3]._vptr;
                puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, &local_80, pCVar4);
                if (puVar8 != DataStatus::READY) {
                    return puVar8;
                }
                local_78 = (unique_ptr<DownloadWaitHandler>*)(this + 12);
                local_48 = (DownloadWaitHandler*)**local_78;
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = (Array<shared_ptr<ObjType>>*)(this + 9);
                    local_50 = pCVar4;
                    do {
                        if (*(int*)((long)&this[6]._vptr + 4) == 0)
                            break;
                        if (local_48->CanCheck(local_34)) {
                            new (local_68) shared_ptr();
                            uVar12 = local_34;
                            pCVar3 = local_58->_vptr;
                            uVar9 = local_50->GetPrefetchPriority();
                            puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 64))(pCVar3, local_68, local_50,
                                                                                        uVar12, uVar9, 1);
                            if (puVar8 == DataStatus::READY) {
                                MakeSharedPool<ObjType, 96>::MakeShared<BaseTemplateConfigTypeList<ObjType>*&,
                                                                        unsigned int&>(
                                    (BaseTemplateConfigTypeList<ObjType>**)&local_90, (unsigned int*)local_58);
                                plVar10 = (long*)local_90.operator->();
                                **local_68;
                                puVar8 = (uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10);
                                if (puVar8 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar8;
                                } else {
                                    plVar10 = (long*)local_90.operator->();
                                    (**(void (**)(...))(*plVar10 + 24))(plVar10);
                                    puVar8 = (uint8_t*)(**(void (**)(...))(local_58->_vptr->_dtor + 72))();
                                    if (puVar8 == DataStatus::READY) {
                                        this_01 = (shared_ptr<ObjType>*)(*local_70)[(unsigned long)local_34];
                                        *this_01 = local_90;
                                        piVar1 = (int*)((long)&this[7]._vptr + 4);
                                        *piVar1 = *piVar1 + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                if (bVar5)
                                    goto LAB_1004fbedb;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1004fbedb:
                                bVar5 = true;
                            }
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_1004fc04a;
                            }
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_1004fc04a:
                if (!bVar5) {
                    return local_40;
                }
                if (*(unsigned int*)((long)&this[7]._vptr + 4) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(void (**)(...))((this[1]._vptr)->_dtor + 80))();
                *(uint32_t*)&this[6]._vptr = 2;
                local_78->reset(nullptr);
                pCVar11 = (CacheReset__3*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->CacheReset__3 = pCVar11;
            }
        }
        return DataStatus::READY;
    }

    // 0x1004fc0f0
    uint8_t* ConfigTypeLoadAllContainer<ObjType>::List(int arg1, const DataStatus** arg2) {
        int* piVar1;

        int iVar2 = *(int*)&this[6]._vptr;
        if (iVar2 == 2) {
            piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
            *piVar1 = *piVar1 + 1;
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar2 != 1) {
                return PTR_NullConfigType_100ee6568;
            }
        }
        return (uint8_t*)(*((this + 9)))[(long)arg1];
    }

    // 0x1004fc1a0
    ConfigTypeLoadAllContainer<ObjType>::~ConfigTypeLoadAllContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8298;
        ((this + 12))->~unique_ptr();
        ((this + 9))->~Array();
        ((this + 5))->~AutoSingleton();
    }

    // 0x100512450
    ConfigTypeLoadAllContainer<NPCType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList<NPCType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<NPCType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                           js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8290;
        new ((this + 9)) Array<shared_ptr<NPCType>>();
        ((this + 12))->unique_ptr<true, void>();
    }

    // 0x100512510
    uint8_t* ConfigTypeLoadAllContainer<NPCType>::LoadList() {
        int* piVar1;
        int iVar2;
        ConfigTypeLoadAllContainer<NPCType> _vtbl* pCVar3;
        ConfigTypeLoadAllContainer<NPCType> _vtbl* pCVar4;
        bool bVar5;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<NPCType>* pCVar6;
        unsigned int arg1;
        unsigned int arg2;
        uint8_t* puVar8;
        uint64_t uVar9;
        long* plVar10;
        shared_ptr<NPCType>* this_01;
        CacheReset__3* pCVar11;
        uint8_t* in_RCX;
        unsigned int uVar12;
        ReturnValue local_90;
        uint64_t local_80;
        unique_ptr<DownloadWaitHandler>* local_78;
        Array<shared_ptr<NPCType>>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<NPCType>* local_58;
        ConfigTypeLoadAllContainer<NPCType> _vtbl* local_50;
        DownloadWaitHandler* local_48;
        uint8_t* local_40;
        unsigned int local_38;
        unsigned int local_34;

        if (*(int*)&this[6]._vptr != 2) {
            pCVar3 = this[2]._vptr;
            local_58 = this + 1;
            local_38 = this[1]._vptr->GetStreamCountLastMix();
            *(unsigned int*)&this[8]._vptr = local_38;
            if (*(int*)&this[6]._vptr == 0) {
                ((this + 9))->set_max_size((unsigned long)local_38, 0);
                local_68[0] = nullptr;
                local_40 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, local_68, this[3]._vptr);
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pCVar3;
                local_90 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_38);
                (*((this + 12))) = local_90;
                local_48 = (DownloadWaitHandler*)*(*((this + 12)));
                pCVar6 = local_58;
                if (local_38 != 0) {
                    uVar12 = 0;
                    do {
                        this_00 = local_68[0];
                        arg1 = pCVar6->_vptr->GetClientGroupID(uVar12);
                        arg2 = pCVar6->_vptr->GetClientFileID(uVar12);
                        if (!(this_00->DoesFileExist(arg1, arg2))) {
                            piVar1 = (int*)((long)&this[7]._vptr + 4);
                            *piVar1 = *piVar1 + 1;
                        } else {
                            local_48->SetExists(uVar12);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_38);
                }
                *(uint32_t*)&this[6]._vptr = 1;
                iVar2 = *(int*)&this[6]._vptr;
                pCVar3 = local_50;
            } else {
                iVar2 = *(int*)&this[6]._vptr;
                local_40 = in_RCX;
            }
            if (iVar2 == 1) {
                local_80 = 0;
                pCVar4 = this[3]._vptr;
                puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, &local_80, pCVar4);
                if (puVar8 != DataStatus::READY) {
                    return puVar8;
                }
                local_78 = (unique_ptr<DownloadWaitHandler>*)(this + 12);
                local_48 = (DownloadWaitHandler*)**local_78;
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = (Array<shared_ptr<NPCType>>*)(this + 9);
                    local_50 = pCVar4;
                    do {
                        if (*(int*)((long)&this[6]._vptr + 4) == 0)
                            break;
                        if (local_48->CanCheck(local_34)) {
                            new (local_68) shared_ptr();
                            uVar12 = local_34;
                            pCVar3 = local_58->_vptr;
                            uVar9 = local_50->GetPrefetchPriority();
                            puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 64))(pCVar3, local_68, local_50,
                                                                                        uVar12, uVar9, 1);
                            if (puVar8 == DataStatus::READY) {
                                MakeSharedPool<NPCType, 216>::MakeShared<BaseTemplateConfigTypeList<NPCType>*&,
                                                                         unsigned int&>(
                                    (BaseTemplateConfigTypeList<NPCType>**)&local_90, (unsigned int*)local_58);
                                plVar10 = (long*)local_90.operator->();
                                **local_68;
                                puVar8 = (uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10);
                                if (puVar8 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar8;
                                } else {
                                    plVar10 = (long*)local_90.operator->();
                                    (**(void (**)(...))(*plVar10 + 24))(plVar10);
                                    puVar8 = (uint8_t*)(**(void (**)(...))(local_58->_vptr->_dtor + 72))();
                                    if (puVar8 == DataStatus::READY) {
                                        this_01 = (shared_ptr<NPCType>*)(*local_70)[(unsigned long)local_34];
                                        *this_01 = local_90;
                                        piVar1 = (int*)((long)&this[7]._vptr + 4);
                                        *piVar1 = *piVar1 + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                if (bVar5)
                                    goto LAB_1005126cb;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005126cb:
                                bVar5 = true;
                            }
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_10051283a;
                            }
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_10051283a:
                if (!bVar5) {
                    return local_40;
                }
                if (*(unsigned int*)((long)&this[7]._vptr + 4) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(void (**)(...))((this[1]._vptr)->_dtor + 80))();
                *(uint32_t*)&this[6]._vptr = 2;
                local_78->reset(nullptr);
                pCVar11 = (CacheReset__3*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->CacheReset__3 = pCVar11;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005128e0
    uint8_t* ConfigTypeLoadAllContainer<NPCType>::List(int arg1, const DataStatus** arg2) {
        int* piVar1;

        int iVar2 = *(int*)&this[6]._vptr;
        if (iVar2 == 2) {
            piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
            *piVar1 = *piVar1 + 1;
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar2 != 1) {
                return PTR_NullConfigType_100ee6560;
            }
        }
        return (uint8_t*)(*((this + 9)))[(long)arg1];
    }

    // 0x100512990
    ConfigTypeLoadAllContainer<NPCType>::~ConfigTypeLoadAllContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8290;
        ((this + 12))->~unique_ptr();
        ((this + 9))->~Array();
        ((this + 5))->~AutoSingleton();
    }

    // 0x10051dfc0
    ConfigTypeLoadAllContainer<LocType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList<LocType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<LocType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                           js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8280;
        new ((this + 9)) Array<shared_ptr<LocType>>();
        ((this + 12))->unique_ptr<true, void>();
    }

    // 0x10051e080
    uint8_t* ConfigTypeLoadAllContainer<LocType>::LoadList() {
        int* piVar1;
        int iVar2;
        ConfigTypeLoadAllContainer<LocType> _vtbl* pCVar3;
        ConfigTypeLoadAllContainer<LocType> _vtbl* pCVar4;
        bool bVar5;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<LocType>* pCVar6;
        unsigned int arg1;
        unsigned int arg2;
        uint8_t* puVar8;
        uint64_t uVar9;
        long* plVar10;
        shared_ptr<LocType>* this_01;
        CacheReset__3* pCVar11;
        uint8_t* in_RCX;
        unsigned int uVar12;
        ReturnValue local_90;
        uint64_t local_80;
        unique_ptr<DownloadWaitHandler>* local_78;
        Array<shared_ptr<LocType>>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<LocType>* local_58;
        ConfigTypeLoadAllContainer<LocType> _vtbl* local_50;
        DownloadWaitHandler* local_48;
        uint8_t* local_40;
        unsigned int local_38;
        unsigned int local_34;

        if (*(int*)&this[6]._vptr != 2) {
            pCVar3 = this[2]._vptr;
            local_58 = this + 1;
            local_38 = this[1]._vptr->GetStreamCountLastMix();
            *(unsigned int*)&this[8]._vptr = local_38;
            if (*(int*)&this[6]._vptr == 0) {
                ((this + 9))->set_max_size((unsigned long)local_38, 0);
                local_68[0] = nullptr;
                local_40 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, local_68, this[3]._vptr);
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pCVar3;
                local_90 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_38);
                (*((this + 12))) = local_90;
                local_48 = (DownloadWaitHandler*)*(*((this + 12)));
                pCVar6 = local_58;
                if (local_38 != 0) {
                    uVar12 = 0;
                    do {
                        this_00 = local_68[0];
                        arg1 = pCVar6->_vptr->GetClientGroupID(uVar12);
                        arg2 = pCVar6->_vptr->GetClientFileID(uVar12);
                        if (!(this_00->DoesFileExist(arg1, arg2))) {
                            piVar1 = (int*)((long)&this[7]._vptr + 4);
                            *piVar1 = *piVar1 + 1;
                        } else {
                            local_48->SetExists(uVar12);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_38);
                }
                *(uint32_t*)&this[6]._vptr = 1;
                iVar2 = *(int*)&this[6]._vptr;
                pCVar3 = local_50;
            } else {
                iVar2 = *(int*)&this[6]._vptr;
                local_40 = in_RCX;
            }
            if (iVar2 == 1) {
                local_80 = 0;
                pCVar4 = this[3]._vptr;
                puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, &local_80, pCVar4);
                if (puVar8 != DataStatus::READY) {
                    return puVar8;
                }
                local_78 = (unique_ptr<DownloadWaitHandler>*)(this + 12);
                local_48 = (DownloadWaitHandler*)**local_78;
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = (Array<shared_ptr<LocType>>*)(this + 9);
                    local_50 = pCVar4;
                    do {
                        if (*(int*)((long)&this[6]._vptr + 4) == 0)
                            break;
                        if (local_48->CanCheck(local_34)) {
                            new (local_68) shared_ptr();
                            uVar12 = local_34;
                            pCVar3 = local_58->_vptr;
                            uVar9 = local_50->GetPrefetchPriority();
                            puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 64))(pCVar3, local_68, local_50,
                                                                                        uVar12, uVar9, 1);
                            if (puVar8 == DataStatus::READY) {
                                MakeSharedPool<LocType, 256>::MakeShared<BaseTemplateConfigTypeList<LocType>*&,
                                                                         unsigned int&>(
                                    (BaseTemplateConfigTypeList<LocType>**)&local_90, (unsigned int*)local_58);
                                plVar10 = (long*)local_90.operator->();
                                **local_68;
                                puVar8 = (uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10);
                                if (puVar8 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar8;
                                } else {
                                    plVar10 = (long*)local_90.operator->();
                                    (**(void (**)(...))(*plVar10 + 24))(plVar10);
                                    puVar8 = (uint8_t*)(**(void (**)(...))(local_58->_vptr->_dtor + 72))();
                                    if (puVar8 == DataStatus::READY) {
                                        this_01 = (shared_ptr<LocType>*)(*local_70)[(unsigned long)local_34];
                                        *this_01 = local_90;
                                        piVar1 = (int*)((long)&this[7]._vptr + 4);
                                        *piVar1 = *piVar1 + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                if (bVar5)
                                    goto LAB_10051e23b;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_10051e23b:
                                bVar5 = true;
                            }
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_10051e3aa;
                            }
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_10051e3aa:
                if (!bVar5) {
                    return local_40;
                }
                if (*(unsigned int*)((long)&this[7]._vptr + 4) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(void (**)(...))((this[1]._vptr)->_dtor + 80))();
                *(uint32_t*)&this[6]._vptr = 2;
                local_78->reset(nullptr);
                pCVar11 = (CacheReset__3*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->CacheReset__3 = pCVar11;
            }
        }
        return DataStatus::READY;
    }

    // 0x10051e450
    uint8_t* ConfigTypeLoadAllContainer<LocType>::List(int arg1, const DataStatus** arg2) {
        int* piVar1;

        int iVar2 = *(int*)&this[6]._vptr;
        if (iVar2 == 2) {
            piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
            *piVar1 = *piVar1 + 1;
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar2 != 1) {
                return PTR_NullConfigType_100ee6550;
            }
        }
        return (uint8_t*)(*((this + 9)))[(long)arg1];
    }

    // 0x10051e500
    ConfigTypeLoadAllContainer<LocType>::~ConfigTypeLoadAllContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8280;
        ((this + 12))->~unique_ptr();
        ((this + 9))->~Array();
        ((this + 5))->~AutoSingleton();
    }

    // 0x100576260
    ConfigTypeLoadAllContainer<ParamType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList<ParamType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<ParamType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                             js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee82c8;
        new ((this + 9)) Array<shared_ptr<ParamType>>();
        ((this + 12))->unique_ptr<true, void>();
    }

    // 0x100576320
    uint8_t* ConfigTypeLoadAllContainer<ParamType>::LoadList() {
        int* piVar1;
        int iVar2;
        ConfigTypeLoadAllContainer<ParamType> _vtbl* pCVar3;
        ConfigTypeLoadAllContainer<ParamType> _vtbl* pCVar4;
        bool bVar5;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<ParamType>* pCVar6;
        unsigned int arg1;
        unsigned int arg2;
        uint8_t* puVar8;
        uint64_t uVar9;
        long* plVar10;
        shared_ptr<ParamType>* this_01;
        CacheReset__3* pCVar11;
        uint8_t* in_RCX;
        unsigned int uVar12;
        ReturnValue local_90;
        uint64_t local_80;
        unique_ptr<DownloadWaitHandler>* local_78;
        Array<shared_ptr<ParamType>>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<ParamType>* local_58;
        ConfigTypeLoadAllContainer<ParamType> _vtbl* local_50;
        DownloadWaitHandler* local_48;
        uint8_t* local_40;
        unsigned int local_38;
        unsigned int local_34;

        if (*(int*)&this[6]._vptr != 2) {
            pCVar3 = this[2]._vptr;
            local_58 = this + 1;
            local_38 = this[1]._vptr->GetStreamCountLastMix();
            *(unsigned int*)&this[8]._vptr = local_38;
            if (*(int*)&this[6]._vptr == 0) {
                ((this + 9))->set_max_size((unsigned long)local_38, 0);
                local_68[0] = nullptr;
                local_40 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, local_68, this[3]._vptr);
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pCVar3;
                local_90 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_38);
                (*((this + 12))) = local_90;
                local_48 = (DownloadWaitHandler*)*(*((this + 12)));
                pCVar6 = local_58;
                if (local_38 != 0) {
                    uVar12 = 0;
                    do {
                        this_00 = local_68[0];
                        arg1 = pCVar6->_vptr->GetClientGroupID(uVar12);
                        arg2 = pCVar6->_vptr->GetClientFileID(uVar12);
                        if (!(this_00->DoesFileExist(arg1, arg2))) {
                            piVar1 = (int*)((long)&this[7]._vptr + 4);
                            *piVar1 = *piVar1 + 1;
                        } else {
                            local_48->SetExists(uVar12);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_38);
                }
                *(uint32_t*)&this[6]._vptr = 1;
                iVar2 = *(int*)&this[6]._vptr;
                pCVar3 = local_50;
            } else {
                iVar2 = *(int*)&this[6]._vptr;
                local_40 = in_RCX;
            }
            if (iVar2 == 1) {
                local_80 = 0;
                pCVar4 = this[3]._vptr;
                puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, &local_80, pCVar4);
                if (puVar8 != DataStatus::READY) {
                    return puVar8;
                }
                local_78 = (unique_ptr<DownloadWaitHandler>*)(this + 12);
                local_48 = (DownloadWaitHandler*)**local_78;
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = (Array<shared_ptr<ParamType>>*)(this + 9);
                    local_50 = pCVar4;
                    do {
                        if (*(int*)((long)&this[6]._vptr + 4) == 0)
                            break;
                        if (local_48->CanCheck(local_34)) {
                            new (local_68) shared_ptr();
                            uVar12 = local_34;
                            pCVar3 = local_58->_vptr;
                            uVar9 = local_50->GetPrefetchPriority();
                            puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 64))(pCVar3, local_68, local_50,
                                                                                        uVar12, uVar9, 1);
                            if (puVar8 == DataStatus::READY) {
                                MakeSharedPool<ParamType, 640>::MakeShared<BaseTemplateConfigTypeList<ParamType>*&,
                                                                           unsigned int&>(
                                    (BaseTemplateConfigTypeList<ParamType>**)&local_90, (unsigned int*)local_58);
                                plVar10 = (long*)local_90.operator->();
                                **local_68;
                                puVar8 = (uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10);
                                if (puVar8 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar8;
                                } else {
                                    plVar10 = (long*)local_90.operator->();
                                    (**(void (**)(...))(*plVar10 + 24))(plVar10);
                                    puVar8 = (uint8_t*)(**(void (**)(...))(local_58->_vptr->_dtor + 72))();
                                    if (puVar8 == DataStatus::READY) {
                                        this_01 = (shared_ptr<ParamType>*)(*local_70)[(unsigned long)local_34];
                                        *this_01 = local_90;
                                        piVar1 = (int*)((long)&this[7]._vptr + 4);
                                        *piVar1 = *piVar1 + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                if (bVar5)
                                    goto LAB_1005764db;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005764db:
                                bVar5 = true;
                            }
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_10057664a;
                            }
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_10057664a:
                if (!bVar5) {
                    return local_40;
                }
                if (*(unsigned int*)((long)&this[7]._vptr + 4) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(void (**)(...))((this[1]._vptr)->_dtor + 80))();
                *(uint32_t*)&this[6]._vptr = 2;
                local_78->reset(nullptr);
                pCVar11 = (CacheReset__3*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->CacheReset__3 = pCVar11;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005766f0
    uint8_t* ConfigTypeLoadAllContainer<ParamType>::List(int arg1, const DataStatus** arg2) {
        int* piVar1;

        int iVar2 = *(int*)&this[6]._vptr;
        if (iVar2 == 2) {
            piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
            *piVar1 = *piVar1 + 1;
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar2 != 1) {
                return PTR_NullConfigType_100ee6598;
            }
        }
        return (uint8_t*)(*((this + 9)))[(long)arg1];
    }

    // 0x1005767a0
    ConfigTypeLoadAllContainer<ParamType>::~ConfigTypeLoadAllContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee82c8;
        ((this + 12))->~unique_ptr();
        ((this + 9))->~Array();
        ((this + 5))->~AutoSingleton();
    }

    // 0x10057bd20
    ConfigTypeLoadAllContainer<DBRowType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList<DBRowType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<DBRowType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                             js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee82b8;
        new ((this + 9)) Array<shared_ptr<DBRowType>>();
        ((this + 12))->unique_ptr<true, void>();
    }

    // 0x10057bde0
    uint8_t* ConfigTypeLoadAllContainer<DBRowType>::LoadList() {
        int* piVar1;
        int iVar2;
        ConfigTypeLoadAllContainer<DBRowType> _vtbl* pCVar3;
        ConfigTypeLoadAllContainer<DBRowType> _vtbl* pCVar4;
        bool bVar5;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<DBRowType>* pCVar6;
        unsigned int arg1;
        unsigned int arg2;
        uint8_t* puVar8;
        uint64_t uVar9;
        long* plVar10;
        shared_ptr<DBRowType>* this_01;
        CacheReset__3* pCVar11;
        uint8_t* in_RCX;
        unsigned int uVar12;
        ReturnValue local_90;
        uint64_t local_80;
        unique_ptr<DownloadWaitHandler>* local_78;
        Array<shared_ptr<DBRowType>>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<DBRowType>* local_58;
        ConfigTypeLoadAllContainer<DBRowType> _vtbl* local_50;
        DownloadWaitHandler* local_48;
        uint8_t* local_40;
        unsigned int local_38;
        unsigned int local_34;

        if (*(int*)&this[6]._vptr != 2) {
            pCVar3 = this[2]._vptr;
            local_58 = this + 1;
            local_38 = this[1]._vptr->GetStreamCountLastMix();
            *(unsigned int*)&this[8]._vptr = local_38;
            if (*(int*)&this[6]._vptr == 0) {
                ((this + 9))->set_max_size((unsigned long)local_38, 0);
                local_68[0] = nullptr;
                local_40 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, local_68, this[3]._vptr);
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pCVar3;
                local_90 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_38);
                (*((this + 12))) = local_90;
                local_48 = (DownloadWaitHandler*)*(*((this + 12)));
                pCVar6 = local_58;
                if (local_38 != 0) {
                    uVar12 = 0;
                    do {
                        this_00 = local_68[0];
                        arg1 = pCVar6->_vptr->GetClientGroupID(uVar12);
                        arg2 = pCVar6->_vptr->GetClientFileID(uVar12);
                        if (!(this_00->DoesFileExist(arg1, arg2))) {
                            piVar1 = (int*)((long)&this[7]._vptr + 4);
                            *piVar1 = *piVar1 + 1;
                        } else {
                            local_48->SetExists(uVar12);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_38);
                }
                *(uint32_t*)&this[6]._vptr = 1;
                iVar2 = *(int*)&this[6]._vptr;
                pCVar3 = local_50;
            } else {
                iVar2 = *(int*)&this[6]._vptr;
                local_40 = in_RCX;
            }
            if (iVar2 == 1) {
                local_80 = 0;
                pCVar4 = this[3]._vptr;
                puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, &local_80, pCVar4);
                if (puVar8 != DataStatus::READY) {
                    return puVar8;
                }
                local_78 = (unique_ptr<DownloadWaitHandler>*)(this + 12);
                local_48 = (DownloadWaitHandler*)**local_78;
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = (Array<shared_ptr<DBRowType>>*)(this + 9);
                    local_50 = pCVar4;
                    do {
                        if (*(int*)((long)&this[6]._vptr + 4) == 0)
                            break;
                        if (local_48->CanCheck(local_34)) {
                            new (local_68) shared_ptr();
                            uVar12 = local_34;
                            pCVar3 = local_58->_vptr;
                            uVar9 = local_50->GetPrefetchPriority();
                            puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 64))(pCVar3, local_68, local_50,
                                                                                        uVar12, uVar9, 1);
                            if (puVar8 == DataStatus::READY) {
                                MakeSharedPool<DBRowType, 128>::MakeShared<BaseTemplateConfigTypeList<DBRowType>*&,
                                                                           unsigned int&>(
                                    (BaseTemplateConfigTypeList<DBRowType>**)&local_90, (unsigned int*)local_58);
                                plVar10 = (long*)local_90.operator->();
                                **local_68;
                                puVar8 = (uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10);
                                if (puVar8 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar8;
                                } else {
                                    plVar10 = (long*)local_90.operator->();
                                    (**(void (**)(...))(*plVar10 + 24))(plVar10);
                                    puVar8 = (uint8_t*)(**(void (**)(...))(local_58->_vptr->_dtor + 72))();
                                    if (puVar8 == DataStatus::READY) {
                                        this_01 = (shared_ptr<DBRowType>*)(*local_70)[(unsigned long)local_34];
                                        *this_01 = local_90;
                                        piVar1 = (int*)((long)&this[7]._vptr + 4);
                                        *piVar1 = *piVar1 + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                if (bVar5)
                                    goto LAB_10057bf9b;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_10057bf9b:
                                bVar5 = true;
                            }
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_10057c10a;
                            }
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_10057c10a:
                if (!bVar5) {
                    return local_40;
                }
                if (*(unsigned int*)((long)&this[7]._vptr + 4) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(void (**)(...))((this[1]._vptr)->_dtor + 80))();
                *(uint32_t*)&this[6]._vptr = 2;
                local_78->reset(nullptr);
                pCVar11 = (CacheReset__3*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->CacheReset__3 = pCVar11;
            }
        }
        return DataStatus::READY;
    }

    // 0x10057c1b0
    uint8_t* ConfigTypeLoadAllContainer<DBRowType>::List(int arg1, const DataStatus** arg2) {
        int* piVar1;

        int iVar2 = *(int*)&this[6]._vptr;
        if (iVar2 == 2) {
            piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
            *piVar1 = *piVar1 + 1;
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar2 != 1) {
                return PTR_NullConfigType_100ee6588;
            }
        }
        return (uint8_t*)(*((this + 9)))[(long)arg1];
    }

    // 0x10057c260
    ConfigTypeLoadAllContainer<DBRowType>::~ConfigTypeLoadAllContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee82b8;
        ((this + 12))->~unique_ptr();
        ((this + 9))->~Array();
        ((this + 5))->~AutoSingleton();
    }

    // 0x100581400
    ConfigTypeLoadAllContainer<DBTableType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList<DBTableType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<DBTableType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                               js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8218;
        new ((this + 9)) Array<shared_ptr<DBTableType>>();
        ((this + 12))->unique_ptr<true, void>();
    }

    // 0x1005814c0
    uint8_t* ConfigTypeLoadAllContainer<DBTableType>::LoadList() {
        int* piVar1;
        int iVar2;
        ConfigTypeLoadAllContainer<DBTableType> _vtbl* pCVar3;
        ConfigTypeLoadAllContainer<DBTableType> _vtbl* pCVar4;
        bool bVar5;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<DBTableType>* pCVar6;
        unsigned int arg1;
        unsigned int arg2;
        uint8_t* puVar8;
        uint64_t uVar9;
        long* plVar10;
        shared_ptr<DBTableType>* this_01;
        CacheReset__3* pCVar11;
        uint8_t* in_RCX;
        unsigned int uVar12;
        ReturnValue local_90;
        uint64_t local_80;
        unique_ptr<DownloadWaitHandler>* local_78;
        Array<shared_ptr<DBTableType>>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<DBTableType>* local_58;
        ConfigTypeLoadAllContainer<DBTableType> _vtbl* local_50;
        DownloadWaitHandler* local_48;
        uint8_t* local_40;
        unsigned int local_38;
        unsigned int local_34;

        if (*(int*)&this[6]._vptr != 2) {
            pCVar3 = this[2]._vptr;
            local_58 = this + 1;
            local_38 = this[1]._vptr->GetStreamCountLastMix();
            *(unsigned int*)&this[8]._vptr = local_38;
            if (*(int*)&this[6]._vptr == 0) {
                ((this + 9))->set_max_size((unsigned long)local_38, 0);
                local_68[0] = nullptr;
                local_40 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, local_68, this[3]._vptr);
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pCVar3;
                local_90 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_38);
                (*((this + 12))) = local_90;
                local_48 = (DownloadWaitHandler*)*(*((this + 12)));
                pCVar6 = local_58;
                if (local_38 != 0) {
                    uVar12 = 0;
                    do {
                        this_00 = local_68[0];
                        arg1 = pCVar6->_vptr->GetClientGroupID(uVar12);
                        arg2 = pCVar6->_vptr->GetClientFileID(uVar12);
                        if (!(this_00->DoesFileExist(arg1, arg2))) {
                            piVar1 = (int*)((long)&this[7]._vptr + 4);
                            *piVar1 = *piVar1 + 1;
                        } else {
                            local_48->SetExists(uVar12);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_38);
                }
                *(uint32_t*)&this[6]._vptr = 1;
                iVar2 = *(int*)&this[6]._vptr;
                pCVar3 = local_50;
            } else {
                iVar2 = *(int*)&this[6]._vptr;
                local_40 = in_RCX;
            }
            if (iVar2 == 1) {
                local_80 = 0;
                pCVar4 = this[3]._vptr;
                puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, &local_80, pCVar4);
                if (puVar8 != DataStatus::READY) {
                    return puVar8;
                }
                local_78 = (unique_ptr<DownloadWaitHandler>*)(this + 12);
                local_48 = (DownloadWaitHandler*)**local_78;
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = (Array<shared_ptr<DBTableType>>*)(this + 9);
                    local_50 = pCVar4;
                    do {
                        if (*(int*)((long)&this[6]._vptr + 4) == 0)
                            break;
                        if (local_48->CanCheck(local_34)) {
                            new (local_68) shared_ptr();
                            uVar12 = local_34;
                            pCVar3 = local_58->_vptr;
                            uVar9 = local_50->GetPrefetchPriority();
                            puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 64))(pCVar3, local_68, local_50,
                                                                                        uVar12, uVar9, 1);
                            if (puVar8 == DataStatus::READY) {
                                MakeSharedPool<DBTableType, 4>::MakeShared<BaseTemplateConfigTypeList<DBTableType>*&,
                                                                           unsigned int&>(
                                    (BaseTemplateConfigTypeList<DBTableType>**)&local_90, (unsigned int*)local_58);
                                plVar10 = (long*)local_90.operator->();
                                **local_68;
                                puVar8 = (uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10);
                                if (puVar8 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar8;
                                } else {
                                    plVar10 = (long*)local_90.operator->();
                                    (**(void (**)(...))(*plVar10 + 24))(plVar10);
                                    puVar8 = (uint8_t*)(**(void (**)(...))(local_58->_vptr->_dtor + 72))();
                                    if (puVar8 == DataStatus::READY) {
                                        this_01 = (shared_ptr<DBTableType>*)(*local_70)[(unsigned long)local_34];
                                        *this_01 = local_90;
                                        piVar1 = (int*)((long)&this[7]._vptr + 4);
                                        *piVar1 = *piVar1 + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                if (bVar5)
                                    goto LAB_10058167b;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_10058167b:
                                bVar5 = true;
                            }
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_1005817ea;
                            }
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_1005817ea:
                if (!bVar5) {
                    return local_40;
                }
                if (*(unsigned int*)((long)&this[7]._vptr + 4) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(void (**)(...))((this[1]._vptr)->_dtor + 80))();
                *(uint32_t*)&this[6]._vptr = 2;
                local_78->reset(nullptr);
                pCVar11 = (CacheReset__3*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->CacheReset__3 = pCVar11;
            }
        }
        return DataStatus::READY;
    }

    // 0x100581890
    uint8_t* ConfigTypeLoadAllContainer<DBTableType>::List(int arg1, const DataStatus** arg2) {
        int* piVar1;

        int iVar2 = *(int*)&this[6]._vptr;
        if (iVar2 == 2) {
            piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
            *piVar1 = *piVar1 + 1;
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar2 != 1) {
                return PTR_NullConfigType_100ee64e8;
            }
        }
        return (uint8_t*)(*((this + 9)))[(long)arg1];
    }

    // 0x100581940
    ConfigTypeLoadAllContainer<DBTableType>::~ConfigTypeLoadAllContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8218;
        ((this + 12))->~unique_ptr();
        ((this + 9))->~Array();
        ((this + 5))->~AutoSingleton();
    }

    // 0x100586ae0
    ConfigTypeLoadAllContainer<InvType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList<InvType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<InvType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                           js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8278;
        new ((this + 9)) Array<shared_ptr<InvType>>();
        ((this + 12))->unique_ptr<true, void>();
    }

    // 0x100586ba0
    uint8_t* ConfigTypeLoadAllContainer<InvType>::LoadList() {
        int* piVar1;
        int iVar2;
        ConfigTypeLoadAllContainer<InvType> _vtbl* pCVar3;
        ConfigTypeLoadAllContainer<InvType> _vtbl* pCVar4;
        bool bVar5;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<InvType>* pCVar6;
        unsigned int arg1;
        unsigned int arg2;
        uint8_t* puVar8;
        uint64_t uVar9;
        long* plVar10;
        shared_ptr<InvType>* this_01;
        CacheReset__3* pCVar11;
        uint8_t* in_RCX;
        unsigned int uVar12;
        ReturnValue local_90;
        uint64_t local_80;
        unique_ptr<DownloadWaitHandler>* local_78;
        Array<shared_ptr<InvType>>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<InvType>* local_58;
        ConfigTypeLoadAllContainer<InvType> _vtbl* local_50;
        DownloadWaitHandler* local_48;
        uint8_t* local_40;
        unsigned int local_38;
        unsigned int local_34;

        if (*(int*)&this[6]._vptr != 2) {
            pCVar3 = this[2]._vptr;
            local_58 = this + 1;
            local_38 = this[1]._vptr->GetStreamCountLastMix();
            *(unsigned int*)&this[8]._vptr = local_38;
            if (*(int*)&this[6]._vptr == 0) {
                ((this + 9))->set_max_size((unsigned long)local_38, 0);
                local_68[0] = nullptr;
                local_40 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, local_68, this[3]._vptr);
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pCVar3;
                local_90 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_38);
                (*((this + 12))) = local_90;
                local_48 = (DownloadWaitHandler*)*(*((this + 12)));
                pCVar6 = local_58;
                if (local_38 != 0) {
                    uVar12 = 0;
                    do {
                        this_00 = local_68[0];
                        arg1 = pCVar6->_vptr->GetClientGroupID(uVar12);
                        arg2 = pCVar6->_vptr->GetClientFileID(uVar12);
                        if (!(this_00->DoesFileExist(arg1, arg2))) {
                            piVar1 = (int*)((long)&this[7]._vptr + 4);
                            *piVar1 = *piVar1 + 1;
                        } else {
                            local_48->SetExists(uVar12);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_38);
                }
                *(uint32_t*)&this[6]._vptr = 1;
                iVar2 = *(int*)&this[6]._vptr;
                pCVar3 = local_50;
            } else {
                iVar2 = *(int*)&this[6]._vptr;
                local_40 = in_RCX;
            }
            if (iVar2 == 1) {
                local_80 = 0;
                pCVar4 = this[3]._vptr;
                puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, &local_80, pCVar4);
                if (puVar8 != DataStatus::READY) {
                    return puVar8;
                }
                local_78 = (unique_ptr<DownloadWaitHandler>*)(this + 12);
                local_48 = (DownloadWaitHandler*)**local_78;
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = (Array<shared_ptr<InvType>>*)(this + 9);
                    local_50 = pCVar4;
                    do {
                        if (*(int*)((long)&this[6]._vptr + 4) == 0)
                            break;
                        if (local_48->CanCheck(local_34)) {
                            new (local_68) shared_ptr();
                            uVar12 = local_34;
                            pCVar3 = local_58->_vptr;
                            uVar9 = local_50->GetPrefetchPriority();
                            puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 64))(pCVar3, local_68, local_50,
                                                                                        uVar12, uVar9, 1);
                            if (puVar8 == DataStatus::READY) {
                                MakeSharedPool<InvType, 32>::MakeShared<BaseTemplateConfigTypeList<InvType>*&,
                                                                        unsigned int&>(
                                    (BaseTemplateConfigTypeList<InvType>**)&local_90, (unsigned int*)local_58);
                                plVar10 = (long*)local_90.operator->();
                                **local_68;
                                puVar8 = (uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10);
                                if (puVar8 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar8;
                                } else {
                                    plVar10 = (long*)local_90.operator->();
                                    (**(void (**)(...))(*plVar10 + 24))(plVar10);
                                    puVar8 = (uint8_t*)(**(void (**)(...))(local_58->_vptr->_dtor + 72))();
                                    if (puVar8 == DataStatus::READY) {
                                        this_01 = (shared_ptr<InvType>*)(*local_70)[(unsigned long)local_34];
                                        *this_01 = local_90;
                                        piVar1 = (int*)((long)&this[7]._vptr + 4);
                                        *piVar1 = *piVar1 + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                if (bVar5)
                                    goto LAB_100586d5b;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_100586d5b:
                                bVar5 = true;
                            }
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_100586eca;
                            }
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_100586eca:
                if (!bVar5) {
                    return local_40;
                }
                if (*(unsigned int*)((long)&this[7]._vptr + 4) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(void (**)(...))((this[1]._vptr)->_dtor + 80))();
                *(uint32_t*)&this[6]._vptr = 2;
                local_78->reset(nullptr);
                pCVar11 = (CacheReset__3*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->CacheReset__3 = pCVar11;
            }
        }
        return DataStatus::READY;
    }

    // 0x100586f70
    uint8_t* ConfigTypeLoadAllContainer<InvType>::List(int arg1, const DataStatus** arg2) {
        int* piVar1;

        int iVar2 = *(int*)&this[6]._vptr;
        if (iVar2 == 2) {
            piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
            *piVar1 = *piVar1 + 1;
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar2 != 1) {
                return PTR_NullConfigType_100ee6548;
            }
        }
        return (uint8_t*)(*((this + 9)))[(long)arg1];
    }

    // 0x100587020
    ConfigTypeLoadAllContainer<InvType>::~ConfigTypeLoadAllContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8278;
        ((this + 12))->~unique_ptr();
        ((this + 9))->~Array();
        ((this + 5))->~AutoSingleton();
    }

    // 0x10058ae70
    ConfigTypeLoadAllContainer<VarBitType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList<VarBitType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<VarBitType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                              js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8210;
        new ((this + 9)) Array<shared_ptr<VarBitType>>();
        ((this + 12))->unique_ptr<true, void>();
    }

    // 0x10058af30
    uint8_t* ConfigTypeLoadAllContainer<VarBitType>::LoadList() {
        int* piVar1;
        int iVar2;
        ConfigTypeLoadAllContainer<VarBitType> _vtbl* pCVar3;
        ConfigTypeLoadAllContainer<VarBitType> _vtbl* pCVar4;
        bool bVar5;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<VarBitType>* pCVar6;
        unsigned int arg1;
        unsigned int arg2;
        uint8_t* puVar8;
        uint64_t uVar9;
        long* plVar10;
        shared_ptr<VarBitType>* this_01;
        CacheReset__3* pCVar11;
        uint8_t* in_RCX;
        unsigned int uVar12;
        ReturnValue local_90;
        uint64_t local_80;
        unique_ptr<DownloadWaitHandler>* local_78;
        Array<shared_ptr<VarBitType>>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<VarBitType>* local_58;
        ConfigTypeLoadAllContainer<VarBitType> _vtbl* local_50;
        DownloadWaitHandler* local_48;
        uint8_t* local_40;
        unsigned int local_38;
        unsigned int local_34;

        if (*(int*)&this[6]._vptr != 2) {
            pCVar3 = this[2]._vptr;
            local_58 = this + 1;
            local_38 = this[1]._vptr->GetStreamCountLastMix();
            *(unsigned int*)&this[8]._vptr = local_38;
            if (*(int*)&this[6]._vptr == 0) {
                ((this + 9))->set_max_size((unsigned long)local_38, 0);
                local_68[0] = nullptr;
                local_40 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, local_68, this[3]._vptr);
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pCVar3;
                local_90 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_38);
                (*((this + 12))) = local_90;
                local_48 = (DownloadWaitHandler*)*(*((this + 12)));
                pCVar6 = local_58;
                if (local_38 != 0) {
                    uVar12 = 0;
                    do {
                        this_00 = local_68[0];
                        arg1 = pCVar6->_vptr->GetClientGroupID(uVar12);
                        arg2 = pCVar6->_vptr->GetClientFileID(uVar12);
                        if (!(this_00->DoesFileExist(arg1, arg2))) {
                            piVar1 = (int*)((long)&this[7]._vptr + 4);
                            *piVar1 = *piVar1 + 1;
                        } else {
                            local_48->SetExists(uVar12);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_38);
                }
                *(uint32_t*)&this[6]._vptr = 1;
                iVar2 = *(int*)&this[6]._vptr;
                pCVar3 = local_50;
            } else {
                iVar2 = *(int*)&this[6]._vptr;
                local_40 = in_RCX;
            }
            if (iVar2 == 1) {
                local_80 = 0;
                pCVar4 = this[3]._vptr;
                puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, &local_80, pCVar4);
                if (puVar8 != DataStatus::READY) {
                    return puVar8;
                }
                local_78 = (unique_ptr<DownloadWaitHandler>*)(this + 12);
                local_48 = (DownloadWaitHandler*)**local_78;
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = (Array<shared_ptr<VarBitType>>*)(this + 9);
                    local_50 = pCVar4;
                    do {
                        if (*(int*)((long)&this[6]._vptr + 4) == 0)
                            break;
                        if (local_48->CanCheck(local_34)) {
                            new (local_68) shared_ptr();
                            uVar12 = local_34;
                            pCVar3 = local_58->_vptr;
                            uVar9 = local_50->GetPrefetchPriority();
                            puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 64))(pCVar3, local_68, local_50,
                                                                                        uVar12, uVar9, 1);
                            if (puVar8 == DataStatus::READY) {
                                MakeSharedPool<VarBitType, 2048>::MakeShared<BaseTemplateConfigTypeList<VarBitType>*&,
                                                                             unsigned int&>(
                                    (BaseTemplateConfigTypeList<VarBitType>**)&local_90, (unsigned int*)local_58);
                                plVar10 = (long*)local_90.operator->();
                                **local_68;
                                puVar8 = (uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10);
                                if (puVar8 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar8;
                                } else {
                                    plVar10 = (long*)local_90.operator->();
                                    (**(void (**)(...))(*plVar10 + 24))(plVar10);
                                    puVar8 = (uint8_t*)(**(void (**)(...))(local_58->_vptr->_dtor + 72))();
                                    if (puVar8 == DataStatus::READY) {
                                        this_01 = (shared_ptr<VarBitType>*)(*local_70)[(unsigned long)local_34];
                                        *this_01 = local_90;
                                        piVar1 = (int*)((long)&this[7]._vptr + 4);
                                        *piVar1 = *piVar1 + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                if (bVar5)
                                    goto LAB_10058b0eb;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_10058b0eb:
                                bVar5 = true;
                            }
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_10058b25a;
                            }
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_10058b25a:
                if (!bVar5) {
                    return local_40;
                }
                if (*(unsigned int*)((long)&this[7]._vptr + 4) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(void (**)(...))((this[1]._vptr)->_dtor + 80))();
                *(uint32_t*)&this[6]._vptr = 2;
                local_78->reset(nullptr);
                pCVar11 = (CacheReset__3*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->CacheReset__3 = pCVar11;
            }
        }
        return DataStatus::READY;
    }

    // 0x10058b300
    uint8_t* ConfigTypeLoadAllContainer<VarBitType>::List(int arg1, const DataStatus** arg2) {
        int* piVar1;

        int iVar2 = *(int*)&this[6]._vptr;
        if (iVar2 == 2) {
            piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
            *piVar1 = *piVar1 + 1;
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar2 != 1) {
                return PTR_NullConfigType_100ee64e0;
            }
        }
        return (uint8_t*)(*((this + 9)))[(long)arg1];
    }

    // 0x10058b3b0
    ConfigTypeLoadAllContainer<VarBitType>::~ConfigTypeLoadAllContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8210;
        ((this + 12))->~unique_ptr();
        ((this + 9))->~Array();
        ((this + 5))->~AutoSingleton();
    }

    // 0x100590620
    ConfigTypeLoadAllContainer<BASType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList<BASType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<BASType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                           js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8268;
        new ((this + 9)) Array<shared_ptr<BASType>>();
        ((this + 12))->unique_ptr<true, void>();
    }

    // 0x1005906e0
    uint8_t* ConfigTypeLoadAllContainer<BASType>::LoadList() {
        int* piVar1;
        int iVar2;
        ConfigTypeLoadAllContainer<BASType> _vtbl* pCVar3;
        ConfigTypeLoadAllContainer<BASType> _vtbl* pCVar4;
        bool bVar5;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<BASType>* pCVar6;
        unsigned int arg1;
        unsigned int arg2;
        uint8_t* puVar8;
        uint64_t uVar9;
        long* plVar10;
        shared_ptr<BASType>* this_01;
        CacheReset__3* pCVar11;
        uint8_t* in_RCX;
        unsigned int uVar12;
        ReturnValue local_90;
        uint64_t local_80;
        unique_ptr<DownloadWaitHandler>* local_78;
        Array<shared_ptr<BASType>>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<BASType>* local_58;
        ConfigTypeLoadAllContainer<BASType> _vtbl* local_50;
        DownloadWaitHandler* local_48;
        uint8_t* local_40;
        unsigned int local_38;
        unsigned int local_34;

        if (*(int*)&this[6]._vptr != 2) {
            pCVar3 = this[2]._vptr;
            local_58 = this + 1;
            local_38 = this[1]._vptr->GetStreamCountLastMix();
            *(unsigned int*)&this[8]._vptr = local_38;
            if (*(int*)&this[6]._vptr == 0) {
                ((this + 9))->set_max_size((unsigned long)local_38, 0);
                local_68[0] = nullptr;
                local_40 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, local_68, this[3]._vptr);
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pCVar3;
                local_90 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_38);
                (*((this + 12))) = local_90;
                local_48 = (DownloadWaitHandler*)*(*((this + 12)));
                pCVar6 = local_58;
                if (local_38 != 0) {
                    uVar12 = 0;
                    do {
                        this_00 = local_68[0];
                        arg1 = pCVar6->_vptr->GetClientGroupID(uVar12);
                        arg2 = pCVar6->_vptr->GetClientFileID(uVar12);
                        if (!(this_00->DoesFileExist(arg1, arg2))) {
                            piVar1 = (int*)((long)&this[7]._vptr + 4);
                            *piVar1 = *piVar1 + 1;
                        } else {
                            local_48->SetExists(uVar12);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_38);
                }
                *(uint32_t*)&this[6]._vptr = 1;
                iVar2 = *(int*)&this[6]._vptr;
                pCVar3 = local_50;
            } else {
                iVar2 = *(int*)&this[6]._vptr;
                local_40 = in_RCX;
            }
            if (iVar2 == 1) {
                local_80 = 0;
                pCVar4 = this[3]._vptr;
                puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, &local_80, pCVar4);
                if (puVar8 != DataStatus::READY) {
                    return puVar8;
                }
                local_78 = (unique_ptr<DownloadWaitHandler>*)(this + 12);
                local_48 = (DownloadWaitHandler*)**local_78;
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = (Array<shared_ptr<BASType>>*)(this + 9);
                    local_50 = pCVar4;
                    do {
                        if (*(int*)((long)&this[6]._vptr + 4) == 0)
                            break;
                        if (local_48->CanCheck(local_34)) {
                            new (local_68) shared_ptr();
                            uVar12 = local_34;
                            pCVar3 = local_58->_vptr;
                            uVar9 = local_50->GetPrefetchPriority();
                            puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 64))(pCVar3, local_68, local_50,
                                                                                        uVar12, uVar9, 1);
                            if (puVar8 == DataStatus::READY) {
                                MakeSharedPool<BASType, 96>::MakeShared<BaseTemplateConfigTypeList<BASType>*&,
                                                                        unsigned int&>(
                                    (BaseTemplateConfigTypeList<BASType>**)&local_90, (unsigned int*)local_58);
                                plVar10 = (long*)local_90.operator->();
                                **local_68;
                                puVar8 = (uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10);
                                if (puVar8 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar8;
                                } else {
                                    plVar10 = (long*)local_90.operator->();
                                    (**(void (**)(...))(*plVar10 + 24))(plVar10);
                                    puVar8 = (uint8_t*)(**(void (**)(...))(local_58->_vptr->_dtor + 72))();
                                    if (puVar8 == DataStatus::READY) {
                                        this_01 = (shared_ptr<BASType>*)(*local_70)[(unsigned long)local_34];
                                        *this_01 = local_90;
                                        piVar1 = (int*)((long)&this[7]._vptr + 4);
                                        *piVar1 = *piVar1 + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                if (bVar5)
                                    goto LAB_10059089b;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_10059089b:
                                bVar5 = true;
                            }
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_100590a0a;
                            }
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_100590a0a:
                if (!bVar5) {
                    return local_40;
                }
                if (*(unsigned int*)((long)&this[7]._vptr + 4) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(void (**)(...))((this[1]._vptr)->_dtor + 80))();
                *(uint32_t*)&this[6]._vptr = 2;
                local_78->reset(nullptr);
                pCVar11 = (CacheReset__3*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->CacheReset__3 = pCVar11;
            }
        }
        return DataStatus::READY;
    }

    // 0x100590ab0
    uint8_t* ConfigTypeLoadAllContainer<BASType>::List(int arg1, const DataStatus** arg2) {
        int* piVar1;

        int iVar2 = *(int*)&this[6]._vptr;
        if (iVar2 == 2) {
            piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
            *piVar1 = *piVar1 + 1;
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar2 != 1) {
                return PTR_NullConfigType_100ee6538;
            }
        }
        return (uint8_t*)(*((this + 9)))[(long)arg1];
    }

    // 0x100590b60
    ConfigTypeLoadAllContainer<BASType>::~ConfigTypeLoadAllContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8268;
        ((this + 12))->~unique_ptr();
        ((this + 9))->~Array();
        ((this + 5))->~AutoSingleton();
    }

    // 0x100595cc0
    ConfigTypeLoadAllContainer<FloorUnderlayType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList<FloorUnderlayType>& baseTemplateConfigTypeList,
        Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
        const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<FloorUnderlayType>(baseTemplateConfigTypeList, js5ResourceProvider,
                                                     js5ArchiveSettings, js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8260;
        new ((this + 9)) Array<shared_ptr<FloorUnderlayType>>();
        ((this + 12))->unique_ptr<true, void>();
    }

    // 0x100595d80
    uint8_t* ConfigTypeLoadAllContainer<FloorUnderlayType>::LoadList() {
        int* piVar1;
        int iVar2;
        ConfigTypeLoadAllContainer<FloorUnderlayType> _vtbl* pCVar3;
        ConfigTypeLoadAllContainer<FloorUnderlayType> _vtbl* pCVar4;
        bool bVar5;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<FloorUnderlayType>* pCVar6;
        unsigned int arg1;
        unsigned int arg2;
        uint8_t* puVar8;
        uint64_t uVar9;
        long* plVar10;
        shared_ptr<FloorUnderlayType>* this_01;
        CacheReset__3* pCVar11;
        uint8_t* in_RCX;
        unsigned int uVar12;
        ReturnValue local_90;
        uint64_t local_80;
        unique_ptr<DownloadWaitHandler>* local_78;
        Array<shared_ptr<FloorUnderlayType>>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<FloorUnderlayType>* local_58;
        ConfigTypeLoadAllContainer<FloorUnderlayType> _vtbl* local_50;
        DownloadWaitHandler* local_48;
        uint8_t* local_40;
        unsigned int local_38;
        unsigned int local_34;

        if (*(int*)&this[6]._vptr != 2) {
            pCVar3 = this[2]._vptr;
            local_58 = this + 1;
            local_38 = this[1]._vptr->GetStreamCountLastMix();
            *(unsigned int*)&this[8]._vptr = local_38;
            if (*(int*)&this[6]._vptr == 0) {
                ((this + 9))->set_max_size((unsigned long)local_38, 0);
                local_68[0] = nullptr;
                local_40 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, local_68, this[3]._vptr);
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pCVar3;
                local_90 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_38);
                (*((this + 12))) = local_90;
                local_48 = (DownloadWaitHandler*)*(*((this + 12)));
                pCVar6 = local_58;
                if (local_38 != 0) {
                    uVar12 = 0;
                    do {
                        this_00 = local_68[0];
                        arg1 = pCVar6->_vptr->GetClientGroupID(uVar12);
                        arg2 = pCVar6->_vptr->GetClientFileID(uVar12);
                        if (!(this_00->DoesFileExist(arg1, arg2))) {
                            piVar1 = (int*)((long)&this[7]._vptr + 4);
                            *piVar1 = *piVar1 + 1;
                        } else {
                            local_48->SetExists(uVar12);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_38);
                }
                *(uint32_t*)&this[6]._vptr = 1;
                iVar2 = *(int*)&this[6]._vptr;
                pCVar3 = local_50;
            } else {
                iVar2 = *(int*)&this[6]._vptr;
                local_40 = in_RCX;
            }
            if (iVar2 == 1) {
                local_80 = 0;
                pCVar4 = this[3]._vptr;
                puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, &local_80, pCVar4);
                if (puVar8 != DataStatus::READY) {
                    return puVar8;
                }
                local_78 = (unique_ptr<DownloadWaitHandler>*)(this + 12);
                local_48 = (DownloadWaitHandler*)**local_78;
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = (Array<shared_ptr<FloorUnderlayType>>*)(this + 9);
                    local_50 = pCVar4;
                    do {
                        if (*(int*)((long)&this[6]._vptr + 4) == 0)
                            break;
                        if (local_48->CanCheck(local_34)) {
                            new (local_68) shared_ptr();
                            uVar12 = local_34;
                            pCVar3 = local_58->_vptr;
                            uVar9 = local_50->GetPrefetchPriority();
                            puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 64))(pCVar3, local_68, local_50,
                                                                                        uVar12, uVar9, 1);
                            if (puVar8 == DataStatus::READY) {
                                MakeSharedPool<FloorUnderlayType, 128>::MakeShared<
                                    BaseTemplateConfigTypeList<FloorUnderlayType>*&, unsigned int&>(
                                    (BaseTemplateConfigTypeList<FloorUnderlayType>**)&local_90,
                                    (unsigned int*)local_58);
                                plVar10 = (long*)local_90.operator->();
                                **local_68;
                                puVar8 = (uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10);
                                if (puVar8 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar8;
                                } else {
                                    plVar10 = (long*)local_90.operator->();
                                    (**(void (**)(...))(*plVar10 + 24))(plVar10);
                                    puVar8 = (uint8_t*)(**(void (**)(...))(local_58->_vptr->_dtor + 72))();
                                    if (puVar8 == DataStatus::READY) {
                                        this_01 = (shared_ptr<FloorUnderlayType>*)(*local_70)[(unsigned long)local_34];
                                        *this_01 = local_90;
                                        piVar1 = (int*)((long)&this[7]._vptr + 4);
                                        *piVar1 = *piVar1 + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                if (bVar5)
                                    goto LAB_100595f3b;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_100595f3b:
                                bVar5 = true;
                            }
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_1005960aa;
                            }
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_1005960aa:
                if (!bVar5) {
                    return local_40;
                }
                if (*(unsigned int*)((long)&this[7]._vptr + 4) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(void (**)(...))((this[1]._vptr)->_dtor + 80))();
                *(uint32_t*)&this[6]._vptr = 2;
                local_78->reset(nullptr);
                pCVar11 = (CacheReset__3*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->CacheReset__3 = pCVar11;
            }
        }
        return DataStatus::READY;
    }

    // 0x100596150
    uint8_t* ConfigTypeLoadAllContainer<FloorUnderlayType>::List(int arg1, const DataStatus** arg2) {
        int* piVar1;

        int iVar2 = *(int*)&this[6]._vptr;
        if (iVar2 == 2) {
            piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
            *piVar1 = *piVar1 + 1;
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar2 != 1) {
                return PTR_NullConfigType_100ee6530;
            }
        }
        return (uint8_t*)(*((this + 9)))[(long)arg1];
    }

    // 0x100596200
    ConfigTypeLoadAllContainer<FloorUnderlayType>::~ConfigTypeLoadAllContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8260;
        ((this + 12))->~unique_ptr();
        ((this + 9))->~Array();
        ((this + 5))->~AutoSingleton();
    }

    // 0x10059b370
    ConfigTypeLoadAllContainer<FloorOverlayType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList<FloorOverlayType>& baseTemplateConfigTypeList,
        Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
        const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<FloorOverlayType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                                    js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8258;
        new ((this + 9)) Array<shared_ptr<FloorOverlayType>>();
        ((this + 12))->unique_ptr<true, void>();
    }

    // 0x10059b430
    uint8_t* ConfigTypeLoadAllContainer<FloorOverlayType>::LoadList() {
        int* piVar1;
        int iVar2;
        ConfigTypeLoadAllContainer<FloorOverlayType> _vtbl* pCVar3;
        ConfigTypeLoadAllContainer<FloorOverlayType> _vtbl* pCVar4;
        bool bVar5;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<FloorOverlayType>* pCVar6;
        unsigned int arg1;
        unsigned int arg2;
        uint8_t* puVar8;
        uint64_t uVar9;
        long* plVar10;
        shared_ptr<FloorOverlayType>* this_01;
        CacheReset__3* pCVar11;
        uint8_t* in_RCX;
        unsigned int uVar12;
        ReturnValue local_90;
        uint64_t local_80;
        unique_ptr<DownloadWaitHandler>* local_78;
        Array<shared_ptr<FloorOverlayType>>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<FloorOverlayType>* local_58;
        ConfigTypeLoadAllContainer<FloorOverlayType> _vtbl* local_50;
        DownloadWaitHandler* local_48;
        uint8_t* local_40;
        unsigned int local_38;
        unsigned int local_34;

        if (*(int*)&this[6]._vptr != 2) {
            pCVar3 = this[2]._vptr;
            local_58 = this + 1;
            local_38 = this[1]._vptr->GetStreamCountLastMix();
            *(unsigned int*)&this[8]._vptr = local_38;
            if (*(int*)&this[6]._vptr == 0) {
                ((this + 9))->set_max_size((unsigned long)local_38, 0);
                local_68[0] = nullptr;
                local_40 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, local_68, this[3]._vptr);
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pCVar3;
                local_90 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_38);
                (*((this + 12))) = local_90;
                local_48 = (DownloadWaitHandler*)*(*((this + 12)));
                pCVar6 = local_58;
                if (local_38 != 0) {
                    uVar12 = 0;
                    do {
                        this_00 = local_68[0];
                        arg1 = pCVar6->_vptr->GetClientGroupID(uVar12);
                        arg2 = pCVar6->_vptr->GetClientFileID(uVar12);
                        if (!(this_00->DoesFileExist(arg1, arg2))) {
                            piVar1 = (int*)((long)&this[7]._vptr + 4);
                            *piVar1 = *piVar1 + 1;
                        } else {
                            local_48->SetExists(uVar12);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_38);
                }
                *(uint32_t*)&this[6]._vptr = 1;
                iVar2 = *(int*)&this[6]._vptr;
                pCVar3 = local_50;
            } else {
                iVar2 = *(int*)&this[6]._vptr;
                local_40 = in_RCX;
            }
            if (iVar2 == 1) {
                local_80 = 0;
                pCVar4 = this[3]._vptr;
                puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, &local_80, pCVar4);
                if (puVar8 != DataStatus::READY) {
                    return puVar8;
                }
                local_78 = (unique_ptr<DownloadWaitHandler>*)(this + 12);
                local_48 = (DownloadWaitHandler*)**local_78;
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = (Array<shared_ptr<FloorOverlayType>>*)(this + 9);
                    local_50 = pCVar4;
                    do {
                        if (*(int*)((long)&this[6]._vptr + 4) == 0)
                            break;
                        if (local_48->CanCheck(local_34)) {
                            new (local_68) shared_ptr();
                            uVar12 = local_34;
                            pCVar3 = local_58->_vptr;
                            uVar9 = local_50->GetPrefetchPriority();
                            puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 64))(pCVar3, local_68, local_50,
                                                                                        uVar12, uVar9, 1);
                            if (puVar8 == DataStatus::READY) {
                                MakeSharedPool<FloorOverlayType, 128>::MakeShared<
                                    BaseTemplateConfigTypeList<FloorOverlayType>*&, unsigned int&>(
                                    (BaseTemplateConfigTypeList<FloorOverlayType>**)&local_90, (unsigned int*)local_58);
                                plVar10 = (long*)local_90.operator->();
                                **local_68;
                                puVar8 = (uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10);
                                if (puVar8 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar8;
                                } else {
                                    plVar10 = (long*)local_90.operator->();
                                    (**(void (**)(...))(*plVar10 + 24))(plVar10);
                                    puVar8 = (uint8_t*)(**(void (**)(...))(local_58->_vptr->_dtor + 72))();
                                    if (puVar8 == DataStatus::READY) {
                                        this_01 = (shared_ptr<FloorOverlayType>*)(*local_70)[(unsigned long)local_34];
                                        *this_01 = local_90;
                                        piVar1 = (int*)((long)&this[7]._vptr + 4);
                                        *piVar1 = *piVar1 + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                if (bVar5)
                                    goto LAB_10059b5eb;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_10059b5eb:
                                bVar5 = true;
                            }
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_10059b75a;
                            }
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_10059b75a:
                if (!bVar5) {
                    return local_40;
                }
                if (*(unsigned int*)((long)&this[7]._vptr + 4) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(void (**)(...))((this[1]._vptr)->_dtor + 80))();
                *(uint32_t*)&this[6]._vptr = 2;
                local_78->reset(nullptr);
                pCVar11 = (CacheReset__3*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->CacheReset__3 = pCVar11;
            }
        }
        return DataStatus::READY;
    }

    // 0x10059b800
    uint8_t* ConfigTypeLoadAllContainer<FloorOverlayType>::List(int arg1, const DataStatus** arg2) {
        int* piVar1;

        int iVar2 = *(int*)&this[6]._vptr;
        if (iVar2 == 2) {
            piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
            *piVar1 = *piVar1 + 1;
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar2 != 1) {
                return PTR_NullConfigType_100ee6528;
            }
        }
        return (uint8_t*)(*((this + 9)))[(long)arg1];
    }

    // 0x10059b8b0
    ConfigTypeLoadAllContainer<FloorOverlayType>::~ConfigTypeLoadAllContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8258;
        ((this + 12))->~unique_ptr();
        ((this + 9))->~Array();
        ((this + 5))->~AutoSingleton();
    }

    // 0x10059ffe0
    ConfigTypeLoadAllContainer<HitmarkType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList<HitmarkType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<HitmarkType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                               js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8228;
        new ((this + 9)) Array<shared_ptr<HitmarkType>>();
        ((this + 12))->unique_ptr<true, void>();
    }

    // 0x1005a00a0
    uint8_t* ConfigTypeLoadAllContainer<HitmarkType>::LoadList() {
        int* piVar1;
        int iVar2;
        ConfigTypeLoadAllContainer<HitmarkType> _vtbl* pCVar3;
        ConfigTypeLoadAllContainer<HitmarkType> _vtbl* pCVar4;
        bool bVar5;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<HitmarkType>* pCVar6;
        unsigned int arg1;
        unsigned int arg2;
        uint8_t* puVar8;
        uint64_t uVar9;
        long* plVar10;
        shared_ptr<HitmarkType>* this_01;
        CacheReset__3* pCVar11;
        uint8_t* in_RCX;
        unsigned int uVar12;
        ReturnValue local_90;
        uint64_t local_80;
        unique_ptr<DownloadWaitHandler>* local_78;
        Array<shared_ptr<HitmarkType>>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<HitmarkType>* local_58;
        ConfigTypeLoadAllContainer<HitmarkType> _vtbl* local_50;
        DownloadWaitHandler* local_48;
        uint8_t* local_40;
        unsigned int local_38;
        unsigned int local_34;

        if (*(int*)&this[6]._vptr != 2) {
            pCVar3 = this[2]._vptr;
            local_58 = this + 1;
            local_38 = this[1]._vptr->GetStreamCountLastMix();
            *(unsigned int*)&this[8]._vptr = local_38;
            if (*(int*)&this[6]._vptr == 0) {
                ((this + 9))->set_max_size((unsigned long)local_38, 0);
                local_68[0] = nullptr;
                local_40 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, local_68, this[3]._vptr);
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pCVar3;
                local_90 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_38);
                (*((this + 12))) = local_90;
                local_48 = (DownloadWaitHandler*)*(*((this + 12)));
                pCVar6 = local_58;
                if (local_38 != 0) {
                    uVar12 = 0;
                    do {
                        this_00 = local_68[0];
                        arg1 = pCVar6->_vptr->GetClientGroupID(uVar12);
                        arg2 = pCVar6->_vptr->GetClientFileID(uVar12);
                        if (!(this_00->DoesFileExist(arg1, arg2))) {
                            piVar1 = (int*)((long)&this[7]._vptr + 4);
                            *piVar1 = *piVar1 + 1;
                        } else {
                            local_48->SetExists(uVar12);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_38);
                }
                *(uint32_t*)&this[6]._vptr = 1;
                iVar2 = *(int*)&this[6]._vptr;
                pCVar3 = local_50;
            } else {
                iVar2 = *(int*)&this[6]._vptr;
                local_40 = in_RCX;
            }
            if (iVar2 == 1) {
                local_80 = 0;
                pCVar4 = this[3]._vptr;
                puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, &local_80, pCVar4);
                if (puVar8 != DataStatus::READY) {
                    return puVar8;
                }
                local_78 = (unique_ptr<DownloadWaitHandler>*)(this + 12);
                local_48 = (DownloadWaitHandler*)**local_78;
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = (Array<shared_ptr<HitmarkType>>*)(this + 9);
                    local_50 = pCVar4;
                    do {
                        if (*(int*)((long)&this[6]._vptr + 4) == 0)
                            break;
                        if (local_48->CanCheck(local_34)) {
                            new (local_68) shared_ptr();
                            uVar12 = local_34;
                            pCVar3 = local_58->_vptr;
                            uVar9 = local_50->GetPrefetchPriority();
                            puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 64))(pCVar3, local_68, local_50,
                                                                                        uVar12, uVar9, 1);
                            if (puVar8 == DataStatus::READY) {
                                MakeSharedPool<HitmarkType, 32>::MakeShared<BaseTemplateConfigTypeList<HitmarkType>*&,
                                                                            unsigned int&>(
                                    (BaseTemplateConfigTypeList<HitmarkType>**)&local_90, (unsigned int*)local_58);
                                plVar10 = (long*)local_90.operator->();
                                **local_68;
                                puVar8 = (uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10);
                                if (puVar8 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar8;
                                } else {
                                    plVar10 = (long*)local_90.operator->();
                                    (**(void (**)(...))(*plVar10 + 24))(plVar10);
                                    puVar8 = (uint8_t*)(**(void (**)(...))(local_58->_vptr->_dtor + 72))();
                                    if (puVar8 == DataStatus::READY) {
                                        this_01 = (shared_ptr<HitmarkType>*)(*local_70)[(unsigned long)local_34];
                                        *this_01 = local_90;
                                        piVar1 = (int*)((long)&this[7]._vptr + 4);
                                        *piVar1 = *piVar1 + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                if (bVar5)
                                    goto LAB_1005a025b;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005a025b:
                                bVar5 = true;
                            }
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_1005a03ca;
                            }
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_1005a03ca:
                if (!bVar5) {
                    return local_40;
                }
                if (*(unsigned int*)((long)&this[7]._vptr + 4) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(void (**)(...))((this[1]._vptr)->_dtor + 80))();
                *(uint32_t*)&this[6]._vptr = 2;
                local_78->reset(nullptr);
                pCVar11 = (CacheReset__3*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->CacheReset__3 = pCVar11;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005a0470
    uint8_t* ConfigTypeLoadAllContainer<HitmarkType>::List(int arg1, const DataStatus** arg2) {
        int* piVar1;

        int iVar2 = *(int*)&this[6]._vptr;
        if (iVar2 == 2) {
            piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
            *piVar1 = *piVar1 + 1;
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar2 != 1) {
                return PTR_NullConfigType_100ee64f8;
            }
        }
        return (uint8_t*)(*((this + 9)))[(long)arg1];
    }

    // 0x1005a0520
    ConfigTypeLoadAllContainer<HitmarkType>::~ConfigTypeLoadAllContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8228;
        ((this + 12))->~unique_ptr();
        ((this + 9))->~Array();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005a5a70
    ConfigTypeLoadAllContainer<HeadbarType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList<HeadbarType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<HeadbarType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                               js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8220;
        new ((this + 9)) Array<shared_ptr<HeadbarType>>();
        ((this + 12))->unique_ptr<true, void>();
    }

    // 0x1005a5b30
    uint8_t* ConfigTypeLoadAllContainer<HeadbarType>::LoadList() {
        int* piVar1;
        int iVar2;
        ConfigTypeLoadAllContainer<HeadbarType> _vtbl* pCVar3;
        ConfigTypeLoadAllContainer<HeadbarType> _vtbl* pCVar4;
        bool bVar5;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<HeadbarType>* pCVar6;
        unsigned int arg1;
        unsigned int arg2;
        uint8_t* puVar8;
        uint64_t uVar9;
        long* plVar10;
        shared_ptr<HeadbarType>* this_01;
        CacheReset__3* pCVar11;
        uint8_t* in_RCX;
        unsigned int uVar12;
        ReturnValue local_90;
        uint64_t local_80;
        unique_ptr<DownloadWaitHandler>* local_78;
        Array<shared_ptr<HeadbarType>>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<HeadbarType>* local_58;
        ConfigTypeLoadAllContainer<HeadbarType> _vtbl* local_50;
        DownloadWaitHandler* local_48;
        uint8_t* local_40;
        unsigned int local_38;
        unsigned int local_34;

        if (*(int*)&this[6]._vptr != 2) {
            pCVar3 = this[2]._vptr;
            local_58 = this + 1;
            local_38 = this[1]._vptr->GetStreamCountLastMix();
            *(unsigned int*)&this[8]._vptr = local_38;
            if (*(int*)&this[6]._vptr == 0) {
                ((this + 9))->set_max_size((unsigned long)local_38, 0);
                local_68[0] = nullptr;
                local_40 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, local_68, this[3]._vptr);
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pCVar3;
                local_90 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_38);
                (*((this + 12))) = local_90;
                local_48 = (DownloadWaitHandler*)*(*((this + 12)));
                pCVar6 = local_58;
                if (local_38 != 0) {
                    uVar12 = 0;
                    do {
                        this_00 = local_68[0];
                        arg1 = pCVar6->_vptr->GetClientGroupID(uVar12);
                        arg2 = pCVar6->_vptr->GetClientFileID(uVar12);
                        if (!(this_00->DoesFileExist(arg1, arg2))) {
                            piVar1 = (int*)((long)&this[7]._vptr + 4);
                            *piVar1 = *piVar1 + 1;
                        } else {
                            local_48->SetExists(uVar12);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_38);
                }
                *(uint32_t*)&this[6]._vptr = 1;
                iVar2 = *(int*)&this[6]._vptr;
                pCVar3 = local_50;
            } else {
                iVar2 = *(int*)&this[6]._vptr;
                local_40 = in_RCX;
            }
            if (iVar2 == 1) {
                local_80 = 0;
                pCVar4 = this[3]._vptr;
                puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, &local_80, pCVar4);
                if (puVar8 != DataStatus::READY) {
                    return puVar8;
                }
                local_78 = (unique_ptr<DownloadWaitHandler>*)(this + 12);
                local_48 = (DownloadWaitHandler*)**local_78;
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = (Array<shared_ptr<HeadbarType>>*)(this + 9);
                    local_50 = pCVar4;
                    do {
                        if (*(int*)((long)&this[6]._vptr + 4) == 0)
                            break;
                        if (local_48->CanCheck(local_34)) {
                            new (local_68) shared_ptr();
                            uVar12 = local_34;
                            pCVar3 = local_58->_vptr;
                            uVar9 = local_50->GetPrefetchPriority();
                            puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 64))(pCVar3, local_68, local_50,
                                                                                        uVar12, uVar9, 1);
                            if (puVar8 == DataStatus::READY) {
                                MakeSharedPool<HeadbarType, 32>::MakeShared<BaseTemplateConfigTypeList<HeadbarType>*&,
                                                                            unsigned int&>(
                                    (BaseTemplateConfigTypeList<HeadbarType>**)&local_90, (unsigned int*)local_58);
                                plVar10 = (long*)local_90.operator->();
                                **local_68;
                                puVar8 = (uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10);
                                if (puVar8 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar8;
                                } else {
                                    plVar10 = (long*)local_90.operator->();
                                    (**(void (**)(...))(*plVar10 + 24))(plVar10);
                                    puVar8 = (uint8_t*)(**(void (**)(...))(local_58->_vptr->_dtor + 72))();
                                    if (puVar8 == DataStatus::READY) {
                                        this_01 = (shared_ptr<HeadbarType>*)(*local_70)[(unsigned long)local_34];
                                        *this_01 = local_90;
                                        piVar1 = (int*)((long)&this[7]._vptr + 4);
                                        *piVar1 = *piVar1 + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                if (bVar5)
                                    goto LAB_1005a5ceb;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005a5ceb:
                                bVar5 = true;
                            }
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_1005a5e5a;
                            }
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_1005a5e5a:
                if (!bVar5) {
                    return local_40;
                }
                if (*(unsigned int*)((long)&this[7]._vptr + 4) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(void (**)(...))((this[1]._vptr)->_dtor + 80))();
                *(uint32_t*)&this[6]._vptr = 2;
                local_78->reset(nullptr);
                pCVar11 = (CacheReset__3*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->CacheReset__3 = pCVar11;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005a5f00
    uint8_t* ConfigTypeLoadAllContainer<HeadbarType>::List(int arg1, const DataStatus** arg2) {
        int* piVar1;

        int iVar2 = *(int*)&this[6]._vptr;
        if (iVar2 == 2) {
            piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
            *piVar1 = *piVar1 + 1;
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar2 != 1) {
                return PTR_NullConfigType_100ee64f0;
            }
        }
        return (uint8_t*)(*((this + 9)))[(long)arg1];
    }

    // 0x1005a5fb0
    ConfigTypeLoadAllContainer<HeadbarType>::~ConfigTypeLoadAllContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8220;
        ((this + 12))->~unique_ptr();
        ((this + 9))->~Array();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005ab350
    ConfigTypeLoadAllContainer<IDKType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList<IDKType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<IDKType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                           js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8270;
        new ((this + 9)) Array<shared_ptr<IDKType>>();
        ((this + 12))->unique_ptr<true, void>();
    }

    // 0x1005ab410
    uint8_t* ConfigTypeLoadAllContainer<IDKType>::LoadList() {
        int* piVar1;
        int iVar2;
        ConfigTypeLoadAllContainer<IDKType> _vtbl* pCVar3;
        ConfigTypeLoadAllContainer<IDKType> _vtbl* pCVar4;
        bool bVar5;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<IDKType>* pCVar6;
        unsigned int arg1;
        unsigned int arg2;
        uint8_t* puVar8;
        uint64_t uVar9;
        long* plVar10;
        shared_ptr<IDKType>* this_01;
        CacheReset__3* pCVar11;
        uint8_t* in_RCX;
        unsigned int uVar12;
        ReturnValue local_90;
        uint64_t local_80;
        unique_ptr<DownloadWaitHandler>* local_78;
        Array<shared_ptr<IDKType>>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<IDKType>* local_58;
        ConfigTypeLoadAllContainer<IDKType> _vtbl* local_50;
        DownloadWaitHandler* local_48;
        uint8_t* local_40;
        unsigned int local_38;
        unsigned int local_34;

        if (*(int*)&this[6]._vptr != 2) {
            pCVar3 = this[2]._vptr;
            local_58 = this + 1;
            local_38 = this[1]._vptr->GetStreamCountLastMix();
            *(unsigned int*)&this[8]._vptr = local_38;
            if (*(int*)&this[6]._vptr == 0) {
                ((this + 9))->set_max_size((unsigned long)local_38, 0);
                local_68[0] = nullptr;
                local_40 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, local_68, this[3]._vptr);
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pCVar3;
                local_90 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_38);
                (*((this + 12))) = local_90;
                local_48 = (DownloadWaitHandler*)*(*((this + 12)));
                pCVar6 = local_58;
                if (local_38 != 0) {
                    uVar12 = 0;
                    do {
                        this_00 = local_68[0];
                        arg1 = pCVar6->_vptr->GetClientGroupID(uVar12);
                        arg2 = pCVar6->_vptr->GetClientFileID(uVar12);
                        if (!(this_00->DoesFileExist(arg1, arg2))) {
                            piVar1 = (int*)((long)&this[7]._vptr + 4);
                            *piVar1 = *piVar1 + 1;
                        } else {
                            local_48->SetExists(uVar12);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_38);
                }
                *(uint32_t*)&this[6]._vptr = 1;
                iVar2 = *(int*)&this[6]._vptr;
                pCVar3 = local_50;
            } else {
                iVar2 = *(int*)&this[6]._vptr;
                local_40 = in_RCX;
            }
            if (iVar2 == 1) {
                local_80 = 0;
                pCVar4 = this[3]._vptr;
                puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, &local_80, pCVar4);
                if (puVar8 != DataStatus::READY) {
                    return puVar8;
                }
                local_78 = (unique_ptr<DownloadWaitHandler>*)(this + 12);
                local_48 = (DownloadWaitHandler*)**local_78;
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = (Array<shared_ptr<IDKType>>*)(this + 9);
                    local_50 = pCVar4;
                    do {
                        if (*(int*)((long)&this[6]._vptr + 4) == 0)
                            break;
                        if (local_48->CanCheck(local_34)) {
                            new (local_68) shared_ptr();
                            uVar12 = local_34;
                            pCVar3 = local_58->_vptr;
                            uVar9 = local_50->GetPrefetchPriority();
                            puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 64))(pCVar3, local_68, local_50,
                                                                                        uVar12, uVar9, 1);
                            if (puVar8 == DataStatus::READY) {
                                MakeSharedPool<IDKType, 32>::MakeShared<BaseTemplateConfigTypeList<IDKType>*&,
                                                                        unsigned int&>(
                                    (BaseTemplateConfigTypeList<IDKType>**)&local_90, (unsigned int*)local_58);
                                plVar10 = (long*)local_90.operator->();
                                **local_68;
                                puVar8 = (uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10);
                                if (puVar8 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar8;
                                } else {
                                    plVar10 = (long*)local_90.operator->();
                                    (**(void (**)(...))(*plVar10 + 24))(plVar10);
                                    puVar8 = (uint8_t*)(**(void (**)(...))(local_58->_vptr->_dtor + 72))();
                                    if (puVar8 == DataStatus::READY) {
                                        this_01 = (shared_ptr<IDKType>*)(*local_70)[(unsigned long)local_34];
                                        *this_01 = local_90;
                                        piVar1 = (int*)((long)&this[7]._vptr + 4);
                                        *piVar1 = *piVar1 + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                if (bVar5)
                                    goto LAB_1005ab5cb;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005ab5cb:
                                bVar5 = true;
                            }
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_1005ab73a;
                            }
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_1005ab73a:
                if (!bVar5) {
                    return local_40;
                }
                if (*(unsigned int*)((long)&this[7]._vptr + 4) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(void (**)(...))((this[1]._vptr)->_dtor + 80))();
                *(uint32_t*)&this[6]._vptr = 2;
                local_78->reset(nullptr);
                pCVar11 = (CacheReset__3*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->CacheReset__3 = pCVar11;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005ab7e0
    uint8_t* ConfigTypeLoadAllContainer<IDKType>::List(int arg1, const DataStatus** arg2) {
        int* piVar1;

        int iVar2 = *(int*)&this[6]._vptr;
        if (iVar2 == 2) {
            piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
            *piVar1 = *piVar1 + 1;
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar2 != 1) {
                return PTR_NullConfigType_100ee6540;
            }
        }
        return (uint8_t*)(*((this + 9)))[(long)arg1];
    }

    // 0x1005ab890
    ConfigTypeLoadAllContainer<IDKType>::~ConfigTypeLoadAllContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8270;
        ((this + 12))->~unique_ptr();
        ((this + 9))->~Array();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005b15b0
    ConfigTypeLoadAllContainer<MapElementType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList<MapElementType>& baseTemplateConfigTypeList,
        Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
        const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<MapElementType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                                  js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8248;
        new ((this + 9)) Array<shared_ptr<MapElementType>>();
        ((this + 12))->unique_ptr<true, void>();
    }

    // 0x1005b1670
    uint8_t* ConfigTypeLoadAllContainer<MapElementType>::LoadList() {
        int* piVar1;
        int iVar2;
        ConfigTypeLoadAllContainer<MapElementType> _vtbl* pCVar3;
        ConfigTypeLoadAllContainer<MapElementType> _vtbl* pCVar4;
        bool bVar5;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<MapElementType>* pCVar6;
        unsigned int arg1;
        unsigned int arg2;
        uint8_t* puVar8;
        uint64_t uVar9;
        long* plVar10;
        shared_ptr<MapElementType>* this_01;
        CacheReset__3* pCVar11;
        uint8_t* in_RCX;
        unsigned int uVar12;
        ReturnValue local_90;
        uint64_t local_80;
        unique_ptr<DownloadWaitHandler>* local_78;
        Array<shared_ptr<MapElementType>>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<MapElementType>* local_58;
        ConfigTypeLoadAllContainer<MapElementType> _vtbl* local_50;
        DownloadWaitHandler* local_48;
        uint8_t* local_40;
        unsigned int local_38;
        unsigned int local_34;

        if (*(int*)&this[6]._vptr != 2) {
            pCVar3 = this[2]._vptr;
            local_58 = this + 1;
            local_38 = this[1]._vptr->GetStreamCountLastMix();
            *(unsigned int*)&this[8]._vptr = local_38;
            if (*(int*)&this[6]._vptr == 0) {
                ((this + 9))->set_max_size((unsigned long)local_38, 0);
                local_68[0] = nullptr;
                local_40 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, local_68, this[3]._vptr);
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pCVar3;
                local_90 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_38);
                (*((this + 12))) = local_90;
                local_48 = (DownloadWaitHandler*)*(*((this + 12)));
                pCVar6 = local_58;
                if (local_38 != 0) {
                    uVar12 = 0;
                    do {
                        this_00 = local_68[0];
                        arg1 = pCVar6->_vptr->GetClientGroupID(uVar12);
                        arg2 = pCVar6->_vptr->GetClientFileID(uVar12);
                        if (!(this_00->DoesFileExist(arg1, arg2))) {
                            piVar1 = (int*)((long)&this[7]._vptr + 4);
                            *piVar1 = *piVar1 + 1;
                        } else {
                            local_48->SetExists(uVar12);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_38);
                }
                *(uint32_t*)&this[6]._vptr = 1;
                iVar2 = *(int*)&this[6]._vptr;
                pCVar3 = local_50;
            } else {
                iVar2 = *(int*)&this[6]._vptr;
                local_40 = in_RCX;
            }
            if (iVar2 == 1) {
                local_80 = 0;
                pCVar4 = this[3]._vptr;
                puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, &local_80, pCVar4);
                if (puVar8 != DataStatus::READY) {
                    return puVar8;
                }
                local_78 = (unique_ptr<DownloadWaitHandler>*)(this + 12);
                local_48 = (DownloadWaitHandler*)**local_78;
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = (Array<shared_ptr<MapElementType>>*)(this + 9);
                    local_50 = pCVar4;
                    do {
                        if (*(int*)((long)&this[6]._vptr + 4) == 0)
                            break;
                        if (local_48->CanCheck(local_34)) {
                            new (local_68) shared_ptr();
                            uVar12 = local_34;
                            pCVar3 = local_58->_vptr;
                            uVar9 = local_50->GetPrefetchPriority();
                            puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 64))(pCVar3, local_68, local_50,
                                                                                        uVar12, uVar9, 1);
                            if (puVar8 == DataStatus::READY) {
                                MakeSharedPool<MapElementType, 512>::MakeShared<
                                    BaseTemplateConfigTypeList<MapElementType>*&, unsigned int&>(
                                    (BaseTemplateConfigTypeList<MapElementType>**)&local_90, (unsigned int*)local_58);
                                plVar10 = (long*)local_90.operator->();
                                **local_68;
                                puVar8 = (uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10);
                                if (puVar8 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar8;
                                } else {
                                    plVar10 = (long*)local_90.operator->();
                                    (**(void (**)(...))(*plVar10 + 24))(plVar10);
                                    puVar8 = (uint8_t*)(**(void (**)(...))(local_58->_vptr->_dtor + 72))();
                                    if (puVar8 == DataStatus::READY) {
                                        this_01 = (shared_ptr<MapElementType>*)(*local_70)[(unsigned long)local_34];
                                        *this_01 = local_90;
                                        piVar1 = (int*)((long)&this[7]._vptr + 4);
                                        *piVar1 = *piVar1 + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                if (bVar5)
                                    goto LAB_1005b182b;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005b182b:
                                bVar5 = true;
                            }
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_1005b199a;
                            }
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_1005b199a:
                if (!bVar5) {
                    return local_40;
                }
                if (*(unsigned int*)((long)&this[7]._vptr + 4) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(void (**)(...))((this[1]._vptr)->_dtor + 80))();
                *(uint32_t*)&this[6]._vptr = 2;
                local_78->reset(nullptr);
                pCVar11 = (CacheReset__3*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->CacheReset__3 = pCVar11;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005b1a40
    uint8_t* ConfigTypeLoadAllContainer<MapElementType>::List(int arg1, const DataStatus** arg2) {
        int* piVar1;

        int iVar2 = *(int*)&this[6]._vptr;
        if (iVar2 == 2) {
            piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
            *piVar1 = *piVar1 + 1;
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar2 != 1) {
                return PTR_NullConfigType_100ee6518;
            }
        }
        return (uint8_t*)(*((this + 9)))[(long)arg1];
    }

    // 0x1005b1af0
    ConfigTypeLoadAllContainer<MapElementType>::~ConfigTypeLoadAllContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8248;
        ((this + 12))->~unique_ptr();
        ((this + 9))->~Array();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005b7300
    ConfigTypeLoadAllContainer<MSIType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList<MSIType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<MSIType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                           js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8288;
        new ((this + 9)) Array<shared_ptr<MSIType>>();
        ((this + 12))->unique_ptr<true, void>();
    }

    // 0x1005b73c0
    uint8_t* ConfigTypeLoadAllContainer<MSIType>::LoadList() {
        int* piVar1;
        int iVar2;
        ConfigTypeLoadAllContainer<MSIType> _vtbl* pCVar3;
        ConfigTypeLoadAllContainer<MSIType> _vtbl* pCVar4;
        bool bVar5;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<MSIType>* pCVar6;
        unsigned int arg1;
        unsigned int arg2;
        uint8_t* puVar8;
        uint64_t uVar9;
        long* plVar10;
        shared_ptr<MSIType>* this_01;
        CacheReset__3* pCVar11;
        uint8_t* in_RCX;
        unsigned int uVar12;
        ReturnValue local_90;
        uint64_t local_80;
        unique_ptr<DownloadWaitHandler>* local_78;
        Array<shared_ptr<MSIType>>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<MSIType>* local_58;
        ConfigTypeLoadAllContainer<MSIType> _vtbl* local_50;
        DownloadWaitHandler* local_48;
        uint8_t* local_40;
        unsigned int local_38;
        unsigned int local_34;

        if (*(int*)&this[6]._vptr != 2) {
            pCVar3 = this[2]._vptr;
            local_58 = this + 1;
            local_38 = this[1]._vptr->GetStreamCountLastMix();
            *(unsigned int*)&this[8]._vptr = local_38;
            if (*(int*)&this[6]._vptr == 0) {
                ((this + 9))->set_max_size((unsigned long)local_38, 0);
                local_68[0] = nullptr;
                local_40 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, local_68, this[3]._vptr);
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pCVar3;
                local_90 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_38);
                (*((this + 12))) = local_90;
                local_48 = (DownloadWaitHandler*)*(*((this + 12)));
                pCVar6 = local_58;
                if (local_38 != 0) {
                    uVar12 = 0;
                    do {
                        this_00 = local_68[0];
                        arg1 = pCVar6->_vptr->GetClientGroupID(uVar12);
                        arg2 = pCVar6->_vptr->GetClientFileID(uVar12);
                        if (!(this_00->DoesFileExist(arg1, arg2))) {
                            piVar1 = (int*)((long)&this[7]._vptr + 4);
                            *piVar1 = *piVar1 + 1;
                        } else {
                            local_48->SetExists(uVar12);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_38);
                }
                *(uint32_t*)&this[6]._vptr = 1;
                iVar2 = *(int*)&this[6]._vptr;
                pCVar3 = local_50;
            } else {
                iVar2 = *(int*)&this[6]._vptr;
                local_40 = in_RCX;
            }
            if (iVar2 == 1) {
                local_80 = 0;
                pCVar4 = this[3]._vptr;
                puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, &local_80, pCVar4);
                if (puVar8 != DataStatus::READY) {
                    return puVar8;
                }
                local_78 = (unique_ptr<DownloadWaitHandler>*)(this + 12);
                local_48 = (DownloadWaitHandler*)**local_78;
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = (Array<shared_ptr<MSIType>>*)(this + 9);
                    local_50 = pCVar4;
                    do {
                        if (*(int*)((long)&this[6]._vptr + 4) == 0)
                            break;
                        if (local_48->CanCheck(local_34)) {
                            new (local_68) shared_ptr();
                            uVar12 = local_34;
                            pCVar3 = local_58->_vptr;
                            uVar9 = local_50->GetPrefetchPriority();
                            puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 64))(pCVar3, local_68, local_50,
                                                                                        uVar12, uVar9, 1);
                            if (puVar8 == DataStatus::READY) {
                                MakeSharedPool<MSIType, 32>::MakeShared<BaseTemplateConfigTypeList<MSIType>*&,
                                                                        unsigned int&>(
                                    (BaseTemplateConfigTypeList<MSIType>**)&local_90, (unsigned int*)local_58);
                                plVar10 = (long*)local_90.operator->();
                                **local_68;
                                puVar8 = (uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10);
                                if (puVar8 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar8;
                                } else {
                                    plVar10 = (long*)local_90.operator->();
                                    (**(void (**)(...))(*plVar10 + 24))(plVar10);
                                    puVar8 = (uint8_t*)(**(void (**)(...))(local_58->_vptr->_dtor + 72))();
                                    if (puVar8 == DataStatus::READY) {
                                        this_01 = (shared_ptr<MSIType>*)(*local_70)[(unsigned long)local_34];
                                        *this_01 = local_90;
                                        piVar1 = (int*)((long)&this[7]._vptr + 4);
                                        *piVar1 = *piVar1 + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                if (bVar5)
                                    goto LAB_1005b757b;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005b757b:
                                bVar5 = true;
                            }
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_1005b76ea;
                            }
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_1005b76ea:
                if (!bVar5) {
                    return local_40;
                }
                if (*(unsigned int*)((long)&this[7]._vptr + 4) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(void (**)(...))((this[1]._vptr)->_dtor + 80))();
                *(uint32_t*)&this[6]._vptr = 2;
                local_78->reset(nullptr);
                pCVar11 = (CacheReset__3*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->CacheReset__3 = pCVar11;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005b7790
    uint8_t* ConfigTypeLoadAllContainer<MSIType>::List(int arg1, const DataStatus** arg2) {
        int* piVar1;

        int iVar2 = *(int*)&this[6]._vptr;
        if (iVar2 == 2) {
            piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
            *piVar1 = *piVar1 + 1;
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar2 != 1) {
                return PTR_NullConfigType_100ee6558;
            }
        }
        return (uint8_t*)(*((this + 9)))[(long)arg1];
    }

    // 0x1005b7840
    ConfigTypeLoadAllContainer<MSIType>::~ConfigTypeLoadAllContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8288;
        ((this + 12))->~unique_ptr();
        ((this + 9))->~Array();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005bd2b0
    ConfigTypeLoadAllContainer<QuestType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList<QuestType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<QuestType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                             js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee82d0;
        new ((this + 9)) Array<shared_ptr<QuestType>>();
        ((this + 12))->unique_ptr<true, void>();
    }

    // 0x1005bd370
    uint8_t* ConfigTypeLoadAllContainer<QuestType>::LoadList() {
        int* piVar1;
        int iVar2;
        ConfigTypeLoadAllContainer<QuestType> _vtbl* pCVar3;
        ConfigTypeLoadAllContainer<QuestType> _vtbl* pCVar4;
        bool bVar5;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<QuestType>* pCVar6;
        unsigned int arg1;
        unsigned int arg2;
        uint8_t* puVar8;
        uint64_t uVar9;
        long* plVar10;
        shared_ptr<QuestType>* this_01;
        CacheReset__3* pCVar11;
        uint8_t* in_RCX;
        unsigned int uVar12;
        ReturnValue local_90;
        uint64_t local_80;
        unique_ptr<DownloadWaitHandler>* local_78;
        Array<shared_ptr<QuestType>>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<QuestType>* local_58;
        ConfigTypeLoadAllContainer<QuestType> _vtbl* local_50;
        DownloadWaitHandler* local_48;
        uint8_t* local_40;
        unsigned int local_38;
        unsigned int local_34;

        if (*(int*)&this[6]._vptr != 2) {
            pCVar3 = this[2]._vptr;
            local_58 = this + 1;
            local_38 = this[1]._vptr->GetStreamCountLastMix();
            *(unsigned int*)&this[8]._vptr = local_38;
            if (*(int*)&this[6]._vptr == 0) {
                ((this + 9))->set_max_size((unsigned long)local_38, 0);
                local_68[0] = nullptr;
                local_40 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, local_68, this[3]._vptr);
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pCVar3;
                local_90 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_38);
                (*((this + 12))) = local_90;
                local_48 = (DownloadWaitHandler*)*(*((this + 12)));
                pCVar6 = local_58;
                if (local_38 != 0) {
                    uVar12 = 0;
                    do {
                        this_00 = local_68[0];
                        arg1 = pCVar6->_vptr->GetClientGroupID(uVar12);
                        arg2 = pCVar6->_vptr->GetClientFileID(uVar12);
                        if (!(this_00->DoesFileExist(arg1, arg2))) {
                            piVar1 = (int*)((long)&this[7]._vptr + 4);
                            *piVar1 = *piVar1 + 1;
                        } else {
                            local_48->SetExists(uVar12);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_38);
                }
                *(uint32_t*)&this[6]._vptr = 1;
                iVar2 = *(int*)&this[6]._vptr;
                pCVar3 = local_50;
            } else {
                iVar2 = *(int*)&this[6]._vptr;
                local_40 = in_RCX;
            }
            if (iVar2 == 1) {
                local_80 = 0;
                pCVar4 = this[3]._vptr;
                puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, &local_80, pCVar4);
                if (puVar8 != DataStatus::READY) {
                    return puVar8;
                }
                local_78 = (unique_ptr<DownloadWaitHandler>*)(this + 12);
                local_48 = (DownloadWaitHandler*)**local_78;
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = (Array<shared_ptr<QuestType>>*)(this + 9);
                    local_50 = pCVar4;
                    do {
                        if (*(int*)((long)&this[6]._vptr + 4) == 0)
                            break;
                        if (local_48->CanCheck(local_34)) {
                            new (local_68) shared_ptr();
                            uVar12 = local_34;
                            pCVar3 = local_58->_vptr;
                            uVar9 = local_50->GetPrefetchPriority();
                            puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 64))(pCVar3, local_68, local_50,
                                                                                        uVar12, uVar9, 1);
                            if (puVar8 == DataStatus::READY) {
                                MakeSharedPool<QuestType, 128>::MakeShared<BaseTemplateConfigTypeList<QuestType>*&,
                                                                           unsigned int&>(
                                    (BaseTemplateConfigTypeList<QuestType>**)&local_90, (unsigned int*)local_58);
                                plVar10 = (long*)local_90.operator->();
                                **local_68;
                                puVar8 = (uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10);
                                if (puVar8 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar8;
                                } else {
                                    plVar10 = (long*)local_90.operator->();
                                    (**(void (**)(...))(*plVar10 + 24))(plVar10);
                                    puVar8 = (uint8_t*)(**(void (**)(...))(local_58->_vptr->_dtor + 72))();
                                    if (puVar8 == DataStatus::READY) {
                                        this_01 = (shared_ptr<QuestType>*)(*local_70)[(unsigned long)local_34];
                                        *this_01 = local_90;
                                        piVar1 = (int*)((long)&this[7]._vptr + 4);
                                        *piVar1 = *piVar1 + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                if (bVar5)
                                    goto LAB_1005bd52b;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005bd52b:
                                bVar5 = true;
                            }
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_1005bd69a;
                            }
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_1005bd69a:
                if (!bVar5) {
                    return local_40;
                }
                if (*(unsigned int*)((long)&this[7]._vptr + 4) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(void (**)(...))((this[1]._vptr)->_dtor + 80))();
                *(uint32_t*)&this[6]._vptr = 2;
                local_78->reset(nullptr);
                pCVar11 = (CacheReset__3*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->CacheReset__3 = pCVar11;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005bd740
    uint8_t* ConfigTypeLoadAllContainer<QuestType>::List(int arg1, const DataStatus** arg2) {
        int* piVar1;

        int iVar2 = *(int*)&this[6]._vptr;
        if (iVar2 == 2) {
            piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
            *piVar1 = *piVar1 + 1;
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar2 != 1) {
                return PTR_NullConfigType_100ee65a0;
            }
        }
        return (uint8_t*)(*((this + 9)))[(long)arg1];
    }

    // 0x1005bd7f0
    ConfigTypeLoadAllContainer<QuestType>::~ConfigTypeLoadAllContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee82d0;
        ((this + 12))->~unique_ptr();
        ((this + 9))->~Array();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005c29d0
    ConfigTypeLoadAllContainer<SeqGroupType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList<SeqGroupType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<SeqGroupType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                                js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8230;
        new ((this + 9)) Array<shared_ptr<SeqGroupType>>();
        ((this + 12))->unique_ptr<true, void>();
    }

    // 0x1005c2a90
    uint8_t* ConfigTypeLoadAllContainer<SeqGroupType>::LoadList() {
        int* piVar1;
        int iVar2;
        ConfigTypeLoadAllContainer<SeqGroupType> _vtbl* pCVar3;
        ConfigTypeLoadAllContainer<SeqGroupType> _vtbl* pCVar4;
        bool bVar5;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<SeqGroupType>* pCVar6;
        unsigned int arg1;
        unsigned int arg2;
        uint8_t* puVar8;
        uint64_t uVar9;
        long* plVar10;
        shared_ptr<SeqGroupType>* this_01;
        CacheReset__3* pCVar11;
        uint8_t* in_RCX;
        unsigned int uVar12;
        ReturnValue local_90;
        uint64_t local_80;
        unique_ptr<DownloadWaitHandler>* local_78;
        Array<shared_ptr<SeqGroupType>>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<SeqGroupType>* local_58;
        ConfigTypeLoadAllContainer<SeqGroupType> _vtbl* local_50;
        DownloadWaitHandler* local_48;
        uint8_t* local_40;
        unsigned int local_38;
        unsigned int local_34;

        if (*(int*)&this[6]._vptr != 2) {
            pCVar3 = this[2]._vptr;
            local_58 = this + 1;
            local_38 = this[1]._vptr->GetStreamCountLastMix();
            *(unsigned int*)&this[8]._vptr = local_38;
            if (*(int*)&this[6]._vptr == 0) {
                ((this + 9))->set_max_size((unsigned long)local_38, 0);
                local_68[0] = nullptr;
                local_40 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, local_68, this[3]._vptr);
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pCVar3;
                local_90 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_38);
                (*((this + 12))) = local_90;
                local_48 = (DownloadWaitHandler*)*(*((this + 12)));
                pCVar6 = local_58;
                if (local_38 != 0) {
                    uVar12 = 0;
                    do {
                        this_00 = local_68[0];
                        arg1 = pCVar6->_vptr->GetClientGroupID(uVar12);
                        arg2 = pCVar6->_vptr->GetClientFileID(uVar12);
                        if (!(this_00->DoesFileExist(arg1, arg2))) {
                            piVar1 = (int*)((long)&this[7]._vptr + 4);
                            *piVar1 = *piVar1 + 1;
                        } else {
                            local_48->SetExists(uVar12);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_38);
                }
                *(uint32_t*)&this[6]._vptr = 1;
                iVar2 = *(int*)&this[6]._vptr;
                pCVar3 = local_50;
            } else {
                iVar2 = *(int*)&this[6]._vptr;
                local_40 = in_RCX;
            }
            if (iVar2 == 1) {
                local_80 = 0;
                pCVar4 = this[3]._vptr;
                puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, &local_80, pCVar4);
                if (puVar8 != DataStatus::READY) {
                    return puVar8;
                }
                local_78 = (unique_ptr<DownloadWaitHandler>*)(this + 12);
                local_48 = (DownloadWaitHandler*)**local_78;
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = (Array<shared_ptr<SeqGroupType>>*)(this + 9);
                    local_50 = pCVar4;
                    do {
                        if (*(int*)((long)&this[6]._vptr + 4) == 0)
                            break;
                        if (local_48->CanCheck(local_34)) {
                            new (local_68) shared_ptr();
                            uVar12 = local_34;
                            pCVar3 = local_58->_vptr;
                            uVar9 = local_50->GetPrefetchPriority();
                            puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 64))(pCVar3, local_68, local_50,
                                                                                        uVar12, uVar9, 1);
                            if (puVar8 == DataStatus::READY) {
                                MakeSharedPool<SeqGroupType, 64>::MakeShared<BaseTemplateConfigTypeList<SeqGroupType>*&,
                                                                             unsigned int&>(
                                    (BaseTemplateConfigTypeList<SeqGroupType>**)&local_90, (unsigned int*)local_58);
                                plVar10 = (long*)local_90.operator->();
                                **local_68;
                                puVar8 = (uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10);
                                if (puVar8 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar8;
                                } else {
                                    plVar10 = (long*)local_90.operator->();
                                    (**(void (**)(...))(*plVar10 + 24))(plVar10);
                                    puVar8 = (uint8_t*)(**(void (**)(...))(local_58->_vptr->_dtor + 72))();
                                    if (puVar8 == DataStatus::READY) {
                                        this_01 = (shared_ptr<SeqGroupType>*)(*local_70)[(unsigned long)local_34];
                                        *this_01 = local_90;
                                        piVar1 = (int*)((long)&this[7]._vptr + 4);
                                        *piVar1 = *piVar1 + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                if (bVar5)
                                    goto LAB_1005c2c4b;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005c2c4b:
                                bVar5 = true;
                            }
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_1005c2dba;
                            }
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_1005c2dba:
                if (!bVar5) {
                    return local_40;
                }
                if (*(unsigned int*)((long)&this[7]._vptr + 4) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(void (**)(...))((this[1]._vptr)->_dtor + 80))();
                *(uint32_t*)&this[6]._vptr = 2;
                local_78->reset(nullptr);
                pCVar11 = (CacheReset__3*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->CacheReset__3 = pCVar11;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005c2e60
    uint8_t* ConfigTypeLoadAllContainer<SeqGroupType>::List(int arg1, const DataStatus** arg2) {
        int* piVar1;

        int iVar2 = *(int*)&this[6]._vptr;
        if (iVar2 == 2) {
            piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
            *piVar1 = *piVar1 + 1;
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar2 != 1) {
                return PTR_NullConfigType_100ee6500;
            }
        }
        return (uint8_t*)(*((this + 9)))[(long)arg1];
    }

    // 0x1005c2f10
    ConfigTypeLoadAllContainer<SeqGroupType>::~ConfigTypeLoadAllContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8230;
        ((this + 12))->~unique_ptr();
        ((this + 9))->~Array();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005c8080
    ConfigTypeLoadAllContainer<LightType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList<LightType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<LightType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                             js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee82c0;
        new ((this + 9)) Array<shared_ptr<LightType>>();
        ((this + 12))->unique_ptr<true, void>();
    }

    // 0x1005c8140
    uint8_t* ConfigTypeLoadAllContainer<LightType>::LoadList() {
        int* piVar1;
        int iVar2;
        ConfigTypeLoadAllContainer<LightType> _vtbl* pCVar3;
        ConfigTypeLoadAllContainer<LightType> _vtbl* pCVar4;
        bool bVar5;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<LightType>* pCVar6;
        unsigned int arg1;
        unsigned int arg2;
        uint8_t* puVar8;
        uint64_t uVar9;
        long* plVar10;
        shared_ptr<LightType>* this_01;
        CacheReset__3* pCVar11;
        uint8_t* in_RCX;
        unsigned int uVar12;
        ReturnValue local_90;
        uint64_t local_80;
        unique_ptr<DownloadWaitHandler>* local_78;
        Array<shared_ptr<LightType>>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<LightType>* local_58;
        ConfigTypeLoadAllContainer<LightType> _vtbl* local_50;
        DownloadWaitHandler* local_48;
        uint8_t* local_40;
        unsigned int local_38;
        unsigned int local_34;

        if (*(int*)&this[6]._vptr != 2) {
            pCVar3 = this[2]._vptr;
            local_58 = this + 1;
            local_38 = this[1]._vptr->GetStreamCountLastMix();
            *(unsigned int*)&this[8]._vptr = local_38;
            if (*(int*)&this[6]._vptr == 0) {
                ((this + 9))->set_max_size((unsigned long)local_38, 0);
                local_68[0] = nullptr;
                local_40 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, local_68, this[3]._vptr);
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pCVar3;
                local_90 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_38);
                (*((this + 12))) = local_90;
                local_48 = (DownloadWaitHandler*)*(*((this + 12)));
                pCVar6 = local_58;
                if (local_38 != 0) {
                    uVar12 = 0;
                    do {
                        this_00 = local_68[0];
                        arg1 = pCVar6->_vptr->GetClientGroupID(uVar12);
                        arg2 = pCVar6->_vptr->GetClientFileID(uVar12);
                        if (!(this_00->DoesFileExist(arg1, arg2))) {
                            piVar1 = (int*)((long)&this[7]._vptr + 4);
                            *piVar1 = *piVar1 + 1;
                        } else {
                            local_48->SetExists(uVar12);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_38);
                }
                *(uint32_t*)&this[6]._vptr = 1;
                iVar2 = *(int*)&this[6]._vptr;
                pCVar3 = local_50;
            } else {
                iVar2 = *(int*)&this[6]._vptr;
                local_40 = in_RCX;
            }
            if (iVar2 == 1) {
                local_80 = 0;
                pCVar4 = this[3]._vptr;
                puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, &local_80, pCVar4);
                if (puVar8 != DataStatus::READY) {
                    return puVar8;
                }
                local_78 = (unique_ptr<DownloadWaitHandler>*)(this + 12);
                local_48 = (DownloadWaitHandler*)**local_78;
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = (Array<shared_ptr<LightType>>*)(this + 9);
                    local_50 = pCVar4;
                    do {
                        if (*(int*)((long)&this[6]._vptr + 4) == 0)
                            break;
                        if (local_48->CanCheck(local_34)) {
                            new (local_68) shared_ptr();
                            uVar12 = local_34;
                            pCVar3 = local_58->_vptr;
                            uVar9 = local_50->GetPrefetchPriority();
                            puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 64))(pCVar3, local_68, local_50,
                                                                                        uVar12, uVar9, 1);
                            if (puVar8 == DataStatus::READY) {
                                MakeSharedPool<LightType, 32>::MakeShared<BaseTemplateConfigTypeList<LightType>*&,
                                                                          unsigned int&>(
                                    (BaseTemplateConfigTypeList<LightType>**)&local_90, (unsigned int*)local_58);
                                plVar10 = (long*)local_90.operator->();
                                **local_68;
                                puVar8 = (uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10);
                                if (puVar8 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar8;
                                } else {
                                    plVar10 = (long*)local_90.operator->();
                                    (**(void (**)(...))(*plVar10 + 24))(plVar10);
                                    puVar8 = (uint8_t*)(**(void (**)(...))(local_58->_vptr->_dtor + 72))();
                                    if (puVar8 == DataStatus::READY) {
                                        this_01 = (shared_ptr<LightType>*)(*local_70)[(unsigned long)local_34];
                                        *this_01 = local_90;
                                        piVar1 = (int*)((long)&this[7]._vptr + 4);
                                        *piVar1 = *piVar1 + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                if (bVar5)
                                    goto LAB_1005c82fb;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005c82fb:
                                bVar5 = true;
                            }
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_1005c846a;
                            }
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_1005c846a:
                if (!bVar5) {
                    return local_40;
                }
                if (*(unsigned int*)((long)&this[7]._vptr + 4) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(void (**)(...))((this[1]._vptr)->_dtor + 80))();
                *(uint32_t*)&this[6]._vptr = 2;
                local_78->reset(nullptr);
                pCVar11 = (CacheReset__3*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->CacheReset__3 = pCVar11;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005c8510
    uint8_t* ConfigTypeLoadAllContainer<LightType>::List(int arg1, const DataStatus** arg2) {
        int* piVar1;

        int iVar2 = *(int*)&this[6]._vptr;
        if (iVar2 == 2) {
            piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
            *piVar1 = *piVar1 + 1;
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar2 != 1) {
                return PTR_NullConfigType_100ee6590;
            }
        }
        return (uint8_t*)(*((this + 9)))[(long)arg1];
    }

    // 0x1005c85c0
    ConfigTypeLoadAllContainer<LightType>::~ConfigTypeLoadAllContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee82c0;
        ((this + 12))->~unique_ptr();
        ((this + 9))->~Array();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005cd820
    ConfigTypeLoadAllContainer<SkyBoxType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList<SkyBoxType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<SkyBoxType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                              js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8200;
        new ((this + 9)) Array<shared_ptr<SkyBoxType>>();
        ((this + 12))->unique_ptr<true, void>();
    }

    // 0x1005cd8e0
    uint8_t* ConfigTypeLoadAllContainer<SkyBoxType>::LoadList() {
        int* piVar1;
        int iVar2;
        ConfigTypeLoadAllContainer<SkyBoxType> _vtbl* pCVar3;
        ConfigTypeLoadAllContainer<SkyBoxType> _vtbl* pCVar4;
        bool bVar5;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<SkyBoxType>* pCVar6;
        unsigned int arg1;
        unsigned int arg2;
        uint8_t* puVar8;
        uint64_t uVar9;
        long* plVar10;
        shared_ptr<SkyBoxType>* this_01;
        CacheReset__3* pCVar11;
        uint8_t* in_RCX;
        unsigned int uVar12;
        ReturnValue local_90;
        uint64_t local_80;
        unique_ptr<DownloadWaitHandler>* local_78;
        Array<shared_ptr<SkyBoxType>>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<SkyBoxType>* local_58;
        ConfigTypeLoadAllContainer<SkyBoxType> _vtbl* local_50;
        DownloadWaitHandler* local_48;
        uint8_t* local_40;
        unsigned int local_38;
        unsigned int local_34;

        if (*(int*)&this[6]._vptr != 2) {
            pCVar3 = this[2]._vptr;
            local_58 = this + 1;
            local_38 = this[1]._vptr->GetStreamCountLastMix();
            *(unsigned int*)&this[8]._vptr = local_38;
            if (*(int*)&this[6]._vptr == 0) {
                ((this + 9))->set_max_size((unsigned long)local_38, 0);
                local_68[0] = nullptr;
                local_40 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, local_68, this[3]._vptr);
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pCVar3;
                local_90 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_38);
                (*((this + 12))) = local_90;
                local_48 = (DownloadWaitHandler*)*(*((this + 12)));
                pCVar6 = local_58;
                if (local_38 != 0) {
                    uVar12 = 0;
                    do {
                        this_00 = local_68[0];
                        arg1 = pCVar6->_vptr->GetClientGroupID(uVar12);
                        arg2 = pCVar6->_vptr->GetClientFileID(uVar12);
                        if (!(this_00->DoesFileExist(arg1, arg2))) {
                            piVar1 = (int*)((long)&this[7]._vptr + 4);
                            *piVar1 = *piVar1 + 1;
                        } else {
                            local_48->SetExists(uVar12);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_38);
                }
                *(uint32_t*)&this[6]._vptr = 1;
                iVar2 = *(int*)&this[6]._vptr;
                pCVar3 = local_50;
            } else {
                iVar2 = *(int*)&this[6]._vptr;
                local_40 = in_RCX;
            }
            if (iVar2 == 1) {
                local_80 = 0;
                pCVar4 = this[3]._vptr;
                puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, &local_80, pCVar4);
                if (puVar8 != DataStatus::READY) {
                    return puVar8;
                }
                local_78 = (unique_ptr<DownloadWaitHandler>*)(this + 12);
                local_48 = (DownloadWaitHandler*)**local_78;
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = (Array<shared_ptr<SkyBoxType>>*)(this + 9);
                    local_50 = pCVar4;
                    do {
                        if (*(int*)((long)&this[6]._vptr + 4) == 0)
                            break;
                        if (local_48->CanCheck(local_34)) {
                            new (local_68) shared_ptr();
                            uVar12 = local_34;
                            pCVar3 = local_58->_vptr;
                            uVar9 = local_50->GetPrefetchPriority();
                            puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 64))(pCVar3, local_68, local_50,
                                                                                        uVar12, uVar9, 1);
                            if (puVar8 == DataStatus::READY) {
                                MakeSharedPool<SkyBoxType, 16>::MakeShared<BaseTemplateConfigTypeList<SkyBoxType>*&,
                                                                           unsigned int&>(
                                    (BaseTemplateConfigTypeList<SkyBoxType>**)&local_90, (unsigned int*)local_58);
                                plVar10 = (long*)local_90.operator->();
                                **local_68;
                                puVar8 = (uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10);
                                if (puVar8 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar8;
                                } else {
                                    plVar10 = (long*)local_90.operator->();
                                    (**(void (**)(...))(*plVar10 + 24))(plVar10);
                                    puVar8 = (uint8_t*)(**(void (**)(...))(local_58->_vptr->_dtor + 72))();
                                    if (puVar8 == DataStatus::READY) {
                                        this_01 = (shared_ptr<SkyBoxType>*)(*local_70)[(unsigned long)local_34];
                                        *this_01 = local_90;
                                        piVar1 = (int*)((long)&this[7]._vptr + 4);
                                        *piVar1 = *piVar1 + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                if (bVar5)
                                    goto LAB_1005cda9b;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005cda9b:
                                bVar5 = true;
                            }
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_1005cdc0a;
                            }
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_1005cdc0a:
                if (!bVar5) {
                    return local_40;
                }
                if (*(unsigned int*)((long)&this[7]._vptr + 4) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(void (**)(...))((this[1]._vptr)->_dtor + 80))();
                *(uint32_t*)&this[6]._vptr = 2;
                local_78->reset(nullptr);
                pCVar11 = (CacheReset__3*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->CacheReset__3 = pCVar11;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005cdcb0
    uint8_t* ConfigTypeLoadAllContainer<SkyBoxType>::List(int arg1, const DataStatus** arg2) {
        int* piVar1;

        int iVar2 = *(int*)&this[6]._vptr;
        if (iVar2 == 2) {
            piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
            *piVar1 = *piVar1 + 1;
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar2 != 1) {
                return PTR_NullConfigType_100ee64d0;
            }
        }
        return (uint8_t*)(*((this + 9)))[(long)arg1];
    }

    // 0x1005cdd60
    ConfigTypeLoadAllContainer<SkyBoxType>::~ConfigTypeLoadAllContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8200;
        ((this + 12))->~unique_ptr();
        ((this + 9))->~Array();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005d22c0
    ConfigTypeLoadAllContainer<WaterType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList<WaterType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<WaterType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                             js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee82d8;
        new ((this + 9)) Array<shared_ptr<WaterType>>();
        ((this + 12))->unique_ptr<true, void>();
    }

    // 0x1005d2380
    uint8_t* ConfigTypeLoadAllContainer<WaterType>::LoadList() {
        int* piVar1;
        int iVar2;
        ConfigTypeLoadAllContainer<WaterType> _vtbl* pCVar3;
        ConfigTypeLoadAllContainer<WaterType> _vtbl* pCVar4;
        bool bVar5;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<WaterType>* pCVar6;
        unsigned int arg1;
        unsigned int arg2;
        uint8_t* puVar8;
        uint64_t uVar9;
        long* plVar10;
        shared_ptr<WaterType>* this_01;
        CacheReset__3* pCVar11;
        uint8_t* in_RCX;
        unsigned int uVar12;
        ReturnValue local_90;
        uint64_t local_80;
        unique_ptr<DownloadWaitHandler>* local_78;
        Array<shared_ptr<WaterType>>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<WaterType>* local_58;
        ConfigTypeLoadAllContainer<WaterType> _vtbl* local_50;
        DownloadWaitHandler* local_48;
        uint8_t* local_40;
        unsigned int local_38;
        unsigned int local_34;

        if (*(int*)&this[6]._vptr != 2) {
            pCVar3 = this[2]._vptr;
            local_58 = this + 1;
            local_38 = this[1]._vptr->GetStreamCountLastMix();
            *(unsigned int*)&this[8]._vptr = local_38;
            if (*(int*)&this[6]._vptr == 0) {
                ((this + 9))->set_max_size((unsigned long)local_38, 0);
                local_68[0] = nullptr;
                local_40 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, local_68, this[3]._vptr);
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pCVar3;
                local_90 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_38);
                (*((this + 12))) = local_90;
                local_48 = (DownloadWaitHandler*)*(*((this + 12)));
                pCVar6 = local_58;
                if (local_38 != 0) {
                    uVar12 = 0;
                    do {
                        this_00 = local_68[0];
                        arg1 = pCVar6->_vptr->GetClientGroupID(uVar12);
                        arg2 = pCVar6->_vptr->GetClientFileID(uVar12);
                        if (!(this_00->DoesFileExist(arg1, arg2))) {
                            piVar1 = (int*)((long)&this[7]._vptr + 4);
                            *piVar1 = *piVar1 + 1;
                        } else {
                            local_48->SetExists(uVar12);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_38);
                }
                *(uint32_t*)&this[6]._vptr = 1;
                iVar2 = *(int*)&this[6]._vptr;
                pCVar3 = local_50;
            } else {
                iVar2 = *(int*)&this[6]._vptr;
                local_40 = in_RCX;
            }
            if (iVar2 == 1) {
                local_80 = 0;
                pCVar4 = this[3]._vptr;
                puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, &local_80, pCVar4);
                if (puVar8 != DataStatus::READY) {
                    return puVar8;
                }
                local_78 = (unique_ptr<DownloadWaitHandler>*)(this + 12);
                local_48 = (DownloadWaitHandler*)**local_78;
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = (Array<shared_ptr<WaterType>>*)(this + 9);
                    local_50 = pCVar4;
                    do {
                        if (*(int*)((long)&this[6]._vptr + 4) == 0)
                            break;
                        if (local_48->CanCheck(local_34)) {
                            new (local_68) shared_ptr();
                            uVar12 = local_34;
                            pCVar3 = local_58->_vptr;
                            uVar9 = local_50->GetPrefetchPriority();
                            puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 64))(pCVar3, local_68, local_50,
                                                                                        uVar12, uVar9, 1);
                            if (puVar8 == DataStatus::READY) {
                                MakeSharedPool<WaterType, 16>::MakeShared<BaseTemplateConfigTypeList<WaterType>*&,
                                                                          unsigned int&>(
                                    (BaseTemplateConfigTypeList<WaterType>**)&local_90, (unsigned int*)local_58);
                                plVar10 = (long*)local_90.operator->();
                                **local_68;
                                puVar8 = (uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10);
                                if (puVar8 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar8;
                                } else {
                                    plVar10 = (long*)local_90.operator->();
                                    (**(void (**)(...))(*plVar10 + 24))(plVar10);
                                    puVar8 = (uint8_t*)(**(void (**)(...))(local_58->_vptr->_dtor + 72))();
                                    if (puVar8 == DataStatus::READY) {
                                        this_01 = (shared_ptr<WaterType>*)(*local_70)[(unsigned long)local_34];
                                        *this_01 = local_90;
                                        piVar1 = (int*)((long)&this[7]._vptr + 4);
                                        *piVar1 = *piVar1 + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                if (bVar5)
                                    goto LAB_1005d253b;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005d253b:
                                bVar5 = true;
                            }
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_1005d26aa;
                            }
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_1005d26aa:
                if (!bVar5) {
                    return local_40;
                }
                if (*(unsigned int*)((long)&this[7]._vptr + 4) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(void (**)(...))((this[1]._vptr)->_dtor + 80))();
                *(uint32_t*)&this[6]._vptr = 2;
                local_78->reset(nullptr);
                pCVar11 = (CacheReset__3*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->CacheReset__3 = pCVar11;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005d2750
    uint8_t* ConfigTypeLoadAllContainer<WaterType>::List(int arg1, const DataStatus** arg2) {
        int* piVar1;

        int iVar2 = *(int*)&this[6]._vptr;
        if (iVar2 == 2) {
            piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
            *piVar1 = *piVar1 + 1;
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar2 != 1) {
                return PTR_NullConfigType_100ee65a8;
            }
        }
        return (uint8_t*)(*((this + 9)))[(long)arg1];
    }

    // 0x1005d2800
    ConfigTypeLoadAllContainer<WaterType>::~ConfigTypeLoadAllContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee82d8;
        ((this + 12))->~unique_ptr();
        ((this + 9))->~Array();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005d7930
    ConfigTypeLoadAllContainer<CursorType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList<CursorType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<CursorType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                              js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee81f8;
        new ((this + 9)) Array<shared_ptr<CursorType>>();
        ((this + 12))->unique_ptr<true, void>();
    }

    // 0x1005d79f0
    uint8_t* ConfigTypeLoadAllContainer<CursorType>::LoadList() {
        int* piVar1;
        int iVar2;
        ConfigTypeLoadAllContainer<CursorType> _vtbl* pCVar3;
        ConfigTypeLoadAllContainer<CursorType> _vtbl* pCVar4;
        bool bVar5;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<CursorType>* pCVar6;
        unsigned int arg1;
        unsigned int arg2;
        uint8_t* puVar8;
        uint64_t uVar9;
        long* plVar10;
        shared_ptr<CursorType>* this_01;
        CacheReset__3* pCVar11;
        uint8_t* in_RCX;
        unsigned int uVar12;
        ReturnValue local_90;
        uint64_t local_80;
        unique_ptr<DownloadWaitHandler>* local_78;
        Array<shared_ptr<CursorType>>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<CursorType>* local_58;
        ConfigTypeLoadAllContainer<CursorType> _vtbl* local_50;
        DownloadWaitHandler* local_48;
        uint8_t* local_40;
        unsigned int local_38;
        unsigned int local_34;

        if (*(int*)&this[6]._vptr != 2) {
            pCVar3 = this[2]._vptr;
            local_58 = this + 1;
            local_38 = this[1]._vptr->GetStreamCountLastMix();
            *(unsigned int*)&this[8]._vptr = local_38;
            if (*(int*)&this[6]._vptr == 0) {
                ((this + 9))->set_max_size((unsigned long)local_38, 0);
                local_68[0] = nullptr;
                local_40 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, local_68, this[3]._vptr);
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pCVar3;
                local_90 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_38);
                (*((this + 12))) = local_90;
                local_48 = (DownloadWaitHandler*)*(*((this + 12)));
                pCVar6 = local_58;
                if (local_38 != 0) {
                    uVar12 = 0;
                    do {
                        this_00 = local_68[0];
                        arg1 = pCVar6->_vptr->GetClientGroupID(uVar12);
                        arg2 = pCVar6->_vptr->GetClientFileID(uVar12);
                        if (!(this_00->DoesFileExist(arg1, arg2))) {
                            piVar1 = (int*)((long)&this[7]._vptr + 4);
                            *piVar1 = *piVar1 + 1;
                        } else {
                            local_48->SetExists(uVar12);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_38);
                }
                *(uint32_t*)&this[6]._vptr = 1;
                iVar2 = *(int*)&this[6]._vptr;
                pCVar3 = local_50;
            } else {
                iVar2 = *(int*)&this[6]._vptr;
                local_40 = in_RCX;
            }
            if (iVar2 == 1) {
                local_80 = 0;
                pCVar4 = this[3]._vptr;
                puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, &local_80, pCVar4);
                if (puVar8 != DataStatus::READY) {
                    return puVar8;
                }
                local_78 = (unique_ptr<DownloadWaitHandler>*)(this + 12);
                local_48 = (DownloadWaitHandler*)**local_78;
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = (Array<shared_ptr<CursorType>>*)(this + 9);
                    local_50 = pCVar4;
                    do {
                        if (*(int*)((long)&this[6]._vptr + 4) == 0)
                            break;
                        if (local_48->CanCheck(local_34)) {
                            new (local_68) shared_ptr();
                            uVar12 = local_34;
                            pCVar3 = local_58->_vptr;
                            uVar9 = local_50->GetPrefetchPriority();
                            puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 64))(pCVar3, local_68, local_50,
                                                                                        uVar12, uVar9, 1);
                            if (puVar8 == DataStatus::READY) {
                                MakeSharedPool<CursorType, 64>::MakeShared<BaseTemplateConfigTypeList<CursorType>*&,
                                                                           unsigned int&>(
                                    (BaseTemplateConfigTypeList<CursorType>**)&local_90, (unsigned int*)local_58);
                                plVar10 = (long*)local_90.operator->();
                                **local_68;
                                puVar8 = (uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10);
                                if (puVar8 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar8;
                                } else {
                                    plVar10 = (long*)local_90.operator->();
                                    (**(void (**)(...))(*plVar10 + 24))(plVar10);
                                    puVar8 = (uint8_t*)(**(void (**)(...))(local_58->_vptr->_dtor + 72))();
                                    if (puVar8 == DataStatus::READY) {
                                        this_01 = (shared_ptr<CursorType>*)(*local_70)[(unsigned long)local_34];
                                        *this_01 = local_90;
                                        piVar1 = (int*)((long)&this[7]._vptr + 4);
                                        *piVar1 = *piVar1 + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                if (bVar5)
                                    goto LAB_1005d7bab;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005d7bab:
                                bVar5 = true;
                            }
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_1005d7d1a;
                            }
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_1005d7d1a:
                if (!bVar5) {
                    return local_40;
                }
                if (*(unsigned int*)((long)&this[7]._vptr + 4) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(void (**)(...))((this[1]._vptr)->_dtor + 80))();
                *(uint32_t*)&this[6]._vptr = 2;
                local_78->reset(nullptr);
                pCVar11 = (CacheReset__3*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->CacheReset__3 = pCVar11;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005d7dc0
    uint8_t* ConfigTypeLoadAllContainer<CursorType>::List(int arg1, const DataStatus** arg2) {
        int* piVar1;

        int iVar2 = *(int*)&this[6]._vptr;
        if (iVar2 == 2) {
            piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
            *piVar1 = *piVar1 + 1;
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar2 != 1) {
                return PTR_NullConfigType_100ee64c8;
            }
        }
        return (uint8_t*)(*((this + 9)))[(long)arg1];
    }

    // 0x1005d7e70
    ConfigTypeLoadAllContainer<CursorType>::~ConfigTypeLoadAllContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee81f8;
        ((this + 12))->~unique_ptr();
        ((this + 9))->~Array();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005dce40
    ConfigTypeLoadAllContainer<WorldAreaType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList<WorldAreaType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<WorldAreaType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                                 js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8238;
        new ((this + 9)) Array<shared_ptr<WorldAreaType>>();
        ((this + 12))->unique_ptr<true, void>();
    }

    // 0x1005dcf00
    uint8_t* ConfigTypeLoadAllContainer<WorldAreaType>::LoadList() {
        int* piVar1;
        int iVar2;
        ConfigTypeLoadAllContainer<WorldAreaType> _vtbl* pCVar3;
        ConfigTypeLoadAllContainer<WorldAreaType> _vtbl* pCVar4;
        bool bVar5;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<WorldAreaType>* pCVar6;
        unsigned int arg1;
        unsigned int arg2;
        uint8_t* puVar8;
        uint64_t uVar9;
        long* plVar10;
        shared_ptr<WorldAreaType>* this_01;
        CacheReset__3* pCVar11;
        uint8_t* in_RCX;
        unsigned int uVar12;
        ReturnValue local_90;
        uint64_t local_80;
        unique_ptr<DownloadWaitHandler>* local_78;
        Array<shared_ptr<WorldAreaType>>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<WorldAreaType>* local_58;
        ConfigTypeLoadAllContainer<WorldAreaType> _vtbl* local_50;
        DownloadWaitHandler* local_48;
        uint8_t* local_40;
        unsigned int local_38;
        unsigned int local_34;

        if (*(int*)&this[6]._vptr != 2) {
            pCVar3 = this[2]._vptr;
            local_58 = this + 1;
            local_38 = this[1]._vptr->GetStreamCountLastMix();
            *(unsigned int*)&this[8]._vptr = local_38;
            if (*(int*)&this[6]._vptr == 0) {
                ((this + 9))->set_max_size((unsigned long)local_38, 0);
                local_68[0] = nullptr;
                local_40 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, local_68, this[3]._vptr);
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pCVar3;
                local_90 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_38);
                (*((this + 12))) = local_90;
                local_48 = (DownloadWaitHandler*)*(*((this + 12)));
                pCVar6 = local_58;
                if (local_38 != 0) {
                    uVar12 = 0;
                    do {
                        this_00 = local_68[0];
                        arg1 = pCVar6->_vptr->GetClientGroupID(uVar12);
                        arg2 = pCVar6->_vptr->GetClientFileID(uVar12);
                        if (!(this_00->DoesFileExist(arg1, arg2))) {
                            piVar1 = (int*)((long)&this[7]._vptr + 4);
                            *piVar1 = *piVar1 + 1;
                        } else {
                            local_48->SetExists(uVar12);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_38);
                }
                *(uint32_t*)&this[6]._vptr = 1;
                iVar2 = *(int*)&this[6]._vptr;
                pCVar3 = local_50;
            } else {
                iVar2 = *(int*)&this[6]._vptr;
                local_40 = in_RCX;
            }
            if (iVar2 == 1) {
                local_80 = 0;
                pCVar4 = this[3]._vptr;
                puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, &local_80, pCVar4);
                if (puVar8 != DataStatus::READY) {
                    return puVar8;
                }
                local_78 = (unique_ptr<DownloadWaitHandler>*)(this + 12);
                local_48 = (DownloadWaitHandler*)**local_78;
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = (Array<shared_ptr<WorldAreaType>>*)(this + 9);
                    local_50 = pCVar4;
                    do {
                        if (*(int*)((long)&this[6]._vptr + 4) == 0)
                            break;
                        if (local_48->CanCheck(local_34)) {
                            new (local_68) shared_ptr();
                            uVar12 = local_34;
                            pCVar3 = local_58->_vptr;
                            uVar9 = local_50->GetPrefetchPriority();
                            puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 64))(pCVar3, local_68, local_50,
                                                                                        uVar12, uVar9, 1);
                            if (puVar8 == DataStatus::READY) {
                                MakeSharedPool<WorldAreaType, 1024>::MakeShared<
                                    BaseTemplateConfigTypeList<WorldAreaType>*&, unsigned int&>(
                                    (BaseTemplateConfigTypeList<WorldAreaType>**)&local_90, (unsigned int*)local_58);
                                plVar10 = (long*)local_90.operator->();
                                **local_68;
                                puVar8 = (uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10);
                                if (puVar8 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar8;
                                } else {
                                    plVar10 = (long*)local_90.operator->();
                                    (**(void (**)(...))(*plVar10 + 24))(plVar10);
                                    puVar8 = (uint8_t*)(**(void (**)(...))(local_58->_vptr->_dtor + 72))();
                                    if (puVar8 == DataStatus::READY) {
                                        this_01 = (shared_ptr<WorldAreaType>*)(*local_70)[(unsigned long)local_34];
                                        *this_01 = local_90;
                                        piVar1 = (int*)((long)&this[7]._vptr + 4);
                                        *piVar1 = *piVar1 + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                if (bVar5)
                                    goto LAB_1005dd0bb;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005dd0bb:
                                bVar5 = true;
                            }
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_1005dd22a;
                            }
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_1005dd22a:
                if (!bVar5) {
                    return local_40;
                }
                if (*(unsigned int*)((long)&this[7]._vptr + 4) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(void (**)(...))((this[1]._vptr)->_dtor + 80))();
                *(uint32_t*)&this[6]._vptr = 2;
                local_78->reset(nullptr);
                pCVar11 = (CacheReset__3*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->CacheReset__3 = pCVar11;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005dd2d0
    uint8_t* ConfigTypeLoadAllContainer<WorldAreaType>::List(int arg1, const DataStatus** arg2) {
        int* piVar1;

        int iVar2 = *(int*)&this[6]._vptr;
        if (iVar2 == 2) {
            piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
            *piVar1 = *piVar1 + 1;
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar2 != 1) {
                return PTR_NullConfigType_100ee6508;
            }
        }
        return (uint8_t*)(*((this + 9)))[(long)arg1];
    }

    // 0x1005dd380
    ConfigTypeLoadAllContainer<WorldAreaType>::~ConfigTypeLoadAllContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8238;
        ((this + 12))->~unique_ptr();
        ((this + 9))->~Array();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005e3260
    ConfigTypeLoadAllContainer<EnumType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList<EnumType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<EnumType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                            js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee82b0;
        new ((this + 9)) Array<shared_ptr<EnumType>>();
        ((this + 12))->unique_ptr<true, void>();
    }

    // 0x1005e3320
    uint8_t* ConfigTypeLoadAllContainer<EnumType>::LoadList() {
        int* piVar1;
        int iVar2;
        ConfigTypeLoadAllContainer<EnumType> _vtbl* pCVar3;
        ConfigTypeLoadAllContainer<EnumType> _vtbl* pCVar4;
        bool bVar5;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<EnumType>* pCVar6;
        unsigned int arg1;
        unsigned int arg2;
        uint8_t* puVar8;
        uint64_t uVar9;
        long* plVar10;
        shared_ptr<EnumType>* this_01;
        CacheReset__3* pCVar11;
        uint8_t* in_RCX;
        unsigned int uVar12;
        ReturnValue local_90;
        uint64_t local_80;
        unique_ptr<DownloadWaitHandler>* local_78;
        Array<shared_ptr<EnumType>>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<EnumType>* local_58;
        ConfigTypeLoadAllContainer<EnumType> _vtbl* local_50;
        DownloadWaitHandler* local_48;
        uint8_t* local_40;
        unsigned int local_38;
        unsigned int local_34;

        if (*(int*)&this[6]._vptr != 2) {
            pCVar3 = this[2]._vptr;
            local_58 = this + 1;
            local_38 = this[1]._vptr->GetStreamCountLastMix();
            *(unsigned int*)&this[8]._vptr = local_38;
            if (*(int*)&this[6]._vptr == 0) {
                ((this + 9))->set_max_size((unsigned long)local_38, 0);
                local_68[0] = nullptr;
                local_40 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, local_68, this[3]._vptr);
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pCVar3;
                local_90 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_38);
                (*((this + 12))) = local_90;
                local_48 = (DownloadWaitHandler*)*(*((this + 12)));
                pCVar6 = local_58;
                if (local_38 != 0) {
                    uVar12 = 0;
                    do {
                        this_00 = local_68[0];
                        arg1 = pCVar6->_vptr->GetClientGroupID(uVar12);
                        arg2 = pCVar6->_vptr->GetClientFileID(uVar12);
                        if (!(this_00->DoesFileExist(arg1, arg2))) {
                            piVar1 = (int*)((long)&this[7]._vptr + 4);
                            *piVar1 = *piVar1 + 1;
                        } else {
                            local_48->SetExists(uVar12);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_38);
                }
                *(uint32_t*)&this[6]._vptr = 1;
                iVar2 = *(int*)&this[6]._vptr;
                pCVar3 = local_50;
            } else {
                iVar2 = *(int*)&this[6]._vptr;
                local_40 = in_RCX;
            }
            if (iVar2 == 1) {
                local_80 = 0;
                pCVar4 = this[3]._vptr;
                puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, &local_80, pCVar4);
                if (puVar8 != DataStatus::READY) {
                    return puVar8;
                }
                local_78 = (unique_ptr<DownloadWaitHandler>*)(this + 12);
                local_48 = (DownloadWaitHandler*)**local_78;
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = (Array<shared_ptr<EnumType>>*)(this + 9);
                    local_50 = pCVar4;
                    do {
                        if (*(int*)((long)&this[6]._vptr + 4) == 0)
                            break;
                        if (local_48->CanCheck(local_34)) {
                            new (local_68) shared_ptr();
                            uVar12 = local_34;
                            pCVar3 = local_58->_vptr;
                            uVar9 = local_50->GetPrefetchPriority();
                            puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 64))(pCVar3, local_68, local_50,
                                                                                        uVar12, uVar9, 1);
                            if (puVar8 == DataStatus::READY) {
                                MakeSharedPool<EnumType, 128>::MakeShared<BaseTemplateConfigTypeList<EnumType>*&,
                                                                          unsigned int&>(
                                    (BaseTemplateConfigTypeList<EnumType>**)&local_90, (unsigned int*)local_58);
                                plVar10 = (long*)local_90.operator->();
                                **local_68;
                                puVar8 = (uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10);
                                if (puVar8 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar8;
                                } else {
                                    plVar10 = (long*)local_90.operator->();
                                    (**(void (**)(...))(*plVar10 + 24))(plVar10);
                                    puVar8 = (uint8_t*)(**(void (**)(...))(local_58->_vptr->_dtor + 72))();
                                    if (puVar8 == DataStatus::READY) {
                                        this_01 = (shared_ptr<EnumType>*)(*local_70)[(unsigned long)local_34];
                                        *this_01 = local_90;
                                        piVar1 = (int*)((long)&this[7]._vptr + 4);
                                        *piVar1 = *piVar1 + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                if (bVar5)
                                    goto LAB_1005e34db;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005e34db:
                                bVar5 = true;
                            }
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_1005e364a;
                            }
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_1005e364a:
                if (!bVar5) {
                    return local_40;
                }
                if (*(unsigned int*)((long)&this[7]._vptr + 4) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(void (**)(...))((this[1]._vptr)->_dtor + 80))();
                *(uint32_t*)&this[6]._vptr = 2;
                local_78->reset(nullptr);
                pCVar11 = (CacheReset__3*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->CacheReset__3 = pCVar11;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005e36f0
    uint8_t* ConfigTypeLoadAllContainer<EnumType>::List(int arg1, const DataStatus** arg2) {
        int* piVar1;

        int iVar2 = *(int*)&this[6]._vptr;
        if (iVar2 == 2) {
            piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
            *piVar1 = *piVar1 + 1;
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar2 != 1) {
                return PTR_NullConfigType_100ee6580;
            }
        }
        return (uint8_t*)(*((this + 9)))[(long)arg1];
    }

    // 0x1005e37a0
    ConfigTypeLoadAllContainer<EnumType>::~ConfigTypeLoadAllContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee82b0;
        ((this + 12))->~unique_ptr();
        ((this + 9))->~Array();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005e8c80
    ConfigTypeLoadAllContainer<EffectAnimType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList<EffectAnimType>& baseTemplateConfigTypeList,
        Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
        const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<EffectAnimType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                                  js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8240;
        new ((this + 9)) Array<shared_ptr<EffectAnimType>>();
        ((this + 12))->unique_ptr<true, void>();
    }

    // 0x1005e8d40
    uint8_t* ConfigTypeLoadAllContainer<EffectAnimType>::LoadList() {
        int* piVar1;
        int iVar2;
        ConfigTypeLoadAllContainer<EffectAnimType> _vtbl* pCVar3;
        ConfigTypeLoadAllContainer<EffectAnimType> _vtbl* pCVar4;
        bool bVar5;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<EffectAnimType>* pCVar6;
        unsigned int arg1;
        unsigned int arg2;
        uint8_t* puVar8;
        uint64_t uVar9;
        long* plVar10;
        shared_ptr<EffectAnimType>* this_01;
        CacheReset__3* pCVar11;
        uint8_t* in_RCX;
        unsigned int uVar12;
        ReturnValue local_90;
        uint64_t local_80;
        unique_ptr<DownloadWaitHandler>* local_78;
        Array<shared_ptr<EffectAnimType>>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<EffectAnimType>* local_58;
        ConfigTypeLoadAllContainer<EffectAnimType> _vtbl* local_50;
        DownloadWaitHandler* local_48;
        uint8_t* local_40;
        unsigned int local_38;
        unsigned int local_34;

        if (*(int*)&this[6]._vptr != 2) {
            pCVar3 = this[2]._vptr;
            local_58 = this + 1;
            local_38 = this[1]._vptr->GetStreamCountLastMix();
            *(unsigned int*)&this[8]._vptr = local_38;
            if (*(int*)&this[6]._vptr == 0) {
                ((this + 9))->set_max_size((unsigned long)local_38, 0);
                local_68[0] = nullptr;
                local_40 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, local_68, this[3]._vptr);
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pCVar3;
                local_90 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_38);
                (*((this + 12))) = local_90;
                local_48 = (DownloadWaitHandler*)*(*((this + 12)));
                pCVar6 = local_58;
                if (local_38 != 0) {
                    uVar12 = 0;
                    do {
                        this_00 = local_68[0];
                        arg1 = pCVar6->_vptr->GetClientGroupID(uVar12);
                        arg2 = pCVar6->_vptr->GetClientFileID(uVar12);
                        if (!(this_00->DoesFileExist(arg1, arg2))) {
                            piVar1 = (int*)((long)&this[7]._vptr + 4);
                            *piVar1 = *piVar1 + 1;
                        } else {
                            local_48->SetExists(uVar12);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_38);
                }
                *(uint32_t*)&this[6]._vptr = 1;
                iVar2 = *(int*)&this[6]._vptr;
                pCVar3 = local_50;
            } else {
                iVar2 = *(int*)&this[6]._vptr;
                local_40 = in_RCX;
            }
            if (iVar2 == 1) {
                local_80 = 0;
                pCVar4 = this[3]._vptr;
                puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, &local_80, pCVar4);
                if (puVar8 != DataStatus::READY) {
                    return puVar8;
                }
                local_78 = (unique_ptr<DownloadWaitHandler>*)(this + 12);
                local_48 = (DownloadWaitHandler*)**local_78;
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = (Array<shared_ptr<EffectAnimType>>*)(this + 9);
                    local_50 = pCVar4;
                    do {
                        if (*(int*)((long)&this[6]._vptr + 4) == 0)
                            break;
                        if (local_48->CanCheck(local_34)) {
                            new (local_68) shared_ptr();
                            uVar12 = local_34;
                            pCVar3 = local_58->_vptr;
                            uVar9 = local_50->GetPrefetchPriority();
                            puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 64))(pCVar3, local_68, local_50,
                                                                                        uVar12, uVar9, 1);
                            if (puVar8 == DataStatus::READY) {
                                MakeSharedPool<EffectAnimType, 256>::MakeShared<
                                    BaseTemplateConfigTypeList<EffectAnimType>*&, unsigned int&>(
                                    (BaseTemplateConfigTypeList<EffectAnimType>**)&local_90, (unsigned int*)local_58);
                                plVar10 = (long*)local_90.operator->();
                                **local_68;
                                puVar8 = (uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10);
                                if (puVar8 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar8;
                                } else {
                                    plVar10 = (long*)local_90.operator->();
                                    (**(void (**)(...))(*plVar10 + 24))(plVar10);
                                    puVar8 = (uint8_t*)(**(void (**)(...))(local_58->_vptr->_dtor + 72))();
                                    if (puVar8 == DataStatus::READY) {
                                        this_01 = (shared_ptr<EffectAnimType>*)(*local_70)[(unsigned long)local_34];
                                        *this_01 = local_90;
                                        piVar1 = (int*)((long)&this[7]._vptr + 4);
                                        *piVar1 = *piVar1 + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                if (bVar5)
                                    goto LAB_1005e8efb;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005e8efb:
                                bVar5 = true;
                            }
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_1005e906a;
                            }
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_1005e906a:
                if (!bVar5) {
                    return local_40;
                }
                if (*(unsigned int*)((long)&this[7]._vptr + 4) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(void (**)(...))((this[1]._vptr)->_dtor + 80))();
                *(uint32_t*)&this[6]._vptr = 2;
                local_78->reset(nullptr);
                pCVar11 = (CacheReset__3*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->CacheReset__3 = pCVar11;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005e9110
    uint8_t* ConfigTypeLoadAllContainer<EffectAnimType>::List(int arg1, const DataStatus** arg2) {
        int* piVar1;

        int iVar2 = *(int*)&this[6]._vptr;
        if (iVar2 == 2) {
            piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
            *piVar1 = *piVar1 + 1;
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar2 != 1) {
                return PTR_NullConfigType_100ee6510;
            }
        }
        return (uint8_t*)(*((this + 9)))[(long)arg1];
    }

    // 0x1005e91c0
    ConfigTypeLoadAllContainer<EffectAnimType>::~ConfigTypeLoadAllContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8240;
        ((this + 12))->~unique_ptr();
        ((this + 9))->~Array();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005ee8d0
    ConfigTypeLoadAllContainer<StructType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList<StructType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<StructType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                              js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8208;
        new ((this + 9)) Array<shared_ptr<StructType>>();
        ((this + 12))->unique_ptr<true, void>();
    }

    // 0x1005ee990
    uint8_t* ConfigTypeLoadAllContainer<StructType>::LoadList() {
        int* piVar1;
        int iVar2;
        ConfigTypeLoadAllContainer<StructType> _vtbl* pCVar3;
        ConfigTypeLoadAllContainer<StructType> _vtbl* pCVar4;
        bool bVar5;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<StructType>* pCVar6;
        unsigned int arg1;
        unsigned int arg2;
        uint8_t* puVar8;
        uint64_t uVar9;
        long* plVar10;
        shared_ptr<StructType>* this_01;
        CacheReset__3* pCVar11;
        uint8_t* in_RCX;
        unsigned int uVar12;
        ReturnValue local_90;
        uint64_t local_80;
        unique_ptr<DownloadWaitHandler>* local_78;
        Array<shared_ptr<StructType>>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<StructType>* local_58;
        ConfigTypeLoadAllContainer<StructType> _vtbl* local_50;
        DownloadWaitHandler* local_48;
        uint8_t* local_40;
        unsigned int local_38;
        unsigned int local_34;

        if (*(int*)&this[6]._vptr != 2) {
            pCVar3 = this[2]._vptr;
            local_58 = this + 1;
            local_38 = this[1]._vptr->GetStreamCountLastMix();
            *(unsigned int*)&this[8]._vptr = local_38;
            if (*(int*)&this[6]._vptr == 0) {
                ((this + 9))->set_max_size((unsigned long)local_38, 0);
                local_68[0] = nullptr;
                local_40 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, local_68, this[3]._vptr);
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pCVar3;
                local_90 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_38);
                (*((this + 12))) = local_90;
                local_48 = (DownloadWaitHandler*)*(*((this + 12)));
                pCVar6 = local_58;
                if (local_38 != 0) {
                    uVar12 = 0;
                    do {
                        this_00 = local_68[0];
                        arg1 = pCVar6->_vptr->GetClientGroupID(uVar12);
                        arg2 = pCVar6->_vptr->GetClientFileID(uVar12);
                        if (!(this_00->DoesFileExist(arg1, arg2))) {
                            piVar1 = (int*)((long)&this[7]._vptr + 4);
                            *piVar1 = *piVar1 + 1;
                        } else {
                            local_48->SetExists(uVar12);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_38);
                }
                *(uint32_t*)&this[6]._vptr = 1;
                iVar2 = *(int*)&this[6]._vptr;
                pCVar3 = local_50;
            } else {
                iVar2 = *(int*)&this[6]._vptr;
                local_40 = in_RCX;
            }
            if (iVar2 == 1) {
                local_80 = 0;
                pCVar4 = this[3]._vptr;
                puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, &local_80, pCVar4);
                if (puVar8 != DataStatus::READY) {
                    return puVar8;
                }
                local_78 = (unique_ptr<DownloadWaitHandler>*)(this + 12);
                local_48 = (DownloadWaitHandler*)**local_78;
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = (Array<shared_ptr<StructType>>*)(this + 9);
                    local_50 = pCVar4;
                    do {
                        if (*(int*)((long)&this[6]._vptr + 4) == 0)
                            break;
                        if (local_48->CanCheck(local_34)) {
                            new (local_68) shared_ptr();
                            uVar12 = local_34;
                            pCVar3 = local_58->_vptr;
                            uVar9 = local_50->GetPrefetchPriority();
                            puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 64))(pCVar3, local_68, local_50,
                                                                                        uVar12, uVar9, 1);
                            if (puVar8 == DataStatus::READY) {
                                MakeSharedPool<StructType, 1024>::MakeShared<BaseTemplateConfigTypeList<StructType>*&,
                                                                             unsigned int&>(
                                    (BaseTemplateConfigTypeList<StructType>**)&local_90, (unsigned int*)local_58);
                                plVar10 = (long*)local_90.operator->();
                                **local_68;
                                puVar8 = (uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10);
                                if (puVar8 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar8;
                                } else {
                                    plVar10 = (long*)local_90.operator->();
                                    (**(void (**)(...))(*plVar10 + 24))(plVar10);
                                    puVar8 = (uint8_t*)(**(void (**)(...))(local_58->_vptr->_dtor + 72))();
                                    if (puVar8 == DataStatus::READY) {
                                        this_01 = (shared_ptr<StructType>*)(*local_70)[(unsigned long)local_34];
                                        *this_01 = local_90;
                                        piVar1 = (int*)((long)&this[7]._vptr + 4);
                                        *piVar1 = *piVar1 + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                if (bVar5)
                                    goto LAB_1005eeb4b;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005eeb4b:
                                bVar5 = true;
                            }
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_1005eecba;
                            }
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_1005eecba:
                if (!bVar5) {
                    return local_40;
                }
                if (*(unsigned int*)((long)&this[7]._vptr + 4) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(void (**)(...))((this[1]._vptr)->_dtor + 80))();
                *(uint32_t*)&this[6]._vptr = 2;
                local_78->reset(nullptr);
                pCVar11 = (CacheReset__3*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->CacheReset__3 = pCVar11;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005eed60
    uint8_t* ConfigTypeLoadAllContainer<StructType>::List(int arg1, const DataStatus** arg2) {
        int* piVar1;

        int iVar2 = *(int*)&this[6]._vptr;
        if (iVar2 == 2) {
            piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
            *piVar1 = *piVar1 + 1;
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar2 != 1) {
                return PTR_NullConfigType_100ee64d8;
            }
        }
        return (uint8_t*)(*((this + 9)))[(long)arg1];
    }

    // 0x1005eee10
    ConfigTypeLoadAllContainer<StructType>::~ConfigTypeLoadAllContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8208;
        ((this + 12))->~unique_ptr();
        ((this + 9))->~Array();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005f4820
    ConfigTypeLoadAllContainer<AchievementType>::ConfigTypeLoadAllContainer(
        BaseTemplateConfigTypeList<AchievementType>& baseTemplateConfigTypeList,
        Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
        const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<AchievementType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                                   js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8250;
        new ((this + 9)) Array<shared_ptr<AchievementType>>();
        ((this + 12))->unique_ptr<true, void>();
    }

    // 0x1005f48e0
    uint8_t* ConfigTypeLoadAllContainer<AchievementType>::LoadList() {
        int* piVar1;
        int iVar2;
        ConfigTypeLoadAllContainer<AchievementType> _vtbl* pCVar3;
        ConfigTypeLoadAllContainer<AchievementType> _vtbl* pCVar4;
        bool bVar5;
        Js5Index* this_00;
        ConfigTypeLoadAllContainer<AchievementType>* pCVar6;
        unsigned int arg1;
        unsigned int arg2;
        uint8_t* puVar8;
        uint64_t uVar9;
        long* plVar10;
        shared_ptr<AchievementType>* this_01;
        CacheReset__3* pCVar11;
        uint8_t* in_RCX;
        unsigned int uVar12;
        ReturnValue local_90;
        uint64_t local_80;
        unique_ptr<DownloadWaitHandler>* local_78;
        Array<shared_ptr<AchievementType>>* local_70;
        Js5Index* local_68[2];
        ConfigTypeLoadAllContainer<AchievementType>* local_58;
        ConfigTypeLoadAllContainer<AchievementType> _vtbl* local_50;
        DownloadWaitHandler* local_48;
        uint8_t* local_40;
        unsigned int local_38;
        unsigned int local_34;

        if (*(int*)&this[6]._vptr != 2) {
            pCVar3 = this[2]._vptr;
            local_58 = this + 1;
            local_38 = this[1]._vptr->GetStreamCountLastMix();
            *(unsigned int*)&this[8]._vptr = local_38;
            if (*(int*)&this[6]._vptr == 0) {
                ((this + 9))->set_max_size((unsigned long)local_38, 0);
                local_68[0] = nullptr;
                local_40 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, local_68, this[3]._vptr);
                if (local_40 != DataStatus::READY) {
                    return local_40;
                }
                local_50 = pCVar3;
                local_90 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_38);
                (*((this + 12))) = local_90;
                local_48 = (DownloadWaitHandler*)*(*((this + 12)));
                pCVar6 = local_58;
                if (local_38 != 0) {
                    uVar12 = 0;
                    do {
                        this_00 = local_68[0];
                        arg1 = pCVar6->_vptr->GetClientGroupID(uVar12);
                        arg2 = pCVar6->_vptr->GetClientFileID(uVar12);
                        if (!(this_00->DoesFileExist(arg1, arg2))) {
                            piVar1 = (int*)((long)&this[7]._vptr + 4);
                            *piVar1 = *piVar1 + 1;
                        } else {
                            local_48->SetExists(uVar12);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_38);
                }
                *(uint32_t*)&this[6]._vptr = 1;
                iVar2 = *(int*)&this[6]._vptr;
                pCVar3 = local_50;
            } else {
                iVar2 = *(int*)&this[6]._vptr;
                local_40 = in_RCX;
            }
            if (iVar2 == 1) {
                local_80 = 0;
                pCVar4 = this[3]._vptr;
                puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 24))(pCVar3, &local_80, pCVar4);
                if (puVar8 != DataStatus::READY) {
                    return puVar8;
                }
                local_78 = (unique_ptr<DownloadWaitHandler>*)(this + 12);
                local_48 = (DownloadWaitHandler*)**local_78;
                local_34 = 0;
                bVar5 = true;
                if (local_38 != 0) {
                    local_70 = (Array<shared_ptr<AchievementType>>*)(this + 9);
                    local_50 = pCVar4;
                    do {
                        if (*(int*)((long)&this[6]._vptr + 4) == 0)
                            break;
                        if (local_48->CanCheck(local_34)) {
                            new (local_68) shared_ptr();
                            uVar12 = local_34;
                            pCVar3 = local_58->_vptr;
                            uVar9 = local_50->GetPrefetchPriority();
                            puVar8 = (uint8_t*)(**(void (**)(...))(pCVar3->_dtor + 64))(pCVar3, local_68, local_50,
                                                                                        uVar12, uVar9, 1);
                            if (puVar8 == DataStatus::READY) {
                                MakeSharedPool<AchievementType, 256>::MakeShared<
                                    BaseTemplateConfigTypeList<AchievementType>*&, unsigned int&>(
                                    (BaseTemplateConfigTypeList<AchievementType>**)&local_90, (unsigned int*)local_58);
                                plVar10 = (long*)local_90.operator->();
                                **local_68;
                                puVar8 = (uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10);
                                if (puVar8 == DataStatus::NOTLOADED) {
                                    bVar5 = false;
                                    local_40 = puVar8;
                                } else {
                                    plVar10 = (long*)local_90.operator->();
                                    (**(void (**)(...))(*plVar10 + 24))(plVar10);
                                    puVar8 = (uint8_t*)(**(void (**)(...))(local_58->_vptr->_dtor + 72))();
                                    if (puVar8 == DataStatus::READY) {
                                        this_01 = (shared_ptr<AchievementType>*)(*local_70)[(unsigned long)local_34];
                                        *this_01 = local_90;
                                        piVar1 = (int*)((long)&this[7]._vptr + 4);
                                        *piVar1 = *piVar1 + 1;
                                        bVar5 = true;
                                        local_48->Completed(local_34);
                                    } else {
                                        local_40 = DataStatus::NOTLOADED;
                                        bVar5 = false;
                                    }
                                }
                                if (bVar5)
                                    goto LAB_1005f4a9b;
                                bVar5 = false;
                            } else {
                                local_48->Request(local_34);
                            LAB_1005f4a9b:
                                bVar5 = true;
                            }
                            if (!bVar5) {
                                bVar5 = false;
                                goto LAB_1005f4c0a;
                            }
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < local_38);
                    bVar5 = true;
                }
            LAB_1005f4c0a:
                if (!bVar5) {
                    return local_40;
                }
                if (*(unsigned int*)((long)&this[7]._vptr + 4) < local_38) {
                    return DataStatus::NOTLOADED;
                }
                (**(void (**)(...))((this[1]._vptr)->_dtor + 80))();
                *(uint32_t*)&this[6]._vptr = 2;
                local_78->reset(nullptr);
                pCVar11 = (CacheReset__3*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->CacheReset__3 = pCVar11;
            }
        }
        return DataStatus::READY;
    }

    // 0x1005f4cb0
    uint8_t* ConfigTypeLoadAllContainer<AchievementType>::List(int arg1, const DataStatus** arg2) {
        int* piVar1;

        int iVar2 = *(int*)&this[6]._vptr;
        if (iVar2 == 2) {
            piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
            *piVar1 = *piVar1 + 1;
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::READY;
            }
        } else {
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)DataStatus::NOTLOADED;
            }
            if (iVar2 != 1) {
                return PTR_NullConfigType_100ee6520;
            }
        }
        return (uint8_t*)(*((this + 9)))[(long)arg1];
    }

    // 0x1005f4d60
    ConfigTypeLoadAllContainer<AchievementType>::~ConfigTypeLoadAllContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8250;
        ((this + 12))->~unique_ptr();
        ((this + 9))->~Array();
        ((this + 5))->~AutoSingleton();
    }

} // namespace jag::game

namespace jag {
    // 0x1001434b0
    ref_counter_shared<oldscape::configdecoder::OldscapeVarTypeList>::ref_counter_shared(
        unsigned long arg1, oldscape::configdecoder::OldscapeVarTypeList* oldscapeVarTypeList)
        : ref_counter_base() {}

    // 0x1001434f0
    void ref_counter_shared<oldscape::configdecoder::OldscapeVarTypeList>::DeleteData() {
        long lVar1;
        ref_counter_shared<oldscape::midi2::LoadSongTask> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<oldscape::midi2::LoadSongTask> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 128;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1001435c0
    Array<oldscape::graphics::Pix8>* placement_new<Array<oldscape::graphics::Pix8>, Array<oldscape::graphics::Pix8>>(
        void* arg1, Array<oldscape::graphics::Pix8>&& pix8s) {
        new (arg1) Array<oldscape::graphics::Pix8>(pix8s);
        return arg1;
    }

    // 0x1001435e0
    ref_counter_shared<Array<oldscape::graphics::Pix8>>*
    placement_new<ref_counter_shared<Array<oldscape::graphics::Pix8>>, int, Array<oldscape::graphics::Pix8>*&>(
        void* arg1, int&& arg2, Array<oldscape::graphics::Pix8>*& arg3) {
        new (arg1) ref_counter_shared<Array<oldscape::graphics::Pix8>>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100143670
    ref_counter_shared<Array<oldscape::graphics::Pix8>>::ref_counter_shared(unsigned long arg1,
                                                                            Array<oldscape::graphics::Pix8>* pix8s)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee73f8 + 16;
        *(unsigned long*)(this + 16) = arg1;
        *(Array<oldscape::graphics::Pix8>**)(this + 24) = pix8s;
    }

    // 0x1001436b0
    void ref_counter_shared<Array<oldscape::graphics::Pix8>>::DeleteData() {
        unsigned long uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((Array<oldscape::graphics::Pix8>*)(*(long*)(this + 24) + lVar2))->~Array();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 24;
                } while (uVar1 < *(unsigned long*)(this + 16));
            }
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x100143700
    Array<oldscape::graphics::Pix32>* placement_new<Array<oldscape::graphics::Pix32>, Array<oldscape::graphics::Pix32>>(
        void* arg1, Array<oldscape::graphics::Pix32>&& pix32s) {
        new (arg1) Array<oldscape::graphics::Pix32>(pix32s);
        return arg1;
    }

    // 0x100143720
    ref_counter_shared<Array<oldscape::graphics::Pix32>>*
    placement_new<ref_counter_shared<Array<oldscape::graphics::Pix32>>, int, Array<oldscape::graphics::Pix32>*&>(
        void* arg1, int&& arg2, Array<oldscape::graphics::Pix32>*& arg3) {
        new (arg1) ref_counter_shared<Array<oldscape::graphics::Pix32>>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1001437b0
    ref_counter_shared<Array<oldscape::graphics::Pix32>>::ref_counter_shared(unsigned long arg1,
                                                                             Array<oldscape::graphics::Pix32>* pix32s)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7400 + 16;
        *(unsigned long*)(this + 16) = arg1;
        *(Array<oldscape::graphics::Pix32>**)(this + 24) = pix32s;
    }

    // 0x1001437f0
    void ref_counter_shared<Array<oldscape::graphics::Pix32>>::DeleteData() {
        unsigned long uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((Array<oldscape::graphics::Pix32>*)(*(long*)(this + 24) + lVar2))->~Array();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 24;
                } while (uVar1 < *(unsigned long*)(this + 16));
            }
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x100143840
    oldscape::dash3d::TextureCache*
    placement_new<oldscape::dash3d::TextureCache, oldscape::jagex3::Js5*&, oldscape::jagex3::Js5*&, int, float const&,
                  int>(void* arg1, oldscape::jagex3::Js5*& arg2, oldscape::jagex3::Js5*& arg3, int&& arg4,
                       const float& arg5, int&& arg6) {
        new (arg1) oldscape::dash3d::TextureCache(arg2, arg3, arg4, (double)*arg5, arg6);
        return arg1;
    }

    // 0x100143870
    ref_counter_shared<oldscape::dash3d::TextureCache>*
    placement_new<ref_counter_shared<oldscape::dash3d::TextureCache>, int, oldscape::dash3d::TextureCache*&>(
        void* arg1, int&& arg2, oldscape::dash3d::TextureCache*& arg3) {
        new (arg1) ref_counter_shared<oldscape::dash3d::TextureCache>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1001438a0
    ref_counter_shared<oldscape::dash3d::TextureCache>::ref_counter_shared(unsigned long arg1,
                                                                           oldscape::dash3d::TextureCache* textureCache)
        : ref_counter_base() {}

    // 0x1001438e0
    void ref_counter_shared<oldscape::dash3d::TextureCache>::DeleteData() {
        ref_counter_shared<oldscape::dash3d::TextureCache> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((TextureCache*)((long)&(this[3]._vptr)->_dtor + lVar2))->~TextureCache();
                    prVar1 = (ref_counter_shared<oldscape::dash3d::TextureCache> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 88;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag
