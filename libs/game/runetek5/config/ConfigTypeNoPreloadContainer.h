// libs/game/runetek5/config/ConfigTypeNoPreloadContainer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    template <typename...> // 30 instantiations, e.g. <AchievementType>, <BASType>, <CursorType>
    class ConfigTypeNoPreloadContainer {
    public:
        // virtual methods in vtable order
        virtual ~ConfigTypeNoPreloadContainer();
        virtual void CacheReset();
        virtual void CacheClean(unsigned int);
        virtual void CacheResize(unsigned int);
        virtual shared_ptr* List(int, DataStatus const**);
        virtual ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType>* DirectFetch(int);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>&,
                                     Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*,
                                     unsigned int);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<VarType>&, Js5ResourceProvider&,
                                     Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        DirectFetch(int);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<SeqType>&, Js5ResourceProvider&,
                                     Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<ObjType>&, Js5ResourceProvider&,
                                     Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<NPCType>&, Js5ResourceProvider&,
                                     Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<LocType>&, Js5ResourceProvider&,
                                     Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<ParamType>&, Js5ResourceProvider&,
                                     Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<DBRowType>&, Js5ResourceProvider&,
                                     Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<DBTableType>&, Js5ResourceProvider&,
                                     Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<InvType>&, Js5ResourceProvider&,
                                     Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<VarBitType>&, Js5ResourceProvider&,
                                     Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<BASType>&, Js5ResourceProvider&,
                                     Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<FloorUnderlayType>&, Js5ResourceProvider&,
                                     Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<FloorOverlayType>&, Js5ResourceProvider&,
                                     Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<HitmarkType>&, Js5ResourceProvider&,
                                     Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<HeadbarType>&, Js5ResourceProvider&,
                                     Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<IDKType>&, Js5ResourceProvider&,
                                     Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<MapElementType>&, Js5ResourceProvider&,
                                     Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<MSIType>&, Js5ResourceProvider&,
                                     Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<QuestType>&, Js5ResourceProvider&,
                                     Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<SeqGroupType>&, Js5ResourceProvider&,
                                     Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<LightType>&, Js5ResourceProvider&,
                                     Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<SkyBoxType>&, Js5ResourceProvider&,
                                     Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<WaterType>&, Js5ResourceProvider&,
                                     Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<CursorType>&, Js5ResourceProvider&,
                                     Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<WorldAreaType>&, Js5ResourceProvider&,
                                     Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<EnumType>&, Js5ResourceProvider&,
                                     Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<EffectAnimType>&, Js5ResourceProvider&,
                                     Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<StructType>&, Js5ResourceProvider&,
                                     Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
        ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<AchievementType>&, Js5ResourceProvider&,
                                     Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int);
    };

    // 0x10013f720, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ConfigTypeNoPreloadContainer<oldscape::configdecoder::OldscapeVarType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x10013f740, 144 bytes, base-object constructor, inline, placed by class name and debug map
    // ConfigTypeNoPreloadContainer<oldscape::configdecoder::OldscapeVarType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeNoPreloadContainer<oldscape::configdecoder::OldscapeVarType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList* param_1, Js5ResourceProvider* param_2, Js5ArchiveSettings* param_3,
        Js5ConfigGroup* param_4, uint param_5) {
        undefined8 uVar1;

        new (this)
            BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>(param_1, param_2, param_3, param_4);
        *(undefined**)this = PTR_vtable_100ee83e0 + 16;
        new ((this + 40)) LRUCache<oldscape::configdecoder::OldscapeVarType>(param_5, "LRUCache");
        *(undefined8*)(*(long*)(this + 8) + 40) = *(undefined8*)(*(long*)(this + 8) + 32);
        uVar1 = Js5ConfigGroup::GetTypeName(param_4);
        ((this + 40))->~AutoSingleton(uVar1);
    }

    // 0x10013f820, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<oldscape::configdecoder::OldscapeVarType>::~ConfigTypeNoPreloadContainer(): jumps straight to the base-object destructor

    // 0x10013f830, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<oldscape::configdecoder::OldscapeVarType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<oldscape::configdecoder::OldscapeVarType>::~ConfigTypeNoPreloadContainer() {
        ~ConfigTypeNoPreloadContainer(this);
        operator_delete(this);
    }

    // 0x10013f850, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<oldscape::configdecoder::OldscapeVarType>::CacheReset()
    /* ConfigTypeNoPreloadContainer<VarType>::CacheReset() */

    void ConfigTypeNoPreloadContainer<VarType>::CacheReset() {
        ((this + 40))->Reset();
    }

    // 0x10013f860, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<oldscape::configdecoder::OldscapeVarType>::CacheClean(unsigned int)
    void ConfigTypeNoPreloadContainer<oldscape::configdecoder::OldscapeVarType>::CacheClean(uint param_1) {
        ((this + 40))->Clean((ulong)param_1);
    }

    // 0x10013f880, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<oldscape::configdecoder::OldscapeVarType>::CacheResize(unsigned int)
    void ConfigTypeNoPreloadContainer<oldscape::configdecoder::OldscapeVarType>::CacheResize(uint param_1) {
        ((this + 40))->Resize(param_1);
    }

    // 0x10013f890, 448 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<oldscape::configdecoder::OldscapeVarType>::List(int, DataStatus const**)
    shared_ptr* ConfigTypeNoPreloadContainer<oldscape::configdecoder::OldscapeVarType>::List(int param_1,
                                                                                             DataStatus** param_2) {
        OldscapeVarType* this_00;
        int* piVar1;
        Js5ArchiveSettings* this_01;
        uint uVar2;
        shared_ptr* psVar4;
        undefined8 uVar5;
        DataStatus* pDVar6;
        long* plVar7;
        uint* puVar9;
        _func_decltype_nullptr* p_Var10;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        uint local_34;

        *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
        this_00 = (OldscapeVarType*)(this + 8);
        p_Var10 = (_func_decltype_nullptr*)(long)param_1;
        local_34 = param_1;
        psVar4 = (shared_ptr*)((this + 40))->Find((ulonglong)p_Var10);
        if (shared_ptr::operator_cast_to_bool(psVar4)) {
            *(int*)(this_00->field_0 + 2) = *(int*)(this_00->field_0 + 2) + 1;
            if (param_2 == (DataStatus**)0) {
                return psVar4;
            }
            *param_2 = (DataStatus*)DataStatus::READY;
            return psVar4;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, p_Var10);
        uVar2 = local_34;
        plVar7 = *(long**)(this + 8);
        this_01 = *(Js5ArchiveSettings**)(this + 24);
        uVar5 = this_01->GetPrefetchPriority();
        puVar9 = (uint*)(ulong)uVar2;
        pDVar6 = (DataStatus*)(**(code**)(*plVar7 + 64))(plVar7, local_58, this_01, puVar9, uVar5, 1);
        if (pDVar6 == (DataStatus*)DataStatus::NOTLOADED) {
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar6;
            }
            piVar1 = (int*)((long)this_00->field_0 + 28);
            *piVar1 = *piVar1 + 1;
            psVar4 = (shared_ptr*)&oldscape::configdecoder::OldscapeVarType::NullConfigType;
            goto LAB_10013fa0f;
        }
        *(int*)(this_00->field_0 + 3) = *(int*)(this_00->field_0 + 3) + 1;
        oldscape::configdecoder::OldscapeVarType::MakeShared<
            BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>*&, unsigned int&>(
            &local_48, this_00, (BaseTemplateConfigTypeList**)&local_34, puVar9);
        if (pDVar6 == (DataStatus*)DataStatus::MISSING) {
        LAB_10013f98f:
            plVar7 = (long*)shared_ptr<oldscape::configdecoder::OldscapeVarType>::operator->(
                (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)&local_48);
            (**(code**)(*plVar7 + 24))(plVar7);
            pDVar6 = (DataStatus*)(**(code**)(*this_00->field_0 + 72))(this_00->field_0, &local_48);
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar6;
            }
            if (pDVar6 != (DataStatus*)DataStatus::READY)
                goto LAB_10013f9ff;
            psVar4 = (shared_ptr*)((this + 40))->Put(&local_48, 1, (long)(int)local_34);
        } else {
            plVar7 = (long*)shared_ptr<oldscape::configdecoder::OldscapeVarType>::operator->(
                (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)&local_48);
            uVar5 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58);
            if ((undefined*)(**(code**)(*plVar7 + 32))(plVar7, uVar5) != DataStatus::NOTLOADED)
                goto LAB_10013f98f;
            piVar1 = (int*)((long)this_00->field_0 + 28);
            *piVar1 = *piVar1 + 1;
        LAB_10013f9ff:
            psVar4 = (shared_ptr*)&oldscape::configdecoder::OldscapeVarType::NullConfigType;
        }
        local_48.~shared_ptr();
    LAB_10013fa0f:
        local_58->~shared_ptr();
        return psVar4;
    }

    // 0x10013fa50, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<oldscape::configdecoder::OldscapeVarType>::DirectFetch(int)
    /* ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType>::DirectFetch(int)
    */

    ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType>*
    ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType>::DirectFetch(int param_1) {
        new (this)
            shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)&oldscape::configdecoder::OldscapeVarType::NullConfigType);
        return this;
    }

    // 0x10013fd40, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<oldscape::configdecoder::OldscapeVarType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<oldscape::configdecoder::OldscapeVarType>::~ConfigTypeNoPreloadContainer() {
        *(undefined**)this = PTR_vtable_100ee83e0 + 16;
        ((this + 40))->~LRUCache();
        ~AutoSingleton();
    }

    // 0x1004d8530, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<VarType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<VarType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1004d8550, 144 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<VarType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<VarType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeNoPreloadContainer<VarType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList* param_1,
                                                                             Js5ResourceProvider* param_2,
                                                                             Js5ArchiveSettings* param_3,
                                                                             Js5ConfigGroup* param_4, uint param_5) {
        undefined8 uVar1;

        new (this) BaseConfigTypeContainer<VarType>(param_1, param_2, param_3, param_4);
        *(undefined**)this = PTR_vtable_100ee83a8 + 16;
        new ((this + 40)) LRUCache<VarType>(param_5, "LRUCache");
        *(undefined8*)(*(long*)(this + 8) + 40) = *(undefined8*)(*(long*)(this + 8) + 32);
        uVar1 = Js5ConfigGroup::GetTypeName(param_4);
        ((this + 40))->~AutoSingleton(uVar1);
    }

    // 0x1004d8630, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<VarType>::~ConfigTypeNoPreloadContainer(): jumps straight to the base-object destructor

    // 0x1004d8640, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<VarType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<VarType>::~ConfigTypeNoPreloadContainer() {
        ~ConfigTypeNoPreloadContainer(this);
        operator_delete(this);
    }

    // 0x1004d8660, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<VarType>::CacheClean(unsigned int)
    void ConfigTypeNoPreloadContainer<VarType>::CacheClean(uint param_1) {
        ((this + 40))->Clean((ulong)param_1);
    }

    // 0x1004d8680, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<VarType>::CacheResize(unsigned int)
    void ConfigTypeNoPreloadContainer<VarType>::CacheResize(uint param_1) {
        ((this + 40))->Resize(param_1);
    }

    // 0x1004d8690, 448 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<VarType>::List(int, DataStatus const**)
    shared_ptr* ConfigTypeNoPreloadContainer<VarType>::List(int param_1, DataStatus** param_2) {
        MakeSharedPool<VarType, 5504>* this_00;
        Js5ArchiveSettings* this_01;
        uint uVar1;
        shared_ptr* psVar3;
        undefined8 uVar4;
        DataStatus* pDVar5;
        long* plVar6;
        int* piVar8;
        _func_decltype_nullptr* p_Var9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        uint local_34;

        *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
        this_00 = (MakeSharedPool<VarType, 5504>*)(this + 8);
        p_Var9 = (_func_decltype_nullptr*)(long)param_1;
        local_34 = param_1;
        psVar3 = (shared_ptr*)((this + 40))->Find((ulonglong)p_Var9);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            *(int*)(*(long*)this_00 + 16) = *(int*)(*(long*)this_00 + 16) + 1;
            if (param_2 == (DataStatus**)0) {
                return psVar3;
            }
            *param_2 = (DataStatus*)DataStatus::READY;
            return psVar3;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, p_Var9);
        uVar1 = local_34;
        plVar6 = *(long**)(this + 8);
        this_01 = *(Js5ArchiveSettings**)(this + 24);
        uVar4 = this_01->GetPrefetchPriority();
        piVar8 = (int*)(ulong)uVar1;
        pDVar5 = (DataStatus*)(**(code**)(*plVar6 + 64))(plVar6, local_58, this_01, piVar8, uVar4, 1);
        if (pDVar5 == (DataStatus*)DataStatus::NOTLOADED) {
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6578;
            goto LAB_1004d880f;
        }
        *(int*)(*(long*)this_00 + 24) = *(int*)(*(long*)this_00 + 24) + 1;
        MakeSharedPool<VarType, 5504>::MakeShared<BaseTemplateConfigTypeList<VarType>*&, int&>(
            &local_48, this_00, (BaseTemplateConfigTypeList**)&local_34, piVar8);
        if (pDVar5 == (DataStatus*)DataStatus::MISSING) {
        LAB_1004d878f:
            plVar6 = (long*)shared_ptr<VarType>::operator->((shared_ptr<VarType>*)&local_48);
            (**(code**)(*plVar6 + 24))(plVar6);
            pDVar5 = (DataStatus*)(**(code**)(**(long**)this_00 + 72))(*(long**)this_00, &local_48);
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            if (pDVar5 != (DataStatus*)DataStatus::READY)
                goto LAB_1004d87ff;
            psVar3 = (shared_ptr*)((this + 40))->Put(&local_48, 1, (long)(int)local_34);
        } else {
            plVar6 = (long*)shared_ptr<VarType>::operator->((shared_ptr<VarType>*)&local_48);
            uVar4 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58);
            if ((undefined*)(**(code**)(*plVar6 + 32))(plVar6, uVar4) != DataStatus::NOTLOADED)
                goto LAB_1004d878f;
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
        LAB_1004d87ff:
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6578;
        }
        local_48.~shared_ptr();
    LAB_1004d880f:
        local_58->~shared_ptr();
        return psVar3;
    }

    // 0x1004d8850, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<VarType>::DirectFetch(int)
    /* ConfigTypeLoadAllContainer<VarType>::DirectFetch(int) */

    undefined8 ConfigTypeLoadAllContainer<VarType>::DirectFetch(int param_1) {
        undefined4 in_register_0000003c;

        new (CONCAT44(in_register_0000003c, param_1)) shared_ptr<oldscape::dash3d::Decor>(PTR_NullConfigType_100ee6578);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1004d8a30, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<VarType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<VarType>::~ConfigTypeNoPreloadContainer() {
        *(undefined**)this = PTR_vtable_100ee83a8 + 16;
        ((this + 40))->~LRUCache();
        ~AutoSingleton();
    }

    // 0x1004ea7d0, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<SeqType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<SeqType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1004ea7f0, 144 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<SeqType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<SeqType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeNoPreloadContainer<SeqType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList* param_1,
                                                                             Js5ResourceProvider* param_2,
                                                                             Js5ArchiveSettings* param_3,
                                                                             Js5ConfigGroup* param_4, uint param_5) {
        undefined8 uVar1;

        new (this) BaseConfigTypeContainer<SeqType>(param_1, param_2, param_3, param_4);
        *(undefined**)this = PTR_vtable_100ee83a0 + 16;
        new ((this + 40)) LRUCache<SeqType>(param_5, "LRUCache");
        *(undefined8*)(*(long*)(this + 8) + 40) = *(undefined8*)(*(long*)(this + 8) + 32);
        uVar1 = Js5ConfigGroup::GetTypeName(param_4);
        ((this + 40))->~AutoSingleton(uVar1);
    }

    // 0x1004ea8d0, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<SeqType>::~ConfigTypeNoPreloadContainer(): jumps straight to the base-object destructor

    // 0x1004ea8e0, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<SeqType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<SeqType>::~ConfigTypeNoPreloadContainer() {
        ~ConfigTypeNoPreloadContainer(this);
        operator_delete(this);
    }

    // 0x1004ea900, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<SeqType>::CacheClean(unsigned int)
    void ConfigTypeNoPreloadContainer<SeqType>::CacheClean(uint param_1) {
        ((this + 40))->Clean((ulong)param_1);
    }

    // 0x1004ea920, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<SeqType>::CacheResize(unsigned int)
    void ConfigTypeNoPreloadContainer<SeqType>::CacheResize(uint param_1) {
        ((this + 40))->Resize(param_1);
    }

    // 0x1004ea930, 448 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<SeqType>::List(int, DataStatus const**)
    shared_ptr* ConfigTypeNoPreloadContainer<SeqType>::List(int param_1, DataStatus** param_2) {
        MakeSharedPool<SeqType, 96>* this_00;
        Js5ArchiveSettings* this_01;
        uint uVar1;
        shared_ptr* psVar3;
        undefined8 uVar4;
        DataStatus* pDVar5;
        long* plVar6;
        int* piVar8;
        _func_decltype_nullptr* p_Var9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        uint local_34;

        *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
        this_00 = (MakeSharedPool<SeqType, 96>*)(this + 8);
        p_Var9 = (_func_decltype_nullptr*)(long)param_1;
        local_34 = param_1;
        psVar3 = (shared_ptr*)((this + 40))->Find((ulonglong)p_Var9);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            *(int*)(*(long*)this_00 + 16) = *(int*)(*(long*)this_00 + 16) + 1;
            if (param_2 == (DataStatus**)0) {
                return psVar3;
            }
            *param_2 = (DataStatus*)DataStatus::READY;
            return psVar3;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, p_Var9);
        uVar1 = local_34;
        plVar6 = *(long**)(this + 8);
        this_01 = *(Js5ArchiveSettings**)(this + 24);
        uVar4 = this_01->GetPrefetchPriority();
        piVar8 = (int*)(ulong)uVar1;
        pDVar5 = (DataStatus*)(**(code**)(*plVar6 + 64))(plVar6, local_58, this_01, piVar8, uVar4, 1);
        if (pDVar5 == (DataStatus*)DataStatus::NOTLOADED) {
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6570;
            goto LAB_1004eaaaf;
        }
        *(int*)(*(long*)this_00 + 24) = *(int*)(*(long*)this_00 + 24) + 1;
        MakeSharedPool<SeqType, 96>::MakeShared<BaseTemplateConfigTypeList<SeqType>*&, int&>(
            &local_48, this_00, (BaseTemplateConfigTypeList**)&local_34, piVar8);
        if (pDVar5 == (DataStatus*)DataStatus::MISSING) {
        LAB_1004eaa2f:
            plVar6 = (long*)shared_ptr<SeqType>::operator->((shared_ptr<SeqType>*)&local_48);
            (**(code**)(*plVar6 + 24))(plVar6);
            pDVar5 = (DataStatus*)(**(code**)(**(long**)this_00 + 72))(*(long**)this_00, &local_48);
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            if (pDVar5 != (DataStatus*)DataStatus::READY)
                goto LAB_1004eaa9f;
            psVar3 = (shared_ptr*)((this + 40))->Put(&local_48, 1, (long)(int)local_34);
        } else {
            plVar6 = (long*)shared_ptr<SeqType>::operator->((shared_ptr<SeqType>*)&local_48);
            uVar4 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58);
            if ((undefined*)(**(code**)(*plVar6 + 32))(plVar6, uVar4) != DataStatus::NOTLOADED)
                goto LAB_1004eaa2f;
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
        LAB_1004eaa9f:
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6570;
        }
        local_48.~shared_ptr();
    LAB_1004eaaaf:
        local_58->~shared_ptr();
        return psVar3;
    }

    // 0x1004eaaf0, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<SeqType>::DirectFetch(int)
    /* ConfigTypeLoadAllContainer<SeqType>::DirectFetch(int) */

    undefined8 ConfigTypeLoadAllContainer<SeqType>::DirectFetch(int param_1) {
        undefined4 in_register_0000003c;

        new (CONCAT44(in_register_0000003c, param_1)) shared_ptr<oldscape::dash3d::Decor>(PTR_NullConfigType_100ee6570);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1004eac50, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<SeqType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<SeqType>::~ConfigTypeNoPreloadContainer() {
        *(undefined**)this = PTR_vtable_100ee83a0 + 16;
        ((this + 40))->~LRUCache();
        ~AutoSingleton();
    }

    // 0x1004f7cc0, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<ObjType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<ObjType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1004f7ce0, 144 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<ObjType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<ObjType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeNoPreloadContainer<ObjType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList* param_1,
                                                                             Js5ResourceProvider* param_2,
                                                                             Js5ArchiveSettings* param_3,
                                                                             Js5ConfigGroup* param_4, uint param_5) {
        undefined8 uVar1;

        new (this) BaseConfigTypeContainer<ObjType>(param_1, param_2, param_3, param_4);
        *(undefined**)this = PTR_vtable_100ee8398 + 16;
        new ((this + 40)) LRUCache<ObjType>(param_5, "LRUCache");
        *(undefined8*)(*(long*)(this + 8) + 40) = *(undefined8*)(*(long*)(this + 8) + 32);
        uVar1 = Js5ConfigGroup::GetTypeName(param_4);
        ((this + 40))->~AutoSingleton(uVar1);
    }

    // 0x1004f7dc0, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<ObjType>::~ConfigTypeNoPreloadContainer(): jumps straight to the base-object destructor

    // 0x1004f7dd0, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<ObjType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<ObjType>::~ConfigTypeNoPreloadContainer() {
        ~ConfigTypeNoPreloadContainer(this);
        operator_delete(this);
    }

    // 0x1004f7df0, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<ObjType>::CacheClean(unsigned int)
    void ConfigTypeNoPreloadContainer<ObjType>::CacheClean(uint param_1) {
        ((this + 40))->Clean((ulong)param_1);
    }

    // 0x1004f7e10, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<ObjType>::CacheResize(unsigned int)
    void ConfigTypeNoPreloadContainer<ObjType>::CacheResize(uint param_1) {
        ((this + 40))->Resize(param_1);
    }

    // 0x1004f7e20, 448 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<ObjType>::List(int, DataStatus const**)
    shared_ptr* ConfigTypeNoPreloadContainer<ObjType>::List(int param_1, DataStatus** param_2) {
        MakeSharedPool<ObjType, 96>* this_00;
        Js5ArchiveSettings* this_01;
        uint uVar1;
        shared_ptr* psVar3;
        undefined8 uVar4;
        DataStatus* pDVar5;
        long* plVar6;
        int* piVar8;
        _func_decltype_nullptr* p_Var9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        uint local_34;

        *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
        this_00 = (MakeSharedPool<ObjType, 96>*)(this + 8);
        p_Var9 = (_func_decltype_nullptr*)(long)param_1;
        local_34 = param_1;
        psVar3 = (shared_ptr*)((this + 40))->Find((ulonglong)p_Var9);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            *(int*)(*(long*)this_00 + 16) = *(int*)(*(long*)this_00 + 16) + 1;
            if (param_2 == (DataStatus**)0) {
                return psVar3;
            }
            *param_2 = (DataStatus*)DataStatus::READY;
            return psVar3;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, p_Var9);
        uVar1 = local_34;
        plVar6 = *(long**)(this + 8);
        this_01 = *(Js5ArchiveSettings**)(this + 24);
        uVar4 = this_01->GetPrefetchPriority();
        piVar8 = (int*)(ulong)uVar1;
        pDVar5 = (DataStatus*)(**(code**)(*plVar6 + 64))(plVar6, local_58, this_01, piVar8, uVar4, 1);
        if (pDVar5 == (DataStatus*)DataStatus::NOTLOADED) {
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6568;
            goto LAB_1004f7f9f;
        }
        *(int*)(*(long*)this_00 + 24) = *(int*)(*(long*)this_00 + 24) + 1;
        MakeSharedPool<ObjType, 96>::MakeShared<BaseTemplateConfigTypeList<ObjType>*&, int&>(
            &local_48, this_00, (BaseTemplateConfigTypeList**)&local_34, piVar8);
        if (pDVar5 == (DataStatus*)DataStatus::MISSING) {
        LAB_1004f7f1f:
            plVar6 = (long*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)&local_48);
            (**(code**)(*plVar6 + 24))(plVar6);
            pDVar5 = (DataStatus*)(**(code**)(**(long**)this_00 + 72))(*(long**)this_00, &local_48);
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            if (pDVar5 != (DataStatus*)DataStatus::READY)
                goto LAB_1004f7f8f;
            psVar3 = (shared_ptr*)((this + 40))->Put(&local_48, 1, (long)(int)local_34);
        } else {
            plVar6 = (long*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)&local_48);
            uVar4 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58);
            if ((undefined*)(**(code**)(*plVar6 + 32))(plVar6, uVar4) != DataStatus::NOTLOADED)
                goto LAB_1004f7f1f;
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
        LAB_1004f7f8f:
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6568;
        }
        local_48.~shared_ptr();
    LAB_1004f7f9f:
        local_58->~shared_ptr();
        return psVar3;
    }

    // 0x1004f7fe0, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<ObjType>::DirectFetch(int)
    /* ConfigTypeLoadAllContainer<ObjType>::DirectFetch(int) */

    undefined8 ConfigTypeLoadAllContainer<ObjType>::DirectFetch(int param_1) {
        undefined4 in_register_0000003c;

        new (CONCAT44(in_register_0000003c, param_1)) shared_ptr<oldscape::dash3d::Decor>(PTR_NullConfigType_100ee6568);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1004f8140, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<ObjType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<ObjType>::~ConfigTypeNoPreloadContainer() {
        *(undefined**)this = PTR_vtable_100ee8398 + 16;
        ((this + 40))->~LRUCache();
        ~AutoSingleton();
    }

    // 0x10050ef70, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<NPCType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<NPCType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x10050ef90, 144 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<NPCType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<NPCType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeNoPreloadContainer<NPCType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList* param_1,
                                                                             Js5ResourceProvider* param_2,
                                                                             Js5ArchiveSettings* param_3,
                                                                             Js5ConfigGroup* param_4, uint param_5) {
        undefined8 uVar1;

        new (this) BaseConfigTypeContainer<NPCType>(param_1, param_2, param_3, param_4);
        *(undefined**)this = PTR_vtable_100ee8390 + 16;
        new ((this + 40)) LRUCache<NPCType>(param_5, "LRUCache");
        *(undefined8*)(*(long*)(this + 8) + 40) = *(undefined8*)(*(long*)(this + 8) + 32);
        uVar1 = Js5ConfigGroup::GetTypeName(param_4);
        ((this + 40))->~AutoSingleton(uVar1);
    }

    // 0x10050f070, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<NPCType>::~ConfigTypeNoPreloadContainer(): jumps straight to the base-object destructor

    // 0x10050f080, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<NPCType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<NPCType>::~ConfigTypeNoPreloadContainer() {
        ~ConfigTypeNoPreloadContainer(this);
        operator_delete(this);
    }

    // 0x10050f0a0, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<NPCType>::CacheClean(unsigned int)
    void ConfigTypeNoPreloadContainer<NPCType>::CacheClean(uint param_1) {
        ((this + 40))->Clean((ulong)param_1);
    }

    // 0x10050f0c0, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<NPCType>::CacheResize(unsigned int)
    void ConfigTypeNoPreloadContainer<NPCType>::CacheResize(uint param_1) {
        ((this + 40))->Resize(param_1);
    }

    // 0x10050f0d0, 448 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<NPCType>::List(int, DataStatus const**)
    shared_ptr* ConfigTypeNoPreloadContainer<NPCType>::List(int param_1, DataStatus** param_2) {
        MakeSharedPool<NPCType, 216>* this_00;
        Js5ArchiveSettings* this_01;
        uint uVar1;
        shared_ptr* psVar3;
        undefined8 uVar4;
        DataStatus* pDVar5;
        long* plVar6;
        int* piVar8;
        _func_decltype_nullptr* p_Var9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        uint local_34;

        *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
        this_00 = (MakeSharedPool<NPCType, 216>*)(this + 8);
        p_Var9 = (_func_decltype_nullptr*)(long)param_1;
        local_34 = param_1;
        psVar3 = (shared_ptr*)((this + 40))->Find((ulonglong)p_Var9);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            *(int*)(*(long*)this_00 + 16) = *(int*)(*(long*)this_00 + 16) + 1;
            if (param_2 == (DataStatus**)0) {
                return psVar3;
            }
            *param_2 = (DataStatus*)DataStatus::READY;
            return psVar3;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, p_Var9);
        uVar1 = local_34;
        plVar6 = *(long**)(this + 8);
        this_01 = *(Js5ArchiveSettings**)(this + 24);
        uVar4 = this_01->GetPrefetchPriority();
        piVar8 = (int*)(ulong)uVar1;
        pDVar5 = (DataStatus*)(**(code**)(*plVar6 + 64))(plVar6, local_58, this_01, piVar8, uVar4, 1);
        if (pDVar5 == (DataStatus*)DataStatus::NOTLOADED) {
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6560;
            goto LAB_10050f24f;
        }
        *(int*)(*(long*)this_00 + 24) = *(int*)(*(long*)this_00 + 24) + 1;
        MakeSharedPool<NPCType, 216>::MakeShared<BaseTemplateConfigTypeList<NPCType>*&, int&>(
            &local_48, this_00, (BaseTemplateConfigTypeList**)&local_34, piVar8);
        if (pDVar5 == (DataStatus*)DataStatus::MISSING) {
        LAB_10050f1cf:
            plVar6 = (long*)shared_ptr<NPCType>::operator->((shared_ptr<NPCType>*)&local_48);
            (**(code**)(*plVar6 + 24))(plVar6);
            pDVar5 = (DataStatus*)(**(code**)(**(long**)this_00 + 72))(*(long**)this_00, &local_48);
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            if (pDVar5 != (DataStatus*)DataStatus::READY)
                goto LAB_10050f23f;
            psVar3 = (shared_ptr*)((this + 40))->Put(&local_48, 1, (long)(int)local_34);
        } else {
            plVar6 = (long*)shared_ptr<NPCType>::operator->((shared_ptr<NPCType>*)&local_48);
            uVar4 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58);
            if ((undefined*)(**(code**)(*plVar6 + 32))(plVar6, uVar4) != DataStatus::NOTLOADED)
                goto LAB_10050f1cf;
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
        LAB_10050f23f:
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6560;
        }
        local_48.~shared_ptr();
    LAB_10050f24f:
        local_58->~shared_ptr();
        return psVar3;
    }

    // 0x10050f290, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<NPCType>::DirectFetch(int)
    /* ConfigTypeLoadAllContainer<NPCType>::DirectFetch(int) */

    undefined8 ConfigTypeLoadAllContainer<NPCType>::DirectFetch(int param_1) {
        undefined4 in_register_0000003c;

        new (CONCAT44(in_register_0000003c, param_1)) shared_ptr<oldscape::dash3d::Decor>(PTR_NullConfigType_100ee6560);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x10050f3f0, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<NPCType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<NPCType>::~ConfigTypeNoPreloadContainer() {
        *(undefined**)this = PTR_vtable_100ee8390 + 16;
        ((this + 40))->~LRUCache();
        ~AutoSingleton();
    }

    // 0x100519e70, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<LocType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<LocType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x100519e90, 144 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<LocType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<LocType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeNoPreloadContainer<LocType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList* param_1,
                                                                             Js5ResourceProvider* param_2,
                                                                             Js5ArchiveSettings* param_3,
                                                                             Js5ConfigGroup* param_4, uint param_5) {
        undefined8 uVar1;

        new (this) BaseConfigTypeContainer<LocType>(param_1, param_2, param_3, param_4);
        *(undefined**)this = PTR_vtable_100ee8380 + 16;
        new ((this + 40)) LRUCache<LocType>(param_5, "LRUCache");
        *(undefined8*)(*(long*)(this + 8) + 40) = *(undefined8*)(*(long*)(this + 8) + 32);
        uVar1 = Js5ConfigGroup::GetTypeName(param_4);
        ((this + 40))->~AutoSingleton(uVar1);
    }

    // 0x100519f70, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<LocType>::~ConfigTypeNoPreloadContainer(): jumps straight to the base-object destructor

    // 0x100519f80, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<LocType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<LocType>::~ConfigTypeNoPreloadContainer() {
        ~ConfigTypeNoPreloadContainer(this);
        operator_delete(this);
    }

    // 0x100519fa0, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<LocType>::CacheClean(unsigned int)
    void ConfigTypeNoPreloadContainer<LocType>::CacheClean(uint param_1) {
        ((this + 40))->Clean((ulong)param_1);
    }

    // 0x100519fc0, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<LocType>::CacheResize(unsigned int)
    void ConfigTypeNoPreloadContainer<LocType>::CacheResize(uint param_1) {
        ((this + 40))->Resize(param_1);
    }

    // 0x100519fd0, 448 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<LocType>::List(int, DataStatus const**)
    shared_ptr* ConfigTypeNoPreloadContainer<LocType>::List(int param_1, DataStatus** param_2) {
        MakeSharedPool<LocType, 256>* this_00;
        Js5ArchiveSettings* this_01;
        uint uVar1;
        shared_ptr* psVar3;
        undefined8 uVar4;
        DataStatus* pDVar5;
        long* plVar6;
        int* piVar8;
        _func_decltype_nullptr* p_Var9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        uint local_34;

        *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
        this_00 = (MakeSharedPool<LocType, 256>*)(this + 8);
        p_Var9 = (_func_decltype_nullptr*)(long)param_1;
        local_34 = param_1;
        psVar3 = (shared_ptr*)((this + 40))->Find((ulonglong)p_Var9);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            *(int*)(*(long*)this_00 + 16) = *(int*)(*(long*)this_00 + 16) + 1;
            if (param_2 == (DataStatus**)0) {
                return psVar3;
            }
            *param_2 = (DataStatus*)DataStatus::READY;
            return psVar3;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, p_Var9);
        uVar1 = local_34;
        plVar6 = *(long**)(this + 8);
        this_01 = *(Js5ArchiveSettings**)(this + 24);
        uVar4 = this_01->GetPrefetchPriority();
        piVar8 = (int*)(ulong)uVar1;
        pDVar5 = (DataStatus*)(**(code**)(*plVar6 + 64))(plVar6, local_58, this_01, piVar8, uVar4, 1);
        if (pDVar5 == (DataStatus*)DataStatus::NOTLOADED) {
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6550;
            goto LAB_10051a14f;
        }
        *(int*)(*(long*)this_00 + 24) = *(int*)(*(long*)this_00 + 24) + 1;
        MakeSharedPool<LocType, 256>::MakeShared<BaseTemplateConfigTypeList<LocType>*&, int&>(
            &local_48, this_00, (BaseTemplateConfigTypeList**)&local_34, piVar8);
        if (pDVar5 == (DataStatus*)DataStatus::MISSING) {
        LAB_10051a0cf:
            plVar6 = (long*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)&local_48);
            (**(code**)(*plVar6 + 24))(plVar6);
            pDVar5 = (DataStatus*)(**(code**)(**(long**)this_00 + 72))(*(long**)this_00, &local_48);
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            if (pDVar5 != (DataStatus*)DataStatus::READY)
                goto LAB_10051a13f;
            psVar3 = (shared_ptr*)((this + 40))->Put(&local_48, 1, (long)(int)local_34);
        } else {
            plVar6 = (long*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)&local_48);
            uVar4 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58);
            if ((undefined*)(**(code**)(*plVar6 + 32))(plVar6, uVar4) != DataStatus::NOTLOADED)
                goto LAB_10051a0cf;
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
        LAB_10051a13f:
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6550;
        }
        local_48.~shared_ptr();
    LAB_10051a14f:
        local_58->~shared_ptr();
        return psVar3;
    }

    // 0x10051a190, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<LocType>::DirectFetch(int)
    /* ConfigTypeLoadAllContainer<LocType>::DirectFetch(int) */

    undefined8 ConfigTypeLoadAllContainer<LocType>::DirectFetch(int param_1) {
        undefined4 in_register_0000003c;

        new (CONCAT44(in_register_0000003c, param_1)) shared_ptr<oldscape::dash3d::Decor>(PTR_NullConfigType_100ee6550);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x10051a2f0, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<LocType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<LocType>::~ConfigTypeNoPreloadContainer() {
        *(undefined**)this = PTR_vtable_100ee8380 + 16;
        ((this + 40))->~LRUCache();
        ~AutoSingleton();
    }

    // 0x1005718f0, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<ParamType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<ParamType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x100571910, 144 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<ParamType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<ParamType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeNoPreloadContainer<ParamType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList* param_1,
                                                                               Js5ResourceProvider* param_2,
                                                                               Js5ArchiveSettings* param_3,
                                                                               Js5ConfigGroup* param_4, uint param_5) {
        undefined8 uVar1;

        new (this) BaseConfigTypeContainer<ParamType>(param_1, param_2, param_3, param_4);
        *(undefined**)this = PTR_vtable_100ee83c8 + 16;
        new ((this + 40)) LRUCache<ParamType>(param_5, "LRUCache");
        *(undefined8*)(*(long*)(this + 8) + 40) = *(undefined8*)(*(long*)(this + 8) + 32);
        uVar1 = Js5ConfigGroup::GetTypeName(param_4);
        ((this + 40))->~AutoSingleton(uVar1);
    }

    // 0x1005719f0, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<ParamType>::~ConfigTypeNoPreloadContainer(): jumps straight to the base-object destructor

    // 0x100571a00, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<ParamType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<ParamType>::~ConfigTypeNoPreloadContainer() {
        ~ConfigTypeNoPreloadContainer(this);
        operator_delete(this);
    }

    // 0x100571a20, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<ParamType>::CacheClean(unsigned int)
    void ConfigTypeNoPreloadContainer<ParamType>::CacheClean(uint param_1) {
        ((this + 40))->Clean((ulong)param_1);
    }

    // 0x100571a40, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<ParamType>::CacheResize(unsigned int)
    void ConfigTypeNoPreloadContainer<ParamType>::CacheResize(uint param_1) {
        ((this + 40))->Resize(param_1);
    }

    // 0x100571a50, 448 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<ParamType>::List(int, DataStatus const**)
    shared_ptr* ConfigTypeNoPreloadContainer<ParamType>::List(int param_1, DataStatus** param_2) {
        MakeSharedPool<ParamType, 640>* this_00;
        Js5ArchiveSettings* this_01;
        uint uVar1;
        shared_ptr* psVar3;
        undefined8 uVar4;
        DataStatus* pDVar5;
        long* plVar6;
        int* piVar8;
        _func_decltype_nullptr* p_Var9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        uint local_34;

        *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
        this_00 = (MakeSharedPool<ParamType, 640>*)(this + 8);
        p_Var9 = (_func_decltype_nullptr*)(long)param_1;
        local_34 = param_1;
        psVar3 = (shared_ptr*)((this + 40))->Find((ulonglong)p_Var9);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            *(int*)(*(long*)this_00 + 16) = *(int*)(*(long*)this_00 + 16) + 1;
            if (param_2 == (DataStatus**)0) {
                return psVar3;
            }
            *param_2 = (DataStatus*)DataStatus::READY;
            return psVar3;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, p_Var9);
        uVar1 = local_34;
        plVar6 = *(long**)(this + 8);
        this_01 = *(Js5ArchiveSettings**)(this + 24);
        uVar4 = this_01->GetPrefetchPriority();
        piVar8 = (int*)(ulong)uVar1;
        pDVar5 = (DataStatus*)(**(code**)(*plVar6 + 64))(plVar6, local_58, this_01, piVar8, uVar4, 1);
        if (pDVar5 == (DataStatus*)DataStatus::NOTLOADED) {
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6598;
            goto LAB_100571bcf;
        }
        *(int*)(*(long*)this_00 + 24) = *(int*)(*(long*)this_00 + 24) + 1;
        MakeSharedPool<ParamType, 640>::MakeShared<BaseTemplateConfigTypeList<ParamType>*&, int&>(
            &local_48, this_00, (BaseTemplateConfigTypeList**)&local_34, piVar8);
        if (pDVar5 == (DataStatus*)DataStatus::MISSING) {
        LAB_100571b4f:
            plVar6 = (long*)shared_ptr<ParamType>::operator->((shared_ptr<ParamType>*)&local_48);
            (**(code**)(*plVar6 + 24))(plVar6);
            pDVar5 = (DataStatus*)(**(code**)(**(long**)this_00 + 72))(*(long**)this_00, &local_48);
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            if (pDVar5 != (DataStatus*)DataStatus::READY)
                goto LAB_100571bbf;
            psVar3 = (shared_ptr*)((this + 40))->Put(&local_48, 1, (long)(int)local_34);
        } else {
            plVar6 = (long*)shared_ptr<ParamType>::operator->((shared_ptr<ParamType>*)&local_48);
            uVar4 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58);
            if ((undefined*)(**(code**)(*plVar6 + 32))(plVar6, uVar4) != DataStatus::NOTLOADED)
                goto LAB_100571b4f;
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
        LAB_100571bbf:
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6598;
        }
        local_48.~shared_ptr();
    LAB_100571bcf:
        local_58->~shared_ptr();
        return psVar3;
    }

    // 0x100571c10, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<ParamType>::DirectFetch(int)
    /* ConfigTypeLoadAllContainer<ParamType>::DirectFetch(int) */

    undefined8 ConfigTypeLoadAllContainer<ParamType>::DirectFetch(int param_1) {
        undefined4 in_register_0000003c;

        new (CONCAT44(in_register_0000003c, param_1)) shared_ptr<oldscape::dash3d::Decor>(PTR_NullConfigType_100ee6598);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x100571d70, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<ParamType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<ParamType>::~ConfigTypeNoPreloadContainer() {
        *(undefined**)this = PTR_vtable_100ee83c8 + 16;
        ((this + 40))->~LRUCache();
        ~AutoSingleton();
    }

    // 0x1005772d0, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<DBRowType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<DBRowType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005772f0, 144 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<DBRowType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<DBRowType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeNoPreloadContainer<DBRowType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList* param_1,
                                                                               Js5ResourceProvider* param_2,
                                                                               Js5ArchiveSettings* param_3,
                                                                               Js5ConfigGroup* param_4, uint param_5) {
        undefined8 uVar1;

        new (this) BaseConfigTypeContainer<DBRowType>(param_1, param_2, param_3, param_4);
        *(undefined**)this = PTR_vtable_100ee83b8 + 16;
        new ((this + 40)) LRUCache<DBRowType>(param_5, "LRUCache");
        *(undefined8*)(*(long*)(this + 8) + 40) = *(undefined8*)(*(long*)(this + 8) + 32);
        uVar1 = Js5ConfigGroup::GetTypeName(param_4);
        ((this + 40))->~AutoSingleton(uVar1);
    }

    // 0x1005773d0, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<DBRowType>::~ConfigTypeNoPreloadContainer(): jumps straight to the base-object destructor

    // 0x1005773e0, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<DBRowType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<DBRowType>::~ConfigTypeNoPreloadContainer() {
        ~ConfigTypeNoPreloadContainer(this);
        operator_delete(this);
    }

    // 0x100577400, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<DBRowType>::CacheClean(unsigned int)
    void ConfigTypeNoPreloadContainer<DBRowType>::CacheClean(uint param_1) {
        ((this + 40))->Clean((ulong)param_1);
    }

    // 0x100577420, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<DBRowType>::CacheResize(unsigned int)
    void ConfigTypeNoPreloadContainer<DBRowType>::CacheResize(uint param_1) {
        ((this + 40))->Resize(param_1);
    }

    // 0x100577430, 448 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<DBRowType>::List(int, DataStatus const**)
    shared_ptr* ConfigTypeNoPreloadContainer<DBRowType>::List(int param_1, DataStatus** param_2) {
        MakeSharedPool<DBRowType, 128>* this_00;
        Js5ArchiveSettings* this_01;
        uint uVar1;
        shared_ptr* psVar3;
        undefined8 uVar4;
        DataStatus* pDVar5;
        long* plVar6;
        int* piVar8;
        _func_decltype_nullptr* p_Var9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        uint local_34;

        *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
        this_00 = (MakeSharedPool<DBRowType, 128>*)(this + 8);
        p_Var9 = (_func_decltype_nullptr*)(long)param_1;
        local_34 = param_1;
        psVar3 = (shared_ptr*)((this + 40))->Find((ulonglong)p_Var9);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            *(int*)(*(long*)this_00 + 16) = *(int*)(*(long*)this_00 + 16) + 1;
            if (param_2 == (DataStatus**)0) {
                return psVar3;
            }
            *param_2 = (DataStatus*)DataStatus::READY;
            return psVar3;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, p_Var9);
        uVar1 = local_34;
        plVar6 = *(long**)(this + 8);
        this_01 = *(Js5ArchiveSettings**)(this + 24);
        uVar4 = this_01->GetPrefetchPriority();
        piVar8 = (int*)(ulong)uVar1;
        pDVar5 = (DataStatus*)(**(code**)(*plVar6 + 64))(plVar6, local_58, this_01, piVar8, uVar4, 1);
        if (pDVar5 == (DataStatus*)DataStatus::NOTLOADED) {
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6588;
            goto LAB_1005775af;
        }
        *(int*)(*(long*)this_00 + 24) = *(int*)(*(long*)this_00 + 24) + 1;
        MakeSharedPool<DBRowType, 128>::MakeShared<BaseTemplateConfigTypeList<DBRowType>*&, int&>(
            &local_48, this_00, (BaseTemplateConfigTypeList**)&local_34, piVar8);
        if (pDVar5 == (DataStatus*)DataStatus::MISSING) {
        LAB_10057752f:
            plVar6 = (long*)shared_ptr<DBRowType>::operator->((shared_ptr<DBRowType>*)&local_48);
            (**(code**)(*plVar6 + 24))(plVar6);
            pDVar5 = (DataStatus*)(**(code**)(**(long**)this_00 + 72))(*(long**)this_00, &local_48);
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            if (pDVar5 != (DataStatus*)DataStatus::READY)
                goto LAB_10057759f;
            psVar3 = (shared_ptr*)((this + 40))->Put(&local_48, 1, (long)(int)local_34);
        } else {
            plVar6 = (long*)shared_ptr<DBRowType>::operator->((shared_ptr<DBRowType>*)&local_48);
            uVar4 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58);
            if ((undefined*)(**(code**)(*plVar6 + 32))(plVar6, uVar4) != DataStatus::NOTLOADED)
                goto LAB_10057752f;
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
        LAB_10057759f:
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6588;
        }
        local_48.~shared_ptr();
    LAB_1005775af:
        local_58->~shared_ptr();
        return psVar3;
    }

    // 0x1005775f0, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<DBRowType>::DirectFetch(int)
    /* ConfigTypeLoadAllContainer<DBRowType>::DirectFetch(int) */

    undefined8 ConfigTypeLoadAllContainer<DBRowType>::DirectFetch(int param_1) {
        undefined4 in_register_0000003c;

        new (CONCAT44(in_register_0000003c, param_1)) shared_ptr<oldscape::dash3d::Decor>(PTR_NullConfigType_100ee6588);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x100577750, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<DBRowType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<DBRowType>::~ConfigTypeNoPreloadContainer() {
        *(undefined**)this = PTR_vtable_100ee83b8 + 16;
        ((this + 40))->~LRUCache();
        ~AutoSingleton();
    }

    // 0x10057cd90, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<DBTableType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<DBTableType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x10057cdb0, 144 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<DBTableType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<DBTableType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeNoPreloadContainer<DBTableType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList* param_1,
                                                                                 Js5ResourceProvider* param_2,
                                                                                 Js5ArchiveSettings* param_3,
                                                                                 Js5ConfigGroup* param_4,
                                                                                 uint param_5) {
        undefined8 uVar1;

        new (this) BaseConfigTypeContainer<DBTableType>(param_1, param_2, param_3, param_4);
        *(undefined**)this = PTR_vtable_100ee8318 + 16;
        new ((this + 40)) LRUCache<DBTableType>(param_5, "LRUCache");
        *(undefined8*)(*(long*)(this + 8) + 40) = *(undefined8*)(*(long*)(this + 8) + 32);
        uVar1 = Js5ConfigGroup::GetTypeName(param_4);
        ((this + 40))->~AutoSingleton(uVar1);
    }

    // 0x10057ce90, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<DBTableType>::~ConfigTypeNoPreloadContainer(): jumps straight to the base-object destructor

    // 0x10057cea0, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<DBTableType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<DBTableType>::~ConfigTypeNoPreloadContainer() {
        ~ConfigTypeNoPreloadContainer(this);
        operator_delete(this);
    }

    // 0x10057cec0, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<DBTableType>::CacheClean(unsigned int)
    void ConfigTypeNoPreloadContainer<DBTableType>::CacheClean(uint param_1) {
        ((this + 40))->Clean((ulong)param_1);
    }

    // 0x10057cee0, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<DBTableType>::CacheResize(unsigned int)
    void ConfigTypeNoPreloadContainer<DBTableType>::CacheResize(uint param_1) {
        ((this + 40))->Resize(param_1);
    }

    // 0x10057cef0, 448 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<DBTableType>::List(int, DataStatus const**)
    shared_ptr* ConfigTypeNoPreloadContainer<DBTableType>::List(int param_1, DataStatus** param_2) {
        MakeSharedPool<DBTableType, 4>* this_00;
        Js5ArchiveSettings* this_01;
        uint uVar1;
        shared_ptr* psVar3;
        undefined8 uVar4;
        DataStatus* pDVar5;
        long* plVar6;
        int* piVar8;
        _func_decltype_nullptr* p_Var9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        uint local_34;

        *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
        this_00 = (MakeSharedPool<DBTableType, 4>*)(this + 8);
        p_Var9 = (_func_decltype_nullptr*)(long)param_1;
        local_34 = param_1;
        psVar3 = (shared_ptr*)((this + 40))->Find((ulonglong)p_Var9);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            *(int*)(*(long*)this_00 + 16) = *(int*)(*(long*)this_00 + 16) + 1;
            if (param_2 == (DataStatus**)0) {
                return psVar3;
            }
            *param_2 = (DataStatus*)DataStatus::READY;
            return psVar3;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, p_Var9);
        uVar1 = local_34;
        plVar6 = *(long**)(this + 8);
        this_01 = *(Js5ArchiveSettings**)(this + 24);
        uVar4 = this_01->GetPrefetchPriority();
        piVar8 = (int*)(ulong)uVar1;
        pDVar5 = (DataStatus*)(**(code**)(*plVar6 + 64))(plVar6, local_58, this_01, piVar8, uVar4, 1);
        if (pDVar5 == (DataStatus*)DataStatus::NOTLOADED) {
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee64e8;
            goto LAB_10057d06f;
        }
        *(int*)(*(long*)this_00 + 24) = *(int*)(*(long*)this_00 + 24) + 1;
        MakeSharedPool<DBTableType, 4>::MakeShared<BaseTemplateConfigTypeList<DBTableType>*&, int&>(
            &local_48, this_00, (BaseTemplateConfigTypeList**)&local_34, piVar8);
        if (pDVar5 == (DataStatus*)DataStatus::MISSING) {
        LAB_10057cfef:
            plVar6 = (long*)shared_ptr<DBTableType>::operator->((shared_ptr<DBTableType>*)&local_48);
            (**(code**)(*plVar6 + 24))(plVar6);
            pDVar5 = (DataStatus*)(**(code**)(**(long**)this_00 + 72))(*(long**)this_00, &local_48);
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            if (pDVar5 != (DataStatus*)DataStatus::READY)
                goto LAB_10057d05f;
            psVar3 = (shared_ptr*)((this + 40))->Put(&local_48, 1, (long)(int)local_34);
        } else {
            plVar6 = (long*)shared_ptr<DBTableType>::operator->((shared_ptr<DBTableType>*)&local_48);
            uVar4 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58);
            if ((undefined*)(**(code**)(*plVar6 + 32))(plVar6, uVar4) != DataStatus::NOTLOADED)
                goto LAB_10057cfef;
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
        LAB_10057d05f:
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee64e8;
        }
        local_48.~shared_ptr();
    LAB_10057d06f:
        local_58->~shared_ptr();
        return psVar3;
    }

    // 0x10057d0b0, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<DBTableType>::DirectFetch(int)
    /* ConfigTypeLoadAllContainer<DBTableType>::DirectFetch(int) */

    undefined8 ConfigTypeLoadAllContainer<DBTableType>::DirectFetch(int param_1) {
        undefined4 in_register_0000003c;

        new (CONCAT44(in_register_0000003c, param_1)) shared_ptr<oldscape::dash3d::Decor>(PTR_NullConfigType_100ee64e8);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x10057d210, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<DBTableType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<DBTableType>::~ConfigTypeNoPreloadContainer() {
        *(undefined**)this = PTR_vtable_100ee8318 + 16;
        ((this + 40))->~LRUCache();
        ~AutoSingleton();
    }

    // 0x100582480, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<InvType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<InvType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005824a0, 144 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<InvType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<InvType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeNoPreloadContainer<InvType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList* param_1,
                                                                             Js5ResourceProvider* param_2,
                                                                             Js5ArchiveSettings* param_3,
                                                                             Js5ConfigGroup* param_4, uint param_5) {
        undefined8 uVar1;

        new (this) BaseConfigTypeContainer<InvType>(param_1, param_2, param_3, param_4);
        *(undefined**)this = PTR_vtable_100ee8378 + 16;
        new ((this + 40)) LRUCache<InvType>(param_5, "LRUCache");
        *(undefined8*)(*(long*)(this + 8) + 40) = *(undefined8*)(*(long*)(this + 8) + 32);
        uVar1 = Js5ConfigGroup::GetTypeName(param_4);
        ((this + 40))->~AutoSingleton(uVar1);
    }

    // 0x100582580, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<InvType>::~ConfigTypeNoPreloadContainer(): jumps straight to the base-object destructor

    // 0x100582590, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<InvType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<InvType>::~ConfigTypeNoPreloadContainer() {
        ~ConfigTypeNoPreloadContainer(this);
        operator_delete(this);
    }

    // 0x1005825b0, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<InvType>::CacheClean(unsigned int)
    void ConfigTypeNoPreloadContainer<InvType>::CacheClean(uint param_1) {
        ((this + 40))->Clean((ulong)param_1);
    }

    // 0x1005825d0, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<InvType>::CacheResize(unsigned int)
    void ConfigTypeNoPreloadContainer<InvType>::CacheResize(uint param_1) {
        ((this + 40))->Resize(param_1);
    }

    // 0x1005825e0, 448 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<InvType>::List(int, DataStatus const**)
    shared_ptr* ConfigTypeNoPreloadContainer<InvType>::List(int param_1, DataStatus** param_2) {
        MakeSharedPool<InvType, 32>* this_00;
        Js5ArchiveSettings* this_01;
        uint uVar1;
        shared_ptr* psVar3;
        undefined8 uVar4;
        DataStatus* pDVar5;
        long* plVar6;
        int* piVar8;
        _func_decltype_nullptr* p_Var9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        uint local_34;

        *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
        this_00 = (MakeSharedPool<InvType, 32>*)(this + 8);
        p_Var9 = (_func_decltype_nullptr*)(long)param_1;
        local_34 = param_1;
        psVar3 = (shared_ptr*)((this + 40))->Find((ulonglong)p_Var9);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            *(int*)(*(long*)this_00 + 16) = *(int*)(*(long*)this_00 + 16) + 1;
            if (param_2 == (DataStatus**)0) {
                return psVar3;
            }
            *param_2 = (DataStatus*)DataStatus::READY;
            return psVar3;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, p_Var9);
        uVar1 = local_34;
        plVar6 = *(long**)(this + 8);
        this_01 = *(Js5ArchiveSettings**)(this + 24);
        uVar4 = this_01->GetPrefetchPriority();
        piVar8 = (int*)(ulong)uVar1;
        pDVar5 = (DataStatus*)(**(code**)(*plVar6 + 64))(plVar6, local_58, this_01, piVar8, uVar4, 1);
        if (pDVar5 == (DataStatus*)DataStatus::NOTLOADED) {
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6548;
            goto LAB_10058275f;
        }
        *(int*)(*(long*)this_00 + 24) = *(int*)(*(long*)this_00 + 24) + 1;
        MakeSharedPool<InvType, 32>::MakeShared<BaseTemplateConfigTypeList<InvType>*&, int&>(
            &local_48, this_00, (BaseTemplateConfigTypeList**)&local_34, piVar8);
        if (pDVar5 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005826df:
            plVar6 = (long*)shared_ptr<InvType>::operator->((shared_ptr<InvType>*)&local_48);
            (**(code**)(*plVar6 + 24))(plVar6);
            pDVar5 = (DataStatus*)(**(code**)(**(long**)this_00 + 72))(*(long**)this_00, &local_48);
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            if (pDVar5 != (DataStatus*)DataStatus::READY)
                goto LAB_10058274f;
            psVar3 = (shared_ptr*)((this + 40))->Put(&local_48, 1, (long)(int)local_34);
        } else {
            plVar6 = (long*)shared_ptr<InvType>::operator->((shared_ptr<InvType>*)&local_48);
            uVar4 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58);
            if ((undefined*)(**(code**)(*plVar6 + 32))(plVar6, uVar4) != DataStatus::NOTLOADED)
                goto LAB_1005826df;
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
        LAB_10058274f:
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6548;
        }
        local_48.~shared_ptr();
    LAB_10058275f:
        local_58->~shared_ptr();
        return psVar3;
    }

    // 0x1005827a0, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<InvType>::DirectFetch(int)
    /* ConfigTypeLoadAllContainer<InvType>::DirectFetch(int) */

    undefined8 ConfigTypeLoadAllContainer<InvType>::DirectFetch(int param_1) {
        undefined4 in_register_0000003c;

        new (CONCAT44(in_register_0000003c, param_1)) shared_ptr<oldscape::dash3d::Decor>(PTR_NullConfigType_100ee6548);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x100582900, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<InvType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<InvType>::~ConfigTypeNoPreloadContainer() {
        *(undefined**)this = PTR_vtable_100ee8378 + 16;
        ((this + 40))->~LRUCache();
        ~AutoSingleton();
    }

    // 0x100587b50, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<VarBitType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<VarBitType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x100587b70, 144 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<VarBitType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<VarBitType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeNoPreloadContainer<VarBitType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList* param_1,
                                                                                Js5ResourceProvider* param_2,
                                                                                Js5ArchiveSettings* param_3,
                                                                                Js5ConfigGroup* param_4, uint param_5) {
        undefined8 uVar1;

        new (this) BaseConfigTypeContainer<VarBitType>(param_1, param_2, param_3, param_4);
        *(undefined**)this = PTR_vtable_100ee8310 + 16;
        new ((this + 40)) LRUCache<VarBitType>(param_5, "LRUCache");
        *(undefined8*)(*(long*)(this + 8) + 40) = *(undefined8*)(*(long*)(this + 8) + 32);
        uVar1 = Js5ConfigGroup::GetTypeName(param_4);
        ((this + 40))->~AutoSingleton(uVar1);
    }

    // 0x100587c50, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<VarBitType>::~ConfigTypeNoPreloadContainer(): jumps straight to the base-object destructor

    // 0x100587c60, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<VarBitType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<VarBitType>::~ConfigTypeNoPreloadContainer() {
        ~ConfigTypeNoPreloadContainer(this);
        operator_delete(this);
    }

    // 0x100587c80, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<VarBitType>::CacheClean(unsigned int)
    void ConfigTypeNoPreloadContainer<VarBitType>::CacheClean(uint param_1) {
        ((this + 40))->Clean((ulong)param_1);
    }

    // 0x100587ca0, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<VarBitType>::CacheResize(unsigned int)
    void ConfigTypeNoPreloadContainer<VarBitType>::CacheResize(uint param_1) {
        ((this + 40))->Resize(param_1);
    }

    // 0x100587cb0, 448 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<VarBitType>::List(int, DataStatus const**)
    shared_ptr* ConfigTypeNoPreloadContainer<VarBitType>::List(int param_1, DataStatus** param_2) {
        MakeSharedPool<VarBitType, 2048>* this_00;
        Js5ArchiveSettings* this_01;
        uint uVar1;
        shared_ptr* psVar3;
        undefined8 uVar4;
        DataStatus* pDVar5;
        long* plVar6;
        int* piVar8;
        _func_decltype_nullptr* p_Var9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        uint local_34;

        *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
        this_00 = (MakeSharedPool<VarBitType, 2048>*)(this + 8);
        p_Var9 = (_func_decltype_nullptr*)(long)param_1;
        local_34 = param_1;
        psVar3 = (shared_ptr*)((this + 40))->Find((ulonglong)p_Var9);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            *(int*)(*(long*)this_00 + 16) = *(int*)(*(long*)this_00 + 16) + 1;
            if (param_2 == (DataStatus**)0) {
                return psVar3;
            }
            *param_2 = (DataStatus*)DataStatus::READY;
            return psVar3;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, p_Var9);
        uVar1 = local_34;
        plVar6 = *(long**)(this + 8);
        this_01 = *(Js5ArchiveSettings**)(this + 24);
        uVar4 = this_01->GetPrefetchPriority();
        piVar8 = (int*)(ulong)uVar1;
        pDVar5 = (DataStatus*)(**(code**)(*plVar6 + 64))(plVar6, local_58, this_01, piVar8, uVar4, 1);
        if (pDVar5 == (DataStatus*)DataStatus::NOTLOADED) {
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee64e0;
            goto LAB_100587e2f;
        }
        *(int*)(*(long*)this_00 + 24) = *(int*)(*(long*)this_00 + 24) + 1;
        MakeSharedPool<VarBitType, 2048>::MakeShared<BaseTemplateConfigTypeList<VarBitType>*&, int&>(
            &local_48, this_00, (BaseTemplateConfigTypeList**)&local_34, piVar8);
        if (pDVar5 == (DataStatus*)DataStatus::MISSING) {
        LAB_100587daf:
            plVar6 = (long*)shared_ptr<VarBitType>::operator->((shared_ptr<VarBitType>*)&local_48);
            (**(code**)(*plVar6 + 24))(plVar6);
            pDVar5 = (DataStatus*)(**(code**)(**(long**)this_00 + 72))(*(long**)this_00, &local_48);
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            if (pDVar5 != (DataStatus*)DataStatus::READY)
                goto LAB_100587e1f;
            psVar3 = (shared_ptr*)((this + 40))->Put(&local_48, 1, (long)(int)local_34);
        } else {
            plVar6 = (long*)shared_ptr<VarBitType>::operator->((shared_ptr<VarBitType>*)&local_48);
            uVar4 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58);
            if ((undefined*)(**(code**)(*plVar6 + 32))(plVar6, uVar4) != DataStatus::NOTLOADED)
                goto LAB_100587daf;
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
        LAB_100587e1f:
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee64e0;
        }
        local_48.~shared_ptr();
    LAB_100587e2f:
        local_58->~shared_ptr();
        return psVar3;
    }

    // 0x100587e70, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<VarBitType>::DirectFetch(int)
    /* ConfigTypeLoadAllContainer<VarBitType>::DirectFetch(int) */

    undefined8 ConfigTypeLoadAllContainer<VarBitType>::DirectFetch(int param_1) {
        undefined4 in_register_0000003c;

        new (CONCAT44(in_register_0000003c, param_1)) shared_ptr<oldscape::dash3d::Decor>(PTR_NullConfigType_100ee64e0);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x100587fd0, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<VarBitType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<VarBitType>::~ConfigTypeNoPreloadContainer() {
        *(undefined**)this = PTR_vtable_100ee8310 + 16;
        ((this + 40))->~LRUCache();
        ~AutoSingleton();
    }

    // 0x10058bf20, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<BASType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<BASType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x10058bf40, 144 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<BASType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<BASType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeNoPreloadContainer<BASType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList* param_1,
                                                                             Js5ResourceProvider* param_2,
                                                                             Js5ArchiveSettings* param_3,
                                                                             Js5ConfigGroup* param_4, uint param_5) {
        undefined8 uVar1;

        new (this) BaseConfigTypeContainer<BASType>(param_1, param_2, param_3, param_4);
        *(undefined**)this = PTR_vtable_100ee8368 + 16;
        new ((this + 40)) LRUCache<BASType>(param_5, "LRUCache");
        *(undefined8*)(*(long*)(this + 8) + 40) = *(undefined8*)(*(long*)(this + 8) + 32);
        uVar1 = Js5ConfigGroup::GetTypeName(param_4);
        ((this + 40))->~AutoSingleton(uVar1);
    }

    // 0x10058c020, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<BASType>::~ConfigTypeNoPreloadContainer(): jumps straight to the base-object destructor

    // 0x10058c030, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<BASType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<BASType>::~ConfigTypeNoPreloadContainer() {
        ~ConfigTypeNoPreloadContainer(this);
        operator_delete(this);
    }

    // 0x10058c050, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<BASType>::CacheClean(unsigned int)
    void ConfigTypeNoPreloadContainer<BASType>::CacheClean(uint param_1) {
        ((this + 40))->Clean((ulong)param_1);
    }

    // 0x10058c070, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<BASType>::CacheResize(unsigned int)
    void ConfigTypeNoPreloadContainer<BASType>::CacheResize(uint param_1) {
        ((this + 40))->Resize(param_1);
    }

    // 0x10058c080, 448 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<BASType>::List(int, DataStatus const**)
    shared_ptr* ConfigTypeNoPreloadContainer<BASType>::List(int param_1, DataStatus** param_2) {
        MakeSharedPool<BASType, 96>* this_00;
        Js5ArchiveSettings* this_01;
        uint uVar1;
        shared_ptr* psVar3;
        undefined8 uVar4;
        DataStatus* pDVar5;
        long* plVar6;
        int* piVar8;
        _func_decltype_nullptr* p_Var9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        uint local_34;

        *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
        this_00 = (MakeSharedPool<BASType, 96>*)(this + 8);
        p_Var9 = (_func_decltype_nullptr*)(long)param_1;
        local_34 = param_1;
        psVar3 = (shared_ptr*)((this + 40))->Find((ulonglong)p_Var9);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            *(int*)(*(long*)this_00 + 16) = *(int*)(*(long*)this_00 + 16) + 1;
            if (param_2 == (DataStatus**)0) {
                return psVar3;
            }
            *param_2 = (DataStatus*)DataStatus::READY;
            return psVar3;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, p_Var9);
        uVar1 = local_34;
        plVar6 = *(long**)(this + 8);
        this_01 = *(Js5ArchiveSettings**)(this + 24);
        uVar4 = this_01->GetPrefetchPriority();
        piVar8 = (int*)(ulong)uVar1;
        pDVar5 = (DataStatus*)(**(code**)(*plVar6 + 64))(plVar6, local_58, this_01, piVar8, uVar4, 1);
        if (pDVar5 == (DataStatus*)DataStatus::NOTLOADED) {
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6538;
            goto LAB_10058c1ff;
        }
        *(int*)(*(long*)this_00 + 24) = *(int*)(*(long*)this_00 + 24) + 1;
        MakeSharedPool<BASType, 96>::MakeShared<BaseTemplateConfigTypeList<BASType>*&, int&>(
            &local_48, this_00, (BaseTemplateConfigTypeList**)&local_34, piVar8);
        if (pDVar5 == (DataStatus*)DataStatus::MISSING) {
        LAB_10058c17f:
            plVar6 = (long*)shared_ptr<BASType>::operator->((shared_ptr<BASType>*)&local_48);
            (**(code**)(*plVar6 + 24))(plVar6);
            pDVar5 = (DataStatus*)(**(code**)(**(long**)this_00 + 72))(*(long**)this_00, &local_48);
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            if (pDVar5 != (DataStatus*)DataStatus::READY)
                goto LAB_10058c1ef;
            psVar3 = (shared_ptr*)((this + 40))->Put(&local_48, 1, (long)(int)local_34);
        } else {
            plVar6 = (long*)shared_ptr<BASType>::operator->((shared_ptr<BASType>*)&local_48);
            uVar4 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58);
            if ((undefined*)(**(code**)(*plVar6 + 32))(plVar6, uVar4) != DataStatus::NOTLOADED)
                goto LAB_10058c17f;
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
        LAB_10058c1ef:
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6538;
        }
        local_48.~shared_ptr();
    LAB_10058c1ff:
        local_58->~shared_ptr();
        return psVar3;
    }

    // 0x10058c240, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<BASType>::DirectFetch(int)
    /* ConfigTypeLoadAllContainer<BASType>::DirectFetch(int) */

    undefined8 ConfigTypeLoadAllContainer<BASType>::DirectFetch(int param_1) {
        undefined4 in_register_0000003c;

        new (CONCAT44(in_register_0000003c, param_1)) shared_ptr<oldscape::dash3d::Decor>(PTR_NullConfigType_100ee6538);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x10058c3a0, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<BASType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<BASType>::~ConfigTypeNoPreloadContainer() {
        *(undefined**)this = PTR_vtable_100ee8368 + 16;
        ((this + 40))->~LRUCache();
        ~AutoSingleton();
    }

    // 0x100591680, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<FloorUnderlayType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<FloorUnderlayType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005916a0, 144 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<FloorUnderlayType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<FloorUnderlayType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeNoPreloadContainer<FloorUnderlayType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList* param_1, Js5ResourceProvider* param_2, Js5ArchiveSettings* param_3,
        Js5ConfigGroup* param_4, uint param_5) {
        undefined8 uVar1;

        new (this) BaseConfigTypeContainer<FloorUnderlayType>(param_1, param_2, param_3, param_4);
        *(undefined**)this = PTR_vtable_100ee8360 + 16;
        new ((this + 40)) LRUCache<FloorUnderlayType>(param_5, "LRUCache");
        *(undefined8*)(*(long*)(this + 8) + 40) = *(undefined8*)(*(long*)(this + 8) + 32);
        uVar1 = Js5ConfigGroup::GetTypeName(param_4);
        ((this + 40))->~AutoSingleton(uVar1);
    }

    // 0x100591780, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<FloorUnderlayType>::~ConfigTypeNoPreloadContainer(): jumps straight to the base-object destructor

    // 0x100591790, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<FloorUnderlayType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<FloorUnderlayType>::~ConfigTypeNoPreloadContainer() {
        ~ConfigTypeNoPreloadContainer(this);
        operator_delete(this);
    }

    // 0x1005917b0, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<FloorUnderlayType>::CacheClean(unsigned int)
    void ConfigTypeNoPreloadContainer<FloorUnderlayType>::CacheClean(uint param_1) {
        ((this + 40))->Clean((ulong)param_1);
    }

    // 0x1005917d0, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<FloorUnderlayType>::CacheResize(unsigned int)
    void ConfigTypeNoPreloadContainer<FloorUnderlayType>::CacheResize(uint param_1) {
        ((this + 40))->Resize(param_1);
    }

    // 0x1005917e0, 448 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<FloorUnderlayType>::List(int, DataStatus const**)
    shared_ptr* ConfigTypeNoPreloadContainer<FloorUnderlayType>::List(int param_1, DataStatus** param_2) {
        MakeSharedPool<FloorUnderlayType, 128>* this_00;
        Js5ArchiveSettings* this_01;
        uint uVar1;
        shared_ptr* psVar3;
        undefined8 uVar4;
        DataStatus* pDVar5;
        long* plVar6;
        int* piVar8;
        _func_decltype_nullptr* p_Var9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        uint local_34;

        *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
        this_00 = (MakeSharedPool<FloorUnderlayType, 128>*)(this + 8);
        p_Var9 = (_func_decltype_nullptr*)(long)param_1;
        local_34 = param_1;
        psVar3 = (shared_ptr*)((this + 40))->Find((ulonglong)p_Var9);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            *(int*)(*(long*)this_00 + 16) = *(int*)(*(long*)this_00 + 16) + 1;
            if (param_2 == (DataStatus**)0) {
                return psVar3;
            }
            *param_2 = (DataStatus*)DataStatus::READY;
            return psVar3;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, p_Var9);
        uVar1 = local_34;
        plVar6 = *(long**)(this + 8);
        this_01 = *(Js5ArchiveSettings**)(this + 24);
        uVar4 = this_01->GetPrefetchPriority();
        piVar8 = (int*)(ulong)uVar1;
        pDVar5 = (DataStatus*)(**(code**)(*plVar6 + 64))(plVar6, local_58, this_01, piVar8, uVar4, 1);
        if (pDVar5 == (DataStatus*)DataStatus::NOTLOADED) {
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6530;
            goto LAB_10059195f;
        }
        *(int*)(*(long*)this_00 + 24) = *(int*)(*(long*)this_00 + 24) + 1;
        MakeSharedPool<FloorUnderlayType, 128>::MakeShared<BaseTemplateConfigTypeList<FloorUnderlayType>*&, int&>(
            &local_48, this_00, (BaseTemplateConfigTypeList**)&local_34, piVar8);
        if (pDVar5 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005918df:
            plVar6 = (long*)shared_ptr<FloorUnderlayType>::operator->((shared_ptr<FloorUnderlayType>*)&local_48);
            (**(code**)(*plVar6 + 24))(plVar6);
            pDVar5 = (DataStatus*)(**(code**)(**(long**)this_00 + 72))(*(long**)this_00, &local_48);
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            if (pDVar5 != (DataStatus*)DataStatus::READY)
                goto LAB_10059194f;
            psVar3 = (shared_ptr*)((this + 40))->Put(&local_48, 1, (long)(int)local_34);
        } else {
            plVar6 = (long*)shared_ptr<FloorUnderlayType>::operator->((shared_ptr<FloorUnderlayType>*)&local_48);
            uVar4 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58);
            if ((undefined*)(**(code**)(*plVar6 + 32))(plVar6, uVar4) != DataStatus::NOTLOADED)
                goto LAB_1005918df;
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
        LAB_10059194f:
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6530;
        }
        local_48.~shared_ptr();
    LAB_10059195f:
        local_58->~shared_ptr();
        return psVar3;
    }

    // 0x1005919a0, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<FloorUnderlayType>::DirectFetch(int)
    /* ConfigTypeLoadAllContainer<FloorUnderlayType>::DirectFetch(int) */

    undefined8 ConfigTypeLoadAllContainer<FloorUnderlayType>::DirectFetch(int param_1) {
        undefined4 in_register_0000003c;

        new (CONCAT44(in_register_0000003c, param_1)) shared_ptr<oldscape::dash3d::Decor>(PTR_NullConfigType_100ee6530);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x100591b00, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<FloorUnderlayType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<FloorUnderlayType>::~ConfigTypeNoPreloadContainer() {
        *(undefined**)this = PTR_vtable_100ee8360 + 16;
        ((this + 40))->~LRUCache();
        ~AutoSingleton();
    }

    // 0x100596d30, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<FloorOverlayType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<FloorOverlayType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x100596d50, 144 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<FloorOverlayType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<FloorOverlayType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeNoPreloadContainer<FloorOverlayType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList* param_1, Js5ResourceProvider* param_2, Js5ArchiveSettings* param_3,
        Js5ConfigGroup* param_4, uint param_5) {
        undefined8 uVar1;

        new (this) BaseConfigTypeContainer<FloorOverlayType>(param_1, param_2, param_3, param_4);
        *(undefined**)this = PTR_vtable_100ee8358 + 16;
        new ((this + 40)) LRUCache<FloorOverlayType>(param_5, "LRUCache");
        *(undefined8*)(*(long*)(this + 8) + 40) = *(undefined8*)(*(long*)(this + 8) + 32);
        uVar1 = Js5ConfigGroup::GetTypeName(param_4);
        ((this + 40))->~AutoSingleton(uVar1);
    }

    // 0x100596e30, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<FloorOverlayType>::~ConfigTypeNoPreloadContainer(): jumps straight to the base-object destructor

    // 0x100596e40, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<FloorOverlayType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<FloorOverlayType>::~ConfigTypeNoPreloadContainer() {
        ~ConfigTypeNoPreloadContainer(this);
        operator_delete(this);
    }

    // 0x100596e60, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<FloorOverlayType>::CacheClean(unsigned int)
    void ConfigTypeNoPreloadContainer<FloorOverlayType>::CacheClean(uint param_1) {
        ((this + 40))->Clean((ulong)param_1);
    }

    // 0x100596e80, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<FloorOverlayType>::CacheResize(unsigned int)
    void ConfigTypeNoPreloadContainer<FloorOverlayType>::CacheResize(uint param_1) {
        ((this + 40))->Resize(param_1);
    }

    // 0x100596e90, 448 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<FloorOverlayType>::List(int, DataStatus const**)
    shared_ptr* ConfigTypeNoPreloadContainer<FloorOverlayType>::List(int param_1, DataStatus** param_2) {
        MakeSharedPool<FloorOverlayType, 128>* this_00;
        Js5ArchiveSettings* this_01;
        uint uVar1;
        shared_ptr* psVar3;
        undefined8 uVar4;
        DataStatus* pDVar5;
        long* plVar6;
        int* piVar8;
        _func_decltype_nullptr* p_Var9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        uint local_34;

        *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
        this_00 = (MakeSharedPool<FloorOverlayType, 128>*)(this + 8);
        p_Var9 = (_func_decltype_nullptr*)(long)param_1;
        local_34 = param_1;
        psVar3 = (shared_ptr*)((this + 40))->Find((ulonglong)p_Var9);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            *(int*)(*(long*)this_00 + 16) = *(int*)(*(long*)this_00 + 16) + 1;
            if (param_2 == (DataStatus**)0) {
                return psVar3;
            }
            *param_2 = (DataStatus*)DataStatus::READY;
            return psVar3;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, p_Var9);
        uVar1 = local_34;
        plVar6 = *(long**)(this + 8);
        this_01 = *(Js5ArchiveSettings**)(this + 24);
        uVar4 = this_01->GetPrefetchPriority();
        piVar8 = (int*)(ulong)uVar1;
        pDVar5 = (DataStatus*)(**(code**)(*plVar6 + 64))(plVar6, local_58, this_01, piVar8, uVar4, 1);
        if (pDVar5 == (DataStatus*)DataStatus::NOTLOADED) {
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6528;
            goto LAB_10059700f;
        }
        *(int*)(*(long*)this_00 + 24) = *(int*)(*(long*)this_00 + 24) + 1;
        MakeSharedPool<FloorOverlayType, 128>::MakeShared<BaseTemplateConfigTypeList<FloorOverlayType>*&, int&>(
            &local_48, this_00, (BaseTemplateConfigTypeList**)&local_34, piVar8);
        if (pDVar5 == (DataStatus*)DataStatus::MISSING) {
        LAB_100596f8f:
            plVar6 = (long*)shared_ptr<FloorOverlayType>::operator->((shared_ptr<FloorOverlayType>*)&local_48);
            (**(code**)(*plVar6 + 24))(plVar6);
            pDVar5 = (DataStatus*)(**(code**)(**(long**)this_00 + 72))(*(long**)this_00, &local_48);
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            if (pDVar5 != (DataStatus*)DataStatus::READY)
                goto LAB_100596fff;
            psVar3 = (shared_ptr*)((this + 40))->Put(&local_48, 1, (long)(int)local_34);
        } else {
            plVar6 = (long*)shared_ptr<FloorOverlayType>::operator->((shared_ptr<FloorOverlayType>*)&local_48);
            uVar4 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58);
            if ((undefined*)(**(code**)(*plVar6 + 32))(plVar6, uVar4) != DataStatus::NOTLOADED)
                goto LAB_100596f8f;
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
        LAB_100596fff:
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6528;
        }
        local_48.~shared_ptr();
    LAB_10059700f:
        local_58->~shared_ptr();
        return psVar3;
    }

    // 0x100597050, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<FloorOverlayType>::DirectFetch(int)
    /* ConfigTypeLoadAllContainer<FloorOverlayType>::DirectFetch(int) */

    undefined8 ConfigTypeLoadAllContainer<FloorOverlayType>::DirectFetch(int param_1) {
        undefined4 in_register_0000003c;

        new (CONCAT44(in_register_0000003c, param_1)) shared_ptr<oldscape::dash3d::Decor>(PTR_NullConfigType_100ee6528);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1005971b0, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<FloorOverlayType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<FloorOverlayType>::~ConfigTypeNoPreloadContainer() {
        *(undefined**)this = PTR_vtable_100ee8358 + 16;
        ((this + 40))->~LRUCache();
        ~AutoSingleton();
    }

    // 0x10059c4d0, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<HitmarkType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<HitmarkType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x10059c4f0, 144 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<HitmarkType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<HitmarkType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeNoPreloadContainer<HitmarkType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList* param_1,
                                                                                 Js5ResourceProvider* param_2,
                                                                                 Js5ArchiveSettings* param_3,
                                                                                 Js5ConfigGroup* param_4,
                                                                                 uint param_5) {
        undefined8 uVar1;

        new (this) BaseConfigTypeContainer<HitmarkType>(param_1, param_2, param_3, param_4);
        *(undefined**)this = PTR_vtable_100ee8328 + 16;
        new ((this + 40)) LRUCache<HitmarkType>(param_5, "LRUCache");
        *(undefined8*)(*(long*)(this + 8) + 40) = *(undefined8*)(*(long*)(this + 8) + 32);
        uVar1 = Js5ConfigGroup::GetTypeName(param_4);
        ((this + 40))->~AutoSingleton(uVar1);
    }

    // 0x10059c5d0, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<HitmarkType>::~ConfigTypeNoPreloadContainer(): jumps straight to the base-object destructor

    // 0x10059c5e0, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<HitmarkType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<HitmarkType>::~ConfigTypeNoPreloadContainer() {
        ~ConfigTypeNoPreloadContainer(this);
        operator_delete(this);
    }

    // 0x10059c600, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<HitmarkType>::CacheClean(unsigned int)
    void ConfigTypeNoPreloadContainer<HitmarkType>::CacheClean(uint param_1) {
        ((this + 40))->Clean((ulong)param_1);
    }

    // 0x10059c620, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<HitmarkType>::CacheResize(unsigned int)
    void ConfigTypeNoPreloadContainer<HitmarkType>::CacheResize(uint param_1) {
        ((this + 40))->Resize(param_1);
    }

    // 0x10059c630, 448 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<HitmarkType>::List(int, DataStatus const**)
    shared_ptr* ConfigTypeNoPreloadContainer<HitmarkType>::List(int param_1, DataStatus** param_2) {
        MakeSharedPool<HitmarkType, 32>* this_00;
        Js5ArchiveSettings* this_01;
        uint uVar1;
        shared_ptr* psVar3;
        undefined8 uVar4;
        DataStatus* pDVar5;
        long* plVar6;
        int* piVar8;
        _func_decltype_nullptr* p_Var9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        uint local_34;

        *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
        this_00 = (MakeSharedPool<HitmarkType, 32>*)(this + 8);
        p_Var9 = (_func_decltype_nullptr*)(long)param_1;
        local_34 = param_1;
        psVar3 = (shared_ptr*)((this + 40))->Find((ulonglong)p_Var9);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            *(int*)(*(long*)this_00 + 16) = *(int*)(*(long*)this_00 + 16) + 1;
            if (param_2 == (DataStatus**)0) {
                return psVar3;
            }
            *param_2 = (DataStatus*)DataStatus::READY;
            return psVar3;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, p_Var9);
        uVar1 = local_34;
        plVar6 = *(long**)(this + 8);
        this_01 = *(Js5ArchiveSettings**)(this + 24);
        uVar4 = this_01->GetPrefetchPriority();
        piVar8 = (int*)(ulong)uVar1;
        pDVar5 = (DataStatus*)(**(code**)(*plVar6 + 64))(plVar6, local_58, this_01, piVar8, uVar4, 1);
        if (pDVar5 == (DataStatus*)DataStatus::NOTLOADED) {
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee64f8;
            goto LAB_10059c7af;
        }
        *(int*)(*(long*)this_00 + 24) = *(int*)(*(long*)this_00 + 24) + 1;
        MakeSharedPool<HitmarkType, 32>::MakeShared<BaseTemplateConfigTypeList<HitmarkType>*&, int&>(
            &local_48, this_00, (BaseTemplateConfigTypeList**)&local_34, piVar8);
        if (pDVar5 == (DataStatus*)DataStatus::MISSING) {
        LAB_10059c72f:
            plVar6 = (long*)shared_ptr<HitmarkType>::operator->((shared_ptr<HitmarkType>*)&local_48);
            (**(code**)(*plVar6 + 24))(plVar6);
            pDVar5 = (DataStatus*)(**(code**)(**(long**)this_00 + 72))(*(long**)this_00, &local_48);
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            if (pDVar5 != (DataStatus*)DataStatus::READY)
                goto LAB_10059c79f;
            psVar3 = (shared_ptr*)((this + 40))->Put(&local_48, 1, (long)(int)local_34);
        } else {
            plVar6 = (long*)shared_ptr<HitmarkType>::operator->((shared_ptr<HitmarkType>*)&local_48);
            uVar4 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58);
            if ((undefined*)(**(code**)(*plVar6 + 32))(plVar6, uVar4) != DataStatus::NOTLOADED)
                goto LAB_10059c72f;
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
        LAB_10059c79f:
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee64f8;
        }
        local_48.~shared_ptr();
    LAB_10059c7af:
        local_58->~shared_ptr();
        return psVar3;
    }

    // 0x10059c7f0, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<HitmarkType>::DirectFetch(int)
    /* ConfigTypeLoadAllContainer<HitmarkType>::DirectFetch(int) */

    undefined8 ConfigTypeLoadAllContainer<HitmarkType>::DirectFetch(int param_1) {
        undefined4 in_register_0000003c;

        new (CONCAT44(in_register_0000003c, param_1)) shared_ptr<oldscape::dash3d::Decor>(PTR_NullConfigType_100ee64f8);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x10059c950, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<HitmarkType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<HitmarkType>::~ConfigTypeNoPreloadContainer() {
        *(undefined**)this = PTR_vtable_100ee8328 + 16;
        ((this + 40))->~LRUCache();
        ~AutoSingleton();
    }

    // 0x1005a1540, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<HeadbarType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<HeadbarType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005a1560, 144 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<HeadbarType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<HeadbarType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeNoPreloadContainer<HeadbarType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList* param_1,
                                                                                 Js5ResourceProvider* param_2,
                                                                                 Js5ArchiveSettings* param_3,
                                                                                 Js5ConfigGroup* param_4,
                                                                                 uint param_5) {
        undefined8 uVar1;

        new (this) BaseConfigTypeContainer<HeadbarType>(param_1, param_2, param_3, param_4);
        *(undefined**)this = PTR_vtable_100ee8320 + 16;
        new ((this + 40)) LRUCache<HeadbarType>(param_5, "LRUCache");
        *(undefined8*)(*(long*)(this + 8) + 40) = *(undefined8*)(*(long*)(this + 8) + 32);
        uVar1 = Js5ConfigGroup::GetTypeName(param_4);
        ((this + 40))->~AutoSingleton(uVar1);
    }

    // 0x1005a1640, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<HeadbarType>::~ConfigTypeNoPreloadContainer(): jumps straight to the base-object destructor

    // 0x1005a1650, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<HeadbarType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<HeadbarType>::~ConfigTypeNoPreloadContainer() {
        ~ConfigTypeNoPreloadContainer(this);
        operator_delete(this);
    }

    // 0x1005a1670, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<HeadbarType>::CacheClean(unsigned int)
    void ConfigTypeNoPreloadContainer<HeadbarType>::CacheClean(uint param_1) {
        ((this + 40))->Clean((ulong)param_1);
    }

    // 0x1005a1690, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<HeadbarType>::CacheResize(unsigned int)
    void ConfigTypeNoPreloadContainer<HeadbarType>::CacheResize(uint param_1) {
        ((this + 40))->Resize(param_1);
    }

    // 0x1005a16a0, 448 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<HeadbarType>::List(int, DataStatus const**)
    shared_ptr* ConfigTypeNoPreloadContainer<HeadbarType>::List(int param_1, DataStatus** param_2) {
        MakeSharedPool<HeadbarType, 32>* this_00;
        Js5ArchiveSettings* this_01;
        uint uVar1;
        shared_ptr* psVar3;
        undefined8 uVar4;
        DataStatus* pDVar5;
        long* plVar6;
        int* piVar8;
        _func_decltype_nullptr* p_Var9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        uint local_34;

        *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
        this_00 = (MakeSharedPool<HeadbarType, 32>*)(this + 8);
        p_Var9 = (_func_decltype_nullptr*)(long)param_1;
        local_34 = param_1;
        psVar3 = (shared_ptr*)((this + 40))->Find((ulonglong)p_Var9);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            *(int*)(*(long*)this_00 + 16) = *(int*)(*(long*)this_00 + 16) + 1;
            if (param_2 == (DataStatus**)0) {
                return psVar3;
            }
            *param_2 = (DataStatus*)DataStatus::READY;
            return psVar3;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, p_Var9);
        uVar1 = local_34;
        plVar6 = *(long**)(this + 8);
        this_01 = *(Js5ArchiveSettings**)(this + 24);
        uVar4 = this_01->GetPrefetchPriority();
        piVar8 = (int*)(ulong)uVar1;
        pDVar5 = (DataStatus*)(**(code**)(*plVar6 + 64))(plVar6, local_58, this_01, piVar8, uVar4, 1);
        if (pDVar5 == (DataStatus*)DataStatus::NOTLOADED) {
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee64f0;
            goto LAB_1005a181f;
        }
        *(int*)(*(long*)this_00 + 24) = *(int*)(*(long*)this_00 + 24) + 1;
        MakeSharedPool<HeadbarType, 32>::MakeShared<BaseTemplateConfigTypeList<HeadbarType>*&, int&>(
            &local_48, this_00, (BaseTemplateConfigTypeList**)&local_34, piVar8);
        if (pDVar5 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005a179f:
            plVar6 = (long*)shared_ptr<HeadbarType>::operator->((shared_ptr<HeadbarType>*)&local_48);
            (**(code**)(*plVar6 + 24))(plVar6);
            pDVar5 = (DataStatus*)(**(code**)(**(long**)this_00 + 72))(*(long**)this_00, &local_48);
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            if (pDVar5 != (DataStatus*)DataStatus::READY)
                goto LAB_1005a180f;
            psVar3 = (shared_ptr*)((this + 40))->Put(&local_48, 1, (long)(int)local_34);
        } else {
            plVar6 = (long*)shared_ptr<HeadbarType>::operator->((shared_ptr<HeadbarType>*)&local_48);
            uVar4 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58);
            if ((undefined*)(**(code**)(*plVar6 + 32))(plVar6, uVar4) != DataStatus::NOTLOADED)
                goto LAB_1005a179f;
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
        LAB_1005a180f:
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee64f0;
        }
        local_48.~shared_ptr();
    LAB_1005a181f:
        local_58->~shared_ptr();
        return psVar3;
    }

    // 0x1005a1860, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<HeadbarType>::DirectFetch(int)
    /* ConfigTypeLoadAllContainer<HeadbarType>::DirectFetch(int) */

    undefined8 ConfigTypeLoadAllContainer<HeadbarType>::DirectFetch(int param_1) {
        undefined4 in_register_0000003c;

        new (CONCAT44(in_register_0000003c, param_1)) shared_ptr<oldscape::dash3d::Decor>(PTR_NullConfigType_100ee64f0);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1005a19c0, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<HeadbarType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<HeadbarType>::~ConfigTypeNoPreloadContainer() {
        *(undefined**)this = PTR_vtable_100ee8320 + 16;
        ((this + 40))->~LRUCache();
        ~AutoSingleton();
    }

    // 0x1005a6af0, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<IDKType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<IDKType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005a6b10, 144 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<IDKType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<IDKType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeNoPreloadContainer<IDKType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList* param_1,
                                                                             Js5ResourceProvider* param_2,
                                                                             Js5ArchiveSettings* param_3,
                                                                             Js5ConfigGroup* param_4, uint param_5) {
        undefined8 uVar1;

        new (this) BaseConfigTypeContainer<IDKType>(param_1, param_2, param_3, param_4);
        *(undefined**)this = PTR_vtable_100ee8370 + 16;
        new ((this + 40)) LRUCache<IDKType>(param_5, "LRUCache");
        *(undefined8*)(*(long*)(this + 8) + 40) = *(undefined8*)(*(long*)(this + 8) + 32);
        uVar1 = Js5ConfigGroup::GetTypeName(param_4);
        ((this + 40))->~AutoSingleton(uVar1);
    }

    // 0x1005a6bf0, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<IDKType>::~ConfigTypeNoPreloadContainer(): jumps straight to the base-object destructor

    // 0x1005a6c00, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<IDKType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<IDKType>::~ConfigTypeNoPreloadContainer() {
        ~ConfigTypeNoPreloadContainer(this);
        operator_delete(this);
    }

    // 0x1005a6c20, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<IDKType>::CacheClean(unsigned int)
    void ConfigTypeNoPreloadContainer<IDKType>::CacheClean(uint param_1) {
        ((this + 40))->Clean((ulong)param_1);
    }

    // 0x1005a6c40, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<IDKType>::CacheResize(unsigned int)
    void ConfigTypeNoPreloadContainer<IDKType>::CacheResize(uint param_1) {
        ((this + 40))->Resize(param_1);
    }

    // 0x1005a6c50, 448 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<IDKType>::List(int, DataStatus const**)
    shared_ptr* ConfigTypeNoPreloadContainer<IDKType>::List(int param_1, DataStatus** param_2) {
        MakeSharedPool<IDKType, 32>* this_00;
        Js5ArchiveSettings* this_01;
        uint uVar1;
        shared_ptr* psVar3;
        undefined8 uVar4;
        DataStatus* pDVar5;
        long* plVar6;
        int* piVar8;
        _func_decltype_nullptr* p_Var9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        uint local_34;

        *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
        this_00 = (MakeSharedPool<IDKType, 32>*)(this + 8);
        p_Var9 = (_func_decltype_nullptr*)(long)param_1;
        local_34 = param_1;
        psVar3 = (shared_ptr*)((this + 40))->Find((ulonglong)p_Var9);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            *(int*)(*(long*)this_00 + 16) = *(int*)(*(long*)this_00 + 16) + 1;
            if (param_2 == (DataStatus**)0) {
                return psVar3;
            }
            *param_2 = (DataStatus*)DataStatus::READY;
            return psVar3;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, p_Var9);
        uVar1 = local_34;
        plVar6 = *(long**)(this + 8);
        this_01 = *(Js5ArchiveSettings**)(this + 24);
        uVar4 = this_01->GetPrefetchPriority();
        piVar8 = (int*)(ulong)uVar1;
        pDVar5 = (DataStatus*)(**(code**)(*plVar6 + 64))(plVar6, local_58, this_01, piVar8, uVar4, 1);
        if (pDVar5 == (DataStatus*)DataStatus::NOTLOADED) {
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6540;
            goto LAB_1005a6dcf;
        }
        *(int*)(*(long*)this_00 + 24) = *(int*)(*(long*)this_00 + 24) + 1;
        MakeSharedPool<IDKType, 32>::MakeShared<BaseTemplateConfigTypeList<IDKType>*&, int&>(
            &local_48, this_00, (BaseTemplateConfigTypeList**)&local_34, piVar8);
        if (pDVar5 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005a6d4f:
            plVar6 = (long*)shared_ptr<IDKType>::operator->((shared_ptr<IDKType>*)&local_48);
            (**(code**)(*plVar6 + 24))(plVar6);
            pDVar5 = (DataStatus*)(**(code**)(**(long**)this_00 + 72))(*(long**)this_00, &local_48);
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            if (pDVar5 != (DataStatus*)DataStatus::READY)
                goto LAB_1005a6dbf;
            psVar3 = (shared_ptr*)((this + 40))->Put(&local_48, 1, (long)(int)local_34);
        } else {
            plVar6 = (long*)shared_ptr<IDKType>::operator->((shared_ptr<IDKType>*)&local_48);
            uVar4 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58);
            if ((undefined*)(**(code**)(*plVar6 + 32))(plVar6, uVar4) != DataStatus::NOTLOADED)
                goto LAB_1005a6d4f;
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
        LAB_1005a6dbf:
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6540;
        }
        local_48.~shared_ptr();
    LAB_1005a6dcf:
        local_58->~shared_ptr();
        return psVar3;
    }

    // 0x1005a6e10, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<IDKType>::DirectFetch(int)
    /* ConfigTypeLoadAllContainer<IDKType>::DirectFetch(int) */

    undefined8 ConfigTypeLoadAllContainer<IDKType>::DirectFetch(int param_1) {
        undefined4 in_register_0000003c;

        new (CONCAT44(in_register_0000003c, param_1)) shared_ptr<oldscape::dash3d::Decor>(PTR_NullConfigType_100ee6540);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1005a6f70, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<IDKType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<IDKType>::~ConfigTypeNoPreloadContainer() {
        *(undefined**)this = PTR_vtable_100ee8370 + 16;
        ((this + 40))->~LRUCache();
        ~AutoSingleton();
    }

    // 0x1005ac480, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<MapElementType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<MapElementType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005ac4a0, 144 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<MapElementType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<MapElementType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeNoPreloadContainer<MapElementType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList* param_1,
                                                                                    Js5ResourceProvider* param_2,
                                                                                    Js5ArchiveSettings* param_3,
                                                                                    Js5ConfigGroup* param_4,
                                                                                    uint param_5) {
        undefined8 uVar1;

        new (this) BaseConfigTypeContainer<MapElementType>(param_1, param_2, param_3, param_4);
        *(undefined**)this = PTR_vtable_100ee8348 + 16;
        new ((this + 40)) LRUCache<MapElementType>(param_5, "LRUCache");
        *(undefined8*)(*(long*)(this + 8) + 40) = *(undefined8*)(*(long*)(this + 8) + 32);
        uVar1 = Js5ConfigGroup::GetTypeName(param_4);
        ((this + 40))->~AutoSingleton(uVar1);
    }

    // 0x1005ac580, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<MapElementType>::~ConfigTypeNoPreloadContainer(): jumps straight to the base-object destructor

    // 0x1005ac590, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<MapElementType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<MapElementType>::~ConfigTypeNoPreloadContainer() {
        ~ConfigTypeNoPreloadContainer(this);
        operator_delete(this);
    }

    // 0x1005ac5b0, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<MapElementType>::CacheClean(unsigned int)
    void ConfigTypeNoPreloadContainer<MapElementType>::CacheClean(uint param_1) {
        ((this + 40))->Clean((ulong)param_1);
    }

    // 0x1005ac5d0, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<MapElementType>::CacheResize(unsigned int)
    void ConfigTypeNoPreloadContainer<MapElementType>::CacheResize(uint param_1) {
        ((this + 40))->Resize(param_1);
    }

    // 0x1005ac5e0, 448 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<MapElementType>::List(int, DataStatus const**)
    shared_ptr* ConfigTypeNoPreloadContainer<MapElementType>::List(int param_1, DataStatus** param_2) {
        MakeSharedPool<MapElementType, 512>* this_00;
        Js5ArchiveSettings* this_01;
        uint uVar1;
        shared_ptr* psVar3;
        undefined8 uVar4;
        DataStatus* pDVar5;
        long* plVar6;
        int* piVar8;
        _func_decltype_nullptr* p_Var9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        uint local_34;

        *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
        this_00 = (MakeSharedPool<MapElementType, 512>*)(this + 8);
        p_Var9 = (_func_decltype_nullptr*)(long)param_1;
        local_34 = param_1;
        psVar3 = (shared_ptr*)((this + 40))->Find((ulonglong)p_Var9);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            *(int*)(*(long*)this_00 + 16) = *(int*)(*(long*)this_00 + 16) + 1;
            if (param_2 == (DataStatus**)0) {
                return psVar3;
            }
            *param_2 = (DataStatus*)DataStatus::READY;
            return psVar3;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, p_Var9);
        uVar1 = local_34;
        plVar6 = *(long**)(this + 8);
        this_01 = *(Js5ArchiveSettings**)(this + 24);
        uVar4 = this_01->GetPrefetchPriority();
        piVar8 = (int*)(ulong)uVar1;
        pDVar5 = (DataStatus*)(**(code**)(*plVar6 + 64))(plVar6, local_58, this_01, piVar8, uVar4, 1);
        if (pDVar5 == (DataStatus*)DataStatus::NOTLOADED) {
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6518;
            goto LAB_1005ac75f;
        }
        *(int*)(*(long*)this_00 + 24) = *(int*)(*(long*)this_00 + 24) + 1;
        MakeSharedPool<MapElementType, 512>::MakeShared<BaseTemplateConfigTypeList<MapElementType>*&, int&>(
            &local_48, this_00, (BaseTemplateConfigTypeList**)&local_34, piVar8);
        if (pDVar5 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005ac6df:
            plVar6 = (long*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)&local_48);
            (**(code**)(*plVar6 + 24))(plVar6);
            pDVar5 = (DataStatus*)(**(code**)(**(long**)this_00 + 72))(*(long**)this_00, &local_48);
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            if (pDVar5 != (DataStatus*)DataStatus::READY)
                goto LAB_1005ac74f;
            psVar3 = (shared_ptr*)((this + 40))->Put(&local_48, 1, (long)(int)local_34);
        } else {
            plVar6 = (long*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)&local_48);
            uVar4 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58);
            if ((undefined*)(**(code**)(*plVar6 + 32))(plVar6, uVar4) != DataStatus::NOTLOADED)
                goto LAB_1005ac6df;
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
        LAB_1005ac74f:
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6518;
        }
        local_48.~shared_ptr();
    LAB_1005ac75f:
        local_58->~shared_ptr();
        return psVar3;
    }

    // 0x1005ac7a0, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<MapElementType>::DirectFetch(int)
    /* ConfigTypeLoadAllContainer<MapElementType>::DirectFetch(int) */

    undefined8 ConfigTypeLoadAllContainer<MapElementType>::DirectFetch(int param_1) {
        undefined4 in_register_0000003c;

        new (CONCAT44(in_register_0000003c, param_1)) shared_ptr<oldscape::dash3d::Decor>(PTR_NullConfigType_100ee6518);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1005ac900, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<MapElementType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<MapElementType>::~ConfigTypeNoPreloadContainer() {
        *(undefined**)this = PTR_vtable_100ee8348 + 16;
        ((this + 40))->~LRUCache();
        ~AutoSingleton();
    }

    // 0x1005b2d00, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<MSIType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<MSIType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005b2d20, 144 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<MSIType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<MSIType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeNoPreloadContainer<MSIType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList* param_1,
                                                                             Js5ResourceProvider* param_2,
                                                                             Js5ArchiveSettings* param_3,
                                                                             Js5ConfigGroup* param_4, uint param_5) {
        undefined8 uVar1;

        new (this) BaseConfigTypeContainer<MSIType>(param_1, param_2, param_3, param_4);
        *(undefined**)this = PTR_vtable_100ee8388 + 16;
        new ((this + 40)) LRUCache<MSIType>(param_5, "LRUCache");
        *(undefined8*)(*(long*)(this + 8) + 40) = *(undefined8*)(*(long*)(this + 8) + 32);
        uVar1 = Js5ConfigGroup::GetTypeName(param_4);
        ((this + 40))->~AutoSingleton(uVar1);
    }

    // 0x1005b2e00, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<MSIType>::~ConfigTypeNoPreloadContainer(): jumps straight to the base-object destructor

    // 0x1005b2e10, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<MSIType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<MSIType>::~ConfigTypeNoPreloadContainer() {
        ~ConfigTypeNoPreloadContainer(this);
        operator_delete(this);
    }

    // 0x1005b2e30, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<MSIType>::CacheClean(unsigned int)
    void ConfigTypeNoPreloadContainer<MSIType>::CacheClean(uint param_1) {
        ((this + 40))->Clean((ulong)param_1);
    }

    // 0x1005b2e50, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<MSIType>::CacheResize(unsigned int)
    void ConfigTypeNoPreloadContainer<MSIType>::CacheResize(uint param_1) {
        ((this + 40))->Resize(param_1);
    }

    // 0x1005b2e60, 448 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<MSIType>::List(int, DataStatus const**)
    shared_ptr* ConfigTypeNoPreloadContainer<MSIType>::List(int param_1, DataStatus** param_2) {
        MakeSharedPool<MSIType, 32>* this_00;
        Js5ArchiveSettings* this_01;
        uint uVar1;
        shared_ptr* psVar3;
        undefined8 uVar4;
        DataStatus* pDVar5;
        long* plVar6;
        int* piVar8;
        _func_decltype_nullptr* p_Var9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        uint local_34;

        *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
        this_00 = (MakeSharedPool<MSIType, 32>*)(this + 8);
        p_Var9 = (_func_decltype_nullptr*)(long)param_1;
        local_34 = param_1;
        psVar3 = (shared_ptr*)((this + 40))->Find((ulonglong)p_Var9);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            *(int*)(*(long*)this_00 + 16) = *(int*)(*(long*)this_00 + 16) + 1;
            if (param_2 == (DataStatus**)0) {
                return psVar3;
            }
            *param_2 = (DataStatus*)DataStatus::READY;
            return psVar3;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, p_Var9);
        uVar1 = local_34;
        plVar6 = *(long**)(this + 8);
        this_01 = *(Js5ArchiveSettings**)(this + 24);
        uVar4 = this_01->GetPrefetchPriority();
        piVar8 = (int*)(ulong)uVar1;
        pDVar5 = (DataStatus*)(**(code**)(*plVar6 + 64))(plVar6, local_58, this_01, piVar8, uVar4, 1);
        if (pDVar5 == (DataStatus*)DataStatus::NOTLOADED) {
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6558;
            goto LAB_1005b2fdf;
        }
        *(int*)(*(long*)this_00 + 24) = *(int*)(*(long*)this_00 + 24) + 1;
        MakeSharedPool<MSIType, 32>::MakeShared<BaseTemplateConfigTypeList<MSIType>*&, int&>(
            &local_48, this_00, (BaseTemplateConfigTypeList**)&local_34, piVar8);
        if (pDVar5 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005b2f5f:
            plVar6 = (long*)shared_ptr<MSIType>::operator->((shared_ptr<MSIType>*)&local_48);
            (**(code**)(*plVar6 + 24))(plVar6);
            pDVar5 = (DataStatus*)(**(code**)(**(long**)this_00 + 72))(*(long**)this_00, &local_48);
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            if (pDVar5 != (DataStatus*)DataStatus::READY)
                goto LAB_1005b2fcf;
            psVar3 = (shared_ptr*)((this + 40))->Put(&local_48, 1, (long)(int)local_34);
        } else {
            plVar6 = (long*)shared_ptr<MSIType>::operator->((shared_ptr<MSIType>*)&local_48);
            uVar4 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58);
            if ((undefined*)(**(code**)(*plVar6 + 32))(plVar6, uVar4) != DataStatus::NOTLOADED)
                goto LAB_1005b2f5f;
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
        LAB_1005b2fcf:
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6558;
        }
        local_48.~shared_ptr();
    LAB_1005b2fdf:
        local_58->~shared_ptr();
        return psVar3;
    }

    // 0x1005b3020, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<MSIType>::DirectFetch(int)
    /* ConfigTypeLoadAllContainer<MSIType>::DirectFetch(int) */

    undefined8 ConfigTypeLoadAllContainer<MSIType>::DirectFetch(int param_1) {
        undefined4 in_register_0000003c;

        new (CONCAT44(in_register_0000003c, param_1)) shared_ptr<oldscape::dash3d::Decor>(PTR_NullConfigType_100ee6558);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1005b3180, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<MSIType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<MSIType>::~ConfigTypeNoPreloadContainer() {
        *(undefined**)this = PTR_vtable_100ee8388 + 16;
        ((this + 40))->~LRUCache();
        ~AutoSingleton();
    }

    // 0x1005b8780, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<QuestType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<QuestType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005b87a0, 144 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<QuestType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<QuestType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeNoPreloadContainer<QuestType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList* param_1,
                                                                               Js5ResourceProvider* param_2,
                                                                               Js5ArchiveSettings* param_3,
                                                                               Js5ConfigGroup* param_4, uint param_5) {
        undefined8 uVar1;

        new (this) BaseConfigTypeContainer<QuestType>(param_1, param_2, param_3, param_4);
        *(undefined**)this = PTR_vtable_100ee83d0 + 16;
        new ((this + 40)) LRUCache<QuestType>(param_5, "LRUCache");
        *(undefined8*)(*(long*)(this + 8) + 40) = *(undefined8*)(*(long*)(this + 8) + 32);
        uVar1 = Js5ConfigGroup::GetTypeName(param_4);
        ((this + 40))->~AutoSingleton(uVar1);
    }

    // 0x1005b8880, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<QuestType>::~ConfigTypeNoPreloadContainer(): jumps straight to the base-object destructor

    // 0x1005b8890, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<QuestType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<QuestType>::~ConfigTypeNoPreloadContainer() {
        ~ConfigTypeNoPreloadContainer(this);
        operator_delete(this);
    }

    // 0x1005b88b0, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<QuestType>::CacheClean(unsigned int)
    void ConfigTypeNoPreloadContainer<QuestType>::CacheClean(uint param_1) {
        ((this + 40))->Clean((ulong)param_1);
    }

    // 0x1005b88d0, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<QuestType>::CacheResize(unsigned int)
    void ConfigTypeNoPreloadContainer<QuestType>::CacheResize(uint param_1) {
        ((this + 40))->Resize(param_1);
    }

    // 0x1005b88e0, 448 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<QuestType>::List(int, DataStatus const**)
    shared_ptr* ConfigTypeNoPreloadContainer<QuestType>::List(int param_1, DataStatus** param_2) {
        MakeSharedPool<QuestType, 128>* this_00;
        Js5ArchiveSettings* this_01;
        uint uVar1;
        shared_ptr* psVar3;
        undefined8 uVar4;
        DataStatus* pDVar5;
        long* plVar6;
        int* piVar8;
        _func_decltype_nullptr* p_Var9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        uint local_34;

        *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
        this_00 = (MakeSharedPool<QuestType, 128>*)(this + 8);
        p_Var9 = (_func_decltype_nullptr*)(long)param_1;
        local_34 = param_1;
        psVar3 = (shared_ptr*)((this + 40))->Find((ulonglong)p_Var9);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            *(int*)(*(long*)this_00 + 16) = *(int*)(*(long*)this_00 + 16) + 1;
            if (param_2 == (DataStatus**)0) {
                return psVar3;
            }
            *param_2 = (DataStatus*)DataStatus::READY;
            return psVar3;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, p_Var9);
        uVar1 = local_34;
        plVar6 = *(long**)(this + 8);
        this_01 = *(Js5ArchiveSettings**)(this + 24);
        uVar4 = this_01->GetPrefetchPriority();
        piVar8 = (int*)(ulong)uVar1;
        pDVar5 = (DataStatus*)(**(code**)(*plVar6 + 64))(plVar6, local_58, this_01, piVar8, uVar4, 1);
        if (pDVar5 == (DataStatus*)DataStatus::NOTLOADED) {
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee65a0;
            goto LAB_1005b8a5f;
        }
        *(int*)(*(long*)this_00 + 24) = *(int*)(*(long*)this_00 + 24) + 1;
        MakeSharedPool<QuestType, 128>::MakeShared<BaseTemplateConfigTypeList<QuestType>*&, int&>(
            &local_48, this_00, (BaseTemplateConfigTypeList**)&local_34, piVar8);
        if (pDVar5 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005b89df:
            plVar6 = (long*)shared_ptr<QuestType>::operator->((shared_ptr<QuestType>*)&local_48);
            (**(code**)(*plVar6 + 24))(plVar6);
            pDVar5 = (DataStatus*)(**(code**)(**(long**)this_00 + 72))(*(long**)this_00, &local_48);
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            if (pDVar5 != (DataStatus*)DataStatus::READY)
                goto LAB_1005b8a4f;
            psVar3 = (shared_ptr*)((this + 40))->Put(&local_48, 1, (long)(int)local_34);
        } else {
            plVar6 = (long*)shared_ptr<QuestType>::operator->((shared_ptr<QuestType>*)&local_48);
            uVar4 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58);
            if ((undefined*)(**(code**)(*plVar6 + 32))(plVar6, uVar4) != DataStatus::NOTLOADED)
                goto LAB_1005b89df;
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
        LAB_1005b8a4f:
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee65a0;
        }
        local_48.~shared_ptr();
    LAB_1005b8a5f:
        local_58->~shared_ptr();
        return psVar3;
    }

    // 0x1005b8aa0, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<QuestType>::DirectFetch(int)
    /* ConfigTypeLoadAllContainer<QuestType>::DirectFetch(int) */

    undefined8 ConfigTypeLoadAllContainer<QuestType>::DirectFetch(int param_1) {
        undefined4 in_register_0000003c;

        new (CONCAT44(in_register_0000003c, param_1)) shared_ptr<oldscape::dash3d::Decor>(PTR_NullConfigType_100ee65a0);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1005b8c00, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<QuestType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<QuestType>::~ConfigTypeNoPreloadContainer() {
        *(undefined**)this = PTR_vtable_100ee83d0 + 16;
        ((this + 40))->~LRUCache();
        ~AutoSingleton();
    }

    // 0x1005be310, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<SeqGroupType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<SeqGroupType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005be330, 144 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<SeqGroupType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<SeqGroupType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeNoPreloadContainer<SeqGroupType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList* param_1,
                                                                                  Js5ResourceProvider* param_2,
                                                                                  Js5ArchiveSettings* param_3,
                                                                                  Js5ConfigGroup* param_4,
                                                                                  uint param_5) {
        undefined8 uVar1;

        new (this) BaseConfigTypeContainer<SeqGroupType>(param_1, param_2, param_3, param_4);
        *(undefined**)this = PTR_vtable_100ee8330 + 16;
        new ((this + 40)) LRUCache<SeqGroupType>(param_5, "LRUCache");
        *(undefined8*)(*(long*)(this + 8) + 40) = *(undefined8*)(*(long*)(this + 8) + 32);
        uVar1 = Js5ConfigGroup::GetTypeName(param_4);
        ((this + 40))->~AutoSingleton(uVar1);
    }

    // 0x1005be410, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<SeqGroupType>::~ConfigTypeNoPreloadContainer(): jumps straight to the base-object destructor

    // 0x1005be420, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<SeqGroupType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<SeqGroupType>::~ConfigTypeNoPreloadContainer() {
        ~ConfigTypeNoPreloadContainer(this);
        operator_delete(this);
    }

    // 0x1005be440, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<SeqGroupType>::CacheClean(unsigned int)
    void ConfigTypeNoPreloadContainer<SeqGroupType>::CacheClean(uint param_1) {
        ((this + 40))->Clean((ulong)param_1);
    }

    // 0x1005be460, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<SeqGroupType>::CacheResize(unsigned int)
    void ConfigTypeNoPreloadContainer<SeqGroupType>::CacheResize(uint param_1) {
        ((this + 40))->Resize(param_1);
    }

    // 0x1005be470, 448 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<SeqGroupType>::List(int, DataStatus const**)
    shared_ptr* ConfigTypeNoPreloadContainer<SeqGroupType>::List(int param_1, DataStatus** param_2) {
        MakeSharedPool<SeqGroupType, 64>* this_00;
        Js5ArchiveSettings* this_01;
        uint uVar1;
        shared_ptr* psVar3;
        undefined8 uVar4;
        DataStatus* pDVar5;
        long* plVar6;
        int* piVar8;
        _func_decltype_nullptr* p_Var9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        uint local_34;

        *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
        this_00 = (MakeSharedPool<SeqGroupType, 64>*)(this + 8);
        p_Var9 = (_func_decltype_nullptr*)(long)param_1;
        local_34 = param_1;
        psVar3 = (shared_ptr*)((this + 40))->Find((ulonglong)p_Var9);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            *(int*)(*(long*)this_00 + 16) = *(int*)(*(long*)this_00 + 16) + 1;
            if (param_2 == (DataStatus**)0) {
                return psVar3;
            }
            *param_2 = (DataStatus*)DataStatus::READY;
            return psVar3;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, p_Var9);
        uVar1 = local_34;
        plVar6 = *(long**)(this + 8);
        this_01 = *(Js5ArchiveSettings**)(this + 24);
        uVar4 = this_01->GetPrefetchPriority();
        piVar8 = (int*)(ulong)uVar1;
        pDVar5 = (DataStatus*)(**(code**)(*plVar6 + 64))(plVar6, local_58, this_01, piVar8, uVar4, 1);
        if (pDVar5 == (DataStatus*)DataStatus::NOTLOADED) {
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6500;
            goto LAB_1005be5ef;
        }
        *(int*)(*(long*)this_00 + 24) = *(int*)(*(long*)this_00 + 24) + 1;
        MakeSharedPool<SeqGroupType, 64>::MakeShared<BaseTemplateConfigTypeList<SeqGroupType>*&, int&>(
            &local_48, this_00, (BaseTemplateConfigTypeList**)&local_34, piVar8);
        if (pDVar5 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005be56f:
            plVar6 = (long*)shared_ptr<SeqGroupType>::operator->((shared_ptr<SeqGroupType>*)&local_48);
            (**(code**)(*plVar6 + 24))(plVar6);
            pDVar5 = (DataStatus*)(**(code**)(**(long**)this_00 + 72))(*(long**)this_00, &local_48);
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            if (pDVar5 != (DataStatus*)DataStatus::READY)
                goto LAB_1005be5df;
            psVar3 = (shared_ptr*)((this + 40))->Put(&local_48, 1, (long)(int)local_34);
        } else {
            plVar6 = (long*)shared_ptr<SeqGroupType>::operator->((shared_ptr<SeqGroupType>*)&local_48);
            uVar4 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58);
            if ((undefined*)(**(code**)(*plVar6 + 32))(plVar6, uVar4) != DataStatus::NOTLOADED)
                goto LAB_1005be56f;
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
        LAB_1005be5df:
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6500;
        }
        local_48.~shared_ptr();
    LAB_1005be5ef:
        local_58->~shared_ptr();
        return psVar3;
    }

    // 0x1005be630, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<SeqGroupType>::DirectFetch(int)
    /* ConfigTypeLoadAllContainer<SeqGroupType>::DirectFetch(int) */

    undefined8 ConfigTypeLoadAllContainer<SeqGroupType>::DirectFetch(int param_1) {
        undefined4 in_register_0000003c;

        new (CONCAT44(in_register_0000003c, param_1)) shared_ptr<oldscape::dash3d::Decor>(PTR_NullConfigType_100ee6500);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1005be790, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<SeqGroupType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<SeqGroupType>::~ConfigTypeNoPreloadContainer() {
        *(undefined**)this = PTR_vtable_100ee8330 + 16;
        ((this + 40))->~LRUCache();
        ~AutoSingleton();
    }

    // 0x1005c3a50, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<LightType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<LightType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005c3a70, 144 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<LightType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<LightType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeNoPreloadContainer<LightType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList* param_1,
                                                                               Js5ResourceProvider* param_2,
                                                                               Js5ArchiveSettings* param_3,
                                                                               Js5ConfigGroup* param_4, uint param_5) {
        undefined8 uVar1;

        new (this) BaseConfigTypeContainer<LightType>(param_1, param_2, param_3, param_4);
        *(undefined**)this = PTR_vtable_100ee83c0 + 16;
        new ((this + 40)) LRUCache<LightType>(param_5, "LRUCache");
        *(undefined8*)(*(long*)(this + 8) + 40) = *(undefined8*)(*(long*)(this + 8) + 32);
        uVar1 = Js5ConfigGroup::GetTypeName(param_4);
        ((this + 40))->~AutoSingleton(uVar1);
    }

    // 0x1005c3b50, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<LightType>::~ConfigTypeNoPreloadContainer(): jumps straight to the base-object destructor

    // 0x1005c3b60, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<LightType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<LightType>::~ConfigTypeNoPreloadContainer() {
        ~ConfigTypeNoPreloadContainer(this);
        operator_delete(this);
    }

    // 0x1005c3b80, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<LightType>::CacheClean(unsigned int)
    void ConfigTypeNoPreloadContainer<LightType>::CacheClean(uint param_1) {
        ((this + 40))->Clean((ulong)param_1);
    }

    // 0x1005c3ba0, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<LightType>::CacheResize(unsigned int)
    void ConfigTypeNoPreloadContainer<LightType>::CacheResize(uint param_1) {
        ((this + 40))->Resize(param_1);
    }

    // 0x1005c3bb0, 448 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<LightType>::List(int, DataStatus const**)
    shared_ptr* ConfigTypeNoPreloadContainer<LightType>::List(int param_1, DataStatus** param_2) {
        MakeSharedPool<LightType, 32>* this_00;
        Js5ArchiveSettings* this_01;
        uint uVar1;
        shared_ptr* psVar3;
        undefined8 uVar4;
        DataStatus* pDVar5;
        long* plVar6;
        int* piVar8;
        _func_decltype_nullptr* p_Var9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        uint local_34;

        *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
        this_00 = (MakeSharedPool<LightType, 32>*)(this + 8);
        p_Var9 = (_func_decltype_nullptr*)(long)param_1;
        local_34 = param_1;
        psVar3 = (shared_ptr*)((this + 40))->Find((ulonglong)p_Var9);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            *(int*)(*(long*)this_00 + 16) = *(int*)(*(long*)this_00 + 16) + 1;
            if (param_2 == (DataStatus**)0) {
                return psVar3;
            }
            *param_2 = (DataStatus*)DataStatus::READY;
            return psVar3;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, p_Var9);
        uVar1 = local_34;
        plVar6 = *(long**)(this + 8);
        this_01 = *(Js5ArchiveSettings**)(this + 24);
        uVar4 = this_01->GetPrefetchPriority();
        piVar8 = (int*)(ulong)uVar1;
        pDVar5 = (DataStatus*)(**(code**)(*plVar6 + 64))(plVar6, local_58, this_01, piVar8, uVar4, 1);
        if (pDVar5 == (DataStatus*)DataStatus::NOTLOADED) {
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6590;
            goto LAB_1005c3d2f;
        }
        *(int*)(*(long*)this_00 + 24) = *(int*)(*(long*)this_00 + 24) + 1;
        MakeSharedPool<LightType, 32>::MakeShared<BaseTemplateConfigTypeList<LightType>*&, int&>(
            &local_48, this_00, (BaseTemplateConfigTypeList**)&local_34, piVar8);
        if (pDVar5 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005c3caf:
            plVar6 = (long*)shared_ptr<LightType>::operator->((shared_ptr<LightType>*)&local_48);
            (**(code**)(*plVar6 + 24))(plVar6);
            pDVar5 = (DataStatus*)(**(code**)(**(long**)this_00 + 72))(*(long**)this_00, &local_48);
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            if (pDVar5 != (DataStatus*)DataStatus::READY)
                goto LAB_1005c3d1f;
            psVar3 = (shared_ptr*)((this + 40))->Put(&local_48, 1, (long)(int)local_34);
        } else {
            plVar6 = (long*)shared_ptr<LightType>::operator->((shared_ptr<LightType>*)&local_48);
            uVar4 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58);
            if ((undefined*)(**(code**)(*plVar6 + 32))(plVar6, uVar4) != DataStatus::NOTLOADED)
                goto LAB_1005c3caf;
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
        LAB_1005c3d1f:
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6590;
        }
        local_48.~shared_ptr();
    LAB_1005c3d2f:
        local_58->~shared_ptr();
        return psVar3;
    }

    // 0x1005c3d70, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<LightType>::DirectFetch(int)
    /* ConfigTypeLoadAllContainer<LightType>::DirectFetch(int) */

    undefined8 ConfigTypeLoadAllContainer<LightType>::DirectFetch(int param_1) {
        undefined4 in_register_0000003c;

        new (CONCAT44(in_register_0000003c, param_1)) shared_ptr<oldscape::dash3d::Decor>(PTR_NullConfigType_100ee6590);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1005c3ed0, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<LightType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<LightType>::~ConfigTypeNoPreloadContainer() {
        *(undefined**)this = PTR_vtable_100ee83c0 + 16;
        ((this + 40))->~LRUCache();
        ~AutoSingleton();
    }

    // 0x1005c91d0, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<SkyBoxType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<SkyBoxType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005c91f0, 144 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<SkyBoxType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<SkyBoxType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeNoPreloadContainer<SkyBoxType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList* param_1,
                                                                                Js5ResourceProvider* param_2,
                                                                                Js5ArchiveSettings* param_3,
                                                                                Js5ConfigGroup* param_4, uint param_5) {
        undefined8 uVar1;

        new (this) BaseConfigTypeContainer<SkyBoxType>(param_1, param_2, param_3, param_4);
        *(undefined**)this = PTR_vtable_100ee8300 + 16;
        new ((this + 40)) LRUCache<SkyBoxType>(param_5, "LRUCache");
        *(undefined8*)(*(long*)(this + 8) + 40) = *(undefined8*)(*(long*)(this + 8) + 32);
        uVar1 = Js5ConfigGroup::GetTypeName(param_4);
        ((this + 40))->~AutoSingleton(uVar1);
    }

    // 0x1005c92d0, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<SkyBoxType>::~ConfigTypeNoPreloadContainer(): jumps straight to the base-object destructor

    // 0x1005c92e0, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<SkyBoxType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<SkyBoxType>::~ConfigTypeNoPreloadContainer() {
        ~ConfigTypeNoPreloadContainer(this);
        operator_delete(this);
    }

    // 0x1005c9300, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<SkyBoxType>::CacheClean(unsigned int)
    void ConfigTypeNoPreloadContainer<SkyBoxType>::CacheClean(uint param_1) {
        ((this + 40))->Clean((ulong)param_1);
    }

    // 0x1005c9320, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<SkyBoxType>::CacheResize(unsigned int)
    void ConfigTypeNoPreloadContainer<SkyBoxType>::CacheResize(uint param_1) {
        ((this + 40))->Resize(param_1);
    }

    // 0x1005c9330, 448 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<SkyBoxType>::List(int, DataStatus const**)
    shared_ptr* ConfigTypeNoPreloadContainer<SkyBoxType>::List(int param_1, DataStatus** param_2) {
        MakeSharedPool<SkyBoxType, 16>* this_00;
        Js5ArchiveSettings* this_01;
        uint uVar1;
        shared_ptr* psVar3;
        undefined8 uVar4;
        DataStatus* pDVar5;
        long* plVar6;
        int* piVar8;
        _func_decltype_nullptr* p_Var9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        uint local_34;

        *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
        this_00 = (MakeSharedPool<SkyBoxType, 16>*)(this + 8);
        p_Var9 = (_func_decltype_nullptr*)(long)param_1;
        local_34 = param_1;
        psVar3 = (shared_ptr*)((this + 40))->Find((ulonglong)p_Var9);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            *(int*)(*(long*)this_00 + 16) = *(int*)(*(long*)this_00 + 16) + 1;
            if (param_2 == (DataStatus**)0) {
                return psVar3;
            }
            *param_2 = (DataStatus*)DataStatus::READY;
            return psVar3;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, p_Var9);
        uVar1 = local_34;
        plVar6 = *(long**)(this + 8);
        this_01 = *(Js5ArchiveSettings**)(this + 24);
        uVar4 = this_01->GetPrefetchPriority();
        piVar8 = (int*)(ulong)uVar1;
        pDVar5 = (DataStatus*)(**(code**)(*plVar6 + 64))(plVar6, local_58, this_01, piVar8, uVar4, 1);
        if (pDVar5 == (DataStatus*)DataStatus::NOTLOADED) {
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee64d0;
            goto LAB_1005c94af;
        }
        *(int*)(*(long*)this_00 + 24) = *(int*)(*(long*)this_00 + 24) + 1;
        MakeSharedPool<SkyBoxType, 16>::MakeShared<BaseTemplateConfigTypeList<SkyBoxType>*&, int&>(
            &local_48, this_00, (BaseTemplateConfigTypeList**)&local_34, piVar8);
        if (pDVar5 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005c942f:
            plVar6 = (long*)shared_ptr<SkyBoxType>::operator->((shared_ptr<SkyBoxType>*)&local_48);
            (**(code**)(*plVar6 + 24))(plVar6);
            pDVar5 = (DataStatus*)(**(code**)(**(long**)this_00 + 72))(*(long**)this_00, &local_48);
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            if (pDVar5 != (DataStatus*)DataStatus::READY)
                goto LAB_1005c949f;
            psVar3 = (shared_ptr*)((this + 40))->Put(&local_48, 1, (long)(int)local_34);
        } else {
            plVar6 = (long*)shared_ptr<SkyBoxType>::operator->((shared_ptr<SkyBoxType>*)&local_48);
            uVar4 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58);
            if ((undefined*)(**(code**)(*plVar6 + 32))(plVar6, uVar4) != DataStatus::NOTLOADED)
                goto LAB_1005c942f;
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
        LAB_1005c949f:
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee64d0;
        }
        local_48.~shared_ptr();
    LAB_1005c94af:
        local_58->~shared_ptr();
        return psVar3;
    }

    // 0x1005c94f0, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<SkyBoxType>::DirectFetch(int)
    /* ConfigTypeLoadAllContainer<SkyBoxType>::DirectFetch(int) */

    undefined8 ConfigTypeLoadAllContainer<SkyBoxType>::DirectFetch(int param_1) {
        undefined4 in_register_0000003c;

        new (CONCAT44(in_register_0000003c, param_1)) shared_ptr<oldscape::dash3d::Decor>(PTR_NullConfigType_100ee64d0);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1005c9650, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<SkyBoxType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<SkyBoxType>::~ConfigTypeNoPreloadContainer() {
        *(undefined**)this = PTR_vtable_100ee8300 + 16;
        ((this + 40))->~LRUCache();
        ~AutoSingleton();
    }

    // 0x1005cef60, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<WaterType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<WaterType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005cef80, 144 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<WaterType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<WaterType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeNoPreloadContainer<WaterType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList* param_1,
                                                                               Js5ResourceProvider* param_2,
                                                                               Js5ArchiveSettings* param_3,
                                                                               Js5ConfigGroup* param_4, uint param_5) {
        undefined8 uVar1;

        new (this) BaseConfigTypeContainer<WaterType>(param_1, param_2, param_3, param_4);
        *(undefined**)this = PTR_vtable_100ee83d8 + 16;
        new ((this + 40)) LRUCache<WaterType>(param_5, "LRUCache");
        *(undefined8*)(*(long*)(this + 8) + 40) = *(undefined8*)(*(long*)(this + 8) + 32);
        uVar1 = Js5ConfigGroup::GetTypeName(param_4);
        ((this + 40))->~AutoSingleton(uVar1);
    }

    // 0x1005cf060, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<WaterType>::~ConfigTypeNoPreloadContainer(): jumps straight to the base-object destructor

    // 0x1005cf070, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<WaterType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<WaterType>::~ConfigTypeNoPreloadContainer() {
        ~ConfigTypeNoPreloadContainer(this);
        operator_delete(this);
    }

    // 0x1005cf090, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<WaterType>::CacheClean(unsigned int)
    void ConfigTypeNoPreloadContainer<WaterType>::CacheClean(uint param_1) {
        ((this + 40))->Clean((ulong)param_1);
    }

    // 0x1005cf0b0, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<WaterType>::CacheResize(unsigned int)
    void ConfigTypeNoPreloadContainer<WaterType>::CacheResize(uint param_1) {
        ((this + 40))->Resize(param_1);
    }

    // 0x1005cf0c0, 448 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<WaterType>::List(int, DataStatus const**)
    shared_ptr* ConfigTypeNoPreloadContainer<WaterType>::List(int param_1, DataStatus** param_2) {
        MakeSharedPool<WaterType, 16>* this_00;
        Js5ArchiveSettings* this_01;
        uint uVar1;
        shared_ptr* psVar3;
        undefined8 uVar4;
        DataStatus* pDVar5;
        long* plVar6;
        int* piVar8;
        _func_decltype_nullptr* p_Var9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        uint local_34;

        *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
        this_00 = (MakeSharedPool<WaterType, 16>*)(this + 8);
        p_Var9 = (_func_decltype_nullptr*)(long)param_1;
        local_34 = param_1;
        psVar3 = (shared_ptr*)((this + 40))->Find((ulonglong)p_Var9);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            *(int*)(*(long*)this_00 + 16) = *(int*)(*(long*)this_00 + 16) + 1;
            if (param_2 == (DataStatus**)0) {
                return psVar3;
            }
            *param_2 = (DataStatus*)DataStatus::READY;
            return psVar3;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, p_Var9);
        uVar1 = local_34;
        plVar6 = *(long**)(this + 8);
        this_01 = *(Js5ArchiveSettings**)(this + 24);
        uVar4 = this_01->GetPrefetchPriority();
        piVar8 = (int*)(ulong)uVar1;
        pDVar5 = (DataStatus*)(**(code**)(*plVar6 + 64))(plVar6, local_58, this_01, piVar8, uVar4, 1);
        if (pDVar5 == (DataStatus*)DataStatus::NOTLOADED) {
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee65a8;
            goto LAB_1005cf23f;
        }
        *(int*)(*(long*)this_00 + 24) = *(int*)(*(long*)this_00 + 24) + 1;
        MakeSharedPool<WaterType, 16>::MakeShared<BaseTemplateConfigTypeList<WaterType>*&, int&>(
            &local_48, this_00, (BaseTemplateConfigTypeList**)&local_34, piVar8);
        if (pDVar5 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005cf1bf:
            plVar6 = (long*)shared_ptr<WaterType>::operator->((shared_ptr<WaterType>*)&local_48);
            (**(code**)(*plVar6 + 24))(plVar6);
            pDVar5 = (DataStatus*)(**(code**)(**(long**)this_00 + 72))(*(long**)this_00, &local_48);
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            if (pDVar5 != (DataStatus*)DataStatus::READY)
                goto LAB_1005cf22f;
            psVar3 = (shared_ptr*)((this + 40))->Put(&local_48, 1, (long)(int)local_34);
        } else {
            plVar6 = (long*)shared_ptr<WaterType>::operator->((shared_ptr<WaterType>*)&local_48);
            uVar4 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58);
            if ((undefined*)(**(code**)(*plVar6 + 32))(plVar6, uVar4) != DataStatus::NOTLOADED)
                goto LAB_1005cf1bf;
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
        LAB_1005cf22f:
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee65a8;
        }
        local_48.~shared_ptr();
    LAB_1005cf23f:
        local_58->~shared_ptr();
        return psVar3;
    }

    // 0x1005cf280, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<WaterType>::DirectFetch(int)
    /* ConfigTypeLoadAllContainer<WaterType>::DirectFetch(int) */

    undefined8 ConfigTypeLoadAllContainer<WaterType>::DirectFetch(int param_1) {
        undefined4 in_register_0000003c;

        new (CONCAT44(in_register_0000003c, param_1)) shared_ptr<oldscape::dash3d::Decor>(PTR_NullConfigType_100ee65a8);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1005cf3e0, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<WaterType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<WaterType>::~ConfigTypeNoPreloadContainer() {
        *(undefined**)this = PTR_vtable_100ee83d8 + 16;
        ((this + 40))->~LRUCache();
        ~AutoSingleton();
    }

    // 0x1005d3320, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<CursorType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<CursorType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005d3340, 144 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<CursorType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<CursorType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeNoPreloadContainer<CursorType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList* param_1,
                                                                                Js5ResourceProvider* param_2,
                                                                                Js5ArchiveSettings* param_3,
                                                                                Js5ConfigGroup* param_4, uint param_5) {
        undefined8 uVar1;

        new (this) BaseConfigTypeContainer<CursorType>(param_1, param_2, param_3, param_4);
        *(undefined**)this = PTR_vtable_100ee82f8 + 16;
        new ((this + 40)) LRUCache<CursorType>(param_5, "LRUCache");
        *(undefined8*)(*(long*)(this + 8) + 40) = *(undefined8*)(*(long*)(this + 8) + 32);
        uVar1 = Js5ConfigGroup::GetTypeName(param_4);
        ((this + 40))->~AutoSingleton(uVar1);
    }

    // 0x1005d3420, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<CursorType>::~ConfigTypeNoPreloadContainer(): jumps straight to the base-object destructor

    // 0x1005d3430, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<CursorType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<CursorType>::~ConfigTypeNoPreloadContainer() {
        ~ConfigTypeNoPreloadContainer(this);
        operator_delete(this);
    }

    // 0x1005d3450, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<CursorType>::CacheClean(unsigned int)
    void ConfigTypeNoPreloadContainer<CursorType>::CacheClean(uint param_1) {
        ((this + 40))->Clean((ulong)param_1);
    }

    // 0x1005d3470, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<CursorType>::CacheResize(unsigned int)
    void ConfigTypeNoPreloadContainer<CursorType>::CacheResize(uint param_1) {
        ((this + 40))->Resize(param_1);
    }

    // 0x1005d3480, 448 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<CursorType>::List(int, DataStatus const**)
    shared_ptr* ConfigTypeNoPreloadContainer<CursorType>::List(int param_1, DataStatus** param_2) {
        MakeSharedPool<CursorType, 64>* this_00;
        Js5ArchiveSettings* this_01;
        uint uVar1;
        shared_ptr* psVar3;
        undefined8 uVar4;
        DataStatus* pDVar5;
        long* plVar6;
        int* piVar8;
        _func_decltype_nullptr* p_Var9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        uint local_34;

        *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
        this_00 = (MakeSharedPool<CursorType, 64>*)(this + 8);
        p_Var9 = (_func_decltype_nullptr*)(long)param_1;
        local_34 = param_1;
        psVar3 = (shared_ptr*)((this + 40))->Find((ulonglong)p_Var9);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            *(int*)(*(long*)this_00 + 16) = *(int*)(*(long*)this_00 + 16) + 1;
            if (param_2 == (DataStatus**)0) {
                return psVar3;
            }
            *param_2 = (DataStatus*)DataStatus::READY;
            return psVar3;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, p_Var9);
        uVar1 = local_34;
        plVar6 = *(long**)(this + 8);
        this_01 = *(Js5ArchiveSettings**)(this + 24);
        uVar4 = this_01->GetPrefetchPriority();
        piVar8 = (int*)(ulong)uVar1;
        pDVar5 = (DataStatus*)(**(code**)(*plVar6 + 64))(plVar6, local_58, this_01, piVar8, uVar4, 1);
        if (pDVar5 == (DataStatus*)DataStatus::NOTLOADED) {
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee64c8;
            goto LAB_1005d35ff;
        }
        *(int*)(*(long*)this_00 + 24) = *(int*)(*(long*)this_00 + 24) + 1;
        MakeSharedPool<CursorType, 64>::MakeShared<BaseTemplateConfigTypeList<CursorType>*&, int&>(
            &local_48, this_00, (BaseTemplateConfigTypeList**)&local_34, piVar8);
        if (pDVar5 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005d357f:
            plVar6 = (long*)shared_ptr<CursorType>::operator->((shared_ptr<CursorType>*)&local_48);
            (**(code**)(*plVar6 + 24))(plVar6);
            pDVar5 = (DataStatus*)(**(code**)(**(long**)this_00 + 72))(*(long**)this_00, &local_48);
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            if (pDVar5 != (DataStatus*)DataStatus::READY)
                goto LAB_1005d35ef;
            psVar3 = (shared_ptr*)((this + 40))->Put(&local_48, 1, (long)(int)local_34);
        } else {
            plVar6 = (long*)shared_ptr<CursorType>::operator->((shared_ptr<CursorType>*)&local_48);
            uVar4 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58);
            if ((undefined*)(**(code**)(*plVar6 + 32))(plVar6, uVar4) != DataStatus::NOTLOADED)
                goto LAB_1005d357f;
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
        LAB_1005d35ef:
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee64c8;
        }
        local_48.~shared_ptr();
    LAB_1005d35ff:
        local_58->~shared_ptr();
        return psVar3;
    }

    // 0x1005d3640, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<CursorType>::DirectFetch(int)
    /* ConfigTypeLoadAllContainer<CursorType>::DirectFetch(int) */

    undefined8 ConfigTypeLoadAllContainer<CursorType>::DirectFetch(int param_1) {
        undefined4 in_register_0000003c;

        new (CONCAT44(in_register_0000003c, param_1)) shared_ptr<oldscape::dash3d::Decor>(PTR_NullConfigType_100ee64c8);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1005d37a0, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<CursorType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<CursorType>::~ConfigTypeNoPreloadContainer() {
        *(undefined**)this = PTR_vtable_100ee82f8 + 16;
        ((this + 40))->~LRUCache();
        ~AutoSingleton();
    }

    // 0x1005d88e0, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<WorldAreaType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<WorldAreaType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005d8900, 144 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<WorldAreaType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<WorldAreaType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeNoPreloadContainer<WorldAreaType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList* param_1,
                                                                                   Js5ResourceProvider* param_2,
                                                                                   Js5ArchiveSettings* param_3,
                                                                                   Js5ConfigGroup* param_4,
                                                                                   uint param_5) {
        undefined8 uVar1;

        new (this) BaseConfigTypeContainer<WorldAreaType>(param_1, param_2, param_3, param_4);
        *(undefined**)this = PTR_vtable_100ee8338 + 16;
        new ((this + 40)) LRUCache<WorldAreaType>(param_5, "LRUCache");
        *(undefined8*)(*(long*)(this + 8) + 40) = *(undefined8*)(*(long*)(this + 8) + 32);
        uVar1 = Js5ConfigGroup::GetTypeName(param_4);
        ((this + 40))->~AutoSingleton(uVar1);
    }

    // 0x1005d89e0, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<WorldAreaType>::~ConfigTypeNoPreloadContainer(): jumps straight to the base-object destructor

    // 0x1005d89f0, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<WorldAreaType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<WorldAreaType>::~ConfigTypeNoPreloadContainer() {
        ~ConfigTypeNoPreloadContainer(this);
        operator_delete(this);
    }

    // 0x1005d8a10, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<WorldAreaType>::CacheClean(unsigned int)
    void ConfigTypeNoPreloadContainer<WorldAreaType>::CacheClean(uint param_1) {
        ((this + 40))->Clean((ulong)param_1);
    }

    // 0x1005d8a30, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<WorldAreaType>::CacheResize(unsigned int)
    void ConfigTypeNoPreloadContainer<WorldAreaType>::CacheResize(uint param_1) {
        ((this + 40))->Resize(param_1);
    }

    // 0x1005d8a40, 448 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<WorldAreaType>::List(int, DataStatus const**)
    shared_ptr* ConfigTypeNoPreloadContainer<WorldAreaType>::List(int param_1, DataStatus** param_2) {
        MakeSharedPool<WorldAreaType, 1024>* this_00;
        Js5ArchiveSettings* this_01;
        uint uVar1;
        shared_ptr* psVar3;
        undefined8 uVar4;
        DataStatus* pDVar5;
        long* plVar6;
        int* piVar8;
        _func_decltype_nullptr* p_Var9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        uint local_34;

        *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
        this_00 = (MakeSharedPool<WorldAreaType, 1024>*)(this + 8);
        p_Var9 = (_func_decltype_nullptr*)(long)param_1;
        local_34 = param_1;
        psVar3 = (shared_ptr*)((this + 40))->Find((ulonglong)p_Var9);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            *(int*)(*(long*)this_00 + 16) = *(int*)(*(long*)this_00 + 16) + 1;
            if (param_2 == (DataStatus**)0) {
                return psVar3;
            }
            *param_2 = (DataStatus*)DataStatus::READY;
            return psVar3;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, p_Var9);
        uVar1 = local_34;
        plVar6 = *(long**)(this + 8);
        this_01 = *(Js5ArchiveSettings**)(this + 24);
        uVar4 = this_01->GetPrefetchPriority();
        piVar8 = (int*)(ulong)uVar1;
        pDVar5 = (DataStatus*)(**(code**)(*plVar6 + 64))(plVar6, local_58, this_01, piVar8, uVar4, 1);
        if (pDVar5 == (DataStatus*)DataStatus::NOTLOADED) {
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6508;
            goto LAB_1005d8bbf;
        }
        *(int*)(*(long*)this_00 + 24) = *(int*)(*(long*)this_00 + 24) + 1;
        MakeSharedPool<WorldAreaType, 1024>::MakeShared<BaseTemplateConfigTypeList<WorldAreaType>*&, int&>(
            &local_48, this_00, (BaseTemplateConfigTypeList**)&local_34, piVar8);
        if (pDVar5 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005d8b3f:
            plVar6 = (long*)shared_ptr<WorldAreaType>::operator->((shared_ptr<WorldAreaType>*)&local_48);
            (**(code**)(*plVar6 + 24))(plVar6);
            pDVar5 = (DataStatus*)(**(code**)(**(long**)this_00 + 72))(*(long**)this_00, &local_48);
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            if (pDVar5 != (DataStatus*)DataStatus::READY)
                goto LAB_1005d8baf;
            psVar3 = (shared_ptr*)((this + 40))->Put(&local_48, 1, (long)(int)local_34);
        } else {
            plVar6 = (long*)shared_ptr<WorldAreaType>::operator->((shared_ptr<WorldAreaType>*)&local_48);
            uVar4 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58);
            if ((undefined*)(**(code**)(*plVar6 + 32))(plVar6, uVar4) != DataStatus::NOTLOADED)
                goto LAB_1005d8b3f;
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
        LAB_1005d8baf:
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6508;
        }
        local_48.~shared_ptr();
    LAB_1005d8bbf:
        local_58->~shared_ptr();
        return psVar3;
    }

    // 0x1005d8c00, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<WorldAreaType>::DirectFetch(int)
    /* ConfigTypeLoadAllContainer<WorldAreaType>::DirectFetch(int) */

    undefined8 ConfigTypeLoadAllContainer<WorldAreaType>::DirectFetch(int param_1) {
        undefined4 in_register_0000003c;

        new (CONCAT44(in_register_0000003c, param_1)) shared_ptr<oldscape::dash3d::Decor>(PTR_NullConfigType_100ee6508);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1005d8d60, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<WorldAreaType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<WorldAreaType>::~ConfigTypeNoPreloadContainer() {
        *(undefined**)this = PTR_vtable_100ee8338 + 16;
        ((this + 40))->~LRUCache();
        ~AutoSingleton();
    }

    // 0x1005de200, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<EnumType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<EnumType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005de220, 144 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<EnumType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<EnumType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeNoPreloadContainer<EnumType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList* param_1,
                                                                              Js5ResourceProvider* param_2,
                                                                              Js5ArchiveSettings* param_3,
                                                                              Js5ConfigGroup* param_4, uint param_5) {
        undefined8 uVar1;

        new (this) BaseConfigTypeContainer<EnumType>(param_1, param_2, param_3, param_4);
        *(undefined**)this = PTR_vtable_100ee83b0 + 16;
        new ((this + 40)) LRUCache<EnumType>(param_5, "LRUCache");
        *(undefined8*)(*(long*)(this + 8) + 40) = *(undefined8*)(*(long*)(this + 8) + 32);
        uVar1 = Js5ConfigGroup::GetTypeName(param_4);
        ((this + 40))->~AutoSingleton(uVar1);
    }

    // 0x1005de300, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<EnumType>::~ConfigTypeNoPreloadContainer(): jumps straight to the base-object destructor

    // 0x1005de310, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<EnumType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<EnumType>::~ConfigTypeNoPreloadContainer() {
        ~ConfigTypeNoPreloadContainer(this);
        operator_delete(this);
    }

    // 0x1005de330, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<EnumType>::CacheClean(unsigned int)
    void ConfigTypeNoPreloadContainer<EnumType>::CacheClean(uint param_1) {
        ((this + 40))->Clean((ulong)param_1);
    }

    // 0x1005de350, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<EnumType>::CacheResize(unsigned int)
    void ConfigTypeNoPreloadContainer<EnumType>::CacheResize(uint param_1) {
        ((this + 40))->Resize(param_1);
    }

    // 0x1005de360, 448 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<EnumType>::List(int, DataStatus const**)
    shared_ptr* ConfigTypeNoPreloadContainer<EnumType>::List(int param_1, DataStatus** param_2) {
        MakeSharedPool<EnumType, 128>* this_00;
        Js5ArchiveSettings* this_01;
        uint uVar1;
        shared_ptr* psVar3;
        undefined8 uVar4;
        DataStatus* pDVar5;
        long* plVar6;
        int* piVar8;
        _func_decltype_nullptr* p_Var9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        uint local_34;

        *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
        this_00 = (MakeSharedPool<EnumType, 128>*)(this + 8);
        p_Var9 = (_func_decltype_nullptr*)(long)param_1;
        local_34 = param_1;
        psVar3 = (shared_ptr*)((this + 40))->Find((ulonglong)p_Var9);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            *(int*)(*(long*)this_00 + 16) = *(int*)(*(long*)this_00 + 16) + 1;
            if (param_2 == (DataStatus**)0) {
                return psVar3;
            }
            *param_2 = (DataStatus*)DataStatus::READY;
            return psVar3;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, p_Var9);
        uVar1 = local_34;
        plVar6 = *(long**)(this + 8);
        this_01 = *(Js5ArchiveSettings**)(this + 24);
        uVar4 = this_01->GetPrefetchPriority();
        piVar8 = (int*)(ulong)uVar1;
        pDVar5 = (DataStatus*)(**(code**)(*plVar6 + 64))(plVar6, local_58, this_01, piVar8, uVar4, 1);
        if (pDVar5 == (DataStatus*)DataStatus::NOTLOADED) {
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6580;
            goto LAB_1005de4df;
        }
        *(int*)(*(long*)this_00 + 24) = *(int*)(*(long*)this_00 + 24) + 1;
        MakeSharedPool<EnumType, 128>::MakeShared<BaseTemplateConfigTypeList<EnumType>*&, int&>(
            &local_48, this_00, (BaseTemplateConfigTypeList**)&local_34, piVar8);
        if (pDVar5 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005de45f:
            plVar6 = (long*)shared_ptr<EnumType>::operator->((shared_ptr<EnumType>*)&local_48);
            (**(code**)(*plVar6 + 24))(plVar6);
            pDVar5 = (DataStatus*)(**(code**)(**(long**)this_00 + 72))(*(long**)this_00, &local_48);
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            if (pDVar5 != (DataStatus*)DataStatus::READY)
                goto LAB_1005de4cf;
            psVar3 = (shared_ptr*)((this + 40))->Put(&local_48, 1, (long)(int)local_34);
        } else {
            plVar6 = (long*)shared_ptr<EnumType>::operator->((shared_ptr<EnumType>*)&local_48);
            uVar4 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58);
            if ((undefined*)(**(code**)(*plVar6 + 32))(plVar6, uVar4) != DataStatus::NOTLOADED)
                goto LAB_1005de45f;
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
        LAB_1005de4cf:
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6580;
        }
        local_48.~shared_ptr();
    LAB_1005de4df:
        local_58->~shared_ptr();
        return psVar3;
    }

    // 0x1005de520, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<EnumType>::DirectFetch(int)
    /* ConfigTypeLoadAllContainer<EnumType>::DirectFetch(int) */

    undefined8 ConfigTypeLoadAllContainer<EnumType>::DirectFetch(int param_1) {
        undefined4 in_register_0000003c;

        new (CONCAT44(in_register_0000003c, param_1)) shared_ptr<oldscape::dash3d::Decor>(PTR_NullConfigType_100ee6580);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1005de680, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<EnumType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<EnumType>::~ConfigTypeNoPreloadContainer() {
        *(undefined**)this = PTR_vtable_100ee83b0 + 16;
        ((this + 40))->~LRUCache();
        ~AutoSingleton();
    }

    // 0x1005e4560, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<EffectAnimType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<EffectAnimType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005e4580, 144 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<EffectAnimType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<EffectAnimType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeNoPreloadContainer<EffectAnimType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList* param_1,
                                                                                    Js5ResourceProvider* param_2,
                                                                                    Js5ArchiveSettings* param_3,
                                                                                    Js5ConfigGroup* param_4,
                                                                                    uint param_5) {
        undefined8 uVar1;

        new (this) BaseConfigTypeContainer<EffectAnimType>(param_1, param_2, param_3, param_4);
        *(undefined**)this = PTR_vtable_100ee8340 + 16;
        new ((this + 40)) LRUCache<EffectAnimType>(param_5, "LRUCache");
        *(undefined8*)(*(long*)(this + 8) + 40) = *(undefined8*)(*(long*)(this + 8) + 32);
        uVar1 = Js5ConfigGroup::GetTypeName(param_4);
        ((this + 40))->~AutoSingleton(uVar1);
    }

    // 0x1005e4660, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<EffectAnimType>::~ConfigTypeNoPreloadContainer(): jumps straight to the base-object destructor

    // 0x1005e4670, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<EffectAnimType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<EffectAnimType>::~ConfigTypeNoPreloadContainer() {
        ~ConfigTypeNoPreloadContainer(this);
        operator_delete(this);
    }

    // 0x1005e4690, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<EffectAnimType>::CacheClean(unsigned int)
    void ConfigTypeNoPreloadContainer<EffectAnimType>::CacheClean(uint param_1) {
        ((this + 40))->Clean((ulong)param_1);
    }

    // 0x1005e46b0, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<EffectAnimType>::CacheResize(unsigned int)
    void ConfigTypeNoPreloadContainer<EffectAnimType>::CacheResize(uint param_1) {
        ((this + 40))->Resize(param_1);
    }

    // 0x1005e46c0, 448 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<EffectAnimType>::List(int, DataStatus const**)
    shared_ptr* ConfigTypeNoPreloadContainer<EffectAnimType>::List(int param_1, DataStatus** param_2) {
        MakeSharedPool<EffectAnimType, 256>* this_00;
        Js5ArchiveSettings* this_01;
        uint uVar1;
        shared_ptr* psVar3;
        undefined8 uVar4;
        DataStatus* pDVar5;
        long* plVar6;
        int* piVar8;
        _func_decltype_nullptr* p_Var9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        uint local_34;

        *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
        this_00 = (MakeSharedPool<EffectAnimType, 256>*)(this + 8);
        p_Var9 = (_func_decltype_nullptr*)(long)param_1;
        local_34 = param_1;
        psVar3 = (shared_ptr*)((this + 40))->Find((ulonglong)p_Var9);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            *(int*)(*(long*)this_00 + 16) = *(int*)(*(long*)this_00 + 16) + 1;
            if (param_2 == (DataStatus**)0) {
                return psVar3;
            }
            *param_2 = (DataStatus*)DataStatus::READY;
            return psVar3;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, p_Var9);
        uVar1 = local_34;
        plVar6 = *(long**)(this + 8);
        this_01 = *(Js5ArchiveSettings**)(this + 24);
        uVar4 = this_01->GetPrefetchPriority();
        piVar8 = (int*)(ulong)uVar1;
        pDVar5 = (DataStatus*)(**(code**)(*plVar6 + 64))(plVar6, local_58, this_01, piVar8, uVar4, 1);
        if (pDVar5 == (DataStatus*)DataStatus::NOTLOADED) {
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6510;
            goto LAB_1005e483f;
        }
        *(int*)(*(long*)this_00 + 24) = *(int*)(*(long*)this_00 + 24) + 1;
        MakeSharedPool<EffectAnimType, 256>::MakeShared<BaseTemplateConfigTypeList<EffectAnimType>*&, int&>(
            &local_48, this_00, (BaseTemplateConfigTypeList**)&local_34, piVar8);
        if (pDVar5 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005e47bf:
            plVar6 = (long*)shared_ptr<EffectAnimType>::operator->((shared_ptr<EffectAnimType>*)&local_48);
            (**(code**)(*plVar6 + 24))(plVar6);
            pDVar5 = (DataStatus*)(**(code**)(**(long**)this_00 + 72))(*(long**)this_00, &local_48);
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            if (pDVar5 != (DataStatus*)DataStatus::READY)
                goto LAB_1005e482f;
            psVar3 = (shared_ptr*)((this + 40))->Put(&local_48, 1, (long)(int)local_34);
        } else {
            plVar6 = (long*)shared_ptr<EffectAnimType>::operator->((shared_ptr<EffectAnimType>*)&local_48);
            uVar4 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58);
            if ((undefined*)(**(code**)(*plVar6 + 32))(plVar6, uVar4) != DataStatus::NOTLOADED)
                goto LAB_1005e47bf;
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
        LAB_1005e482f:
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6510;
        }
        local_48.~shared_ptr();
    LAB_1005e483f:
        local_58->~shared_ptr();
        return psVar3;
    }

    // 0x1005e4880, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<EffectAnimType>::DirectFetch(int)
    /* ConfigTypeLoadAllContainer<EffectAnimType>::DirectFetch(int) */

    undefined8 ConfigTypeLoadAllContainer<EffectAnimType>::DirectFetch(int param_1) {
        undefined4 in_register_0000003c;

        new (CONCAT44(in_register_0000003c, param_1)) shared_ptr<oldscape::dash3d::Decor>(PTR_NullConfigType_100ee6510);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1005e49e0, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<EffectAnimType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<EffectAnimType>::~ConfigTypeNoPreloadContainer() {
        *(undefined**)this = PTR_vtable_100ee8340 + 16;
        ((this + 40))->~LRUCache();
        ~AutoSingleton();
    }

    // 0x1005ea2b0, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<StructType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<StructType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005ea2d0, 144 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<StructType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<StructType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeNoPreloadContainer<StructType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList* param_1,
                                                                                Js5ResourceProvider* param_2,
                                                                                Js5ArchiveSettings* param_3,
                                                                                Js5ConfigGroup* param_4, uint param_5) {
        undefined8 uVar1;

        new (this) BaseConfigTypeContainer<StructType>(param_1, param_2, param_3, param_4);
        *(undefined**)this = PTR_vtable_100ee8308 + 16;
        new ((this + 40)) LRUCache<StructType>(param_5, "LRUCache");
        *(undefined8*)(*(long*)(this + 8) + 40) = *(undefined8*)(*(long*)(this + 8) + 32);
        uVar1 = Js5ConfigGroup::GetTypeName(param_4);
        ((this + 40))->~AutoSingleton(uVar1);
    }

    // 0x1005ea3b0, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<StructType>::~ConfigTypeNoPreloadContainer(): jumps straight to the base-object destructor

    // 0x1005ea3c0, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<StructType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<StructType>::~ConfigTypeNoPreloadContainer() {
        ~ConfigTypeNoPreloadContainer(this);
        operator_delete(this);
    }

    // 0x1005ea3e0, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<StructType>::CacheClean(unsigned int)
    void ConfigTypeNoPreloadContainer<StructType>::CacheClean(uint param_1) {
        ((this + 40))->Clean((ulong)param_1);
    }

    // 0x1005ea400, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<StructType>::CacheResize(unsigned int)
    void ConfigTypeNoPreloadContainer<StructType>::CacheResize(uint param_1) {
        ((this + 40))->Resize(param_1);
    }

    // 0x1005ea410, 448 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<StructType>::List(int, DataStatus const**)
    shared_ptr* ConfigTypeNoPreloadContainer<StructType>::List(int param_1, DataStatus** param_2) {
        MakeSharedPool<StructType, 1024>* this_00;
        Js5ArchiveSettings* this_01;
        uint uVar1;
        shared_ptr* psVar3;
        undefined8 uVar4;
        DataStatus* pDVar5;
        long* plVar6;
        int* piVar8;
        _func_decltype_nullptr* p_Var9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        uint local_34;

        *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
        this_00 = (MakeSharedPool<StructType, 1024>*)(this + 8);
        p_Var9 = (_func_decltype_nullptr*)(long)param_1;
        local_34 = param_1;
        psVar3 = (shared_ptr*)((this + 40))->Find((ulonglong)p_Var9);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            *(int*)(*(long*)this_00 + 16) = *(int*)(*(long*)this_00 + 16) + 1;
            if (param_2 == (DataStatus**)0) {
                return psVar3;
            }
            *param_2 = (DataStatus*)DataStatus::READY;
            return psVar3;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, p_Var9);
        uVar1 = local_34;
        plVar6 = *(long**)(this + 8);
        this_01 = *(Js5ArchiveSettings**)(this + 24);
        uVar4 = this_01->GetPrefetchPriority();
        piVar8 = (int*)(ulong)uVar1;
        pDVar5 = (DataStatus*)(**(code**)(*plVar6 + 64))(plVar6, local_58, this_01, piVar8, uVar4, 1);
        if (pDVar5 == (DataStatus*)DataStatus::NOTLOADED) {
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee64d8;
            goto LAB_1005ea58f;
        }
        *(int*)(*(long*)this_00 + 24) = *(int*)(*(long*)this_00 + 24) + 1;
        MakeSharedPool<StructType, 1024>::MakeShared<BaseTemplateConfigTypeList<StructType>*&, int&>(
            &local_48, this_00, (BaseTemplateConfigTypeList**)&local_34, piVar8);
        if (pDVar5 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005ea50f:
            plVar6 = (long*)shared_ptr<StructType>::operator->((shared_ptr<StructType>*)&local_48);
            (**(code**)(*plVar6 + 24))(plVar6);
            pDVar5 = (DataStatus*)(**(code**)(**(long**)this_00 + 72))(*(long**)this_00, &local_48);
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            if (pDVar5 != (DataStatus*)DataStatus::READY)
                goto LAB_1005ea57f;
            psVar3 = (shared_ptr*)((this + 40))->Put(&local_48, 1, (long)(int)local_34);
        } else {
            plVar6 = (long*)shared_ptr<StructType>::operator->((shared_ptr<StructType>*)&local_48);
            uVar4 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58);
            if ((undefined*)(**(code**)(*plVar6 + 32))(plVar6, uVar4) != DataStatus::NOTLOADED)
                goto LAB_1005ea50f;
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
        LAB_1005ea57f:
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee64d8;
        }
        local_48.~shared_ptr();
    LAB_1005ea58f:
        local_58->~shared_ptr();
        return psVar3;
    }

    // 0x1005ea5d0, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<StructType>::DirectFetch(int)
    /* ConfigTypeLoadAllContainer<StructType>::DirectFetch(int) */

    undefined8 ConfigTypeLoadAllContainer<StructType>::DirectFetch(int param_1) {
        undefined4 in_register_0000003c;

        new (CONCAT44(in_register_0000003c, param_1)) shared_ptr<oldscape::dash3d::Decor>(PTR_NullConfigType_100ee64d8);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1005ea730, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<StructType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<StructType>::~ConfigTypeNoPreloadContainer() {
        *(undefined**)this = PTR_vtable_100ee8308 + 16;
        ((this + 40))->~LRUCache();
        ~AutoSingleton();
    }

    // 0x1005ef950, 16 bytes, complete-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<AchievementType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<AchievementType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int): jumps straight to the base-object constructor

    // 0x1005ef970, 144 bytes, base-object constructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<AchievementType>::ConfigTypeNoPreloadContainer(BaseTemplateConfigTypeList<AchievementType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void ConfigTypeNoPreloadContainer<AchievementType>::ConfigTypeNoPreloadContainer(
        BaseTemplateConfigTypeList* param_1, Js5ResourceProvider* param_2, Js5ArchiveSettings* param_3,
        Js5ConfigGroup* param_4, uint param_5) {
        undefined8 uVar1;

        new (this) BaseConfigTypeContainer<AchievementType>(param_1, param_2, param_3, param_4);
        *(undefined**)this = PTR_vtable_100ee8350 + 16;
        new ((this + 40)) LRUCache<AchievementType>(param_5, "LRUCache");
        *(undefined8*)(*(long*)(this + 8) + 40) = *(undefined8*)(*(long*)(this + 8) + 32);
        uVar1 = Js5ConfigGroup::GetTypeName(param_4);
        ((this + 40))->~AutoSingleton(uVar1);
    }

    // 0x1005efa50, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<AchievementType>::~ConfigTypeNoPreloadContainer(): jumps straight to the base-object destructor

    // 0x1005efa60, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<AchievementType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<AchievementType>::~ConfigTypeNoPreloadContainer() {
        ~ConfigTypeNoPreloadContainer(this);
        operator_delete(this);
    }

    // 0x1005efa80, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<AchievementType>::CacheClean(unsigned int)
    void ConfigTypeNoPreloadContainer<AchievementType>::CacheClean(uint param_1) {
        ((this + 40))->Clean((ulong)param_1);
    }

    // 0x1005efaa0, 16 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<AchievementType>::CacheResize(unsigned int)
    void ConfigTypeNoPreloadContainer<AchievementType>::CacheResize(uint param_1) {
        ((this + 40))->Resize(param_1);
    }

    // 0x1005efab0, 448 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<AchievementType>::List(int, DataStatus const**)
    shared_ptr* ConfigTypeNoPreloadContainer<AchievementType>::List(int param_1, DataStatus** param_2) {
        MakeSharedPool<AchievementType, 256>* this_00;
        Js5ArchiveSettings* this_01;
        uint uVar1;
        shared_ptr* psVar3;
        undefined8 uVar4;
        DataStatus* pDVar5;
        long* plVar6;
        int* piVar8;
        _func_decltype_nullptr* p_Var9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        uint local_34;

        *(int*)(*(long*)(this + 8) + 12) = *(int*)(*(long*)(this + 8) + 12) + 1;
        this_00 = (MakeSharedPool<AchievementType, 256>*)(this + 8);
        p_Var9 = (_func_decltype_nullptr*)(long)param_1;
        local_34 = param_1;
        psVar3 = (shared_ptr*)((this + 40))->Find((ulonglong)p_Var9);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            *(int*)(*(long*)this_00 + 16) = *(int*)(*(long*)this_00 + 16) + 1;
            if (param_2 == (DataStatus**)0) {
                return psVar3;
            }
            *param_2 = (DataStatus*)DataStatus::READY;
            return psVar3;
        }
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, p_Var9);
        uVar1 = local_34;
        plVar6 = *(long**)(this + 8);
        this_01 = *(Js5ArchiveSettings**)(this + 24);
        uVar4 = this_01->GetPrefetchPriority();
        piVar8 = (int*)(ulong)uVar1;
        pDVar5 = (DataStatus*)(**(code**)(*plVar6 + 64))(plVar6, local_58, this_01, piVar8, uVar4, 1);
        if (pDVar5 == (DataStatus*)DataStatus::NOTLOADED) {
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6520;
            goto LAB_1005efc2f;
        }
        *(int*)(*(long*)this_00 + 24) = *(int*)(*(long*)this_00 + 24) + 1;
        MakeSharedPool<AchievementType, 256>::MakeShared<BaseTemplateConfigTypeList<AchievementType>*&, int&>(
            &local_48, this_00, (BaseTemplateConfigTypeList**)&local_34, piVar8);
        if (pDVar5 == (DataStatus*)DataStatus::MISSING) {
        LAB_1005efbaf:
            plVar6 = (long*)shared_ptr<AchievementType>::operator->((shared_ptr<AchievementType>*)&local_48);
            (**(code**)(*plVar6 + 24))(plVar6);
            pDVar5 = (DataStatus*)(**(code**)(**(long**)this_00 + 72))(*(long**)this_00, &local_48);
            if (param_2 != (DataStatus**)0) {
                *param_2 = pDVar5;
            }
            if (pDVar5 != (DataStatus*)DataStatus::READY)
                goto LAB_1005efc1f;
            psVar3 = (shared_ptr*)((this + 40))->Put(&local_48, 1, (long)(int)local_34);
        } else {
            plVar6 = (long*)shared_ptr<AchievementType>::operator->((shared_ptr<AchievementType>*)&local_48);
            uVar4 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58);
            if ((undefined*)(**(code**)(*plVar6 + 32))(plVar6, uVar4) != DataStatus::NOTLOADED)
                goto LAB_1005efbaf;
            *(int*)(*(long*)this_00 + 28) = *(int*)(*(long*)this_00 + 28) + 1;
        LAB_1005efc1f:
            psVar3 = (shared_ptr*)PTR_NullConfigType_100ee6520;
        }
        local_48.~shared_ptr();
    LAB_1005efc2f:
        local_58->~shared_ptr();
        return psVar3;
    }

    // 0x1005efc70, 32 bytes, inline, placed by class name
    // ConfigTypeNoPreloadContainer<AchievementType>::DirectFetch(int)
    /* ConfigTypeLoadAllContainer<AchievementType>::DirectFetch(int) */

    undefined8 ConfigTypeLoadAllContainer<AchievementType>::DirectFetch(int param_1) {
        undefined4 in_register_0000003c;

        new (CONCAT44(in_register_0000003c, param_1)) shared_ptr<oldscape::dash3d::Decor>(PTR_NullConfigType_100ee6520);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1005efdd0, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigTypeNoPreloadContainer<AchievementType>::~ConfigTypeNoPreloadContainer()
    void ConfigTypeNoPreloadContainer<AchievementType>::~ConfigTypeNoPreloadContainer() {
        *(undefined**)this = PTR_vtable_100ee8350 + 16;
        ((this + 40))->~LRUCache();
        ~AutoSingleton();
    }

} // namespace jag::game
