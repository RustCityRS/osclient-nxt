// libs/game/runetek5/config/ConfigTypeNoPreloadContainer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    template <typename...> // 30 instantiations, e.g. <AchievementType>, <BASType>, <CursorType>
    class ConfigTypeNoPreloadContainer {
    public:
        // virtual methods in vtable order
        virtual ~ConfigTypeNoPreloadContainer();
        virtual void CacheReset();
        virtual void CacheClean(unsigned int arg1);
        virtual void CacheResize(unsigned int arg1);
        virtual shared_ptr* List(int arg1, const DataStatus** arg2);
        virtual ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType>* DirectFetch(int arg1);
        ConfigTypeNoPreloadContainer(
            BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>& baseTemplateConfigTypeList,
            Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
            const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<VarType>& baseTemplateConfigTypeList,
                                     Js5ResourceProvider& js5ResourceProvider,
                                     const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                     unsigned int arg5);
        ConfigTypeLoadAllContainer<VarType>* DirectFetch(int arg1);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<SeqType>& baseTemplateConfigTypeList,
                                     Js5ResourceProvider& js5ResourceProvider,
                                     const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                     unsigned int arg5);
        ConfigTypeLoadAllContainer<SeqType>* DirectFetch(int arg1);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<ObjType>& baseTemplateConfigTypeList,
                                     Js5ResourceProvider& js5ResourceProvider,
                                     const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                     unsigned int arg5);
        ConfigTypeLoadAllContainer<ObjType>* DirectFetch(int arg1);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<NPCType>& baseTemplateConfigTypeList,
                                     Js5ResourceProvider& js5ResourceProvider,
                                     const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                     unsigned int arg5);
        ConfigTypeLoadAllContainer<NPCType>* DirectFetch(int arg1);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<LocType>& baseTemplateConfigTypeList,
                                     Js5ResourceProvider& js5ResourceProvider,
                                     const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                     unsigned int arg5);
        ConfigTypeLoadAllContainer<LocType>* DirectFetch(int arg1);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<ParamType>& baseTemplateConfigTypeList,
                                     Js5ResourceProvider& js5ResourceProvider,
                                     const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                     unsigned int arg5);
        ConfigTypeLoadAllContainer<ParamType>* DirectFetch(int arg1);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<DBRowType>& baseTemplateConfigTypeList,
                                     Js5ResourceProvider& js5ResourceProvider,
                                     const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                     unsigned int arg5);
        ConfigTypeLoadAllContainer<DBRowType>* DirectFetch(int arg1);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<DBTableType>& baseTemplateConfigTypeList,
                                     Js5ResourceProvider& js5ResourceProvider,
                                     const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                     unsigned int arg5);
        ConfigTypeLoadAllContainer<DBTableType>* DirectFetch(int arg1);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<InvType>& baseTemplateConfigTypeList,
                                     Js5ResourceProvider& js5ResourceProvider,
                                     const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                     unsigned int arg5);
        ConfigTypeLoadAllContainer<InvType>* DirectFetch(int arg1);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<VarBitType>& baseTemplateConfigTypeList,
                                     Js5ResourceProvider& js5ResourceProvider,
                                     const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                     unsigned int arg5);
        ConfigTypeLoadAllContainer<VarBitType>* DirectFetch(int arg1);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<BASType>& baseTemplateConfigTypeList,
                                     Js5ResourceProvider& js5ResourceProvider,
                                     const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                     unsigned int arg5);
        ConfigTypeLoadAllContainer<BASType>* DirectFetch(int arg1);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<FloorUnderlayType>& baseTemplateConfigTypeList,
                                     Js5ResourceProvider& js5ResourceProvider,
                                     const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                     unsigned int arg5);
        ConfigTypeLoadAllContainer<FloorUnderlayType>* DirectFetch(int arg1);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<FloorOverlayType>& baseTemplateConfigTypeList,
                                     Js5ResourceProvider& js5ResourceProvider,
                                     const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                     unsigned int arg5);
        ConfigTypeLoadAllContainer<FloorOverlayType>* DirectFetch(int arg1);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<HitmarkType>& baseTemplateConfigTypeList,
                                     Js5ResourceProvider& js5ResourceProvider,
                                     const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                     unsigned int arg5);
        ConfigTypeLoadAllContainer<HitmarkType>* DirectFetch(int arg1);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<HeadbarType>& baseTemplateConfigTypeList,
                                     Js5ResourceProvider& js5ResourceProvider,
                                     const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                     unsigned int arg5);
        ConfigTypeLoadAllContainer<HeadbarType>* DirectFetch(int arg1);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<IDKType>& baseTemplateConfigTypeList,
                                     Js5ResourceProvider& js5ResourceProvider,
                                     const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                     unsigned int arg5);
        ConfigTypeLoadAllContainer<IDKType>* DirectFetch(int arg1);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<MapElementType>& baseTemplateConfigTypeList,
                                     Js5ResourceProvider& js5ResourceProvider,
                                     const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                     unsigned int arg5);
        ConfigTypeLoadAllContainer<MapElementType>* DirectFetch(int arg1);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<MSIType>& baseTemplateConfigTypeList,
                                     Js5ResourceProvider& js5ResourceProvider,
                                     const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                     unsigned int arg5);
        ConfigTypeLoadAllContainer<MSIType>* DirectFetch(int arg1);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<QuestType>& baseTemplateConfigTypeList,
                                     Js5ResourceProvider& js5ResourceProvider,
                                     const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                     unsigned int arg5);
        ConfigTypeLoadAllContainer<QuestType>* DirectFetch(int arg1);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<SeqGroupType>& baseTemplateConfigTypeList,
                                     Js5ResourceProvider& js5ResourceProvider,
                                     const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                     unsigned int arg5);
        ConfigTypeLoadAllContainer<SeqGroupType>* DirectFetch(int arg1);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<LightType>& baseTemplateConfigTypeList,
                                     Js5ResourceProvider& js5ResourceProvider,
                                     const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                     unsigned int arg5);
        ConfigTypeLoadAllContainer<LightType>* DirectFetch(int arg1);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<SkyBoxType>& baseTemplateConfigTypeList,
                                     Js5ResourceProvider& js5ResourceProvider,
                                     const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                     unsigned int arg5);
        ConfigTypeLoadAllContainer<SkyBoxType>* DirectFetch(int arg1);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<WaterType>& baseTemplateConfigTypeList,
                                     Js5ResourceProvider& js5ResourceProvider,
                                     const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                     unsigned int arg5);
        ConfigTypeLoadAllContainer<WaterType>* DirectFetch(int arg1);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<CursorType>& baseTemplateConfigTypeList,
                                     Js5ResourceProvider& js5ResourceProvider,
                                     const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                     unsigned int arg5);
        ConfigTypeLoadAllContainer<CursorType>* DirectFetch(int arg1);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<WorldAreaType>& baseTemplateConfigTypeList,
                                     Js5ResourceProvider& js5ResourceProvider,
                                     const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                     unsigned int arg5);
        ConfigTypeLoadAllContainer<WorldAreaType>* DirectFetch(int arg1);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<EnumType>& baseTemplateConfigTypeList,
                                     Js5ResourceProvider& js5ResourceProvider,
                                     const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                     unsigned int arg5);
        ConfigTypeLoadAllContainer<EnumType>* DirectFetch(int arg1);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<EffectAnimType>& baseTemplateConfigTypeList,
                                     Js5ResourceProvider& js5ResourceProvider,
                                     const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                     unsigned int arg5);
        ConfigTypeLoadAllContainer<EffectAnimType>* DirectFetch(int arg1);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<StructType>& baseTemplateConfigTypeList,
                                     Js5ResourceProvider& js5ResourceProvider,
                                     const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                     unsigned int arg5);
        ConfigTypeLoadAllContainer<StructType>* DirectFetch(int arg1);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<AchievementType>& baseTemplateConfigTypeList,
                                     Js5ResourceProvider& js5ResourceProvider,
                                     const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                     unsigned int arg5);
        ConfigTypeLoadAllContainer<AchievementType>* DirectFetch(int arg1);
    };

    // 0x10013f740
    ConfigTypeNoPreloadContainer<oldscape::configdecoder::OldscapeVarType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>& baseTemplateConfigTypeList,
        Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
        const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>(
              baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        Js5ConfigGroup* js5ConfigGroup_00 = (Js5ConfigGroup*)(unsigned long)arg5;
        new ((this + 5)) LRUCache<oldscape::configdecoder::OldscapeVarType>(arg5, "LRUCache");
        (this[1]._vptr)->CacheResize = (CacheResize*)(this[1]._vptr)->CacheClean;
        js5ConfigGroup->GetTypeName(js5ConfigGroup_00);
        ((this + 5))->~AutoSingleton();
    }

    // 0x10013f850
    void ConfigTypeNoPreloadContainer<oldscape::configdecoder::OldscapeVarType>::CacheReset() {
        ((this + 5))->Reset();
    }

    // 0x10013f860
    void ConfigTypeNoPreloadContainer<oldscape::configdecoder::OldscapeVarType>::CacheClean(unsigned int arg1) {
        ((this + 5))->Clean((unsigned long)arg1);
    }

    // 0x10013f880
    void ConfigTypeNoPreloadContainer<oldscape::configdecoder::OldscapeVarType>::CacheResize(unsigned int arg1) {
        ((this + 5))->Resize(arg1);
    }

    // 0x10013f890
    shared_ptr* ConfigTypeNoPreloadContainer<oldscape::configdecoder::OldscapeVarType>::List(int arg1,
                                                                                             const DataStatus** arg2) {
        LoadList** ppLVar2;
        uint8_t uVar7;
        long* plVar11;
        uint64_t extraout_var;
        shared_ptr<oldscape::configdecoder::OldscapeVarType> local_48;

        int* piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
        *piVar1 = *piVar1 + 1;
        ConfigTypeNoPreloadContainer<oldscape::configdecoder::OldscapeVarType>* arg1_00 = this + 1;
        int local_34 = arg1;
        shared_ptr* psVar8 = (shared_ptr*)((this + 5))->Find((long)arg1);
        if (shared_ptr::operator_cast_to_bool(psVar8) != '\0') {
            ppLVar2 = &arg1_00->_vptr->LoadList;
            *(int*)ppLVar2 = *(int*)ppLVar2 + 1;
            if (arg2 == nullptr) {
                return psVar8;
            }
            *arg2 = (DataStatus*)DataStatus::READY;
            return psVar8;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        int iVar5 = local_34;
        ConfigTypeNoPreloadContainer<oldscape::configdecoder::OldscapeVarType> _vtbl* pCVar4 = this[1]._vptr;
        ConfigTypeNoPreloadContainer<oldscape::configdecoder::OldscapeVarType> _vtbl* this_00 = this[3]._vptr;
        uint64_t uVar9 = this_00->GetPrefetchPriority();
        DataStatus* pDVar10 =
            (DataStatus*)(**(void (**)(...))(pCVar4->_dtor + 64))(pCVar4, &local_58, this_00, iVar5, uVar9, 1);
        if (pDVar10 == (DataStatus*)DataStatus::NOTLOADED) {
            if (arg2 != nullptr) {
                *arg2 = pDVar10;
            }
            piVar1 = (int*)((long)&arg1_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
            psVar8 = (shared_ptr*)&oldscape::configdecoder::OldscapeVarType::NullConfigType;
            goto LAB_10013fa0f;
        }
        CacheReset** ppCVar3 = &arg1_00->_vptr->CacheReset;
        *(int*)ppCVar3 = *(int*)ppCVar3 + 1;
        oldscape::configdecoder::OldscapeVarType::MakeShared<
            BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>*&, unsigned int&>(
            &local_48, (BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>**)arg1_00, &local_34);
        if (pDVar10 == (DataStatus*)DataStatus::MISSING) {
        LAB_10013f98f:
            plVar11 = (long*)local_48.operator->();
            (**(void (**)(...))(*plVar11 + 24))(plVar11);
            uVar7 =
                (*((BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType> _vtbl*)arg1_00->_vptr->_dtor)
                      ->ListPostDecode)(arg1_00->_vptr, &local_48);
            if (arg2 != nullptr) {
                *arg2 = (DataStatus*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar7);
            }
            if ((DataStatus*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar7) != (DataStatus*)DataStatus::READY)
                goto LAB_10013f9ff;
            psVar8 = (shared_ptr*)((this + 5))->Put(local_48, 1, (long)local_34);
        } else {
            plVar11 = (long*)local_48.operator->();
            uVar9 = *local_58;
            if ((uint8_t*)(**(void (**)(...))(*plVar11 + 32))(plVar11, uVar9) != DataStatus::NOTLOADED)
                goto LAB_10013f98f;
            piVar1 = (int*)((long)&arg1_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
        LAB_10013f9ff:
            psVar8 = (shared_ptr*)&oldscape::configdecoder::OldscapeVarType::NullConfigType;
        }
    LAB_10013fa0f:
        return psVar8;
    }

    // 0x10013fa50
    ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType>*
    ConfigTypeNoPreloadContainer<oldscape::configdecoder::OldscapeVarType>::DirectFetch(int arg1) {
        new (this) shared_ptr(
            (shared_ptr<oldscape::dash3d::GroundDecor>*)&oldscape::configdecoder::OldscapeVarType::NullConfigType);
        return this;
    }

    // 0x10013fd40
    ConfigTypeNoPreloadContainer<oldscape::configdecoder::OldscapeVarType>::~ConfigTypeNoPreloadContainer() {
        ((this + 5))->~LRUCache();
    }

    // 0x1004d8550
    ConfigTypeNoPreloadContainer<VarType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList<VarType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<VarType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                           js5ConfigGroup) {
        Js5ConfigGroup* js5ConfigGroup_00 = (Js5ConfigGroup*)(unsigned long)arg5;
        new ((this + 5)) LRUCache<VarType>(arg5, "LRUCache");
        (this[1]._vptr)->CacheResize = (CacheResize*)(this[1]._vptr)->CacheClean;
        js5ConfigGroup->GetTypeName(js5ConfigGroup_00);
        ((this + 5))->~AutoSingleton();
    }

    // 0x1004d8660
    void ConfigTypeNoPreloadContainer<VarType>::CacheClean(unsigned int arg1) {
        ((this + 5))->Clean((unsigned long)arg1);
    }

    // 0x1004d8680
    void ConfigTypeNoPreloadContainer<VarType>::CacheResize(unsigned int arg1) {
        ((this + 5))->Resize(arg1);
    }

    // 0x1004d8690
    shared_ptr* ConfigTypeNoPreloadContainer<VarType>::List(int arg1, const DataStatus** arg2) {
        LoadList** ppLVar2;
        long* plVar10;
        shared_ptr<VarType> local_48;

        int* piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
        *piVar1 = *piVar1 + 1;
        ConfigTypeNoPreloadContainer<VarType>* arg2_00 = this + 1;
        shared_ptr* psVar7 = (shared_ptr*)((this + 5))->Find((long)arg1);
        if (shared_ptr::operator_cast_to_bool(psVar7) != '\0') {
            ppLVar2 = &arg2_00->_vptr->LoadList;
            *(int*)ppLVar2 = *(int*)ppLVar2 + 1;
            if (arg2 == nullptr) {
                return psVar7;
            }
            *arg2 = (DataStatus*)DataStatus::READY;
            return psVar7;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ConfigTypeNoPreloadContainer<VarType> _vtbl* pCVar4 = this[1]._vptr;
        ConfigTypeNoPreloadContainer<VarType> _vtbl* this_00 = this[3]._vptr;
        uint64_t uVar8 = this_00->GetPrefetchPriority();
        DataStatus* pDVar9 =
            (DataStatus*)(**(void (**)(...))(pCVar4->_dtor + 64))(pCVar4, &local_58, this_00, arg1, uVar8, 1);
        if (pDVar9 == (DataStatus*)DataStatus::NOTLOADED) {
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6578;
            goto LAB_1004d880f;
        }
        CacheReset** ppCVar3 = &arg2_00->_vptr->CacheReset;
        *(int*)ppCVar3 = *(int*)ppCVar3 + 1;
        MakeSharedPool<VarType, 5504>::MakeShared<BaseTemplateConfigTypeList<VarType>*&, int&>(
            (BaseTemplateConfigTypeList<VarType>**)&local_48, (int*)arg2_00);
        if (pDVar9 == (DataStatus*)DataStatus::MISSING) {
        LAB_1004d878f:
            plVar10 = (long*)local_48.operator->();
            (**(void (**)(...))(*plVar10 + 24))(plVar10);
            pDVar9 = (DataStatus*)(**(void (**)(...))(arg2_00->_vptr->_dtor + 72))(arg2_00->_vptr, &local_48);
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            if (pDVar9 != (DataStatus*)DataStatus::READY)
                goto LAB_1004d87ff;
            psVar7 = (shared_ptr*)((this + 5))->Put(local_48, 1, (long)arg1);
        } else {
            plVar10 = (long*)local_48.operator->();
            uVar8 = *local_58;
            if ((uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10, uVar8) != DataStatus::NOTLOADED)
                goto LAB_1004d878f;
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
        LAB_1004d87ff:
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6578;
        }
    LAB_1004d880f:
        return psVar7;
    }

    // 0x1004d8850
    ConfigTypeLoadAllContainer<VarType>* ConfigTypeNoPreloadContainer<VarType>::DirectFetch(int arg1) {
        new (this) shared_ptr(PTR_NullConfigType_100ee6578);
        return this;
    }

    // 0x1004d8a30
    ConfigTypeNoPreloadContainer<VarType>::~ConfigTypeNoPreloadContainer() {
        ((this + 5))->~LRUCache();
    }

    // 0x1004ea7f0
    ConfigTypeNoPreloadContainer<SeqType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList<SeqType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<SeqType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                           js5ConfigGroup) {
        Js5ConfigGroup* js5ConfigGroup_00 = (Js5ConfigGroup*)(unsigned long)arg5;
        new ((this + 5)) LRUCache<SeqType>(arg5, "LRUCache");
        (this[1]._vptr)->CacheResize = (CacheResize*)(this[1]._vptr)->CacheClean;
        js5ConfigGroup->GetTypeName(js5ConfigGroup_00);
        ((this + 5))->~AutoSingleton();
    }

    // 0x1004ea900
    void ConfigTypeNoPreloadContainer<SeqType>::CacheClean(unsigned int arg1) {
        ((this + 5))->Clean((unsigned long)arg1);
    }

    // 0x1004ea920
    void ConfigTypeNoPreloadContainer<SeqType>::CacheResize(unsigned int arg1) {
        ((this + 5))->Resize(arg1);
    }

    // 0x1004ea930
    shared_ptr* ConfigTypeNoPreloadContainer<SeqType>::List(int arg1, const DataStatus** arg2) {
        LoadList** ppLVar2;
        long* plVar10;
        shared_ptr<SeqType> local_48;

        int* piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
        *piVar1 = *piVar1 + 1;
        ConfigTypeNoPreloadContainer<SeqType>* arg2_00 = this + 1;
        shared_ptr* psVar7 = (shared_ptr*)((this + 5))->Find((long)arg1);
        if (shared_ptr::operator_cast_to_bool(psVar7) != '\0') {
            ppLVar2 = &arg2_00->_vptr->LoadList;
            *(int*)ppLVar2 = *(int*)ppLVar2 + 1;
            if (arg2 == nullptr) {
                return psVar7;
            }
            *arg2 = (DataStatus*)DataStatus::READY;
            return psVar7;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ConfigTypeNoPreloadContainer<SeqType> _vtbl* pCVar4 = this[1]._vptr;
        ConfigTypeNoPreloadContainer<SeqType> _vtbl* this_00 = this[3]._vptr;
        uint64_t uVar8 = this_00->GetPrefetchPriority();
        DataStatus* pDVar9 =
            (DataStatus*)(**(void (**)(...))(pCVar4->_dtor + 64))(pCVar4, &local_58, this_00, arg1, uVar8, 1);
        if (pDVar9 == (DataStatus*)DataStatus::NOTLOADED) {
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6570;
            goto LAB_1004eaaaf;
        }
        CacheReset** ppCVar3 = &arg2_00->_vptr->CacheReset;
        *(int*)ppCVar3 = *(int*)ppCVar3 + 1;
        MakeSharedPool<SeqType, 96>::MakeShared<BaseTemplateConfigTypeList<SeqType>*&, int&>(
            (BaseTemplateConfigTypeList<SeqType>**)&local_48, (int*)arg2_00);
        if (pDVar9 == (DataStatus*)DataStatus::MISSING) {
        LAB_1004eaa2f:
            plVar10 = (long*)local_48.operator->();
            (**(void (**)(...))(*plVar10 + 24))(plVar10);
            pDVar9 = (DataStatus*)(**(void (**)(...))(arg2_00->_vptr->_dtor + 72))(arg2_00->_vptr, &local_48);
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            if (pDVar9 != (DataStatus*)DataStatus::READY)
                goto LAB_1004eaa9f;
            psVar7 = (shared_ptr*)((this + 5))->Put(local_48, 1, (long)arg1);
        } else {
            plVar10 = (long*)local_48.operator->();
            uVar8 = *local_58;
            if ((uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10, uVar8) != DataStatus::NOTLOADED)
                goto LAB_1004eaa2f;
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
        LAB_1004eaa9f:
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6570;
        }
    LAB_1004eaaaf:
        return psVar7;
    }

    // 0x1004eaaf0
    ConfigTypeLoadAllContainer<SeqType>* ConfigTypeNoPreloadContainer<SeqType>::DirectFetch(int arg1) {
        new (this) shared_ptr(PTR_NullConfigType_100ee6570);
        return this;
    }

    // 0x1004eac50
    ConfigTypeNoPreloadContainer<SeqType>::~ConfigTypeNoPreloadContainer() {
        ((this + 5))->~LRUCache();
    }

    // 0x1004f7ce0
    ConfigTypeNoPreloadContainer<ObjType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList<ObjType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<ObjType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                           js5ConfigGroup) {
        Js5ConfigGroup* js5ConfigGroup_00 = (Js5ConfigGroup*)(unsigned long)arg5;
        new ((this + 5)) LRUCache<ObjType>(arg5, "LRUCache");
        (this[1]._vptr)->CacheResize = (CacheResize*)(this[1]._vptr)->CacheClean;
        js5ConfigGroup->GetTypeName(js5ConfigGroup_00);
        ((this + 5))->~AutoSingleton();
    }

    // 0x1004f7df0
    void ConfigTypeNoPreloadContainer<ObjType>::CacheClean(unsigned int arg1) {
        ((this + 5))->Clean((unsigned long)arg1);
    }

    // 0x1004f7e10
    void ConfigTypeNoPreloadContainer<ObjType>::CacheResize(unsigned int arg1) {
        ((this + 5))->Resize(arg1);
    }

    // 0x1004f7e20
    shared_ptr* ConfigTypeNoPreloadContainer<ObjType>::List(int arg1, const DataStatus** arg2) {
        LoadList** ppLVar2;
        long* plVar10;
        shared_ptr<ObjType> local_48;

        int* piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
        *piVar1 = *piVar1 + 1;
        ConfigTypeNoPreloadContainer<ObjType>* arg2_00 = this + 1;
        shared_ptr* psVar7 = (shared_ptr*)((this + 5))->Find((long)arg1);
        if (shared_ptr::operator_cast_to_bool(psVar7) != '\0') {
            ppLVar2 = &arg2_00->_vptr->LoadList;
            *(int*)ppLVar2 = *(int*)ppLVar2 + 1;
            if (arg2 == nullptr) {
                return psVar7;
            }
            *arg2 = (DataStatus*)DataStatus::READY;
            return psVar7;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ConfigTypeNoPreloadContainer<ObjType> _vtbl* pCVar4 = this[1]._vptr;
        ConfigTypeNoPreloadContainer<ObjType> _vtbl* this_00 = this[3]._vptr;
        uint64_t uVar8 = this_00->GetPrefetchPriority();
        DataStatus* pDVar9 =
            (DataStatus*)(**(void (**)(...))(pCVar4->_dtor + 64))(pCVar4, &local_58, this_00, arg1, uVar8, 1);
        if (pDVar9 == (DataStatus*)DataStatus::NOTLOADED) {
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6568;
            goto LAB_1004f7f9f;
        }
        CacheReset** ppCVar3 = &arg2_00->_vptr->CacheReset;
        *(int*)ppCVar3 = *(int*)ppCVar3 + 1;
        MakeSharedPool<ObjType, 96>::MakeShared<BaseTemplateConfigTypeList<ObjType>*&, int&>(
            (BaseTemplateConfigTypeList<ObjType>**)&local_48, (int*)arg2_00);
        if (pDVar9 == (DataStatus*)DataStatus::MISSING) {
        LAB_1004f7f1f:
            plVar10 = (long*)local_48.operator->();
            (**(void (**)(...))(*plVar10 + 24))(plVar10);
            pDVar9 = (DataStatus*)(**(void (**)(...))(arg2_00->_vptr->_dtor + 72))(arg2_00->_vptr, &local_48);
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            if (pDVar9 != (DataStatus*)DataStatus::READY)
                goto LAB_1004f7f8f;
            psVar7 = (shared_ptr*)((this + 5))->Put(local_48, 1, (long)arg1);
        } else {
            plVar10 = (long*)local_48.operator->();
            uVar8 = *local_58;
            if ((uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10, uVar8) != DataStatus::NOTLOADED)
                goto LAB_1004f7f1f;
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
        LAB_1004f7f8f:
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6568;
        }
    LAB_1004f7f9f:
        return psVar7;
    }

    // 0x1004f7fe0
    ConfigTypeLoadAllContainer<ObjType>* ConfigTypeNoPreloadContainer<ObjType>::DirectFetch(int arg1) {
        new (this) shared_ptr(PTR_NullConfigType_100ee6568);
        return this;
    }

    // 0x1004f8140
    ConfigTypeNoPreloadContainer<ObjType>::~ConfigTypeNoPreloadContainer() {
        ((this + 5))->~LRUCache();
    }

    // 0x10050ef90
    ConfigTypeNoPreloadContainer<NPCType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList<NPCType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<NPCType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                           js5ConfigGroup) {
        Js5ConfigGroup* js5ConfigGroup_00 = (Js5ConfigGroup*)(unsigned long)arg5;
        new ((this + 5)) LRUCache<NPCType>(arg5, "LRUCache");
        (this[1]._vptr)->CacheResize = (CacheResize*)(this[1]._vptr)->CacheClean;
        js5ConfigGroup->GetTypeName(js5ConfigGroup_00);
        ((this + 5))->~AutoSingleton();
    }

    // 0x10050f0a0
    void ConfigTypeNoPreloadContainer<NPCType>::CacheClean(unsigned int arg1) {
        ((this + 5))->Clean((unsigned long)arg1);
    }

    // 0x10050f0c0
    void ConfigTypeNoPreloadContainer<NPCType>::CacheResize(unsigned int arg1) {
        ((this + 5))->Resize(arg1);
    }

    // 0x10050f0d0
    shared_ptr* ConfigTypeNoPreloadContainer<NPCType>::List(int arg1, const DataStatus** arg2) {
        LoadList** ppLVar2;
        long* plVar10;
        shared_ptr<NPCType> local_48;

        int* piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
        *piVar1 = *piVar1 + 1;
        ConfigTypeNoPreloadContainer<NPCType>* arg2_00 = this + 1;
        shared_ptr* psVar7 = (shared_ptr*)((this + 5))->Find((long)arg1);
        if (shared_ptr::operator_cast_to_bool(psVar7) != '\0') {
            ppLVar2 = &arg2_00->_vptr->LoadList;
            *(int*)ppLVar2 = *(int*)ppLVar2 + 1;
            if (arg2 == nullptr) {
                return psVar7;
            }
            *arg2 = (DataStatus*)DataStatus::READY;
            return psVar7;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ConfigTypeNoPreloadContainer<NPCType> _vtbl* pCVar4 = this[1]._vptr;
        ConfigTypeNoPreloadContainer<NPCType> _vtbl* this_00 = this[3]._vptr;
        uint64_t uVar8 = this_00->GetPrefetchPriority();
        DataStatus* pDVar9 =
            (DataStatus*)(**(void (**)(...))(pCVar4->_dtor + 64))(pCVar4, &local_58, this_00, arg1, uVar8, 1);
        if (pDVar9 == (DataStatus*)DataStatus::NOTLOADED) {
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6560;
            goto LAB_10050f24f;
        }
        CacheReset** ppCVar3 = &arg2_00->_vptr->CacheReset;
        *(int*)ppCVar3 = *(int*)ppCVar3 + 1;
        MakeSharedPool<NPCType, 216>::MakeShared<BaseTemplateConfigTypeList<NPCType>*&, int&>(
            (BaseTemplateConfigTypeList<NPCType>**)&local_48, (int*)arg2_00);
        if (pDVar9 == (DataStatus*)DataStatus::MISSING) {
        LAB_10050f1cf:
            plVar10 = (long*)local_48.operator->();
            (**(void (**)(...))(*plVar10 + 24))(plVar10);
            pDVar9 = (DataStatus*)(**(void (**)(...))(arg2_00->_vptr->_dtor + 72))(arg2_00->_vptr, &local_48);
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            if (pDVar9 != (DataStatus*)DataStatus::READY)
                goto LAB_10050f23f;
            psVar7 = (shared_ptr*)((this + 5))->Put(local_48, 1, (long)arg1);
        } else {
            plVar10 = (long*)local_48.operator->();
            uVar8 = *local_58;
            if ((uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10, uVar8) != DataStatus::NOTLOADED)
                goto LAB_10050f1cf;
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
        LAB_10050f23f:
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6560;
        }
    LAB_10050f24f:
        return psVar7;
    }

    // 0x10050f290
    ConfigTypeLoadAllContainer<NPCType>* ConfigTypeNoPreloadContainer<NPCType>::DirectFetch(int arg1) {
        new (this) shared_ptr(PTR_NullConfigType_100ee6560);
        return this;
    }

    // 0x10050f3f0
    ConfigTypeNoPreloadContainer<NPCType>::~ConfigTypeNoPreloadContainer() {
        ((this + 5))->~LRUCache();
    }

    // 0x100519e90
    ConfigTypeNoPreloadContainer<LocType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList<LocType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<LocType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                           js5ConfigGroup) {
        Js5ConfigGroup* js5ConfigGroup_00 = (Js5ConfigGroup*)(unsigned long)arg5;
        new ((this + 5)) LRUCache<LocType>(arg5, "LRUCache");
        (this[1]._vptr)->CacheResize = (CacheResize*)(this[1]._vptr)->CacheClean;
        js5ConfigGroup->GetTypeName(js5ConfigGroup_00);
        ((this + 5))->~AutoSingleton();
    }

    // 0x100519fa0
    void ConfigTypeNoPreloadContainer<LocType>::CacheClean(unsigned int arg1) {
        ((this + 5))->Clean((unsigned long)arg1);
    }

    // 0x100519fc0
    void ConfigTypeNoPreloadContainer<LocType>::CacheResize(unsigned int arg1) {
        ((this + 5))->Resize(arg1);
    }

    // 0x100519fd0
    shared_ptr* ConfigTypeNoPreloadContainer<LocType>::List(int arg1, const DataStatus** arg2) {
        LoadList** ppLVar2;
        long* plVar10;
        shared_ptr<LocType> local_48;

        int* piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
        *piVar1 = *piVar1 + 1;
        ConfigTypeNoPreloadContainer<LocType>* arg2_00 = this + 1;
        shared_ptr* psVar7 = (shared_ptr*)((this + 5))->Find((long)arg1);
        if (shared_ptr::operator_cast_to_bool(psVar7) != '\0') {
            ppLVar2 = &arg2_00->_vptr->LoadList;
            *(int*)ppLVar2 = *(int*)ppLVar2 + 1;
            if (arg2 == nullptr) {
                return psVar7;
            }
            *arg2 = (DataStatus*)DataStatus::READY;
            return psVar7;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ConfigTypeNoPreloadContainer<LocType> _vtbl* pCVar4 = this[1]._vptr;
        ConfigTypeNoPreloadContainer<LocType> _vtbl* this_00 = this[3]._vptr;
        uint64_t uVar8 = this_00->GetPrefetchPriority();
        DataStatus* pDVar9 =
            (DataStatus*)(**(void (**)(...))(pCVar4->_dtor + 64))(pCVar4, &local_58, this_00, arg1, uVar8, 1);
        if (pDVar9 == (DataStatus*)DataStatus::NOTLOADED) {
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6550;
            goto LAB_10051a14f;
        }
        CacheReset** ppCVar3 = &arg2_00->_vptr->CacheReset;
        *(int*)ppCVar3 = *(int*)ppCVar3 + 1;
        MakeSharedPool<LocType, 256>::MakeShared<BaseTemplateConfigTypeList<LocType>*&, int&>(
            (BaseTemplateConfigTypeList<LocType>**)&local_48, (int*)arg2_00);
        if (pDVar9 == (DataStatus*)DataStatus::MISSING) {
        LAB_10051a0cf:
            plVar10 = (long*)local_48.operator->();
            (**(void (**)(...))(*plVar10 + 24))(plVar10);
            pDVar9 = (DataStatus*)(**(void (**)(...))(arg2_00->_vptr->_dtor + 72))(arg2_00->_vptr, &local_48);
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            if (pDVar9 != (DataStatus*)DataStatus::READY)
                goto LAB_10051a13f;
            psVar7 = (shared_ptr*)((this + 5))->Put(local_48, 1, (long)arg1);
        } else {
            plVar10 = (long*)local_48.operator->();
            uVar8 = *local_58;
            if ((uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10, uVar8) != DataStatus::NOTLOADED)
                goto LAB_10051a0cf;
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
        LAB_10051a13f:
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6550;
        }
    LAB_10051a14f:
        return psVar7;
    }

    // 0x10051a190
    ConfigTypeLoadAllContainer<LocType>* ConfigTypeNoPreloadContainer<LocType>::DirectFetch(int arg1) {
        new (this) shared_ptr(PTR_NullConfigType_100ee6550);
        return this;
    }

    // 0x10051a2f0
    ConfigTypeNoPreloadContainer<LocType>::~ConfigTypeNoPreloadContainer() {
        ((this + 5))->~LRUCache();
    }

    // 0x100571910
    ConfigTypeNoPreloadContainer<ParamType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList<ParamType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<ParamType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                             js5ConfigGroup) {
        Js5ConfigGroup* js5ConfigGroup_00 = (Js5ConfigGroup*)(unsigned long)arg5;
        new ((this + 5)) LRUCache<ParamType>(arg5, "LRUCache");
        (this[1]._vptr)->CacheResize = (CacheResize*)(this[1]._vptr)->CacheClean;
        js5ConfigGroup->GetTypeName(js5ConfigGroup_00);
        ((this + 5))->~AutoSingleton();
    }

    // 0x100571a20
    void ConfigTypeNoPreloadContainer<ParamType>::CacheClean(unsigned int arg1) {
        ((this + 5))->Clean((unsigned long)arg1);
    }

    // 0x100571a40
    void ConfigTypeNoPreloadContainer<ParamType>::CacheResize(unsigned int arg1) {
        ((this + 5))->Resize(arg1);
    }

    // 0x100571a50
    shared_ptr* ConfigTypeNoPreloadContainer<ParamType>::List(int arg1, const DataStatus** arg2) {
        LoadList** ppLVar2;
        long* plVar10;
        shared_ptr<ParamType> local_48;

        int* piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
        *piVar1 = *piVar1 + 1;
        ConfigTypeNoPreloadContainer<ParamType>* arg2_00 = this + 1;
        shared_ptr* psVar7 = (shared_ptr*)((this + 5))->Find((long)arg1);
        if (shared_ptr::operator_cast_to_bool(psVar7) != '\0') {
            ppLVar2 = &arg2_00->_vptr->LoadList;
            *(int*)ppLVar2 = *(int*)ppLVar2 + 1;
            if (arg2 == nullptr) {
                return psVar7;
            }
            *arg2 = (DataStatus*)DataStatus::READY;
            return psVar7;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ConfigTypeNoPreloadContainer<ParamType> _vtbl* pCVar4 = this[1]._vptr;
        ConfigTypeNoPreloadContainer<ParamType> _vtbl* this_00 = this[3]._vptr;
        uint64_t uVar8 = this_00->GetPrefetchPriority();
        DataStatus* pDVar9 =
            (DataStatus*)(**(void (**)(...))(pCVar4->_dtor + 64))(pCVar4, &local_58, this_00, arg1, uVar8, 1);
        if (pDVar9 == (DataStatus*)DataStatus::NOTLOADED) {
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6598;
            goto LAB_100571bcf;
        }
        CacheReset** ppCVar3 = &arg2_00->_vptr->CacheReset;
        *(int*)ppCVar3 = *(int*)ppCVar3 + 1;
        MakeSharedPool<ParamType, 640>::MakeShared<BaseTemplateConfigTypeList<ParamType>*&, int&>(
            (BaseTemplateConfigTypeList<ParamType>**)&local_48, (int*)arg2_00);
        if (pDVar9 == (DataStatus*)DataStatus::MISSING) {
        LAB_100571b4f:
            plVar10 = (long*)local_48.operator->();
            (**(void (**)(...))(*plVar10 + 24))(plVar10);
            pDVar9 = (DataStatus*)(**(void (**)(...))(arg2_00->_vptr->_dtor + 72))(arg2_00->_vptr, &local_48);
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            if (pDVar9 != (DataStatus*)DataStatus::READY)
                goto LAB_100571bbf;
            psVar7 = (shared_ptr*)((this + 5))->Put(local_48, 1, (long)arg1);
        } else {
            plVar10 = (long*)local_48.operator->();
            uVar8 = *local_58;
            if ((uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10, uVar8) != DataStatus::NOTLOADED)
                goto LAB_100571b4f;
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
        LAB_100571bbf:
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6598;
        }
    LAB_100571bcf:
        return psVar7;
    }

    // 0x100571c10
    ConfigTypeLoadAllContainer<ParamType>* ConfigTypeNoPreloadContainer<ParamType>::DirectFetch(int arg1) {
        new (this) shared_ptr(PTR_NullConfigType_100ee6598);
        return this;
    }

    // 0x100571d70
    ConfigTypeNoPreloadContainer<ParamType>::~ConfigTypeNoPreloadContainer() {
        ((this + 5))->~LRUCache();
    }

    // 0x1005772f0
    ConfigTypeNoPreloadContainer<DBRowType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList<DBRowType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<DBRowType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                             js5ConfigGroup) {
        Js5ConfigGroup* js5ConfigGroup_00 = (Js5ConfigGroup*)(unsigned long)arg5;
        new ((this + 5)) LRUCache<DBRowType>(arg5, "LRUCache");
        (this[1]._vptr)->CacheResize = (CacheResize*)(this[1]._vptr)->CacheClean;
        js5ConfigGroup->GetTypeName(js5ConfigGroup_00);
        ((this + 5))->~AutoSingleton();
    }

    // 0x100577400
    void ConfigTypeNoPreloadContainer<DBRowType>::CacheClean(unsigned int arg1) {
        ((this + 5))->Clean((unsigned long)arg1);
    }

    // 0x100577420
    void ConfigTypeNoPreloadContainer<DBRowType>::CacheResize(unsigned int arg1) {
        ((this + 5))->Resize(arg1);
    }

    // 0x100577430
    shared_ptr* ConfigTypeNoPreloadContainer<DBRowType>::List(int arg1, const DataStatus** arg2) {
        LoadList** ppLVar2;
        long* plVar10;
        shared_ptr<DBRowType> local_48;

        int* piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
        *piVar1 = *piVar1 + 1;
        ConfigTypeNoPreloadContainer<DBRowType>* arg2_00 = this + 1;
        shared_ptr* psVar7 = (shared_ptr*)((this + 5))->Find((long)arg1);
        if (shared_ptr::operator_cast_to_bool(psVar7) != '\0') {
            ppLVar2 = &arg2_00->_vptr->LoadList;
            *(int*)ppLVar2 = *(int*)ppLVar2 + 1;
            if (arg2 == nullptr) {
                return psVar7;
            }
            *arg2 = (DataStatus*)DataStatus::READY;
            return psVar7;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ConfigTypeNoPreloadContainer<DBRowType> _vtbl* pCVar4 = this[1]._vptr;
        ConfigTypeNoPreloadContainer<DBRowType> _vtbl* this_00 = this[3]._vptr;
        uint64_t uVar8 = this_00->GetPrefetchPriority();
        DataStatus* pDVar9 =
            (DataStatus*)(**(void (**)(...))(pCVar4->_dtor + 64))(pCVar4, &local_58, this_00, arg1, uVar8, 1);
        if (pDVar9 == (DataStatus*)DataStatus::NOTLOADED) {
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6588;
            goto LAB_1005775af;
        }
        CacheReset** ppCVar3 = &arg2_00->_vptr->CacheReset;
        *(int*)ppCVar3 = *(int*)ppCVar3 + 1;
        MakeSharedPool<DBRowType, 128>::MakeShared<BaseTemplateConfigTypeList<DBRowType>*&, int&>(
            (BaseTemplateConfigTypeList<DBRowType>**)&local_48, (int*)arg2_00);
        if (pDVar9 == (DataStatus*)DataStatus::MISSING) {
        LAB_10057752f:
            plVar10 = (long*)local_48.operator->();
            (**(void (**)(...))(*plVar10 + 24))(plVar10);
            pDVar9 = (DataStatus*)(**(void (**)(...))(arg2_00->_vptr->_dtor + 72))(arg2_00->_vptr, &local_48);
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            if (pDVar9 != (DataStatus*)DataStatus::READY)
                goto LAB_10057759f;
            psVar7 = (shared_ptr*)((this + 5))->Put(local_48, 1, (long)arg1);
        } else {
            plVar10 = (long*)local_48.operator->();
            uVar8 = *local_58;
            if ((uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10, uVar8) != DataStatus::NOTLOADED)
                goto LAB_10057752f;
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
        LAB_10057759f:
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6588;
        }
    LAB_1005775af:
        return psVar7;
    }

    // 0x1005775f0
    ConfigTypeLoadAllContainer<DBRowType>* ConfigTypeNoPreloadContainer<DBRowType>::DirectFetch(int arg1) {
        new (this) shared_ptr(PTR_NullConfigType_100ee6588);
        return this;
    }

    // 0x100577750
    ConfigTypeNoPreloadContainer<DBRowType>::~ConfigTypeNoPreloadContainer() {
        ((this + 5))->~LRUCache();
    }

    // 0x10057cdb0
    ConfigTypeNoPreloadContainer<DBTableType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList<DBTableType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<DBTableType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                               js5ConfigGroup) {
        Js5ConfigGroup* js5ConfigGroup_00 = (Js5ConfigGroup*)(unsigned long)arg5;
        new ((this + 5)) LRUCache<DBTableType>(arg5, "LRUCache");
        (this[1]._vptr)->CacheResize = (CacheResize*)(this[1]._vptr)->CacheClean;
        js5ConfigGroup->GetTypeName(js5ConfigGroup_00);
        ((this + 5))->~AutoSingleton();
    }

    // 0x10057cec0
    void ConfigTypeNoPreloadContainer<DBTableType>::CacheClean(unsigned int arg1) {
        ((this + 5))->Clean((unsigned long)arg1);
    }

    // 0x10057cee0
    void ConfigTypeNoPreloadContainer<DBTableType>::CacheResize(unsigned int arg1) {
        ((this + 5))->Resize(arg1);
    }

    // 0x10057cef0
    shared_ptr* ConfigTypeNoPreloadContainer<DBTableType>::List(int arg1, const DataStatus** arg2) {
        LoadList** ppLVar2;
        long* plVar10;
        shared_ptr<DBTableType> local_48;

        int* piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
        *piVar1 = *piVar1 + 1;
        ConfigTypeNoPreloadContainer<DBTableType>* arg2_00 = this + 1;
        shared_ptr* psVar7 = (shared_ptr*)((this + 5))->Find((long)arg1);
        if (shared_ptr::operator_cast_to_bool(psVar7) != '\0') {
            ppLVar2 = &arg2_00->_vptr->LoadList;
            *(int*)ppLVar2 = *(int*)ppLVar2 + 1;
            if (arg2 == nullptr) {
                return psVar7;
            }
            *arg2 = (DataStatus*)DataStatus::READY;
            return psVar7;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ConfigTypeNoPreloadContainer<DBTableType> _vtbl* pCVar4 = this[1]._vptr;
        ConfigTypeNoPreloadContainer<DBTableType> _vtbl* this_00 = this[3]._vptr;
        uint64_t uVar8 = this_00->GetPrefetchPriority();
        DataStatus* pDVar9 =
            (DataStatus*)(**(void (**)(...))(pCVar4->_dtor + 64))(pCVar4, &local_58, this_00, arg1, uVar8, 1);
        if (pDVar9 == (DataStatus*)DataStatus::NOTLOADED) {
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee64e8;
            goto LAB_10057d06f;
        }
        CacheReset** ppCVar3 = &arg2_00->_vptr->CacheReset;
        *(int*)ppCVar3 = *(int*)ppCVar3 + 1;
        MakeSharedPool<DBTableType, 4>::MakeShared<BaseTemplateConfigTypeList<DBTableType>*&, int&>(
            (BaseTemplateConfigTypeList<DBTableType>**)&local_48, (int*)arg2_00);
        if (pDVar9 == (DataStatus*)DataStatus::MISSING) {
        LAB_10057cfef:
            plVar10 = (long*)local_48.operator->();
            (**(void (**)(...))(*plVar10 + 24))(plVar10);
            pDVar9 = (DataStatus*)(**(void (**)(...))(arg2_00->_vptr->_dtor + 72))(arg2_00->_vptr, &local_48);
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            if (pDVar9 != (DataStatus*)DataStatus::READY)
                goto LAB_10057d05f;
            psVar7 = (shared_ptr*)((this + 5))->Put(local_48, 1, (long)arg1);
        } else {
            plVar10 = (long*)local_48.operator->();
            uVar8 = *local_58;
            if ((uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10, uVar8) != DataStatus::NOTLOADED)
                goto LAB_10057cfef;
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
        LAB_10057d05f:
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee64e8;
        }
    LAB_10057d06f:
        return psVar7;
    }

    // 0x10057d0b0
    ConfigTypeLoadAllContainer<DBTableType>* ConfigTypeNoPreloadContainer<DBTableType>::DirectFetch(int arg1) {
        new (this) shared_ptr(PTR_NullConfigType_100ee64e8);
        return this;
    }

    // 0x10057d210
    ConfigTypeNoPreloadContainer<DBTableType>::~ConfigTypeNoPreloadContainer() {
        ((this + 5))->~LRUCache();
    }

    // 0x1005824a0
    ConfigTypeNoPreloadContainer<InvType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList<InvType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<InvType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                           js5ConfigGroup) {
        Js5ConfigGroup* js5ConfigGroup_00 = (Js5ConfigGroup*)(unsigned long)arg5;
        new ((this + 5)) LRUCache<InvType>(arg5, "LRUCache");
        (this[1]._vptr)->CacheResize = (CacheResize*)(this[1]._vptr)->CacheClean;
        js5ConfigGroup->GetTypeName(js5ConfigGroup_00);
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005825b0
    void ConfigTypeNoPreloadContainer<InvType>::CacheClean(unsigned int arg1) {
        ((this + 5))->Clean((unsigned long)arg1);
    }

    // 0x1005825d0
    void ConfigTypeNoPreloadContainer<InvType>::CacheResize(unsigned int arg1) {
        ((this + 5))->Resize(arg1);
    }

    // 0x1005825e0
    shared_ptr* ConfigTypeNoPreloadContainer<InvType>::List(int arg1, const DataStatus** arg2) {
        LoadList** ppLVar2;
        long* plVar10;
        shared_ptr<InvType> local_48;

        int* piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
        *piVar1 = *piVar1 + 1;
        ConfigTypeNoPreloadContainer<InvType>* arg2_00 = this + 1;
        shared_ptr* psVar7 = (shared_ptr*)((this + 5))->Find((long)arg1);
        if (shared_ptr::operator_cast_to_bool(psVar7) != '\0') {
            ppLVar2 = &arg2_00->_vptr->LoadList;
            *(int*)ppLVar2 = *(int*)ppLVar2 + 1;
            if (arg2 == nullptr) {
                return psVar7;
            }
            *arg2 = (DataStatus*)DataStatus::READY;
            return psVar7;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ConfigTypeNoPreloadContainer<InvType> _vtbl* pCVar4 = this[1]._vptr;
        ConfigTypeNoPreloadContainer<InvType> _vtbl* this_00 = this[3]._vptr;
        uint64_t uVar8 = this_00->GetPrefetchPriority();
        DataStatus* pDVar9 =
            (DataStatus*)(**(void (**)(...))(pCVar4->_dtor + 64))(pCVar4, &local_58, this_00, arg1, uVar8, 1);
        if (pDVar9 == (DataStatus*)DataStatus::NOTLOADED) {
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6548;
            goto LAB_10058275f;
        }
        CacheReset** ppCVar3 = &arg2_00->_vptr->CacheReset;
        *(int*)ppCVar3 = *(int*)ppCVar3 + 1;
        MakeSharedPool<InvType, 32>::MakeShared<BaseTemplateConfigTypeList<InvType>*&, int&>(
            (BaseTemplateConfigTypeList<InvType>**)&local_48, (int*)arg2_00);
        if (pDVar9 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005826df:
            plVar10 = (long*)local_48.operator->();
            (**(void (**)(...))(*plVar10 + 24))(plVar10);
            pDVar9 = (DataStatus*)(**(void (**)(...))(arg2_00->_vptr->_dtor + 72))(arg2_00->_vptr, &local_48);
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            if (pDVar9 != (DataStatus*)DataStatus::READY)
                goto LAB_10058274f;
            psVar7 = (shared_ptr*)((this + 5))->Put(local_48, 1, (long)arg1);
        } else {
            plVar10 = (long*)local_48.operator->();
            uVar8 = *local_58;
            if ((uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10, uVar8) != DataStatus::NOTLOADED)
                goto LAB_1005826df;
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
        LAB_10058274f:
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6548;
        }
    LAB_10058275f:
        return psVar7;
    }

    // 0x1005827a0
    ConfigTypeLoadAllContainer<InvType>* ConfigTypeNoPreloadContainer<InvType>::DirectFetch(int arg1) {
        new (this) shared_ptr(PTR_NullConfigType_100ee6548);
        return this;
    }

    // 0x100582900
    ConfigTypeNoPreloadContainer<InvType>::~ConfigTypeNoPreloadContainer() {
        ((this + 5))->~LRUCache();
    }

    // 0x100587b70
    ConfigTypeNoPreloadContainer<VarBitType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList<VarBitType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<VarBitType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                              js5ConfigGroup) {
        Js5ConfigGroup* js5ConfigGroup_00 = (Js5ConfigGroup*)(unsigned long)arg5;
        new ((this + 5)) LRUCache<VarBitType>(arg5, "LRUCache");
        (this[1]._vptr)->CacheResize = (CacheResize*)(this[1]._vptr)->CacheClean;
        js5ConfigGroup->GetTypeName(js5ConfigGroup_00);
        ((this + 5))->~AutoSingleton();
    }

    // 0x100587c80
    void ConfigTypeNoPreloadContainer<VarBitType>::CacheClean(unsigned int arg1) {
        ((this + 5))->Clean((unsigned long)arg1);
    }

    // 0x100587ca0
    void ConfigTypeNoPreloadContainer<VarBitType>::CacheResize(unsigned int arg1) {
        ((this + 5))->Resize(arg1);
    }

    // 0x100587cb0
    shared_ptr* ConfigTypeNoPreloadContainer<VarBitType>::List(int arg1, const DataStatus** arg2) {
        LoadList** ppLVar2;
        long* plVar10;
        shared_ptr<VarBitType> local_48;

        int* piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
        *piVar1 = *piVar1 + 1;
        ConfigTypeNoPreloadContainer<VarBitType>* arg2_00 = this + 1;
        shared_ptr* psVar7 = (shared_ptr*)((this + 5))->Find((long)arg1);
        if (shared_ptr::operator_cast_to_bool(psVar7) != '\0') {
            ppLVar2 = &arg2_00->_vptr->LoadList;
            *(int*)ppLVar2 = *(int*)ppLVar2 + 1;
            if (arg2 == nullptr) {
                return psVar7;
            }
            *arg2 = (DataStatus*)DataStatus::READY;
            return psVar7;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ConfigTypeNoPreloadContainer<VarBitType> _vtbl* pCVar4 = this[1]._vptr;
        ConfigTypeNoPreloadContainer<VarBitType> _vtbl* this_00 = this[3]._vptr;
        uint64_t uVar8 = this_00->GetPrefetchPriority();
        DataStatus* pDVar9 =
            (DataStatus*)(**(void (**)(...))(pCVar4->_dtor + 64))(pCVar4, &local_58, this_00, arg1, uVar8, 1);
        if (pDVar9 == (DataStatus*)DataStatus::NOTLOADED) {
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee64e0;
            goto LAB_100587e2f;
        }
        CacheReset** ppCVar3 = &arg2_00->_vptr->CacheReset;
        *(int*)ppCVar3 = *(int*)ppCVar3 + 1;
        MakeSharedPool<VarBitType, 2048>::MakeShared<BaseTemplateConfigTypeList<VarBitType>*&, int&>(
            (BaseTemplateConfigTypeList<VarBitType>**)&local_48, (int*)arg2_00);
        if (pDVar9 == (DataStatus*)DataStatus::MISSING) {
        LAB_100587daf:
            plVar10 = (long*)local_48.operator->();
            (**(void (**)(...))(*plVar10 + 24))(plVar10);
            pDVar9 = (DataStatus*)(**(void (**)(...))(arg2_00->_vptr->_dtor + 72))(arg2_00->_vptr, &local_48);
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            if (pDVar9 != (DataStatus*)DataStatus::READY)
                goto LAB_100587e1f;
            psVar7 = (shared_ptr*)((this + 5))->Put(local_48, 1, (long)arg1);
        } else {
            plVar10 = (long*)local_48.operator->();
            uVar8 = *local_58;
            if ((uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10, uVar8) != DataStatus::NOTLOADED)
                goto LAB_100587daf;
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
        LAB_100587e1f:
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee64e0;
        }
    LAB_100587e2f:
        return psVar7;
    }

    // 0x100587e70
    ConfigTypeLoadAllContainer<VarBitType>* ConfigTypeNoPreloadContainer<VarBitType>::DirectFetch(int arg1) {
        new (this) shared_ptr(PTR_NullConfigType_100ee64e0);
        return this;
    }

    // 0x100587fd0
    ConfigTypeNoPreloadContainer<VarBitType>::~ConfigTypeNoPreloadContainer() {
        ((this + 5))->~LRUCache();
    }

    // 0x10058bf40
    ConfigTypeNoPreloadContainer<BASType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList<BASType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<BASType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                           js5ConfigGroup) {
        Js5ConfigGroup* js5ConfigGroup_00 = (Js5ConfigGroup*)(unsigned long)arg5;
        new ((this + 5)) LRUCache<BASType>(arg5, "LRUCache");
        (this[1]._vptr)->CacheResize = (CacheResize*)(this[1]._vptr)->CacheClean;
        js5ConfigGroup->GetTypeName(js5ConfigGroup_00);
        ((this + 5))->~AutoSingleton();
    }

    // 0x10058c050
    void ConfigTypeNoPreloadContainer<BASType>::CacheClean(unsigned int arg1) {
        ((this + 5))->Clean((unsigned long)arg1);
    }

    // 0x10058c070
    void ConfigTypeNoPreloadContainer<BASType>::CacheResize(unsigned int arg1) {
        ((this + 5))->Resize(arg1);
    }

    // 0x10058c080
    shared_ptr* ConfigTypeNoPreloadContainer<BASType>::List(int arg1, const DataStatus** arg2) {
        LoadList** ppLVar2;
        long* plVar10;
        shared_ptr<BASType> local_48;

        int* piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
        *piVar1 = *piVar1 + 1;
        ConfigTypeNoPreloadContainer<BASType>* arg2_00 = this + 1;
        shared_ptr* psVar7 = (shared_ptr*)((this + 5))->Find((long)arg1);
        if (shared_ptr::operator_cast_to_bool(psVar7) != '\0') {
            ppLVar2 = &arg2_00->_vptr->LoadList;
            *(int*)ppLVar2 = *(int*)ppLVar2 + 1;
            if (arg2 == nullptr) {
                return psVar7;
            }
            *arg2 = (DataStatus*)DataStatus::READY;
            return psVar7;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ConfigTypeNoPreloadContainer<BASType> _vtbl* pCVar4 = this[1]._vptr;
        ConfigTypeNoPreloadContainer<BASType> _vtbl* this_00 = this[3]._vptr;
        uint64_t uVar8 = this_00->GetPrefetchPriority();
        DataStatus* pDVar9 =
            (DataStatus*)(**(void (**)(...))(pCVar4->_dtor + 64))(pCVar4, &local_58, this_00, arg1, uVar8, 1);
        if (pDVar9 == (DataStatus*)DataStatus::NOTLOADED) {
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6538;
            goto LAB_10058c1ff;
        }
        CacheReset** ppCVar3 = &arg2_00->_vptr->CacheReset;
        *(int*)ppCVar3 = *(int*)ppCVar3 + 1;
        MakeSharedPool<BASType, 96>::MakeShared<BaseTemplateConfigTypeList<BASType>*&, int&>(
            (BaseTemplateConfigTypeList<BASType>**)&local_48, (int*)arg2_00);
        if (pDVar9 == (DataStatus*)DataStatus::MISSING) {
        LAB_10058c17f:
            plVar10 = (long*)local_48.operator->();
            (**(void (**)(...))(*plVar10 + 24))(plVar10);
            pDVar9 = (DataStatus*)(**(void (**)(...))(arg2_00->_vptr->_dtor + 72))(arg2_00->_vptr, &local_48);
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            if (pDVar9 != (DataStatus*)DataStatus::READY)
                goto LAB_10058c1ef;
            psVar7 = (shared_ptr*)((this + 5))->Put(local_48, 1, (long)arg1);
        } else {
            plVar10 = (long*)local_48.operator->();
            uVar8 = *local_58;
            if ((uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10, uVar8) != DataStatus::NOTLOADED)
                goto LAB_10058c17f;
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
        LAB_10058c1ef:
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6538;
        }
    LAB_10058c1ff:
        return psVar7;
    }

    // 0x10058c240
    ConfigTypeLoadAllContainer<BASType>* ConfigTypeNoPreloadContainer<BASType>::DirectFetch(int arg1) {
        new (this) shared_ptr(PTR_NullConfigType_100ee6538);
        return this;
    }

    // 0x10058c3a0
    ConfigTypeNoPreloadContainer<BASType>::~ConfigTypeNoPreloadContainer() {
        ((this + 5))->~LRUCache();
    }

    // 0x1005916a0
    ConfigTypeNoPreloadContainer<FloorUnderlayType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList<FloorUnderlayType>& baseTemplateConfigTypeList,
        Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
        const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<FloorUnderlayType>(baseTemplateConfigTypeList, js5ResourceProvider,
                                                     js5ArchiveSettings, js5ConfigGroup) {
        Js5ConfigGroup* js5ConfigGroup_00 = (Js5ConfigGroup*)(unsigned long)arg5;
        new ((this + 5)) LRUCache<FloorUnderlayType>(arg5, "LRUCache");
        (this[1]._vptr)->CacheResize = (CacheResize*)(this[1]._vptr)->CacheClean;
        js5ConfigGroup->GetTypeName(js5ConfigGroup_00);
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005917b0
    void ConfigTypeNoPreloadContainer<FloorUnderlayType>::CacheClean(unsigned int arg1) {
        ((this + 5))->Clean((unsigned long)arg1);
    }

    // 0x1005917d0
    void ConfigTypeNoPreloadContainer<FloorUnderlayType>::CacheResize(unsigned int arg1) {
        ((this + 5))->Resize(arg1);
    }

    // 0x1005917e0
    shared_ptr* ConfigTypeNoPreloadContainer<FloorUnderlayType>::List(int arg1, const DataStatus** arg2) {
        LoadList** ppLVar2;
        long* plVar10;
        shared_ptr<FloorUnderlayType> local_48;

        int* piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
        *piVar1 = *piVar1 + 1;
        ConfigTypeNoPreloadContainer<FloorUnderlayType>* arg2_00 = this + 1;
        shared_ptr* psVar7 = (shared_ptr*)((this + 5))->Find((long)arg1);
        if (shared_ptr::operator_cast_to_bool(psVar7) != '\0') {
            ppLVar2 = &arg2_00->_vptr->LoadList;
            *(int*)ppLVar2 = *(int*)ppLVar2 + 1;
            if (arg2 == nullptr) {
                return psVar7;
            }
            *arg2 = (DataStatus*)DataStatus::READY;
            return psVar7;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ConfigTypeNoPreloadContainer<FloorUnderlayType> _vtbl* pCVar4 = this[1]._vptr;
        ConfigTypeNoPreloadContainer<FloorUnderlayType> _vtbl* this_00 = this[3]._vptr;
        uint64_t uVar8 = this_00->GetPrefetchPriority();
        DataStatus* pDVar9 =
            (DataStatus*)(**(void (**)(...))(pCVar4->_dtor + 64))(pCVar4, &local_58, this_00, arg1, uVar8, 1);
        if (pDVar9 == (DataStatus*)DataStatus::NOTLOADED) {
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6530;
            goto LAB_10059195f;
        }
        CacheReset** ppCVar3 = &arg2_00->_vptr->CacheReset;
        *(int*)ppCVar3 = *(int*)ppCVar3 + 1;
        MakeSharedPool<FloorUnderlayType, 128>::MakeShared<BaseTemplateConfigTypeList<FloorUnderlayType>*&, int&>(
            (BaseTemplateConfigTypeList<FloorUnderlayType>**)&local_48, (int*)arg2_00);
        if (pDVar9 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005918df:
            plVar10 = (long*)local_48.operator->();
            (**(void (**)(...))(*plVar10 + 24))(plVar10);
            pDVar9 = (DataStatus*)(**(void (**)(...))(arg2_00->_vptr->_dtor + 72))(arg2_00->_vptr, &local_48);
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            if (pDVar9 != (DataStatus*)DataStatus::READY)
                goto LAB_10059194f;
            psVar7 = (shared_ptr*)((this + 5))->Put(local_48, 1, (long)arg1);
        } else {
            plVar10 = (long*)local_48.operator->();
            uVar8 = *local_58;
            if ((uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10, uVar8) != DataStatus::NOTLOADED)
                goto LAB_1005918df;
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
        LAB_10059194f:
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6530;
        }
    LAB_10059195f:
        return psVar7;
    }

    // 0x1005919a0
    ConfigTypeLoadAllContainer<FloorUnderlayType>*
    ConfigTypeNoPreloadContainer<FloorUnderlayType>::DirectFetch(int arg1) {
        new (this) shared_ptr(PTR_NullConfigType_100ee6530);
        return this;
    }

    // 0x100591b00
    ConfigTypeNoPreloadContainer<FloorUnderlayType>::~ConfigTypeNoPreloadContainer() {
        ((this + 5))->~LRUCache();
    }

    // 0x100596d50
    ConfigTypeNoPreloadContainer<FloorOverlayType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList<FloorOverlayType>& baseTemplateConfigTypeList,
        Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
        const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<FloorOverlayType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                                    js5ConfigGroup) {
        Js5ConfigGroup* js5ConfigGroup_00 = (Js5ConfigGroup*)(unsigned long)arg5;
        new ((this + 5)) LRUCache<FloorOverlayType>(arg5, "LRUCache");
        (this[1]._vptr)->CacheResize = (CacheResize*)(this[1]._vptr)->CacheClean;
        js5ConfigGroup->GetTypeName(js5ConfigGroup_00);
        ((this + 5))->~AutoSingleton();
    }

    // 0x100596e60
    void ConfigTypeNoPreloadContainer<FloorOverlayType>::CacheClean(unsigned int arg1) {
        ((this + 5))->Clean((unsigned long)arg1);
    }

    // 0x100596e80
    void ConfigTypeNoPreloadContainer<FloorOverlayType>::CacheResize(unsigned int arg1) {
        ((this + 5))->Resize(arg1);
    }

    // 0x100596e90
    shared_ptr* ConfigTypeNoPreloadContainer<FloorOverlayType>::List(int arg1, const DataStatus** arg2) {
        LoadList** ppLVar2;
        long* plVar10;
        shared_ptr<FloorOverlayType> local_48;

        int* piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
        *piVar1 = *piVar1 + 1;
        ConfigTypeNoPreloadContainer<FloorOverlayType>* arg2_00 = this + 1;
        shared_ptr* psVar7 = (shared_ptr*)((this + 5))->Find((long)arg1);
        if (shared_ptr::operator_cast_to_bool(psVar7) != '\0') {
            ppLVar2 = &arg2_00->_vptr->LoadList;
            *(int*)ppLVar2 = *(int*)ppLVar2 + 1;
            if (arg2 == nullptr) {
                return psVar7;
            }
            *arg2 = (DataStatus*)DataStatus::READY;
            return psVar7;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ConfigTypeNoPreloadContainer<FloorOverlayType> _vtbl* pCVar4 = this[1]._vptr;
        ConfigTypeNoPreloadContainer<FloorOverlayType> _vtbl* this_00 = this[3]._vptr;
        uint64_t uVar8 = this_00->GetPrefetchPriority();
        DataStatus* pDVar9 =
            (DataStatus*)(**(void (**)(...))(pCVar4->_dtor + 64))(pCVar4, &local_58, this_00, arg1, uVar8, 1);
        if (pDVar9 == (DataStatus*)DataStatus::NOTLOADED) {
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6528;
            goto LAB_10059700f;
        }
        CacheReset** ppCVar3 = &arg2_00->_vptr->CacheReset;
        *(int*)ppCVar3 = *(int*)ppCVar3 + 1;
        MakeSharedPool<FloorOverlayType, 128>::MakeShared<BaseTemplateConfigTypeList<FloorOverlayType>*&, int&>(
            (BaseTemplateConfigTypeList<FloorOverlayType>**)&local_48, (int*)arg2_00);
        if (pDVar9 == (DataStatus*)DataStatus::MISSING) {
        LAB_100596f8f:
            plVar10 = (long*)local_48.operator->();
            (**(void (**)(...))(*plVar10 + 24))(plVar10);
            pDVar9 = (DataStatus*)(**(void (**)(...))(arg2_00->_vptr->_dtor + 72))(arg2_00->_vptr, &local_48);
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            if (pDVar9 != (DataStatus*)DataStatus::READY)
                goto LAB_100596fff;
            psVar7 = (shared_ptr*)((this + 5))->Put(local_48, 1, (long)arg1);
        } else {
            plVar10 = (long*)local_48.operator->();
            uVar8 = *local_58;
            if ((uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10, uVar8) != DataStatus::NOTLOADED)
                goto LAB_100596f8f;
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
        LAB_100596fff:
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6528;
        }
    LAB_10059700f:
        return psVar7;
    }

    // 0x100597050
    ConfigTypeLoadAllContainer<FloorOverlayType>*
    ConfigTypeNoPreloadContainer<FloorOverlayType>::DirectFetch(int arg1) {
        new (this) shared_ptr(PTR_NullConfigType_100ee6528);
        return this;
    }

    // 0x1005971b0
    ConfigTypeNoPreloadContainer<FloorOverlayType>::~ConfigTypeNoPreloadContainer() {
        ((this + 5))->~LRUCache();
    }

    // 0x10059c4f0
    ConfigTypeNoPreloadContainer<HitmarkType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList<HitmarkType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<HitmarkType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                               js5ConfigGroup) {
        Js5ConfigGroup* js5ConfigGroup_00 = (Js5ConfigGroup*)(unsigned long)arg5;
        new ((this + 5)) LRUCache<HitmarkType>(arg5, "LRUCache");
        (this[1]._vptr)->CacheResize = (CacheResize*)(this[1]._vptr)->CacheClean;
        js5ConfigGroup->GetTypeName(js5ConfigGroup_00);
        ((this + 5))->~AutoSingleton();
    }

    // 0x10059c600
    void ConfigTypeNoPreloadContainer<HitmarkType>::CacheClean(unsigned int arg1) {
        ((this + 5))->Clean((unsigned long)arg1);
    }

    // 0x10059c620
    void ConfigTypeNoPreloadContainer<HitmarkType>::CacheResize(unsigned int arg1) {
        ((this + 5))->Resize(arg1);
    }

    // 0x10059c630
    shared_ptr* ConfigTypeNoPreloadContainer<HitmarkType>::List(int arg1, const DataStatus** arg2) {
        LoadList** ppLVar2;
        long* plVar10;
        shared_ptr<HitmarkType> local_48;

        int* piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
        *piVar1 = *piVar1 + 1;
        ConfigTypeNoPreloadContainer<HitmarkType>* arg2_00 = this + 1;
        shared_ptr* psVar7 = (shared_ptr*)((this + 5))->Find((long)arg1);
        if (shared_ptr::operator_cast_to_bool(psVar7) != '\0') {
            ppLVar2 = &arg2_00->_vptr->LoadList;
            *(int*)ppLVar2 = *(int*)ppLVar2 + 1;
            if (arg2 == nullptr) {
                return psVar7;
            }
            *arg2 = (DataStatus*)DataStatus::READY;
            return psVar7;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ConfigTypeNoPreloadContainer<HitmarkType> _vtbl* pCVar4 = this[1]._vptr;
        ConfigTypeNoPreloadContainer<HitmarkType> _vtbl* this_00 = this[3]._vptr;
        uint64_t uVar8 = this_00->GetPrefetchPriority();
        DataStatus* pDVar9 =
            (DataStatus*)(**(void (**)(...))(pCVar4->_dtor + 64))(pCVar4, &local_58, this_00, arg1, uVar8, 1);
        if (pDVar9 == (DataStatus*)DataStatus::NOTLOADED) {
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee64f8;
            goto LAB_10059c7af;
        }
        CacheReset** ppCVar3 = &arg2_00->_vptr->CacheReset;
        *(int*)ppCVar3 = *(int*)ppCVar3 + 1;
        MakeSharedPool<HitmarkType, 32>::MakeShared<BaseTemplateConfigTypeList<HitmarkType>*&, int&>(
            (BaseTemplateConfigTypeList<HitmarkType>**)&local_48, (int*)arg2_00);
        if (pDVar9 == (DataStatus*)DataStatus::MISSING) {
        LAB_10059c72f:
            plVar10 = (long*)local_48.operator->();
            (**(void (**)(...))(*plVar10 + 24))(plVar10);
            pDVar9 = (DataStatus*)(**(void (**)(...))(arg2_00->_vptr->_dtor + 72))(arg2_00->_vptr, &local_48);
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            if (pDVar9 != (DataStatus*)DataStatus::READY)
                goto LAB_10059c79f;
            psVar7 = (shared_ptr*)((this + 5))->Put(local_48, 1, (long)arg1);
        } else {
            plVar10 = (long*)local_48.operator->();
            uVar8 = *local_58;
            if ((uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10, uVar8) != DataStatus::NOTLOADED)
                goto LAB_10059c72f;
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
        LAB_10059c79f:
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee64f8;
        }
    LAB_10059c7af:
        return psVar7;
    }

    // 0x10059c7f0
    ConfigTypeLoadAllContainer<HitmarkType>* ConfigTypeNoPreloadContainer<HitmarkType>::DirectFetch(int arg1) {
        new (this) shared_ptr(PTR_NullConfigType_100ee64f8);
        return this;
    }

    // 0x10059c950
    ConfigTypeNoPreloadContainer<HitmarkType>::~ConfigTypeNoPreloadContainer() {
        ((this + 5))->~LRUCache();
    }

    // 0x1005a1560
    ConfigTypeNoPreloadContainer<HeadbarType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList<HeadbarType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<HeadbarType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                               js5ConfigGroup) {
        Js5ConfigGroup* js5ConfigGroup_00 = (Js5ConfigGroup*)(unsigned long)arg5;
        new ((this + 5)) LRUCache<HeadbarType>(arg5, "LRUCache");
        (this[1]._vptr)->CacheResize = (CacheResize*)(this[1]._vptr)->CacheClean;
        js5ConfigGroup->GetTypeName(js5ConfigGroup_00);
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005a1670
    void ConfigTypeNoPreloadContainer<HeadbarType>::CacheClean(unsigned int arg1) {
        ((this + 5))->Clean((unsigned long)arg1);
    }

    // 0x1005a1690
    void ConfigTypeNoPreloadContainer<HeadbarType>::CacheResize(unsigned int arg1) {
        ((this + 5))->Resize(arg1);
    }

    // 0x1005a16a0
    shared_ptr* ConfigTypeNoPreloadContainer<HeadbarType>::List(int arg1, const DataStatus** arg2) {
        LoadList** ppLVar2;
        long* plVar10;
        shared_ptr<HeadbarType> local_48;

        int* piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
        *piVar1 = *piVar1 + 1;
        ConfigTypeNoPreloadContainer<HeadbarType>* arg2_00 = this + 1;
        shared_ptr* psVar7 = (shared_ptr*)((this + 5))->Find((long)arg1);
        if (shared_ptr::operator_cast_to_bool(psVar7) != '\0') {
            ppLVar2 = &arg2_00->_vptr->LoadList;
            *(int*)ppLVar2 = *(int*)ppLVar2 + 1;
            if (arg2 == nullptr) {
                return psVar7;
            }
            *arg2 = (DataStatus*)DataStatus::READY;
            return psVar7;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ConfigTypeNoPreloadContainer<HeadbarType> _vtbl* pCVar4 = this[1]._vptr;
        ConfigTypeNoPreloadContainer<HeadbarType> _vtbl* this_00 = this[3]._vptr;
        uint64_t uVar8 = this_00->GetPrefetchPriority();
        DataStatus* pDVar9 =
            (DataStatus*)(**(void (**)(...))(pCVar4->_dtor + 64))(pCVar4, &local_58, this_00, arg1, uVar8, 1);
        if (pDVar9 == (DataStatus*)DataStatus::NOTLOADED) {
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee64f0;
            goto LAB_1005a181f;
        }
        CacheReset** ppCVar3 = &arg2_00->_vptr->CacheReset;
        *(int*)ppCVar3 = *(int*)ppCVar3 + 1;
        MakeSharedPool<HeadbarType, 32>::MakeShared<BaseTemplateConfigTypeList<HeadbarType>*&, int&>(
            (BaseTemplateConfigTypeList<HeadbarType>**)&local_48, (int*)arg2_00);
        if (pDVar9 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005a179f:
            plVar10 = (long*)local_48.operator->();
            (**(void (**)(...))(*plVar10 + 24))(plVar10);
            pDVar9 = (DataStatus*)(**(void (**)(...))(arg2_00->_vptr->_dtor + 72))(arg2_00->_vptr, &local_48);
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            if (pDVar9 != (DataStatus*)DataStatus::READY)
                goto LAB_1005a180f;
            psVar7 = (shared_ptr*)((this + 5))->Put(local_48, 1, (long)arg1);
        } else {
            plVar10 = (long*)local_48.operator->();
            uVar8 = *local_58;
            if ((uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10, uVar8) != DataStatus::NOTLOADED)
                goto LAB_1005a179f;
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
        LAB_1005a180f:
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee64f0;
        }
    LAB_1005a181f:
        return psVar7;
    }

    // 0x1005a1860
    ConfigTypeLoadAllContainer<HeadbarType>* ConfigTypeNoPreloadContainer<HeadbarType>::DirectFetch(int arg1) {
        new (this) shared_ptr(PTR_NullConfigType_100ee64f0);
        return this;
    }

    // 0x1005a19c0
    ConfigTypeNoPreloadContainer<HeadbarType>::~ConfigTypeNoPreloadContainer() {
        ((this + 5))->~LRUCache();
    }

    // 0x1005a6b10
    ConfigTypeNoPreloadContainer<IDKType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList<IDKType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<IDKType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                           js5ConfigGroup) {
        Js5ConfigGroup* js5ConfigGroup_00 = (Js5ConfigGroup*)(unsigned long)arg5;
        new ((this + 5)) LRUCache<IDKType>(arg5, "LRUCache");
        (this[1]._vptr)->CacheResize = (CacheResize*)(this[1]._vptr)->CacheClean;
        js5ConfigGroup->GetTypeName(js5ConfigGroup_00);
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005a6c20
    void ConfigTypeNoPreloadContainer<IDKType>::CacheClean(unsigned int arg1) {
        ((this + 5))->Clean((unsigned long)arg1);
    }

    // 0x1005a6c40
    void ConfigTypeNoPreloadContainer<IDKType>::CacheResize(unsigned int arg1) {
        ((this + 5))->Resize(arg1);
    }

    // 0x1005a6c50
    shared_ptr* ConfigTypeNoPreloadContainer<IDKType>::List(int arg1, const DataStatus** arg2) {
        LoadList** ppLVar2;
        long* plVar10;
        shared_ptr<IDKType> local_48;

        int* piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
        *piVar1 = *piVar1 + 1;
        ConfigTypeNoPreloadContainer<IDKType>* arg2_00 = this + 1;
        shared_ptr* psVar7 = (shared_ptr*)((this + 5))->Find((long)arg1);
        if (shared_ptr::operator_cast_to_bool(psVar7) != '\0') {
            ppLVar2 = &arg2_00->_vptr->LoadList;
            *(int*)ppLVar2 = *(int*)ppLVar2 + 1;
            if (arg2 == nullptr) {
                return psVar7;
            }
            *arg2 = (DataStatus*)DataStatus::READY;
            return psVar7;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ConfigTypeNoPreloadContainer<IDKType> _vtbl* pCVar4 = this[1]._vptr;
        ConfigTypeNoPreloadContainer<IDKType> _vtbl* this_00 = this[3]._vptr;
        uint64_t uVar8 = this_00->GetPrefetchPriority();
        DataStatus* pDVar9 =
            (DataStatus*)(**(void (**)(...))(pCVar4->_dtor + 64))(pCVar4, &local_58, this_00, arg1, uVar8, 1);
        if (pDVar9 == (DataStatus*)DataStatus::NOTLOADED) {
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6540;
            goto LAB_1005a6dcf;
        }
        CacheReset** ppCVar3 = &arg2_00->_vptr->CacheReset;
        *(int*)ppCVar3 = *(int*)ppCVar3 + 1;
        MakeSharedPool<IDKType, 32>::MakeShared<BaseTemplateConfigTypeList<IDKType>*&, int&>(
            (BaseTemplateConfigTypeList<IDKType>**)&local_48, (int*)arg2_00);
        if (pDVar9 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005a6d4f:
            plVar10 = (long*)local_48.operator->();
            (**(void (**)(...))(*plVar10 + 24))(plVar10);
            pDVar9 = (DataStatus*)(**(void (**)(...))(arg2_00->_vptr->_dtor + 72))(arg2_00->_vptr, &local_48);
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            if (pDVar9 != (DataStatus*)DataStatus::READY)
                goto LAB_1005a6dbf;
            psVar7 = (shared_ptr*)((this + 5))->Put(local_48, 1, (long)arg1);
        } else {
            plVar10 = (long*)local_48.operator->();
            uVar8 = *local_58;
            if ((uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10, uVar8) != DataStatus::NOTLOADED)
                goto LAB_1005a6d4f;
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
        LAB_1005a6dbf:
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6540;
        }
    LAB_1005a6dcf:
        return psVar7;
    }

    // 0x1005a6e10
    ConfigTypeLoadAllContainer<IDKType>* ConfigTypeNoPreloadContainer<IDKType>::DirectFetch(int arg1) {
        new (this) shared_ptr(PTR_NullConfigType_100ee6540);
        return this;
    }

    // 0x1005a6f70
    ConfigTypeNoPreloadContainer<IDKType>::~ConfigTypeNoPreloadContainer() {
        ((this + 5))->~LRUCache();
    }

    // 0x1005ac4a0
    ConfigTypeNoPreloadContainer<MapElementType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList<MapElementType>& baseTemplateConfigTypeList,
        Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
        const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<MapElementType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                                  js5ConfigGroup) {
        Js5ConfigGroup* js5ConfigGroup_00 = (Js5ConfigGroup*)(unsigned long)arg5;
        new ((this + 5)) LRUCache<MapElementType>(arg5, "LRUCache");
        (this[1]._vptr)->CacheResize = (CacheResize*)(this[1]._vptr)->CacheClean;
        js5ConfigGroup->GetTypeName(js5ConfigGroup_00);
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005ac5b0
    void ConfigTypeNoPreloadContainer<MapElementType>::CacheClean(unsigned int arg1) {
        ((this + 5))->Clean((unsigned long)arg1);
    }

    // 0x1005ac5d0
    void ConfigTypeNoPreloadContainer<MapElementType>::CacheResize(unsigned int arg1) {
        ((this + 5))->Resize(arg1);
    }

    // 0x1005ac5e0
    shared_ptr* ConfigTypeNoPreloadContainer<MapElementType>::List(int arg1, const DataStatus** arg2) {
        LoadList** ppLVar2;
        long* plVar10;
        shared_ptr<MapElementType> local_48;

        int* piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
        *piVar1 = *piVar1 + 1;
        ConfigTypeNoPreloadContainer<MapElementType>* arg2_00 = this + 1;
        shared_ptr* psVar7 = (shared_ptr*)((this + 5))->Find((long)arg1);
        if (shared_ptr::operator_cast_to_bool(psVar7) != '\0') {
            ppLVar2 = &arg2_00->_vptr->LoadList;
            *(int*)ppLVar2 = *(int*)ppLVar2 + 1;
            if (arg2 == nullptr) {
                return psVar7;
            }
            *arg2 = (DataStatus*)DataStatus::READY;
            return psVar7;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ConfigTypeNoPreloadContainer<MapElementType> _vtbl* pCVar4 = this[1]._vptr;
        ConfigTypeNoPreloadContainer<MapElementType> _vtbl* this_00 = this[3]._vptr;
        uint64_t uVar8 = this_00->GetPrefetchPriority();
        DataStatus* pDVar9 =
            (DataStatus*)(**(void (**)(...))(pCVar4->_dtor + 64))(pCVar4, &local_58, this_00, arg1, uVar8, 1);
        if (pDVar9 == (DataStatus*)DataStatus::NOTLOADED) {
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6518;
            goto LAB_1005ac75f;
        }
        CacheReset** ppCVar3 = &arg2_00->_vptr->CacheReset;
        *(int*)ppCVar3 = *(int*)ppCVar3 + 1;
        MakeSharedPool<MapElementType, 512>::MakeShared<BaseTemplateConfigTypeList<MapElementType>*&, int&>(
            (BaseTemplateConfigTypeList<MapElementType>**)&local_48, (int*)arg2_00);
        if (pDVar9 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005ac6df:
            plVar10 = (long*)local_48.operator->();
            (**(void (**)(...))(*plVar10 + 24))(plVar10);
            pDVar9 = (DataStatus*)(**(void (**)(...))(arg2_00->_vptr->_dtor + 72))(arg2_00->_vptr, &local_48);
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            if (pDVar9 != (DataStatus*)DataStatus::READY)
                goto LAB_1005ac74f;
            psVar7 = (shared_ptr*)((this + 5))->Put(local_48, 1, (long)arg1);
        } else {
            plVar10 = (long*)local_48.operator->();
            uVar8 = *local_58;
            if ((uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10, uVar8) != DataStatus::NOTLOADED)
                goto LAB_1005ac6df;
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
        LAB_1005ac74f:
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6518;
        }
    LAB_1005ac75f:
        return psVar7;
    }

    // 0x1005ac7a0
    ConfigTypeLoadAllContainer<MapElementType>* ConfigTypeNoPreloadContainer<MapElementType>::DirectFetch(int arg1) {
        new (this) shared_ptr(PTR_NullConfigType_100ee6518);
        return this;
    }

    // 0x1005ac900
    ConfigTypeNoPreloadContainer<MapElementType>::~ConfigTypeNoPreloadContainer() {
        ((this + 5))->~LRUCache();
    }

    // 0x1005b2d20
    ConfigTypeNoPreloadContainer<MSIType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList<MSIType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<MSIType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                           js5ConfigGroup) {
        Js5ConfigGroup* js5ConfigGroup_00 = (Js5ConfigGroup*)(unsigned long)arg5;
        new ((this + 5)) LRUCache<MSIType>(arg5, "LRUCache");
        (this[1]._vptr)->CacheResize = (CacheResize*)(this[1]._vptr)->CacheClean;
        js5ConfigGroup->GetTypeName(js5ConfigGroup_00);
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005b2e30
    void ConfigTypeNoPreloadContainer<MSIType>::CacheClean(unsigned int arg1) {
        ((this + 5))->Clean((unsigned long)arg1);
    }

    // 0x1005b2e50
    void ConfigTypeNoPreloadContainer<MSIType>::CacheResize(unsigned int arg1) {
        ((this + 5))->Resize(arg1);
    }

    // 0x1005b2e60
    shared_ptr* ConfigTypeNoPreloadContainer<MSIType>::List(int arg1, const DataStatus** arg2) {
        LoadList** ppLVar2;
        long* plVar10;
        shared_ptr<MSIType> local_48;

        int* piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
        *piVar1 = *piVar1 + 1;
        ConfigTypeNoPreloadContainer<MSIType>* arg2_00 = this + 1;
        shared_ptr* psVar7 = (shared_ptr*)((this + 5))->Find((long)arg1);
        if (shared_ptr::operator_cast_to_bool(psVar7) != '\0') {
            ppLVar2 = &arg2_00->_vptr->LoadList;
            *(int*)ppLVar2 = *(int*)ppLVar2 + 1;
            if (arg2 == nullptr) {
                return psVar7;
            }
            *arg2 = (DataStatus*)DataStatus::READY;
            return psVar7;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ConfigTypeNoPreloadContainer<MSIType> _vtbl* pCVar4 = this[1]._vptr;
        ConfigTypeNoPreloadContainer<MSIType> _vtbl* this_00 = this[3]._vptr;
        uint64_t uVar8 = this_00->GetPrefetchPriority();
        DataStatus* pDVar9 =
            (DataStatus*)(**(void (**)(...))(pCVar4->_dtor + 64))(pCVar4, &local_58, this_00, arg1, uVar8, 1);
        if (pDVar9 == (DataStatus*)DataStatus::NOTLOADED) {
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6558;
            goto LAB_1005b2fdf;
        }
        CacheReset** ppCVar3 = &arg2_00->_vptr->CacheReset;
        *(int*)ppCVar3 = *(int*)ppCVar3 + 1;
        MakeSharedPool<MSIType, 32>::MakeShared<BaseTemplateConfigTypeList<MSIType>*&, int&>(
            (BaseTemplateConfigTypeList<MSIType>**)&local_48, (int*)arg2_00);
        if (pDVar9 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005b2f5f:
            plVar10 = (long*)local_48.operator->();
            (**(void (**)(...))(*plVar10 + 24))(plVar10);
            pDVar9 = (DataStatus*)(**(void (**)(...))(arg2_00->_vptr->_dtor + 72))(arg2_00->_vptr, &local_48);
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            if (pDVar9 != (DataStatus*)DataStatus::READY)
                goto LAB_1005b2fcf;
            psVar7 = (shared_ptr*)((this + 5))->Put(local_48, 1, (long)arg1);
        } else {
            plVar10 = (long*)local_48.operator->();
            uVar8 = *local_58;
            if ((uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10, uVar8) != DataStatus::NOTLOADED)
                goto LAB_1005b2f5f;
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
        LAB_1005b2fcf:
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6558;
        }
    LAB_1005b2fdf:
        return psVar7;
    }

    // 0x1005b3020
    ConfigTypeLoadAllContainer<MSIType>* ConfigTypeNoPreloadContainer<MSIType>::DirectFetch(int arg1) {
        new (this) shared_ptr(PTR_NullConfigType_100ee6558);
        return this;
    }

    // 0x1005b3180
    ConfigTypeNoPreloadContainer<MSIType>::~ConfigTypeNoPreloadContainer() {
        ((this + 5))->~LRUCache();
    }

    // 0x1005b87a0
    ConfigTypeNoPreloadContainer<QuestType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList<QuestType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<QuestType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                             js5ConfigGroup) {
        Js5ConfigGroup* js5ConfigGroup_00 = (Js5ConfigGroup*)(unsigned long)arg5;
        new ((this + 5)) LRUCache<QuestType>(arg5, "LRUCache");
        (this[1]._vptr)->CacheResize = (CacheResize*)(this[1]._vptr)->CacheClean;
        js5ConfigGroup->GetTypeName(js5ConfigGroup_00);
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005b88b0
    void ConfigTypeNoPreloadContainer<QuestType>::CacheClean(unsigned int arg1) {
        ((this + 5))->Clean((unsigned long)arg1);
    }

    // 0x1005b88d0
    void ConfigTypeNoPreloadContainer<QuestType>::CacheResize(unsigned int arg1) {
        ((this + 5))->Resize(arg1);
    }

    // 0x1005b88e0
    shared_ptr* ConfigTypeNoPreloadContainer<QuestType>::List(int arg1, const DataStatus** arg2) {
        LoadList** ppLVar2;
        long* plVar10;
        shared_ptr<QuestType> local_48;

        int* piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
        *piVar1 = *piVar1 + 1;
        ConfigTypeNoPreloadContainer<QuestType>* arg2_00 = this + 1;
        shared_ptr* psVar7 = (shared_ptr*)((this + 5))->Find((long)arg1);
        if (shared_ptr::operator_cast_to_bool(psVar7) != '\0') {
            ppLVar2 = &arg2_00->_vptr->LoadList;
            *(int*)ppLVar2 = *(int*)ppLVar2 + 1;
            if (arg2 == nullptr) {
                return psVar7;
            }
            *arg2 = (DataStatus*)DataStatus::READY;
            return psVar7;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ConfigTypeNoPreloadContainer<QuestType> _vtbl* pCVar4 = this[1]._vptr;
        ConfigTypeNoPreloadContainer<QuestType> _vtbl* this_00 = this[3]._vptr;
        uint64_t uVar8 = this_00->GetPrefetchPriority();
        DataStatus* pDVar9 =
            (DataStatus*)(**(void (**)(...))(pCVar4->_dtor + 64))(pCVar4, &local_58, this_00, arg1, uVar8, 1);
        if (pDVar9 == (DataStatus*)DataStatus::NOTLOADED) {
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee65a0;
            goto LAB_1005b8a5f;
        }
        CacheReset** ppCVar3 = &arg2_00->_vptr->CacheReset;
        *(int*)ppCVar3 = *(int*)ppCVar3 + 1;
        MakeSharedPool<QuestType, 128>::MakeShared<BaseTemplateConfigTypeList<QuestType>*&, int&>(
            (BaseTemplateConfigTypeList<QuestType>**)&local_48, (int*)arg2_00);
        if (pDVar9 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005b89df:
            plVar10 = (long*)local_48.operator->();
            (**(void (**)(...))(*plVar10 + 24))(plVar10);
            pDVar9 = (DataStatus*)(**(void (**)(...))(arg2_00->_vptr->_dtor + 72))(arg2_00->_vptr, &local_48);
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            if (pDVar9 != (DataStatus*)DataStatus::READY)
                goto LAB_1005b8a4f;
            psVar7 = (shared_ptr*)((this + 5))->Put(local_48, 1, (long)arg1);
        } else {
            plVar10 = (long*)local_48.operator->();
            uVar8 = *local_58;
            if ((uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10, uVar8) != DataStatus::NOTLOADED)
                goto LAB_1005b89df;
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
        LAB_1005b8a4f:
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee65a0;
        }
    LAB_1005b8a5f:
        return psVar7;
    }

    // 0x1005b8aa0
    ConfigTypeLoadAllContainer<QuestType>* ConfigTypeNoPreloadContainer<QuestType>::DirectFetch(int arg1) {
        new (this) shared_ptr(PTR_NullConfigType_100ee65a0);
        return this;
    }

    // 0x1005b8c00
    ConfigTypeNoPreloadContainer<QuestType>::~ConfigTypeNoPreloadContainer() {
        ((this + 5))->~LRUCache();
    }

    // 0x1005be330
    ConfigTypeNoPreloadContainer<SeqGroupType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList<SeqGroupType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<SeqGroupType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                                js5ConfigGroup) {
        Js5ConfigGroup* js5ConfigGroup_00 = (Js5ConfigGroup*)(unsigned long)arg5;
        new ((this + 5)) LRUCache<SeqGroupType>(arg5, "LRUCache");
        (this[1]._vptr)->CacheResize = (CacheResize*)(this[1]._vptr)->CacheClean;
        js5ConfigGroup->GetTypeName(js5ConfigGroup_00);
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005be440
    void ConfigTypeNoPreloadContainer<SeqGroupType>::CacheClean(unsigned int arg1) {
        ((this + 5))->Clean((unsigned long)arg1);
    }

    // 0x1005be460
    void ConfigTypeNoPreloadContainer<SeqGroupType>::CacheResize(unsigned int arg1) {
        ((this + 5))->Resize(arg1);
    }

    // 0x1005be470
    shared_ptr* ConfigTypeNoPreloadContainer<SeqGroupType>::List(int arg1, const DataStatus** arg2) {
        LoadList** ppLVar2;
        long* plVar10;
        shared_ptr<SeqGroupType> local_48;

        int* piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
        *piVar1 = *piVar1 + 1;
        ConfigTypeNoPreloadContainer<SeqGroupType>* arg2_00 = this + 1;
        shared_ptr* psVar7 = (shared_ptr*)((this + 5))->Find((long)arg1);
        if (shared_ptr::operator_cast_to_bool(psVar7) != '\0') {
            ppLVar2 = &arg2_00->_vptr->LoadList;
            *(int*)ppLVar2 = *(int*)ppLVar2 + 1;
            if (arg2 == nullptr) {
                return psVar7;
            }
            *arg2 = (DataStatus*)DataStatus::READY;
            return psVar7;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ConfigTypeNoPreloadContainer<SeqGroupType> _vtbl* pCVar4 = this[1]._vptr;
        ConfigTypeNoPreloadContainer<SeqGroupType> _vtbl* this_00 = this[3]._vptr;
        uint64_t uVar8 = this_00->GetPrefetchPriority();
        DataStatus* pDVar9 =
            (DataStatus*)(**(void (**)(...))(pCVar4->_dtor + 64))(pCVar4, &local_58, this_00, arg1, uVar8, 1);
        if (pDVar9 == (DataStatus*)DataStatus::NOTLOADED) {
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6500;
            goto LAB_1005be5ef;
        }
        CacheReset** ppCVar3 = &arg2_00->_vptr->CacheReset;
        *(int*)ppCVar3 = *(int*)ppCVar3 + 1;
        MakeSharedPool<SeqGroupType, 64>::MakeShared<BaseTemplateConfigTypeList<SeqGroupType>*&, int&>(
            (BaseTemplateConfigTypeList<SeqGroupType>**)&local_48, (int*)arg2_00);
        if (pDVar9 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005be56f:
            plVar10 = (long*)local_48.operator->();
            (**(void (**)(...))(*plVar10 + 24))(plVar10);
            pDVar9 = (DataStatus*)(**(void (**)(...))(arg2_00->_vptr->_dtor + 72))(arg2_00->_vptr, &local_48);
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            if (pDVar9 != (DataStatus*)DataStatus::READY)
                goto LAB_1005be5df;
            psVar7 = (shared_ptr*)((this + 5))->Put(local_48, 1, (long)arg1);
        } else {
            plVar10 = (long*)local_48.operator->();
            uVar8 = *local_58;
            if ((uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10, uVar8) != DataStatus::NOTLOADED)
                goto LAB_1005be56f;
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
        LAB_1005be5df:
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6500;
        }
    LAB_1005be5ef:
        return psVar7;
    }

    // 0x1005be630
    ConfigTypeLoadAllContainer<SeqGroupType>* ConfigTypeNoPreloadContainer<SeqGroupType>::DirectFetch(int arg1) {
        new (this) shared_ptr(PTR_NullConfigType_100ee6500);
        return this;
    }

    // 0x1005be790
    ConfigTypeNoPreloadContainer<SeqGroupType>::~ConfigTypeNoPreloadContainer() {
        ((this + 5))->~LRUCache();
    }

    // 0x1005c3a70
    ConfigTypeNoPreloadContainer<LightType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList<LightType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<LightType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                             js5ConfigGroup) {
        Js5ConfigGroup* js5ConfigGroup_00 = (Js5ConfigGroup*)(unsigned long)arg5;
        new ((this + 5)) LRUCache<LightType>(arg5, "LRUCache");
        (this[1]._vptr)->CacheResize = (CacheResize*)(this[1]._vptr)->CacheClean;
        js5ConfigGroup->GetTypeName(js5ConfigGroup_00);
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005c3b80
    void ConfigTypeNoPreloadContainer<LightType>::CacheClean(unsigned int arg1) {
        ((this + 5))->Clean((unsigned long)arg1);
    }

    // 0x1005c3ba0
    void ConfigTypeNoPreloadContainer<LightType>::CacheResize(unsigned int arg1) {
        ((this + 5))->Resize(arg1);
    }

    // 0x1005c3bb0
    shared_ptr* ConfigTypeNoPreloadContainer<LightType>::List(int arg1, const DataStatus** arg2) {
        LoadList** ppLVar2;
        long* plVar10;
        shared_ptr<LightType> local_48;

        int* piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
        *piVar1 = *piVar1 + 1;
        ConfigTypeNoPreloadContainer<LightType>* arg2_00 = this + 1;
        shared_ptr* psVar7 = (shared_ptr*)((this + 5))->Find((long)arg1);
        if (shared_ptr::operator_cast_to_bool(psVar7) != '\0') {
            ppLVar2 = &arg2_00->_vptr->LoadList;
            *(int*)ppLVar2 = *(int*)ppLVar2 + 1;
            if (arg2 == nullptr) {
                return psVar7;
            }
            *arg2 = (DataStatus*)DataStatus::READY;
            return psVar7;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ConfigTypeNoPreloadContainer<LightType> _vtbl* pCVar4 = this[1]._vptr;
        ConfigTypeNoPreloadContainer<LightType> _vtbl* this_00 = this[3]._vptr;
        uint64_t uVar8 = this_00->GetPrefetchPriority();
        DataStatus* pDVar9 =
            (DataStatus*)(**(void (**)(...))(pCVar4->_dtor + 64))(pCVar4, &local_58, this_00, arg1, uVar8, 1);
        if (pDVar9 == (DataStatus*)DataStatus::NOTLOADED) {
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6590;
            goto LAB_1005c3d2f;
        }
        CacheReset** ppCVar3 = &arg2_00->_vptr->CacheReset;
        *(int*)ppCVar3 = *(int*)ppCVar3 + 1;
        MakeSharedPool<LightType, 32>::MakeShared<BaseTemplateConfigTypeList<LightType>*&, int&>(
            (BaseTemplateConfigTypeList<LightType>**)&local_48, (int*)arg2_00);
        if (pDVar9 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005c3caf:
            plVar10 = (long*)local_48.operator->();
            (**(void (**)(...))(*plVar10 + 24))(plVar10);
            pDVar9 = (DataStatus*)(**(void (**)(...))(arg2_00->_vptr->_dtor + 72))(arg2_00->_vptr, &local_48);
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            if (pDVar9 != (DataStatus*)DataStatus::READY)
                goto LAB_1005c3d1f;
            psVar7 = (shared_ptr*)((this + 5))->Put(local_48, 1, (long)arg1);
        } else {
            plVar10 = (long*)local_48.operator->();
            uVar8 = *local_58;
            if ((uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10, uVar8) != DataStatus::NOTLOADED)
                goto LAB_1005c3caf;
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
        LAB_1005c3d1f:
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6590;
        }
    LAB_1005c3d2f:
        return psVar7;
    }

    // 0x1005c3d70
    ConfigTypeLoadAllContainer<LightType>* ConfigTypeNoPreloadContainer<LightType>::DirectFetch(int arg1) {
        new (this) shared_ptr(PTR_NullConfigType_100ee6590);
        return this;
    }

    // 0x1005c3ed0
    ConfigTypeNoPreloadContainer<LightType>::~ConfigTypeNoPreloadContainer() {
        ((this + 5))->~LRUCache();
    }

    // 0x1005c91f0
    ConfigTypeNoPreloadContainer<SkyBoxType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList<SkyBoxType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<SkyBoxType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                              js5ConfigGroup) {
        Js5ConfigGroup* js5ConfigGroup_00 = (Js5ConfigGroup*)(unsigned long)arg5;
        new ((this + 5)) LRUCache<SkyBoxType>(arg5, "LRUCache");
        (this[1]._vptr)->CacheResize = (CacheResize*)(this[1]._vptr)->CacheClean;
        js5ConfigGroup->GetTypeName(js5ConfigGroup_00);
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005c9300
    void ConfigTypeNoPreloadContainer<SkyBoxType>::CacheClean(unsigned int arg1) {
        ((this + 5))->Clean((unsigned long)arg1);
    }

    // 0x1005c9320
    void ConfigTypeNoPreloadContainer<SkyBoxType>::CacheResize(unsigned int arg1) {
        ((this + 5))->Resize(arg1);
    }

    // 0x1005c9330
    shared_ptr* ConfigTypeNoPreloadContainer<SkyBoxType>::List(int arg1, const DataStatus** arg2) {
        LoadList** ppLVar2;
        long* plVar10;
        shared_ptr<SkyBoxType> local_48;

        int* piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
        *piVar1 = *piVar1 + 1;
        ConfigTypeNoPreloadContainer<SkyBoxType>* arg2_00 = this + 1;
        shared_ptr* psVar7 = (shared_ptr*)((this + 5))->Find((long)arg1);
        if (shared_ptr::operator_cast_to_bool(psVar7) != '\0') {
            ppLVar2 = &arg2_00->_vptr->LoadList;
            *(int*)ppLVar2 = *(int*)ppLVar2 + 1;
            if (arg2 == nullptr) {
                return psVar7;
            }
            *arg2 = (DataStatus*)DataStatus::READY;
            return psVar7;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ConfigTypeNoPreloadContainer<SkyBoxType> _vtbl* pCVar4 = this[1]._vptr;
        ConfigTypeNoPreloadContainer<SkyBoxType> _vtbl* this_00 = this[3]._vptr;
        uint64_t uVar8 = this_00->GetPrefetchPriority();
        DataStatus* pDVar9 =
            (DataStatus*)(**(void (**)(...))(pCVar4->_dtor + 64))(pCVar4, &local_58, this_00, arg1, uVar8, 1);
        if (pDVar9 == (DataStatus*)DataStatus::NOTLOADED) {
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee64d0;
            goto LAB_1005c94af;
        }
        CacheReset** ppCVar3 = &arg2_00->_vptr->CacheReset;
        *(int*)ppCVar3 = *(int*)ppCVar3 + 1;
        MakeSharedPool<SkyBoxType, 16>::MakeShared<BaseTemplateConfigTypeList<SkyBoxType>*&, int&>(
            (BaseTemplateConfigTypeList<SkyBoxType>**)&local_48, (int*)arg2_00);
        if (pDVar9 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005c942f:
            plVar10 = (long*)local_48.operator->();
            (**(void (**)(...))(*plVar10 + 24))(plVar10);
            pDVar9 = (DataStatus*)(**(void (**)(...))(arg2_00->_vptr->_dtor + 72))(arg2_00->_vptr, &local_48);
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            if (pDVar9 != (DataStatus*)DataStatus::READY)
                goto LAB_1005c949f;
            psVar7 = (shared_ptr*)((this + 5))->Put(local_48, 1, (long)arg1);
        } else {
            plVar10 = (long*)local_48.operator->();
            uVar8 = *local_58;
            if ((uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10, uVar8) != DataStatus::NOTLOADED)
                goto LAB_1005c942f;
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
        LAB_1005c949f:
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee64d0;
        }
    LAB_1005c94af:
        return psVar7;
    }

    // 0x1005c94f0
    ConfigTypeLoadAllContainer<SkyBoxType>* ConfigTypeNoPreloadContainer<SkyBoxType>::DirectFetch(int arg1) {
        new (this) shared_ptr(PTR_NullConfigType_100ee64d0);
        return this;
    }

    // 0x1005c9650
    ConfigTypeNoPreloadContainer<SkyBoxType>::~ConfigTypeNoPreloadContainer() {
        ((this + 5))->~LRUCache();
    }

    // 0x1005cef80
    ConfigTypeNoPreloadContainer<WaterType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList<WaterType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<WaterType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                             js5ConfigGroup) {
        Js5ConfigGroup* js5ConfigGroup_00 = (Js5ConfigGroup*)(unsigned long)arg5;
        new ((this + 5)) LRUCache<WaterType>(arg5, "LRUCache");
        (this[1]._vptr)->CacheResize = (CacheResize*)(this[1]._vptr)->CacheClean;
        js5ConfigGroup->GetTypeName(js5ConfigGroup_00);
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005cf090
    void ConfigTypeNoPreloadContainer<WaterType>::CacheClean(unsigned int arg1) {
        ((this + 5))->Clean((unsigned long)arg1);
    }

    // 0x1005cf0b0
    void ConfigTypeNoPreloadContainer<WaterType>::CacheResize(unsigned int arg1) {
        ((this + 5))->Resize(arg1);
    }

    // 0x1005cf0c0
    shared_ptr* ConfigTypeNoPreloadContainer<WaterType>::List(int arg1, const DataStatus** arg2) {
        LoadList** ppLVar2;
        long* plVar10;
        shared_ptr<WaterType> local_48;

        int* piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
        *piVar1 = *piVar1 + 1;
        ConfigTypeNoPreloadContainer<WaterType>* arg2_00 = this + 1;
        shared_ptr* psVar7 = (shared_ptr*)((this + 5))->Find((long)arg1);
        if (shared_ptr::operator_cast_to_bool(psVar7) != '\0') {
            ppLVar2 = &arg2_00->_vptr->LoadList;
            *(int*)ppLVar2 = *(int*)ppLVar2 + 1;
            if (arg2 == nullptr) {
                return psVar7;
            }
            *arg2 = (DataStatus*)DataStatus::READY;
            return psVar7;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ConfigTypeNoPreloadContainer<WaterType> _vtbl* pCVar4 = this[1]._vptr;
        ConfigTypeNoPreloadContainer<WaterType> _vtbl* this_00 = this[3]._vptr;
        uint64_t uVar8 = this_00->GetPrefetchPriority();
        DataStatus* pDVar9 =
            (DataStatus*)(**(void (**)(...))(pCVar4->_dtor + 64))(pCVar4, &local_58, this_00, arg1, uVar8, 1);
        if (pDVar9 == (DataStatus*)DataStatus::NOTLOADED) {
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee65a8;
            goto LAB_1005cf23f;
        }
        CacheReset** ppCVar3 = &arg2_00->_vptr->CacheReset;
        *(int*)ppCVar3 = *(int*)ppCVar3 + 1;
        MakeSharedPool<WaterType, 16>::MakeShared<BaseTemplateConfigTypeList<WaterType>*&, int&>(
            (BaseTemplateConfigTypeList<WaterType>**)&local_48, (int*)arg2_00);
        if (pDVar9 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005cf1bf:
            plVar10 = (long*)local_48.operator->();
            (**(void (**)(...))(*plVar10 + 24))(plVar10);
            pDVar9 = (DataStatus*)(**(void (**)(...))(arg2_00->_vptr->_dtor + 72))(arg2_00->_vptr, &local_48);
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            if (pDVar9 != (DataStatus*)DataStatus::READY)
                goto LAB_1005cf22f;
            psVar7 = (shared_ptr*)((this + 5))->Put(local_48, 1, (long)arg1);
        } else {
            plVar10 = (long*)local_48.operator->();
            uVar8 = *local_58;
            if ((uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10, uVar8) != DataStatus::NOTLOADED)
                goto LAB_1005cf1bf;
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
        LAB_1005cf22f:
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee65a8;
        }
    LAB_1005cf23f:
        return psVar7;
    }

    // 0x1005cf280
    ConfigTypeLoadAllContainer<WaterType>* ConfigTypeNoPreloadContainer<WaterType>::DirectFetch(int arg1) {
        new (this) shared_ptr(PTR_NullConfigType_100ee65a8);
        return this;
    }

    // 0x1005cf3e0
    ConfigTypeNoPreloadContainer<WaterType>::~ConfigTypeNoPreloadContainer() {
        ((this + 5))->~LRUCache();
    }

    // 0x1005d3340
    ConfigTypeNoPreloadContainer<CursorType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList<CursorType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<CursorType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                              js5ConfigGroup) {
        Js5ConfigGroup* js5ConfigGroup_00 = (Js5ConfigGroup*)(unsigned long)arg5;
        new ((this + 5)) LRUCache<CursorType>(arg5, "LRUCache");
        (this[1]._vptr)->CacheResize = (CacheResize*)(this[1]._vptr)->CacheClean;
        js5ConfigGroup->GetTypeName(js5ConfigGroup_00);
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005d3450
    void ConfigTypeNoPreloadContainer<CursorType>::CacheClean(unsigned int arg1) {
        ((this + 5))->Clean((unsigned long)arg1);
    }

    // 0x1005d3470
    void ConfigTypeNoPreloadContainer<CursorType>::CacheResize(unsigned int arg1) {
        ((this + 5))->Resize(arg1);
    }

    // 0x1005d3480
    shared_ptr* ConfigTypeNoPreloadContainer<CursorType>::List(int arg1, const DataStatus** arg2) {
        LoadList** ppLVar2;
        long* plVar10;
        shared_ptr<CursorType> local_48;

        int* piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
        *piVar1 = *piVar1 + 1;
        ConfigTypeNoPreloadContainer<CursorType>* arg2_00 = this + 1;
        shared_ptr* psVar7 = (shared_ptr*)((this + 5))->Find((long)arg1);
        if (shared_ptr::operator_cast_to_bool(psVar7) != '\0') {
            ppLVar2 = &arg2_00->_vptr->LoadList;
            *(int*)ppLVar2 = *(int*)ppLVar2 + 1;
            if (arg2 == nullptr) {
                return psVar7;
            }
            *arg2 = (DataStatus*)DataStatus::READY;
            return psVar7;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ConfigTypeNoPreloadContainer<CursorType> _vtbl* pCVar4 = this[1]._vptr;
        ConfigTypeNoPreloadContainer<CursorType> _vtbl* this_00 = this[3]._vptr;
        uint64_t uVar8 = this_00->GetPrefetchPriority();
        DataStatus* pDVar9 =
            (DataStatus*)(**(void (**)(...))(pCVar4->_dtor + 64))(pCVar4, &local_58, this_00, arg1, uVar8, 1);
        if (pDVar9 == (DataStatus*)DataStatus::NOTLOADED) {
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee64c8;
            goto LAB_1005d35ff;
        }
        CacheReset** ppCVar3 = &arg2_00->_vptr->CacheReset;
        *(int*)ppCVar3 = *(int*)ppCVar3 + 1;
        MakeSharedPool<CursorType, 64>::MakeShared<BaseTemplateConfigTypeList<CursorType>*&, int&>(
            (BaseTemplateConfigTypeList<CursorType>**)&local_48, (int*)arg2_00);
        if (pDVar9 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005d357f:
            plVar10 = (long*)local_48.operator->();
            (**(void (**)(...))(*plVar10 + 24))(plVar10);
            pDVar9 = (DataStatus*)(**(void (**)(...))(arg2_00->_vptr->_dtor + 72))(arg2_00->_vptr, &local_48);
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            if (pDVar9 != (DataStatus*)DataStatus::READY)
                goto LAB_1005d35ef;
            psVar7 = (shared_ptr*)((this + 5))->Put(local_48, 1, (long)arg1);
        } else {
            plVar10 = (long*)local_48.operator->();
            uVar8 = *local_58;
            if ((uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10, uVar8) != DataStatus::NOTLOADED)
                goto LAB_1005d357f;
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
        LAB_1005d35ef:
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee64c8;
        }
    LAB_1005d35ff:
        return psVar7;
    }

    // 0x1005d3640
    ConfigTypeLoadAllContainer<CursorType>* ConfigTypeNoPreloadContainer<CursorType>::DirectFetch(int arg1) {
        new (this) shared_ptr(PTR_NullConfigType_100ee64c8);
        return this;
    }

    // 0x1005d37a0
    ConfigTypeNoPreloadContainer<CursorType>::~ConfigTypeNoPreloadContainer() {
        ((this + 5))->~LRUCache();
    }

    // 0x1005d8900
    ConfigTypeNoPreloadContainer<WorldAreaType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList<WorldAreaType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<WorldAreaType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                                 js5ConfigGroup) {
        Js5ConfigGroup* js5ConfigGroup_00 = (Js5ConfigGroup*)(unsigned long)arg5;
        new ((this + 5)) LRUCache<WorldAreaType>(arg5, "LRUCache");
        (this[1]._vptr)->CacheResize = (CacheResize*)(this[1]._vptr)->CacheClean;
        js5ConfigGroup->GetTypeName(js5ConfigGroup_00);
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005d8a10
    void ConfigTypeNoPreloadContainer<WorldAreaType>::CacheClean(unsigned int arg1) {
        ((this + 5))->Clean((unsigned long)arg1);
    }

    // 0x1005d8a30
    void ConfigTypeNoPreloadContainer<WorldAreaType>::CacheResize(unsigned int arg1) {
        ((this + 5))->Resize(arg1);
    }

    // 0x1005d8a40
    shared_ptr* ConfigTypeNoPreloadContainer<WorldAreaType>::List(int arg1, const DataStatus** arg2) {
        LoadList** ppLVar2;
        long* plVar10;
        shared_ptr<WorldAreaType> local_48;

        int* piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
        *piVar1 = *piVar1 + 1;
        ConfigTypeNoPreloadContainer<WorldAreaType>* arg2_00 = this + 1;
        shared_ptr* psVar7 = (shared_ptr*)((this + 5))->Find((long)arg1);
        if (shared_ptr::operator_cast_to_bool(psVar7) != '\0') {
            ppLVar2 = &arg2_00->_vptr->LoadList;
            *(int*)ppLVar2 = *(int*)ppLVar2 + 1;
            if (arg2 == nullptr) {
                return psVar7;
            }
            *arg2 = (DataStatus*)DataStatus::READY;
            return psVar7;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ConfigTypeNoPreloadContainer<WorldAreaType> _vtbl* pCVar4 = this[1]._vptr;
        ConfigTypeNoPreloadContainer<WorldAreaType> _vtbl* this_00 = this[3]._vptr;
        uint64_t uVar8 = this_00->GetPrefetchPriority();
        DataStatus* pDVar9 =
            (DataStatus*)(**(void (**)(...))(pCVar4->_dtor + 64))(pCVar4, &local_58, this_00, arg1, uVar8, 1);
        if (pDVar9 == (DataStatus*)DataStatus::NOTLOADED) {
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6508;
            goto LAB_1005d8bbf;
        }
        CacheReset** ppCVar3 = &arg2_00->_vptr->CacheReset;
        *(int*)ppCVar3 = *(int*)ppCVar3 + 1;
        MakeSharedPool<WorldAreaType, 1024>::MakeShared<BaseTemplateConfigTypeList<WorldAreaType>*&, int&>(
            (BaseTemplateConfigTypeList<WorldAreaType>**)&local_48, (int*)arg2_00);
        if (pDVar9 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005d8b3f:
            plVar10 = (long*)local_48.operator->();
            (**(void (**)(...))(*plVar10 + 24))(plVar10);
            pDVar9 = (DataStatus*)(**(void (**)(...))(arg2_00->_vptr->_dtor + 72))(arg2_00->_vptr, &local_48);
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            if (pDVar9 != (DataStatus*)DataStatus::READY)
                goto LAB_1005d8baf;
            psVar7 = (shared_ptr*)((this + 5))->Put(local_48, 1, (long)arg1);
        } else {
            plVar10 = (long*)local_48.operator->();
            uVar8 = *local_58;
            if ((uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10, uVar8) != DataStatus::NOTLOADED)
                goto LAB_1005d8b3f;
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
        LAB_1005d8baf:
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6508;
        }
    LAB_1005d8bbf:
        return psVar7;
    }

    // 0x1005d8c00
    ConfigTypeLoadAllContainer<WorldAreaType>* ConfigTypeNoPreloadContainer<WorldAreaType>::DirectFetch(int arg1) {
        new (this) shared_ptr(PTR_NullConfigType_100ee6508);
        return this;
    }

    // 0x1005d8d60
    ConfigTypeNoPreloadContainer<WorldAreaType>::~ConfigTypeNoPreloadContainer() {
        ((this + 5))->~LRUCache();
    }

    // 0x1005de220
    ConfigTypeNoPreloadContainer<EnumType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList<EnumType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<EnumType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                            js5ConfigGroup) {
        Js5ConfigGroup* js5ConfigGroup_00 = (Js5ConfigGroup*)(unsigned long)arg5;
        new ((this + 5)) LRUCache<EnumType>(arg5, "LRUCache");
        (this[1]._vptr)->CacheResize = (CacheResize*)(this[1]._vptr)->CacheClean;
        js5ConfigGroup->GetTypeName(js5ConfigGroup_00);
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005de330
    void ConfigTypeNoPreloadContainer<EnumType>::CacheClean(unsigned int arg1) {
        ((this + 5))->Clean((unsigned long)arg1);
    }

    // 0x1005de350
    void ConfigTypeNoPreloadContainer<EnumType>::CacheResize(unsigned int arg1) {
        ((this + 5))->Resize(arg1);
    }

    // 0x1005de360
    shared_ptr* ConfigTypeNoPreloadContainer<EnumType>::List(int arg1, const DataStatus** arg2) {
        LoadList** ppLVar2;
        long* plVar10;
        shared_ptr<EnumType> local_48;

        int* piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
        *piVar1 = *piVar1 + 1;
        ConfigTypeNoPreloadContainer<EnumType>* arg2_00 = this + 1;
        shared_ptr* psVar7 = (shared_ptr*)((this + 5))->Find((long)arg1);
        if (shared_ptr::operator_cast_to_bool(psVar7) != '\0') {
            ppLVar2 = &arg2_00->_vptr->LoadList;
            *(int*)ppLVar2 = *(int*)ppLVar2 + 1;
            if (arg2 == nullptr) {
                return psVar7;
            }
            *arg2 = (DataStatus*)DataStatus::READY;
            return psVar7;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ConfigTypeNoPreloadContainer<EnumType> _vtbl* pCVar4 = this[1]._vptr;
        ConfigTypeNoPreloadContainer<EnumType> _vtbl* this_00 = this[3]._vptr;
        uint64_t uVar8 = this_00->GetPrefetchPriority();
        DataStatus* pDVar9 =
            (DataStatus*)(**(void (**)(...))(pCVar4->_dtor + 64))(pCVar4, &local_58, this_00, arg1, uVar8, 1);
        if (pDVar9 == (DataStatus*)DataStatus::NOTLOADED) {
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6580;
            goto LAB_1005de4df;
        }
        CacheReset** ppCVar3 = &arg2_00->_vptr->CacheReset;
        *(int*)ppCVar3 = *(int*)ppCVar3 + 1;
        MakeSharedPool<EnumType, 128>::MakeShared<BaseTemplateConfigTypeList<EnumType>*&, int&>(
            (BaseTemplateConfigTypeList<EnumType>**)&local_48, (int*)arg2_00);
        if (pDVar9 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005de45f:
            plVar10 = (long*)local_48.operator->();
            (**(void (**)(...))(*plVar10 + 24))(plVar10);
            pDVar9 = (DataStatus*)(**(void (**)(...))(arg2_00->_vptr->_dtor + 72))(arg2_00->_vptr, &local_48);
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            if (pDVar9 != (DataStatus*)DataStatus::READY)
                goto LAB_1005de4cf;
            psVar7 = (shared_ptr*)((this + 5))->Put(local_48, 1, (long)arg1);
        } else {
            plVar10 = (long*)local_48.operator->();
            uVar8 = *local_58;
            if ((uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10, uVar8) != DataStatus::NOTLOADED)
                goto LAB_1005de45f;
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
        LAB_1005de4cf:
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6580;
        }
    LAB_1005de4df:
        return psVar7;
    }

    // 0x1005de520
    ConfigTypeLoadAllContainer<EnumType>* ConfigTypeNoPreloadContainer<EnumType>::DirectFetch(int arg1) {
        new (this) shared_ptr(PTR_NullConfigType_100ee6580);
        return this;
    }

    // 0x1005de680
    ConfigTypeNoPreloadContainer<EnumType>::~ConfigTypeNoPreloadContainer() {
        ((this + 5))->~LRUCache();
    }

    // 0x1005e4580
    ConfigTypeNoPreloadContainer<EffectAnimType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList<EffectAnimType>& baseTemplateConfigTypeList,
        Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
        const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<EffectAnimType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                                  js5ConfigGroup) {
        Js5ConfigGroup* js5ConfigGroup_00 = (Js5ConfigGroup*)(unsigned long)arg5;
        new ((this + 5)) LRUCache<EffectAnimType>(arg5, "LRUCache");
        (this[1]._vptr)->CacheResize = (CacheResize*)(this[1]._vptr)->CacheClean;
        js5ConfigGroup->GetTypeName(js5ConfigGroup_00);
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005e4690
    void ConfigTypeNoPreloadContainer<EffectAnimType>::CacheClean(unsigned int arg1) {
        ((this + 5))->Clean((unsigned long)arg1);
    }

    // 0x1005e46b0
    void ConfigTypeNoPreloadContainer<EffectAnimType>::CacheResize(unsigned int arg1) {
        ((this + 5))->Resize(arg1);
    }

    // 0x1005e46c0
    shared_ptr* ConfigTypeNoPreloadContainer<EffectAnimType>::List(int arg1, const DataStatus** arg2) {
        LoadList** ppLVar2;
        long* plVar10;
        shared_ptr<EffectAnimType> local_48;

        int* piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
        *piVar1 = *piVar1 + 1;
        ConfigTypeNoPreloadContainer<EffectAnimType>* arg2_00 = this + 1;
        shared_ptr* psVar7 = (shared_ptr*)((this + 5))->Find((long)arg1);
        if (shared_ptr::operator_cast_to_bool(psVar7) != '\0') {
            ppLVar2 = &arg2_00->_vptr->LoadList;
            *(int*)ppLVar2 = *(int*)ppLVar2 + 1;
            if (arg2 == nullptr) {
                return psVar7;
            }
            *arg2 = (DataStatus*)DataStatus::READY;
            return psVar7;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ConfigTypeNoPreloadContainer<EffectAnimType> _vtbl* pCVar4 = this[1]._vptr;
        ConfigTypeNoPreloadContainer<EffectAnimType> _vtbl* this_00 = this[3]._vptr;
        uint64_t uVar8 = this_00->GetPrefetchPriority();
        DataStatus* pDVar9 =
            (DataStatus*)(**(void (**)(...))(pCVar4->_dtor + 64))(pCVar4, &local_58, this_00, arg1, uVar8, 1);
        if (pDVar9 == (DataStatus*)DataStatus::NOTLOADED) {
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6510;
            goto LAB_1005e483f;
        }
        CacheReset** ppCVar3 = &arg2_00->_vptr->CacheReset;
        *(int*)ppCVar3 = *(int*)ppCVar3 + 1;
        MakeSharedPool<EffectAnimType, 256>::MakeShared<BaseTemplateConfigTypeList<EffectAnimType>*&, int&>(
            (BaseTemplateConfigTypeList<EffectAnimType>**)&local_48, (int*)arg2_00);
        if (pDVar9 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005e47bf:
            plVar10 = (long*)local_48.operator->();
            (**(void (**)(...))(*plVar10 + 24))(plVar10);
            pDVar9 = (DataStatus*)(**(void (**)(...))(arg2_00->_vptr->_dtor + 72))(arg2_00->_vptr, &local_48);
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            if (pDVar9 != (DataStatus*)DataStatus::READY)
                goto LAB_1005e482f;
            psVar7 = (shared_ptr*)((this + 5))->Put(local_48, 1, (long)arg1);
        } else {
            plVar10 = (long*)local_48.operator->();
            uVar8 = *local_58;
            if ((uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10, uVar8) != DataStatus::NOTLOADED)
                goto LAB_1005e47bf;
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
        LAB_1005e482f:
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6510;
        }
    LAB_1005e483f:
        return psVar7;
    }

    // 0x1005e4880
    ConfigTypeLoadAllContainer<EffectAnimType>* ConfigTypeNoPreloadContainer<EffectAnimType>::DirectFetch(int arg1) {
        new (this) shared_ptr(PTR_NullConfigType_100ee6510);
        return this;
    }

    // 0x1005e49e0
    ConfigTypeNoPreloadContainer<EffectAnimType>::~ConfigTypeNoPreloadContainer() {
        ((this + 5))->~LRUCache();
    }

    // 0x1005ea2d0
    ConfigTypeNoPreloadContainer<StructType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList<StructType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<StructType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                              js5ConfigGroup) {
        Js5ConfigGroup* js5ConfigGroup_00 = (Js5ConfigGroup*)(unsigned long)arg5;
        new ((this + 5)) LRUCache<StructType>(arg5, "LRUCache");
        (this[1]._vptr)->CacheResize = (CacheResize*)(this[1]._vptr)->CacheClean;
        js5ConfigGroup->GetTypeName(js5ConfigGroup_00);
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005ea3e0
    void ConfigTypeNoPreloadContainer<StructType>::CacheClean(unsigned int arg1) {
        ((this + 5))->Clean((unsigned long)arg1);
    }

    // 0x1005ea400
    void ConfigTypeNoPreloadContainer<StructType>::CacheResize(unsigned int arg1) {
        ((this + 5))->Resize(arg1);
    }

    // 0x1005ea410
    shared_ptr* ConfigTypeNoPreloadContainer<StructType>::List(int arg1, const DataStatus** arg2) {
        LoadList** ppLVar2;
        long* plVar10;
        shared_ptr<StructType> local_48;

        int* piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
        *piVar1 = *piVar1 + 1;
        ConfigTypeNoPreloadContainer<StructType>* arg2_00 = this + 1;
        shared_ptr* psVar7 = (shared_ptr*)((this + 5))->Find((long)arg1);
        if (shared_ptr::operator_cast_to_bool(psVar7) != '\0') {
            ppLVar2 = &arg2_00->_vptr->LoadList;
            *(int*)ppLVar2 = *(int*)ppLVar2 + 1;
            if (arg2 == nullptr) {
                return psVar7;
            }
            *arg2 = (DataStatus*)DataStatus::READY;
            return psVar7;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ConfigTypeNoPreloadContainer<StructType> _vtbl* pCVar4 = this[1]._vptr;
        ConfigTypeNoPreloadContainer<StructType> _vtbl* this_00 = this[3]._vptr;
        uint64_t uVar8 = this_00->GetPrefetchPriority();
        DataStatus* pDVar9 =
            (DataStatus*)(**(void (**)(...))(pCVar4->_dtor + 64))(pCVar4, &local_58, this_00, arg1, uVar8, 1);
        if (pDVar9 == (DataStatus*)DataStatus::NOTLOADED) {
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee64d8;
            goto LAB_1005ea58f;
        }
        CacheReset** ppCVar3 = &arg2_00->_vptr->CacheReset;
        *(int*)ppCVar3 = *(int*)ppCVar3 + 1;
        MakeSharedPool<StructType, 1024>::MakeShared<BaseTemplateConfigTypeList<StructType>*&, int&>(
            (BaseTemplateConfigTypeList<StructType>**)&local_48, (int*)arg2_00);
        if (pDVar9 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005ea50f:
            plVar10 = (long*)local_48.operator->();
            (**(void (**)(...))(*plVar10 + 24))(plVar10);
            pDVar9 = (DataStatus*)(**(void (**)(...))(arg2_00->_vptr->_dtor + 72))(arg2_00->_vptr, &local_48);
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            if (pDVar9 != (DataStatus*)DataStatus::READY)
                goto LAB_1005ea57f;
            psVar7 = (shared_ptr*)((this + 5))->Put(local_48, 1, (long)arg1);
        } else {
            plVar10 = (long*)local_48.operator->();
            uVar8 = *local_58;
            if ((uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10, uVar8) != DataStatus::NOTLOADED)
                goto LAB_1005ea50f;
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
        LAB_1005ea57f:
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee64d8;
        }
    LAB_1005ea58f:
        return psVar7;
    }

    // 0x1005ea5d0
    ConfigTypeLoadAllContainer<StructType>* ConfigTypeNoPreloadContainer<StructType>::DirectFetch(int arg1) {
        new (this) shared_ptr(PTR_NullConfigType_100ee64d8);
        return this;
    }

    // 0x1005ea730
    ConfigTypeNoPreloadContainer<StructType>::~ConfigTypeNoPreloadContainer() {
        ((this + 5))->~LRUCache();
    }

    // 0x1005ef970
    ConfigTypeNoPreloadContainer<AchievementType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList<AchievementType>& baseTemplateConfigTypeList,
        Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
        const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<AchievementType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                                   js5ConfigGroup) {
        Js5ConfigGroup* js5ConfigGroup_00 = (Js5ConfigGroup*)(unsigned long)arg5;
        new ((this + 5)) LRUCache<AchievementType>(arg5, "LRUCache");
        (this[1]._vptr)->CacheResize = (CacheResize*)(this[1]._vptr)->CacheClean;
        js5ConfigGroup->GetTypeName(js5ConfigGroup_00);
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005efa80
    void ConfigTypeNoPreloadContainer<AchievementType>::CacheClean(unsigned int arg1) {
        ((this + 5))->Clean((unsigned long)arg1);
    }

    // 0x1005efaa0
    void ConfigTypeNoPreloadContainer<AchievementType>::CacheResize(unsigned int arg1) {
        ((this + 5))->Resize(arg1);
    }

    // 0x1005efab0
    shared_ptr* ConfigTypeNoPreloadContainer<AchievementType>::List(int arg1, const DataStatus** arg2) {
        LoadList** ppLVar2;
        long* plVar10;
        shared_ptr<AchievementType> local_48;

        int* piVar1 = (int*)((long)&(this[1]._vptr)->_deleting_dtor + 4);
        *piVar1 = *piVar1 + 1;
        ConfigTypeNoPreloadContainer<AchievementType>* arg2_00 = this + 1;
        shared_ptr* psVar7 = (shared_ptr*)((this + 5))->Find((long)arg1);
        if (shared_ptr::operator_cast_to_bool(psVar7) != '\0') {
            ppLVar2 = &arg2_00->_vptr->LoadList;
            *(int*)ppLVar2 = *(int*)ppLVar2 + 1;
            if (arg2 == nullptr) {
                return psVar7;
            }
            *arg2 = (DataStatus*)DataStatus::READY;
            return psVar7;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ConfigTypeNoPreloadContainer<AchievementType> _vtbl* pCVar4 = this[1]._vptr;
        ConfigTypeNoPreloadContainer<AchievementType> _vtbl* this_00 = this[3]._vptr;
        uint64_t uVar8 = this_00->GetPrefetchPriority();
        DataStatus* pDVar9 =
            (DataStatus*)(**(void (**)(...))(pCVar4->_dtor + 64))(pCVar4, &local_58, this_00, arg1, uVar8, 1);
        if (pDVar9 == (DataStatus*)DataStatus::NOTLOADED) {
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6520;
            goto LAB_1005efc2f;
        }
        CacheReset** ppCVar3 = &arg2_00->_vptr->CacheReset;
        *(int*)ppCVar3 = *(int*)ppCVar3 + 1;
        MakeSharedPool<AchievementType, 256>::MakeShared<BaseTemplateConfigTypeList<AchievementType>*&, int&>(
            (BaseTemplateConfigTypeList<AchievementType>**)&local_48, (int*)arg2_00);
        if (pDVar9 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005efbaf:
            plVar10 = (long*)local_48.operator->();
            (**(void (**)(...))(*plVar10 + 24))(plVar10);
            pDVar9 = (DataStatus*)(**(void (**)(...))(arg2_00->_vptr->_dtor + 72))(arg2_00->_vptr, &local_48);
            if (arg2 != nullptr) {
                *arg2 = pDVar9;
            }
            if (pDVar9 != (DataStatus*)DataStatus::READY)
                goto LAB_1005efc1f;
            psVar7 = (shared_ptr*)((this + 5))->Put(local_48, 1, (long)arg1);
        } else {
            plVar10 = (long*)local_48.operator->();
            uVar8 = *local_58;
            if ((uint8_t*)(**(void (**)(...))(*plVar10 + 32))(plVar10, uVar8) != DataStatus::NOTLOADED)
                goto LAB_1005efbaf;
            piVar1 = (int*)((long)&arg2_00->_vptr->CacheReset + 4);
            *piVar1 = *piVar1 + 1;
        LAB_1005efc1f:
            psVar7 = (shared_ptr*)PTR_NullConfigType_100ee6520;
        }
    LAB_1005efc2f:
        return psVar7;
    }

    // 0x1005efc70
    ConfigTypeLoadAllContainer<AchievementType>* ConfigTypeNoPreloadContainer<AchievementType>::DirectFetch(int arg1) {
        new (this) shared_ptr(PTR_NullConfigType_100ee6520);
        return this;
    }

    // 0x1005efdd0
    ConfigTypeNoPreloadContainer<AchievementType>::~ConfigTypeNoPreloadContainer() {
        ((this + 5))->~LRUCache();
    }

} // namespace jag::game
