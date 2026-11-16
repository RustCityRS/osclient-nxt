// libs/game/runetek5/config/ConfigTypePreloadPackedContainer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    template <typename...> // 30 instantiations, e.g. <AchievementType>, <BASType>, <CursorType>
    class ConfigTypePreloadPackedContainer {
    public:
        class ConfigPage;
        class PageList;
        // virtual methods in vtable order
        virtual ~ConfigTypePreloadPackedContainer();
        virtual _x7e___2* LoadList();
        virtual void CacheReset();
        virtual void CacheClean(unsigned int arg1);
        virtual bool IsPreloaded() const;
        virtual int GetPreloadProgress() const;
        virtual shared_ptr* List(int arg1, const DataStatus** arg2);
        virtual auto DirectFetch(int arg1);
        ConfigTypePreloadPackedContainer(
            BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>& baseTemplateConfigTypeList,
            Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
            const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        void CheckGroupExistence(DownloadWaitHandler& downloadWaitHandler, Js5Index* js5Index, unsigned int arg3,
                                 unsigned int arg4);
        void CheckDecodeProgress(const Js5ArchiveSettings& js5ArchiveSettings, Js5Index* js5Index, unsigned int arg3,
                                 unsigned int arg4);
        ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>* FindConfigID(int arg1) const;
        uint64_t DecodeConfig(int arg1, shared_ptr<oldscape::configdecoder::OldscapeVarType>& oldscapeVarType);
        auto AddConfigID(const shared_ptr<oldscape::configdecoder::OldscapeVarType>& oldscapeVarType, int arg2);
        ConfigPage* AllocatePageBuffer();
        ConfigTypePreloadPackedContainer(BaseTemplateConfigTypeList<VarType>& baseTemplateConfigTypeList,
                                         Js5ResourceProvider& js5ResourceProvider,
                                         const Js5ArchiveSettings& js5ArchiveSettings,
                                         const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypePreloadPackedContainer<VarType>* FindConfigID(int arg1) const;
        uint64_t DecodeConfig(int arg1, shared_ptr<VarType>& varType);
        auto AddConfigID(const shared_ptr<VarType>& varType, int arg2);
        ConfigTypePreloadPackedContainer(BaseTemplateConfigTypeList<SeqType>& baseTemplateConfigTypeList,
                                         Js5ResourceProvider& js5ResourceProvider,
                                         const Js5ArchiveSettings& js5ArchiveSettings,
                                         const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypePreloadPackedContainer<SeqType>* FindConfigID(int arg1) const;
        uint64_t DecodeConfig(int arg1, shared_ptr<SeqType>& seqType);
        auto AddConfigID(const shared_ptr<SeqType>& seqType, int arg2);
        ConfigTypePreloadPackedContainer(BaseTemplateConfigTypeList<ObjType>& baseTemplateConfigTypeList,
                                         Js5ResourceProvider& js5ResourceProvider,
                                         const Js5ArchiveSettings& js5ArchiveSettings,
                                         const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypePreloadPackedContainer<ObjType>* FindConfigID(int arg1) const;
        uint64_t DecodeConfig(int arg1, shared_ptr<ObjType>& objType);
        auto AddConfigID(const shared_ptr<ObjType>& objType, int arg2);
        ConfigTypePreloadPackedContainer(BaseTemplateConfigTypeList<NPCType>& baseTemplateConfigTypeList,
                                         Js5ResourceProvider& js5ResourceProvider,
                                         const Js5ArchiveSettings& js5ArchiveSettings,
                                         const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypePreloadPackedContainer<NPCType>* FindConfigID(int arg1) const;
        uint64_t DecodeConfig(int arg1, shared_ptr<NPCType>& npcType);
        auto AddConfigID(const shared_ptr<NPCType>& npcType, int arg2);
        ConfigTypePreloadPackedContainer(BaseTemplateConfigTypeList<LocType>& baseTemplateConfigTypeList,
                                         Js5ResourceProvider& js5ResourceProvider,
                                         const Js5ArchiveSettings& js5ArchiveSettings,
                                         const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypePreloadPackedContainer<LocType>* FindConfigID(int arg1) const;
        uint64_t DecodeConfig(int arg1, shared_ptr<LocType>& locType);
        auto AddConfigID(const shared_ptr<LocType>& locType, int arg2);
        ConfigTypePreloadPackedContainer(BaseTemplateConfigTypeList<ParamType>& baseTemplateConfigTypeList,
                                         Js5ResourceProvider& js5ResourceProvider,
                                         const Js5ArchiveSettings& js5ArchiveSettings,
                                         const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypePreloadPackedContainer<ParamType>* FindConfigID(int arg1) const;
        uint64_t DecodeConfig(int arg1, shared_ptr<ParamType>& paramType);
        auto AddConfigID(const shared_ptr<ParamType>& paramType, int arg2);
        ConfigTypePreloadPackedContainer(BaseTemplateConfigTypeList<DBRowType>& baseTemplateConfigTypeList,
                                         Js5ResourceProvider& js5ResourceProvider,
                                         const Js5ArchiveSettings& js5ArchiveSettings,
                                         const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypePreloadPackedContainer<DBRowType>* FindConfigID(int arg1) const;
        uint64_t DecodeConfig(int arg1, shared_ptr<DBRowType>& dbRowType);
        auto AddConfigID(const shared_ptr<DBRowType>& dbRowType, int arg2);
        ConfigTypePreloadPackedContainer(BaseTemplateConfigTypeList<DBTableType>& baseTemplateConfigTypeList,
                                         Js5ResourceProvider& js5ResourceProvider,
                                         const Js5ArchiveSettings& js5ArchiveSettings,
                                         const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypePreloadPackedContainer<DBTableType>* FindConfigID(int arg1) const;
        uint64_t DecodeConfig(int arg1, shared_ptr<DBTableType>& dbTableType);
        auto AddConfigID(const shared_ptr<DBTableType>& dbTableType, int arg2);
        ConfigTypePreloadPackedContainer(BaseTemplateConfigTypeList<InvType>& baseTemplateConfigTypeList,
                                         Js5ResourceProvider& js5ResourceProvider,
                                         const Js5ArchiveSettings& js5ArchiveSettings,
                                         const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypePreloadPackedContainer<InvType>* FindConfigID(int arg1) const;
        uint64_t DecodeConfig(int arg1, shared_ptr<InvType>& invType);
        auto AddConfigID(const shared_ptr<InvType>& invType, int arg2);
        ConfigTypePreloadPackedContainer(BaseTemplateConfigTypeList<VarBitType>& baseTemplateConfigTypeList,
                                         Js5ResourceProvider& js5ResourceProvider,
                                         const Js5ArchiveSettings& js5ArchiveSettings,
                                         const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypePreloadPackedContainer<VarBitType>* FindConfigID(int arg1) const;
        uint64_t DecodeConfig(int arg1, shared_ptr<VarBitType>& varBitType);
        auto AddConfigID(const shared_ptr<VarBitType>& varBitType, int arg2);
        ConfigTypePreloadPackedContainer(BaseTemplateConfigTypeList<BASType>& baseTemplateConfigTypeList,
                                         Js5ResourceProvider& js5ResourceProvider,
                                         const Js5ArchiveSettings& js5ArchiveSettings,
                                         const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypePreloadPackedContainer<BASType>* FindConfigID(int arg1) const;
        uint64_t DecodeConfig(int arg1, shared_ptr<BASType>& basType);
        auto AddConfigID(const shared_ptr<BASType>& basType, int arg2);
        ConfigTypePreloadPackedContainer(BaseTemplateConfigTypeList<FloorUnderlayType>& baseTemplateConfigTypeList,
                                         Js5ResourceProvider& js5ResourceProvider,
                                         const Js5ArchiveSettings& js5ArchiveSettings,
                                         const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypePreloadPackedContainer<FloorUnderlayType>* FindConfigID(int arg1) const;
        uint64_t DecodeConfig(int arg1, shared_ptr<FloorUnderlayType>& floorUnderlayType);
        auto AddConfigID(const shared_ptr<FloorUnderlayType>& floorUnderlayType, int arg2);
        ConfigTypePreloadPackedContainer(BaseTemplateConfigTypeList<FloorOverlayType>& baseTemplateConfigTypeList,
                                         Js5ResourceProvider& js5ResourceProvider,
                                         const Js5ArchiveSettings& js5ArchiveSettings,
                                         const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypePreloadPackedContainer<FloorOverlayType>* FindConfigID(int arg1) const;
        uint64_t DecodeConfig(int arg1, shared_ptr<FloorOverlayType>& floorOverlayType);
        auto AddConfigID(const shared_ptr<FloorOverlayType>& floorOverlayType, int arg2);
        ConfigTypePreloadPackedContainer(BaseTemplateConfigTypeList<HitmarkType>& baseTemplateConfigTypeList,
                                         Js5ResourceProvider& js5ResourceProvider,
                                         const Js5ArchiveSettings& js5ArchiveSettings,
                                         const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypePreloadPackedContainer<HitmarkType>* FindConfigID(int arg1) const;
        uint64_t DecodeConfig(int arg1, shared_ptr<HitmarkType>& hitmarkType);
        auto AddConfigID(const shared_ptr<HitmarkType>& hitmarkType, int arg2);
        ConfigTypePreloadPackedContainer(BaseTemplateConfigTypeList<HeadbarType>& baseTemplateConfigTypeList,
                                         Js5ResourceProvider& js5ResourceProvider,
                                         const Js5ArchiveSettings& js5ArchiveSettings,
                                         const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypePreloadPackedContainer<HeadbarType>* FindConfigID(int arg1) const;
        uint64_t DecodeConfig(int arg1, shared_ptr<HeadbarType>& headbarType);
        auto AddConfigID(const shared_ptr<HeadbarType>& headbarType, int arg2);
        ConfigTypePreloadPackedContainer(BaseTemplateConfigTypeList<IDKType>& baseTemplateConfigTypeList,
                                         Js5ResourceProvider& js5ResourceProvider,
                                         const Js5ArchiveSettings& js5ArchiveSettings,
                                         const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypePreloadPackedContainer<IDKType>* FindConfigID(int arg1) const;
        uint64_t DecodeConfig(int arg1, shared_ptr<IDKType>& idkType);
        auto AddConfigID(const shared_ptr<IDKType>& idkType, int arg2);
        ConfigTypePreloadPackedContainer(BaseTemplateConfigTypeList<MapElementType>& baseTemplateConfigTypeList,
                                         Js5ResourceProvider& js5ResourceProvider,
                                         const Js5ArchiveSettings& js5ArchiveSettings,
                                         const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypePreloadPackedContainer<MapElementType>* FindConfigID(int arg1) const;
        uint64_t DecodeConfig(int arg1, shared_ptr<MapElementType>& mapElementType);
        auto AddConfigID(const shared_ptr<MapElementType>& mapElementType, int arg2);
        ConfigTypePreloadPackedContainer(BaseTemplateConfigTypeList<MSIType>& baseTemplateConfigTypeList,
                                         Js5ResourceProvider& js5ResourceProvider,
                                         const Js5ArchiveSettings& js5ArchiveSettings,
                                         const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypePreloadPackedContainer<MSIType>* FindConfigID(int arg1) const;
        uint64_t DecodeConfig(int arg1, shared_ptr<MSIType>& msiType);
        auto AddConfigID(const shared_ptr<MSIType>& msiType, int arg2);
        ConfigTypePreloadPackedContainer(BaseTemplateConfigTypeList<QuestType>& baseTemplateConfigTypeList,
                                         Js5ResourceProvider& js5ResourceProvider,
                                         const Js5ArchiveSettings& js5ArchiveSettings,
                                         const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypePreloadPackedContainer<QuestType>* FindConfigID(int arg1) const;
        uint64_t DecodeConfig(int arg1, shared_ptr<QuestType>& questType);
        auto AddConfigID(const shared_ptr<QuestType>& questType, int arg2);
        ConfigTypePreloadPackedContainer(BaseTemplateConfigTypeList<SeqGroupType>& baseTemplateConfigTypeList,
                                         Js5ResourceProvider& js5ResourceProvider,
                                         const Js5ArchiveSettings& js5ArchiveSettings,
                                         const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypePreloadPackedContainer<SeqGroupType>* FindConfigID(int arg1) const;
        uint64_t DecodeConfig(int arg1, shared_ptr<SeqGroupType>& seqGroupType);
        auto AddConfigID(const shared_ptr<SeqGroupType>& seqGroupType, int arg2);
        ConfigTypePreloadPackedContainer(BaseTemplateConfigTypeList<LightType>& baseTemplateConfigTypeList,
                                         Js5ResourceProvider& js5ResourceProvider,
                                         const Js5ArchiveSettings& js5ArchiveSettings,
                                         const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypePreloadPackedContainer<LightType>* FindConfigID(int arg1) const;
        uint64_t DecodeConfig(int arg1, shared_ptr<LightType>& lightType);
        auto AddConfigID(const shared_ptr<LightType>& lightType, int arg2);
        ConfigTypePreloadPackedContainer(BaseTemplateConfigTypeList<SkyBoxType>& baseTemplateConfigTypeList,
                                         Js5ResourceProvider& js5ResourceProvider,
                                         const Js5ArchiveSettings& js5ArchiveSettings,
                                         const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypePreloadPackedContainer<SkyBoxType>* FindConfigID(int arg1) const;
        uint64_t DecodeConfig(int arg1, shared_ptr<SkyBoxType>& skyBoxType);
        auto AddConfigID(const shared_ptr<SkyBoxType>& skyBoxType, int arg2);
        ConfigTypePreloadPackedContainer(BaseTemplateConfigTypeList<WaterType>& baseTemplateConfigTypeList,
                                         Js5ResourceProvider& js5ResourceProvider,
                                         const Js5ArchiveSettings& js5ArchiveSettings,
                                         const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypePreloadPackedContainer<WaterType>* FindConfigID(int arg1) const;
        uint64_t DecodeConfig(int arg1, shared_ptr<WaterType>& waterType);
        auto AddConfigID(const shared_ptr<WaterType>& waterType, int arg2);
        ConfigTypePreloadPackedContainer(BaseTemplateConfigTypeList<CursorType>& baseTemplateConfigTypeList,
                                         Js5ResourceProvider& js5ResourceProvider,
                                         const Js5ArchiveSettings& js5ArchiveSettings,
                                         const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypePreloadPackedContainer<CursorType>* FindConfigID(int arg1) const;
        uint64_t DecodeConfig(int arg1, shared_ptr<CursorType>& cursorType);
        auto AddConfigID(const shared_ptr<CursorType>& cursorType, int arg2);
        ConfigTypePreloadPackedContainer(BaseTemplateConfigTypeList<WorldAreaType>& baseTemplateConfigTypeList,
                                         Js5ResourceProvider& js5ResourceProvider,
                                         const Js5ArchiveSettings& js5ArchiveSettings,
                                         const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypePreloadPackedContainer<WorldAreaType>* FindConfigID(int arg1) const;
        uint64_t DecodeConfig(int arg1, shared_ptr<WorldAreaType>& worldAreaType);
        auto AddConfigID(const shared_ptr<WorldAreaType>& worldAreaType, int arg2);
        ConfigTypePreloadPackedContainer(BaseTemplateConfigTypeList<EnumType>& baseTemplateConfigTypeList,
                                         Js5ResourceProvider& js5ResourceProvider,
                                         const Js5ArchiveSettings& js5ArchiveSettings,
                                         const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypePreloadPackedContainer<EnumType>* FindConfigID(int arg1) const;
        uint64_t DecodeConfig(int arg1, shared_ptr<EnumType>& enumType);
        auto AddConfigID(const shared_ptr<EnumType>& enumType, int arg2);
        ConfigTypePreloadPackedContainer(BaseTemplateConfigTypeList<EffectAnimType>& baseTemplateConfigTypeList,
                                         Js5ResourceProvider& js5ResourceProvider,
                                         const Js5ArchiveSettings& js5ArchiveSettings,
                                         const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypePreloadPackedContainer<EffectAnimType>* FindConfigID(int arg1) const;
        uint64_t DecodeConfig(int arg1, shared_ptr<EffectAnimType>& effectAnimType);
        auto AddConfigID(const shared_ptr<EffectAnimType>& effectAnimType, int arg2);
        ConfigTypePreloadPackedContainer(BaseTemplateConfigTypeList<StructType>& baseTemplateConfigTypeList,
                                         Js5ResourceProvider& js5ResourceProvider,
                                         const Js5ArchiveSettings& js5ArchiveSettings,
                                         const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypePreloadPackedContainer<StructType>* FindConfigID(int arg1) const;
        uint64_t DecodeConfig(int arg1, shared_ptr<StructType>& structType);
        auto AddConfigID(const shared_ptr<StructType>& structType, int arg2);
        ConfigTypePreloadPackedContainer(BaseTemplateConfigTypeList<AchievementType>& baseTemplateConfigTypeList,
                                         Js5ResourceProvider& js5ResourceProvider,
                                         const Js5ArchiveSettings& js5ArchiveSettings,
                                         const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5);
        ConfigTypePreloadPackedContainer<AchievementType>* FindConfigID(int arg1) const;
        uint64_t DecodeConfig(int arg1, shared_ptr<AchievementType>& achievementType);
        auto AddConfigID(const shared_ptr<AchievementType>& achievementType, int arg2);
    };

    template <typename...> // 1 instantiations, e.g.
    class ConfigTypePreloadPackedContainer::ConfigPage {
    public:
        void Clear();
        ConfigPage();
    };

    template <typename...> // 1 instantiations, e.g.
    class ConfigTypePreloadPackedContainer::PageList {
    public:
        void ClearPageList(SimpleAllocator& simpleAllocator);
        PageList(unsigned int arg1);
    };

    // 0x100140d60
    ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::ConfigTypePreloadPackedContainer(
        BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>& baseTemplateConfigTypeList,
        Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
        const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>(
              baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee84d8;
        new ((this + 9)) eastl::vector<
            std::unique_ptr<ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::PageList>>();
        new ((this + 17)) shared_ptr();
        new ((this + 19)) Array<Array<unsigned char>>();
        new ((this + 22)) PacketT();
        ((this + 26))->unique_ptr<true, void>();
    }

    // 0x100140ed0
    _x7e___2* ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::LoadList() {
        unique_ptr* this_00;
        bool bVar2;
        bool cVar3;
        DownloadWaitHandler* pDVar6;
        CoordMapSquare* pCVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType> _vtbl* local_48;

        if (*(int*)&this[6]._vptr == 2) {
            return (_x7e___2*)DataStatus::READY;
        }
        ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType> _vtbl* pCVar1 = this[2]._vptr;
        ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType> _vtbl* js5ArchiveSettings =
            this[3]._vptr;
        Js5Index* local_40 = nullptr;
        _x7e___2* p_Var5 = (_x7e___2*)(**(void (**)(...))(pCVar1->_dtor + 24))(pCVar1, &local_40, js5ArchiveSettings);
        if (p_Var5 != (_x7e___2*)DataStatus::READY) {
            return p_Var5;
        }
        unsigned int local_34 = this[1]._vptr->GetUIHeight();
        int iVar4 = this[1]._vptr->GetStreamCountLastMix();
        *(unsigned int*)&this[8]._vptr = iVar4 + local_34;
        if (*(int*)&this[6]._vptr == 0) {
            this_00 = (unique_ptr*)(this + 26);
            local_48 = js5ArchiveSettings;
            cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar3) {
                LogAssert("!m_downloadHandler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "ConfigTypePreloadPackedContainer.h",
                          213, nullptr);
            }
            local_50 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_34);
            *this_00 = local_50;
            pDVar6 = (DownloadWaitHandler*)**this_00;
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                CheckGroupExistence(this, pDVar6, local_40, uVar8, 0);
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    CheckGroupExistence(this, pDVar6, local_40, uVar8, uVar8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            ((this + 19))->set_max_size((unsigned long)local_34, 0);
            *(uint32_t*)&this[6]._vptr = 1;
            iVar4 = *(int*)&this[6]._vptr;
            js5ArchiveSettings = local_48;
        } else {
            iVar4 = *(int*)&this[6]._vptr;
        }
        if (iVar4 != 1) {
            return (_x7e___2*)DataStatus::READY;
        }
        pDVar6 = (DownloadWaitHandler*)*(*((this + 26)));
        if ((this[1]._vptr != nullptr) && (cVar3 = (**(void (**)(...))(pCVar1->_dtor + 64))(pCVar1), cVar3)) {
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                cVar3 = pDVar6->IsComplete(0);
                if ((!cVar3) && (cVar3 = pDVar6->CanCheck(0), cVar3)) {
                    CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, 0);
                }
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    cVar3 = pDVar6->IsComplete(uVar8);
                    if ((!cVar3) && (cVar3 = pDVar6->CanCheck(uVar8), cVar3)) {
                        CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, uVar8);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            if (*(unsigned int*)&this[8]._vptr <= *(unsigned int*)((long)&this[7]._vptr + 4)) {
                ((this + 26))->reset(nullptr);
                *(uint32_t*)&this[6]._vptr = 2;
                p_Var5 = (_x7e___2*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->_x7e___2 = p_Var5;
                bVar2 = true;
                goto LAB_100141146;
            }
        }
        bVar2 = false;
        p_Var5 = (_x7e___2*)DataStatus::NOTLOADED;
    LAB_100141146:
        if (bVar2) {
            return (_x7e___2*)DataStatus::READY;
        }
        return p_Var5;
    }

    // 0x100141190
    void ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::CacheReset() {
        unique_ptr<ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::PageList>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (unique_ptr<ConfigTypePreloadPackedContainer<
                               oldscape::configdecoder::OldscapeVarType>::PageList>*)(*this_00)[arg1];
                ((PageList*)this_01->get())->ClearPageList(*this[16]._vptr);
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        this_00->clear();
        this[14]._vptr = nullptr;
        *(uint32_t*)&this[15]._vptr = 0;
        *(uint32_t*)&this[13]._vptr = 4294967295;
    }

    // 0x100141220
    void ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::CacheClean(unsigned int arg1) {
        LoadList** ppLVar1;
        ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType> _vtbl* this_01;
        unsigned long uVar4;
        unique_ptr<ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::PageList>* this_02;
        array<ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::ConfigPage*, 256ul>* this_03;
        uint64_t* puVar5;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_04;
        unsigned long arg1_00;
        unsigned int uVar6;
        int iVar7;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_02 = (unique_ptr<ConfigTypePreloadPackedContainer<
                               oldscape::configdecoder::OldscapeVarType>::PageList>*)(*this_00)[arg1_00];
                this_03 =
                    (array<ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::ConfigPage*,
                           256ul>*)this_02->get();
                uVar6 = *(unsigned int*)(this_03 + 2052);
                iVar7 = 16;
                do {
                    puVar5 = (uint64_t*)(*this_03)[(unsigned long)(uVar6 >> 8)];
                    this_01 =
                        (ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType> _vtbl*)*puVar5;
                    if (this_01 != nullptr) {
                        this_04 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*this_01)[(
                            unsigned long)(uVar6 & 255)];
                        if (this_04->unique() != '\0') {
                            this_04->reset();
                            if ((this_01 == this[14]._vptr) && ((uVar6 & 255) == *(unsigned int*)&this[15]._vptr)) {
                                this[14]._vptr = nullptr;
                                *(uint32_t*)&this[15]._vptr = 0;
                                *(uint32_t*)&this[13]._vptr = 4294967295;
                            }
                            ppLVar1 = &this_01[51].LoadList;
                            *(int*)ppLVar1 = *(int*)ppLVar1 - 1;
                            if (*(int*)ppLVar1 == 0) {
                                this[16]._vptr->DeAllocate(&this_01[51].CacheReset);
                                *puVar5 = 0;
                            }
                        }
                    }
                    uVar6 = uVar6 + 1 & 65535;
                    iVar7 = iVar7 - 1;
                } while (iVar7 != 0);
                *(unsigned int*)(this_03 + 2052) = uVar6;
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x100141390
    bool ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::IsPreloaded() const {
        return *(int*)&this[6]._vptr == 2;
    }

    // 0x1001413a0
    int ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::GetPreloadProgress() const {
        int iVar1 = ((this + 5))->GetMaxLineWidth();
        return ((this + 5))->GetCompletedGold() + iVar1;
    }

    // 0x1001413d0
    shared_ptr*
    ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::List(int arg1,
                                                                                     const DataStatus** arg2) {
        shared_ptr* psVar2;
        uint8_t** ppuVar3;

        if (*(int*)&this[6]._vptr != 2) {
            psVar2 = (shared_ptr*)&oldscape::configdecoder::OldscapeVarType::NullConfigType;
            if (arg2 == nullptr) {
                return (shared_ptr*)&oldscape::configdecoder::OldscapeVarType::NullConfigType;
            }
            ppuVar3 = &DataStatus::NOTLOADED;
        LAB_10014142b:
            *arg2 = (DataStatus*)*ppuVar3;
            return psVar2;
        }
        psVar2 = (shared_ptr*)FindConfigID(this, arg1);
        if (shared_ptr::operator_cast_to_bool(psVar2)) {
            if (arg2 == nullptr) {
                return psVar2;
            }
            ppuVar3 = &DataStatus::READY;
            goto LAB_10014142b;
        }
        shared_ptr local_38;
        if (!(DecodeConfig(this, arg1, (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)&local_38))) {
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::MISSING;
            LAB_1001414a1:
                *arg2 = (DataStatus*)*ppuVar3;
            }
        } else {
            if (shared_ptr::operator_cast_to_bool(&local_38)) {
                if (arg2 != nullptr) {
                    *arg2 = (DataStatus*)DataStatus::READY;
                }
                psVar2 = (shared_ptr*)AddConfigID(
                    (ReturnValue*)this, (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)&local_38, arg1);
                goto LAB_1001414ae;
            }
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_1001414a1;
            }
        }
        psVar2 = (shared_ptr*)&oldscape::configdecoder::OldscapeVarType::NullConfigType;
    LAB_1001414ae:
        return psVar2;
    }

    // 0x1001414e0
    auto ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::DirectFetch(int arg1) {
        if (*(int*)&this[6]._vptr != 2) {
            LogAssert("m_loadStep == BaseLoadAllConfigTypeContainer::LoadStep::DONE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      179, nullptr);
        }
        auto result;
        if (DecodeConfig(this, arg1, (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)&result) == '\0') {
            LogAssert("exists",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      183, nullptr);
        }
        return result;
    }

    // 0x100141740
    ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::~ConfigTypePreloadPackedContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee84d8;
        this[16]._vptr->PrintMetrics();
        CacheReset();
        ((this + 26))->~unique_ptr();
        ((this + 22))->~VBOMapper();
        ((this + 19))->~Array();
        ((this + 17))->~shared_ptr();
        ((this + 9))->~vector();
        ((this + 5))->~AutoSingleton();
    }

    // 0x100141990
    void ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::CheckGroupExistence(
        DownloadWaitHandler& downloadWaitHandler, Js5Index* js5Index, unsigned int arg3, unsigned int arg4) {
        int* piVar1;

        if (js5Index == nullptr) {
            LogAssert("js5Index",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      365, nullptr);
        }
        if (js5Index->DoesGroupExist(arg3) == '\0') {
            piVar1 = (int*)((long)&this[7]._vptr + 4);
            *piVar1 = *piVar1 + 1;
        } else {
            downloadWaitHandler.SetExists(arg4);
        }
    }

    // 0x100141a10
    void ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::CheckDecodeProgress(
        const Js5ArchiveSettings& js5ArchiveSettings, Js5Index* js5Index, unsigned int arg3, unsigned int arg4) {
        int iVar1;
        Array<unsigned char>* this_00;
        TextureAtlasReference* pTVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        void* pvVar4;
        PacketT<Array<unsigned char>>* this_02;
        void* pvVar5;
        size_t sVar6;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)this[1]._vptr->GetGroup(local_48, js5ArchiveSettings, arg3, (Priority*)Priority::HIGHEST, true,
                                              true) == DataStatus::READY) {
            this_00 = (Array<unsigned char>*)(*((this + 19)))[(unsigned long)arg4];
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            this_00->set_max_size(pTVar3->GetTextureAtlas(), 0);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*((this + 19)))[(unsigned long)arg4];
            pvVar4 = (void*)this_01->data();
            this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pvVar5 = (void*)this_02->GetDataPtr();
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            sVar6 = pTVar3->GetTextureAtlas();
            _memcpy(pvVar4, pvVar5, sVar6);
            iVar1 = js5Index->GetMaximumFileID(arg3);
            *(int*)((long)&this[7]._vptr + 4) = iVar1 + *(int*)((long)&this[7]._vptr + 4) + 1;
            ((DownloadWaitHandler*)(*((this + 26))).operator->())->Completed(arg4);
        }
    }

    // 0x100141c60
    void ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::PageList::ClearPageList(
        SimpleAllocator& simpleAllocator) {
        ConfigPage* this_00;
        uint64_t* puVar1;

        unsigned long arg1 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1];
            this_00 = (ConfigPage*)*puVar1;
            if (this_00 != nullptr) {
                this_00->Clear();
                simpleAllocator.DeAllocate((this_00 + 4104));
                *puVar1 = 0;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x100141d40
    void ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::ConfigPage::Clear() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1];
            if (this_00->end() != 0) {
                this_00->reset();
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x100141e70
    ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>*
    ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::FindConfigID(int arg1) const {
        unsigned int uVar2;
        shared_ptr* this_00;
        long lVar3;
        unique_ptr<ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::PageList>* puVar4;
        unsigned long uVar5;
        array<ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::ConfigPage*, 256ul>* this_01;
        long* plVar6;
        ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>* pCVar7;
        unsigned long arg1_00;
        unsigned int uVar8;
        ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType> _vtbl* this_02;
        vector<eastl::pair<int, int>>* this_03;

        if (arg1 == -1) {
            pCVar7 = this + 17;
        } else {
            if (*(int*)&this[13]._vptr == arg1) {
                if (this[14]._vptr != nullptr) {
                    this_00 = (shared_ptr*)(*this[14]._vptr)[(unsigned long)*(unsigned int*)&this[15]._vptr];
                    if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                        this_02 = this[14]._vptr;
                        uVar8 = *(unsigned int*)&this[15]._vptr;
                    LAB_100141f92:
                        pCVar7 =
                            (ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>*)(*this_02)[(
                                unsigned long)uVar8];
                        return pCVar7;
                    }
                }
                uVar8 = *(unsigned int*)&this[13]._vptr;
                uVar2 = this[3]._vptr->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigTypePreloadPackedContainer.h",
                                507, "Previously loaded config ID %d (archive ID %u) unexpectedly missing",
                                (unsigned long)uVar8, (unsigned long)uVar2);
            }
            this_03 = (vector<eastl::pair<int, int>>*)(this + 9);
            lVar3 = this_03->size();
            pCVar7 = (ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>*)&oldscape::
                configdecoder::OldscapeVarType::NullConfigType;
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<
                                  oldscape::configdecoder::OldscapeVarType>::PageList>*)(*this_03)[arg1_00];
                    lVar3 = (*puVar4).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == (arg1 & 4294901760U)) {
                        puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<
                                      oldscape::configdecoder::OldscapeVarType>::PageList>*)(*this_03)[arg1_00];
                        this_01 =
                            (array<
                                ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::ConfigPage*,
                                256ul>*)(*puVar4)
                                .operator->();
                        plVar6 = (long*)(*this_01)[(unsigned long)((unsigned int)arg1 >> 8 & 255)];
                        this_02 =
                            (ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType> _vtbl*)*plVar6;
                        if (this_02 == nullptr) {
                            return pCVar7;
                        }
                        uVar8 = arg1 & 255;
                        goto LAB_100141f92;
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar5 = this_03->size();
                } while (arg1_00 < uVar5);
            }
        }
        return pCVar7;
    }

    // 0x100141fb0
    uint64_t ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::DecodeConfig(
        int arg1, shared_ptr<oldscape::configdecoder::OldscapeVarType>& oldscapeVarType) {
        PacketT<Array<unsigned char>>* arg1_00;
        ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType> _vtbl* pCVar1;
        uint8_t uVar3;
        unsigned int arg1_01;
        unsigned int uVar4;
        unsigned int uVar5;
        int iVar6;
        uint8_t* puVar7;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar8;
        void* pvVar9;
        Array<unsigned char>* this_00;
        void* pvVar10;
        size_t sVar11;
        uint64_t uVar12;
        long* plVar13;
        uint64_t extraout_var;
        unsigned long arg1_03;
        Array<Array<unsigned char>>* this_01;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_50;
        Js5Index* local_40;

        int local_34 = arg1;
        oldscapeVarType =
            (*((shared_ptr<
                oldscape::configdecoder::OldscapeVarType>*)&oldscape::configdecoder::OldscapeVarType::NullConfigType));
        if (local_34 < 0) {
            oldscape::configdecoder::OldscapeVarType::MakeShared<
                BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>*&, unsigned int&>(
                &local_50, (BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>**)(this + 1),
                &local_34);
            oldscapeVarType = local_50;
        LAB_10014213b:
        LAB_100142144:
            uVar12 = 1;
        } else {
            arg1_01 = this[1]._vptr->GetClientGroupID(local_34);
            uVar4 = this[1]._vptr->GetClientFileID(local_34);
            local_40 = nullptr;
            puVar7 =
                (uint8_t*)(**(void (**)(...))((this[2]._vptr)->_dtor + 24))(this[2]._vptr, &local_40, this[3]._vptr);
            if (puVar7 != DataStatus::MISSING) {
                if (local_40->DoesFileExist(arg1_01, uVar4) != '\0') {
                    if (puVar7 == DataStatus::READY) {
                        uVar4 = local_40->GetFileIndex(arg1_01, uVar4);
                        uVar5 = this[1]._vptr->GetUIHeight();
                        arg1_03 = 0;
                        if (1 < uVar5) {
                            arg1_03 = (unsigned long)arg1_01;
                        }
                        iVar6 = local_40->GetFileCount(arg1_01);
                        arg1_00 = (PacketT<Array<unsigned char>>*)(this + 22);
                        this_01 = (Array<Array<unsigned char>>*)(this + 19);
                        pvVar8 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                        if (iVar6 == 1) {
                            arg1_00->Reserve(pvVar8->end());
                            arg1_00->SetPos(0);
                            pvVar9 = (void*)arg1_00->GetDataPtr();
                            this_00 = (Array<unsigned char>*)(*this_01)[arg1_03];
                            pvVar10 = (void*)(*this_00)[0];
                            pvVar8 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                            sVar11 = pvVar8->end();
                            _memcpy(pvVar9, pvVar10, sVar11);
                        } else {
                            Js5DiskFileFormat::GetGroupFileData((PacketT<Array<unsigned char> _>*)arg1_00,
                                                                (Array<unsigned char>*)pvVar8, uVar4);
                        }
                        oldscape::configdecoder::OldscapeVarType::MakeShared<
                            BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>*&, unsigned int&>(
                            &local_50,
                            (BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>**)(this + 1),
                            &local_34);
                        plVar13 = (long*)local_50.operator->();
                        puVar7 = (uint8_t*)(**(void (**)(...))(*plVar13 + 32))(plVar13, arg1_00);
                        if (puVar7 == DataStatus::READY) {
                            plVar13 = (long*)local_50.operator->();
                            (**(void (**)(...))(*plVar13 + 24))(plVar13);
                            pCVar1 = this[1]._vptr;
                            uVar3 = (*((BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType> _vtbl*)
                                           pCVar1->_dtor)
                                          ->ListPostDecode)(pCVar1, &local_50);
                            if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar3) == DataStatus::READY) {
                                oldscapeVarType = local_50;
                            }
                        }
                        goto LAB_10014213b;
                    }
                    goto LAB_100142144;
                }
            }
            uVar12 = 0;
        }
        return uVar12;
    }

    // 0x1001421f0
    auto ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::AddConfigID(
        const shared_ptr<oldscape::configdecoder::OldscapeVarType>& oldscapeVarType, int arg2) {
        auto result;
        unsigned long uVar1;
        unique_ptr<ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::PageList>* puVar2;
        long lVar3;
        array<ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::ConfigPage*, 256ul>* paVar4;
        ReturnValue* pRVar5;
        ReturnValue this;
        ReturnValue* pRVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue local_48;
        unsigned int local_38;
        unsigned int local_34;

        if (arg2 == -1) {
            pRVar6 = &result + 17;
            *pRVar6 = oldscapeVarType;
        } else {
            local_34 = arg2 & 4294901760;
            pRVar6 = &result + 9;
            uVar1 = pRVar6->size();
            arg1 = 0;
            if (uVar1 != 0) {
                do {
                    puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<
                                  oldscape::configdecoder::OldscapeVarType>::PageList>*)(*pRVar6)[arg1];
                    lVar3 = (*puVar2).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == local_34)
                        break;
                    arg1 = (unsigned long)((int)arg1 + 1);
                } while (arg1 < uVar1);
            }
            if (uVar1 == arg1) {
                local_48 = std::make_unique<
                    ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::PageList,
                    unsigned int&>(local_34);
                eastl::vector<std::unique_ptr<
                    ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::PageList>>::
                    emplace_back<std::unique_ptr<
                        ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::PageList>>(
                        (vector<std::unique_ptr<
                             ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::PageList>>*)
                            pRVar6,
                        (unique_ptr<
                            ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::PageList,
                            std::default_delete<
                                ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::PageList>
                                _>*)&local_48);
            }
            uVar1 = (unsigned long)(arg2 - local_34 >> 8);
            puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<
                          oldscape::configdecoder::OldscapeVarType>::PageList>*)(*pRVar6)[arg1];
            paVar4 = (array<ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::ConfigPage*,
                            256ul>*)(*puVar2)
                         .operator->();
            pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
            this = *pRVar5;
            uVar7 = arg2 & 255U;
            if (this == (ReturnValue)0) {
                local_38 = arg2 & 255U;
                this = (ReturnValue)AllocatePageBuffer(&result);
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<
                              oldscape::configdecoder::OldscapeVarType>::PageList>*)(*pRVar6)[arg1];
                paVar4 = (array<ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::ConfigPage*,
                                256ul>*)(*puVar2)
                             .operator->();
                pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
                *pRVar5 = this;
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<
                              oldscape::configdecoder::OldscapeVarType>::PageList>*)(*pRVar6)[arg1];
                lVar3 = (*puVar2).operator->();
                if (*(unsigned int*)(lVar3 + 2048) != local_34) {
                    LogAssert("m_pageListContainer[thisPageList]->m_pageListID == pageListID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigTypePreloadPackedContainer.h",
                              469, nullptr);
                }
                uVar7 = local_38;
            }
            pRVar6 = (ReturnValue*)(*this)[(unsigned long)uVar7];
            *pRVar6 = oldscapeVarType;
            *(int*)((long)this + 4096) = *(int*)((long)this + 4096) + 1;
            *(int*)(&result + 13) = arg2;
            &result[14] = this;
            *(unsigned int*)(&result + 15) = uVar7;
        }
        return pRVar6;
    }

    // 0x100142560
    ConfigPage* ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::AllocatePageBuffer() {
        AllocatedBlock local_28 = this[16]._vptr->Allocate(4128);
        void* pvVar1 = local_28.field_8;
        if (local_28.field_8 == nullptr) {
            LogAssert("block.m_address != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      534, nullptr);
        }
        new (local_28.field_8) ConfigPage();
        *(unsigned long*)((long)pvVar1 + 4120) = local_28.field_16;
        *(uint64_t*)((long)pvVar1 + 4104) = local_28._0_8_;
        *(void**)((long)pvVar1 + 4112) = local_28.field_8;
        return pvVar1;
    }

    // 0x100142900
    ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::PageList::PageList(unsigned int arg1) {
        uint64_t* puVar1;

        *(unsigned int*)(this + 2048) = arg1;
        *(uint32_t*)(this + 2052) = 0;
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1_00];
            *puVar1 = 0;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
    }

    // 0x1001429b0
    ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>::ConfigPage::ConfigPage()
        : std::array<shared_ptr<oldscape::configdecoder::OldscapeVarType>, 256ul>() {
        *(uint32_t*)(this + 4096) = 0;
        new ((this + 4104)) SimpleAllocator::AllocatedBlock();
    }

    // 0x1004d9ea0
    ConfigTypePreloadPackedContainer<VarType>::ConfigTypePreloadPackedContainer(
        BaseTemplateConfigTypeList<VarType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<VarType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                           js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee84a0;
        new ((this + 9)) eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<VarType>::PageList>>();
        new ((this + 17)) shared_ptr();
        new ((this + 19)) Array<Array<unsigned char>>();
        new ((this + 22)) PacketT();
        ((this + 26))->unique_ptr<true, void>();
    }

    // 0x1004da040
    _x7e___2* ConfigTypePreloadPackedContainer<VarType>::LoadList() {
        unique_ptr* this_00;
        bool bVar2;
        bool cVar3;
        DownloadWaitHandler* pDVar6;
        CoordMapSquare* pCVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        ConfigTypePreloadPackedContainer<VarType> _vtbl* local_48;

        if (*(int*)&this[6]._vptr == 2) {
            return (_x7e___2*)DataStatus::READY;
        }
        ConfigTypePreloadPackedContainer<VarType> _vtbl* pCVar1 = this[2]._vptr;
        ConfigTypePreloadPackedContainer<VarType> _vtbl* js5ArchiveSettings = this[3]._vptr;
        Js5Index* local_40 = nullptr;
        _x7e___2* p_Var5 = (_x7e___2*)(**(void (**)(...))(pCVar1->_dtor + 24))(pCVar1, &local_40, js5ArchiveSettings);
        if (p_Var5 != (_x7e___2*)DataStatus::READY) {
            return p_Var5;
        }
        unsigned int local_34 = this[1]._vptr->GetUIHeight();
        int iVar4 = this[1]._vptr->GetStreamCountLastMix();
        *(unsigned int*)&this[8]._vptr = iVar4 + local_34;
        if (*(int*)&this[6]._vptr == 0) {
            this_00 = (unique_ptr*)(this + 26);
            local_48 = js5ArchiveSettings;
            cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar3) {
                LogAssert("!m_downloadHandler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "ConfigTypePreloadPackedContainer.h",
                          213, nullptr);
            }
            local_50 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_34);
            *this_00 = local_50;
            pDVar6 = (DownloadWaitHandler*)**this_00;
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                CheckGroupExistence(this, pDVar6, local_40, uVar8, 0);
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    CheckGroupExistence(this, pDVar6, local_40, uVar8, uVar8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            ((this + 19))->set_max_size((unsigned long)local_34, 0);
            *(uint32_t*)&this[6]._vptr = 1;
            iVar4 = *(int*)&this[6]._vptr;
            js5ArchiveSettings = local_48;
        } else {
            iVar4 = *(int*)&this[6]._vptr;
        }
        if (iVar4 != 1) {
            return (_x7e___2*)DataStatus::READY;
        }
        pDVar6 = (DownloadWaitHandler*)*(*((this + 26)));
        if ((this[1]._vptr != nullptr) && (cVar3 = (**(void (**)(...))(pCVar1->_dtor + 64))(pCVar1), cVar3)) {
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                cVar3 = pDVar6->IsComplete(0);
                if ((!cVar3) && (cVar3 = pDVar6->CanCheck(0), cVar3)) {
                    CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, 0);
                }
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    cVar3 = pDVar6->IsComplete(uVar8);
                    if ((!cVar3) && (cVar3 = pDVar6->CanCheck(uVar8), cVar3)) {
                        CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, uVar8);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            if (*(unsigned int*)&this[8]._vptr <= *(unsigned int*)((long)&this[7]._vptr + 4)) {
                ((this + 26))->reset(nullptr);
                *(uint32_t*)&this[6]._vptr = 2;
                p_Var5 = (_x7e___2*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->_x7e___2 = p_Var5;
                bVar2 = true;
                goto LAB_1004da2b6;
            }
        }
        bVar2 = false;
        p_Var5 = (_x7e___2*)DataStatus::NOTLOADED;
    LAB_1004da2b6:
        if (bVar2) {
            return (_x7e___2*)DataStatus::READY;
        }
        return p_Var5;
    }

    // 0x1004da300
    void ConfigTypePreloadPackedContainer<VarType>::CacheReset() {
        unique_ptr<ConfigTypePreloadPackedContainer<VarType>::PageList>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (unique_ptr<ConfigTypePreloadPackedContainer<VarType>::PageList>*)(*this_00)[arg1];
                ((PageList*)this_01->get())->ClearPageList(*this[16]._vptr);
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        this_00->clear();
        this[14]._vptr = nullptr;
        *(uint32_t*)&this[15]._vptr = 0;
        *(uint32_t*)&this[13]._vptr = 4294967295;
    }

    // 0x1004da390
    void ConfigTypePreloadPackedContainer<VarType>::CacheClean(unsigned int arg1) {
        LoadList** ppLVar1;
        ConfigTypePreloadPackedContainer<VarType> _vtbl* this_01;
        unsigned long uVar4;
        unique_ptr<ConfigTypePreloadPackedContainer<VarType>::PageList>* this_02;
        array<ConfigTypePreloadPackedContainer<VarType>::ConfigPage*, 256ul>* this_03;
        uint64_t* puVar5;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_04;
        unsigned long arg1_00;
        unsigned int uVar6;
        int iVar7;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_02 = (unique_ptr<ConfigTypePreloadPackedContainer<VarType>::PageList>*)(*this_00)[arg1_00];
                this_03 = (array<ConfigTypePreloadPackedContainer<VarType>::ConfigPage*, 256ul>*)this_02->get();
                uVar6 = *(unsigned int*)(this_03 + 2052);
                iVar7 = 16;
                do {
                    puVar5 = (uint64_t*)(*this_03)[(unsigned long)(uVar6 >> 8)];
                    this_01 = (ConfigTypePreloadPackedContainer<VarType> _vtbl*)*puVar5;
                    if (this_01 != nullptr) {
                        this_04 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*this_01)[(
                            unsigned long)(uVar6 & 255)];
                        if (this_04->unique() != '\0') {
                            this_04->reset();
                            if ((this_01 == this[14]._vptr) && ((uVar6 & 255) == *(unsigned int*)&this[15]._vptr)) {
                                this[14]._vptr = nullptr;
                                *(uint32_t*)&this[15]._vptr = 0;
                                *(uint32_t*)&this[13]._vptr = 4294967295;
                            }
                            ppLVar1 = &this_01[51].LoadList;
                            *(int*)ppLVar1 = *(int*)ppLVar1 - 1;
                            if (*(int*)ppLVar1 == 0) {
                                this[16]._vptr->DeAllocate(&this_01[51].CacheReset);
                                *puVar5 = 0;
                            }
                        }
                    }
                    uVar6 = uVar6 + 1 & 65535;
                    iVar7 = iVar7 - 1;
                } while (iVar7 != 0);
                *(unsigned int*)(this_03 + 2052) = uVar6;
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x1004da500
    shared_ptr* ConfigTypePreloadPackedContainer<VarType>::List(int arg1, const DataStatus** arg2) {
        shared_ptr* psVar2;
        uint8_t** ppuVar3;

        if (*(int*)&this[6]._vptr != 2) {
            if (arg2 == nullptr) {
                return (shared_ptr*)PTR_NullConfigType_100ee6578;
            }
            ppuVar3 = &DataStatus::NOTLOADED;
            psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6578;
        LAB_1004da55b:
            *arg2 = (DataStatus*)*ppuVar3;
            return psVar2;
        }
        psVar2 = (shared_ptr*)FindConfigID(this, arg1);
        if (shared_ptr::operator_cast_to_bool(psVar2)) {
            if (arg2 == nullptr) {
                return psVar2;
            }
            ppuVar3 = &DataStatus::READY;
            goto LAB_1004da55b;
        }
        shared_ptr local_38;
        if (!(DecodeConfig(this, arg1, (shared_ptr<VarType>*)&local_38))) {
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::MISSING;
            LAB_1004da5d1:
                *arg2 = (DataStatus*)*ppuVar3;
            }
        } else {
            if (shared_ptr::operator_cast_to_bool(&local_38)) {
                if (arg2 != nullptr) {
                    *arg2 = (DataStatus*)DataStatus::READY;
                }
                psVar2 = (shared_ptr*)AddConfigID((ReturnValue*)this, (shared_ptr<VarType>*)&local_38, arg1);
                goto LAB_1004da5de;
            }
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_1004da5d1;
            }
        }
        psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6578;
    LAB_1004da5de:
        return psVar2;
    }

    // 0x1004da610
    auto ConfigTypePreloadPackedContainer<VarType>::DirectFetch(int arg1) {
        if (*(int*)&this[6]._vptr != 2) {
            LogAssert("m_loadStep == BaseLoadAllConfigTypeContainer::LoadStep::DONE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      179, nullptr);
        }
        auto result;
        if (DecodeConfig(this, arg1, &result) == '\0') {
            LogAssert("exists",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      183, nullptr);
        }
        return result;
    }

    // 0x1004da870
    ConfigTypePreloadPackedContainer<VarType>::~ConfigTypePreloadPackedContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee84a0;
        this[16]._vptr->PrintMetrics();
        CacheReset();
        ((this + 26))->~unique_ptr();
        ((this + 22))->~VBOMapper();
        ((this + 19))->~Array();
        ((this + 17))->~shared_ptr();
        ((this + 9))->~vector();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1004dab30
    void ConfigTypePreloadPackedContainer<VarType>::CheckGroupExistence(DownloadWaitHandler& downloadWaitHandler,
                                                                        Js5Index* js5Index, unsigned int arg3,
                                                                        unsigned int arg4) {
        int* piVar1;

        if (js5Index == nullptr) {
            LogAssert("js5Index",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      365, nullptr);
        }
        if (js5Index->DoesGroupExist(arg3) == '\0') {
            piVar1 = (int*)((long)&this[7]._vptr + 4);
            *piVar1 = *piVar1 + 1;
        } else {
            downloadWaitHandler.SetExists(arg4);
        }
    }

    // 0x1004dac50
    void ConfigTypePreloadPackedContainer<VarType>::CheckDecodeProgress(const Js5ArchiveSettings& js5ArchiveSettings,
                                                                        Js5Index* js5Index, unsigned int arg3,
                                                                        unsigned int arg4) {
        int iVar1;
        Array<unsigned char>* this_00;
        TextureAtlasReference* pTVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        void* pvVar4;
        PacketT<Array<unsigned char>>* this_02;
        void* pvVar5;
        size_t sVar6;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)this[1]._vptr->GetGroup(local_48, js5ArchiveSettings, arg3, (Priority*)Priority::HIGHEST, true,
                                              true) == DataStatus::READY) {
            this_00 = (Array<unsigned char>*)(*((this + 19)))[(unsigned long)arg4];
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            this_00->set_max_size(pTVar3->GetTextureAtlas(), 0);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*((this + 19)))[(unsigned long)arg4];
            pvVar4 = (void*)this_01->data();
            this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pvVar5 = (void*)this_02->GetDataPtr();
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            sVar6 = pTVar3->GetTextureAtlas();
            _memcpy(pvVar4, pvVar5, sVar6);
            iVar1 = js5Index->GetMaximumFileID(arg3);
            *(int*)((long)&this[7]._vptr + 4) = iVar1 + *(int*)((long)&this[7]._vptr + 4) + 1;
            ((DownloadWaitHandler*)(*((this + 26))).operator->())->Completed(arg4);
        }
    }

    // 0x1004db080
    void ConfigTypePreloadPackedContainer<VarType>::PageList::ClearPageList(SimpleAllocator& simpleAllocator) {
        ConfigPage* this_00;
        uint64_t* puVar1;

        unsigned long arg1 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1];
            this_00 = (ConfigPage*)*puVar1;
            if (this_00 != nullptr) {
                this_00->Clear();
                simpleAllocator.DeAllocate((this_00 + 4104));
                *puVar1 = 0;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1004db160
    void ConfigTypePreloadPackedContainer<VarType>::ConfigPage::Clear() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1];
            if (this_00->end() != 0) {
                this_00->reset();
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1004db2a0
    ConfigTypePreloadPackedContainer<VarType>* ConfigTypePreloadPackedContainer<VarType>::FindConfigID(int arg1) const {
        unsigned int uVar2;
        shared_ptr* this_00;
        long lVar3;
        unique_ptr<ConfigTypePreloadPackedContainer<VarType>::PageList>* puVar4;
        unsigned long uVar5;
        array<ConfigTypePreloadPackedContainer<VarType>::ConfigPage*, 256ul>* this_01;
        long* plVar6;
        ConfigTypePreloadPackedContainer<VarType>* pCVar7;
        unsigned long arg1_00;
        unsigned int uVar8;
        ConfigTypePreloadPackedContainer<VarType> _vtbl* this_02;
        vector<eastl::pair<int, int>>* this_03;

        if (arg1 == -1) {
            pCVar7 = this + 17;
        } else {
            if (*(int*)&this[13]._vptr == arg1) {
                if (this[14]._vptr != nullptr) {
                    this_00 = (shared_ptr*)(*this[14]._vptr)[(unsigned long)*(unsigned int*)&this[15]._vptr];
                    if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                        this_02 = this[14]._vptr;
                        uVar8 = *(unsigned int*)&this[15]._vptr;
                    LAB_1004db3c2:
                        pCVar7 = (ConfigTypePreloadPackedContainer<VarType>*)(*this_02)[(unsigned long)uVar8];
                        return pCVar7;
                    }
                }
                uVar8 = *(unsigned int*)&this[13]._vptr;
                uVar2 = this[3]._vptr->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigTypePreloadPackedContainer.h",
                                507, "Previously loaded config ID %d (archive ID %u) unexpectedly missing",
                                (unsigned long)uVar8, (unsigned long)uVar2);
            }
            this_03 = (vector<eastl::pair<int, int>>*)(this + 9);
            lVar3 = this_03->size();
            pCVar7 = (ConfigTypePreloadPackedContainer<VarType>*)PTR_NullConfigType_100ee6578;
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<VarType>::PageList>*)(*this_03)[arg1_00];
                    lVar3 = (*puVar4).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == (arg1 & 4294901760U)) {
                        puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<VarType>::PageList>*)(*this_03)[arg1_00];
                        this_01 = (array<ConfigTypePreloadPackedContainer<VarType>::ConfigPage*, 256ul>*)(*puVar4)
                                      .operator->();
                        plVar6 = (long*)(*this_01)[(unsigned long)((unsigned int)arg1 >> 8 & 255)];
                        this_02 = (ConfigTypePreloadPackedContainer<VarType> _vtbl*)*plVar6;
                        if (this_02 == nullptr) {
                            return pCVar7;
                        }
                        uVar8 = arg1 & 255;
                        goto LAB_1004db3c2;
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar5 = this_03->size();
                } while (arg1_00 < uVar5);
            }
        }
        return pCVar7;
    }

    // 0x1004db3e0
    uint64_t ConfigTypePreloadPackedContainer<VarType>::DecodeConfig(int arg1, shared_ptr<VarType>& varType) {
        PacketT<Array<unsigned char>>* arg1_00;
        ConfigTypePreloadPackedContainer<VarType> _vtbl* pCVar1;
        unsigned int arg1_01;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        uint8_t* puVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        void* pvVar8;
        Array<unsigned char>* this_00;
        void* pvVar9;
        size_t sVar10;
        uint64_t uVar11;
        long* plVar12;
        unsigned long arg1_03;
        Array<Array<unsigned char>>* this_01;
        shared_ptr<VarType> local_50;
        Js5Index* local_40;

        varType = *PTR_NullConfigType_100ee6578;
        if (arg1 < 0) {
            MakeSharedPool<VarType, 5504>::MakeShared<BaseTemplateConfigTypeList<VarType>*&, int&>(
                (BaseTemplateConfigTypeList<VarType>**)&local_50, (int*)(this + 1));
            varType = local_50;
        LAB_1004db56b:
        LAB_1004db574:
            uVar11 = 1;
        } else {
            arg1_01 = this[1]._vptr->GetClientGroupID(arg1);
            uVar3 = this[1]._vptr->GetClientFileID(arg1);
            local_40 = nullptr;
            puVar6 =
                (uint8_t*)(**(void (**)(...))((this[2]._vptr)->_dtor + 24))(this[2]._vptr, &local_40, this[3]._vptr);
            if (puVar6 != DataStatus::MISSING) {
                if (local_40->DoesFileExist(arg1_01, uVar3) != '\0') {
                    if (puVar6 == DataStatus::READY) {
                        uVar3 = local_40->GetFileIndex(arg1_01, uVar3);
                        uVar4 = this[1]._vptr->GetUIHeight();
                        arg1_03 = 0;
                        if (1 < uVar4) {
                            arg1_03 = (unsigned long)arg1_01;
                        }
                        iVar5 = local_40->GetFileCount(arg1_01);
                        arg1_00 = (PacketT<Array<unsigned char>>*)(this + 22);
                        this_01 = (Array<Array<unsigned char>>*)(this + 19);
                        pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                        if (iVar5 == 1) {
                            arg1_00->Reserve(pvVar7->end());
                            arg1_00->SetPos(0);
                            pvVar8 = (void*)arg1_00->GetDataPtr();
                            this_00 = (Array<unsigned char>*)(*this_01)[arg1_03];
                            pvVar9 = (void*)(*this_00)[0];
                            pvVar7 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                            sVar10 = pvVar7->end();
                            _memcpy(pvVar8, pvVar9, sVar10);
                        } else {
                            Js5DiskFileFormat::GetGroupFileData((PacketT<Array<unsigned char> _>*)arg1_00,
                                                                (Array<unsigned char>*)pvVar7, uVar3);
                        }
                        MakeSharedPool<VarType, 5504>::MakeShared<BaseTemplateConfigTypeList<VarType>*&, int&>(
                            (BaseTemplateConfigTypeList<VarType>**)&local_50, (int*)(this + 1));
                        plVar12 = (long*)local_50.operator->();
                        puVar6 = (uint8_t*)(**(void (**)(...))(*plVar12 + 32))(plVar12, arg1_00);
                        if (puVar6 == DataStatus::READY) {
                            plVar12 = (long*)local_50.operator->();
                            (**(void (**)(...))(*plVar12 + 24))(plVar12);
                            pCVar1 = this[1]._vptr;
                            puVar6 = (uint8_t*)(**(void (**)(...))(pCVar1->_dtor + 72))(pCVar1, &local_50);
                            if (puVar6 == DataStatus::READY) {
                                varType = local_50;
                            }
                        }
                        goto LAB_1004db56b;
                    }
                    goto LAB_1004db574;
                }
            }
            uVar11 = 0;
        }
        return uVar11;
    }

    // 0x1004db620
    auto ConfigTypePreloadPackedContainer<VarType>::AddConfigID(const shared_ptr<VarType>& varType, int arg2) {
        auto result;
        unsigned long uVar1;
        unique_ptr<ConfigTypePreloadPackedContainer<VarType>::PageList>* puVar2;
        long lVar3;
        array<ConfigTypePreloadPackedContainer<VarType>::ConfigPage*, 256ul>* paVar4;
        ReturnValue* pRVar5;
        ReturnValue this;
        ReturnValue* pRVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue local_48;
        unsigned int local_38;
        unsigned int local_34;

        if (arg2 == -1) {
            pRVar6 = &result + 17;
            *pRVar6 = varType;
        } else {
            local_34 = arg2 & 4294901760;
            pRVar6 = &result + 9;
            uVar1 = pRVar6->size();
            arg1 = 0;
            if (uVar1 != 0) {
                do {
                    puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<VarType>::PageList>*)(*pRVar6)[arg1];
                    lVar3 = (*puVar2).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == local_34)
                        break;
                    arg1 = (unsigned long)((int)arg1 + 1);
                } while (arg1 < uVar1);
            }
            if (uVar1 == arg1) {
                local_48 =
                    std::make_unique<ConfigTypePreloadPackedContainer<VarType>::PageList, unsigned int&>(local_34);
                eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<VarType>::PageList>>::emplace_back<
                    std::unique_ptr<ConfigTypePreloadPackedContainer<VarType>::PageList>>(
                    (vector<std::unique_ptr<ConfigTypePreloadPackedContainer<VarType>::PageList>>*)pRVar6,
                    (unique_ptr<ConfigTypePreloadPackedContainer<VarType>::PageList,
                                std::default_delete<ConfigTypePreloadPackedContainer<VarType>::PageList> _>*)&local_48);
            }
            uVar1 = (unsigned long)(arg2 - local_34 >> 8);
            puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<VarType>::PageList>*)(*pRVar6)[arg1];
            paVar4 = (array<ConfigTypePreloadPackedContainer<VarType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
            pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
            this = *pRVar5;
            uVar7 = arg2 & 255U;
            if (this == (ReturnValue)0) {
                local_38 = arg2 & 255U;
                this = (ReturnValue)AllocatePageBuffer(&result);
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<VarType>::PageList>*)(*pRVar6)[arg1];
                paVar4 = (array<ConfigTypePreloadPackedContainer<VarType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
                pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
                *pRVar5 = this;
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<VarType>::PageList>*)(*pRVar6)[arg1];
                lVar3 = (*puVar2).operator->();
                if (*(unsigned int*)(lVar3 + 2048) != local_34) {
                    LogAssert("m_pageListContainer[thisPageList]->m_pageListID == pageListID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigTypePreloadPackedContainer.h",
                              469, nullptr);
                }
                uVar7 = local_38;
            }
            pRVar6 = (ReturnValue*)(*this)[(unsigned long)uVar7];
            *pRVar6 = varType;
            *(int*)((long)this + 4096) = *(int*)((long)this + 4096) + 1;
            *(int*)(&result + 13) = arg2;
            &result[14] = this;
            *(unsigned int*)(&result + 15) = uVar7;
        }
        return pRVar6;
    }

    // 0x1004db9b0
    ConfigPage* ConfigTypePreloadPackedContainer<VarType>::AllocatePageBuffer() {
        AllocatedBlock local_28 = this[16]._vptr->Allocate(4128);
        void* pvVar1 = local_28.field_8;
        if (local_28.field_8 == nullptr) {
            LogAssert("block.m_address != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      534, nullptr);
        }
        new (local_28.field_8) ConfigPage();
        *(unsigned long*)((long)pvVar1 + 4120) = local_28.field_16;
        *(uint64_t*)((long)pvVar1 + 4104) = local_28._0_8_;
        *(void**)((long)pvVar1 + 4112) = local_28.field_8;
        return pvVar1;
    }

    // 0x1004dbd50
    ConfigTypePreloadPackedContainer<VarType>::PageList::PageList(unsigned int arg1) {
        uint64_t* puVar1;

        *(unsigned int*)(this + 2048) = arg1;
        *(uint32_t*)(this + 2052) = 0;
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1_00];
            *puVar1 = 0;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
    }

    // 0x1004dbe00
    ConfigTypePreloadPackedContainer<VarType>::ConfigPage::ConfigPage() : std::array<shared_ptr<VarType>, 256ul>() {
        *(uint32_t*)(this + 4096) = 0;
        new ((this + 4104)) SimpleAllocator::AllocatedBlock();
    }

    // 0x1004ed7a0
    ConfigTypePreloadPackedContainer<SeqType>::ConfigTypePreloadPackedContainer(
        BaseTemplateConfigTypeList<SeqType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<SeqType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                           js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8498;
        new ((this + 9)) eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<SeqType>::PageList>>();
        new ((this + 17)) shared_ptr();
        new ((this + 19)) Array<Array<unsigned char>>();
        new ((this + 22)) PacketT();
        ((this + 26))->unique_ptr<true, void>();
    }

    // 0x1004ed910
    _x7e___2* ConfigTypePreloadPackedContainer<SeqType>::LoadList() {
        unique_ptr* this_00;
        bool bVar2;
        bool cVar3;
        DownloadWaitHandler* pDVar6;
        CoordMapSquare* pCVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        ConfigTypePreloadPackedContainer<SeqType> _vtbl* local_48;

        if (*(int*)&this[6]._vptr == 2) {
            return (_x7e___2*)DataStatus::READY;
        }
        ConfigTypePreloadPackedContainer<SeqType> _vtbl* pCVar1 = this[2]._vptr;
        ConfigTypePreloadPackedContainer<SeqType> _vtbl* js5ArchiveSettings = this[3]._vptr;
        Js5Index* local_40 = nullptr;
        _x7e___2* p_Var5 = (_x7e___2*)(**(void (**)(...))(pCVar1->_dtor + 24))(pCVar1, &local_40, js5ArchiveSettings);
        if (p_Var5 != (_x7e___2*)DataStatus::READY) {
            return p_Var5;
        }
        unsigned int local_34 = this[1]._vptr->GetUIHeight();
        int iVar4 = this[1]._vptr->GetStreamCountLastMix();
        *(unsigned int*)&this[8]._vptr = iVar4 + local_34;
        if (*(int*)&this[6]._vptr == 0) {
            this_00 = (unique_ptr*)(this + 26);
            local_48 = js5ArchiveSettings;
            cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar3) {
                LogAssert("!m_downloadHandler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "ConfigTypePreloadPackedContainer.h",
                          213, nullptr);
            }
            local_50 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_34);
            *this_00 = local_50;
            pDVar6 = (DownloadWaitHandler*)**this_00;
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                CheckGroupExistence(this, pDVar6, local_40, uVar8, 0);
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    CheckGroupExistence(this, pDVar6, local_40, uVar8, uVar8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            ((this + 19))->set_max_size((unsigned long)local_34, 0);
            *(uint32_t*)&this[6]._vptr = 1;
            iVar4 = *(int*)&this[6]._vptr;
            js5ArchiveSettings = local_48;
        } else {
            iVar4 = *(int*)&this[6]._vptr;
        }
        if (iVar4 != 1) {
            return (_x7e___2*)DataStatus::READY;
        }
        pDVar6 = (DownloadWaitHandler*)*(*((this + 26)));
        if ((this[1]._vptr != nullptr) && (cVar3 = (**(void (**)(...))(pCVar1->_dtor + 64))(pCVar1), cVar3)) {
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                cVar3 = pDVar6->IsComplete(0);
                if ((!cVar3) && (cVar3 = pDVar6->CanCheck(0), cVar3)) {
                    CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, 0);
                }
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    cVar3 = pDVar6->IsComplete(uVar8);
                    if ((!cVar3) && (cVar3 = pDVar6->CanCheck(uVar8), cVar3)) {
                        CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, uVar8);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            if (*(unsigned int*)&this[8]._vptr <= *(unsigned int*)((long)&this[7]._vptr + 4)) {
                ((this + 26))->reset(nullptr);
                *(uint32_t*)&this[6]._vptr = 2;
                p_Var5 = (_x7e___2*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->_x7e___2 = p_Var5;
                bVar2 = true;
                goto LAB_1004edb86;
            }
        }
        bVar2 = false;
        p_Var5 = (_x7e___2*)DataStatus::NOTLOADED;
    LAB_1004edb86:
        if (bVar2) {
            return (_x7e___2*)DataStatus::READY;
        }
        return p_Var5;
    }

    // 0x1004edbd0
    void ConfigTypePreloadPackedContainer<SeqType>::CacheReset() {
        unique_ptr<ConfigTypePreloadPackedContainer<SeqType>::PageList>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (unique_ptr<ConfigTypePreloadPackedContainer<SeqType>::PageList>*)(*this_00)[arg1];
                ((PageList*)this_01->get())->ClearPageList(*this[16]._vptr);
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        this_00->clear();
        this[14]._vptr = nullptr;
        *(uint32_t*)&this[15]._vptr = 0;
        *(uint32_t*)&this[13]._vptr = 4294967295;
    }

    // 0x1004edc60
    void ConfigTypePreloadPackedContainer<SeqType>::CacheClean(unsigned int arg1) {
        LoadList** ppLVar1;
        ConfigTypePreloadPackedContainer<SeqType> _vtbl* this_01;
        unsigned long uVar4;
        unique_ptr<ConfigTypePreloadPackedContainer<SeqType>::PageList>* this_02;
        array<ConfigTypePreloadPackedContainer<SeqType>::ConfigPage*, 256ul>* this_03;
        uint64_t* puVar5;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_04;
        unsigned long arg1_00;
        unsigned int uVar6;
        int iVar7;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_02 = (unique_ptr<ConfigTypePreloadPackedContainer<SeqType>::PageList>*)(*this_00)[arg1_00];
                this_03 = (array<ConfigTypePreloadPackedContainer<SeqType>::ConfigPage*, 256ul>*)this_02->get();
                uVar6 = *(unsigned int*)(this_03 + 2052);
                iVar7 = 16;
                do {
                    puVar5 = (uint64_t*)(*this_03)[(unsigned long)(uVar6 >> 8)];
                    this_01 = (ConfigTypePreloadPackedContainer<SeqType> _vtbl*)*puVar5;
                    if (this_01 != nullptr) {
                        this_04 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*this_01)[(
                            unsigned long)(uVar6 & 255)];
                        if (this_04->unique() != '\0') {
                            this_04->reset();
                            if ((this_01 == this[14]._vptr) && ((uVar6 & 255) == *(unsigned int*)&this[15]._vptr)) {
                                this[14]._vptr = nullptr;
                                *(uint32_t*)&this[15]._vptr = 0;
                                *(uint32_t*)&this[13]._vptr = 4294967295;
                            }
                            ppLVar1 = &this_01[51].LoadList;
                            *(int*)ppLVar1 = *(int*)ppLVar1 - 1;
                            if (*(int*)ppLVar1 == 0) {
                                this[16]._vptr->DeAllocate(&this_01[51].CacheReset);
                                *puVar5 = 0;
                            }
                        }
                    }
                    uVar6 = uVar6 + 1 & 65535;
                    iVar7 = iVar7 - 1;
                } while (iVar7 != 0);
                *(unsigned int*)(this_03 + 2052) = uVar6;
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x1004eddd0
    shared_ptr* ConfigTypePreloadPackedContainer<SeqType>::List(int arg1, const DataStatus** arg2) {
        shared_ptr* psVar2;
        uint8_t** ppuVar3;

        if (*(int*)&this[6]._vptr != 2) {
            if (arg2 == nullptr) {
                return (shared_ptr*)PTR_NullConfigType_100ee6570;
            }
            ppuVar3 = &DataStatus::NOTLOADED;
            psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6570;
        LAB_1004ede2b:
            *arg2 = (DataStatus*)*ppuVar3;
            return psVar2;
        }
        psVar2 = (shared_ptr*)FindConfigID(this, arg1);
        if (shared_ptr::operator_cast_to_bool(psVar2)) {
            if (arg2 == nullptr) {
                return psVar2;
            }
            ppuVar3 = &DataStatus::READY;
            goto LAB_1004ede2b;
        }
        shared_ptr local_38;
        if (!(DecodeConfig(this, arg1, (shared_ptr<SeqType>*)&local_38))) {
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::MISSING;
            LAB_1004edea1:
                *arg2 = (DataStatus*)*ppuVar3;
            }
        } else {
            if (shared_ptr::operator_cast_to_bool(&local_38)) {
                if (arg2 != nullptr) {
                    *arg2 = (DataStatus*)DataStatus::READY;
                }
                psVar2 = (shared_ptr*)AddConfigID((ReturnValue*)this, (shared_ptr<SeqType>*)&local_38, arg1);
                goto LAB_1004edeae;
            }
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_1004edea1;
            }
        }
        psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6570;
    LAB_1004edeae:
        return psVar2;
    }

    // 0x1004edee0
    auto ConfigTypePreloadPackedContainer<SeqType>::DirectFetch(int arg1) {
        if (*(int*)&this[6]._vptr != 2) {
            LogAssert("m_loadStep == BaseLoadAllConfigTypeContainer::LoadStep::DONE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      179, nullptr);
        }
        auto result;
        if (DecodeConfig(this, arg1, &result) == '\0') {
            LogAssert("exists",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      183, nullptr);
        }
        return result;
    }

    // 0x1004ee140
    ConfigTypePreloadPackedContainer<SeqType>::~ConfigTypePreloadPackedContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8498;
        this[16]._vptr->PrintMetrics();
        CacheReset();
        ((this + 26))->~unique_ptr();
        ((this + 22))->~VBOMapper();
        ((this + 19))->~Array();
        ((this + 17))->~shared_ptr();
        ((this + 9))->~vector();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1004ee390
    void ConfigTypePreloadPackedContainer<SeqType>::CheckGroupExistence(DownloadWaitHandler& downloadWaitHandler,
                                                                        Js5Index* js5Index, unsigned int arg3,
                                                                        unsigned int arg4) {
        int* piVar1;

        if (js5Index == nullptr) {
            LogAssert("js5Index",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      365, nullptr);
        }
        if (js5Index->DoesGroupExist(arg3) == '\0') {
            piVar1 = (int*)((long)&this[7]._vptr + 4);
            *piVar1 = *piVar1 + 1;
        } else {
            downloadWaitHandler.SetExists(arg4);
        }
    }

    // 0x1004ee410
    void ConfigTypePreloadPackedContainer<SeqType>::CheckDecodeProgress(const Js5ArchiveSettings& js5ArchiveSettings,
                                                                        Js5Index* js5Index, unsigned int arg3,
                                                                        unsigned int arg4) {
        int iVar1;
        Array<unsigned char>* this_00;
        TextureAtlasReference* pTVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        void* pvVar4;
        PacketT<Array<unsigned char>>* this_02;
        void* pvVar5;
        size_t sVar6;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)this[1]._vptr->GetGroup(local_48, js5ArchiveSettings, arg3, (Priority*)Priority::HIGHEST, true,
                                              true) == DataStatus::READY) {
            this_00 = (Array<unsigned char>*)(*((this + 19)))[(unsigned long)arg4];
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            this_00->set_max_size(pTVar3->GetTextureAtlas(), 0);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*((this + 19)))[(unsigned long)arg4];
            pvVar4 = (void*)this_01->data();
            this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pvVar5 = (void*)this_02->GetDataPtr();
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            sVar6 = pTVar3->GetTextureAtlas();
            _memcpy(pvVar4, pvVar5, sVar6);
            iVar1 = js5Index->GetMaximumFileID(arg3);
            *(int*)((long)&this[7]._vptr + 4) = iVar1 + *(int*)((long)&this[7]._vptr + 4) + 1;
            ((DownloadWaitHandler*)(*((this + 26))).operator->())->Completed(arg4);
        }
    }

    // 0x1004ee6e0
    void ConfigTypePreloadPackedContainer<SeqType>::PageList::ClearPageList(SimpleAllocator& simpleAllocator) {
        ConfigPage* this_00;
        uint64_t* puVar1;

        unsigned long arg1 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1];
            this_00 = (ConfigPage*)*puVar1;
            if (this_00 != nullptr) {
                this_00->Clear();
                simpleAllocator.DeAllocate((this_00 + 4104));
                *puVar1 = 0;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1004ee7c0
    void ConfigTypePreloadPackedContainer<SeqType>::ConfigPage::Clear() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1];
            if (this_00->end() != 0) {
                this_00->reset();
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1004ee890
    ConfigTypePreloadPackedContainer<SeqType>* ConfigTypePreloadPackedContainer<SeqType>::FindConfigID(int arg1) const {
        unsigned int uVar2;
        shared_ptr* this_00;
        long lVar3;
        unique_ptr<ConfigTypePreloadPackedContainer<SeqType>::PageList>* puVar4;
        unsigned long uVar5;
        array<ConfigTypePreloadPackedContainer<SeqType>::ConfigPage*, 256ul>* this_01;
        long* plVar6;
        ConfigTypePreloadPackedContainer<SeqType>* pCVar7;
        unsigned long arg1_00;
        unsigned int uVar8;
        ConfigTypePreloadPackedContainer<SeqType> _vtbl* this_02;
        vector<eastl::pair<int, int>>* this_03;

        if (arg1 == -1) {
            pCVar7 = this + 17;
        } else {
            if (*(int*)&this[13]._vptr == arg1) {
                if (this[14]._vptr != nullptr) {
                    this_00 = (shared_ptr*)(*this[14]._vptr)[(unsigned long)*(unsigned int*)&this[15]._vptr];
                    if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                        this_02 = this[14]._vptr;
                        uVar8 = *(unsigned int*)&this[15]._vptr;
                    LAB_1004ee9b2:
                        pCVar7 = (ConfigTypePreloadPackedContainer<SeqType>*)(*this_02)[(unsigned long)uVar8];
                        return pCVar7;
                    }
                }
                uVar8 = *(unsigned int*)&this[13]._vptr;
                uVar2 = this[3]._vptr->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigTypePreloadPackedContainer.h",
                                507, "Previously loaded config ID %d (archive ID %u) unexpectedly missing",
                                (unsigned long)uVar8, (unsigned long)uVar2);
            }
            this_03 = (vector<eastl::pair<int, int>>*)(this + 9);
            lVar3 = this_03->size();
            pCVar7 = (ConfigTypePreloadPackedContainer<SeqType>*)PTR_NullConfigType_100ee6570;
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<SeqType>::PageList>*)(*this_03)[arg1_00];
                    lVar3 = (*puVar4).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == (arg1 & 4294901760U)) {
                        puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<SeqType>::PageList>*)(*this_03)[arg1_00];
                        this_01 = (array<ConfigTypePreloadPackedContainer<SeqType>::ConfigPage*, 256ul>*)(*puVar4)
                                      .operator->();
                        plVar6 = (long*)(*this_01)[(unsigned long)((unsigned int)arg1 >> 8 & 255)];
                        this_02 = (ConfigTypePreloadPackedContainer<SeqType> _vtbl*)*plVar6;
                        if (this_02 == nullptr) {
                            return pCVar7;
                        }
                        uVar8 = arg1 & 255;
                        goto LAB_1004ee9b2;
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar5 = this_03->size();
                } while (arg1_00 < uVar5);
            }
        }
        return pCVar7;
    }

    // 0x1004ee9d0
    uint64_t ConfigTypePreloadPackedContainer<SeqType>::DecodeConfig(int arg1, shared_ptr<SeqType>& seqType) {
        PacketT<Array<unsigned char>>* arg1_00;
        ConfigTypePreloadPackedContainer<SeqType> _vtbl* pCVar1;
        unsigned int arg1_01;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        uint8_t* puVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        void* pvVar8;
        Array<unsigned char>* this_00;
        void* pvVar9;
        size_t sVar10;
        uint64_t uVar11;
        long* plVar12;
        unsigned long arg1_03;
        Array<Array<unsigned char>>* this_01;
        shared_ptr<SeqType> local_50;
        Js5Index* local_40;

        seqType = *PTR_NullConfigType_100ee6570;
        if (arg1 < 0) {
            MakeSharedPool<SeqType, 96>::MakeShared<BaseTemplateConfigTypeList<SeqType>*&, int&>(
                (BaseTemplateConfigTypeList<SeqType>**)&local_50, (int*)(this + 1));
            seqType = local_50;
        LAB_1004eeb5b:
        LAB_1004eeb64:
            uVar11 = 1;
        } else {
            arg1_01 = this[1]._vptr->GetClientGroupID(arg1);
            uVar3 = this[1]._vptr->GetClientFileID(arg1);
            local_40 = nullptr;
            puVar6 =
                (uint8_t*)(**(void (**)(...))((this[2]._vptr)->_dtor + 24))(this[2]._vptr, &local_40, this[3]._vptr);
            if (puVar6 != DataStatus::MISSING) {
                if (local_40->DoesFileExist(arg1_01, uVar3) != '\0') {
                    if (puVar6 == DataStatus::READY) {
                        uVar3 = local_40->GetFileIndex(arg1_01, uVar3);
                        uVar4 = this[1]._vptr->GetUIHeight();
                        arg1_03 = 0;
                        if (1 < uVar4) {
                            arg1_03 = (unsigned long)arg1_01;
                        }
                        iVar5 = local_40->GetFileCount(arg1_01);
                        arg1_00 = (PacketT<Array<unsigned char>>*)(this + 22);
                        this_01 = (Array<Array<unsigned char>>*)(this + 19);
                        pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                        if (iVar5 == 1) {
                            arg1_00->Reserve(pvVar7->end());
                            arg1_00->SetPos(0);
                            pvVar8 = (void*)arg1_00->GetDataPtr();
                            this_00 = (Array<unsigned char>*)(*this_01)[arg1_03];
                            pvVar9 = (void*)(*this_00)[0];
                            pvVar7 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                            sVar10 = pvVar7->end();
                            _memcpy(pvVar8, pvVar9, sVar10);
                        } else {
                            Js5DiskFileFormat::GetGroupFileData((PacketT<Array<unsigned char> _>*)arg1_00,
                                                                (Array<unsigned char>*)pvVar7, uVar3);
                        }
                        MakeSharedPool<SeqType, 96>::MakeShared<BaseTemplateConfigTypeList<SeqType>*&, int&>(
                            (BaseTemplateConfigTypeList<SeqType>**)&local_50, (int*)(this + 1));
                        plVar12 = (long*)local_50.operator->();
                        puVar6 = (uint8_t*)(**(void (**)(...))(*plVar12 + 32))(plVar12, arg1_00);
                        if (puVar6 == DataStatus::READY) {
                            plVar12 = (long*)local_50.operator->();
                            (**(void (**)(...))(*plVar12 + 24))(plVar12);
                            pCVar1 = this[1]._vptr;
                            puVar6 = (uint8_t*)(**(void (**)(...))(pCVar1->_dtor + 72))(pCVar1, &local_50);
                            if (puVar6 == DataStatus::READY) {
                                seqType = local_50;
                            }
                        }
                        goto LAB_1004eeb5b;
                    }
                    goto LAB_1004eeb64;
                }
            }
            uVar11 = 0;
        }
        return uVar11;
    }

    // 0x1004eec10
    auto ConfigTypePreloadPackedContainer<SeqType>::AddConfigID(const shared_ptr<SeqType>& seqType, int arg2) {
        auto result;
        unsigned long uVar1;
        unique_ptr<ConfigTypePreloadPackedContainer<SeqType>::PageList>* puVar2;
        long lVar3;
        array<ConfigTypePreloadPackedContainer<SeqType>::ConfigPage*, 256ul>* paVar4;
        ReturnValue* pRVar5;
        ReturnValue this;
        ReturnValue* pRVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue local_48;
        unsigned int local_38;
        unsigned int local_34;

        if (arg2 == -1) {
            pRVar6 = &result + 17;
            *pRVar6 = seqType;
        } else {
            local_34 = arg2 & 4294901760;
            pRVar6 = &result + 9;
            uVar1 = pRVar6->size();
            arg1 = 0;
            if (uVar1 != 0) {
                do {
                    puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<SeqType>::PageList>*)(*pRVar6)[arg1];
                    lVar3 = (*puVar2).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == local_34)
                        break;
                    arg1 = (unsigned long)((int)arg1 + 1);
                } while (arg1 < uVar1);
            }
            if (uVar1 == arg1) {
                local_48 =
                    std::make_unique<ConfigTypePreloadPackedContainer<SeqType>::PageList, unsigned int&>(local_34);
                eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<SeqType>::PageList>>::emplace_back<
                    std::unique_ptr<ConfigTypePreloadPackedContainer<SeqType>::PageList>>(
                    (vector<std::unique_ptr<ConfigTypePreloadPackedContainer<SeqType>::PageList>>*)pRVar6,
                    (unique_ptr<ConfigTypePreloadPackedContainer<SeqType>::PageList,
                                std::default_delete<ConfigTypePreloadPackedContainer<SeqType>::PageList> _>*)&local_48);
            }
            uVar1 = (unsigned long)(arg2 - local_34 >> 8);
            puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<SeqType>::PageList>*)(*pRVar6)[arg1];
            paVar4 = (array<ConfigTypePreloadPackedContainer<SeqType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
            pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
            this = *pRVar5;
            uVar7 = arg2 & 255U;
            if (this == (ReturnValue)0) {
                local_38 = arg2 & 255U;
                this = (ReturnValue)AllocatePageBuffer(&result);
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<SeqType>::PageList>*)(*pRVar6)[arg1];
                paVar4 = (array<ConfigTypePreloadPackedContainer<SeqType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
                pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
                *pRVar5 = this;
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<SeqType>::PageList>*)(*pRVar6)[arg1];
                lVar3 = (*puVar2).operator->();
                if (*(unsigned int*)(lVar3 + 2048) != local_34) {
                    LogAssert("m_pageListContainer[thisPageList]->m_pageListID == pageListID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigTypePreloadPackedContainer.h",
                              469, nullptr);
                }
                uVar7 = local_38;
            }
            pRVar6 = (ReturnValue*)(*this)[(unsigned long)uVar7];
            *pRVar6 = seqType;
            *(int*)((long)this + 4096) = *(int*)((long)this + 4096) + 1;
            *(int*)(&result + 13) = arg2;
            &result[14] = this;
            *(unsigned int*)(&result + 15) = uVar7;
        }
        return pRVar6;
    }

    // 0x1004eef40
    ConfigPage* ConfigTypePreloadPackedContainer<SeqType>::AllocatePageBuffer() {
        AllocatedBlock local_28 = this[16]._vptr->Allocate(4128);
        void* pvVar1 = local_28.field_8;
        if (local_28.field_8 == nullptr) {
            LogAssert("block.m_address != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      534, nullptr);
        }
        new (local_28.field_8) ConfigPage();
        *(unsigned long*)((long)pvVar1 + 4120) = local_28.field_16;
        *(uint64_t*)((long)pvVar1 + 4104) = local_28._0_8_;
        *(void**)((long)pvVar1 + 4112) = local_28.field_8;
        return pvVar1;
    }

    // 0x1004ef2e0
    ConfigTypePreloadPackedContainer<SeqType>::PageList::PageList(unsigned int arg1) {
        uint64_t* puVar1;

        *(unsigned int*)(this + 2048) = arg1;
        *(uint32_t*)(this + 2052) = 0;
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1_00];
            *puVar1 = 0;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
    }

    // 0x1004ef390
    ConfigTypePreloadPackedContainer<SeqType>::ConfigPage::ConfigPage() : std::array<shared_ptr<SeqType>, 256ul>() {
        *(uint32_t*)(this + 4096) = 0;
        new ((this + 4104)) SimpleAllocator::AllocatedBlock();
    }

    // 0x1004f9d90
    ConfigTypePreloadPackedContainer<ObjType>::ConfigTypePreloadPackedContainer(
        BaseTemplateConfigTypeList<ObjType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<ObjType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                           js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8490;
        new ((this + 9)) eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<ObjType>::PageList>>();
        new ((this + 17)) shared_ptr();
        new ((this + 19)) Array<Array<unsigned char>>();
        new ((this + 22)) PacketT();
        ((this + 26))->unique_ptr<true, void>();
    }

    // 0x1004f9f00
    _x7e___2* ConfigTypePreloadPackedContainer<ObjType>::LoadList() {
        unique_ptr* this_00;
        bool bVar2;
        bool cVar3;
        DownloadWaitHandler* pDVar6;
        CoordMapSquare* pCVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        ConfigTypePreloadPackedContainer<ObjType> _vtbl* local_48;

        if (*(int*)&this[6]._vptr == 2) {
            return (_x7e___2*)DataStatus::READY;
        }
        ConfigTypePreloadPackedContainer<ObjType> _vtbl* pCVar1 = this[2]._vptr;
        ConfigTypePreloadPackedContainer<ObjType> _vtbl* js5ArchiveSettings = this[3]._vptr;
        Js5Index* local_40 = nullptr;
        _x7e___2* p_Var5 = (_x7e___2*)(**(void (**)(...))(pCVar1->_dtor + 24))(pCVar1, &local_40, js5ArchiveSettings);
        if (p_Var5 != (_x7e___2*)DataStatus::READY) {
            return p_Var5;
        }
        unsigned int local_34 = this[1]._vptr->GetUIHeight();
        int iVar4 = this[1]._vptr->GetStreamCountLastMix();
        *(unsigned int*)&this[8]._vptr = iVar4 + local_34;
        if (*(int*)&this[6]._vptr == 0) {
            this_00 = (unique_ptr*)(this + 26);
            local_48 = js5ArchiveSettings;
            cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar3) {
                LogAssert("!m_downloadHandler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "ConfigTypePreloadPackedContainer.h",
                          213, nullptr);
            }
            local_50 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_34);
            *this_00 = local_50;
            pDVar6 = (DownloadWaitHandler*)**this_00;
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                CheckGroupExistence(this, pDVar6, local_40, uVar8, 0);
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    CheckGroupExistence(this, pDVar6, local_40, uVar8, uVar8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            ((this + 19))->set_max_size((unsigned long)local_34, 0);
            *(uint32_t*)&this[6]._vptr = 1;
            iVar4 = *(int*)&this[6]._vptr;
            js5ArchiveSettings = local_48;
        } else {
            iVar4 = *(int*)&this[6]._vptr;
        }
        if (iVar4 != 1) {
            return (_x7e___2*)DataStatus::READY;
        }
        pDVar6 = (DownloadWaitHandler*)*(*((this + 26)));
        if ((this[1]._vptr != nullptr) && (cVar3 = (**(void (**)(...))(pCVar1->_dtor + 64))(pCVar1), cVar3)) {
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                cVar3 = pDVar6->IsComplete(0);
                if ((!cVar3) && (cVar3 = pDVar6->CanCheck(0), cVar3)) {
                    CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, 0);
                }
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    cVar3 = pDVar6->IsComplete(uVar8);
                    if ((!cVar3) && (cVar3 = pDVar6->CanCheck(uVar8), cVar3)) {
                        CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, uVar8);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            if (*(unsigned int*)&this[8]._vptr <= *(unsigned int*)((long)&this[7]._vptr + 4)) {
                ((this + 26))->reset(nullptr);
                *(uint32_t*)&this[6]._vptr = 2;
                p_Var5 = (_x7e___2*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->_x7e___2 = p_Var5;
                bVar2 = true;
                goto LAB_1004fa176;
            }
        }
        bVar2 = false;
        p_Var5 = (_x7e___2*)DataStatus::NOTLOADED;
    LAB_1004fa176:
        if (bVar2) {
            return (_x7e___2*)DataStatus::READY;
        }
        return p_Var5;
    }

    // 0x1004fa1c0
    void ConfigTypePreloadPackedContainer<ObjType>::CacheReset() {
        unique_ptr<ConfigTypePreloadPackedContainer<ObjType>::PageList>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (unique_ptr<ConfigTypePreloadPackedContainer<ObjType>::PageList>*)(*this_00)[arg1];
                ((PageList*)this_01->get())->ClearPageList(*this[16]._vptr);
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        this_00->clear();
        this[14]._vptr = nullptr;
        *(uint32_t*)&this[15]._vptr = 0;
        *(uint32_t*)&this[13]._vptr = 4294967295;
    }

    // 0x1004fa250
    void ConfigTypePreloadPackedContainer<ObjType>::CacheClean(unsigned int arg1) {
        LoadList** ppLVar1;
        ConfigTypePreloadPackedContainer<ObjType> _vtbl* this_01;
        unsigned long uVar4;
        unique_ptr<ConfigTypePreloadPackedContainer<ObjType>::PageList>* this_02;
        array<ConfigTypePreloadPackedContainer<ObjType>::ConfigPage*, 256ul>* this_03;
        uint64_t* puVar5;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_04;
        unsigned long arg1_00;
        unsigned int uVar6;
        int iVar7;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_02 = (unique_ptr<ConfigTypePreloadPackedContainer<ObjType>::PageList>*)(*this_00)[arg1_00];
                this_03 = (array<ConfigTypePreloadPackedContainer<ObjType>::ConfigPage*, 256ul>*)this_02->get();
                uVar6 = *(unsigned int*)(this_03 + 2052);
                iVar7 = 16;
                do {
                    puVar5 = (uint64_t*)(*this_03)[(unsigned long)(uVar6 >> 8)];
                    this_01 = (ConfigTypePreloadPackedContainer<ObjType> _vtbl*)*puVar5;
                    if (this_01 != nullptr) {
                        this_04 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*this_01)[(
                            unsigned long)(uVar6 & 255)];
                        if (this_04->unique() != '\0') {
                            this_04->reset();
                            if ((this_01 == this[14]._vptr) && ((uVar6 & 255) == *(unsigned int*)&this[15]._vptr)) {
                                this[14]._vptr = nullptr;
                                *(uint32_t*)&this[15]._vptr = 0;
                                *(uint32_t*)&this[13]._vptr = 4294967295;
                            }
                            ppLVar1 = &this_01[51].LoadList;
                            *(int*)ppLVar1 = *(int*)ppLVar1 - 1;
                            if (*(int*)ppLVar1 == 0) {
                                this[16]._vptr->DeAllocate(&this_01[51].CacheReset);
                                *puVar5 = 0;
                            }
                        }
                    }
                    uVar6 = uVar6 + 1 & 65535;
                    iVar7 = iVar7 - 1;
                } while (iVar7 != 0);
                *(unsigned int*)(this_03 + 2052) = uVar6;
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x1004fa3c0
    shared_ptr* ConfigTypePreloadPackedContainer<ObjType>::List(int arg1, const DataStatus** arg2) {
        shared_ptr* psVar2;
        uint8_t** ppuVar3;

        if (*(int*)&this[6]._vptr != 2) {
            if (arg2 == nullptr) {
                return (shared_ptr*)PTR_NullConfigType_100ee6568;
            }
            ppuVar3 = &DataStatus::NOTLOADED;
            psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6568;
        LAB_1004fa41b:
            *arg2 = (DataStatus*)*ppuVar3;
            return psVar2;
        }
        psVar2 = (shared_ptr*)FindConfigID(this, arg1);
        if (shared_ptr::operator_cast_to_bool(psVar2)) {
            if (arg2 == nullptr) {
                return psVar2;
            }
            ppuVar3 = &DataStatus::READY;
            goto LAB_1004fa41b;
        }
        shared_ptr local_38;
        if (!(DecodeConfig(this, arg1, (shared_ptr<ObjType>*)&local_38))) {
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::MISSING;
            LAB_1004fa491:
                *arg2 = (DataStatus*)*ppuVar3;
            }
        } else {
            if (shared_ptr::operator_cast_to_bool(&local_38)) {
                if (arg2 != nullptr) {
                    *arg2 = (DataStatus*)DataStatus::READY;
                }
                psVar2 = (shared_ptr*)AddConfigID((ReturnValue*)this, (shared_ptr<ObjType>*)&local_38, arg1);
                goto LAB_1004fa49e;
            }
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_1004fa491;
            }
        }
        psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6568;
    LAB_1004fa49e:
        return psVar2;
    }

    // 0x1004fa4d0
    auto ConfigTypePreloadPackedContainer<ObjType>::DirectFetch(int arg1) {
        if (*(int*)&this[6]._vptr != 2) {
            LogAssert("m_loadStep == BaseLoadAllConfigTypeContainer::LoadStep::DONE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      179, nullptr);
        }
        auto result;
        if (DecodeConfig(this, arg1, &result) == '\0') {
            LogAssert("exists",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      183, nullptr);
        }
        return result;
    }

    // 0x1004fa730
    ConfigTypePreloadPackedContainer<ObjType>::~ConfigTypePreloadPackedContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8490;
        this[16]._vptr->PrintMetrics();
        CacheReset();
        ((this + 26))->~unique_ptr();
        ((this + 22))->~VBOMapper();
        ((this + 19))->~Array();
        ((this + 17))->~shared_ptr();
        ((this + 9))->~vector();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1004fa980
    void ConfigTypePreloadPackedContainer<ObjType>::CheckGroupExistence(DownloadWaitHandler& downloadWaitHandler,
                                                                        Js5Index* js5Index, unsigned int arg3,
                                                                        unsigned int arg4) {
        int* piVar1;

        if (js5Index == nullptr) {
            LogAssert("js5Index",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      365, nullptr);
        }
        if (js5Index->DoesGroupExist(arg3) == '\0') {
            piVar1 = (int*)((long)&this[7]._vptr + 4);
            *piVar1 = *piVar1 + 1;
        } else {
            downloadWaitHandler.SetExists(arg4);
        }
    }

    // 0x1004faa00
    void ConfigTypePreloadPackedContainer<ObjType>::CheckDecodeProgress(const Js5ArchiveSettings& js5ArchiveSettings,
                                                                        Js5Index* js5Index, unsigned int arg3,
                                                                        unsigned int arg4) {
        int iVar1;
        Array<unsigned char>* this_00;
        TextureAtlasReference* pTVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        void* pvVar4;
        PacketT<Array<unsigned char>>* this_02;
        void* pvVar5;
        size_t sVar6;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)this[1]._vptr->GetGroup(local_48, js5ArchiveSettings, arg3, (Priority*)Priority::HIGHEST, true,
                                              true) == DataStatus::READY) {
            this_00 = (Array<unsigned char>*)(*((this + 19)))[(unsigned long)arg4];
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            this_00->set_max_size(pTVar3->GetTextureAtlas(), 0);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*((this + 19)))[(unsigned long)arg4];
            pvVar4 = (void*)this_01->data();
            this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pvVar5 = (void*)this_02->GetDataPtr();
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            sVar6 = pTVar3->GetTextureAtlas();
            _memcpy(pvVar4, pvVar5, sVar6);
            iVar1 = js5Index->GetMaximumFileID(arg3);
            *(int*)((long)&this[7]._vptr + 4) = iVar1 + *(int*)((long)&this[7]._vptr + 4) + 1;
            ((DownloadWaitHandler*)(*((this + 26))).operator->())->Completed(arg4);
        }
    }

    // 0x1004fad30
    void ConfigTypePreloadPackedContainer<ObjType>::PageList::ClearPageList(SimpleAllocator& simpleAllocator) {
        ConfigPage* this_00;
        uint64_t* puVar1;

        unsigned long arg1 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1];
            this_00 = (ConfigPage*)*puVar1;
            if (this_00 != nullptr) {
                this_00->Clear();
                simpleAllocator.DeAllocate((this_00 + 4104));
                *puVar1 = 0;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1004fae10
    void ConfigTypePreloadPackedContainer<ObjType>::ConfigPage::Clear() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1];
            if (this_00->end() != 0) {
                this_00->reset();
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1004faf50
    ConfigTypePreloadPackedContainer<ObjType>* ConfigTypePreloadPackedContainer<ObjType>::FindConfigID(int arg1) const {
        unsigned int uVar2;
        shared_ptr* this_00;
        long lVar3;
        unique_ptr<ConfigTypePreloadPackedContainer<ObjType>::PageList>* puVar4;
        unsigned long uVar5;
        array<ConfigTypePreloadPackedContainer<ObjType>::ConfigPage*, 256ul>* this_01;
        long* plVar6;
        ConfigTypePreloadPackedContainer<ObjType>* pCVar7;
        unsigned long arg1_00;
        unsigned int uVar8;
        ConfigTypePreloadPackedContainer<ObjType> _vtbl* this_02;
        vector<eastl::pair<int, int>>* this_03;

        if (arg1 == -1) {
            pCVar7 = this + 17;
        } else {
            if (*(int*)&this[13]._vptr == arg1) {
                if (this[14]._vptr != nullptr) {
                    this_00 = (shared_ptr*)(*this[14]._vptr)[(unsigned long)*(unsigned int*)&this[15]._vptr];
                    if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                        this_02 = this[14]._vptr;
                        uVar8 = *(unsigned int*)&this[15]._vptr;
                    LAB_1004fb072:
                        pCVar7 = (ConfigTypePreloadPackedContainer<ObjType>*)(*this_02)[(unsigned long)uVar8];
                        return pCVar7;
                    }
                }
                uVar8 = *(unsigned int*)&this[13]._vptr;
                uVar2 = this[3]._vptr->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigTypePreloadPackedContainer.h",
                                507, "Previously loaded config ID %d (archive ID %u) unexpectedly missing",
                                (unsigned long)uVar8, (unsigned long)uVar2);
            }
            this_03 = (vector<eastl::pair<int, int>>*)(this + 9);
            lVar3 = this_03->size();
            pCVar7 = (ConfigTypePreloadPackedContainer<ObjType>*)PTR_NullConfigType_100ee6568;
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<ObjType>::PageList>*)(*this_03)[arg1_00];
                    lVar3 = (*puVar4).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == (arg1 & 4294901760U)) {
                        puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<ObjType>::PageList>*)(*this_03)[arg1_00];
                        this_01 = (array<ConfigTypePreloadPackedContainer<ObjType>::ConfigPage*, 256ul>*)(*puVar4)
                                      .operator->();
                        plVar6 = (long*)(*this_01)[(unsigned long)((unsigned int)arg1 >> 8 & 255)];
                        this_02 = (ConfigTypePreloadPackedContainer<ObjType> _vtbl*)*plVar6;
                        if (this_02 == nullptr) {
                            return pCVar7;
                        }
                        uVar8 = arg1 & 255;
                        goto LAB_1004fb072;
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar5 = this_03->size();
                } while (arg1_00 < uVar5);
            }
        }
        return pCVar7;
    }

    // 0x1004fb090
    uint64_t ConfigTypePreloadPackedContainer<ObjType>::DecodeConfig(int arg1, shared_ptr<ObjType>& objType) {
        PacketT<Array<unsigned char>>* arg1_00;
        ConfigTypePreloadPackedContainer<ObjType> _vtbl* pCVar1;
        unsigned int arg1_01;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        uint8_t* puVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        void* pvVar8;
        Array<unsigned char>* this_00;
        void* pvVar9;
        size_t sVar10;
        uint64_t uVar11;
        long* plVar12;
        unsigned long arg1_03;
        Array<Array<unsigned char>>* this_01;
        shared_ptr<ObjType> local_50;
        Js5Index* local_40;

        objType = *PTR_NullConfigType_100ee6568;
        if (arg1 < 0) {
            MakeSharedPool<ObjType, 96>::MakeShared<BaseTemplateConfigTypeList<ObjType>*&, int&>(
                (BaseTemplateConfigTypeList<ObjType>**)&local_50, (int*)(this + 1));
            objType = local_50;
        LAB_1004fb21b:
        LAB_1004fb224:
            uVar11 = 1;
        } else {
            arg1_01 = this[1]._vptr->GetClientGroupID(arg1);
            uVar3 = this[1]._vptr->GetClientFileID(arg1);
            local_40 = nullptr;
            puVar6 =
                (uint8_t*)(**(void (**)(...))((this[2]._vptr)->_dtor + 24))(this[2]._vptr, &local_40, this[3]._vptr);
            if (puVar6 != DataStatus::MISSING) {
                if (local_40->DoesFileExist(arg1_01, uVar3) != '\0') {
                    if (puVar6 == DataStatus::READY) {
                        uVar3 = local_40->GetFileIndex(arg1_01, uVar3);
                        uVar4 = this[1]._vptr->GetUIHeight();
                        arg1_03 = 0;
                        if (1 < uVar4) {
                            arg1_03 = (unsigned long)arg1_01;
                        }
                        iVar5 = local_40->GetFileCount(arg1_01);
                        arg1_00 = (PacketT<Array<unsigned char>>*)(this + 22);
                        this_01 = (Array<Array<unsigned char>>*)(this + 19);
                        pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                        if (iVar5 == 1) {
                            arg1_00->Reserve(pvVar7->end());
                            arg1_00->SetPos(0);
                            pvVar8 = (void*)arg1_00->GetDataPtr();
                            this_00 = (Array<unsigned char>*)(*this_01)[arg1_03];
                            pvVar9 = (void*)(*this_00)[0];
                            pvVar7 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                            sVar10 = pvVar7->end();
                            _memcpy(pvVar8, pvVar9, sVar10);
                        } else {
                            Js5DiskFileFormat::GetGroupFileData((PacketT<Array<unsigned char> _>*)arg1_00,
                                                                (Array<unsigned char>*)pvVar7, uVar3);
                        }
                        MakeSharedPool<ObjType, 96>::MakeShared<BaseTemplateConfigTypeList<ObjType>*&, int&>(
                            (BaseTemplateConfigTypeList<ObjType>**)&local_50, (int*)(this + 1));
                        plVar12 = (long*)local_50.operator->();
                        puVar6 = (uint8_t*)(**(void (**)(...))(*plVar12 + 32))(plVar12, arg1_00);
                        if (puVar6 == DataStatus::READY) {
                            plVar12 = (long*)local_50.operator->();
                            (**(void (**)(...))(*plVar12 + 24))(plVar12);
                            pCVar1 = this[1]._vptr;
                            puVar6 = (uint8_t*)(**(void (**)(...))(pCVar1->_dtor + 72))(pCVar1, &local_50);
                            if (puVar6 == DataStatus::READY) {
                                objType = local_50;
                            }
                        }
                        goto LAB_1004fb21b;
                    }
                    goto LAB_1004fb224;
                }
            }
            uVar11 = 0;
        }
        return uVar11;
    }

    // 0x1004fb2d0
    auto ConfigTypePreloadPackedContainer<ObjType>::AddConfigID(const shared_ptr<ObjType>& objType, int arg2) {
        auto result;
        unsigned long uVar1;
        unique_ptr<ConfigTypePreloadPackedContainer<ObjType>::PageList>* puVar2;
        long lVar3;
        array<ConfigTypePreloadPackedContainer<ObjType>::ConfigPage*, 256ul>* paVar4;
        ReturnValue* pRVar5;
        ReturnValue this;
        ReturnValue* pRVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue local_48;
        unsigned int local_38;
        unsigned int local_34;

        if (arg2 == -1) {
            pRVar6 = &result + 17;
            *pRVar6 = objType;
        } else {
            local_34 = arg2 & 4294901760;
            pRVar6 = &result + 9;
            uVar1 = pRVar6->size();
            arg1 = 0;
            if (uVar1 != 0) {
                do {
                    puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<ObjType>::PageList>*)(*pRVar6)[arg1];
                    lVar3 = (*puVar2).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == local_34)
                        break;
                    arg1 = (unsigned long)((int)arg1 + 1);
                } while (arg1 < uVar1);
            }
            if (uVar1 == arg1) {
                local_48 =
                    std::make_unique<ConfigTypePreloadPackedContainer<ObjType>::PageList, unsigned int&>(local_34);
                eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<ObjType>::PageList>>::emplace_back<
                    std::unique_ptr<ConfigTypePreloadPackedContainer<ObjType>::PageList>>(
                    (vector<std::unique_ptr<ConfigTypePreloadPackedContainer<ObjType>::PageList>>*)pRVar6,
                    (unique_ptr<ConfigTypePreloadPackedContainer<ObjType>::PageList,
                                std::default_delete<ConfigTypePreloadPackedContainer<ObjType>::PageList> _>*)&local_48);
            }
            uVar1 = (unsigned long)(arg2 - local_34 >> 8);
            puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<ObjType>::PageList>*)(*pRVar6)[arg1];
            paVar4 = (array<ConfigTypePreloadPackedContainer<ObjType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
            pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
            this = *pRVar5;
            uVar7 = arg2 & 255U;
            if (this == (ReturnValue)0) {
                local_38 = arg2 & 255U;
                this = (ReturnValue)AllocatePageBuffer(&result);
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<ObjType>::PageList>*)(*pRVar6)[arg1];
                paVar4 = (array<ConfigTypePreloadPackedContainer<ObjType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
                pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
                *pRVar5 = this;
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<ObjType>::PageList>*)(*pRVar6)[arg1];
                lVar3 = (*puVar2).operator->();
                if (*(unsigned int*)(lVar3 + 2048) != local_34) {
                    LogAssert("m_pageListContainer[thisPageList]->m_pageListID == pageListID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigTypePreloadPackedContainer.h",
                              469, nullptr);
                }
                uVar7 = local_38;
            }
            pRVar6 = (ReturnValue*)(*this)[(unsigned long)uVar7];
            *pRVar6 = objType;
            *(int*)((long)this + 4096) = *(int*)((long)this + 4096) + 1;
            *(int*)(&result + 13) = arg2;
            &result[14] = this;
            *(unsigned int*)(&result + 15) = uVar7;
        }
        return pRVar6;
    }

    // 0x1004fb660
    ConfigPage* ConfigTypePreloadPackedContainer<ObjType>::AllocatePageBuffer() {
        AllocatedBlock local_28 = this[16]._vptr->Allocate(4128);
        void* pvVar1 = local_28.field_8;
        if (local_28.field_8 == nullptr) {
            LogAssert("block.m_address != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      534, nullptr);
        }
        new (local_28.field_8) ConfigPage();
        *(unsigned long*)((long)pvVar1 + 4120) = local_28.field_16;
        *(uint64_t*)((long)pvVar1 + 4104) = local_28._0_8_;
        *(void**)((long)pvVar1 + 4112) = local_28.field_8;
        return pvVar1;
    }

    // 0x1004fba00
    ConfigTypePreloadPackedContainer<ObjType>::PageList::PageList(unsigned int arg1) {
        uint64_t* puVar1;

        *(unsigned int*)(this + 2048) = arg1;
        *(uint32_t*)(this + 2052) = 0;
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1_00];
            *puVar1 = 0;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
    }

    // 0x1004fbab0
    ConfigTypePreloadPackedContainer<ObjType>::ConfigPage::ConfigPage() : std::array<shared_ptr<ObjType>, 256ul>() {
        *(uint32_t*)(this + 4096) = 0;
        new ((this + 4104)) SimpleAllocator::AllocatedBlock();
    }

    // 0x1005106d0
    ConfigTypePreloadPackedContainer<NPCType>::ConfigTypePreloadPackedContainer(
        BaseTemplateConfigTypeList<NPCType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<NPCType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                           js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8488;
        new ((this + 9)) eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<NPCType>::PageList>>();
        new ((this + 17)) shared_ptr();
        new ((this + 19)) Array<Array<unsigned char>>();
        new ((this + 22)) PacketT();
        ((this + 26))->unique_ptr<true, void>();
    }

    // 0x100510840
    _x7e___2* ConfigTypePreloadPackedContainer<NPCType>::LoadList() {
        unique_ptr* this_00;
        bool bVar2;
        bool cVar3;
        DownloadWaitHandler* pDVar6;
        CoordMapSquare* pCVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        ConfigTypePreloadPackedContainer<NPCType> _vtbl* local_48;

        if (*(int*)&this[6]._vptr == 2) {
            return (_x7e___2*)DataStatus::READY;
        }
        ConfigTypePreloadPackedContainer<NPCType> _vtbl* pCVar1 = this[2]._vptr;
        ConfigTypePreloadPackedContainer<NPCType> _vtbl* js5ArchiveSettings = this[3]._vptr;
        Js5Index* local_40 = nullptr;
        _x7e___2* p_Var5 = (_x7e___2*)(**(void (**)(...))(pCVar1->_dtor + 24))(pCVar1, &local_40, js5ArchiveSettings);
        if (p_Var5 != (_x7e___2*)DataStatus::READY) {
            return p_Var5;
        }
        unsigned int local_34 = this[1]._vptr->GetUIHeight();
        int iVar4 = this[1]._vptr->GetStreamCountLastMix();
        *(unsigned int*)&this[8]._vptr = iVar4 + local_34;
        if (*(int*)&this[6]._vptr == 0) {
            this_00 = (unique_ptr*)(this + 26);
            local_48 = js5ArchiveSettings;
            cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar3) {
                LogAssert("!m_downloadHandler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "ConfigTypePreloadPackedContainer.h",
                          213, nullptr);
            }
            local_50 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_34);
            *this_00 = local_50;
            pDVar6 = (DownloadWaitHandler*)**this_00;
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                CheckGroupExistence(this, pDVar6, local_40, uVar8, 0);
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    CheckGroupExistence(this, pDVar6, local_40, uVar8, uVar8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            ((this + 19))->set_max_size((unsigned long)local_34, 0);
            *(uint32_t*)&this[6]._vptr = 1;
            iVar4 = *(int*)&this[6]._vptr;
            js5ArchiveSettings = local_48;
        } else {
            iVar4 = *(int*)&this[6]._vptr;
        }
        if (iVar4 != 1) {
            return (_x7e___2*)DataStatus::READY;
        }
        pDVar6 = (DownloadWaitHandler*)*(*((this + 26)));
        if ((this[1]._vptr != nullptr) && (cVar3 = (**(void (**)(...))(pCVar1->_dtor + 64))(pCVar1), cVar3)) {
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                cVar3 = pDVar6->IsComplete(0);
                if ((!cVar3) && (cVar3 = pDVar6->CanCheck(0), cVar3)) {
                    CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, 0);
                }
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    cVar3 = pDVar6->IsComplete(uVar8);
                    if ((!cVar3) && (cVar3 = pDVar6->CanCheck(uVar8), cVar3)) {
                        CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, uVar8);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            if (*(unsigned int*)&this[8]._vptr <= *(unsigned int*)((long)&this[7]._vptr + 4)) {
                ((this + 26))->reset(nullptr);
                *(uint32_t*)&this[6]._vptr = 2;
                p_Var5 = (_x7e___2*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->_x7e___2 = p_Var5;
                bVar2 = true;
                goto LAB_100510ab6;
            }
        }
        bVar2 = false;
        p_Var5 = (_x7e___2*)DataStatus::NOTLOADED;
    LAB_100510ab6:
        if (bVar2) {
            return (_x7e___2*)DataStatus::READY;
        }
        return p_Var5;
    }

    // 0x100510b00
    void ConfigTypePreloadPackedContainer<NPCType>::CacheReset() {
        unique_ptr<ConfigTypePreloadPackedContainer<NPCType>::PageList>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (unique_ptr<ConfigTypePreloadPackedContainer<NPCType>::PageList>*)(*this_00)[arg1];
                ((PageList*)this_01->get())->ClearPageList(*this[16]._vptr);
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        this_00->clear();
        this[14]._vptr = nullptr;
        *(uint32_t*)&this[15]._vptr = 0;
        *(uint32_t*)&this[13]._vptr = 4294967295;
    }

    // 0x100510b90
    void ConfigTypePreloadPackedContainer<NPCType>::CacheClean(unsigned int arg1) {
        LoadList** ppLVar1;
        ConfigTypePreloadPackedContainer<NPCType> _vtbl* this_01;
        unsigned long uVar4;
        unique_ptr<ConfigTypePreloadPackedContainer<NPCType>::PageList>* this_02;
        array<ConfigTypePreloadPackedContainer<NPCType>::ConfigPage*, 256ul>* this_03;
        uint64_t* puVar5;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_04;
        unsigned long arg1_00;
        unsigned int uVar6;
        int iVar7;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_02 = (unique_ptr<ConfigTypePreloadPackedContainer<NPCType>::PageList>*)(*this_00)[arg1_00];
                this_03 = (array<ConfigTypePreloadPackedContainer<NPCType>::ConfigPage*, 256ul>*)this_02->get();
                uVar6 = *(unsigned int*)(this_03 + 2052);
                iVar7 = 16;
                do {
                    puVar5 = (uint64_t*)(*this_03)[(unsigned long)(uVar6 >> 8)];
                    this_01 = (ConfigTypePreloadPackedContainer<NPCType> _vtbl*)*puVar5;
                    if (this_01 != nullptr) {
                        this_04 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*this_01)[(
                            unsigned long)(uVar6 & 255)];
                        if (this_04->unique() != '\0') {
                            this_04->reset();
                            if ((this_01 == this[14]._vptr) && ((uVar6 & 255) == *(unsigned int*)&this[15]._vptr)) {
                                this[14]._vptr = nullptr;
                                *(uint32_t*)&this[15]._vptr = 0;
                                *(uint32_t*)&this[13]._vptr = 4294967295;
                            }
                            ppLVar1 = &this_01[51].LoadList;
                            *(int*)ppLVar1 = *(int*)ppLVar1 - 1;
                            if (*(int*)ppLVar1 == 0) {
                                this[16]._vptr->DeAllocate(&this_01[51].CacheReset);
                                *puVar5 = 0;
                            }
                        }
                    }
                    uVar6 = uVar6 + 1 & 65535;
                    iVar7 = iVar7 - 1;
                } while (iVar7 != 0);
                *(unsigned int*)(this_03 + 2052) = uVar6;
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x100510d00
    shared_ptr* ConfigTypePreloadPackedContainer<NPCType>::List(int arg1, const DataStatus** arg2) {
        shared_ptr* psVar2;
        uint8_t** ppuVar3;

        if (*(int*)&this[6]._vptr != 2) {
            if (arg2 == nullptr) {
                return (shared_ptr*)PTR_NullConfigType_100ee6560;
            }
            ppuVar3 = &DataStatus::NOTLOADED;
            psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6560;
        LAB_100510d5b:
            *arg2 = (DataStatus*)*ppuVar3;
            return psVar2;
        }
        psVar2 = (shared_ptr*)FindConfigID(this, arg1);
        if (shared_ptr::operator_cast_to_bool(psVar2)) {
            if (arg2 == nullptr) {
                return psVar2;
            }
            ppuVar3 = &DataStatus::READY;
            goto LAB_100510d5b;
        }
        shared_ptr local_38;
        if (!(DecodeConfig(this, arg1, (shared_ptr<NPCType>*)&local_38))) {
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::MISSING;
            LAB_100510dd1:
                *arg2 = (DataStatus*)*ppuVar3;
            }
        } else {
            if (shared_ptr::operator_cast_to_bool(&local_38)) {
                if (arg2 != nullptr) {
                    *arg2 = (DataStatus*)DataStatus::READY;
                }
                psVar2 = (shared_ptr*)AddConfigID((ReturnValue*)this, (shared_ptr<NPCType>*)&local_38, arg1);
                goto LAB_100510dde;
            }
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_100510dd1;
            }
        }
        psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6560;
    LAB_100510dde:
        return psVar2;
    }

    // 0x100510e10
    auto ConfigTypePreloadPackedContainer<NPCType>::DirectFetch(int arg1) {
        if (*(int*)&this[6]._vptr != 2) {
            LogAssert("m_loadStep == BaseLoadAllConfigTypeContainer::LoadStep::DONE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      179, nullptr);
        }
        auto result;
        if (DecodeConfig(this, arg1, &result) == '\0') {
            LogAssert("exists",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      183, nullptr);
        }
        return result;
    }

    // 0x100511070
    ConfigTypePreloadPackedContainer<NPCType>::~ConfigTypePreloadPackedContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8488;
        this[16]._vptr->PrintMetrics();
        CacheReset();
        ((this + 26))->~unique_ptr();
        ((this + 22))->~VBOMapper();
        ((this + 19))->~Array();
        ((this + 17))->~shared_ptr();
        ((this + 9))->~vector();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005112c0
    void ConfigTypePreloadPackedContainer<NPCType>::CheckGroupExistence(DownloadWaitHandler& downloadWaitHandler,
                                                                        Js5Index* js5Index, unsigned int arg3,
                                                                        unsigned int arg4) {
        int* piVar1;

        if (js5Index == nullptr) {
            LogAssert("js5Index",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      365, nullptr);
        }
        if (js5Index->DoesGroupExist(arg3) == '\0') {
            piVar1 = (int*)((long)&this[7]._vptr + 4);
            *piVar1 = *piVar1 + 1;
        } else {
            downloadWaitHandler.SetExists(arg4);
        }
    }

    // 0x100511340
    void ConfigTypePreloadPackedContainer<NPCType>::CheckDecodeProgress(const Js5ArchiveSettings& js5ArchiveSettings,
                                                                        Js5Index* js5Index, unsigned int arg3,
                                                                        unsigned int arg4) {
        int iVar1;
        Array<unsigned char>* this_00;
        TextureAtlasReference* pTVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        void* pvVar4;
        PacketT<Array<unsigned char>>* this_02;
        void* pvVar5;
        size_t sVar6;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)this[1]._vptr->GetGroup(local_48, js5ArchiveSettings, arg3, (Priority*)Priority::HIGHEST, true,
                                              true) == DataStatus::READY) {
            this_00 = (Array<unsigned char>*)(*((this + 19)))[(unsigned long)arg4];
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            this_00->set_max_size(pTVar3->GetTextureAtlas(), 0);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*((this + 19)))[(unsigned long)arg4];
            pvVar4 = (void*)this_01->data();
            this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pvVar5 = (void*)this_02->GetDataPtr();
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            sVar6 = pTVar3->GetTextureAtlas();
            _memcpy(pvVar4, pvVar5, sVar6);
            iVar1 = js5Index->GetMaximumFileID(arg3);
            *(int*)((long)&this[7]._vptr + 4) = iVar1 + *(int*)((long)&this[7]._vptr + 4) + 1;
            ((DownloadWaitHandler*)(*((this + 26))).operator->())->Completed(arg4);
        }
    }

    // 0x100511670
    void ConfigTypePreloadPackedContainer<NPCType>::PageList::ClearPageList(SimpleAllocator& simpleAllocator) {
        ConfigPage* this_00;
        uint64_t* puVar1;

        unsigned long arg1 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1];
            this_00 = (ConfigPage*)*puVar1;
            if (this_00 != nullptr) {
                this_00->Clear();
                simpleAllocator.DeAllocate((this_00 + 4104));
                *puVar1 = 0;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x100511750
    void ConfigTypePreloadPackedContainer<NPCType>::ConfigPage::Clear() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1];
            if (this_00->end() != 0) {
                this_00->reset();
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005117e0
    ConfigTypePreloadPackedContainer<NPCType>* ConfigTypePreloadPackedContainer<NPCType>::FindConfigID(int arg1) const {
        unsigned int uVar2;
        shared_ptr* this_00;
        long lVar3;
        unique_ptr<ConfigTypePreloadPackedContainer<NPCType>::PageList>* puVar4;
        unsigned long uVar5;
        array<ConfigTypePreloadPackedContainer<NPCType>::ConfigPage*, 256ul>* this_01;
        long* plVar6;
        ConfigTypePreloadPackedContainer<NPCType>* pCVar7;
        unsigned long arg1_00;
        unsigned int uVar8;
        ConfigTypePreloadPackedContainer<NPCType> _vtbl* this_02;
        vector<eastl::pair<int, int>>* this_03;

        if (arg1 == -1) {
            pCVar7 = this + 17;
        } else {
            if (*(int*)&this[13]._vptr == arg1) {
                if (this[14]._vptr != nullptr) {
                    this_00 = (shared_ptr*)(*this[14]._vptr)[(unsigned long)*(unsigned int*)&this[15]._vptr];
                    if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                        this_02 = this[14]._vptr;
                        uVar8 = *(unsigned int*)&this[15]._vptr;
                    LAB_100511902:
                        pCVar7 = (ConfigTypePreloadPackedContainer<NPCType>*)(*this_02)[(unsigned long)uVar8];
                        return pCVar7;
                    }
                }
                uVar8 = *(unsigned int*)&this[13]._vptr;
                uVar2 = this[3]._vptr->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigTypePreloadPackedContainer.h",
                                507, "Previously loaded config ID %d (archive ID %u) unexpectedly missing",
                                (unsigned long)uVar8, (unsigned long)uVar2);
            }
            this_03 = (vector<eastl::pair<int, int>>*)(this + 9);
            lVar3 = this_03->size();
            pCVar7 = (ConfigTypePreloadPackedContainer<NPCType>*)PTR_NullConfigType_100ee6560;
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<NPCType>::PageList>*)(*this_03)[arg1_00];
                    lVar3 = (*puVar4).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == (arg1 & 4294901760U)) {
                        puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<NPCType>::PageList>*)(*this_03)[arg1_00];
                        this_01 = (array<ConfigTypePreloadPackedContainer<NPCType>::ConfigPage*, 256ul>*)(*puVar4)
                                      .operator->();
                        plVar6 = (long*)(*this_01)[(unsigned long)((unsigned int)arg1 >> 8 & 255)];
                        this_02 = (ConfigTypePreloadPackedContainer<NPCType> _vtbl*)*plVar6;
                        if (this_02 == nullptr) {
                            return pCVar7;
                        }
                        uVar8 = arg1 & 255;
                        goto LAB_100511902;
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar5 = this_03->size();
                } while (arg1_00 < uVar5);
            }
        }
        return pCVar7;
    }

    // 0x100511920
    uint64_t ConfigTypePreloadPackedContainer<NPCType>::DecodeConfig(int arg1, shared_ptr<NPCType>& npcType) {
        PacketT<Array<unsigned char>>* arg1_00;
        ConfigTypePreloadPackedContainer<NPCType> _vtbl* pCVar1;
        unsigned int arg1_01;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        uint8_t* puVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        void* pvVar8;
        Array<unsigned char>* this_00;
        void* pvVar9;
        size_t sVar10;
        uint64_t uVar11;
        long* plVar12;
        unsigned long arg1_03;
        Array<Array<unsigned char>>* this_01;
        shared_ptr<NPCType> local_50;
        Js5Index* local_40;

        npcType = *PTR_NullConfigType_100ee6560;
        if (arg1 < 0) {
            MakeSharedPool<NPCType, 216>::MakeShared<BaseTemplateConfigTypeList<NPCType>*&, int&>(
                (BaseTemplateConfigTypeList<NPCType>**)&local_50, (int*)(this + 1));
            npcType = local_50;
        LAB_100511aab:
        LAB_100511ab4:
            uVar11 = 1;
        } else {
            arg1_01 = this[1]._vptr->GetClientGroupID(arg1);
            uVar3 = this[1]._vptr->GetClientFileID(arg1);
            local_40 = nullptr;
            puVar6 =
                (uint8_t*)(**(void (**)(...))((this[2]._vptr)->_dtor + 24))(this[2]._vptr, &local_40, this[3]._vptr);
            if (puVar6 != DataStatus::MISSING) {
                if (local_40->DoesFileExist(arg1_01, uVar3) != '\0') {
                    if (puVar6 == DataStatus::READY) {
                        uVar3 = local_40->GetFileIndex(arg1_01, uVar3);
                        uVar4 = this[1]._vptr->GetUIHeight();
                        arg1_03 = 0;
                        if (1 < uVar4) {
                            arg1_03 = (unsigned long)arg1_01;
                        }
                        iVar5 = local_40->GetFileCount(arg1_01);
                        arg1_00 = (PacketT<Array<unsigned char>>*)(this + 22);
                        this_01 = (Array<Array<unsigned char>>*)(this + 19);
                        pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                        if (iVar5 == 1) {
                            arg1_00->Reserve(pvVar7->end());
                            arg1_00->SetPos(0);
                            pvVar8 = (void*)arg1_00->GetDataPtr();
                            this_00 = (Array<unsigned char>*)(*this_01)[arg1_03];
                            pvVar9 = (void*)(*this_00)[0];
                            pvVar7 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                            sVar10 = pvVar7->end();
                            _memcpy(pvVar8, pvVar9, sVar10);
                        } else {
                            Js5DiskFileFormat::GetGroupFileData((PacketT<Array<unsigned char> _>*)arg1_00,
                                                                (Array<unsigned char>*)pvVar7, uVar3);
                        }
                        MakeSharedPool<NPCType, 216>::MakeShared<BaseTemplateConfigTypeList<NPCType>*&, int&>(
                            (BaseTemplateConfigTypeList<NPCType>**)&local_50, (int*)(this + 1));
                        plVar12 = (long*)local_50.operator->();
                        puVar6 = (uint8_t*)(**(void (**)(...))(*plVar12 + 32))(plVar12, arg1_00);
                        if (puVar6 == DataStatus::READY) {
                            plVar12 = (long*)local_50.operator->();
                            (**(void (**)(...))(*plVar12 + 24))(plVar12);
                            pCVar1 = this[1]._vptr;
                            puVar6 = (uint8_t*)(**(void (**)(...))(pCVar1->_dtor + 72))(pCVar1, &local_50);
                            if (puVar6 == DataStatus::READY) {
                                npcType = local_50;
                            }
                        }
                        goto LAB_100511aab;
                    }
                    goto LAB_100511ab4;
                }
            }
            uVar11 = 0;
        }
        return uVar11;
    }

    // 0x100511b60
    auto ConfigTypePreloadPackedContainer<NPCType>::AddConfigID(const shared_ptr<NPCType>& npcType, int arg2) {
        auto result;
        unsigned long uVar1;
        unique_ptr<ConfigTypePreloadPackedContainer<NPCType>::PageList>* puVar2;
        long lVar3;
        array<ConfigTypePreloadPackedContainer<NPCType>::ConfigPage*, 256ul>* paVar4;
        ReturnValue* pRVar5;
        ReturnValue this;
        ReturnValue* pRVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue local_48;
        unsigned int local_38;
        unsigned int local_34;

        if (arg2 == -1) {
            pRVar6 = &result + 17;
            *pRVar6 = npcType;
        } else {
            local_34 = arg2 & 4294901760;
            pRVar6 = &result + 9;
            uVar1 = pRVar6->size();
            arg1 = 0;
            if (uVar1 != 0) {
                do {
                    puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<NPCType>::PageList>*)(*pRVar6)[arg1];
                    lVar3 = (*puVar2).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == local_34)
                        break;
                    arg1 = (unsigned long)((int)arg1 + 1);
                } while (arg1 < uVar1);
            }
            if (uVar1 == arg1) {
                local_48 =
                    std::make_unique<ConfigTypePreloadPackedContainer<NPCType>::PageList, unsigned int&>(local_34);
                eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<NPCType>::PageList>>::emplace_back<
                    std::unique_ptr<ConfigTypePreloadPackedContainer<NPCType>::PageList>>(
                    (vector<std::unique_ptr<ConfigTypePreloadPackedContainer<NPCType>::PageList>>*)pRVar6,
                    (unique_ptr<ConfigTypePreloadPackedContainer<NPCType>::PageList,
                                std::default_delete<ConfigTypePreloadPackedContainer<NPCType>::PageList> _>*)&local_48);
            }
            uVar1 = (unsigned long)(arg2 - local_34 >> 8);
            puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<NPCType>::PageList>*)(*pRVar6)[arg1];
            paVar4 = (array<ConfigTypePreloadPackedContainer<NPCType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
            pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
            this = *pRVar5;
            uVar7 = arg2 & 255U;
            if (this == (ReturnValue)0) {
                local_38 = arg2 & 255U;
                this = (ReturnValue)AllocatePageBuffer(&result);
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<NPCType>::PageList>*)(*pRVar6)[arg1];
                paVar4 = (array<ConfigTypePreloadPackedContainer<NPCType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
                pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
                *pRVar5 = this;
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<NPCType>::PageList>*)(*pRVar6)[arg1];
                lVar3 = (*puVar2).operator->();
                if (*(unsigned int*)(lVar3 + 2048) != local_34) {
                    LogAssert("m_pageListContainer[thisPageList]->m_pageListID == pageListID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigTypePreloadPackedContainer.h",
                              469, nullptr);
                }
                uVar7 = local_38;
            }
            pRVar6 = (ReturnValue*)(*this)[(unsigned long)uVar7];
            *pRVar6 = npcType;
            *(int*)((long)this + 4096) = *(int*)((long)this + 4096) + 1;
            *(int*)(&result + 13) = arg2;
            &result[14] = this;
            *(unsigned int*)(&result + 15) = uVar7;
        }
        return pRVar6;
    }

    // 0x100511e50
    ConfigPage* ConfigTypePreloadPackedContainer<NPCType>::AllocatePageBuffer() {
        AllocatedBlock local_28 = this[16]._vptr->Allocate(4128);
        void* pvVar1 = local_28.field_8;
        if (local_28.field_8 == nullptr) {
            LogAssert("block.m_address != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      534, nullptr);
        }
        new (local_28.field_8) ConfigPage();
        *(unsigned long*)((long)pvVar1 + 4120) = local_28.field_16;
        *(uint64_t*)((long)pvVar1 + 4104) = local_28._0_8_;
        *(void**)((long)pvVar1 + 4112) = local_28.field_8;
        return pvVar1;
    }

    // 0x1005121f0
    ConfigTypePreloadPackedContainer<NPCType>::PageList::PageList(unsigned int arg1) {
        uint64_t* puVar1;

        *(unsigned int*)(this + 2048) = arg1;
        *(uint32_t*)(this + 2052) = 0;
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1_00];
            *puVar1 = 0;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
    }

    // 0x1005122a0
    ConfigTypePreloadPackedContainer<NPCType>::ConfigPage::ConfigPage() : std::array<shared_ptr<NPCType>, 256ul>() {
        *(uint32_t*)(this + 4096) = 0;
        new ((this + 4104)) SimpleAllocator::AllocatedBlock();
    }

    // 0x10051c1f0
    ConfigTypePreloadPackedContainer<LocType>::ConfigTypePreloadPackedContainer(
        BaseTemplateConfigTypeList<LocType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<LocType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                           js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8478;
        new ((this + 9)) eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<LocType>::PageList>>();
        new ((this + 17)) shared_ptr();
        new ((this + 19)) Array<Array<unsigned char>>();
        new ((this + 22)) PacketT();
        ((this + 26))->unique_ptr<true, void>();
    }

    // 0x10051c360
    _x7e___2* ConfigTypePreloadPackedContainer<LocType>::LoadList() {
        unique_ptr* this_00;
        bool bVar2;
        bool cVar3;
        DownloadWaitHandler* pDVar6;
        CoordMapSquare* pCVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        ConfigTypePreloadPackedContainer<LocType> _vtbl* local_48;

        if (*(int*)&this[6]._vptr == 2) {
            return (_x7e___2*)DataStatus::READY;
        }
        ConfigTypePreloadPackedContainer<LocType> _vtbl* pCVar1 = this[2]._vptr;
        ConfigTypePreloadPackedContainer<LocType> _vtbl* js5ArchiveSettings = this[3]._vptr;
        Js5Index* local_40 = nullptr;
        _x7e___2* p_Var5 = (_x7e___2*)(**(void (**)(...))(pCVar1->_dtor + 24))(pCVar1, &local_40, js5ArchiveSettings);
        if (p_Var5 != (_x7e___2*)DataStatus::READY) {
            return p_Var5;
        }
        unsigned int local_34 = this[1]._vptr->GetUIHeight();
        int iVar4 = this[1]._vptr->GetStreamCountLastMix();
        *(unsigned int*)&this[8]._vptr = iVar4 + local_34;
        if (*(int*)&this[6]._vptr == 0) {
            this_00 = (unique_ptr*)(this + 26);
            local_48 = js5ArchiveSettings;
            cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar3) {
                LogAssert("!m_downloadHandler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "ConfigTypePreloadPackedContainer.h",
                          213, nullptr);
            }
            local_50 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_34);
            *this_00 = local_50;
            pDVar6 = (DownloadWaitHandler*)**this_00;
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                CheckGroupExistence(this, pDVar6, local_40, uVar8, 0);
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    CheckGroupExistence(this, pDVar6, local_40, uVar8, uVar8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            ((this + 19))->set_max_size((unsigned long)local_34, 0);
            *(uint32_t*)&this[6]._vptr = 1;
            iVar4 = *(int*)&this[6]._vptr;
            js5ArchiveSettings = local_48;
        } else {
            iVar4 = *(int*)&this[6]._vptr;
        }
        if (iVar4 != 1) {
            return (_x7e___2*)DataStatus::READY;
        }
        pDVar6 = (DownloadWaitHandler*)*(*((this + 26)));
        if ((this[1]._vptr != nullptr) && (cVar3 = (**(void (**)(...))(pCVar1->_dtor + 64))(pCVar1), cVar3)) {
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                cVar3 = pDVar6->IsComplete(0);
                if ((!cVar3) && (cVar3 = pDVar6->CanCheck(0), cVar3)) {
                    CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, 0);
                }
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    cVar3 = pDVar6->IsComplete(uVar8);
                    if ((!cVar3) && (cVar3 = pDVar6->CanCheck(uVar8), cVar3)) {
                        CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, uVar8);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            if (*(unsigned int*)&this[8]._vptr <= *(unsigned int*)((long)&this[7]._vptr + 4)) {
                ((this + 26))->reset(nullptr);
                *(uint32_t*)&this[6]._vptr = 2;
                p_Var5 = (_x7e___2*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->_x7e___2 = p_Var5;
                bVar2 = true;
                goto LAB_10051c5d6;
            }
        }
        bVar2 = false;
        p_Var5 = (_x7e___2*)DataStatus::NOTLOADED;
    LAB_10051c5d6:
        if (bVar2) {
            return (_x7e___2*)DataStatus::READY;
        }
        return p_Var5;
    }

    // 0x10051c620
    void ConfigTypePreloadPackedContainer<LocType>::CacheReset() {
        unique_ptr<ConfigTypePreloadPackedContainer<LocType>::PageList>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (unique_ptr<ConfigTypePreloadPackedContainer<LocType>::PageList>*)(*this_00)[arg1];
                ((PageList*)this_01->get())->ClearPageList(*this[16]._vptr);
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        this_00->clear();
        this[14]._vptr = nullptr;
        *(uint32_t*)&this[15]._vptr = 0;
        *(uint32_t*)&this[13]._vptr = 4294967295;
    }

    // 0x10051c6b0
    void ConfigTypePreloadPackedContainer<LocType>::CacheClean(unsigned int arg1) {
        LoadList** ppLVar1;
        ConfigTypePreloadPackedContainer<LocType> _vtbl* this_01;
        unsigned long uVar4;
        unique_ptr<ConfigTypePreloadPackedContainer<LocType>::PageList>* this_02;
        array<ConfigTypePreloadPackedContainer<LocType>::ConfigPage*, 256ul>* this_03;
        uint64_t* puVar5;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_04;
        unsigned long arg1_00;
        unsigned int uVar6;
        int iVar7;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_02 = (unique_ptr<ConfigTypePreloadPackedContainer<LocType>::PageList>*)(*this_00)[arg1_00];
                this_03 = (array<ConfigTypePreloadPackedContainer<LocType>::ConfigPage*, 256ul>*)this_02->get();
                uVar6 = *(unsigned int*)(this_03 + 2052);
                iVar7 = 16;
                do {
                    puVar5 = (uint64_t*)(*this_03)[(unsigned long)(uVar6 >> 8)];
                    this_01 = (ConfigTypePreloadPackedContainer<LocType> _vtbl*)*puVar5;
                    if (this_01 != nullptr) {
                        this_04 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*this_01)[(
                            unsigned long)(uVar6 & 255)];
                        if (this_04->unique() != '\0') {
                            this_04->reset();
                            if ((this_01 == this[14]._vptr) && ((uVar6 & 255) == *(unsigned int*)&this[15]._vptr)) {
                                this[14]._vptr = nullptr;
                                *(uint32_t*)&this[15]._vptr = 0;
                                *(uint32_t*)&this[13]._vptr = 4294967295;
                            }
                            ppLVar1 = &this_01[51].LoadList;
                            *(int*)ppLVar1 = *(int*)ppLVar1 - 1;
                            if (*(int*)ppLVar1 == 0) {
                                this[16]._vptr->DeAllocate(&this_01[51].CacheReset);
                                *puVar5 = 0;
                            }
                        }
                    }
                    uVar6 = uVar6 + 1 & 65535;
                    iVar7 = iVar7 - 1;
                } while (iVar7 != 0);
                *(unsigned int*)(this_03 + 2052) = uVar6;
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x10051c820
    shared_ptr* ConfigTypePreloadPackedContainer<LocType>::List(int arg1, const DataStatus** arg2) {
        shared_ptr* psVar2;
        uint8_t** ppuVar3;

        if (*(int*)&this[6]._vptr != 2) {
            if (arg2 == nullptr) {
                return (shared_ptr*)PTR_NullConfigType_100ee6550;
            }
            ppuVar3 = &DataStatus::NOTLOADED;
            psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6550;
        LAB_10051c87b:
            *arg2 = (DataStatus*)*ppuVar3;
            return psVar2;
        }
        psVar2 = (shared_ptr*)FindConfigID(this, arg1);
        if (shared_ptr::operator_cast_to_bool(psVar2)) {
            if (arg2 == nullptr) {
                return psVar2;
            }
            ppuVar3 = &DataStatus::READY;
            goto LAB_10051c87b;
        }
        shared_ptr local_38;
        if (!(DecodeConfig(this, arg1, (shared_ptr<LocType>*)&local_38))) {
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::MISSING;
            LAB_10051c8f1:
                *arg2 = (DataStatus*)*ppuVar3;
            }
        } else {
            if (shared_ptr::operator_cast_to_bool(&local_38)) {
                if (arg2 != nullptr) {
                    *arg2 = (DataStatus*)DataStatus::READY;
                }
                psVar2 = (shared_ptr*)AddConfigID((ReturnValue*)this, (shared_ptr<LocType>*)&local_38, arg1);
                goto LAB_10051c8fe;
            }
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_10051c8f1;
            }
        }
        psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6550;
    LAB_10051c8fe:
        return psVar2;
    }

    // 0x10051c930
    auto ConfigTypePreloadPackedContainer<LocType>::DirectFetch(int arg1) {
        if (*(int*)&this[6]._vptr != 2) {
            LogAssert("m_loadStep == BaseLoadAllConfigTypeContainer::LoadStep::DONE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      179, nullptr);
        }
        auto result;
        if (DecodeConfig(this, arg1, &result) == '\0') {
            LogAssert("exists",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      183, nullptr);
        }
        return result;
    }

    // 0x10051cb90
    ConfigTypePreloadPackedContainer<LocType>::~ConfigTypePreloadPackedContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8478;
        this[16]._vptr->PrintMetrics();
        CacheReset();
        ((this + 26))->~unique_ptr();
        ((this + 22))->~VBOMapper();
        ((this + 19))->~Array();
        ((this + 17))->~shared_ptr();
        ((this + 9))->~vector();
        ((this + 5))->~AutoSingleton();
    }

    // 0x10051cde0
    void ConfigTypePreloadPackedContainer<LocType>::CheckGroupExistence(DownloadWaitHandler& downloadWaitHandler,
                                                                        Js5Index* js5Index, unsigned int arg3,
                                                                        unsigned int arg4) {
        int* piVar1;

        if (js5Index == nullptr) {
            LogAssert("js5Index",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      365, nullptr);
        }
        if (js5Index->DoesGroupExist(arg3) == '\0') {
            piVar1 = (int*)((long)&this[7]._vptr + 4);
            *piVar1 = *piVar1 + 1;
        } else {
            downloadWaitHandler.SetExists(arg4);
        }
    }

    // 0x10051ce60
    void ConfigTypePreloadPackedContainer<LocType>::CheckDecodeProgress(const Js5ArchiveSettings& js5ArchiveSettings,
                                                                        Js5Index* js5Index, unsigned int arg3,
                                                                        unsigned int arg4) {
        int iVar1;
        Array<unsigned char>* this_00;
        TextureAtlasReference* pTVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        void* pvVar4;
        PacketT<Array<unsigned char>>* this_02;
        void* pvVar5;
        size_t sVar6;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)this[1]._vptr->GetGroup(local_48, js5ArchiveSettings, arg3, (Priority*)Priority::HIGHEST, true,
                                              true) == DataStatus::READY) {
            this_00 = (Array<unsigned char>*)(*((this + 19)))[(unsigned long)arg4];
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            this_00->set_max_size(pTVar3->GetTextureAtlas(), 0);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*((this + 19)))[(unsigned long)arg4];
            pvVar4 = (void*)this_01->data();
            this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pvVar5 = (void*)this_02->GetDataPtr();
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            sVar6 = pTVar3->GetTextureAtlas();
            _memcpy(pvVar4, pvVar5, sVar6);
            iVar1 = js5Index->GetMaximumFileID(arg3);
            *(int*)((long)&this[7]._vptr + 4) = iVar1 + *(int*)((long)&this[7]._vptr + 4) + 1;
            ((DownloadWaitHandler*)(*((this + 26))).operator->())->Completed(arg4);
        }
    }

    // 0x10051d190
    void ConfigTypePreloadPackedContainer<LocType>::PageList::ClearPageList(SimpleAllocator& simpleAllocator) {
        ConfigPage* this_00;
        uint64_t* puVar1;

        unsigned long arg1 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1];
            this_00 = (ConfigPage*)*puVar1;
            if (this_00 != nullptr) {
                this_00->Clear();
                simpleAllocator.DeAllocate((this_00 + 4104));
                *puVar1 = 0;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x10051d270
    void ConfigTypePreloadPackedContainer<LocType>::ConfigPage::Clear() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1];
            if (this_00->end() != 0) {
                this_00->reset();
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x10051d300
    ConfigTypePreloadPackedContainer<LocType>* ConfigTypePreloadPackedContainer<LocType>::FindConfigID(int arg1) const {
        unsigned int uVar2;
        shared_ptr* this_00;
        long lVar3;
        unique_ptr<ConfigTypePreloadPackedContainer<LocType>::PageList>* puVar4;
        unsigned long uVar5;
        array<ConfigTypePreloadPackedContainer<LocType>::ConfigPage*, 256ul>* this_01;
        long* plVar6;
        ConfigTypePreloadPackedContainer<LocType>* pCVar7;
        unsigned long arg1_00;
        unsigned int uVar8;
        ConfigTypePreloadPackedContainer<LocType> _vtbl* this_02;
        vector<eastl::pair<int, int>>* this_03;

        if (arg1 == -1) {
            pCVar7 = this + 17;
        } else {
            if (*(int*)&this[13]._vptr == arg1) {
                if (this[14]._vptr != nullptr) {
                    this_00 = (shared_ptr*)(*this[14]._vptr)[(unsigned long)*(unsigned int*)&this[15]._vptr];
                    if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                        this_02 = this[14]._vptr;
                        uVar8 = *(unsigned int*)&this[15]._vptr;
                    LAB_10051d422:
                        pCVar7 = (ConfigTypePreloadPackedContainer<LocType>*)(*this_02)[(unsigned long)uVar8];
                        return pCVar7;
                    }
                }
                uVar8 = *(unsigned int*)&this[13]._vptr;
                uVar2 = this[3]._vptr->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigTypePreloadPackedContainer.h",
                                507, "Previously loaded config ID %d (archive ID %u) unexpectedly missing",
                                (unsigned long)uVar8, (unsigned long)uVar2);
            }
            this_03 = (vector<eastl::pair<int, int>>*)(this + 9);
            lVar3 = this_03->size();
            pCVar7 = (ConfigTypePreloadPackedContainer<LocType>*)PTR_NullConfigType_100ee6550;
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<LocType>::PageList>*)(*this_03)[arg1_00];
                    lVar3 = (*puVar4).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == (arg1 & 4294901760U)) {
                        puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<LocType>::PageList>*)(*this_03)[arg1_00];
                        this_01 = (array<ConfigTypePreloadPackedContainer<LocType>::ConfigPage*, 256ul>*)(*puVar4)
                                      .operator->();
                        plVar6 = (long*)(*this_01)[(unsigned long)((unsigned int)arg1 >> 8 & 255)];
                        this_02 = (ConfigTypePreloadPackedContainer<LocType> _vtbl*)*plVar6;
                        if (this_02 == nullptr) {
                            return pCVar7;
                        }
                        uVar8 = arg1 & 255;
                        goto LAB_10051d422;
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar5 = this_03->size();
                } while (arg1_00 < uVar5);
            }
        }
        return pCVar7;
    }

    // 0x10051d440
    uint64_t ConfigTypePreloadPackedContainer<LocType>::DecodeConfig(int arg1, shared_ptr<LocType>& locType) {
        PacketT<Array<unsigned char>>* arg1_00;
        ConfigTypePreloadPackedContainer<LocType> _vtbl* pCVar1;
        unsigned int arg1_01;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        uint8_t* puVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        void* pvVar8;
        Array<unsigned char>* this_00;
        void* pvVar9;
        size_t sVar10;
        uint64_t uVar11;
        long* plVar12;
        unsigned long arg1_03;
        Array<Array<unsigned char>>* this_01;
        shared_ptr<LocType> local_50;
        Js5Index* local_40;

        locType = *PTR_NullConfigType_100ee6550;
        if (arg1 < 0) {
            MakeSharedPool<LocType, 256>::MakeShared<BaseTemplateConfigTypeList<LocType>*&, int&>(
                (BaseTemplateConfigTypeList<LocType>**)&local_50, (int*)(this + 1));
            locType = local_50;
        LAB_10051d5cb:
        LAB_10051d5d4:
            uVar11 = 1;
        } else {
            arg1_01 = this[1]._vptr->GetClientGroupID(arg1);
            uVar3 = this[1]._vptr->GetClientFileID(arg1);
            local_40 = nullptr;
            puVar6 =
                (uint8_t*)(**(void (**)(...))((this[2]._vptr)->_dtor + 24))(this[2]._vptr, &local_40, this[3]._vptr);
            if (puVar6 != DataStatus::MISSING) {
                if (local_40->DoesFileExist(arg1_01, uVar3) != '\0') {
                    if (puVar6 == DataStatus::READY) {
                        uVar3 = local_40->GetFileIndex(arg1_01, uVar3);
                        uVar4 = this[1]._vptr->GetUIHeight();
                        arg1_03 = 0;
                        if (1 < uVar4) {
                            arg1_03 = (unsigned long)arg1_01;
                        }
                        iVar5 = local_40->GetFileCount(arg1_01);
                        arg1_00 = (PacketT<Array<unsigned char>>*)(this + 22);
                        this_01 = (Array<Array<unsigned char>>*)(this + 19);
                        pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                        if (iVar5 == 1) {
                            arg1_00->Reserve(pvVar7->end());
                            arg1_00->SetPos(0);
                            pvVar8 = (void*)arg1_00->GetDataPtr();
                            this_00 = (Array<unsigned char>*)(*this_01)[arg1_03];
                            pvVar9 = (void*)(*this_00)[0];
                            pvVar7 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                            sVar10 = pvVar7->end();
                            _memcpy(pvVar8, pvVar9, sVar10);
                        } else {
                            Js5DiskFileFormat::GetGroupFileData((PacketT<Array<unsigned char> _>*)arg1_00,
                                                                (Array<unsigned char>*)pvVar7, uVar3);
                        }
                        MakeSharedPool<LocType, 256>::MakeShared<BaseTemplateConfigTypeList<LocType>*&, int&>(
                            (BaseTemplateConfigTypeList<LocType>**)&local_50, (int*)(this + 1));
                        plVar12 = (long*)local_50.operator->();
                        puVar6 = (uint8_t*)(**(void (**)(...))(*plVar12 + 32))(plVar12, arg1_00);
                        if (puVar6 == DataStatus::READY) {
                            plVar12 = (long*)local_50.operator->();
                            (**(void (**)(...))(*plVar12 + 24))(plVar12);
                            pCVar1 = this[1]._vptr;
                            puVar6 = (uint8_t*)(**(void (**)(...))(pCVar1->_dtor + 72))(pCVar1, &local_50);
                            if (puVar6 == DataStatus::READY) {
                                locType = local_50;
                            }
                        }
                        goto LAB_10051d5cb;
                    }
                    goto LAB_10051d5d4;
                }
            }
            uVar11 = 0;
        }
        return uVar11;
    }

    // 0x10051d680
    auto ConfigTypePreloadPackedContainer<LocType>::AddConfigID(const shared_ptr<LocType>& locType, int arg2) {
        auto result;
        unsigned long uVar1;
        unique_ptr<ConfigTypePreloadPackedContainer<LocType>::PageList>* puVar2;
        long lVar3;
        array<ConfigTypePreloadPackedContainer<LocType>::ConfigPage*, 256ul>* paVar4;
        ReturnValue* pRVar5;
        ReturnValue this;
        ReturnValue* pRVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue local_48;
        unsigned int local_38;
        unsigned int local_34;

        if (arg2 == -1) {
            pRVar6 = &result + 17;
            *pRVar6 = locType;
        } else {
            local_34 = arg2 & 4294901760;
            pRVar6 = &result + 9;
            uVar1 = pRVar6->size();
            arg1 = 0;
            if (uVar1 != 0) {
                do {
                    puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<LocType>::PageList>*)(*pRVar6)[arg1];
                    lVar3 = (*puVar2).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == local_34)
                        break;
                    arg1 = (unsigned long)((int)arg1 + 1);
                } while (arg1 < uVar1);
            }
            if (uVar1 == arg1) {
                local_48 =
                    std::make_unique<ConfigTypePreloadPackedContainer<LocType>::PageList, unsigned int&>(local_34);
                eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<LocType>::PageList>>::emplace_back<
                    std::unique_ptr<ConfigTypePreloadPackedContainer<LocType>::PageList>>(
                    (vector<std::unique_ptr<ConfigTypePreloadPackedContainer<LocType>::PageList>>*)pRVar6,
                    (unique_ptr<ConfigTypePreloadPackedContainer<LocType>::PageList,
                                std::default_delete<ConfigTypePreloadPackedContainer<LocType>::PageList> _>*)&local_48);
            }
            uVar1 = (unsigned long)(arg2 - local_34 >> 8);
            puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<LocType>::PageList>*)(*pRVar6)[arg1];
            paVar4 = (array<ConfigTypePreloadPackedContainer<LocType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
            pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
            this = *pRVar5;
            uVar7 = arg2 & 255U;
            if (this == (ReturnValue)0) {
                local_38 = arg2 & 255U;
                this = (ReturnValue)AllocatePageBuffer(&result);
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<LocType>::PageList>*)(*pRVar6)[arg1];
                paVar4 = (array<ConfigTypePreloadPackedContainer<LocType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
                pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
                *pRVar5 = this;
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<LocType>::PageList>*)(*pRVar6)[arg1];
                lVar3 = (*puVar2).operator->();
                if (*(unsigned int*)(lVar3 + 2048) != local_34) {
                    LogAssert("m_pageListContainer[thisPageList]->m_pageListID == pageListID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigTypePreloadPackedContainer.h",
                              469, nullptr);
                }
                uVar7 = local_38;
            }
            pRVar6 = (ReturnValue*)(*this)[(unsigned long)uVar7];
            *pRVar6 = locType;
            *(int*)((long)this + 4096) = *(int*)((long)this + 4096) + 1;
            *(int*)(&result + 13) = arg2;
            &result[14] = this;
            *(unsigned int*)(&result + 15) = uVar7;
        }
        return pRVar6;
    }

    // 0x10051d9c0
    ConfigPage* ConfigTypePreloadPackedContainer<LocType>::AllocatePageBuffer() {
        AllocatedBlock local_28 = this[16]._vptr->Allocate(4128);
        void* pvVar1 = local_28.field_8;
        if (local_28.field_8 == nullptr) {
            LogAssert("block.m_address != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      534, nullptr);
        }
        new (local_28.field_8) ConfigPage();
        *(unsigned long*)((long)pvVar1 + 4120) = local_28.field_16;
        *(uint64_t*)((long)pvVar1 + 4104) = local_28._0_8_;
        *(void**)((long)pvVar1 + 4112) = local_28.field_8;
        return pvVar1;
    }

    // 0x10051dd60
    ConfigTypePreloadPackedContainer<LocType>::PageList::PageList(unsigned int arg1) {
        uint64_t* puVar1;

        *(unsigned int*)(this + 2048) = arg1;
        *(uint32_t*)(this + 2052) = 0;
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1_00];
            *puVar1 = 0;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
    }

    // 0x10051de10
    ConfigTypePreloadPackedContainer<LocType>::ConfigPage::ConfigPage() : std::array<shared_ptr<LocType>, 256ul>() {
        *(uint32_t*)(this + 4096) = 0;
        new ((this + 4104)) SimpleAllocator::AllocatedBlock();
    }

    // 0x100574570
    ConfigTypePreloadPackedContainer<ParamType>::ConfigTypePreloadPackedContainer(
        BaseTemplateConfigTypeList<ParamType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<ParamType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                             js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee84c0;
        new ((this + 9)) eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<ParamType>::PageList>>();
        new ((this + 17)) shared_ptr();
        new ((this + 19)) Array<Array<unsigned char>>();
        new ((this + 22)) PacketT();
        ((this + 26))->unique_ptr<true, void>();
    }

    // 0x1005746d0
    _x7e___2* ConfigTypePreloadPackedContainer<ParamType>::LoadList() {
        unique_ptr* this_00;
        bool bVar2;
        bool cVar3;
        DownloadWaitHandler* pDVar6;
        CoordMapSquare* pCVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        ConfigTypePreloadPackedContainer<ParamType> _vtbl* local_48;

        if (*(int*)&this[6]._vptr == 2) {
            return (_x7e___2*)DataStatus::READY;
        }
        ConfigTypePreloadPackedContainer<ParamType> _vtbl* pCVar1 = this[2]._vptr;
        ConfigTypePreloadPackedContainer<ParamType> _vtbl* js5ArchiveSettings = this[3]._vptr;
        Js5Index* local_40 = nullptr;
        _x7e___2* p_Var5 = (_x7e___2*)(**(void (**)(...))(pCVar1->_dtor + 24))(pCVar1, &local_40, js5ArchiveSettings);
        if (p_Var5 != (_x7e___2*)DataStatus::READY) {
            return p_Var5;
        }
        unsigned int local_34 = this[1]._vptr->GetUIHeight();
        int iVar4 = this[1]._vptr->GetStreamCountLastMix();
        *(unsigned int*)&this[8]._vptr = iVar4 + local_34;
        if (*(int*)&this[6]._vptr == 0) {
            this_00 = (unique_ptr*)(this + 26);
            local_48 = js5ArchiveSettings;
            cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar3) {
                LogAssert("!m_downloadHandler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "ConfigTypePreloadPackedContainer.h",
                          213, nullptr);
            }
            local_50 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_34);
            *this_00 = local_50;
            pDVar6 = (DownloadWaitHandler*)**this_00;
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                CheckGroupExistence(this, pDVar6, local_40, uVar8, 0);
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    CheckGroupExistence(this, pDVar6, local_40, uVar8, uVar8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            ((this + 19))->set_max_size((unsigned long)local_34, 0);
            *(uint32_t*)&this[6]._vptr = 1;
            iVar4 = *(int*)&this[6]._vptr;
            js5ArchiveSettings = local_48;
        } else {
            iVar4 = *(int*)&this[6]._vptr;
        }
        if (iVar4 != 1) {
            return (_x7e___2*)DataStatus::READY;
        }
        pDVar6 = (DownloadWaitHandler*)*(*((this + 26)));
        if ((this[1]._vptr != nullptr) && (cVar3 = (**(void (**)(...))(pCVar1->_dtor + 64))(pCVar1), cVar3)) {
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                cVar3 = pDVar6->IsComplete(0);
                if ((!cVar3) && (cVar3 = pDVar6->CanCheck(0), cVar3)) {
                    CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, 0);
                }
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    cVar3 = pDVar6->IsComplete(uVar8);
                    if ((!cVar3) && (cVar3 = pDVar6->CanCheck(uVar8), cVar3)) {
                        CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, uVar8);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            if (*(unsigned int*)&this[8]._vptr <= *(unsigned int*)((long)&this[7]._vptr + 4)) {
                ((this + 26))->reset(nullptr);
                *(uint32_t*)&this[6]._vptr = 2;
                p_Var5 = (_x7e___2*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->_x7e___2 = p_Var5;
                bVar2 = true;
                goto LAB_100574946;
            }
        }
        bVar2 = false;
        p_Var5 = (_x7e___2*)DataStatus::NOTLOADED;
    LAB_100574946:
        if (bVar2) {
            return (_x7e___2*)DataStatus::READY;
        }
        return p_Var5;
    }

    // 0x100574990
    void ConfigTypePreloadPackedContainer<ParamType>::CacheReset() {
        unique_ptr<ConfigTypePreloadPackedContainer<ParamType>::PageList>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (unique_ptr<ConfigTypePreloadPackedContainer<ParamType>::PageList>*)(*this_00)[arg1];
                ((PageList*)this_01->get())->ClearPageList(*this[16]._vptr);
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        this_00->clear();
        this[14]._vptr = nullptr;
        *(uint32_t*)&this[15]._vptr = 0;
        *(uint32_t*)&this[13]._vptr = 4294967295;
    }

    // 0x100574a20
    void ConfigTypePreloadPackedContainer<ParamType>::CacheClean(unsigned int arg1) {
        LoadList** ppLVar1;
        ConfigTypePreloadPackedContainer<ParamType> _vtbl* this_01;
        unsigned long uVar4;
        unique_ptr<ConfigTypePreloadPackedContainer<ParamType>::PageList>* this_02;
        array<ConfigTypePreloadPackedContainer<ParamType>::ConfigPage*, 256ul>* this_03;
        uint64_t* puVar5;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_04;
        unsigned long arg1_00;
        unsigned int uVar6;
        int iVar7;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_02 = (unique_ptr<ConfigTypePreloadPackedContainer<ParamType>::PageList>*)(*this_00)[arg1_00];
                this_03 = (array<ConfigTypePreloadPackedContainer<ParamType>::ConfigPage*, 256ul>*)this_02->get();
                uVar6 = *(unsigned int*)(this_03 + 2052);
                iVar7 = 16;
                do {
                    puVar5 = (uint64_t*)(*this_03)[(unsigned long)(uVar6 >> 8)];
                    this_01 = (ConfigTypePreloadPackedContainer<ParamType> _vtbl*)*puVar5;
                    if (this_01 != nullptr) {
                        this_04 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*this_01)[(
                            unsigned long)(uVar6 & 255)];
                        if (this_04->unique() != '\0') {
                            this_04->reset();
                            if ((this_01 == this[14]._vptr) && ((uVar6 & 255) == *(unsigned int*)&this[15]._vptr)) {
                                this[14]._vptr = nullptr;
                                *(uint32_t*)&this[15]._vptr = 0;
                                *(uint32_t*)&this[13]._vptr = 4294967295;
                            }
                            ppLVar1 = &this_01[51].LoadList;
                            *(int*)ppLVar1 = *(int*)ppLVar1 - 1;
                            if (*(int*)ppLVar1 == 0) {
                                this[16]._vptr->DeAllocate(&this_01[51].CacheReset);
                                *puVar5 = 0;
                            }
                        }
                    }
                    uVar6 = uVar6 + 1 & 65535;
                    iVar7 = iVar7 - 1;
                } while (iVar7 != 0);
                *(unsigned int*)(this_03 + 2052) = uVar6;
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x100574b90
    shared_ptr* ConfigTypePreloadPackedContainer<ParamType>::List(int arg1, const DataStatus** arg2) {
        shared_ptr* psVar2;
        uint8_t** ppuVar3;

        if (*(int*)&this[6]._vptr != 2) {
            if (arg2 == nullptr) {
                return (shared_ptr*)PTR_NullConfigType_100ee6598;
            }
            ppuVar3 = &DataStatus::NOTLOADED;
            psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6598;
        LAB_100574beb:
            *arg2 = (DataStatus*)*ppuVar3;
            return psVar2;
        }
        psVar2 = (shared_ptr*)FindConfigID(this, arg1);
        if (shared_ptr::operator_cast_to_bool(psVar2)) {
            if (arg2 == nullptr) {
                return psVar2;
            }
            ppuVar3 = &DataStatus::READY;
            goto LAB_100574beb;
        }
        shared_ptr local_38;
        if (!(DecodeConfig(this, arg1, (shared_ptr<ParamType>*)&local_38))) {
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::MISSING;
            LAB_100574c61:
                *arg2 = (DataStatus*)*ppuVar3;
            }
        } else {
            if (shared_ptr::operator_cast_to_bool(&local_38)) {
                if (arg2 != nullptr) {
                    *arg2 = (DataStatus*)DataStatus::READY;
                }
                psVar2 = (shared_ptr*)AddConfigID((ReturnValue*)this, (shared_ptr<ParamType>*)&local_38, arg1);
                goto LAB_100574c6e;
            }
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_100574c61;
            }
        }
        psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6598;
    LAB_100574c6e:
        return psVar2;
    }

    // 0x100574ca0
    auto ConfigTypePreloadPackedContainer<ParamType>::DirectFetch(int arg1) {
        if (*(int*)&this[6]._vptr != 2) {
            LogAssert("m_loadStep == BaseLoadAllConfigTypeContainer::LoadStep::DONE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      179, nullptr);
        }
        auto result;
        if (DecodeConfig(this, arg1, &result) == '\0') {
            LogAssert("exists",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      183, nullptr);
        }
        return result;
    }

    // 0x100574eb0
    ConfigTypePreloadPackedContainer<ParamType>::~ConfigTypePreloadPackedContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee84c0;
        this[16]._vptr->PrintMetrics();
        CacheReset();
        ((this + 26))->~unique_ptr();
        ((this + 22))->~VBOMapper();
        ((this + 19))->~Array();
        ((this + 17))->~shared_ptr();
        ((this + 9))->~vector();
        ((this + 5))->~AutoSingleton();
    }

    // 0x100575000
    void ConfigTypePreloadPackedContainer<ParamType>::CheckGroupExistence(DownloadWaitHandler& downloadWaitHandler,
                                                                          Js5Index* js5Index, unsigned int arg3,
                                                                          unsigned int arg4) {
        int* piVar1;

        if (js5Index == nullptr) {
            LogAssert("js5Index",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      365, nullptr);
        }
        if (js5Index->DoesGroupExist(arg3) == '\0') {
            piVar1 = (int*)((long)&this[7]._vptr + 4);
            *piVar1 = *piVar1 + 1;
        } else {
            downloadWaitHandler.SetExists(arg4);
        }
    }

    // 0x100575080
    void ConfigTypePreloadPackedContainer<ParamType>::CheckDecodeProgress(const Js5ArchiveSettings& js5ArchiveSettings,
                                                                          Js5Index* js5Index, unsigned int arg3,
                                                                          unsigned int arg4) {
        int iVar1;
        Array<unsigned char>* this_00;
        TextureAtlasReference* pTVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        void* pvVar4;
        PacketT<Array<unsigned char>>* this_02;
        void* pvVar5;
        size_t sVar6;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)this[1]._vptr->GetGroup(local_48, js5ArchiveSettings, arg3, (Priority*)Priority::HIGHEST, true,
                                              true) == DataStatus::READY) {
            this_00 = (Array<unsigned char>*)(*((this + 19)))[(unsigned long)arg4];
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            this_00->set_max_size(pTVar3->GetTextureAtlas(), 0);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*((this + 19)))[(unsigned long)arg4];
            pvVar4 = (void*)this_01->data();
            this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pvVar5 = (void*)this_02->GetDataPtr();
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            sVar6 = pTVar3->GetTextureAtlas();
            _memcpy(pvVar4, pvVar5, sVar6);
            iVar1 = js5Index->GetMaximumFileID(arg3);
            *(int*)((long)&this[7]._vptr + 4) = iVar1 + *(int*)((long)&this[7]._vptr + 4) + 1;
            ((DownloadWaitHandler*)(*((this + 26))).operator->())->Completed(arg4);
        }
    }

    // 0x100575360
    void ConfigTypePreloadPackedContainer<ParamType>::PageList::ClearPageList(SimpleAllocator& simpleAllocator) {
        ConfigPage* this_00;
        uint64_t* puVar1;

        unsigned long arg1 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1];
            this_00 = (ConfigPage*)*puVar1;
            if (this_00 != nullptr) {
                this_00->Clear();
                simpleAllocator.DeAllocate((this_00 + 4104));
                *puVar1 = 0;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x100575440
    void ConfigTypePreloadPackedContainer<ParamType>::ConfigPage::Clear() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1];
            if (this_00->end() != 0) {
                this_00->reset();
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x100575570
    ConfigTypePreloadPackedContainer<ParamType>*
    ConfigTypePreloadPackedContainer<ParamType>::FindConfigID(int arg1) const {
        unsigned int uVar2;
        shared_ptr* this_00;
        long lVar3;
        unique_ptr<ConfigTypePreloadPackedContainer<ParamType>::PageList>* puVar4;
        unsigned long uVar5;
        array<ConfigTypePreloadPackedContainer<ParamType>::ConfigPage*, 256ul>* this_01;
        long* plVar6;
        ConfigTypePreloadPackedContainer<ParamType>* pCVar7;
        unsigned long arg1_00;
        unsigned int uVar8;
        ConfigTypePreloadPackedContainer<ParamType> _vtbl* this_02;
        vector<eastl::pair<int, int>>* this_03;

        if (arg1 == -1) {
            pCVar7 = this + 17;
        } else {
            if (*(int*)&this[13]._vptr == arg1) {
                if (this[14]._vptr != nullptr) {
                    this_00 = (shared_ptr*)(*this[14]._vptr)[(unsigned long)*(unsigned int*)&this[15]._vptr];
                    if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                        this_02 = this[14]._vptr;
                        uVar8 = *(unsigned int*)&this[15]._vptr;
                    LAB_100575692:
                        pCVar7 = (ConfigTypePreloadPackedContainer<ParamType>*)(*this_02)[(unsigned long)uVar8];
                        return pCVar7;
                    }
                }
                uVar8 = *(unsigned int*)&this[13]._vptr;
                uVar2 = this[3]._vptr->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigTypePreloadPackedContainer.h",
                                507, "Previously loaded config ID %d (archive ID %u) unexpectedly missing",
                                (unsigned long)uVar8, (unsigned long)uVar2);
            }
            this_03 = (vector<eastl::pair<int, int>>*)(this + 9);
            lVar3 = this_03->size();
            pCVar7 = (ConfigTypePreloadPackedContainer<ParamType>*)PTR_NullConfigType_100ee6598;
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<ParamType>::PageList>*)(*this_03)[arg1_00];
                    lVar3 = (*puVar4).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == (arg1 & 4294901760U)) {
                        puVar4 =
                            (unique_ptr<ConfigTypePreloadPackedContainer<ParamType>::PageList>*)(*this_03)[arg1_00];
                        this_01 = (array<ConfigTypePreloadPackedContainer<ParamType>::ConfigPage*, 256ul>*)(*puVar4)
                                      .operator->();
                        plVar6 = (long*)(*this_01)[(unsigned long)((unsigned int)arg1 >> 8 & 255)];
                        this_02 = (ConfigTypePreloadPackedContainer<ParamType> _vtbl*)*plVar6;
                        if (this_02 == nullptr) {
                            return pCVar7;
                        }
                        uVar8 = arg1 & 255;
                        goto LAB_100575692;
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar5 = this_03->size();
                } while (arg1_00 < uVar5);
            }
        }
        return pCVar7;
    }

    // 0x1005756b0
    uint64_t ConfigTypePreloadPackedContainer<ParamType>::DecodeConfig(int arg1, shared_ptr<ParamType>& paramType) {
        PacketT<Array<unsigned char>>* arg1_00;
        ConfigTypePreloadPackedContainer<ParamType> _vtbl* pCVar1;
        unsigned int arg1_01;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        uint8_t* puVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        void* pvVar8;
        Array<unsigned char>* this_00;
        void* pvVar9;
        size_t sVar10;
        uint64_t uVar11;
        long* plVar12;
        unsigned long arg1_03;
        Array<Array<unsigned char>>* this_01;
        shared_ptr<ParamType> local_50;
        Js5Index* local_40;

        paramType = *PTR_NullConfigType_100ee6598;
        if (arg1 < 0) {
            MakeSharedPool<ParamType, 640>::MakeShared<BaseTemplateConfigTypeList<ParamType>*&, int&>(
                (BaseTemplateConfigTypeList<ParamType>**)&local_50, (int*)(this + 1));
            paramType = local_50;
        LAB_10057583b:
        LAB_100575844:
            uVar11 = 1;
        } else {
            arg1_01 = this[1]._vptr->GetClientGroupID(arg1);
            uVar3 = this[1]._vptr->GetClientFileID(arg1);
            local_40 = nullptr;
            puVar6 =
                (uint8_t*)(**(void (**)(...))((this[2]._vptr)->_dtor + 24))(this[2]._vptr, &local_40, this[3]._vptr);
            if (puVar6 != DataStatus::MISSING) {
                if (local_40->DoesFileExist(arg1_01, uVar3) != '\0') {
                    if (puVar6 == DataStatus::READY) {
                        uVar3 = local_40->GetFileIndex(arg1_01, uVar3);
                        uVar4 = this[1]._vptr->GetUIHeight();
                        arg1_03 = 0;
                        if (1 < uVar4) {
                            arg1_03 = (unsigned long)arg1_01;
                        }
                        iVar5 = local_40->GetFileCount(arg1_01);
                        arg1_00 = (PacketT<Array<unsigned char>>*)(this + 22);
                        this_01 = (Array<Array<unsigned char>>*)(this + 19);
                        pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                        if (iVar5 == 1) {
                            arg1_00->Reserve(pvVar7->end());
                            arg1_00->SetPos(0);
                            pvVar8 = (void*)arg1_00->GetDataPtr();
                            this_00 = (Array<unsigned char>*)(*this_01)[arg1_03];
                            pvVar9 = (void*)(*this_00)[0];
                            pvVar7 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                            sVar10 = pvVar7->end();
                            _memcpy(pvVar8, pvVar9, sVar10);
                        } else {
                            Js5DiskFileFormat::GetGroupFileData((PacketT<Array<unsigned char> _>*)arg1_00,
                                                                (Array<unsigned char>*)pvVar7, uVar3);
                        }
                        MakeSharedPool<ParamType, 640>::MakeShared<BaseTemplateConfigTypeList<ParamType>*&, int&>(
                            (BaseTemplateConfigTypeList<ParamType>**)&local_50, (int*)(this + 1));
                        plVar12 = (long*)local_50.operator->();
                        puVar6 = (uint8_t*)(**(void (**)(...))(*plVar12 + 32))(plVar12, arg1_00);
                        if (puVar6 == DataStatus::READY) {
                            plVar12 = (long*)local_50.operator->();
                            (**(void (**)(...))(*plVar12 + 24))(plVar12);
                            pCVar1 = this[1]._vptr;
                            puVar6 = (uint8_t*)(**(void (**)(...))(pCVar1->_dtor + 72))(pCVar1, &local_50);
                            if (puVar6 == DataStatus::READY) {
                                paramType = local_50;
                            }
                        }
                        goto LAB_10057583b;
                    }
                    goto LAB_100575844;
                }
            }
            uVar11 = 0;
        }
        return uVar11;
    }

    // 0x1005758f0
    auto ConfigTypePreloadPackedContainer<ParamType>::AddConfigID(const shared_ptr<ParamType>& paramType, int arg2) {
        auto result;
        unsigned long uVar1;
        unique_ptr<ConfigTypePreloadPackedContainer<ParamType>::PageList>* puVar2;
        long lVar3;
        array<ConfigTypePreloadPackedContainer<ParamType>::ConfigPage*, 256ul>* paVar4;
        ReturnValue* pRVar5;
        ReturnValue this;
        ReturnValue* pRVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue local_48;
        unsigned int local_38;
        unsigned int local_34;

        if (arg2 == -1) {
            pRVar6 = &result + 17;
            *pRVar6 = paramType;
        } else {
            local_34 = arg2 & 4294901760;
            pRVar6 = &result + 9;
            uVar1 = pRVar6->size();
            arg1 = 0;
            if (uVar1 != 0) {
                do {
                    puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<ParamType>::PageList>*)(*pRVar6)[arg1];
                    lVar3 = (*puVar2).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == local_34)
                        break;
                    arg1 = (unsigned long)((int)arg1 + 1);
                } while (arg1 < uVar1);
            }
            if (uVar1 == arg1) {
                local_48 =
                    std::make_unique<ConfigTypePreloadPackedContainer<ParamType>::PageList, unsigned int&>(local_34);
                eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<ParamType>::PageList>>::emplace_back<
                    std::unique_ptr<ConfigTypePreloadPackedContainer<ParamType>::PageList>>(
                    (vector<std::unique_ptr<ConfigTypePreloadPackedContainer<ParamType>::PageList>>*)pRVar6,
                    (unique_ptr<
                        ConfigTypePreloadPackedContainer<ParamType>::PageList,
                        std::default_delete<ConfigTypePreloadPackedContainer<ParamType>::PageList> _>*)&local_48);
            }
            uVar1 = (unsigned long)(arg2 - local_34 >> 8);
            puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<ParamType>::PageList>*)(*pRVar6)[arg1];
            paVar4 = (array<ConfigTypePreloadPackedContainer<ParamType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
            pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
            this = *pRVar5;
            uVar7 = arg2 & 255U;
            if (this == (ReturnValue)0) {
                local_38 = arg2 & 255U;
                this = (ReturnValue)AllocatePageBuffer(&result);
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<ParamType>::PageList>*)(*pRVar6)[arg1];
                paVar4 =
                    (array<ConfigTypePreloadPackedContainer<ParamType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
                pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
                *pRVar5 = this;
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<ParamType>::PageList>*)(*pRVar6)[arg1];
                lVar3 = (*puVar2).operator->();
                if (*(unsigned int*)(lVar3 + 2048) != local_34) {
                    LogAssert("m_pageListContainer[thisPageList]->m_pageListID == pageListID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigTypePreloadPackedContainer.h",
                              469, nullptr);
                }
                uVar7 = local_38;
            }
            pRVar6 = (ReturnValue*)(*this)[(unsigned long)uVar7];
            *pRVar6 = paramType;
            *(int*)((long)this + 4096) = *(int*)((long)this + 4096) + 1;
            *(int*)(&result + 13) = arg2;
            &result[14] = this;
            *(unsigned int*)(&result + 15) = uVar7;
        }
        return pRVar6;
    }

    // 0x100575c60
    ConfigPage* ConfigTypePreloadPackedContainer<ParamType>::AllocatePageBuffer() {
        AllocatedBlock local_28 = this[16]._vptr->Allocate(4128);
        void* pvVar1 = local_28.field_8;
        if (local_28.field_8 == nullptr) {
            LogAssert("block.m_address != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      534, nullptr);
        }
        new (local_28.field_8) ConfigPage();
        *(unsigned long*)((long)pvVar1 + 4120) = local_28.field_16;
        *(uint64_t*)((long)pvVar1 + 4104) = local_28._0_8_;
        *(void**)((long)pvVar1 + 4112) = local_28.field_8;
        return pvVar1;
    }

    // 0x100576000
    ConfigTypePreloadPackedContainer<ParamType>::PageList::PageList(unsigned int arg1) {
        uint64_t* puVar1;

        *(unsigned int*)(this + 2048) = arg1;
        *(uint32_t*)(this + 2052) = 0;
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1_00];
            *puVar1 = 0;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
    }

    // 0x1005760b0
    ConfigTypePreloadPackedContainer<ParamType>::ConfigPage::ConfigPage() : std::array<shared_ptr<ParamType>, 256ul>() {
        *(uint32_t*)(this + 4096) = 0;
        new ((this + 4104)) SimpleAllocator::AllocatedBlock();
    }

    // 0x10057a1d0
    ConfigTypePreloadPackedContainer<DBRowType>::ConfigTypePreloadPackedContainer(
        BaseTemplateConfigTypeList<DBRowType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<DBRowType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                             js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee84b0;
        new ((this + 9)) eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<DBRowType>::PageList>>();
        new ((this + 17)) shared_ptr();
        new ((this + 19)) Array<Array<unsigned char>>();
        new ((this + 22)) PacketT();
        ((this + 26))->unique_ptr<true, void>();
    }

    // 0x10057a330
    _x7e___2* ConfigTypePreloadPackedContainer<DBRowType>::LoadList() {
        unique_ptr* this_00;
        bool bVar2;
        bool cVar3;
        DownloadWaitHandler* pDVar6;
        CoordMapSquare* pCVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        ConfigTypePreloadPackedContainer<DBRowType> _vtbl* local_48;

        if (*(int*)&this[6]._vptr == 2) {
            return (_x7e___2*)DataStatus::READY;
        }
        ConfigTypePreloadPackedContainer<DBRowType> _vtbl* pCVar1 = this[2]._vptr;
        ConfigTypePreloadPackedContainer<DBRowType> _vtbl* js5ArchiveSettings = this[3]._vptr;
        Js5Index* local_40 = nullptr;
        _x7e___2* p_Var5 = (_x7e___2*)(**(void (**)(...))(pCVar1->_dtor + 24))(pCVar1, &local_40, js5ArchiveSettings);
        if (p_Var5 != (_x7e___2*)DataStatus::READY) {
            return p_Var5;
        }
        unsigned int local_34 = this[1]._vptr->GetUIHeight();
        int iVar4 = this[1]._vptr->GetStreamCountLastMix();
        *(unsigned int*)&this[8]._vptr = iVar4 + local_34;
        if (*(int*)&this[6]._vptr == 0) {
            this_00 = (unique_ptr*)(this + 26);
            local_48 = js5ArchiveSettings;
            cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar3) {
                LogAssert("!m_downloadHandler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "ConfigTypePreloadPackedContainer.h",
                          213, nullptr);
            }
            local_50 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_34);
            *this_00 = local_50;
            pDVar6 = (DownloadWaitHandler*)**this_00;
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                CheckGroupExistence(this, pDVar6, local_40, uVar8, 0);
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    CheckGroupExistence(this, pDVar6, local_40, uVar8, uVar8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            ((this + 19))->set_max_size((unsigned long)local_34, 0);
            *(uint32_t*)&this[6]._vptr = 1;
            iVar4 = *(int*)&this[6]._vptr;
            js5ArchiveSettings = local_48;
        } else {
            iVar4 = *(int*)&this[6]._vptr;
        }
        if (iVar4 != 1) {
            return (_x7e___2*)DataStatus::READY;
        }
        pDVar6 = (DownloadWaitHandler*)*(*((this + 26)));
        if ((this[1]._vptr != nullptr) && (cVar3 = (**(void (**)(...))(pCVar1->_dtor + 64))(pCVar1), cVar3)) {
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                cVar3 = pDVar6->IsComplete(0);
                if ((!cVar3) && (cVar3 = pDVar6->CanCheck(0), cVar3)) {
                    CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, 0);
                }
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    cVar3 = pDVar6->IsComplete(uVar8);
                    if ((!cVar3) && (cVar3 = pDVar6->CanCheck(uVar8), cVar3)) {
                        CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, uVar8);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            if (*(unsigned int*)&this[8]._vptr <= *(unsigned int*)((long)&this[7]._vptr + 4)) {
                ((this + 26))->reset(nullptr);
                *(uint32_t*)&this[6]._vptr = 2;
                p_Var5 = (_x7e___2*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->_x7e___2 = p_Var5;
                bVar2 = true;
                goto LAB_10057a5a6;
            }
        }
        bVar2 = false;
        p_Var5 = (_x7e___2*)DataStatus::NOTLOADED;
    LAB_10057a5a6:
        if (bVar2) {
            return (_x7e___2*)DataStatus::READY;
        }
        return p_Var5;
    }

    // 0x10057a5f0
    void ConfigTypePreloadPackedContainer<DBRowType>::CacheReset() {
        unique_ptr<ConfigTypePreloadPackedContainer<DBRowType>::PageList>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (unique_ptr<ConfigTypePreloadPackedContainer<DBRowType>::PageList>*)(*this_00)[arg1];
                ((PageList*)this_01->get())->ClearPageList(*this[16]._vptr);
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        this_00->clear();
        this[14]._vptr = nullptr;
        *(uint32_t*)&this[15]._vptr = 0;
        *(uint32_t*)&this[13]._vptr = 4294967295;
    }

    // 0x10057a680
    void ConfigTypePreloadPackedContainer<DBRowType>::CacheClean(unsigned int arg1) {
        LoadList** ppLVar1;
        ConfigTypePreloadPackedContainer<DBRowType> _vtbl* this_01;
        unsigned long uVar4;
        unique_ptr<ConfigTypePreloadPackedContainer<DBRowType>::PageList>* this_02;
        array<ConfigTypePreloadPackedContainer<DBRowType>::ConfigPage*, 256ul>* this_03;
        uint64_t* puVar5;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_04;
        unsigned long arg1_00;
        unsigned int uVar6;
        int iVar7;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_02 = (unique_ptr<ConfigTypePreloadPackedContainer<DBRowType>::PageList>*)(*this_00)[arg1_00];
                this_03 = (array<ConfigTypePreloadPackedContainer<DBRowType>::ConfigPage*, 256ul>*)this_02->get();
                uVar6 = *(unsigned int*)(this_03 + 2052);
                iVar7 = 16;
                do {
                    puVar5 = (uint64_t*)(*this_03)[(unsigned long)(uVar6 >> 8)];
                    this_01 = (ConfigTypePreloadPackedContainer<DBRowType> _vtbl*)*puVar5;
                    if (this_01 != nullptr) {
                        this_04 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*this_01)[(
                            unsigned long)(uVar6 & 255)];
                        if (this_04->unique() != '\0') {
                            this_04->reset();
                            if ((this_01 == this[14]._vptr) && ((uVar6 & 255) == *(unsigned int*)&this[15]._vptr)) {
                                this[14]._vptr = nullptr;
                                *(uint32_t*)&this[15]._vptr = 0;
                                *(uint32_t*)&this[13]._vptr = 4294967295;
                            }
                            ppLVar1 = &this_01[51].LoadList;
                            *(int*)ppLVar1 = *(int*)ppLVar1 - 1;
                            if (*(int*)ppLVar1 == 0) {
                                this[16]._vptr->DeAllocate(&this_01[51].CacheReset);
                                *puVar5 = 0;
                            }
                        }
                    }
                    uVar6 = uVar6 + 1 & 65535;
                    iVar7 = iVar7 - 1;
                } while (iVar7 != 0);
                *(unsigned int*)(this_03 + 2052) = uVar6;
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x10057a7f0
    shared_ptr* ConfigTypePreloadPackedContainer<DBRowType>::List(int arg1, const DataStatus** arg2) {
        shared_ptr* psVar2;
        uint8_t** ppuVar3;

        if (*(int*)&this[6]._vptr != 2) {
            if (arg2 == nullptr) {
                return (shared_ptr*)PTR_NullConfigType_100ee6588;
            }
            ppuVar3 = &DataStatus::NOTLOADED;
            psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6588;
        LAB_10057a84b:
            *arg2 = (DataStatus*)*ppuVar3;
            return psVar2;
        }
        psVar2 = (shared_ptr*)FindConfigID(this, arg1);
        if (shared_ptr::operator_cast_to_bool(psVar2)) {
            if (arg2 == nullptr) {
                return psVar2;
            }
            ppuVar3 = &DataStatus::READY;
            goto LAB_10057a84b;
        }
        shared_ptr local_38;
        if (!(DecodeConfig(this, arg1, (shared_ptr<DBRowType>*)&local_38))) {
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::MISSING;
            LAB_10057a8c1:
                *arg2 = (DataStatus*)*ppuVar3;
            }
        } else {
            if (shared_ptr::operator_cast_to_bool(&local_38)) {
                if (arg2 != nullptr) {
                    *arg2 = (DataStatus*)DataStatus::READY;
                }
                psVar2 = (shared_ptr*)AddConfigID((ReturnValue*)this, (shared_ptr<DBRowType>*)&local_38, arg1);
                goto LAB_10057a8ce;
            }
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_10057a8c1;
            }
        }
        psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6588;
    LAB_10057a8ce:
        return psVar2;
    }

    // 0x10057a900
    auto ConfigTypePreloadPackedContainer<DBRowType>::DirectFetch(int arg1) {
        if (*(int*)&this[6]._vptr != 2) {
            LogAssert("m_loadStep == BaseLoadAllConfigTypeContainer::LoadStep::DONE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      179, nullptr);
        }
        auto result;
        if (DecodeConfig(this, arg1, &result) == '\0') {
            LogAssert("exists",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      183, nullptr);
        }
        return result;
    }

    // 0x10057ab10
    ConfigTypePreloadPackedContainer<DBRowType>::~ConfigTypePreloadPackedContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee84b0;
        this[16]._vptr->PrintMetrics();
        CacheReset();
        ((this + 26))->~unique_ptr();
        ((this + 22))->~VBOMapper();
        ((this + 19))->~Array();
        ((this + 17))->~shared_ptr();
        ((this + 9))->~vector();
        ((this + 5))->~AutoSingleton();
    }

    // 0x10057ac00
    void ConfigTypePreloadPackedContainer<DBRowType>::CheckGroupExistence(DownloadWaitHandler& downloadWaitHandler,
                                                                          Js5Index* js5Index, unsigned int arg3,
                                                                          unsigned int arg4) {
        int* piVar1;

        if (js5Index == nullptr) {
            LogAssert("js5Index",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      365, nullptr);
        }
        if (js5Index->DoesGroupExist(arg3) == '\0') {
            piVar1 = (int*)((long)&this[7]._vptr + 4);
            *piVar1 = *piVar1 + 1;
        } else {
            downloadWaitHandler.SetExists(arg4);
        }
    }

    // 0x10057ac80
    void ConfigTypePreloadPackedContainer<DBRowType>::CheckDecodeProgress(const Js5ArchiveSettings& js5ArchiveSettings,
                                                                          Js5Index* js5Index, unsigned int arg3,
                                                                          unsigned int arg4) {
        int iVar1;
        Array<unsigned char>* this_00;
        TextureAtlasReference* pTVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        void* pvVar4;
        PacketT<Array<unsigned char>>* this_02;
        void* pvVar5;
        size_t sVar6;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)this[1]._vptr->GetGroup(local_48, js5ArchiveSettings, arg3, (Priority*)Priority::HIGHEST, true,
                                              true) == DataStatus::READY) {
            this_00 = (Array<unsigned char>*)(*((this + 19)))[(unsigned long)arg4];
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            this_00->set_max_size(pTVar3->GetTextureAtlas(), 0);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*((this + 19)))[(unsigned long)arg4];
            pvVar4 = (void*)this_01->data();
            this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pvVar5 = (void*)this_02->GetDataPtr();
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            sVar6 = pTVar3->GetTextureAtlas();
            _memcpy(pvVar4, pvVar5, sVar6);
            iVar1 = js5Index->GetMaximumFileID(arg3);
            *(int*)((long)&this[7]._vptr + 4) = iVar1 + *(int*)((long)&this[7]._vptr + 4) + 1;
            ((DownloadWaitHandler*)(*((this + 26))).operator->())->Completed(arg4);
        }
    }

    // 0x10057ae20
    void ConfigTypePreloadPackedContainer<DBRowType>::PageList::ClearPageList(SimpleAllocator& simpleAllocator) {
        ConfigPage* this_00;
        uint64_t* puVar1;

        unsigned long arg1 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1];
            this_00 = (ConfigPage*)*puVar1;
            if (this_00 != nullptr) {
                this_00->Clear();
                simpleAllocator.DeAllocate((this_00 + 4104));
                *puVar1 = 0;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x10057af00
    void ConfigTypePreloadPackedContainer<DBRowType>::ConfigPage::Clear() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1];
            if (this_00->end() != 0) {
                this_00->reset();
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x10057b030
    ConfigTypePreloadPackedContainer<DBRowType>*
    ConfigTypePreloadPackedContainer<DBRowType>::FindConfigID(int arg1) const {
        unsigned int uVar2;
        shared_ptr* this_00;
        long lVar3;
        unique_ptr<ConfigTypePreloadPackedContainer<DBRowType>::PageList>* puVar4;
        unsigned long uVar5;
        array<ConfigTypePreloadPackedContainer<DBRowType>::ConfigPage*, 256ul>* this_01;
        long* plVar6;
        ConfigTypePreloadPackedContainer<DBRowType>* pCVar7;
        unsigned long arg1_00;
        unsigned int uVar8;
        ConfigTypePreloadPackedContainer<DBRowType> _vtbl* this_02;
        vector<eastl::pair<int, int>>* this_03;

        if (arg1 == -1) {
            pCVar7 = this + 17;
        } else {
            if (*(int*)&this[13]._vptr == arg1) {
                if (this[14]._vptr != nullptr) {
                    this_00 = (shared_ptr*)(*this[14]._vptr)[(unsigned long)*(unsigned int*)&this[15]._vptr];
                    if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                        this_02 = this[14]._vptr;
                        uVar8 = *(unsigned int*)&this[15]._vptr;
                    LAB_10057b152:
                        pCVar7 = (ConfigTypePreloadPackedContainer<DBRowType>*)(*this_02)[(unsigned long)uVar8];
                        return pCVar7;
                    }
                }
                uVar8 = *(unsigned int*)&this[13]._vptr;
                uVar2 = this[3]._vptr->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigTypePreloadPackedContainer.h",
                                507, "Previously loaded config ID %d (archive ID %u) unexpectedly missing",
                                (unsigned long)uVar8, (unsigned long)uVar2);
            }
            this_03 = (vector<eastl::pair<int, int>>*)(this + 9);
            lVar3 = this_03->size();
            pCVar7 = (ConfigTypePreloadPackedContainer<DBRowType>*)PTR_NullConfigType_100ee6588;
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<DBRowType>::PageList>*)(*this_03)[arg1_00];
                    lVar3 = (*puVar4).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == (arg1 & 4294901760U)) {
                        puVar4 =
                            (unique_ptr<ConfigTypePreloadPackedContainer<DBRowType>::PageList>*)(*this_03)[arg1_00];
                        this_01 = (array<ConfigTypePreloadPackedContainer<DBRowType>::ConfigPage*, 256ul>*)(*puVar4)
                                      .operator->();
                        plVar6 = (long*)(*this_01)[(unsigned long)((unsigned int)arg1 >> 8 & 255)];
                        this_02 = (ConfigTypePreloadPackedContainer<DBRowType> _vtbl*)*plVar6;
                        if (this_02 == nullptr) {
                            return pCVar7;
                        }
                        uVar8 = arg1 & 255;
                        goto LAB_10057b152;
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar5 = this_03->size();
                } while (arg1_00 < uVar5);
            }
        }
        return pCVar7;
    }

    // 0x10057b170
    uint64_t ConfigTypePreloadPackedContainer<DBRowType>::DecodeConfig(int arg1, shared_ptr<DBRowType>& dbRowType) {
        PacketT<Array<unsigned char>>* arg1_00;
        ConfigTypePreloadPackedContainer<DBRowType> _vtbl* pCVar1;
        unsigned int arg1_01;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        uint8_t* puVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        void* pvVar8;
        Array<unsigned char>* this_00;
        void* pvVar9;
        size_t sVar10;
        uint64_t uVar11;
        long* plVar12;
        unsigned long arg1_03;
        Array<Array<unsigned char>>* this_01;
        shared_ptr<DBRowType> local_50;
        Js5Index* local_40;

        dbRowType = *PTR_NullConfigType_100ee6588;
        if (arg1 < 0) {
            MakeSharedPool<DBRowType, 128>::MakeShared<BaseTemplateConfigTypeList<DBRowType>*&, int&>(
                (BaseTemplateConfigTypeList<DBRowType>**)&local_50, (int*)(this + 1));
            dbRowType = local_50;
        LAB_10057b2fb:
        LAB_10057b304:
            uVar11 = 1;
        } else {
            arg1_01 = this[1]._vptr->GetClientGroupID(arg1);
            uVar3 = this[1]._vptr->GetClientFileID(arg1);
            local_40 = nullptr;
            puVar6 =
                (uint8_t*)(**(void (**)(...))((this[2]._vptr)->_dtor + 24))(this[2]._vptr, &local_40, this[3]._vptr);
            if (puVar6 != DataStatus::MISSING) {
                if (local_40->DoesFileExist(arg1_01, uVar3) != '\0') {
                    if (puVar6 == DataStatus::READY) {
                        uVar3 = local_40->GetFileIndex(arg1_01, uVar3);
                        uVar4 = this[1]._vptr->GetUIHeight();
                        arg1_03 = 0;
                        if (1 < uVar4) {
                            arg1_03 = (unsigned long)arg1_01;
                        }
                        iVar5 = local_40->GetFileCount(arg1_01);
                        arg1_00 = (PacketT<Array<unsigned char>>*)(this + 22);
                        this_01 = (Array<Array<unsigned char>>*)(this + 19);
                        pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                        if (iVar5 == 1) {
                            arg1_00->Reserve(pvVar7->end());
                            arg1_00->SetPos(0);
                            pvVar8 = (void*)arg1_00->GetDataPtr();
                            this_00 = (Array<unsigned char>*)(*this_01)[arg1_03];
                            pvVar9 = (void*)(*this_00)[0];
                            pvVar7 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                            sVar10 = pvVar7->end();
                            _memcpy(pvVar8, pvVar9, sVar10);
                        } else {
                            Js5DiskFileFormat::GetGroupFileData((PacketT<Array<unsigned char> _>*)arg1_00,
                                                                (Array<unsigned char>*)pvVar7, uVar3);
                        }
                        MakeSharedPool<DBRowType, 128>::MakeShared<BaseTemplateConfigTypeList<DBRowType>*&, int&>(
                            (BaseTemplateConfigTypeList<DBRowType>**)&local_50, (int*)(this + 1));
                        plVar12 = (long*)local_50.operator->();
                        puVar6 = (uint8_t*)(**(void (**)(...))(*plVar12 + 32))(plVar12, arg1_00);
                        if (puVar6 == DataStatus::READY) {
                            plVar12 = (long*)local_50.operator->();
                            (**(void (**)(...))(*plVar12 + 24))(plVar12);
                            pCVar1 = this[1]._vptr;
                            puVar6 = (uint8_t*)(**(void (**)(...))(pCVar1->_dtor + 72))(pCVar1, &local_50);
                            if (puVar6 == DataStatus::READY) {
                                dbRowType = local_50;
                            }
                        }
                        goto LAB_10057b2fb;
                    }
                    goto LAB_10057b304;
                }
            }
            uVar11 = 0;
        }
        return uVar11;
    }

    // 0x10057b3b0
    auto ConfigTypePreloadPackedContainer<DBRowType>::AddConfigID(const shared_ptr<DBRowType>& dbRowType, int arg2) {
        auto result;
        unsigned long uVar1;
        unique_ptr<ConfigTypePreloadPackedContainer<DBRowType>::PageList>* puVar2;
        long lVar3;
        array<ConfigTypePreloadPackedContainer<DBRowType>::ConfigPage*, 256ul>* paVar4;
        ReturnValue* pRVar5;
        ReturnValue this;
        ReturnValue* pRVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue local_48;
        unsigned int local_38;
        unsigned int local_34;

        if (arg2 == -1) {
            pRVar6 = &result + 17;
            *pRVar6 = dbRowType;
        } else {
            local_34 = arg2 & 4294901760;
            pRVar6 = &result + 9;
            uVar1 = pRVar6->size();
            arg1 = 0;
            if (uVar1 != 0) {
                do {
                    puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<DBRowType>::PageList>*)(*pRVar6)[arg1];
                    lVar3 = (*puVar2).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == local_34)
                        break;
                    arg1 = (unsigned long)((int)arg1 + 1);
                } while (arg1 < uVar1);
            }
            if (uVar1 == arg1) {
                local_48 =
                    std::make_unique<ConfigTypePreloadPackedContainer<DBRowType>::PageList, unsigned int&>(local_34);
                eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<DBRowType>::PageList>>::emplace_back<
                    std::unique_ptr<ConfigTypePreloadPackedContainer<DBRowType>::PageList>>(
                    (vector<std::unique_ptr<ConfigTypePreloadPackedContainer<DBRowType>::PageList>>*)pRVar6,
                    (unique_ptr<
                        ConfigTypePreloadPackedContainer<DBRowType>::PageList,
                        std::default_delete<ConfigTypePreloadPackedContainer<DBRowType>::PageList> _>*)&local_48);
            }
            uVar1 = (unsigned long)(arg2 - local_34 >> 8);
            puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<DBRowType>::PageList>*)(*pRVar6)[arg1];
            paVar4 = (array<ConfigTypePreloadPackedContainer<DBRowType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
            pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
            this = *pRVar5;
            uVar7 = arg2 & 255U;
            if (this == (ReturnValue)0) {
                local_38 = arg2 & 255U;
                this = (ReturnValue)AllocatePageBuffer(&result);
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<DBRowType>::PageList>*)(*pRVar6)[arg1];
                paVar4 =
                    (array<ConfigTypePreloadPackedContainer<DBRowType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
                pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
                *pRVar5 = this;
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<DBRowType>::PageList>*)(*pRVar6)[arg1];
                lVar3 = (*puVar2).operator->();
                if (*(unsigned int*)(lVar3 + 2048) != local_34) {
                    LogAssert("m_pageListContainer[thisPageList]->m_pageListID == pageListID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigTypePreloadPackedContainer.h",
                              469, nullptr);
                }
                uVar7 = local_38;
            }
            pRVar6 = (ReturnValue*)(*this)[(unsigned long)uVar7];
            *pRVar6 = dbRowType;
            *(int*)((long)this + 4096) = *(int*)((long)this + 4096) + 1;
            *(int*)(&result + 13) = arg2;
            &result[14] = this;
            *(unsigned int*)(&result + 15) = uVar7;
        }
        return pRVar6;
    }

    // 0x10057b720
    ConfigPage* ConfigTypePreloadPackedContainer<DBRowType>::AllocatePageBuffer() {
        AllocatedBlock local_28 = this[16]._vptr->Allocate(4128);
        void* pvVar1 = local_28.field_8;
        if (local_28.field_8 == nullptr) {
            LogAssert("block.m_address != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      534, nullptr);
        }
        new (local_28.field_8) ConfigPage();
        *(unsigned long*)((long)pvVar1 + 4120) = local_28.field_16;
        *(uint64_t*)((long)pvVar1 + 4104) = local_28._0_8_;
        *(void**)((long)pvVar1 + 4112) = local_28.field_8;
        return pvVar1;
    }

    // 0x10057bac0
    ConfigTypePreloadPackedContainer<DBRowType>::PageList::PageList(unsigned int arg1) {
        uint64_t* puVar1;

        *(unsigned int*)(this + 2048) = arg1;
        *(uint32_t*)(this + 2052) = 0;
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1_00];
            *puVar1 = 0;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
    }

    // 0x10057bb70
    ConfigTypePreloadPackedContainer<DBRowType>::ConfigPage::ConfigPage() : std::array<shared_ptr<DBRowType>, 256ul>() {
        *(uint32_t*)(this + 4096) = 0;
        new ((this + 4104)) SimpleAllocator::AllocatedBlock();
    }

    // 0x10057f8b0
    ConfigTypePreloadPackedContainer<DBTableType>::ConfigTypePreloadPackedContainer(
        BaseTemplateConfigTypeList<DBTableType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<DBTableType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                               js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8410;
        new ((this + 9)) eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<DBTableType>::PageList>>();
        new ((this + 17)) shared_ptr();
        new ((this + 19)) Array<Array<unsigned char>>();
        new ((this + 22)) PacketT();
        ((this + 26))->unique_ptr<true, void>();
    }

    // 0x10057fa10
    _x7e___2* ConfigTypePreloadPackedContainer<DBTableType>::LoadList() {
        unique_ptr* this_00;
        bool bVar2;
        bool cVar3;
        DownloadWaitHandler* pDVar6;
        CoordMapSquare* pCVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        ConfigTypePreloadPackedContainer<DBTableType> _vtbl* local_48;

        if (*(int*)&this[6]._vptr == 2) {
            return (_x7e___2*)DataStatus::READY;
        }
        ConfigTypePreloadPackedContainer<DBTableType> _vtbl* pCVar1 = this[2]._vptr;
        ConfigTypePreloadPackedContainer<DBTableType> _vtbl* js5ArchiveSettings = this[3]._vptr;
        Js5Index* local_40 = nullptr;
        _x7e___2* p_Var5 = (_x7e___2*)(**(void (**)(...))(pCVar1->_dtor + 24))(pCVar1, &local_40, js5ArchiveSettings);
        if (p_Var5 != (_x7e___2*)DataStatus::READY) {
            return p_Var5;
        }
        unsigned int local_34 = this[1]._vptr->GetUIHeight();
        int iVar4 = this[1]._vptr->GetStreamCountLastMix();
        *(unsigned int*)&this[8]._vptr = iVar4 + local_34;
        if (*(int*)&this[6]._vptr == 0) {
            this_00 = (unique_ptr*)(this + 26);
            local_48 = js5ArchiveSettings;
            cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar3) {
                LogAssert("!m_downloadHandler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "ConfigTypePreloadPackedContainer.h",
                          213, nullptr);
            }
            local_50 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_34);
            *this_00 = local_50;
            pDVar6 = (DownloadWaitHandler*)**this_00;
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                CheckGroupExistence(this, pDVar6, local_40, uVar8, 0);
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    CheckGroupExistence(this, pDVar6, local_40, uVar8, uVar8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            ((this + 19))->set_max_size((unsigned long)local_34, 0);
            *(uint32_t*)&this[6]._vptr = 1;
            iVar4 = *(int*)&this[6]._vptr;
            js5ArchiveSettings = local_48;
        } else {
            iVar4 = *(int*)&this[6]._vptr;
        }
        if (iVar4 != 1) {
            return (_x7e___2*)DataStatus::READY;
        }
        pDVar6 = (DownloadWaitHandler*)*(*((this + 26)));
        if ((this[1]._vptr != nullptr) && (cVar3 = (**(void (**)(...))(pCVar1->_dtor + 64))(pCVar1), cVar3)) {
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                cVar3 = pDVar6->IsComplete(0);
                if ((!cVar3) && (cVar3 = pDVar6->CanCheck(0), cVar3)) {
                    CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, 0);
                }
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    cVar3 = pDVar6->IsComplete(uVar8);
                    if ((!cVar3) && (cVar3 = pDVar6->CanCheck(uVar8), cVar3)) {
                        CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, uVar8);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            if (*(unsigned int*)&this[8]._vptr <= *(unsigned int*)((long)&this[7]._vptr + 4)) {
                ((this + 26))->reset(nullptr);
                *(uint32_t*)&this[6]._vptr = 2;
                p_Var5 = (_x7e___2*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->_x7e___2 = p_Var5;
                bVar2 = true;
                goto LAB_10057fc86;
            }
        }
        bVar2 = false;
        p_Var5 = (_x7e___2*)DataStatus::NOTLOADED;
    LAB_10057fc86:
        if (bVar2) {
            return (_x7e___2*)DataStatus::READY;
        }
        return p_Var5;
    }

    // 0x10057fcd0
    void ConfigTypePreloadPackedContainer<DBTableType>::CacheReset() {
        unique_ptr<ConfigTypePreloadPackedContainer<DBTableType>::PageList>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (unique_ptr<ConfigTypePreloadPackedContainer<DBTableType>::PageList>*)(*this_00)[arg1];
                ((PageList*)this_01->get())->ClearPageList(*this[16]._vptr);
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        this_00->clear();
        this[14]._vptr = nullptr;
        *(uint32_t*)&this[15]._vptr = 0;
        *(uint32_t*)&this[13]._vptr = 4294967295;
    }

    // 0x10057fd60
    void ConfigTypePreloadPackedContainer<DBTableType>::CacheClean(unsigned int arg1) {
        LoadList** ppLVar1;
        ConfigTypePreloadPackedContainer<DBTableType> _vtbl* this_01;
        unsigned long uVar4;
        unique_ptr<ConfigTypePreloadPackedContainer<DBTableType>::PageList>* this_02;
        array<ConfigTypePreloadPackedContainer<DBTableType>::ConfigPage*, 256ul>* this_03;
        uint64_t* puVar5;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_04;
        unsigned long arg1_00;
        unsigned int uVar6;
        int iVar7;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_02 = (unique_ptr<ConfigTypePreloadPackedContainer<DBTableType>::PageList>*)(*this_00)[arg1_00];
                this_03 = (array<ConfigTypePreloadPackedContainer<DBTableType>::ConfigPage*, 256ul>*)this_02->get();
                uVar6 = *(unsigned int*)(this_03 + 2052);
                iVar7 = 16;
                do {
                    puVar5 = (uint64_t*)(*this_03)[(unsigned long)(uVar6 >> 8)];
                    this_01 = (ConfigTypePreloadPackedContainer<DBTableType> _vtbl*)*puVar5;
                    if (this_01 != nullptr) {
                        this_04 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*this_01)[(
                            unsigned long)(uVar6 & 255)];
                        if (this_04->unique() != '\0') {
                            this_04->reset();
                            if ((this_01 == this[14]._vptr) && ((uVar6 & 255) == *(unsigned int*)&this[15]._vptr)) {
                                this[14]._vptr = nullptr;
                                *(uint32_t*)&this[15]._vptr = 0;
                                *(uint32_t*)&this[13]._vptr = 4294967295;
                            }
                            ppLVar1 = &this_01[51].LoadList;
                            *(int*)ppLVar1 = *(int*)ppLVar1 - 1;
                            if (*(int*)ppLVar1 == 0) {
                                this[16]._vptr->DeAllocate(&this_01[51].CacheReset);
                                *puVar5 = 0;
                            }
                        }
                    }
                    uVar6 = uVar6 + 1 & 65535;
                    iVar7 = iVar7 - 1;
                } while (iVar7 != 0);
                *(unsigned int*)(this_03 + 2052) = uVar6;
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x10057fed0
    shared_ptr* ConfigTypePreloadPackedContainer<DBTableType>::List(int arg1, const DataStatus** arg2) {
        shared_ptr* psVar2;
        uint8_t** ppuVar3;

        if (*(int*)&this[6]._vptr != 2) {
            if (arg2 == nullptr) {
                return (shared_ptr*)PTR_NullConfigType_100ee64e8;
            }
            ppuVar3 = &DataStatus::NOTLOADED;
            psVar2 = (shared_ptr*)PTR_NullConfigType_100ee64e8;
        LAB_10057ff2b:
            *arg2 = (DataStatus*)*ppuVar3;
            return psVar2;
        }
        psVar2 = (shared_ptr*)FindConfigID(this, arg1);
        if (shared_ptr::operator_cast_to_bool(psVar2)) {
            if (arg2 == nullptr) {
                return psVar2;
            }
            ppuVar3 = &DataStatus::READY;
            goto LAB_10057ff2b;
        }
        shared_ptr local_38;
        if (!(DecodeConfig(this, arg1, (shared_ptr<DBTableType>*)&local_38))) {
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::MISSING;
            LAB_10057ffa1:
                *arg2 = (DataStatus*)*ppuVar3;
            }
        } else {
            if (shared_ptr::operator_cast_to_bool(&local_38)) {
                if (arg2 != nullptr) {
                    *arg2 = (DataStatus*)DataStatus::READY;
                }
                psVar2 = (shared_ptr*)AddConfigID((ReturnValue*)this, (shared_ptr<DBTableType>*)&local_38, arg1);
                goto LAB_10057ffae;
            }
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_10057ffa1;
            }
        }
        psVar2 = (shared_ptr*)PTR_NullConfigType_100ee64e8;
    LAB_10057ffae:
        return psVar2;
    }

    // 0x10057ffe0
    auto ConfigTypePreloadPackedContainer<DBTableType>::DirectFetch(int arg1) {
        if (*(int*)&this[6]._vptr != 2) {
            LogAssert("m_loadStep == BaseLoadAllConfigTypeContainer::LoadStep::DONE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      179, nullptr);
        }
        auto result;
        if (DecodeConfig(this, arg1, &result) == '\0') {
            LogAssert("exists",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      183, nullptr);
        }
        return result;
    }

    // 0x1005801f0
    ConfigTypePreloadPackedContainer<DBTableType>::~ConfigTypePreloadPackedContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8410;
        this[16]._vptr->PrintMetrics();
        CacheReset();
        ((this + 26))->~unique_ptr();
        ((this + 22))->~VBOMapper();
        ((this + 19))->~Array();
        ((this + 17))->~shared_ptr();
        ((this + 9))->~vector();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005802e0
    void ConfigTypePreloadPackedContainer<DBTableType>::CheckGroupExistence(DownloadWaitHandler& downloadWaitHandler,
                                                                            Js5Index* js5Index, unsigned int arg3,
                                                                            unsigned int arg4) {
        int* piVar1;

        if (js5Index == nullptr) {
            LogAssert("js5Index",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      365, nullptr);
        }
        if (js5Index->DoesGroupExist(arg3) == '\0') {
            piVar1 = (int*)((long)&this[7]._vptr + 4);
            *piVar1 = *piVar1 + 1;
        } else {
            downloadWaitHandler.SetExists(arg4);
        }
    }

    // 0x100580360
    void ConfigTypePreloadPackedContainer<DBTableType>::CheckDecodeProgress(
        const Js5ArchiveSettings& js5ArchiveSettings, Js5Index* js5Index, unsigned int arg3, unsigned int arg4) {
        int iVar1;
        Array<unsigned char>* this_00;
        TextureAtlasReference* pTVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        void* pvVar4;
        PacketT<Array<unsigned char>>* this_02;
        void* pvVar5;
        size_t sVar6;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)this[1]._vptr->GetGroup(local_48, js5ArchiveSettings, arg3, (Priority*)Priority::HIGHEST, true,
                                              true) == DataStatus::READY) {
            this_00 = (Array<unsigned char>*)(*((this + 19)))[(unsigned long)arg4];
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            this_00->set_max_size(pTVar3->GetTextureAtlas(), 0);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*((this + 19)))[(unsigned long)arg4];
            pvVar4 = (void*)this_01->data();
            this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pvVar5 = (void*)this_02->GetDataPtr();
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            sVar6 = pTVar3->GetTextureAtlas();
            _memcpy(pvVar4, pvVar5, sVar6);
            iVar1 = js5Index->GetMaximumFileID(arg3);
            *(int*)((long)&this[7]._vptr + 4) = iVar1 + *(int*)((long)&this[7]._vptr + 4) + 1;
            ((DownloadWaitHandler*)(*((this + 26))).operator->())->Completed(arg4);
        }
    }

    // 0x100580500
    void ConfigTypePreloadPackedContainer<DBTableType>::PageList::ClearPageList(SimpleAllocator& simpleAllocator) {
        ConfigPage* this_00;
        uint64_t* puVar1;

        unsigned long arg1 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1];
            this_00 = (ConfigPage*)*puVar1;
            if (this_00 != nullptr) {
                this_00->Clear();
                simpleAllocator.DeAllocate((this_00 + 4104));
                *puVar1 = 0;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005805e0
    void ConfigTypePreloadPackedContainer<DBTableType>::ConfigPage::Clear() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1];
            if (this_00->end() != 0) {
                this_00->reset();
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x100580710
    ConfigTypePreloadPackedContainer<DBTableType>*
    ConfigTypePreloadPackedContainer<DBTableType>::FindConfigID(int arg1) const {
        unsigned int uVar2;
        shared_ptr* this_00;
        long lVar3;
        unique_ptr<ConfigTypePreloadPackedContainer<DBTableType>::PageList>* puVar4;
        unsigned long uVar5;
        array<ConfigTypePreloadPackedContainer<DBTableType>::ConfigPage*, 256ul>* this_01;
        long* plVar6;
        ConfigTypePreloadPackedContainer<DBTableType>* pCVar7;
        unsigned long arg1_00;
        unsigned int uVar8;
        ConfigTypePreloadPackedContainer<DBTableType> _vtbl* this_02;
        vector<eastl::pair<int, int>>* this_03;

        if (arg1 == -1) {
            pCVar7 = this + 17;
        } else {
            if (*(int*)&this[13]._vptr == arg1) {
                if (this[14]._vptr != nullptr) {
                    this_00 = (shared_ptr*)(*this[14]._vptr)[(unsigned long)*(unsigned int*)&this[15]._vptr];
                    if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                        this_02 = this[14]._vptr;
                        uVar8 = *(unsigned int*)&this[15]._vptr;
                    LAB_100580832:
                        pCVar7 = (ConfigTypePreloadPackedContainer<DBTableType>*)(*this_02)[(unsigned long)uVar8];
                        return pCVar7;
                    }
                }
                uVar8 = *(unsigned int*)&this[13]._vptr;
                uVar2 = this[3]._vptr->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigTypePreloadPackedContainer.h",
                                507, "Previously loaded config ID %d (archive ID %u) unexpectedly missing",
                                (unsigned long)uVar8, (unsigned long)uVar2);
            }
            this_03 = (vector<eastl::pair<int, int>>*)(this + 9);
            lVar3 = this_03->size();
            pCVar7 = (ConfigTypePreloadPackedContainer<DBTableType>*)PTR_NullConfigType_100ee64e8;
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<DBTableType>::PageList>*)(*this_03)[arg1_00];
                    lVar3 = (*puVar4).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == (arg1 & 4294901760U)) {
                        puVar4 =
                            (unique_ptr<ConfigTypePreloadPackedContainer<DBTableType>::PageList>*)(*this_03)[arg1_00];
                        this_01 = (array<ConfigTypePreloadPackedContainer<DBTableType>::ConfigPage*, 256ul>*)(*puVar4)
                                      .operator->();
                        plVar6 = (long*)(*this_01)[(unsigned long)((unsigned int)arg1 >> 8 & 255)];
                        this_02 = (ConfigTypePreloadPackedContainer<DBTableType> _vtbl*)*plVar6;
                        if (this_02 == nullptr) {
                            return pCVar7;
                        }
                        uVar8 = arg1 & 255;
                        goto LAB_100580832;
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar5 = this_03->size();
                } while (arg1_00 < uVar5);
            }
        }
        return pCVar7;
    }

    // 0x100580850
    uint64_t ConfigTypePreloadPackedContainer<DBTableType>::DecodeConfig(int arg1,
                                                                         shared_ptr<DBTableType>& dbTableType) {
        PacketT<Array<unsigned char>>* arg1_00;
        ConfigTypePreloadPackedContainer<DBTableType> _vtbl* pCVar1;
        unsigned int arg1_01;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        uint8_t* puVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        void* pvVar8;
        Array<unsigned char>* this_00;
        void* pvVar9;
        size_t sVar10;
        uint64_t uVar11;
        long* plVar12;
        unsigned long arg1_03;
        Array<Array<unsigned char>>* this_01;
        shared_ptr<DBTableType> local_50;
        Js5Index* local_40;

        dbTableType = *PTR_NullConfigType_100ee64e8;
        if (arg1 < 0) {
            MakeSharedPool<DBTableType, 4>::MakeShared<BaseTemplateConfigTypeList<DBTableType>*&, int&>(
                (BaseTemplateConfigTypeList<DBTableType>**)&local_50, (int*)(this + 1));
            dbTableType = local_50;
        LAB_1005809db:
        LAB_1005809e4:
            uVar11 = 1;
        } else {
            arg1_01 = this[1]._vptr->GetClientGroupID(arg1);
            uVar3 = this[1]._vptr->GetClientFileID(arg1);
            local_40 = nullptr;
            puVar6 =
                (uint8_t*)(**(void (**)(...))((this[2]._vptr)->_dtor + 24))(this[2]._vptr, &local_40, this[3]._vptr);
            if (puVar6 != DataStatus::MISSING) {
                if (local_40->DoesFileExist(arg1_01, uVar3) != '\0') {
                    if (puVar6 == DataStatus::READY) {
                        uVar3 = local_40->GetFileIndex(arg1_01, uVar3);
                        uVar4 = this[1]._vptr->GetUIHeight();
                        arg1_03 = 0;
                        if (1 < uVar4) {
                            arg1_03 = (unsigned long)arg1_01;
                        }
                        iVar5 = local_40->GetFileCount(arg1_01);
                        arg1_00 = (PacketT<Array<unsigned char>>*)(this + 22);
                        this_01 = (Array<Array<unsigned char>>*)(this + 19);
                        pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                        if (iVar5 == 1) {
                            arg1_00->Reserve(pvVar7->end());
                            arg1_00->SetPos(0);
                            pvVar8 = (void*)arg1_00->GetDataPtr();
                            this_00 = (Array<unsigned char>*)(*this_01)[arg1_03];
                            pvVar9 = (void*)(*this_00)[0];
                            pvVar7 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                            sVar10 = pvVar7->end();
                            _memcpy(pvVar8, pvVar9, sVar10);
                        } else {
                            Js5DiskFileFormat::GetGroupFileData((PacketT<Array<unsigned char> _>*)arg1_00,
                                                                (Array<unsigned char>*)pvVar7, uVar3);
                        }
                        MakeSharedPool<DBTableType, 4>::MakeShared<BaseTemplateConfigTypeList<DBTableType>*&, int&>(
                            (BaseTemplateConfigTypeList<DBTableType>**)&local_50, (int*)(this + 1));
                        plVar12 = (long*)local_50.operator->();
                        puVar6 = (uint8_t*)(**(void (**)(...))(*plVar12 + 32))(plVar12, arg1_00);
                        if (puVar6 == DataStatus::READY) {
                            plVar12 = (long*)local_50.operator->();
                            (**(void (**)(...))(*plVar12 + 24))(plVar12);
                            pCVar1 = this[1]._vptr;
                            puVar6 = (uint8_t*)(**(void (**)(...))(pCVar1->_dtor + 72))(pCVar1, &local_50);
                            if (puVar6 == DataStatus::READY) {
                                dbTableType = local_50;
                            }
                        }
                        goto LAB_1005809db;
                    }
                    goto LAB_1005809e4;
                }
            }
            uVar11 = 0;
        }
        return uVar11;
    }

    // 0x100580a90
    auto ConfigTypePreloadPackedContainer<DBTableType>::AddConfigID(const shared_ptr<DBTableType>& dbTableType,
                                                                    int arg2) {
        auto result;
        unsigned long uVar1;
        unique_ptr<ConfigTypePreloadPackedContainer<DBTableType>::PageList>* puVar2;
        long lVar3;
        array<ConfigTypePreloadPackedContainer<DBTableType>::ConfigPage*, 256ul>* paVar4;
        ReturnValue* pRVar5;
        ReturnValue this;
        ReturnValue* pRVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue local_48;
        unsigned int local_38;
        unsigned int local_34;

        if (arg2 == -1) {
            pRVar6 = &result + 17;
            *pRVar6 = dbTableType;
        } else {
            local_34 = arg2 & 4294901760;
            pRVar6 = &result + 9;
            uVar1 = pRVar6->size();
            arg1 = 0;
            if (uVar1 != 0) {
                do {
                    puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<DBTableType>::PageList>*)(*pRVar6)[arg1];
                    lVar3 = (*puVar2).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == local_34)
                        break;
                    arg1 = (unsigned long)((int)arg1 + 1);
                } while (arg1 < uVar1);
            }
            if (uVar1 == arg1) {
                local_48 =
                    std::make_unique<ConfigTypePreloadPackedContainer<DBTableType>::PageList, unsigned int&>(local_34);
                eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<DBTableType>::PageList>>::emplace_back<
                    std::unique_ptr<ConfigTypePreloadPackedContainer<DBTableType>::PageList>>(
                    (vector<std::unique_ptr<ConfigTypePreloadPackedContainer<DBTableType>::PageList>>*)pRVar6,
                    (unique_ptr<
                        ConfigTypePreloadPackedContainer<DBTableType>::PageList,
                        std::default_delete<ConfigTypePreloadPackedContainer<DBTableType>::PageList> _>*)&local_48);
            }
            uVar1 = (unsigned long)(arg2 - local_34 >> 8);
            puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<DBTableType>::PageList>*)(*pRVar6)[arg1];
            paVar4 = (array<ConfigTypePreloadPackedContainer<DBTableType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
            pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
            this = *pRVar5;
            uVar7 = arg2 & 255U;
            if (this == (ReturnValue)0) {
                local_38 = arg2 & 255U;
                this = (ReturnValue)AllocatePageBuffer(&result);
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<DBTableType>::PageList>*)(*pRVar6)[arg1];
                paVar4 =
                    (array<ConfigTypePreloadPackedContainer<DBTableType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
                pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
                *pRVar5 = this;
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<DBTableType>::PageList>*)(*pRVar6)[arg1];
                lVar3 = (*puVar2).operator->();
                if (*(unsigned int*)(lVar3 + 2048) != local_34) {
                    LogAssert("m_pageListContainer[thisPageList]->m_pageListID == pageListID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigTypePreloadPackedContainer.h",
                              469, nullptr);
                }
                uVar7 = local_38;
            }
            pRVar6 = (ReturnValue*)(*this)[(unsigned long)uVar7];
            *pRVar6 = dbTableType;
            *(int*)((long)this + 4096) = *(int*)((long)this + 4096) + 1;
            *(int*)(&result + 13) = arg2;
            &result[14] = this;
            *(unsigned int*)(&result + 15) = uVar7;
        }
        return pRVar6;
    }

    // 0x100580e00
    ConfigPage* ConfigTypePreloadPackedContainer<DBTableType>::AllocatePageBuffer() {
        AllocatedBlock local_28 = this[16]._vptr->Allocate(4128);
        void* pvVar1 = local_28.field_8;
        if (local_28.field_8 == nullptr) {
            LogAssert("block.m_address != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      534, nullptr);
        }
        new (local_28.field_8) ConfigPage();
        *(unsigned long*)((long)pvVar1 + 4120) = local_28.field_16;
        *(uint64_t*)((long)pvVar1 + 4104) = local_28._0_8_;
        *(void**)((long)pvVar1 + 4112) = local_28.field_8;
        return pvVar1;
    }

    // 0x1005811a0
    ConfigTypePreloadPackedContainer<DBTableType>::PageList::PageList(unsigned int arg1) {
        uint64_t* puVar1;

        *(unsigned int*)(this + 2048) = arg1;
        *(uint32_t*)(this + 2052) = 0;
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1_00];
            *puVar1 = 0;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
    }

    // 0x100581250
    ConfigTypePreloadPackedContainer<DBTableType>::ConfigPage::ConfigPage()
        : std::array<shared_ptr<DBTableType>, 256ul>() {
        *(uint32_t*)(this + 4096) = 0;
        new ((this + 4104)) SimpleAllocator::AllocatedBlock();
    }

    // 0x100584f90
    ConfigTypePreloadPackedContainer<InvType>::ConfigTypePreloadPackedContainer(
        BaseTemplateConfigTypeList<InvType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<InvType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                           js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8470;
        new ((this + 9)) eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<InvType>::PageList>>();
        new ((this + 17)) shared_ptr();
        new ((this + 19)) Array<Array<unsigned char>>();
        new ((this + 22)) PacketT();
        ((this + 26))->unique_ptr<true, void>();
    }

    // 0x1005850f0
    _x7e___2* ConfigTypePreloadPackedContainer<InvType>::LoadList() {
        unique_ptr* this_00;
        bool bVar2;
        bool cVar3;
        DownloadWaitHandler* pDVar6;
        CoordMapSquare* pCVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        ConfigTypePreloadPackedContainer<InvType> _vtbl* local_48;

        if (*(int*)&this[6]._vptr == 2) {
            return (_x7e___2*)DataStatus::READY;
        }
        ConfigTypePreloadPackedContainer<InvType> _vtbl* pCVar1 = this[2]._vptr;
        ConfigTypePreloadPackedContainer<InvType> _vtbl* js5ArchiveSettings = this[3]._vptr;
        Js5Index* local_40 = nullptr;
        _x7e___2* p_Var5 = (_x7e___2*)(**(void (**)(...))(pCVar1->_dtor + 24))(pCVar1, &local_40, js5ArchiveSettings);
        if (p_Var5 != (_x7e___2*)DataStatus::READY) {
            return p_Var5;
        }
        unsigned int local_34 = this[1]._vptr->GetUIHeight();
        int iVar4 = this[1]._vptr->GetStreamCountLastMix();
        *(unsigned int*)&this[8]._vptr = iVar4 + local_34;
        if (*(int*)&this[6]._vptr == 0) {
            this_00 = (unique_ptr*)(this + 26);
            local_48 = js5ArchiveSettings;
            cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar3) {
                LogAssert("!m_downloadHandler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "ConfigTypePreloadPackedContainer.h",
                          213, nullptr);
            }
            local_50 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_34);
            *this_00 = local_50;
            pDVar6 = (DownloadWaitHandler*)**this_00;
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                CheckGroupExistence(this, pDVar6, local_40, uVar8, 0);
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    CheckGroupExistence(this, pDVar6, local_40, uVar8, uVar8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            ((this + 19))->set_max_size((unsigned long)local_34, 0);
            *(uint32_t*)&this[6]._vptr = 1;
            iVar4 = *(int*)&this[6]._vptr;
            js5ArchiveSettings = local_48;
        } else {
            iVar4 = *(int*)&this[6]._vptr;
        }
        if (iVar4 != 1) {
            return (_x7e___2*)DataStatus::READY;
        }
        pDVar6 = (DownloadWaitHandler*)*(*((this + 26)));
        if ((this[1]._vptr != nullptr) && (cVar3 = (**(void (**)(...))(pCVar1->_dtor + 64))(pCVar1), cVar3)) {
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                cVar3 = pDVar6->IsComplete(0);
                if ((!cVar3) && (cVar3 = pDVar6->CanCheck(0), cVar3)) {
                    CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, 0);
                }
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    cVar3 = pDVar6->IsComplete(uVar8);
                    if ((!cVar3) && (cVar3 = pDVar6->CanCheck(uVar8), cVar3)) {
                        CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, uVar8);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            if (*(unsigned int*)&this[8]._vptr <= *(unsigned int*)((long)&this[7]._vptr + 4)) {
                ((this + 26))->reset(nullptr);
                *(uint32_t*)&this[6]._vptr = 2;
                p_Var5 = (_x7e___2*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->_x7e___2 = p_Var5;
                bVar2 = true;
                goto LAB_100585366;
            }
        }
        bVar2 = false;
        p_Var5 = (_x7e___2*)DataStatus::NOTLOADED;
    LAB_100585366:
        if (bVar2) {
            return (_x7e___2*)DataStatus::READY;
        }
        return p_Var5;
    }

    // 0x1005853b0
    void ConfigTypePreloadPackedContainer<InvType>::CacheReset() {
        unique_ptr<ConfigTypePreloadPackedContainer<InvType>::PageList>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (unique_ptr<ConfigTypePreloadPackedContainer<InvType>::PageList>*)(*this_00)[arg1];
                ((PageList*)this_01->get())->ClearPageList(*this[16]._vptr);
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        this_00->clear();
        this[14]._vptr = nullptr;
        *(uint32_t*)&this[15]._vptr = 0;
        *(uint32_t*)&this[13]._vptr = 4294967295;
    }

    // 0x100585440
    void ConfigTypePreloadPackedContainer<InvType>::CacheClean(unsigned int arg1) {
        LoadList** ppLVar1;
        ConfigTypePreloadPackedContainer<InvType> _vtbl* this_01;
        unsigned long uVar4;
        unique_ptr<ConfigTypePreloadPackedContainer<InvType>::PageList>* this_02;
        array<ConfigTypePreloadPackedContainer<InvType>::ConfigPage*, 256ul>* this_03;
        uint64_t* puVar5;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_04;
        unsigned long arg1_00;
        unsigned int uVar6;
        int iVar7;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_02 = (unique_ptr<ConfigTypePreloadPackedContainer<InvType>::PageList>*)(*this_00)[arg1_00];
                this_03 = (array<ConfigTypePreloadPackedContainer<InvType>::ConfigPage*, 256ul>*)this_02->get();
                uVar6 = *(unsigned int*)(this_03 + 2052);
                iVar7 = 16;
                do {
                    puVar5 = (uint64_t*)(*this_03)[(unsigned long)(uVar6 >> 8)];
                    this_01 = (ConfigTypePreloadPackedContainer<InvType> _vtbl*)*puVar5;
                    if (this_01 != nullptr) {
                        this_04 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*this_01)[(
                            unsigned long)(uVar6 & 255)];
                        if (this_04->unique() != '\0') {
                            this_04->reset();
                            if ((this_01 == this[14]._vptr) && ((uVar6 & 255) == *(unsigned int*)&this[15]._vptr)) {
                                this[14]._vptr = nullptr;
                                *(uint32_t*)&this[15]._vptr = 0;
                                *(uint32_t*)&this[13]._vptr = 4294967295;
                            }
                            ppLVar1 = &this_01[51].LoadList;
                            *(int*)ppLVar1 = *(int*)ppLVar1 - 1;
                            if (*(int*)ppLVar1 == 0) {
                                this[16]._vptr->DeAllocate(&this_01[51].CacheReset);
                                *puVar5 = 0;
                            }
                        }
                    }
                    uVar6 = uVar6 + 1 & 65535;
                    iVar7 = iVar7 - 1;
                } while (iVar7 != 0);
                *(unsigned int*)(this_03 + 2052) = uVar6;
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x1005855b0
    shared_ptr* ConfigTypePreloadPackedContainer<InvType>::List(int arg1, const DataStatus** arg2) {
        shared_ptr* psVar2;
        uint8_t** ppuVar3;

        if (*(int*)&this[6]._vptr != 2) {
            if (arg2 == nullptr) {
                return (shared_ptr*)PTR_NullConfigType_100ee6548;
            }
            ppuVar3 = &DataStatus::NOTLOADED;
            psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6548;
        LAB_10058560b:
            *arg2 = (DataStatus*)*ppuVar3;
            return psVar2;
        }
        psVar2 = (shared_ptr*)FindConfigID(this, arg1);
        if (shared_ptr::operator_cast_to_bool(psVar2)) {
            if (arg2 == nullptr) {
                return psVar2;
            }
            ppuVar3 = &DataStatus::READY;
            goto LAB_10058560b;
        }
        shared_ptr local_38;
        if (!(DecodeConfig(this, arg1, (shared_ptr<InvType>*)&local_38))) {
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::MISSING;
            LAB_100585681:
                *arg2 = (DataStatus*)*ppuVar3;
            }
        } else {
            if (shared_ptr::operator_cast_to_bool(&local_38)) {
                if (arg2 != nullptr) {
                    *arg2 = (DataStatus*)DataStatus::READY;
                }
                psVar2 = (shared_ptr*)AddConfigID((ReturnValue*)this, (shared_ptr<InvType>*)&local_38, arg1);
                goto LAB_10058568e;
            }
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_100585681;
            }
        }
        psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6548;
    LAB_10058568e:
        return psVar2;
    }

    // 0x1005856c0
    auto ConfigTypePreloadPackedContainer<InvType>::DirectFetch(int arg1) {
        if (*(int*)&this[6]._vptr != 2) {
            LogAssert("m_loadStep == BaseLoadAllConfigTypeContainer::LoadStep::DONE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      179, nullptr);
        }
        auto result;
        if (DecodeConfig(this, arg1, &result) == '\0') {
            LogAssert("exists",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      183, nullptr);
        }
        return result;
    }

    // 0x1005858d0
    ConfigTypePreloadPackedContainer<InvType>::~ConfigTypePreloadPackedContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8470;
        this[16]._vptr->PrintMetrics();
        CacheReset();
        ((this + 26))->~unique_ptr();
        ((this + 22))->~VBOMapper();
        ((this + 19))->~Array();
        ((this + 17))->~shared_ptr();
        ((this + 9))->~vector();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005859c0
    void ConfigTypePreloadPackedContainer<InvType>::CheckGroupExistence(DownloadWaitHandler& downloadWaitHandler,
                                                                        Js5Index* js5Index, unsigned int arg3,
                                                                        unsigned int arg4) {
        int* piVar1;

        if (js5Index == nullptr) {
            LogAssert("js5Index",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      365, nullptr);
        }
        if (js5Index->DoesGroupExist(arg3) == '\0') {
            piVar1 = (int*)((long)&this[7]._vptr + 4);
            *piVar1 = *piVar1 + 1;
        } else {
            downloadWaitHandler.SetExists(arg4);
        }
    }

    // 0x100585a40
    void ConfigTypePreloadPackedContainer<InvType>::CheckDecodeProgress(const Js5ArchiveSettings& js5ArchiveSettings,
                                                                        Js5Index* js5Index, unsigned int arg3,
                                                                        unsigned int arg4) {
        int iVar1;
        Array<unsigned char>* this_00;
        TextureAtlasReference* pTVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        void* pvVar4;
        PacketT<Array<unsigned char>>* this_02;
        void* pvVar5;
        size_t sVar6;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)this[1]._vptr->GetGroup(local_48, js5ArchiveSettings, arg3, (Priority*)Priority::HIGHEST, true,
                                              true) == DataStatus::READY) {
            this_00 = (Array<unsigned char>*)(*((this + 19)))[(unsigned long)arg4];
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            this_00->set_max_size(pTVar3->GetTextureAtlas(), 0);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*((this + 19)))[(unsigned long)arg4];
            pvVar4 = (void*)this_01->data();
            this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pvVar5 = (void*)this_02->GetDataPtr();
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            sVar6 = pTVar3->GetTextureAtlas();
            _memcpy(pvVar4, pvVar5, sVar6);
            iVar1 = js5Index->GetMaximumFileID(arg3);
            *(int*)((long)&this[7]._vptr + 4) = iVar1 + *(int*)((long)&this[7]._vptr + 4) + 1;
            ((DownloadWaitHandler*)(*((this + 26))).operator->())->Completed(arg4);
        }
    }

    // 0x100585be0
    void ConfigTypePreloadPackedContainer<InvType>::PageList::ClearPageList(SimpleAllocator& simpleAllocator) {
        ConfigPage* this_00;
        uint64_t* puVar1;

        unsigned long arg1 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1];
            this_00 = (ConfigPage*)*puVar1;
            if (this_00 != nullptr) {
                this_00->Clear();
                simpleAllocator.DeAllocate((this_00 + 4104));
                *puVar1 = 0;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x100585cc0
    void ConfigTypePreloadPackedContainer<InvType>::ConfigPage::Clear() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1];
            if (this_00->end() != 0) {
                this_00->reset();
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x100585df0
    ConfigTypePreloadPackedContainer<InvType>* ConfigTypePreloadPackedContainer<InvType>::FindConfigID(int arg1) const {
        unsigned int uVar2;
        shared_ptr* this_00;
        long lVar3;
        unique_ptr<ConfigTypePreloadPackedContainer<InvType>::PageList>* puVar4;
        unsigned long uVar5;
        array<ConfigTypePreloadPackedContainer<InvType>::ConfigPage*, 256ul>* this_01;
        long* plVar6;
        ConfigTypePreloadPackedContainer<InvType>* pCVar7;
        unsigned long arg1_00;
        unsigned int uVar8;
        ConfigTypePreloadPackedContainer<InvType> _vtbl* this_02;
        vector<eastl::pair<int, int>>* this_03;

        if (arg1 == -1) {
            pCVar7 = this + 17;
        } else {
            if (*(int*)&this[13]._vptr == arg1) {
                if (this[14]._vptr != nullptr) {
                    this_00 = (shared_ptr*)(*this[14]._vptr)[(unsigned long)*(unsigned int*)&this[15]._vptr];
                    if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                        this_02 = this[14]._vptr;
                        uVar8 = *(unsigned int*)&this[15]._vptr;
                    LAB_100585f12:
                        pCVar7 = (ConfigTypePreloadPackedContainer<InvType>*)(*this_02)[(unsigned long)uVar8];
                        return pCVar7;
                    }
                }
                uVar8 = *(unsigned int*)&this[13]._vptr;
                uVar2 = this[3]._vptr->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigTypePreloadPackedContainer.h",
                                507, "Previously loaded config ID %d (archive ID %u) unexpectedly missing",
                                (unsigned long)uVar8, (unsigned long)uVar2);
            }
            this_03 = (vector<eastl::pair<int, int>>*)(this + 9);
            lVar3 = this_03->size();
            pCVar7 = (ConfigTypePreloadPackedContainer<InvType>*)PTR_NullConfigType_100ee6548;
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<InvType>::PageList>*)(*this_03)[arg1_00];
                    lVar3 = (*puVar4).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == (arg1 & 4294901760U)) {
                        puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<InvType>::PageList>*)(*this_03)[arg1_00];
                        this_01 = (array<ConfigTypePreloadPackedContainer<InvType>::ConfigPage*, 256ul>*)(*puVar4)
                                      .operator->();
                        plVar6 = (long*)(*this_01)[(unsigned long)((unsigned int)arg1 >> 8 & 255)];
                        this_02 = (ConfigTypePreloadPackedContainer<InvType> _vtbl*)*plVar6;
                        if (this_02 == nullptr) {
                            return pCVar7;
                        }
                        uVar8 = arg1 & 255;
                        goto LAB_100585f12;
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar5 = this_03->size();
                } while (arg1_00 < uVar5);
            }
        }
        return pCVar7;
    }

    // 0x100585f30
    uint64_t ConfigTypePreloadPackedContainer<InvType>::DecodeConfig(int arg1, shared_ptr<InvType>& invType) {
        PacketT<Array<unsigned char>>* arg1_00;
        ConfigTypePreloadPackedContainer<InvType> _vtbl* pCVar1;
        unsigned int arg1_01;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        uint8_t* puVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        void* pvVar8;
        Array<unsigned char>* this_00;
        void* pvVar9;
        size_t sVar10;
        uint64_t uVar11;
        long* plVar12;
        unsigned long arg1_03;
        Array<Array<unsigned char>>* this_01;
        shared_ptr<InvType> local_50;
        Js5Index* local_40;

        invType = *PTR_NullConfigType_100ee6548;
        if (arg1 < 0) {
            MakeSharedPool<InvType, 32>::MakeShared<BaseTemplateConfigTypeList<InvType>*&, int&>(
                (BaseTemplateConfigTypeList<InvType>**)&local_50, (int*)(this + 1));
            invType = local_50;
        LAB_1005860bb:
        LAB_1005860c4:
            uVar11 = 1;
        } else {
            arg1_01 = this[1]._vptr->GetClientGroupID(arg1);
            uVar3 = this[1]._vptr->GetClientFileID(arg1);
            local_40 = nullptr;
            puVar6 =
                (uint8_t*)(**(void (**)(...))((this[2]._vptr)->_dtor + 24))(this[2]._vptr, &local_40, this[3]._vptr);
            if (puVar6 != DataStatus::MISSING) {
                if (local_40->DoesFileExist(arg1_01, uVar3) != '\0') {
                    if (puVar6 == DataStatus::READY) {
                        uVar3 = local_40->GetFileIndex(arg1_01, uVar3);
                        uVar4 = this[1]._vptr->GetUIHeight();
                        arg1_03 = 0;
                        if (1 < uVar4) {
                            arg1_03 = (unsigned long)arg1_01;
                        }
                        iVar5 = local_40->GetFileCount(arg1_01);
                        arg1_00 = (PacketT<Array<unsigned char>>*)(this + 22);
                        this_01 = (Array<Array<unsigned char>>*)(this + 19);
                        pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                        if (iVar5 == 1) {
                            arg1_00->Reserve(pvVar7->end());
                            arg1_00->SetPos(0);
                            pvVar8 = (void*)arg1_00->GetDataPtr();
                            this_00 = (Array<unsigned char>*)(*this_01)[arg1_03];
                            pvVar9 = (void*)(*this_00)[0];
                            pvVar7 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                            sVar10 = pvVar7->end();
                            _memcpy(pvVar8, pvVar9, sVar10);
                        } else {
                            Js5DiskFileFormat::GetGroupFileData((PacketT<Array<unsigned char> _>*)arg1_00,
                                                                (Array<unsigned char>*)pvVar7, uVar3);
                        }
                        MakeSharedPool<InvType, 32>::MakeShared<BaseTemplateConfigTypeList<InvType>*&, int&>(
                            (BaseTemplateConfigTypeList<InvType>**)&local_50, (int*)(this + 1));
                        plVar12 = (long*)local_50.operator->();
                        puVar6 = (uint8_t*)(**(void (**)(...))(*plVar12 + 32))(plVar12, arg1_00);
                        if (puVar6 == DataStatus::READY) {
                            plVar12 = (long*)local_50.operator->();
                            (**(void (**)(...))(*plVar12 + 24))(plVar12);
                            pCVar1 = this[1]._vptr;
                            puVar6 = (uint8_t*)(**(void (**)(...))(pCVar1->_dtor + 72))(pCVar1, &local_50);
                            if (puVar6 == DataStatus::READY) {
                                invType = local_50;
                            }
                        }
                        goto LAB_1005860bb;
                    }
                    goto LAB_1005860c4;
                }
            }
            uVar11 = 0;
        }
        return uVar11;
    }

    // 0x100586170
    auto ConfigTypePreloadPackedContainer<InvType>::AddConfigID(const shared_ptr<InvType>& invType, int arg2) {
        auto result;
        unsigned long uVar1;
        unique_ptr<ConfigTypePreloadPackedContainer<InvType>::PageList>* puVar2;
        long lVar3;
        array<ConfigTypePreloadPackedContainer<InvType>::ConfigPage*, 256ul>* paVar4;
        ReturnValue* pRVar5;
        ReturnValue this;
        ReturnValue* pRVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue local_48;
        unsigned int local_38;
        unsigned int local_34;

        if (arg2 == -1) {
            pRVar6 = &result + 17;
            *pRVar6 = invType;
        } else {
            local_34 = arg2 & 4294901760;
            pRVar6 = &result + 9;
            uVar1 = pRVar6->size();
            arg1 = 0;
            if (uVar1 != 0) {
                do {
                    puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<InvType>::PageList>*)(*pRVar6)[arg1];
                    lVar3 = (*puVar2).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == local_34)
                        break;
                    arg1 = (unsigned long)((int)arg1 + 1);
                } while (arg1 < uVar1);
            }
            if (uVar1 == arg1) {
                local_48 =
                    std::make_unique<ConfigTypePreloadPackedContainer<InvType>::PageList, unsigned int&>(local_34);
                eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<InvType>::PageList>>::emplace_back<
                    std::unique_ptr<ConfigTypePreloadPackedContainer<InvType>::PageList>>(
                    (vector<std::unique_ptr<ConfigTypePreloadPackedContainer<InvType>::PageList>>*)pRVar6,
                    (unique_ptr<ConfigTypePreloadPackedContainer<InvType>::PageList,
                                std::default_delete<ConfigTypePreloadPackedContainer<InvType>::PageList> _>*)&local_48);
            }
            uVar1 = (unsigned long)(arg2 - local_34 >> 8);
            puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<InvType>::PageList>*)(*pRVar6)[arg1];
            paVar4 = (array<ConfigTypePreloadPackedContainer<InvType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
            pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
            this = *pRVar5;
            uVar7 = arg2 & 255U;
            if (this == (ReturnValue)0) {
                local_38 = arg2 & 255U;
                this = (ReturnValue)AllocatePageBuffer(&result);
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<InvType>::PageList>*)(*pRVar6)[arg1];
                paVar4 = (array<ConfigTypePreloadPackedContainer<InvType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
                pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
                *pRVar5 = this;
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<InvType>::PageList>*)(*pRVar6)[arg1];
                lVar3 = (*puVar2).operator->();
                if (*(unsigned int*)(lVar3 + 2048) != local_34) {
                    LogAssert("m_pageListContainer[thisPageList]->m_pageListID == pageListID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigTypePreloadPackedContainer.h",
                              469, nullptr);
                }
                uVar7 = local_38;
            }
            pRVar6 = (ReturnValue*)(*this)[(unsigned long)uVar7];
            *pRVar6 = invType;
            *(int*)((long)this + 4096) = *(int*)((long)this + 4096) + 1;
            *(int*)(&result + 13) = arg2;
            &result[14] = this;
            *(unsigned int*)(&result + 15) = uVar7;
        }
        return pRVar6;
    }

    // 0x1005864e0
    ConfigPage* ConfigTypePreloadPackedContainer<InvType>::AllocatePageBuffer() {
        AllocatedBlock local_28 = this[16]._vptr->Allocate(4128);
        void* pvVar1 = local_28.field_8;
        if (local_28.field_8 == nullptr) {
            LogAssert("block.m_address != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      534, nullptr);
        }
        new (local_28.field_8) ConfigPage();
        *(unsigned long*)((long)pvVar1 + 4120) = local_28.field_16;
        *(uint64_t*)((long)pvVar1 + 4104) = local_28._0_8_;
        *(void**)((long)pvVar1 + 4112) = local_28.field_8;
        return pvVar1;
    }

    // 0x100586880
    ConfigTypePreloadPackedContainer<InvType>::PageList::PageList(unsigned int arg1) {
        uint64_t* puVar1;

        *(unsigned int*)(this + 2048) = arg1;
        *(uint32_t*)(this + 2052) = 0;
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1_00];
            *puVar1 = 0;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
    }

    // 0x100586930
    ConfigTypePreloadPackedContainer<InvType>::ConfigPage::ConfigPage() : std::array<shared_ptr<InvType>, 256ul>() {
        *(uint32_t*)(this + 4096) = 0;
        new ((this + 4104)) SimpleAllocator::AllocatedBlock();
    }

    // 0x100589320
    ConfigTypePreloadPackedContainer<VarBitType>::ConfigTypePreloadPackedContainer(
        BaseTemplateConfigTypeList<VarBitType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<VarBitType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                              js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8408;
        new ((this + 9)) eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<VarBitType>::PageList>>();
        new ((this + 17)) shared_ptr();
        new ((this + 19)) Array<Array<unsigned char>>();
        new ((this + 22)) PacketT();
        ((this + 26))->unique_ptr<true, void>();
    }

    // 0x100589480
    _x7e___2* ConfigTypePreloadPackedContainer<VarBitType>::LoadList() {
        unique_ptr* this_00;
        bool bVar2;
        bool cVar3;
        DownloadWaitHandler* pDVar6;
        CoordMapSquare* pCVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        ConfigTypePreloadPackedContainer<VarBitType> _vtbl* local_48;

        if (*(int*)&this[6]._vptr == 2) {
            return (_x7e___2*)DataStatus::READY;
        }
        ConfigTypePreloadPackedContainer<VarBitType> _vtbl* pCVar1 = this[2]._vptr;
        ConfigTypePreloadPackedContainer<VarBitType> _vtbl* js5ArchiveSettings = this[3]._vptr;
        Js5Index* local_40 = nullptr;
        _x7e___2* p_Var5 = (_x7e___2*)(**(void (**)(...))(pCVar1->_dtor + 24))(pCVar1, &local_40, js5ArchiveSettings);
        if (p_Var5 != (_x7e___2*)DataStatus::READY) {
            return p_Var5;
        }
        unsigned int local_34 = this[1]._vptr->GetUIHeight();
        int iVar4 = this[1]._vptr->GetStreamCountLastMix();
        *(unsigned int*)&this[8]._vptr = iVar4 + local_34;
        if (*(int*)&this[6]._vptr == 0) {
            this_00 = (unique_ptr*)(this + 26);
            local_48 = js5ArchiveSettings;
            cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar3) {
                LogAssert("!m_downloadHandler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "ConfigTypePreloadPackedContainer.h",
                          213, nullptr);
            }
            local_50 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_34);
            *this_00 = local_50;
            pDVar6 = (DownloadWaitHandler*)**this_00;
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                CheckGroupExistence(this, pDVar6, local_40, uVar8, 0);
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    CheckGroupExistence(this, pDVar6, local_40, uVar8, uVar8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            ((this + 19))->set_max_size((unsigned long)local_34, 0);
            *(uint32_t*)&this[6]._vptr = 1;
            iVar4 = *(int*)&this[6]._vptr;
            js5ArchiveSettings = local_48;
        } else {
            iVar4 = *(int*)&this[6]._vptr;
        }
        if (iVar4 != 1) {
            return (_x7e___2*)DataStatus::READY;
        }
        pDVar6 = (DownloadWaitHandler*)*(*((this + 26)));
        if ((this[1]._vptr != nullptr) && (cVar3 = (**(void (**)(...))(pCVar1->_dtor + 64))(pCVar1), cVar3)) {
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                cVar3 = pDVar6->IsComplete(0);
                if ((!cVar3) && (cVar3 = pDVar6->CanCheck(0), cVar3)) {
                    CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, 0);
                }
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    cVar3 = pDVar6->IsComplete(uVar8);
                    if ((!cVar3) && (cVar3 = pDVar6->CanCheck(uVar8), cVar3)) {
                        CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, uVar8);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            if (*(unsigned int*)&this[8]._vptr <= *(unsigned int*)((long)&this[7]._vptr + 4)) {
                ((this + 26))->reset(nullptr);
                *(uint32_t*)&this[6]._vptr = 2;
                p_Var5 = (_x7e___2*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->_x7e___2 = p_Var5;
                bVar2 = true;
                goto LAB_1005896f6;
            }
        }
        bVar2 = false;
        p_Var5 = (_x7e___2*)DataStatus::NOTLOADED;
    LAB_1005896f6:
        if (bVar2) {
            return (_x7e___2*)DataStatus::READY;
        }
        return p_Var5;
    }

    // 0x100589740
    void ConfigTypePreloadPackedContainer<VarBitType>::CacheReset() {
        unique_ptr<ConfigTypePreloadPackedContainer<VarBitType>::PageList>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (unique_ptr<ConfigTypePreloadPackedContainer<VarBitType>::PageList>*)(*this_00)[arg1];
                ((PageList*)this_01->get())->ClearPageList(*this[16]._vptr);
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        this_00->clear();
        this[14]._vptr = nullptr;
        *(uint32_t*)&this[15]._vptr = 0;
        *(uint32_t*)&this[13]._vptr = 4294967295;
    }

    // 0x1005897d0
    void ConfigTypePreloadPackedContainer<VarBitType>::CacheClean(unsigned int arg1) {
        LoadList** ppLVar1;
        ConfigTypePreloadPackedContainer<VarBitType> _vtbl* this_01;
        unsigned long uVar4;
        unique_ptr<ConfigTypePreloadPackedContainer<VarBitType>::PageList>* this_02;
        array<ConfigTypePreloadPackedContainer<VarBitType>::ConfigPage*, 256ul>* this_03;
        uint64_t* puVar5;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_04;
        unsigned long arg1_00;
        unsigned int uVar6;
        int iVar7;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_02 = (unique_ptr<ConfigTypePreloadPackedContainer<VarBitType>::PageList>*)(*this_00)[arg1_00];
                this_03 = (array<ConfigTypePreloadPackedContainer<VarBitType>::ConfigPage*, 256ul>*)this_02->get();
                uVar6 = *(unsigned int*)(this_03 + 2052);
                iVar7 = 16;
                do {
                    puVar5 = (uint64_t*)(*this_03)[(unsigned long)(uVar6 >> 8)];
                    this_01 = (ConfigTypePreloadPackedContainer<VarBitType> _vtbl*)*puVar5;
                    if (this_01 != nullptr) {
                        this_04 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*this_01)[(
                            unsigned long)(uVar6 & 255)];
                        if (this_04->unique() != '\0') {
                            this_04->reset();
                            if ((this_01 == this[14]._vptr) && ((uVar6 & 255) == *(unsigned int*)&this[15]._vptr)) {
                                this[14]._vptr = nullptr;
                                *(uint32_t*)&this[15]._vptr = 0;
                                *(uint32_t*)&this[13]._vptr = 4294967295;
                            }
                            ppLVar1 = &this_01[51].LoadList;
                            *(int*)ppLVar1 = *(int*)ppLVar1 - 1;
                            if (*(int*)ppLVar1 == 0) {
                                this[16]._vptr->DeAllocate(&this_01[51].CacheReset);
                                *puVar5 = 0;
                            }
                        }
                    }
                    uVar6 = uVar6 + 1 & 65535;
                    iVar7 = iVar7 - 1;
                } while (iVar7 != 0);
                *(unsigned int*)(this_03 + 2052) = uVar6;
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x100589940
    shared_ptr* ConfigTypePreloadPackedContainer<VarBitType>::List(int arg1, const DataStatus** arg2) {
        shared_ptr* psVar2;
        uint8_t** ppuVar3;

        if (*(int*)&this[6]._vptr != 2) {
            if (arg2 == nullptr) {
                return (shared_ptr*)PTR_NullConfigType_100ee64e0;
            }
            ppuVar3 = &DataStatus::NOTLOADED;
            psVar2 = (shared_ptr*)PTR_NullConfigType_100ee64e0;
        LAB_10058999b:
            *arg2 = (DataStatus*)*ppuVar3;
            return psVar2;
        }
        psVar2 = (shared_ptr*)FindConfigID(this, arg1);
        if (shared_ptr::operator_cast_to_bool(psVar2)) {
            if (arg2 == nullptr) {
                return psVar2;
            }
            ppuVar3 = &DataStatus::READY;
            goto LAB_10058999b;
        }
        shared_ptr local_38;
        if (!(DecodeConfig(this, arg1, (shared_ptr<VarBitType>*)&local_38))) {
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::MISSING;
            LAB_100589a11:
                *arg2 = (DataStatus*)*ppuVar3;
            }
        } else {
            if (shared_ptr::operator_cast_to_bool(&local_38)) {
                if (arg2 != nullptr) {
                    *arg2 = (DataStatus*)DataStatus::READY;
                }
                psVar2 = (shared_ptr*)AddConfigID((ReturnValue*)this, (shared_ptr<VarBitType>*)&local_38, arg1);
                goto LAB_100589a1e;
            }
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_100589a11;
            }
        }
        psVar2 = (shared_ptr*)PTR_NullConfigType_100ee64e0;
    LAB_100589a1e:
        return psVar2;
    }

    // 0x100589a50
    auto ConfigTypePreloadPackedContainer<VarBitType>::DirectFetch(int arg1) {
        if (*(int*)&this[6]._vptr != 2) {
            LogAssert("m_loadStep == BaseLoadAllConfigTypeContainer::LoadStep::DONE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      179, nullptr);
        }
        auto result;
        if (DecodeConfig(this, arg1, &result) == '\0') {
            LogAssert("exists",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      183, nullptr);
        }
        return result;
    }

    // 0x100589c60
    ConfigTypePreloadPackedContainer<VarBitType>::~ConfigTypePreloadPackedContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8408;
        this[16]._vptr->PrintMetrics();
        CacheReset();
        ((this + 26))->~unique_ptr();
        ((this + 22))->~VBOMapper();
        ((this + 19))->~Array();
        ((this + 17))->~shared_ptr();
        ((this + 9))->~vector();
        ((this + 5))->~AutoSingleton();
    }

    // 0x100589d50
    void ConfigTypePreloadPackedContainer<VarBitType>::CheckGroupExistence(DownloadWaitHandler& downloadWaitHandler,
                                                                           Js5Index* js5Index, unsigned int arg3,
                                                                           unsigned int arg4) {
        int* piVar1;

        if (js5Index == nullptr) {
            LogAssert("js5Index",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      365, nullptr);
        }
        if (js5Index->DoesGroupExist(arg3) == '\0') {
            piVar1 = (int*)((long)&this[7]._vptr + 4);
            *piVar1 = *piVar1 + 1;
        } else {
            downloadWaitHandler.SetExists(arg4);
        }
    }

    // 0x100589dd0
    void ConfigTypePreloadPackedContainer<VarBitType>::CheckDecodeProgress(const Js5ArchiveSettings& js5ArchiveSettings,
                                                                           Js5Index* js5Index, unsigned int arg3,
                                                                           unsigned int arg4) {
        int iVar1;
        Array<unsigned char>* this_00;
        TextureAtlasReference* pTVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        void* pvVar4;
        PacketT<Array<unsigned char>>* this_02;
        void* pvVar5;
        size_t sVar6;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)this[1]._vptr->GetGroup(local_48, js5ArchiveSettings, arg3, (Priority*)Priority::HIGHEST, true,
                                              true) == DataStatus::READY) {
            this_00 = (Array<unsigned char>*)(*((this + 19)))[(unsigned long)arg4];
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            this_00->set_max_size(pTVar3->GetTextureAtlas(), 0);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*((this + 19)))[(unsigned long)arg4];
            pvVar4 = (void*)this_01->data();
            this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pvVar5 = (void*)this_02->GetDataPtr();
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            sVar6 = pTVar3->GetTextureAtlas();
            _memcpy(pvVar4, pvVar5, sVar6);
            iVar1 = js5Index->GetMaximumFileID(arg3);
            *(int*)((long)&this[7]._vptr + 4) = iVar1 + *(int*)((long)&this[7]._vptr + 4) + 1;
            ((DownloadWaitHandler*)(*((this + 26))).operator->())->Completed(arg4);
        }
    }

    // 0x100589f70
    void ConfigTypePreloadPackedContainer<VarBitType>::PageList::ClearPageList(SimpleAllocator& simpleAllocator) {
        ConfigPage* this_00;
        uint64_t* puVar1;

        unsigned long arg1 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1];
            this_00 = (ConfigPage*)*puVar1;
            if (this_00 != nullptr) {
                this_00->Clear();
                simpleAllocator.DeAllocate((this_00 + 4104));
                *puVar1 = 0;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x10058a050
    void ConfigTypePreloadPackedContainer<VarBitType>::ConfigPage::Clear() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1];
            if (this_00->end() != 0) {
                this_00->reset();
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x10058a180
    ConfigTypePreloadPackedContainer<VarBitType>*
    ConfigTypePreloadPackedContainer<VarBitType>::FindConfigID(int arg1) const {
        unsigned int uVar2;
        shared_ptr* this_00;
        long lVar3;
        unique_ptr<ConfigTypePreloadPackedContainer<VarBitType>::PageList>* puVar4;
        unsigned long uVar5;
        array<ConfigTypePreloadPackedContainer<VarBitType>::ConfigPage*, 256ul>* this_01;
        long* plVar6;
        ConfigTypePreloadPackedContainer<VarBitType>* pCVar7;
        unsigned long arg1_00;
        unsigned int uVar8;
        ConfigTypePreloadPackedContainer<VarBitType> _vtbl* this_02;
        vector<eastl::pair<int, int>>* this_03;

        if (arg1 == -1) {
            pCVar7 = this + 17;
        } else {
            if (*(int*)&this[13]._vptr == arg1) {
                if (this[14]._vptr != nullptr) {
                    this_00 = (shared_ptr*)(*this[14]._vptr)[(unsigned long)*(unsigned int*)&this[15]._vptr];
                    if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                        this_02 = this[14]._vptr;
                        uVar8 = *(unsigned int*)&this[15]._vptr;
                    LAB_10058a2a2:
                        pCVar7 = (ConfigTypePreloadPackedContainer<VarBitType>*)(*this_02)[(unsigned long)uVar8];
                        return pCVar7;
                    }
                }
                uVar8 = *(unsigned int*)&this[13]._vptr;
                uVar2 = this[3]._vptr->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigTypePreloadPackedContainer.h",
                                507, "Previously loaded config ID %d (archive ID %u) unexpectedly missing",
                                (unsigned long)uVar8, (unsigned long)uVar2);
            }
            this_03 = (vector<eastl::pair<int, int>>*)(this + 9);
            lVar3 = this_03->size();
            pCVar7 = (ConfigTypePreloadPackedContainer<VarBitType>*)PTR_NullConfigType_100ee64e0;
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<VarBitType>::PageList>*)(*this_03)[arg1_00];
                    lVar3 = (*puVar4).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == (arg1 & 4294901760U)) {
                        puVar4 =
                            (unique_ptr<ConfigTypePreloadPackedContainer<VarBitType>::PageList>*)(*this_03)[arg1_00];
                        this_01 = (array<ConfigTypePreloadPackedContainer<VarBitType>::ConfigPage*, 256ul>*)(*puVar4)
                                      .operator->();
                        plVar6 = (long*)(*this_01)[(unsigned long)((unsigned int)arg1 >> 8 & 255)];
                        this_02 = (ConfigTypePreloadPackedContainer<VarBitType> _vtbl*)*plVar6;
                        if (this_02 == nullptr) {
                            return pCVar7;
                        }
                        uVar8 = arg1 & 255;
                        goto LAB_10058a2a2;
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar5 = this_03->size();
                } while (arg1_00 < uVar5);
            }
        }
        return pCVar7;
    }

    // 0x10058a2c0
    uint64_t ConfigTypePreloadPackedContainer<VarBitType>::DecodeConfig(int arg1, shared_ptr<VarBitType>& varBitType) {
        PacketT<Array<unsigned char>>* arg1_00;
        ConfigTypePreloadPackedContainer<VarBitType> _vtbl* pCVar1;
        unsigned int arg1_01;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        uint8_t* puVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        void* pvVar8;
        Array<unsigned char>* this_00;
        void* pvVar9;
        size_t sVar10;
        uint64_t uVar11;
        long* plVar12;
        unsigned long arg1_03;
        Array<Array<unsigned char>>* this_01;
        shared_ptr<VarBitType> local_50;
        Js5Index* local_40;

        varBitType = *PTR_NullConfigType_100ee64e0;
        if (arg1 < 0) {
            MakeSharedPool<VarBitType, 2048>::MakeShared<BaseTemplateConfigTypeList<VarBitType>*&, int&>(
                (BaseTemplateConfigTypeList<VarBitType>**)&local_50, (int*)(this + 1));
            varBitType = local_50;
        LAB_10058a44b:
        LAB_10058a454:
            uVar11 = 1;
        } else {
            arg1_01 = this[1]._vptr->GetClientGroupID(arg1);
            uVar3 = this[1]._vptr->GetClientFileID(arg1);
            local_40 = nullptr;
            puVar6 =
                (uint8_t*)(**(void (**)(...))((this[2]._vptr)->_dtor + 24))(this[2]._vptr, &local_40, this[3]._vptr);
            if (puVar6 != DataStatus::MISSING) {
                if (local_40->DoesFileExist(arg1_01, uVar3) != '\0') {
                    if (puVar6 == DataStatus::READY) {
                        uVar3 = local_40->GetFileIndex(arg1_01, uVar3);
                        uVar4 = this[1]._vptr->GetUIHeight();
                        arg1_03 = 0;
                        if (1 < uVar4) {
                            arg1_03 = (unsigned long)arg1_01;
                        }
                        iVar5 = local_40->GetFileCount(arg1_01);
                        arg1_00 = (PacketT<Array<unsigned char>>*)(this + 22);
                        this_01 = (Array<Array<unsigned char>>*)(this + 19);
                        pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                        if (iVar5 == 1) {
                            arg1_00->Reserve(pvVar7->end());
                            arg1_00->SetPos(0);
                            pvVar8 = (void*)arg1_00->GetDataPtr();
                            this_00 = (Array<unsigned char>*)(*this_01)[arg1_03];
                            pvVar9 = (void*)(*this_00)[0];
                            pvVar7 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                            sVar10 = pvVar7->end();
                            _memcpy(pvVar8, pvVar9, sVar10);
                        } else {
                            Js5DiskFileFormat::GetGroupFileData((PacketT<Array<unsigned char> _>*)arg1_00,
                                                                (Array<unsigned char>*)pvVar7, uVar3);
                        }
                        MakeSharedPool<VarBitType, 2048>::MakeShared<BaseTemplateConfigTypeList<VarBitType>*&, int&>(
                            (BaseTemplateConfigTypeList<VarBitType>**)&local_50, (int*)(this + 1));
                        plVar12 = (long*)local_50.operator->();
                        puVar6 = (uint8_t*)(**(void (**)(...))(*plVar12 + 32))(plVar12, arg1_00);
                        if (puVar6 == DataStatus::READY) {
                            plVar12 = (long*)local_50.operator->();
                            (**(void (**)(...))(*plVar12 + 24))(plVar12);
                            pCVar1 = this[1]._vptr;
                            puVar6 = (uint8_t*)(**(void (**)(...))(pCVar1->_dtor + 72))(pCVar1, &local_50);
                            if (puVar6 == DataStatus::READY) {
                                varBitType = local_50;
                            }
                        }
                        goto LAB_10058a44b;
                    }
                    goto LAB_10058a454;
                }
            }
            uVar11 = 0;
        }
        return uVar11;
    }

    // 0x10058a500
    auto ConfigTypePreloadPackedContainer<VarBitType>::AddConfigID(const shared_ptr<VarBitType>& varBitType, int arg2) {
        auto result;
        unsigned long uVar1;
        unique_ptr<ConfigTypePreloadPackedContainer<VarBitType>::PageList>* puVar2;
        long lVar3;
        array<ConfigTypePreloadPackedContainer<VarBitType>::ConfigPage*, 256ul>* paVar4;
        ReturnValue* pRVar5;
        ReturnValue this;
        ReturnValue* pRVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue local_48;
        unsigned int local_38;
        unsigned int local_34;

        if (arg2 == -1) {
            pRVar6 = &result + 17;
            *pRVar6 = varBitType;
        } else {
            local_34 = arg2 & 4294901760;
            pRVar6 = &result + 9;
            uVar1 = pRVar6->size();
            arg1 = 0;
            if (uVar1 != 0) {
                do {
                    puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<VarBitType>::PageList>*)(*pRVar6)[arg1];
                    lVar3 = (*puVar2).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == local_34)
                        break;
                    arg1 = (unsigned long)((int)arg1 + 1);
                } while (arg1 < uVar1);
            }
            if (uVar1 == arg1) {
                local_48 =
                    std::make_unique<ConfigTypePreloadPackedContainer<VarBitType>::PageList, unsigned int&>(local_34);
                eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<VarBitType>::PageList>>::emplace_back<
                    std::unique_ptr<ConfigTypePreloadPackedContainer<VarBitType>::PageList>>(
                    (vector<std::unique_ptr<ConfigTypePreloadPackedContainer<VarBitType>::PageList>>*)pRVar6,
                    (unique_ptr<
                        ConfigTypePreloadPackedContainer<VarBitType>::PageList,
                        std::default_delete<ConfigTypePreloadPackedContainer<VarBitType>::PageList> _>*)&local_48);
            }
            uVar1 = (unsigned long)(arg2 - local_34 >> 8);
            puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<VarBitType>::PageList>*)(*pRVar6)[arg1];
            paVar4 = (array<ConfigTypePreloadPackedContainer<VarBitType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
            pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
            this = *pRVar5;
            uVar7 = arg2 & 255U;
            if (this == (ReturnValue)0) {
                local_38 = arg2 & 255U;
                this = (ReturnValue)AllocatePageBuffer(&result);
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<VarBitType>::PageList>*)(*pRVar6)[arg1];
                paVar4 =
                    (array<ConfigTypePreloadPackedContainer<VarBitType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
                pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
                *pRVar5 = this;
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<VarBitType>::PageList>*)(*pRVar6)[arg1];
                lVar3 = (*puVar2).operator->();
                if (*(unsigned int*)(lVar3 + 2048) != local_34) {
                    LogAssert("m_pageListContainer[thisPageList]->m_pageListID == pageListID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigTypePreloadPackedContainer.h",
                              469, nullptr);
                }
                uVar7 = local_38;
            }
            pRVar6 = (ReturnValue*)(*this)[(unsigned long)uVar7];
            *pRVar6 = varBitType;
            *(int*)((long)this + 4096) = *(int*)((long)this + 4096) + 1;
            *(int*)(&result + 13) = arg2;
            &result[14] = this;
            *(unsigned int*)(&result + 15) = uVar7;
        }
        return pRVar6;
    }

    // 0x10058a870
    ConfigPage* ConfigTypePreloadPackedContainer<VarBitType>::AllocatePageBuffer() {
        AllocatedBlock local_28 = this[16]._vptr->Allocate(4128);
        void* pvVar1 = local_28.field_8;
        if (local_28.field_8 == nullptr) {
            LogAssert("block.m_address != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      534, nullptr);
        }
        new (local_28.field_8) ConfigPage();
        *(unsigned long*)((long)pvVar1 + 4120) = local_28.field_16;
        *(uint64_t*)((long)pvVar1 + 4104) = local_28._0_8_;
        *(void**)((long)pvVar1 + 4112) = local_28.field_8;
        return pvVar1;
    }

    // 0x10058ac10
    ConfigTypePreloadPackedContainer<VarBitType>::PageList::PageList(unsigned int arg1) {
        uint64_t* puVar1;

        *(unsigned int*)(this + 2048) = arg1;
        *(uint32_t*)(this + 2052) = 0;
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1_00];
            *puVar1 = 0;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
    }

    // 0x10058acc0
    ConfigTypePreloadPackedContainer<VarBitType>::ConfigPage::ConfigPage()
        : std::array<shared_ptr<VarBitType>, 256ul>() {
        *(uint32_t*)(this + 4096) = 0;
        new ((this + 4104)) SimpleAllocator::AllocatedBlock();
    }

    // 0x10058ead0
    ConfigTypePreloadPackedContainer<BASType>::ConfigTypePreloadPackedContainer(
        BaseTemplateConfigTypeList<BASType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<BASType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                           js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8460;
        new ((this + 9)) eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<BASType>::PageList>>();
        new ((this + 17)) shared_ptr();
        new ((this + 19)) Array<Array<unsigned char>>();
        new ((this + 22)) PacketT();
        ((this + 26))->unique_ptr<true, void>();
    }

    // 0x10058ec30
    _x7e___2* ConfigTypePreloadPackedContainer<BASType>::LoadList() {
        unique_ptr* this_00;
        bool bVar2;
        bool cVar3;
        DownloadWaitHandler* pDVar6;
        CoordMapSquare* pCVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        ConfigTypePreloadPackedContainer<BASType> _vtbl* local_48;

        if (*(int*)&this[6]._vptr == 2) {
            return (_x7e___2*)DataStatus::READY;
        }
        ConfigTypePreloadPackedContainer<BASType> _vtbl* pCVar1 = this[2]._vptr;
        ConfigTypePreloadPackedContainer<BASType> _vtbl* js5ArchiveSettings = this[3]._vptr;
        Js5Index* local_40 = nullptr;
        _x7e___2* p_Var5 = (_x7e___2*)(**(void (**)(...))(pCVar1->_dtor + 24))(pCVar1, &local_40, js5ArchiveSettings);
        if (p_Var5 != (_x7e___2*)DataStatus::READY) {
            return p_Var5;
        }
        unsigned int local_34 = this[1]._vptr->GetUIHeight();
        int iVar4 = this[1]._vptr->GetStreamCountLastMix();
        *(unsigned int*)&this[8]._vptr = iVar4 + local_34;
        if (*(int*)&this[6]._vptr == 0) {
            this_00 = (unique_ptr*)(this + 26);
            local_48 = js5ArchiveSettings;
            cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar3) {
                LogAssert("!m_downloadHandler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "ConfigTypePreloadPackedContainer.h",
                          213, nullptr);
            }
            local_50 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_34);
            *this_00 = local_50;
            pDVar6 = (DownloadWaitHandler*)**this_00;
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                CheckGroupExistence(this, pDVar6, local_40, uVar8, 0);
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    CheckGroupExistence(this, pDVar6, local_40, uVar8, uVar8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            ((this + 19))->set_max_size((unsigned long)local_34, 0);
            *(uint32_t*)&this[6]._vptr = 1;
            iVar4 = *(int*)&this[6]._vptr;
            js5ArchiveSettings = local_48;
        } else {
            iVar4 = *(int*)&this[6]._vptr;
        }
        if (iVar4 != 1) {
            return (_x7e___2*)DataStatus::READY;
        }
        pDVar6 = (DownloadWaitHandler*)*(*((this + 26)));
        if ((this[1]._vptr != nullptr) && (cVar3 = (**(void (**)(...))(pCVar1->_dtor + 64))(pCVar1), cVar3)) {
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                cVar3 = pDVar6->IsComplete(0);
                if ((!cVar3) && (cVar3 = pDVar6->CanCheck(0), cVar3)) {
                    CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, 0);
                }
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    cVar3 = pDVar6->IsComplete(uVar8);
                    if ((!cVar3) && (cVar3 = pDVar6->CanCheck(uVar8), cVar3)) {
                        CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, uVar8);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            if (*(unsigned int*)&this[8]._vptr <= *(unsigned int*)((long)&this[7]._vptr + 4)) {
                ((this + 26))->reset(nullptr);
                *(uint32_t*)&this[6]._vptr = 2;
                p_Var5 = (_x7e___2*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->_x7e___2 = p_Var5;
                bVar2 = true;
                goto LAB_10058eea6;
            }
        }
        bVar2 = false;
        p_Var5 = (_x7e___2*)DataStatus::NOTLOADED;
    LAB_10058eea6:
        if (bVar2) {
            return (_x7e___2*)DataStatus::READY;
        }
        return p_Var5;
    }

    // 0x10058eef0
    void ConfigTypePreloadPackedContainer<BASType>::CacheReset() {
        unique_ptr<ConfigTypePreloadPackedContainer<BASType>::PageList>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (unique_ptr<ConfigTypePreloadPackedContainer<BASType>::PageList>*)(*this_00)[arg1];
                ((PageList*)this_01->get())->ClearPageList(*this[16]._vptr);
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        this_00->clear();
        this[14]._vptr = nullptr;
        *(uint32_t*)&this[15]._vptr = 0;
        *(uint32_t*)&this[13]._vptr = 4294967295;
    }

    // 0x10058ef80
    void ConfigTypePreloadPackedContainer<BASType>::CacheClean(unsigned int arg1) {
        LoadList** ppLVar1;
        ConfigTypePreloadPackedContainer<BASType> _vtbl* this_01;
        unsigned long uVar4;
        unique_ptr<ConfigTypePreloadPackedContainer<BASType>::PageList>* this_02;
        array<ConfigTypePreloadPackedContainer<BASType>::ConfigPage*, 256ul>* this_03;
        uint64_t* puVar5;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_04;
        unsigned long arg1_00;
        unsigned int uVar6;
        int iVar7;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_02 = (unique_ptr<ConfigTypePreloadPackedContainer<BASType>::PageList>*)(*this_00)[arg1_00];
                this_03 = (array<ConfigTypePreloadPackedContainer<BASType>::ConfigPage*, 256ul>*)this_02->get();
                uVar6 = *(unsigned int*)(this_03 + 2052);
                iVar7 = 16;
                do {
                    puVar5 = (uint64_t*)(*this_03)[(unsigned long)(uVar6 >> 8)];
                    this_01 = (ConfigTypePreloadPackedContainer<BASType> _vtbl*)*puVar5;
                    if (this_01 != nullptr) {
                        this_04 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*this_01)[(
                            unsigned long)(uVar6 & 255)];
                        if (this_04->unique() != '\0') {
                            this_04->reset();
                            if ((this_01 == this[14]._vptr) && ((uVar6 & 255) == *(unsigned int*)&this[15]._vptr)) {
                                this[14]._vptr = nullptr;
                                *(uint32_t*)&this[15]._vptr = 0;
                                *(uint32_t*)&this[13]._vptr = 4294967295;
                            }
                            ppLVar1 = &this_01[51].LoadList;
                            *(int*)ppLVar1 = *(int*)ppLVar1 - 1;
                            if (*(int*)ppLVar1 == 0) {
                                this[16]._vptr->DeAllocate(&this_01[51].CacheReset);
                                *puVar5 = 0;
                            }
                        }
                    }
                    uVar6 = uVar6 + 1 & 65535;
                    iVar7 = iVar7 - 1;
                } while (iVar7 != 0);
                *(unsigned int*)(this_03 + 2052) = uVar6;
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x10058f0f0
    shared_ptr* ConfigTypePreloadPackedContainer<BASType>::List(int arg1, const DataStatus** arg2) {
        shared_ptr* psVar2;
        uint8_t** ppuVar3;

        if (*(int*)&this[6]._vptr != 2) {
            if (arg2 == nullptr) {
                return (shared_ptr*)PTR_NullConfigType_100ee6538;
            }
            ppuVar3 = &DataStatus::NOTLOADED;
            psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6538;
        LAB_10058f14b:
            *arg2 = (DataStatus*)*ppuVar3;
            return psVar2;
        }
        psVar2 = (shared_ptr*)FindConfigID(this, arg1);
        if (shared_ptr::operator_cast_to_bool(psVar2)) {
            if (arg2 == nullptr) {
                return psVar2;
            }
            ppuVar3 = &DataStatus::READY;
            goto LAB_10058f14b;
        }
        shared_ptr local_38;
        if (!(DecodeConfig(this, arg1, (shared_ptr<BASType>*)&local_38))) {
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::MISSING;
            LAB_10058f1c1:
                *arg2 = (DataStatus*)*ppuVar3;
            }
        } else {
            if (shared_ptr::operator_cast_to_bool(&local_38)) {
                if (arg2 != nullptr) {
                    *arg2 = (DataStatus*)DataStatus::READY;
                }
                psVar2 = (shared_ptr*)AddConfigID((ReturnValue*)this, (shared_ptr<BASType>*)&local_38, arg1);
                goto LAB_10058f1ce;
            }
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_10058f1c1;
            }
        }
        psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6538;
    LAB_10058f1ce:
        return psVar2;
    }

    // 0x10058f200
    auto ConfigTypePreloadPackedContainer<BASType>::DirectFetch(int arg1) {
        if (*(int*)&this[6]._vptr != 2) {
            LogAssert("m_loadStep == BaseLoadAllConfigTypeContainer::LoadStep::DONE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      179, nullptr);
        }
        auto result;
        if (DecodeConfig(this, arg1, &result) == '\0') {
            LogAssert("exists",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      183, nullptr);
        }
        return result;
    }

    // 0x10058f410
    ConfigTypePreloadPackedContainer<BASType>::~ConfigTypePreloadPackedContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8460;
        this[16]._vptr->PrintMetrics();
        CacheReset();
        ((this + 26))->~unique_ptr();
        ((this + 22))->~VBOMapper();
        ((this + 19))->~Array();
        ((this + 17))->~shared_ptr();
        ((this + 9))->~vector();
        ((this + 5))->~AutoSingleton();
    }

    // 0x10058f500
    void ConfigTypePreloadPackedContainer<BASType>::CheckGroupExistence(DownloadWaitHandler& downloadWaitHandler,
                                                                        Js5Index* js5Index, unsigned int arg3,
                                                                        unsigned int arg4) {
        int* piVar1;

        if (js5Index == nullptr) {
            LogAssert("js5Index",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      365, nullptr);
        }
        if (js5Index->DoesGroupExist(arg3) == '\0') {
            piVar1 = (int*)((long)&this[7]._vptr + 4);
            *piVar1 = *piVar1 + 1;
        } else {
            downloadWaitHandler.SetExists(arg4);
        }
    }

    // 0x10058f580
    void ConfigTypePreloadPackedContainer<BASType>::CheckDecodeProgress(const Js5ArchiveSettings& js5ArchiveSettings,
                                                                        Js5Index* js5Index, unsigned int arg3,
                                                                        unsigned int arg4) {
        int iVar1;
        Array<unsigned char>* this_00;
        TextureAtlasReference* pTVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        void* pvVar4;
        PacketT<Array<unsigned char>>* this_02;
        void* pvVar5;
        size_t sVar6;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)this[1]._vptr->GetGroup(local_48, js5ArchiveSettings, arg3, (Priority*)Priority::HIGHEST, true,
                                              true) == DataStatus::READY) {
            this_00 = (Array<unsigned char>*)(*((this + 19)))[(unsigned long)arg4];
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            this_00->set_max_size(pTVar3->GetTextureAtlas(), 0);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*((this + 19)))[(unsigned long)arg4];
            pvVar4 = (void*)this_01->data();
            this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pvVar5 = (void*)this_02->GetDataPtr();
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            sVar6 = pTVar3->GetTextureAtlas();
            _memcpy(pvVar4, pvVar5, sVar6);
            iVar1 = js5Index->GetMaximumFileID(arg3);
            *(int*)((long)&this[7]._vptr + 4) = iVar1 + *(int*)((long)&this[7]._vptr + 4) + 1;
            ((DownloadWaitHandler*)(*((this + 26))).operator->())->Completed(arg4);
        }
    }

    // 0x10058f720
    void ConfigTypePreloadPackedContainer<BASType>::PageList::ClearPageList(SimpleAllocator& simpleAllocator) {
        ConfigPage* this_00;
        uint64_t* puVar1;

        unsigned long arg1 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1];
            this_00 = (ConfigPage*)*puVar1;
            if (this_00 != nullptr) {
                this_00->Clear();
                simpleAllocator.DeAllocate((this_00 + 4104));
                *puVar1 = 0;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x10058f800
    void ConfigTypePreloadPackedContainer<BASType>::ConfigPage::Clear() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1];
            if (this_00->end() != 0) {
                this_00->reset();
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x10058f930
    ConfigTypePreloadPackedContainer<BASType>* ConfigTypePreloadPackedContainer<BASType>::FindConfigID(int arg1) const {
        unsigned int uVar2;
        shared_ptr* this_00;
        long lVar3;
        unique_ptr<ConfigTypePreloadPackedContainer<BASType>::PageList>* puVar4;
        unsigned long uVar5;
        array<ConfigTypePreloadPackedContainer<BASType>::ConfigPage*, 256ul>* this_01;
        long* plVar6;
        ConfigTypePreloadPackedContainer<BASType>* pCVar7;
        unsigned long arg1_00;
        unsigned int uVar8;
        ConfigTypePreloadPackedContainer<BASType> _vtbl* this_02;
        vector<eastl::pair<int, int>>* this_03;

        if (arg1 == -1) {
            pCVar7 = this + 17;
        } else {
            if (*(int*)&this[13]._vptr == arg1) {
                if (this[14]._vptr != nullptr) {
                    this_00 = (shared_ptr*)(*this[14]._vptr)[(unsigned long)*(unsigned int*)&this[15]._vptr];
                    if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                        this_02 = this[14]._vptr;
                        uVar8 = *(unsigned int*)&this[15]._vptr;
                    LAB_10058fa52:
                        pCVar7 = (ConfigTypePreloadPackedContainer<BASType>*)(*this_02)[(unsigned long)uVar8];
                        return pCVar7;
                    }
                }
                uVar8 = *(unsigned int*)&this[13]._vptr;
                uVar2 = this[3]._vptr->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigTypePreloadPackedContainer.h",
                                507, "Previously loaded config ID %d (archive ID %u) unexpectedly missing",
                                (unsigned long)uVar8, (unsigned long)uVar2);
            }
            this_03 = (vector<eastl::pair<int, int>>*)(this + 9);
            lVar3 = this_03->size();
            pCVar7 = (ConfigTypePreloadPackedContainer<BASType>*)PTR_NullConfigType_100ee6538;
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<BASType>::PageList>*)(*this_03)[arg1_00];
                    lVar3 = (*puVar4).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == (arg1 & 4294901760U)) {
                        puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<BASType>::PageList>*)(*this_03)[arg1_00];
                        this_01 = (array<ConfigTypePreloadPackedContainer<BASType>::ConfigPage*, 256ul>*)(*puVar4)
                                      .operator->();
                        plVar6 = (long*)(*this_01)[(unsigned long)((unsigned int)arg1 >> 8 & 255)];
                        this_02 = (ConfigTypePreloadPackedContainer<BASType> _vtbl*)*plVar6;
                        if (this_02 == nullptr) {
                            return pCVar7;
                        }
                        uVar8 = arg1 & 255;
                        goto LAB_10058fa52;
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar5 = this_03->size();
                } while (arg1_00 < uVar5);
            }
        }
        return pCVar7;
    }

    // 0x10058fa70
    uint64_t ConfigTypePreloadPackedContainer<BASType>::DecodeConfig(int arg1, shared_ptr<BASType>& basType) {
        PacketT<Array<unsigned char>>* arg1_00;
        ConfigTypePreloadPackedContainer<BASType> _vtbl* pCVar1;
        unsigned int arg1_01;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        uint8_t* puVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        void* pvVar8;
        Array<unsigned char>* this_00;
        void* pvVar9;
        size_t sVar10;
        uint64_t uVar11;
        long* plVar12;
        unsigned long arg1_03;
        Array<Array<unsigned char>>* this_01;
        shared_ptr<BASType> local_50;
        Js5Index* local_40;

        basType = *PTR_NullConfigType_100ee6538;
        if (arg1 < 0) {
            MakeSharedPool<BASType, 96>::MakeShared<BaseTemplateConfigTypeList<BASType>*&, int&>(
                (BaseTemplateConfigTypeList<BASType>**)&local_50, (int*)(this + 1));
            basType = local_50;
        LAB_10058fbfb:
        LAB_10058fc04:
            uVar11 = 1;
        } else {
            arg1_01 = this[1]._vptr->GetClientGroupID(arg1);
            uVar3 = this[1]._vptr->GetClientFileID(arg1);
            local_40 = nullptr;
            puVar6 =
                (uint8_t*)(**(void (**)(...))((this[2]._vptr)->_dtor + 24))(this[2]._vptr, &local_40, this[3]._vptr);
            if (puVar6 != DataStatus::MISSING) {
                if (local_40->DoesFileExist(arg1_01, uVar3) != '\0') {
                    if (puVar6 == DataStatus::READY) {
                        uVar3 = local_40->GetFileIndex(arg1_01, uVar3);
                        uVar4 = this[1]._vptr->GetUIHeight();
                        arg1_03 = 0;
                        if (1 < uVar4) {
                            arg1_03 = (unsigned long)arg1_01;
                        }
                        iVar5 = local_40->GetFileCount(arg1_01);
                        arg1_00 = (PacketT<Array<unsigned char>>*)(this + 22);
                        this_01 = (Array<Array<unsigned char>>*)(this + 19);
                        pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                        if (iVar5 == 1) {
                            arg1_00->Reserve(pvVar7->end());
                            arg1_00->SetPos(0);
                            pvVar8 = (void*)arg1_00->GetDataPtr();
                            this_00 = (Array<unsigned char>*)(*this_01)[arg1_03];
                            pvVar9 = (void*)(*this_00)[0];
                            pvVar7 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                            sVar10 = pvVar7->end();
                            _memcpy(pvVar8, pvVar9, sVar10);
                        } else {
                            Js5DiskFileFormat::GetGroupFileData((PacketT<Array<unsigned char> _>*)arg1_00,
                                                                (Array<unsigned char>*)pvVar7, uVar3);
                        }
                        MakeSharedPool<BASType, 96>::MakeShared<BaseTemplateConfigTypeList<BASType>*&, int&>(
                            (BaseTemplateConfigTypeList<BASType>**)&local_50, (int*)(this + 1));
                        plVar12 = (long*)local_50.operator->();
                        puVar6 = (uint8_t*)(**(void (**)(...))(*plVar12 + 32))(plVar12, arg1_00);
                        if (puVar6 == DataStatus::READY) {
                            plVar12 = (long*)local_50.operator->();
                            (**(void (**)(...))(*plVar12 + 24))(plVar12);
                            pCVar1 = this[1]._vptr;
                            puVar6 = (uint8_t*)(**(void (**)(...))(pCVar1->_dtor + 72))(pCVar1, &local_50);
                            if (puVar6 == DataStatus::READY) {
                                basType = local_50;
                            }
                        }
                        goto LAB_10058fbfb;
                    }
                    goto LAB_10058fc04;
                }
            }
            uVar11 = 0;
        }
        return uVar11;
    }

    // 0x10058fcb0
    auto ConfigTypePreloadPackedContainer<BASType>::AddConfigID(const shared_ptr<BASType>& basType, int arg2) {
        auto result;
        unsigned long uVar1;
        unique_ptr<ConfigTypePreloadPackedContainer<BASType>::PageList>* puVar2;
        long lVar3;
        array<ConfigTypePreloadPackedContainer<BASType>::ConfigPage*, 256ul>* paVar4;
        ReturnValue* pRVar5;
        ReturnValue this;
        ReturnValue* pRVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue local_48;
        unsigned int local_38;
        unsigned int local_34;

        if (arg2 == -1) {
            pRVar6 = &result + 17;
            *pRVar6 = basType;
        } else {
            local_34 = arg2 & 4294901760;
            pRVar6 = &result + 9;
            uVar1 = pRVar6->size();
            arg1 = 0;
            if (uVar1 != 0) {
                do {
                    puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<BASType>::PageList>*)(*pRVar6)[arg1];
                    lVar3 = (*puVar2).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == local_34)
                        break;
                    arg1 = (unsigned long)((int)arg1 + 1);
                } while (arg1 < uVar1);
            }
            if (uVar1 == arg1) {
                local_48 =
                    std::make_unique<ConfigTypePreloadPackedContainer<BASType>::PageList, unsigned int&>(local_34);
                eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<BASType>::PageList>>::emplace_back<
                    std::unique_ptr<ConfigTypePreloadPackedContainer<BASType>::PageList>>(
                    (vector<std::unique_ptr<ConfigTypePreloadPackedContainer<BASType>::PageList>>*)pRVar6,
                    (unique_ptr<ConfigTypePreloadPackedContainer<BASType>::PageList,
                                std::default_delete<ConfigTypePreloadPackedContainer<BASType>::PageList> _>*)&local_48);
            }
            uVar1 = (unsigned long)(arg2 - local_34 >> 8);
            puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<BASType>::PageList>*)(*pRVar6)[arg1];
            paVar4 = (array<ConfigTypePreloadPackedContainer<BASType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
            pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
            this = *pRVar5;
            uVar7 = arg2 & 255U;
            if (this == (ReturnValue)0) {
                local_38 = arg2 & 255U;
                this = (ReturnValue)AllocatePageBuffer(&result);
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<BASType>::PageList>*)(*pRVar6)[arg1];
                paVar4 = (array<ConfigTypePreloadPackedContainer<BASType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
                pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
                *pRVar5 = this;
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<BASType>::PageList>*)(*pRVar6)[arg1];
                lVar3 = (*puVar2).operator->();
                if (*(unsigned int*)(lVar3 + 2048) != local_34) {
                    LogAssert("m_pageListContainer[thisPageList]->m_pageListID == pageListID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigTypePreloadPackedContainer.h",
                              469, nullptr);
                }
                uVar7 = local_38;
            }
            pRVar6 = (ReturnValue*)(*this)[(unsigned long)uVar7];
            *pRVar6 = basType;
            *(int*)((long)this + 4096) = *(int*)((long)this + 4096) + 1;
            *(int*)(&result + 13) = arg2;
            &result[14] = this;
            *(unsigned int*)(&result + 15) = uVar7;
        }
        return pRVar6;
    }

    // 0x100590020
    ConfigPage* ConfigTypePreloadPackedContainer<BASType>::AllocatePageBuffer() {
        AllocatedBlock local_28 = this[16]._vptr->Allocate(4128);
        void* pvVar1 = local_28.field_8;
        if (local_28.field_8 == nullptr) {
            LogAssert("block.m_address != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      534, nullptr);
        }
        new (local_28.field_8) ConfigPage();
        *(unsigned long*)((long)pvVar1 + 4120) = local_28.field_16;
        *(uint64_t*)((long)pvVar1 + 4104) = local_28._0_8_;
        *(void**)((long)pvVar1 + 4112) = local_28.field_8;
        return pvVar1;
    }

    // 0x1005903c0
    ConfigTypePreloadPackedContainer<BASType>::PageList::PageList(unsigned int arg1) {
        uint64_t* puVar1;

        *(unsigned int*)(this + 2048) = arg1;
        *(uint32_t*)(this + 2052) = 0;
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1_00];
            *puVar1 = 0;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
    }

    // 0x100590470
    ConfigTypePreloadPackedContainer<BASType>::ConfigPage::ConfigPage() : std::array<shared_ptr<BASType>, 256ul>() {
        *(uint32_t*)(this + 4096) = 0;
        new ((this + 4104)) SimpleAllocator::AllocatedBlock();
    }

    // 0x100594170
    ConfigTypePreloadPackedContainer<FloorUnderlayType>::ConfigTypePreloadPackedContainer(
        BaseTemplateConfigTypeList<FloorUnderlayType>& baseTemplateConfigTypeList,
        Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
        const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<FloorUnderlayType>(baseTemplateConfigTypeList, js5ResourceProvider,
                                                     js5ArchiveSettings, js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8458;
        new ((this + 9))
            eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<FloorUnderlayType>::PageList>>();
        new ((this + 17)) shared_ptr();
        new ((this + 19)) Array<Array<unsigned char>>();
        new ((this + 22)) PacketT();
        ((this + 26))->unique_ptr<true, void>();
    }

    // 0x1005942d0
    _x7e___2* ConfigTypePreloadPackedContainer<FloorUnderlayType>::LoadList() {
        unique_ptr* this_00;
        bool bVar2;
        bool cVar3;
        DownloadWaitHandler* pDVar6;
        CoordMapSquare* pCVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        ConfigTypePreloadPackedContainer<FloorUnderlayType> _vtbl* local_48;

        if (*(int*)&this[6]._vptr == 2) {
            return (_x7e___2*)DataStatus::READY;
        }
        ConfigTypePreloadPackedContainer<FloorUnderlayType> _vtbl* pCVar1 = this[2]._vptr;
        ConfigTypePreloadPackedContainer<FloorUnderlayType> _vtbl* js5ArchiveSettings = this[3]._vptr;
        Js5Index* local_40 = nullptr;
        _x7e___2* p_Var5 = (_x7e___2*)(**(void (**)(...))(pCVar1->_dtor + 24))(pCVar1, &local_40, js5ArchiveSettings);
        if (p_Var5 != (_x7e___2*)DataStatus::READY) {
            return p_Var5;
        }
        unsigned int local_34 = this[1]._vptr->GetUIHeight();
        int iVar4 = this[1]._vptr->GetStreamCountLastMix();
        *(unsigned int*)&this[8]._vptr = iVar4 + local_34;
        if (*(int*)&this[6]._vptr == 0) {
            this_00 = (unique_ptr*)(this + 26);
            local_48 = js5ArchiveSettings;
            cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar3) {
                LogAssert("!m_downloadHandler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "ConfigTypePreloadPackedContainer.h",
                          213, nullptr);
            }
            local_50 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_34);
            *this_00 = local_50;
            pDVar6 = (DownloadWaitHandler*)**this_00;
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                CheckGroupExistence(this, pDVar6, local_40, uVar8, 0);
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    CheckGroupExistence(this, pDVar6, local_40, uVar8, uVar8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            ((this + 19))->set_max_size((unsigned long)local_34, 0);
            *(uint32_t*)&this[6]._vptr = 1;
            iVar4 = *(int*)&this[6]._vptr;
            js5ArchiveSettings = local_48;
        } else {
            iVar4 = *(int*)&this[6]._vptr;
        }
        if (iVar4 != 1) {
            return (_x7e___2*)DataStatus::READY;
        }
        pDVar6 = (DownloadWaitHandler*)*(*((this + 26)));
        if ((this[1]._vptr != nullptr) && (cVar3 = (**(void (**)(...))(pCVar1->_dtor + 64))(pCVar1), cVar3)) {
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                cVar3 = pDVar6->IsComplete(0);
                if ((!cVar3) && (cVar3 = pDVar6->CanCheck(0), cVar3)) {
                    CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, 0);
                }
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    cVar3 = pDVar6->IsComplete(uVar8);
                    if ((!cVar3) && (cVar3 = pDVar6->CanCheck(uVar8), cVar3)) {
                        CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, uVar8);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            if (*(unsigned int*)&this[8]._vptr <= *(unsigned int*)((long)&this[7]._vptr + 4)) {
                ((this + 26))->reset(nullptr);
                *(uint32_t*)&this[6]._vptr = 2;
                p_Var5 = (_x7e___2*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->_x7e___2 = p_Var5;
                bVar2 = true;
                goto LAB_100594546;
            }
        }
        bVar2 = false;
        p_Var5 = (_x7e___2*)DataStatus::NOTLOADED;
    LAB_100594546:
        if (bVar2) {
            return (_x7e___2*)DataStatus::READY;
        }
        return p_Var5;
    }

    // 0x100594590
    void ConfigTypePreloadPackedContainer<FloorUnderlayType>::CacheReset() {
        unique_ptr<ConfigTypePreloadPackedContainer<FloorUnderlayType>::PageList>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (unique_ptr<ConfigTypePreloadPackedContainer<FloorUnderlayType>::PageList>*)(*this_00)[arg1];
                ((PageList*)this_01->get())->ClearPageList(*this[16]._vptr);
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        this_00->clear();
        this[14]._vptr = nullptr;
        *(uint32_t*)&this[15]._vptr = 0;
        *(uint32_t*)&this[13]._vptr = 4294967295;
    }

    // 0x100594620
    void ConfigTypePreloadPackedContainer<FloorUnderlayType>::CacheClean(unsigned int arg1) {
        LoadList** ppLVar1;
        ConfigTypePreloadPackedContainer<FloorUnderlayType> _vtbl* this_01;
        unsigned long uVar4;
        unique_ptr<ConfigTypePreloadPackedContainer<FloorUnderlayType>::PageList>* this_02;
        array<ConfigTypePreloadPackedContainer<FloorUnderlayType>::ConfigPage*, 256ul>* this_03;
        uint64_t* puVar5;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_04;
        unsigned long arg1_00;
        unsigned int uVar6;
        int iVar7;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_02 =
                    (unique_ptr<ConfigTypePreloadPackedContainer<FloorUnderlayType>::PageList>*)(*this_00)[arg1_00];
                this_03 =
                    (array<ConfigTypePreloadPackedContainer<FloorUnderlayType>::ConfigPage*, 256ul>*)this_02->get();
                uVar6 = *(unsigned int*)(this_03 + 2052);
                iVar7 = 16;
                do {
                    puVar5 = (uint64_t*)(*this_03)[(unsigned long)(uVar6 >> 8)];
                    this_01 = (ConfigTypePreloadPackedContainer<FloorUnderlayType> _vtbl*)*puVar5;
                    if (this_01 != nullptr) {
                        this_04 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*this_01)[(
                            unsigned long)(uVar6 & 255)];
                        if (this_04->unique() != '\0') {
                            this_04->reset();
                            if ((this_01 == this[14]._vptr) && ((uVar6 & 255) == *(unsigned int*)&this[15]._vptr)) {
                                this[14]._vptr = nullptr;
                                *(uint32_t*)&this[15]._vptr = 0;
                                *(uint32_t*)&this[13]._vptr = 4294967295;
                            }
                            ppLVar1 = &this_01[51].LoadList;
                            *(int*)ppLVar1 = *(int*)ppLVar1 - 1;
                            if (*(int*)ppLVar1 == 0) {
                                this[16]._vptr->DeAllocate(&this_01[51].CacheReset);
                                *puVar5 = 0;
                            }
                        }
                    }
                    uVar6 = uVar6 + 1 & 65535;
                    iVar7 = iVar7 - 1;
                } while (iVar7 != 0);
                *(unsigned int*)(this_03 + 2052) = uVar6;
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x100594790
    shared_ptr* ConfigTypePreloadPackedContainer<FloorUnderlayType>::List(int arg1, const DataStatus** arg2) {
        shared_ptr* psVar2;
        uint8_t** ppuVar3;

        if (*(int*)&this[6]._vptr != 2) {
            if (arg2 == nullptr) {
                return (shared_ptr*)PTR_NullConfigType_100ee6530;
            }
            ppuVar3 = &DataStatus::NOTLOADED;
            psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6530;
        LAB_1005947eb:
            *arg2 = (DataStatus*)*ppuVar3;
            return psVar2;
        }
        psVar2 = (shared_ptr*)FindConfigID(this, arg1);
        if (shared_ptr::operator_cast_to_bool(psVar2)) {
            if (arg2 == nullptr) {
                return psVar2;
            }
            ppuVar3 = &DataStatus::READY;
            goto LAB_1005947eb;
        }
        shared_ptr local_38;
        if (!(DecodeConfig(this, arg1, (shared_ptr<FloorUnderlayType>*)&local_38))) {
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::MISSING;
            LAB_100594861:
                *arg2 = (DataStatus*)*ppuVar3;
            }
        } else {
            if (shared_ptr::operator_cast_to_bool(&local_38)) {
                if (arg2 != nullptr) {
                    *arg2 = (DataStatus*)DataStatus::READY;
                }
                psVar2 = (shared_ptr*)AddConfigID((ReturnValue*)this, (shared_ptr<FloorUnderlayType>*)&local_38, arg1);
                goto LAB_10059486e;
            }
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_100594861;
            }
        }
        psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6530;
    LAB_10059486e:
        return psVar2;
    }

    // 0x1005948a0
    auto ConfigTypePreloadPackedContainer<FloorUnderlayType>::DirectFetch(int arg1) {
        if (*(int*)&this[6]._vptr != 2) {
            LogAssert("m_loadStep == BaseLoadAllConfigTypeContainer::LoadStep::DONE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      179, nullptr);
        }
        auto result;
        if (DecodeConfig(this, arg1, &result) == '\0') {
            LogAssert("exists",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      183, nullptr);
        }
        return result;
    }

    // 0x100594ab0
    ConfigTypePreloadPackedContainer<FloorUnderlayType>::~ConfigTypePreloadPackedContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8458;
        this[16]._vptr->PrintMetrics();
        CacheReset();
        ((this + 26))->~unique_ptr();
        ((this + 22))->~VBOMapper();
        ((this + 19))->~Array();
        ((this + 17))->~shared_ptr();
        ((this + 9))->~vector();
        ((this + 5))->~AutoSingleton();
    }

    // 0x100594ba0
    void ConfigTypePreloadPackedContainer<FloorUnderlayType>::CheckGroupExistence(
        DownloadWaitHandler& downloadWaitHandler, Js5Index* js5Index, unsigned int arg3, unsigned int arg4) {
        int* piVar1;

        if (js5Index == nullptr) {
            LogAssert("js5Index",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      365, nullptr);
        }
        if (js5Index->DoesGroupExist(arg3) == '\0') {
            piVar1 = (int*)((long)&this[7]._vptr + 4);
            *piVar1 = *piVar1 + 1;
        } else {
            downloadWaitHandler.SetExists(arg4);
        }
    }

    // 0x100594c20
    void ConfigTypePreloadPackedContainer<FloorUnderlayType>::CheckDecodeProgress(
        const Js5ArchiveSettings& js5ArchiveSettings, Js5Index* js5Index, unsigned int arg3, unsigned int arg4) {
        int iVar1;
        Array<unsigned char>* this_00;
        TextureAtlasReference* pTVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        void* pvVar4;
        PacketT<Array<unsigned char>>* this_02;
        void* pvVar5;
        size_t sVar6;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)this[1]._vptr->GetGroup(local_48, js5ArchiveSettings, arg3, (Priority*)Priority::HIGHEST, true,
                                              true) == DataStatus::READY) {
            this_00 = (Array<unsigned char>*)(*((this + 19)))[(unsigned long)arg4];
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            this_00->set_max_size(pTVar3->GetTextureAtlas(), 0);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*((this + 19)))[(unsigned long)arg4];
            pvVar4 = (void*)this_01->data();
            this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pvVar5 = (void*)this_02->GetDataPtr();
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            sVar6 = pTVar3->GetTextureAtlas();
            _memcpy(pvVar4, pvVar5, sVar6);
            iVar1 = js5Index->GetMaximumFileID(arg3);
            *(int*)((long)&this[7]._vptr + 4) = iVar1 + *(int*)((long)&this[7]._vptr + 4) + 1;
            ((DownloadWaitHandler*)(*((this + 26))).operator->())->Completed(arg4);
        }
    }

    // 0x100594dc0
    void
    ConfigTypePreloadPackedContainer<FloorUnderlayType>::PageList::ClearPageList(SimpleAllocator& simpleAllocator) {
        ConfigPage* this_00;
        uint64_t* puVar1;

        unsigned long arg1 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1];
            this_00 = (ConfigPage*)*puVar1;
            if (this_00 != nullptr) {
                this_00->Clear();
                simpleAllocator.DeAllocate((this_00 + 4104));
                *puVar1 = 0;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x100594ea0
    void ConfigTypePreloadPackedContainer<FloorUnderlayType>::ConfigPage::Clear() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1];
            if (this_00->end() != 0) {
                this_00->reset();
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x100594fd0
    ConfigTypePreloadPackedContainer<FloorUnderlayType>*
    ConfigTypePreloadPackedContainer<FloorUnderlayType>::FindConfigID(int arg1) const {
        unsigned int uVar2;
        shared_ptr* this_00;
        long lVar3;
        unique_ptr<ConfigTypePreloadPackedContainer<FloorUnderlayType>::PageList>* puVar4;
        unsigned long uVar5;
        array<ConfigTypePreloadPackedContainer<FloorUnderlayType>::ConfigPage*, 256ul>* this_01;
        long* plVar6;
        ConfigTypePreloadPackedContainer<FloorUnderlayType>* pCVar7;
        unsigned long arg1_00;
        unsigned int uVar8;
        ConfigTypePreloadPackedContainer<FloorUnderlayType> _vtbl* this_02;
        vector<eastl::pair<int, int>>* this_03;

        if (arg1 == -1) {
            pCVar7 = this + 17;
        } else {
            if (*(int*)&this[13]._vptr == arg1) {
                if (this[14]._vptr != nullptr) {
                    this_00 = (shared_ptr*)(*this[14]._vptr)[(unsigned long)*(unsigned int*)&this[15]._vptr];
                    if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                        this_02 = this[14]._vptr;
                        uVar8 = *(unsigned int*)&this[15]._vptr;
                    LAB_1005950f2:
                        pCVar7 = (ConfigTypePreloadPackedContainer<FloorUnderlayType>*)(*this_02)[(unsigned long)uVar8];
                        return pCVar7;
                    }
                }
                uVar8 = *(unsigned int*)&this[13]._vptr;
                uVar2 = this[3]._vptr->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigTypePreloadPackedContainer.h",
                                507, "Previously loaded config ID %d (archive ID %u) unexpectedly missing",
                                (unsigned long)uVar8, (unsigned long)uVar2);
            }
            this_03 = (vector<eastl::pair<int, int>>*)(this + 9);
            lVar3 = this_03->size();
            pCVar7 = (ConfigTypePreloadPackedContainer<FloorUnderlayType>*)PTR_NullConfigType_100ee6530;
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    puVar4 =
                        (unique_ptr<ConfigTypePreloadPackedContainer<FloorUnderlayType>::PageList>*)(*this_03)[arg1_00];
                    lVar3 = (*puVar4).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == (arg1 & 4294901760U)) {
                        puVar4 = (unique_ptr<
                                  ConfigTypePreloadPackedContainer<FloorUnderlayType>::PageList>*)(*this_03)[arg1_00];
                        this_01 =
                            (array<ConfigTypePreloadPackedContainer<FloorUnderlayType>::ConfigPage*, 256ul>*)(*puVar4)
                                .operator->();
                        plVar6 = (long*)(*this_01)[(unsigned long)((unsigned int)arg1 >> 8 & 255)];
                        this_02 = (ConfigTypePreloadPackedContainer<FloorUnderlayType> _vtbl*)*plVar6;
                        if (this_02 == nullptr) {
                            return pCVar7;
                        }
                        uVar8 = arg1 & 255;
                        goto LAB_1005950f2;
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar5 = this_03->size();
                } while (arg1_00 < uVar5);
            }
        }
        return pCVar7;
    }

    // 0x100595110
    uint64_t ConfigTypePreloadPackedContainer<FloorUnderlayType>::DecodeConfig(
        int arg1, shared_ptr<FloorUnderlayType>& floorUnderlayType) {
        PacketT<Array<unsigned char>>* arg1_00;
        ConfigTypePreloadPackedContainer<FloorUnderlayType> _vtbl* pCVar1;
        unsigned int arg1_01;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        uint8_t* puVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        void* pvVar8;
        Array<unsigned char>* this_00;
        void* pvVar9;
        size_t sVar10;
        uint64_t uVar11;
        long* plVar12;
        unsigned long arg1_03;
        Array<Array<unsigned char>>* this_01;
        shared_ptr<FloorUnderlayType> local_50;
        Js5Index* local_40;

        floorUnderlayType = *PTR_NullConfigType_100ee6530;
        if (arg1 < 0) {
            MakeSharedPool<FloorUnderlayType, 128>::MakeShared<BaseTemplateConfigTypeList<FloorUnderlayType>*&, int&>(
                (BaseTemplateConfigTypeList<FloorUnderlayType>**)&local_50, (int*)(this + 1));
            floorUnderlayType = local_50;
        LAB_10059529b:
        LAB_1005952a4:
            uVar11 = 1;
        } else {
            arg1_01 = this[1]._vptr->GetClientGroupID(arg1);
            uVar3 = this[1]._vptr->GetClientFileID(arg1);
            local_40 = nullptr;
            puVar6 =
                (uint8_t*)(**(void (**)(...))((this[2]._vptr)->_dtor + 24))(this[2]._vptr, &local_40, this[3]._vptr);
            if (puVar6 != DataStatus::MISSING) {
                if (local_40->DoesFileExist(arg1_01, uVar3) != '\0') {
                    if (puVar6 == DataStatus::READY) {
                        uVar3 = local_40->GetFileIndex(arg1_01, uVar3);
                        uVar4 = this[1]._vptr->GetUIHeight();
                        arg1_03 = 0;
                        if (1 < uVar4) {
                            arg1_03 = (unsigned long)arg1_01;
                        }
                        iVar5 = local_40->GetFileCount(arg1_01);
                        arg1_00 = (PacketT<Array<unsigned char>>*)(this + 22);
                        this_01 = (Array<Array<unsigned char>>*)(this + 19);
                        pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                        if (iVar5 == 1) {
                            arg1_00->Reserve(pvVar7->end());
                            arg1_00->SetPos(0);
                            pvVar8 = (void*)arg1_00->GetDataPtr();
                            this_00 = (Array<unsigned char>*)(*this_01)[arg1_03];
                            pvVar9 = (void*)(*this_00)[0];
                            pvVar7 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                            sVar10 = pvVar7->end();
                            _memcpy(pvVar8, pvVar9, sVar10);
                        } else {
                            Js5DiskFileFormat::GetGroupFileData((PacketT<Array<unsigned char> _>*)arg1_00,
                                                                (Array<unsigned char>*)pvVar7, uVar3);
                        }
                        MakeSharedPool<FloorUnderlayType, 128>::MakeShared<
                            BaseTemplateConfigTypeList<FloorUnderlayType>*&, int&>(
                            (BaseTemplateConfigTypeList<FloorUnderlayType>**)&local_50, (int*)(this + 1));
                        plVar12 = (long*)local_50.operator->();
                        puVar6 = (uint8_t*)(**(void (**)(...))(*plVar12 + 32))(plVar12, arg1_00);
                        if (puVar6 == DataStatus::READY) {
                            plVar12 = (long*)local_50.operator->();
                            (**(void (**)(...))(*plVar12 + 24))(plVar12);
                            pCVar1 = this[1]._vptr;
                            puVar6 = (uint8_t*)(**(void (**)(...))(pCVar1->_dtor + 72))(pCVar1, &local_50);
                            if (puVar6 == DataStatus::READY) {
                                floorUnderlayType = local_50;
                            }
                        }
                        goto LAB_10059529b;
                    }
                    goto LAB_1005952a4;
                }
            }
            uVar11 = 0;
        }
        return uVar11;
    }

    // 0x100595350
    auto ConfigTypePreloadPackedContainer<FloorUnderlayType>::AddConfigID(
        const shared_ptr<FloorUnderlayType>& floorUnderlayType, int arg2) {
        auto result;
        unsigned long uVar1;
        unique_ptr<ConfigTypePreloadPackedContainer<FloorUnderlayType>::PageList>* puVar2;
        long lVar3;
        array<ConfigTypePreloadPackedContainer<FloorUnderlayType>::ConfigPage*, 256ul>* paVar4;
        ReturnValue* pRVar5;
        ReturnValue this;
        ReturnValue* pRVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue local_48;
        unsigned int local_38;
        unsigned int local_34;

        if (arg2 == -1) {
            pRVar6 = &result + 17;
            *pRVar6 = floorUnderlayType;
        } else {
            local_34 = arg2 & 4294901760;
            pRVar6 = &result + 9;
            uVar1 = pRVar6->size();
            arg1 = 0;
            if (uVar1 != 0) {
                do {
                    puVar2 =
                        (unique_ptr<ConfigTypePreloadPackedContainer<FloorUnderlayType>::PageList>*)(*pRVar6)[arg1];
                    lVar3 = (*puVar2).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == local_34)
                        break;
                    arg1 = (unsigned long)((int)arg1 + 1);
                } while (arg1 < uVar1);
            }
            if (uVar1 == arg1) {
                local_48 =
                    std::make_unique<ConfigTypePreloadPackedContainer<FloorUnderlayType>::PageList, unsigned int&>(
                        local_34);
                eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<FloorUnderlayType>::PageList>>::
                    emplace_back<std::unique_ptr<ConfigTypePreloadPackedContainer<FloorUnderlayType>::PageList>>(
                        (vector<std::unique_ptr<ConfigTypePreloadPackedContainer<FloorUnderlayType>::PageList>>*)pRVar6,
                        (unique_ptr<ConfigTypePreloadPackedContainer<FloorUnderlayType>::PageList,
                                    std::default_delete<ConfigTypePreloadPackedContainer<FloorUnderlayType>::PageList>
                                        _>*)&local_48);
            }
            uVar1 = (unsigned long)(arg2 - local_34 >> 8);
            puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<FloorUnderlayType>::PageList>*)(*pRVar6)[arg1];
            paVar4 =
                (array<ConfigTypePreloadPackedContainer<FloorUnderlayType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
            pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
            this = *pRVar5;
            uVar7 = arg2 & 255U;
            if (this == (ReturnValue)0) {
                local_38 = arg2 & 255U;
                this = (ReturnValue)AllocatePageBuffer((ConfigTypePreloadPackedContainer<FloorUnderlayType>*)&result);
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<FloorUnderlayType>::PageList>*)(*pRVar6)[arg1];
                paVar4 = (array<ConfigTypePreloadPackedContainer<FloorUnderlayType>::ConfigPage*, 256ul>*)(*puVar2)
                             .operator->();
                pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
                *pRVar5 = this;
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<FloorUnderlayType>::PageList>*)(*pRVar6)[arg1];
                lVar3 = (*puVar2).operator->();
                if (*(unsigned int*)(lVar3 + 2048) != local_34) {
                    LogAssert("m_pageListContainer[thisPageList]->m_pageListID == pageListID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigTypePreloadPackedContainer.h",
                              469, nullptr);
                }
                uVar7 = local_38;
            }
            pRVar6 = (ReturnValue*)(*this)[(unsigned long)uVar7];
            *pRVar6 = floorUnderlayType;
            *(int*)((long)this + 4096) = *(int*)((long)this + 4096) + 1;
            *(int*)(&result + 13) = arg2;
            &result[14] = this;
            *(unsigned int*)(&result + 15) = uVar7;
        }
        return pRVar6;
    }

    // 0x1005956c0
    ConfigPage* ConfigTypePreloadPackedContainer<FloorUnderlayType>::AllocatePageBuffer() {
        AllocatedBlock local_28 = this[16]._vptr->Allocate(4128);
        void* pvVar1 = local_28.field_8;
        if (local_28.field_8 == nullptr) {
            LogAssert("block.m_address != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      534, nullptr);
        }
        new (local_28.field_8) ConfigPage();
        *(unsigned long*)((long)pvVar1 + 4120) = local_28.field_16;
        *(uint64_t*)((long)pvVar1 + 4104) = local_28._0_8_;
        *(void**)((long)pvVar1 + 4112) = local_28.field_8;
        return pvVar1;
    }

    // 0x100595a60
    ConfigTypePreloadPackedContainer<FloorUnderlayType>::PageList::PageList(unsigned int arg1) {
        uint64_t* puVar1;

        *(unsigned int*)(this + 2048) = arg1;
        *(uint32_t*)(this + 2052) = 0;
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1_00];
            *puVar1 = 0;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
    }

    // 0x100595b10
    ConfigTypePreloadPackedContainer<FloorUnderlayType>::ConfigPage::ConfigPage()
        : std::array<shared_ptr<FloorUnderlayType>, 256ul>() {
        *(uint32_t*)(this + 4096) = 0;
        new ((this + 4104)) SimpleAllocator::AllocatedBlock();
    }

    // 0x100599820
    ConfigTypePreloadPackedContainer<FloorOverlayType>::ConfigTypePreloadPackedContainer(
        BaseTemplateConfigTypeList<FloorOverlayType>& baseTemplateConfigTypeList,
        Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
        const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<FloorOverlayType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                                    js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8450;
        new ((this + 9)) eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<FloorOverlayType>::PageList>>();
        new ((this + 17)) shared_ptr();
        new ((this + 19)) Array<Array<unsigned char>>();
        new ((this + 22)) PacketT();
        ((this + 26))->unique_ptr<true, void>();
    }

    // 0x100599980
    _x7e___2* ConfigTypePreloadPackedContainer<FloorOverlayType>::LoadList() {
        unique_ptr* this_00;
        bool bVar2;
        bool cVar3;
        DownloadWaitHandler* pDVar6;
        CoordMapSquare* pCVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        ConfigTypePreloadPackedContainer<FloorOverlayType> _vtbl* local_48;

        if (*(int*)&this[6]._vptr == 2) {
            return (_x7e___2*)DataStatus::READY;
        }
        ConfigTypePreloadPackedContainer<FloorOverlayType> _vtbl* pCVar1 = this[2]._vptr;
        ConfigTypePreloadPackedContainer<FloorOverlayType> _vtbl* js5ArchiveSettings = this[3]._vptr;
        Js5Index* local_40 = nullptr;
        _x7e___2* p_Var5 = (_x7e___2*)(**(void (**)(...))(pCVar1->_dtor + 24))(pCVar1, &local_40, js5ArchiveSettings);
        if (p_Var5 != (_x7e___2*)DataStatus::READY) {
            return p_Var5;
        }
        unsigned int local_34 = this[1]._vptr->GetUIHeight();
        int iVar4 = this[1]._vptr->GetStreamCountLastMix();
        *(unsigned int*)&this[8]._vptr = iVar4 + local_34;
        if (*(int*)&this[6]._vptr == 0) {
            this_00 = (unique_ptr*)(this + 26);
            local_48 = js5ArchiveSettings;
            cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar3) {
                LogAssert("!m_downloadHandler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "ConfigTypePreloadPackedContainer.h",
                          213, nullptr);
            }
            local_50 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_34);
            *this_00 = local_50;
            pDVar6 = (DownloadWaitHandler*)**this_00;
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                CheckGroupExistence(this, pDVar6, local_40, uVar8, 0);
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    CheckGroupExistence(this, pDVar6, local_40, uVar8, uVar8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            ((this + 19))->set_max_size((unsigned long)local_34, 0);
            *(uint32_t*)&this[6]._vptr = 1;
            iVar4 = *(int*)&this[6]._vptr;
            js5ArchiveSettings = local_48;
        } else {
            iVar4 = *(int*)&this[6]._vptr;
        }
        if (iVar4 != 1) {
            return (_x7e___2*)DataStatus::READY;
        }
        pDVar6 = (DownloadWaitHandler*)*(*((this + 26)));
        if ((this[1]._vptr != nullptr) && (cVar3 = (**(void (**)(...))(pCVar1->_dtor + 64))(pCVar1), cVar3)) {
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                cVar3 = pDVar6->IsComplete(0);
                if ((!cVar3) && (cVar3 = pDVar6->CanCheck(0), cVar3)) {
                    CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, 0);
                }
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    cVar3 = pDVar6->IsComplete(uVar8);
                    if ((!cVar3) && (cVar3 = pDVar6->CanCheck(uVar8), cVar3)) {
                        CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, uVar8);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            if (*(unsigned int*)&this[8]._vptr <= *(unsigned int*)((long)&this[7]._vptr + 4)) {
                ((this + 26))->reset(nullptr);
                *(uint32_t*)&this[6]._vptr = 2;
                p_Var5 = (_x7e___2*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->_x7e___2 = p_Var5;
                bVar2 = true;
                goto LAB_100599bf6;
            }
        }
        bVar2 = false;
        p_Var5 = (_x7e___2*)DataStatus::NOTLOADED;
    LAB_100599bf6:
        if (bVar2) {
            return (_x7e___2*)DataStatus::READY;
        }
        return p_Var5;
    }

    // 0x100599c40
    void ConfigTypePreloadPackedContainer<FloorOverlayType>::CacheReset() {
        unique_ptr<ConfigTypePreloadPackedContainer<FloorOverlayType>::PageList>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (unique_ptr<ConfigTypePreloadPackedContainer<FloorOverlayType>::PageList>*)(*this_00)[arg1];
                ((PageList*)this_01->get())->ClearPageList(*this[16]._vptr);
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        this_00->clear();
        this[14]._vptr = nullptr;
        *(uint32_t*)&this[15]._vptr = 0;
        *(uint32_t*)&this[13]._vptr = 4294967295;
    }

    // 0x100599cd0
    void ConfigTypePreloadPackedContainer<FloorOverlayType>::CacheClean(unsigned int arg1) {
        LoadList** ppLVar1;
        ConfigTypePreloadPackedContainer<FloorOverlayType> _vtbl* this_01;
        unsigned long uVar4;
        unique_ptr<ConfigTypePreloadPackedContainer<FloorOverlayType>::PageList>* this_02;
        array<ConfigTypePreloadPackedContainer<FloorOverlayType>::ConfigPage*, 256ul>* this_03;
        uint64_t* puVar5;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_04;
        unsigned long arg1_00;
        unsigned int uVar6;
        int iVar7;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_02 =
                    (unique_ptr<ConfigTypePreloadPackedContainer<FloorOverlayType>::PageList>*)(*this_00)[arg1_00];
                this_03 =
                    (array<ConfigTypePreloadPackedContainer<FloorOverlayType>::ConfigPage*, 256ul>*)this_02->get();
                uVar6 = *(unsigned int*)(this_03 + 2052);
                iVar7 = 16;
                do {
                    puVar5 = (uint64_t*)(*this_03)[(unsigned long)(uVar6 >> 8)];
                    this_01 = (ConfigTypePreloadPackedContainer<FloorOverlayType> _vtbl*)*puVar5;
                    if (this_01 != nullptr) {
                        this_04 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*this_01)[(
                            unsigned long)(uVar6 & 255)];
                        if (this_04->unique() != '\0') {
                            this_04->reset();
                            if ((this_01 == this[14]._vptr) && ((uVar6 & 255) == *(unsigned int*)&this[15]._vptr)) {
                                this[14]._vptr = nullptr;
                                *(uint32_t*)&this[15]._vptr = 0;
                                *(uint32_t*)&this[13]._vptr = 4294967295;
                            }
                            ppLVar1 = &this_01[51].LoadList;
                            *(int*)ppLVar1 = *(int*)ppLVar1 - 1;
                            if (*(int*)ppLVar1 == 0) {
                                this[16]._vptr->DeAllocate(&this_01[51].CacheReset);
                                *puVar5 = 0;
                            }
                        }
                    }
                    uVar6 = uVar6 + 1 & 65535;
                    iVar7 = iVar7 - 1;
                } while (iVar7 != 0);
                *(unsigned int*)(this_03 + 2052) = uVar6;
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x100599e40
    shared_ptr* ConfigTypePreloadPackedContainer<FloorOverlayType>::List(int arg1, const DataStatus** arg2) {
        shared_ptr* psVar2;
        uint8_t** ppuVar3;

        if (*(int*)&this[6]._vptr != 2) {
            if (arg2 == nullptr) {
                return (shared_ptr*)PTR_NullConfigType_100ee6528;
            }
            ppuVar3 = &DataStatus::NOTLOADED;
            psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6528;
        LAB_100599e9b:
            *arg2 = (DataStatus*)*ppuVar3;
            return psVar2;
        }
        psVar2 = (shared_ptr*)FindConfigID(this, arg1);
        if (shared_ptr::operator_cast_to_bool(psVar2)) {
            if (arg2 == nullptr) {
                return psVar2;
            }
            ppuVar3 = &DataStatus::READY;
            goto LAB_100599e9b;
        }
        shared_ptr local_38;
        if (!(DecodeConfig(this, arg1, (shared_ptr<FloorOverlayType>*)&local_38))) {
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::MISSING;
            LAB_100599f11:
                *arg2 = (DataStatus*)*ppuVar3;
            }
        } else {
            if (shared_ptr::operator_cast_to_bool(&local_38)) {
                if (arg2 != nullptr) {
                    *arg2 = (DataStatus*)DataStatus::READY;
                }
                psVar2 = (shared_ptr*)AddConfigID((ReturnValue*)this, (shared_ptr<FloorOverlayType>*)&local_38, arg1);
                goto LAB_100599f1e;
            }
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_100599f11;
            }
        }
        psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6528;
    LAB_100599f1e:
        return psVar2;
    }

    // 0x100599f50
    auto ConfigTypePreloadPackedContainer<FloorOverlayType>::DirectFetch(int arg1) {
        if (*(int*)&this[6]._vptr != 2) {
            LogAssert("m_loadStep == BaseLoadAllConfigTypeContainer::LoadStep::DONE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      179, nullptr);
        }
        auto result;
        if (DecodeConfig(this, arg1, &result) == '\0') {
            LogAssert("exists",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      183, nullptr);
        }
        return result;
    }

    // 0x10059a160
    ConfigTypePreloadPackedContainer<FloorOverlayType>::~ConfigTypePreloadPackedContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8450;
        this[16]._vptr->PrintMetrics();
        CacheReset();
        ((this + 26))->~unique_ptr();
        ((this + 22))->~VBOMapper();
        ((this + 19))->~Array();
        ((this + 17))->~shared_ptr();
        ((this + 9))->~vector();
        ((this + 5))->~AutoSingleton();
    }

    // 0x10059a250
    void ConfigTypePreloadPackedContainer<FloorOverlayType>::CheckGroupExistence(
        DownloadWaitHandler& downloadWaitHandler, Js5Index* js5Index, unsigned int arg3, unsigned int arg4) {
        int* piVar1;

        if (js5Index == nullptr) {
            LogAssert("js5Index",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      365, nullptr);
        }
        if (js5Index->DoesGroupExist(arg3) == '\0') {
            piVar1 = (int*)((long)&this[7]._vptr + 4);
            *piVar1 = *piVar1 + 1;
        } else {
            downloadWaitHandler.SetExists(arg4);
        }
    }

    // 0x10059a2d0
    void ConfigTypePreloadPackedContainer<FloorOverlayType>::CheckDecodeProgress(
        const Js5ArchiveSettings& js5ArchiveSettings, Js5Index* js5Index, unsigned int arg3, unsigned int arg4) {
        int iVar1;
        Array<unsigned char>* this_00;
        TextureAtlasReference* pTVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        void* pvVar4;
        PacketT<Array<unsigned char>>* this_02;
        void* pvVar5;
        size_t sVar6;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)this[1]._vptr->GetGroup(local_48, js5ArchiveSettings, arg3, (Priority*)Priority::HIGHEST, true,
                                              true) == DataStatus::READY) {
            this_00 = (Array<unsigned char>*)(*((this + 19)))[(unsigned long)arg4];
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            this_00->set_max_size(pTVar3->GetTextureAtlas(), 0);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*((this + 19)))[(unsigned long)arg4];
            pvVar4 = (void*)this_01->data();
            this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pvVar5 = (void*)this_02->GetDataPtr();
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            sVar6 = pTVar3->GetTextureAtlas();
            _memcpy(pvVar4, pvVar5, sVar6);
            iVar1 = js5Index->GetMaximumFileID(arg3);
            *(int*)((long)&this[7]._vptr + 4) = iVar1 + *(int*)((long)&this[7]._vptr + 4) + 1;
            ((DownloadWaitHandler*)(*((this + 26))).operator->())->Completed(arg4);
        }
    }

    // 0x10059a470
    void ConfigTypePreloadPackedContainer<FloorOverlayType>::PageList::ClearPageList(SimpleAllocator& simpleAllocator) {
        ConfigPage* this_00;
        uint64_t* puVar1;

        unsigned long arg1 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1];
            this_00 = (ConfigPage*)*puVar1;
            if (this_00 != nullptr) {
                this_00->Clear();
                simpleAllocator.DeAllocate((this_00 + 4104));
                *puVar1 = 0;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x10059a550
    void ConfigTypePreloadPackedContainer<FloorOverlayType>::ConfigPage::Clear() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1];
            if (this_00->end() != 0) {
                this_00->reset();
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x10059a680
    ConfigTypePreloadPackedContainer<FloorOverlayType>*
    ConfigTypePreloadPackedContainer<FloorOverlayType>::FindConfigID(int arg1) const {
        unsigned int uVar2;
        shared_ptr* this_00;
        long lVar3;
        unique_ptr<ConfigTypePreloadPackedContainer<FloorOverlayType>::PageList>* puVar4;
        unsigned long uVar5;
        array<ConfigTypePreloadPackedContainer<FloorOverlayType>::ConfigPage*, 256ul>* this_01;
        long* plVar6;
        ConfigTypePreloadPackedContainer<FloorOverlayType>* pCVar7;
        unsigned long arg1_00;
        unsigned int uVar8;
        ConfigTypePreloadPackedContainer<FloorOverlayType> _vtbl* this_02;
        vector<eastl::pair<int, int>>* this_03;

        if (arg1 == -1) {
            pCVar7 = this + 17;
        } else {
            if (*(int*)&this[13]._vptr == arg1) {
                if (this[14]._vptr != nullptr) {
                    this_00 = (shared_ptr*)(*this[14]._vptr)[(unsigned long)*(unsigned int*)&this[15]._vptr];
                    if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                        this_02 = this[14]._vptr;
                        uVar8 = *(unsigned int*)&this[15]._vptr;
                    LAB_10059a7a2:
                        pCVar7 = (ConfigTypePreloadPackedContainer<FloorOverlayType>*)(*this_02)[(unsigned long)uVar8];
                        return pCVar7;
                    }
                }
                uVar8 = *(unsigned int*)&this[13]._vptr;
                uVar2 = this[3]._vptr->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigTypePreloadPackedContainer.h",
                                507, "Previously loaded config ID %d (archive ID %u) unexpectedly missing",
                                (unsigned long)uVar8, (unsigned long)uVar2);
            }
            this_03 = (vector<eastl::pair<int, int>>*)(this + 9);
            lVar3 = this_03->size();
            pCVar7 = (ConfigTypePreloadPackedContainer<FloorOverlayType>*)PTR_NullConfigType_100ee6528;
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    puVar4 =
                        (unique_ptr<ConfigTypePreloadPackedContainer<FloorOverlayType>::PageList>*)(*this_03)[arg1_00];
                    lVar3 = (*puVar4).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == (arg1 & 4294901760U)) {
                        puVar4 = (unique_ptr<
                                  ConfigTypePreloadPackedContainer<FloorOverlayType>::PageList>*)(*this_03)[arg1_00];
                        this_01 =
                            (array<ConfigTypePreloadPackedContainer<FloorOverlayType>::ConfigPage*, 256ul>*)(*puVar4)
                                .operator->();
                        plVar6 = (long*)(*this_01)[(unsigned long)((unsigned int)arg1 >> 8 & 255)];
                        this_02 = (ConfigTypePreloadPackedContainer<FloorOverlayType> _vtbl*)*plVar6;
                        if (this_02 == nullptr) {
                            return pCVar7;
                        }
                        uVar8 = arg1 & 255;
                        goto LAB_10059a7a2;
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar5 = this_03->size();
                } while (arg1_00 < uVar5);
            }
        }
        return pCVar7;
    }

    // 0x10059a7c0
    uint64_t
    ConfigTypePreloadPackedContainer<FloorOverlayType>::DecodeConfig(int arg1,
                                                                     shared_ptr<FloorOverlayType>& floorOverlayType) {
        PacketT<Array<unsigned char>>* arg1_00;
        ConfigTypePreloadPackedContainer<FloorOverlayType> _vtbl* pCVar1;
        unsigned int arg1_01;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        uint8_t* puVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        void* pvVar8;
        Array<unsigned char>* this_00;
        void* pvVar9;
        size_t sVar10;
        uint64_t uVar11;
        long* plVar12;
        unsigned long arg1_03;
        Array<Array<unsigned char>>* this_01;
        shared_ptr<FloorOverlayType> local_50;
        Js5Index* local_40;

        floorOverlayType = *PTR_NullConfigType_100ee6528;
        if (arg1 < 0) {
            MakeSharedPool<FloorOverlayType, 128>::MakeShared<BaseTemplateConfigTypeList<FloorOverlayType>*&, int&>(
                (BaseTemplateConfigTypeList<FloorOverlayType>**)&local_50, (int*)(this + 1));
            floorOverlayType = local_50;
        LAB_10059a94b:
        LAB_10059a954:
            uVar11 = 1;
        } else {
            arg1_01 = this[1]._vptr->GetClientGroupID(arg1);
            uVar3 = this[1]._vptr->GetClientFileID(arg1);
            local_40 = nullptr;
            puVar6 =
                (uint8_t*)(**(void (**)(...))((this[2]._vptr)->_dtor + 24))(this[2]._vptr, &local_40, this[3]._vptr);
            if (puVar6 != DataStatus::MISSING) {
                if (local_40->DoesFileExist(arg1_01, uVar3) != '\0') {
                    if (puVar6 == DataStatus::READY) {
                        uVar3 = local_40->GetFileIndex(arg1_01, uVar3);
                        uVar4 = this[1]._vptr->GetUIHeight();
                        arg1_03 = 0;
                        if (1 < uVar4) {
                            arg1_03 = (unsigned long)arg1_01;
                        }
                        iVar5 = local_40->GetFileCount(arg1_01);
                        arg1_00 = (PacketT<Array<unsigned char>>*)(this + 22);
                        this_01 = (Array<Array<unsigned char>>*)(this + 19);
                        pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                        if (iVar5 == 1) {
                            arg1_00->Reserve(pvVar7->end());
                            arg1_00->SetPos(0);
                            pvVar8 = (void*)arg1_00->GetDataPtr();
                            this_00 = (Array<unsigned char>*)(*this_01)[arg1_03];
                            pvVar9 = (void*)(*this_00)[0];
                            pvVar7 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                            sVar10 = pvVar7->end();
                            _memcpy(pvVar8, pvVar9, sVar10);
                        } else {
                            Js5DiskFileFormat::GetGroupFileData((PacketT<Array<unsigned char> _>*)arg1_00,
                                                                (Array<unsigned char>*)pvVar7, uVar3);
                        }
                        MakeSharedPool<FloorOverlayType, 128>::MakeShared<
                            BaseTemplateConfigTypeList<FloorOverlayType>*&, int&>(
                            (BaseTemplateConfigTypeList<FloorOverlayType>**)&local_50, (int*)(this + 1));
                        plVar12 = (long*)local_50.operator->();
                        puVar6 = (uint8_t*)(**(void (**)(...))(*plVar12 + 32))(plVar12, arg1_00);
                        if (puVar6 == DataStatus::READY) {
                            plVar12 = (long*)local_50.operator->();
                            (**(void (**)(...))(*plVar12 + 24))(plVar12);
                            pCVar1 = this[1]._vptr;
                            puVar6 = (uint8_t*)(**(void (**)(...))(pCVar1->_dtor + 72))(pCVar1, &local_50);
                            if (puVar6 == DataStatus::READY) {
                                floorOverlayType = local_50;
                            }
                        }
                        goto LAB_10059a94b;
                    }
                    goto LAB_10059a954;
                }
            }
            uVar11 = 0;
        }
        return uVar11;
    }

    // 0x10059aa00
    auto ConfigTypePreloadPackedContainer<FloorOverlayType>::AddConfigID(
        const shared_ptr<FloorOverlayType>& floorOverlayType, int arg2) {
        auto result;
        unsigned long uVar1;
        unique_ptr<ConfigTypePreloadPackedContainer<FloorOverlayType>::PageList>* puVar2;
        long lVar3;
        array<ConfigTypePreloadPackedContainer<FloorOverlayType>::ConfigPage*, 256ul>* paVar4;
        ReturnValue* pRVar5;
        ReturnValue this;
        ReturnValue* pRVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue local_48;
        unsigned int local_38;
        unsigned int local_34;

        if (arg2 == -1) {
            pRVar6 = &result + 17;
            *pRVar6 = floorOverlayType;
        } else {
            local_34 = arg2 & 4294901760;
            pRVar6 = &result + 9;
            uVar1 = pRVar6->size();
            arg1 = 0;
            if (uVar1 != 0) {
                do {
                    puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<FloorOverlayType>::PageList>*)(*pRVar6)[arg1];
                    lVar3 = (*puVar2).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == local_34)
                        break;
                    arg1 = (unsigned long)((int)arg1 + 1);
                } while (arg1 < uVar1);
            }
            if (uVar1 == arg1) {
                local_48 =
                    std::make_unique<ConfigTypePreloadPackedContainer<FloorOverlayType>::PageList, unsigned int&>(
                        local_34);
                eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<FloorOverlayType>::PageList>>::
                    emplace_back<std::unique_ptr<ConfigTypePreloadPackedContainer<FloorOverlayType>::PageList>>(
                        (vector<std::unique_ptr<ConfigTypePreloadPackedContainer<FloorOverlayType>::PageList>>*)pRVar6,
                        (unique_ptr<ConfigTypePreloadPackedContainer<FloorOverlayType>::PageList,
                                    std::default_delete<ConfigTypePreloadPackedContainer<FloorOverlayType>::PageList>
                                        _>*)&local_48);
            }
            uVar1 = (unsigned long)(arg2 - local_34 >> 8);
            puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<FloorOverlayType>::PageList>*)(*pRVar6)[arg1];
            paVar4 =
                (array<ConfigTypePreloadPackedContainer<FloorOverlayType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
            pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
            this = *pRVar5;
            uVar7 = arg2 & 255U;
            if (this == (ReturnValue)0) {
                local_38 = arg2 & 255U;
                this = (ReturnValue)AllocatePageBuffer((ConfigTypePreloadPackedContainer<FloorOverlayType>*)&result);
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<FloorOverlayType>::PageList>*)(*pRVar6)[arg1];
                paVar4 = (array<ConfigTypePreloadPackedContainer<FloorOverlayType>::ConfigPage*, 256ul>*)(*puVar2)
                             .operator->();
                pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
                *pRVar5 = this;
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<FloorOverlayType>::PageList>*)(*pRVar6)[arg1];
                lVar3 = (*puVar2).operator->();
                if (*(unsigned int*)(lVar3 + 2048) != local_34) {
                    LogAssert("m_pageListContainer[thisPageList]->m_pageListID == pageListID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigTypePreloadPackedContainer.h",
                              469, nullptr);
                }
                uVar7 = local_38;
            }
            pRVar6 = (ReturnValue*)(*this)[(unsigned long)uVar7];
            *pRVar6 = floorOverlayType;
            *(int*)((long)this + 4096) = *(int*)((long)this + 4096) + 1;
            *(int*)(&result + 13) = arg2;
            &result[14] = this;
            *(unsigned int*)(&result + 15) = uVar7;
        }
        return pRVar6;
    }

    // 0x10059ad70
    ConfigPage* ConfigTypePreloadPackedContainer<FloorOverlayType>::AllocatePageBuffer() {
        AllocatedBlock local_28 = this[16]._vptr->Allocate(4128);
        void* pvVar1 = local_28.field_8;
        if (local_28.field_8 == nullptr) {
            LogAssert("block.m_address != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      534, nullptr);
        }
        new (local_28.field_8) ConfigPage();
        *(unsigned long*)((long)pvVar1 + 4120) = local_28.field_16;
        *(uint64_t*)((long)pvVar1 + 4104) = local_28._0_8_;
        *(void**)((long)pvVar1 + 4112) = local_28.field_8;
        return pvVar1;
    }

    // 0x10059b110
    ConfigTypePreloadPackedContainer<FloorOverlayType>::PageList::PageList(unsigned int arg1) {
        uint64_t* puVar1;

        *(unsigned int*)(this + 2048) = arg1;
        *(uint32_t*)(this + 2052) = 0;
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1_00];
            *puVar1 = 0;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
    }

    // 0x10059b1c0
    ConfigTypePreloadPackedContainer<FloorOverlayType>::ConfigPage::ConfigPage()
        : std::array<shared_ptr<FloorOverlayType>, 256ul>() {
        *(uint32_t*)(this + 4096) = 0;
        new ((this + 4104)) SimpleAllocator::AllocatedBlock();
    }

    // 0x10059e490
    ConfigTypePreloadPackedContainer<HitmarkType>::ConfigTypePreloadPackedContainer(
        BaseTemplateConfigTypeList<HitmarkType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<HitmarkType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                               js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8420;
        new ((this + 9)) eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<HitmarkType>::PageList>>();
        new ((this + 17)) shared_ptr();
        new ((this + 19)) Array<Array<unsigned char>>();
        new ((this + 22)) PacketT();
        ((this + 26))->unique_ptr<true, void>();
    }

    // 0x10059e5f0
    _x7e___2* ConfigTypePreloadPackedContainer<HitmarkType>::LoadList() {
        unique_ptr* this_00;
        bool bVar2;
        bool cVar3;
        DownloadWaitHandler* pDVar6;
        CoordMapSquare* pCVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        ConfigTypePreloadPackedContainer<HitmarkType> _vtbl* local_48;

        if (*(int*)&this[6]._vptr == 2) {
            return (_x7e___2*)DataStatus::READY;
        }
        ConfigTypePreloadPackedContainer<HitmarkType> _vtbl* pCVar1 = this[2]._vptr;
        ConfigTypePreloadPackedContainer<HitmarkType> _vtbl* js5ArchiveSettings = this[3]._vptr;
        Js5Index* local_40 = nullptr;
        _x7e___2* p_Var5 = (_x7e___2*)(**(void (**)(...))(pCVar1->_dtor + 24))(pCVar1, &local_40, js5ArchiveSettings);
        if (p_Var5 != (_x7e___2*)DataStatus::READY) {
            return p_Var5;
        }
        unsigned int local_34 = this[1]._vptr->GetUIHeight();
        int iVar4 = this[1]._vptr->GetStreamCountLastMix();
        *(unsigned int*)&this[8]._vptr = iVar4 + local_34;
        if (*(int*)&this[6]._vptr == 0) {
            this_00 = (unique_ptr*)(this + 26);
            local_48 = js5ArchiveSettings;
            cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar3) {
                LogAssert("!m_downloadHandler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "ConfigTypePreloadPackedContainer.h",
                          213, nullptr);
            }
            local_50 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_34);
            *this_00 = local_50;
            pDVar6 = (DownloadWaitHandler*)**this_00;
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                CheckGroupExistence(this, pDVar6, local_40, uVar8, 0);
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    CheckGroupExistence(this, pDVar6, local_40, uVar8, uVar8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            ((this + 19))->set_max_size((unsigned long)local_34, 0);
            *(uint32_t*)&this[6]._vptr = 1;
            iVar4 = *(int*)&this[6]._vptr;
            js5ArchiveSettings = local_48;
        } else {
            iVar4 = *(int*)&this[6]._vptr;
        }
        if (iVar4 != 1) {
            return (_x7e___2*)DataStatus::READY;
        }
        pDVar6 = (DownloadWaitHandler*)*(*((this + 26)));
        if ((this[1]._vptr != nullptr) && (cVar3 = (**(void (**)(...))(pCVar1->_dtor + 64))(pCVar1), cVar3)) {
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                cVar3 = pDVar6->IsComplete(0);
                if ((!cVar3) && (cVar3 = pDVar6->CanCheck(0), cVar3)) {
                    CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, 0);
                }
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    cVar3 = pDVar6->IsComplete(uVar8);
                    if ((!cVar3) && (cVar3 = pDVar6->CanCheck(uVar8), cVar3)) {
                        CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, uVar8);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            if (*(unsigned int*)&this[8]._vptr <= *(unsigned int*)((long)&this[7]._vptr + 4)) {
                ((this + 26))->reset(nullptr);
                *(uint32_t*)&this[6]._vptr = 2;
                p_Var5 = (_x7e___2*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->_x7e___2 = p_Var5;
                bVar2 = true;
                goto LAB_10059e866;
            }
        }
        bVar2 = false;
        p_Var5 = (_x7e___2*)DataStatus::NOTLOADED;
    LAB_10059e866:
        if (bVar2) {
            return (_x7e___2*)DataStatus::READY;
        }
        return p_Var5;
    }

    // 0x10059e8b0
    void ConfigTypePreloadPackedContainer<HitmarkType>::CacheReset() {
        unique_ptr<ConfigTypePreloadPackedContainer<HitmarkType>::PageList>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (unique_ptr<ConfigTypePreloadPackedContainer<HitmarkType>::PageList>*)(*this_00)[arg1];
                ((PageList*)this_01->get())->ClearPageList(*this[16]._vptr);
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        this_00->clear();
        this[14]._vptr = nullptr;
        *(uint32_t*)&this[15]._vptr = 0;
        *(uint32_t*)&this[13]._vptr = 4294967295;
    }

    // 0x10059e940
    void ConfigTypePreloadPackedContainer<HitmarkType>::CacheClean(unsigned int arg1) {
        LoadList** ppLVar1;
        ConfigTypePreloadPackedContainer<HitmarkType> _vtbl* this_01;
        unsigned long uVar4;
        unique_ptr<ConfigTypePreloadPackedContainer<HitmarkType>::PageList>* this_02;
        array<ConfigTypePreloadPackedContainer<HitmarkType>::ConfigPage*, 256ul>* this_03;
        uint64_t* puVar5;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_04;
        unsigned long arg1_00;
        unsigned int uVar6;
        int iVar7;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_02 = (unique_ptr<ConfigTypePreloadPackedContainer<HitmarkType>::PageList>*)(*this_00)[arg1_00];
                this_03 = (array<ConfigTypePreloadPackedContainer<HitmarkType>::ConfigPage*, 256ul>*)this_02->get();
                uVar6 = *(unsigned int*)(this_03 + 2052);
                iVar7 = 16;
                do {
                    puVar5 = (uint64_t*)(*this_03)[(unsigned long)(uVar6 >> 8)];
                    this_01 = (ConfigTypePreloadPackedContainer<HitmarkType> _vtbl*)*puVar5;
                    if (this_01 != nullptr) {
                        this_04 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*this_01)[(
                            unsigned long)(uVar6 & 255)];
                        if (this_04->unique() != '\0') {
                            this_04->reset();
                            if ((this_01 == this[14]._vptr) && ((uVar6 & 255) == *(unsigned int*)&this[15]._vptr)) {
                                this[14]._vptr = nullptr;
                                *(uint32_t*)&this[15]._vptr = 0;
                                *(uint32_t*)&this[13]._vptr = 4294967295;
                            }
                            ppLVar1 = &this_01[51].LoadList;
                            *(int*)ppLVar1 = *(int*)ppLVar1 - 1;
                            if (*(int*)ppLVar1 == 0) {
                                this[16]._vptr->DeAllocate(&this_01[51].CacheReset);
                                *puVar5 = 0;
                            }
                        }
                    }
                    uVar6 = uVar6 + 1 & 65535;
                    iVar7 = iVar7 - 1;
                } while (iVar7 != 0);
                *(unsigned int*)(this_03 + 2052) = uVar6;
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x10059eab0
    shared_ptr* ConfigTypePreloadPackedContainer<HitmarkType>::List(int arg1, const DataStatus** arg2) {
        shared_ptr* psVar2;
        uint8_t** ppuVar3;

        if (*(int*)&this[6]._vptr != 2) {
            if (arg2 == nullptr) {
                return (shared_ptr*)PTR_NullConfigType_100ee64f8;
            }
            ppuVar3 = &DataStatus::NOTLOADED;
            psVar2 = (shared_ptr*)PTR_NullConfigType_100ee64f8;
        LAB_10059eb0b:
            *arg2 = (DataStatus*)*ppuVar3;
            return psVar2;
        }
        psVar2 = (shared_ptr*)FindConfigID(this, arg1);
        if (shared_ptr::operator_cast_to_bool(psVar2)) {
            if (arg2 == nullptr) {
                return psVar2;
            }
            ppuVar3 = &DataStatus::READY;
            goto LAB_10059eb0b;
        }
        shared_ptr local_38;
        if (!(DecodeConfig(this, arg1, (shared_ptr<HitmarkType>*)&local_38))) {
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::MISSING;
            LAB_10059eb81:
                *arg2 = (DataStatus*)*ppuVar3;
            }
        } else {
            if (shared_ptr::operator_cast_to_bool(&local_38)) {
                if (arg2 != nullptr) {
                    *arg2 = (DataStatus*)DataStatus::READY;
                }
                psVar2 = (shared_ptr*)AddConfigID((ReturnValue*)this, (shared_ptr<HitmarkType>*)&local_38, arg1);
                goto LAB_10059eb8e;
            }
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_10059eb81;
            }
        }
        psVar2 = (shared_ptr*)PTR_NullConfigType_100ee64f8;
    LAB_10059eb8e:
        return psVar2;
    }

    // 0x10059ebc0
    auto ConfigTypePreloadPackedContainer<HitmarkType>::DirectFetch(int arg1) {
        if (*(int*)&this[6]._vptr != 2) {
            LogAssert("m_loadStep == BaseLoadAllConfigTypeContainer::LoadStep::DONE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      179, nullptr);
        }
        auto result;
        if (DecodeConfig(this, arg1, &result) == '\0') {
            LogAssert("exists",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      183, nullptr);
        }
        return result;
    }

    // 0x10059edd0
    ConfigTypePreloadPackedContainer<HitmarkType>::~ConfigTypePreloadPackedContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8420;
        this[16]._vptr->PrintMetrics();
        CacheReset();
        ((this + 26))->~unique_ptr();
        ((this + 22))->~VBOMapper();
        ((this + 19))->~Array();
        ((this + 17))->~shared_ptr();
        ((this + 9))->~vector();
        ((this + 5))->~AutoSingleton();
    }

    // 0x10059eec0
    void ConfigTypePreloadPackedContainer<HitmarkType>::CheckGroupExistence(DownloadWaitHandler& downloadWaitHandler,
                                                                            Js5Index* js5Index, unsigned int arg3,
                                                                            unsigned int arg4) {
        int* piVar1;

        if (js5Index == nullptr) {
            LogAssert("js5Index",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      365, nullptr);
        }
        if (js5Index->DoesGroupExist(arg3) == '\0') {
            piVar1 = (int*)((long)&this[7]._vptr + 4);
            *piVar1 = *piVar1 + 1;
        } else {
            downloadWaitHandler.SetExists(arg4);
        }
    }

    // 0x10059ef40
    void ConfigTypePreloadPackedContainer<HitmarkType>::CheckDecodeProgress(
        const Js5ArchiveSettings& js5ArchiveSettings, Js5Index* js5Index, unsigned int arg3, unsigned int arg4) {
        int iVar1;
        Array<unsigned char>* this_00;
        TextureAtlasReference* pTVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        void* pvVar4;
        PacketT<Array<unsigned char>>* this_02;
        void* pvVar5;
        size_t sVar6;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)this[1]._vptr->GetGroup(local_48, js5ArchiveSettings, arg3, (Priority*)Priority::HIGHEST, true,
                                              true) == DataStatus::READY) {
            this_00 = (Array<unsigned char>*)(*((this + 19)))[(unsigned long)arg4];
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            this_00->set_max_size(pTVar3->GetTextureAtlas(), 0);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*((this + 19)))[(unsigned long)arg4];
            pvVar4 = (void*)this_01->data();
            this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pvVar5 = (void*)this_02->GetDataPtr();
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            sVar6 = pTVar3->GetTextureAtlas();
            _memcpy(pvVar4, pvVar5, sVar6);
            iVar1 = js5Index->GetMaximumFileID(arg3);
            *(int*)((long)&this[7]._vptr + 4) = iVar1 + *(int*)((long)&this[7]._vptr + 4) + 1;
            ((DownloadWaitHandler*)(*((this + 26))).operator->())->Completed(arg4);
        }
    }

    // 0x10059f0e0
    void ConfigTypePreloadPackedContainer<HitmarkType>::PageList::ClearPageList(SimpleAllocator& simpleAllocator) {
        ConfigPage* this_00;
        uint64_t* puVar1;

        unsigned long arg1 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1];
            this_00 = (ConfigPage*)*puVar1;
            if (this_00 != nullptr) {
                this_00->Clear();
                simpleAllocator.DeAllocate((this_00 + 4104));
                *puVar1 = 0;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x10059f1c0
    void ConfigTypePreloadPackedContainer<HitmarkType>::ConfigPage::Clear() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1];
            if (this_00->end() != 0) {
                this_00->reset();
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x10059f2f0
    ConfigTypePreloadPackedContainer<HitmarkType>*
    ConfigTypePreloadPackedContainer<HitmarkType>::FindConfigID(int arg1) const {
        unsigned int uVar2;
        shared_ptr* this_00;
        long lVar3;
        unique_ptr<ConfigTypePreloadPackedContainer<HitmarkType>::PageList>* puVar4;
        unsigned long uVar5;
        array<ConfigTypePreloadPackedContainer<HitmarkType>::ConfigPage*, 256ul>* this_01;
        long* plVar6;
        ConfigTypePreloadPackedContainer<HitmarkType>* pCVar7;
        unsigned long arg1_00;
        unsigned int uVar8;
        ConfigTypePreloadPackedContainer<HitmarkType> _vtbl* this_02;
        vector<eastl::pair<int, int>>* this_03;

        if (arg1 == -1) {
            pCVar7 = this + 17;
        } else {
            if (*(int*)&this[13]._vptr == arg1) {
                if (this[14]._vptr != nullptr) {
                    this_00 = (shared_ptr*)(*this[14]._vptr)[(unsigned long)*(unsigned int*)&this[15]._vptr];
                    if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                        this_02 = this[14]._vptr;
                        uVar8 = *(unsigned int*)&this[15]._vptr;
                    LAB_10059f412:
                        pCVar7 = (ConfigTypePreloadPackedContainer<HitmarkType>*)(*this_02)[(unsigned long)uVar8];
                        return pCVar7;
                    }
                }
                uVar8 = *(unsigned int*)&this[13]._vptr;
                uVar2 = this[3]._vptr->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigTypePreloadPackedContainer.h",
                                507, "Previously loaded config ID %d (archive ID %u) unexpectedly missing",
                                (unsigned long)uVar8, (unsigned long)uVar2);
            }
            this_03 = (vector<eastl::pair<int, int>>*)(this + 9);
            lVar3 = this_03->size();
            pCVar7 = (ConfigTypePreloadPackedContainer<HitmarkType>*)PTR_NullConfigType_100ee64f8;
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<HitmarkType>::PageList>*)(*this_03)[arg1_00];
                    lVar3 = (*puVar4).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == (arg1 & 4294901760U)) {
                        puVar4 =
                            (unique_ptr<ConfigTypePreloadPackedContainer<HitmarkType>::PageList>*)(*this_03)[arg1_00];
                        this_01 = (array<ConfigTypePreloadPackedContainer<HitmarkType>::ConfigPage*, 256ul>*)(*puVar4)
                                      .operator->();
                        plVar6 = (long*)(*this_01)[(unsigned long)((unsigned int)arg1 >> 8 & 255)];
                        this_02 = (ConfigTypePreloadPackedContainer<HitmarkType> _vtbl*)*plVar6;
                        if (this_02 == nullptr) {
                            return pCVar7;
                        }
                        uVar8 = arg1 & 255;
                        goto LAB_10059f412;
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar5 = this_03->size();
                } while (arg1_00 < uVar5);
            }
        }
        return pCVar7;
    }

    // 0x10059f430
    uint64_t ConfigTypePreloadPackedContainer<HitmarkType>::DecodeConfig(int arg1,
                                                                         shared_ptr<HitmarkType>& hitmarkType) {
        PacketT<Array<unsigned char>>* arg1_00;
        ConfigTypePreloadPackedContainer<HitmarkType> _vtbl* pCVar1;
        unsigned int arg1_01;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        uint8_t* puVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        void* pvVar8;
        Array<unsigned char>* this_00;
        void* pvVar9;
        size_t sVar10;
        uint64_t uVar11;
        long* plVar12;
        unsigned long arg1_03;
        Array<Array<unsigned char>>* this_01;
        shared_ptr<HitmarkType> local_50;
        Js5Index* local_40;

        hitmarkType = *PTR_NullConfigType_100ee64f8;
        if (arg1 < 0) {
            MakeSharedPool<HitmarkType, 32>::MakeShared<BaseTemplateConfigTypeList<HitmarkType>*&, int&>(
                (BaseTemplateConfigTypeList<HitmarkType>**)&local_50, (int*)(this + 1));
            hitmarkType = local_50;
        LAB_10059f5bb:
        LAB_10059f5c4:
            uVar11 = 1;
        } else {
            arg1_01 = this[1]._vptr->GetClientGroupID(arg1);
            uVar3 = this[1]._vptr->GetClientFileID(arg1);
            local_40 = nullptr;
            puVar6 =
                (uint8_t*)(**(void (**)(...))((this[2]._vptr)->_dtor + 24))(this[2]._vptr, &local_40, this[3]._vptr);
            if (puVar6 != DataStatus::MISSING) {
                if (local_40->DoesFileExist(arg1_01, uVar3) != '\0') {
                    if (puVar6 == DataStatus::READY) {
                        uVar3 = local_40->GetFileIndex(arg1_01, uVar3);
                        uVar4 = this[1]._vptr->GetUIHeight();
                        arg1_03 = 0;
                        if (1 < uVar4) {
                            arg1_03 = (unsigned long)arg1_01;
                        }
                        iVar5 = local_40->GetFileCount(arg1_01);
                        arg1_00 = (PacketT<Array<unsigned char>>*)(this + 22);
                        this_01 = (Array<Array<unsigned char>>*)(this + 19);
                        pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                        if (iVar5 == 1) {
                            arg1_00->Reserve(pvVar7->end());
                            arg1_00->SetPos(0);
                            pvVar8 = (void*)arg1_00->GetDataPtr();
                            this_00 = (Array<unsigned char>*)(*this_01)[arg1_03];
                            pvVar9 = (void*)(*this_00)[0];
                            pvVar7 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                            sVar10 = pvVar7->end();
                            _memcpy(pvVar8, pvVar9, sVar10);
                        } else {
                            Js5DiskFileFormat::GetGroupFileData((PacketT<Array<unsigned char> _>*)arg1_00,
                                                                (Array<unsigned char>*)pvVar7, uVar3);
                        }
                        MakeSharedPool<HitmarkType, 32>::MakeShared<BaseTemplateConfigTypeList<HitmarkType>*&, int&>(
                            (BaseTemplateConfigTypeList<HitmarkType>**)&local_50, (int*)(this + 1));
                        plVar12 = (long*)local_50.operator->();
                        puVar6 = (uint8_t*)(**(void (**)(...))(*plVar12 + 32))(plVar12, arg1_00);
                        if (puVar6 == DataStatus::READY) {
                            plVar12 = (long*)local_50.operator->();
                            (**(void (**)(...))(*plVar12 + 24))(plVar12);
                            pCVar1 = this[1]._vptr;
                            puVar6 = (uint8_t*)(**(void (**)(...))(pCVar1->_dtor + 72))(pCVar1, &local_50);
                            if (puVar6 == DataStatus::READY) {
                                hitmarkType = local_50;
                            }
                        }
                        goto LAB_10059f5bb;
                    }
                    goto LAB_10059f5c4;
                }
            }
            uVar11 = 0;
        }
        return uVar11;
    }

    // 0x10059f670
    auto ConfigTypePreloadPackedContainer<HitmarkType>::AddConfigID(const shared_ptr<HitmarkType>& hitmarkType,
                                                                    int arg2) {
        auto result;
        unsigned long uVar1;
        unique_ptr<ConfigTypePreloadPackedContainer<HitmarkType>::PageList>* puVar2;
        long lVar3;
        array<ConfigTypePreloadPackedContainer<HitmarkType>::ConfigPage*, 256ul>* paVar4;
        ReturnValue* pRVar5;
        ReturnValue this;
        ReturnValue* pRVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue local_48;
        unsigned int local_38;
        unsigned int local_34;

        if (arg2 == -1) {
            pRVar6 = &result + 17;
            *pRVar6 = hitmarkType;
        } else {
            local_34 = arg2 & 4294901760;
            pRVar6 = &result + 9;
            uVar1 = pRVar6->size();
            arg1 = 0;
            if (uVar1 != 0) {
                do {
                    puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<HitmarkType>::PageList>*)(*pRVar6)[arg1];
                    lVar3 = (*puVar2).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == local_34)
                        break;
                    arg1 = (unsigned long)((int)arg1 + 1);
                } while (arg1 < uVar1);
            }
            if (uVar1 == arg1) {
                local_48 =
                    std::make_unique<ConfigTypePreloadPackedContainer<HitmarkType>::PageList, unsigned int&>(local_34);
                eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<HitmarkType>::PageList>>::emplace_back<
                    std::unique_ptr<ConfigTypePreloadPackedContainer<HitmarkType>::PageList>>(
                    (vector<std::unique_ptr<ConfigTypePreloadPackedContainer<HitmarkType>::PageList>>*)pRVar6,
                    (unique_ptr<
                        ConfigTypePreloadPackedContainer<HitmarkType>::PageList,
                        std::default_delete<ConfigTypePreloadPackedContainer<HitmarkType>::PageList> _>*)&local_48);
            }
            uVar1 = (unsigned long)(arg2 - local_34 >> 8);
            puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<HitmarkType>::PageList>*)(*pRVar6)[arg1];
            paVar4 = (array<ConfigTypePreloadPackedContainer<HitmarkType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
            pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
            this = *pRVar5;
            uVar7 = arg2 & 255U;
            if (this == (ReturnValue)0) {
                local_38 = arg2 & 255U;
                this = (ReturnValue)AllocatePageBuffer(&result);
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<HitmarkType>::PageList>*)(*pRVar6)[arg1];
                paVar4 =
                    (array<ConfigTypePreloadPackedContainer<HitmarkType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
                pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
                *pRVar5 = this;
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<HitmarkType>::PageList>*)(*pRVar6)[arg1];
                lVar3 = (*puVar2).operator->();
                if (*(unsigned int*)(lVar3 + 2048) != local_34) {
                    LogAssert("m_pageListContainer[thisPageList]->m_pageListID == pageListID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigTypePreloadPackedContainer.h",
                              469, nullptr);
                }
                uVar7 = local_38;
            }
            pRVar6 = (ReturnValue*)(*this)[(unsigned long)uVar7];
            *pRVar6 = hitmarkType;
            *(int*)((long)this + 4096) = *(int*)((long)this + 4096) + 1;
            *(int*)(&result + 13) = arg2;
            &result[14] = this;
            *(unsigned int*)(&result + 15) = uVar7;
        }
        return pRVar6;
    }

    // 0x10059f9e0
    ConfigPage* ConfigTypePreloadPackedContainer<HitmarkType>::AllocatePageBuffer() {
        AllocatedBlock local_28 = this[16]._vptr->Allocate(4128);
        void* pvVar1 = local_28.field_8;
        if (local_28.field_8 == nullptr) {
            LogAssert("block.m_address != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      534, nullptr);
        }
        new (local_28.field_8) ConfigPage();
        *(unsigned long*)((long)pvVar1 + 4120) = local_28.field_16;
        *(uint64_t*)((long)pvVar1 + 4104) = local_28._0_8_;
        *(void**)((long)pvVar1 + 4112) = local_28.field_8;
        return pvVar1;
    }

    // 0x10059fd80
    ConfigTypePreloadPackedContainer<HitmarkType>::PageList::PageList(unsigned int arg1) {
        uint64_t* puVar1;

        *(unsigned int*)(this + 2048) = arg1;
        *(uint32_t*)(this + 2052) = 0;
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1_00];
            *puVar1 = 0;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
    }

    // 0x10059fe30
    ConfigTypePreloadPackedContainer<HitmarkType>::ConfigPage::ConfigPage()
        : std::array<shared_ptr<HitmarkType>, 256ul>() {
        *(uint32_t*)(this + 4096) = 0;
        new ((this + 4104)) SimpleAllocator::AllocatedBlock();
    }

    // 0x1005a4000
    ConfigTypePreloadPackedContainer<HeadbarType>::ConfigTypePreloadPackedContainer(
        BaseTemplateConfigTypeList<HeadbarType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<HeadbarType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                               js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8418;
        new ((this + 9)) eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<HeadbarType>::PageList>>();
        new ((this + 17)) shared_ptr();
        new ((this + 19)) Array<Array<unsigned char>>();
        new ((this + 22)) PacketT();
        ((this + 26))->unique_ptr<true, void>();
    }

    // 0x1005a4160
    _x7e___2* ConfigTypePreloadPackedContainer<HeadbarType>::LoadList() {
        unique_ptr* this_00;
        bool bVar2;
        bool cVar3;
        DownloadWaitHandler* pDVar6;
        CoordMapSquare* pCVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        ConfigTypePreloadPackedContainer<HeadbarType> _vtbl* local_48;

        if (*(int*)&this[6]._vptr == 2) {
            return (_x7e___2*)DataStatus::READY;
        }
        ConfigTypePreloadPackedContainer<HeadbarType> _vtbl* pCVar1 = this[2]._vptr;
        ConfigTypePreloadPackedContainer<HeadbarType> _vtbl* js5ArchiveSettings = this[3]._vptr;
        Js5Index* local_40 = nullptr;
        _x7e___2* p_Var5 = (_x7e___2*)(**(void (**)(...))(pCVar1->_dtor + 24))(pCVar1, &local_40, js5ArchiveSettings);
        if (p_Var5 != (_x7e___2*)DataStatus::READY) {
            return p_Var5;
        }
        unsigned int local_34 = this[1]._vptr->GetUIHeight();
        int iVar4 = this[1]._vptr->GetStreamCountLastMix();
        *(unsigned int*)&this[8]._vptr = iVar4 + local_34;
        if (*(int*)&this[6]._vptr == 0) {
            this_00 = (unique_ptr*)(this + 26);
            local_48 = js5ArchiveSettings;
            cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar3) {
                LogAssert("!m_downloadHandler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "ConfigTypePreloadPackedContainer.h",
                          213, nullptr);
            }
            local_50 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_34);
            *this_00 = local_50;
            pDVar6 = (DownloadWaitHandler*)**this_00;
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                CheckGroupExistence(this, pDVar6, local_40, uVar8, 0);
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    CheckGroupExistence(this, pDVar6, local_40, uVar8, uVar8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            ((this + 19))->set_max_size((unsigned long)local_34, 0);
            *(uint32_t*)&this[6]._vptr = 1;
            iVar4 = *(int*)&this[6]._vptr;
            js5ArchiveSettings = local_48;
        } else {
            iVar4 = *(int*)&this[6]._vptr;
        }
        if (iVar4 != 1) {
            return (_x7e___2*)DataStatus::READY;
        }
        pDVar6 = (DownloadWaitHandler*)*(*((this + 26)));
        if ((this[1]._vptr != nullptr) && (cVar3 = (**(void (**)(...))(pCVar1->_dtor + 64))(pCVar1), cVar3)) {
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                cVar3 = pDVar6->IsComplete(0);
                if ((!cVar3) && (cVar3 = pDVar6->CanCheck(0), cVar3)) {
                    CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, 0);
                }
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    cVar3 = pDVar6->IsComplete(uVar8);
                    if ((!cVar3) && (cVar3 = pDVar6->CanCheck(uVar8), cVar3)) {
                        CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, uVar8);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            if (*(unsigned int*)&this[8]._vptr <= *(unsigned int*)((long)&this[7]._vptr + 4)) {
                ((this + 26))->reset(nullptr);
                *(uint32_t*)&this[6]._vptr = 2;
                p_Var5 = (_x7e___2*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->_x7e___2 = p_Var5;
                bVar2 = true;
                goto LAB_1005a43d6;
            }
        }
        bVar2 = false;
        p_Var5 = (_x7e___2*)DataStatus::NOTLOADED;
    LAB_1005a43d6:
        if (bVar2) {
            return (_x7e___2*)DataStatus::READY;
        }
        return p_Var5;
    }

    // 0x1005a4420
    void ConfigTypePreloadPackedContainer<HeadbarType>::CacheReset() {
        unique_ptr<ConfigTypePreloadPackedContainer<HeadbarType>::PageList>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (unique_ptr<ConfigTypePreloadPackedContainer<HeadbarType>::PageList>*)(*this_00)[arg1];
                ((PageList*)this_01->get())->ClearPageList(*this[16]._vptr);
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        this_00->clear();
        this[14]._vptr = nullptr;
        *(uint32_t*)&this[15]._vptr = 0;
        *(uint32_t*)&this[13]._vptr = 4294967295;
    }

    // 0x1005a44b0
    void ConfigTypePreloadPackedContainer<HeadbarType>::CacheClean(unsigned int arg1) {
        LoadList** ppLVar1;
        ConfigTypePreloadPackedContainer<HeadbarType> _vtbl* this_01;
        unsigned long uVar4;
        unique_ptr<ConfigTypePreloadPackedContainer<HeadbarType>::PageList>* this_02;
        array<ConfigTypePreloadPackedContainer<HeadbarType>::ConfigPage*, 256ul>* this_03;
        uint64_t* puVar5;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_04;
        unsigned long arg1_00;
        unsigned int uVar6;
        int iVar7;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_02 = (unique_ptr<ConfigTypePreloadPackedContainer<HeadbarType>::PageList>*)(*this_00)[arg1_00];
                this_03 = (array<ConfigTypePreloadPackedContainer<HeadbarType>::ConfigPage*, 256ul>*)this_02->get();
                uVar6 = *(unsigned int*)(this_03 + 2052);
                iVar7 = 16;
                do {
                    puVar5 = (uint64_t*)(*this_03)[(unsigned long)(uVar6 >> 8)];
                    this_01 = (ConfigTypePreloadPackedContainer<HeadbarType> _vtbl*)*puVar5;
                    if (this_01 != nullptr) {
                        this_04 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*this_01)[(
                            unsigned long)(uVar6 & 255)];
                        if (this_04->unique() != '\0') {
                            this_04->reset();
                            if ((this_01 == this[14]._vptr) && ((uVar6 & 255) == *(unsigned int*)&this[15]._vptr)) {
                                this[14]._vptr = nullptr;
                                *(uint32_t*)&this[15]._vptr = 0;
                                *(uint32_t*)&this[13]._vptr = 4294967295;
                            }
                            ppLVar1 = &this_01[51].LoadList;
                            *(int*)ppLVar1 = *(int*)ppLVar1 - 1;
                            if (*(int*)ppLVar1 == 0) {
                                this[16]._vptr->DeAllocate(&this_01[51].CacheReset);
                                *puVar5 = 0;
                            }
                        }
                    }
                    uVar6 = uVar6 + 1 & 65535;
                    iVar7 = iVar7 - 1;
                } while (iVar7 != 0);
                *(unsigned int*)(this_03 + 2052) = uVar6;
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x1005a4620
    shared_ptr* ConfigTypePreloadPackedContainer<HeadbarType>::List(int arg1, const DataStatus** arg2) {
        shared_ptr* psVar2;
        uint8_t** ppuVar3;

        if (*(int*)&this[6]._vptr != 2) {
            if (arg2 == nullptr) {
                return (shared_ptr*)PTR_NullConfigType_100ee64f0;
            }
            ppuVar3 = &DataStatus::NOTLOADED;
            psVar2 = (shared_ptr*)PTR_NullConfigType_100ee64f0;
        LAB_1005a467b:
            *arg2 = (DataStatus*)*ppuVar3;
            return psVar2;
        }
        psVar2 = (shared_ptr*)FindConfigID(this, arg1);
        if (shared_ptr::operator_cast_to_bool(psVar2)) {
            if (arg2 == nullptr) {
                return psVar2;
            }
            ppuVar3 = &DataStatus::READY;
            goto LAB_1005a467b;
        }
        shared_ptr local_38;
        if (!(DecodeConfig(this, arg1, (shared_ptr<HeadbarType>*)&local_38))) {
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::MISSING;
            LAB_1005a46f1:
                *arg2 = (DataStatus*)*ppuVar3;
            }
        } else {
            if (shared_ptr::operator_cast_to_bool(&local_38)) {
                if (arg2 != nullptr) {
                    *arg2 = (DataStatus*)DataStatus::READY;
                }
                psVar2 = (shared_ptr*)AddConfigID((ReturnValue*)this, (shared_ptr<HeadbarType>*)&local_38, arg1);
                goto LAB_1005a46fe;
            }
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_1005a46f1;
            }
        }
        psVar2 = (shared_ptr*)PTR_NullConfigType_100ee64f0;
    LAB_1005a46fe:
        return psVar2;
    }

    // 0x1005a4730
    auto ConfigTypePreloadPackedContainer<HeadbarType>::DirectFetch(int arg1) {
        if (*(int*)&this[6]._vptr != 2) {
            LogAssert("m_loadStep == BaseLoadAllConfigTypeContainer::LoadStep::DONE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      179, nullptr);
        }
        auto result;
        if (DecodeConfig(this, arg1, &result) == '\0') {
            LogAssert("exists",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      183, nullptr);
        }
        return result;
    }

    // 0x1005a4940
    ConfigTypePreloadPackedContainer<HeadbarType>::~ConfigTypePreloadPackedContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8418;
        this[16]._vptr->PrintMetrics();
        CacheReset();
        ((this + 26))->~unique_ptr();
        ((this + 22))->~VBOMapper();
        ((this + 19))->~Array();
        ((this + 17))->~shared_ptr();
        ((this + 9))->~vector();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005a4a30
    void ConfigTypePreloadPackedContainer<HeadbarType>::CheckGroupExistence(DownloadWaitHandler& downloadWaitHandler,
                                                                            Js5Index* js5Index, unsigned int arg3,
                                                                            unsigned int arg4) {
        int* piVar1;

        if (js5Index == nullptr) {
            LogAssert("js5Index",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      365, nullptr);
        }
        if (js5Index->DoesGroupExist(arg3) == '\0') {
            piVar1 = (int*)((long)&this[7]._vptr + 4);
            *piVar1 = *piVar1 + 1;
        } else {
            downloadWaitHandler.SetExists(arg4);
        }
    }

    // 0x1005a4ab0
    void ConfigTypePreloadPackedContainer<HeadbarType>::CheckDecodeProgress(
        const Js5ArchiveSettings& js5ArchiveSettings, Js5Index* js5Index, unsigned int arg3, unsigned int arg4) {
        int iVar1;
        Array<unsigned char>* this_00;
        TextureAtlasReference* pTVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        void* pvVar4;
        PacketT<Array<unsigned char>>* this_02;
        void* pvVar5;
        size_t sVar6;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)this[1]._vptr->GetGroup(local_48, js5ArchiveSettings, arg3, (Priority*)Priority::HIGHEST, true,
                                              true) == DataStatus::READY) {
            this_00 = (Array<unsigned char>*)(*((this + 19)))[(unsigned long)arg4];
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            this_00->set_max_size(pTVar3->GetTextureAtlas(), 0);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*((this + 19)))[(unsigned long)arg4];
            pvVar4 = (void*)this_01->data();
            this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pvVar5 = (void*)this_02->GetDataPtr();
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            sVar6 = pTVar3->GetTextureAtlas();
            _memcpy(pvVar4, pvVar5, sVar6);
            iVar1 = js5Index->GetMaximumFileID(arg3);
            *(int*)((long)&this[7]._vptr + 4) = iVar1 + *(int*)((long)&this[7]._vptr + 4) + 1;
            ((DownloadWaitHandler*)(*((this + 26))).operator->())->Completed(arg4);
        }
    }

    // 0x1005a4c50
    void ConfigTypePreloadPackedContainer<HeadbarType>::PageList::ClearPageList(SimpleAllocator& simpleAllocator) {
        ConfigPage* this_00;
        uint64_t* puVar1;

        unsigned long arg1 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1];
            this_00 = (ConfigPage*)*puVar1;
            if (this_00 != nullptr) {
                this_00->Clear();
                simpleAllocator.DeAllocate((this_00 + 4104));
                *puVar1 = 0;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005a4d30
    void ConfigTypePreloadPackedContainer<HeadbarType>::ConfigPage::Clear() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1];
            if (this_00->end() != 0) {
                this_00->reset();
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005a4e00
    ConfigTypePreloadPackedContainer<HeadbarType>*
    ConfigTypePreloadPackedContainer<HeadbarType>::FindConfigID(int arg1) const {
        unsigned int uVar2;
        shared_ptr* this_00;
        long lVar3;
        unique_ptr<ConfigTypePreloadPackedContainer<HeadbarType>::PageList>* puVar4;
        unsigned long uVar5;
        array<ConfigTypePreloadPackedContainer<HeadbarType>::ConfigPage*, 256ul>* this_01;
        long* plVar6;
        ConfigTypePreloadPackedContainer<HeadbarType>* pCVar7;
        unsigned long arg1_00;
        unsigned int uVar8;
        ConfigTypePreloadPackedContainer<HeadbarType> _vtbl* this_02;
        vector<eastl::pair<int, int>>* this_03;

        if (arg1 == -1) {
            pCVar7 = this + 17;
        } else {
            if (*(int*)&this[13]._vptr == arg1) {
                if (this[14]._vptr != nullptr) {
                    this_00 = (shared_ptr*)(*this[14]._vptr)[(unsigned long)*(unsigned int*)&this[15]._vptr];
                    if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                        this_02 = this[14]._vptr;
                        uVar8 = *(unsigned int*)&this[15]._vptr;
                    LAB_1005a4f22:
                        pCVar7 = (ConfigTypePreloadPackedContainer<HeadbarType>*)(*this_02)[(unsigned long)uVar8];
                        return pCVar7;
                    }
                }
                uVar8 = *(unsigned int*)&this[13]._vptr;
                uVar2 = this[3]._vptr->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigTypePreloadPackedContainer.h",
                                507, "Previously loaded config ID %d (archive ID %u) unexpectedly missing",
                                (unsigned long)uVar8, (unsigned long)uVar2);
            }
            this_03 = (vector<eastl::pair<int, int>>*)(this + 9);
            lVar3 = this_03->size();
            pCVar7 = (ConfigTypePreloadPackedContainer<HeadbarType>*)PTR_NullConfigType_100ee64f0;
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<HeadbarType>::PageList>*)(*this_03)[arg1_00];
                    lVar3 = (*puVar4).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == (arg1 & 4294901760U)) {
                        puVar4 =
                            (unique_ptr<ConfigTypePreloadPackedContainer<HeadbarType>::PageList>*)(*this_03)[arg1_00];
                        this_01 = (array<ConfigTypePreloadPackedContainer<HeadbarType>::ConfigPage*, 256ul>*)(*puVar4)
                                      .operator->();
                        plVar6 = (long*)(*this_01)[(unsigned long)((unsigned int)arg1 >> 8 & 255)];
                        this_02 = (ConfigTypePreloadPackedContainer<HeadbarType> _vtbl*)*plVar6;
                        if (this_02 == nullptr) {
                            return pCVar7;
                        }
                        uVar8 = arg1 & 255;
                        goto LAB_1005a4f22;
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar5 = this_03->size();
                } while (arg1_00 < uVar5);
            }
        }
        return pCVar7;
    }

    // 0x1005a4f40
    uint64_t ConfigTypePreloadPackedContainer<HeadbarType>::DecodeConfig(int arg1,
                                                                         shared_ptr<HeadbarType>& headbarType) {
        PacketT<Array<unsigned char>>* arg1_00;
        ConfigTypePreloadPackedContainer<HeadbarType> _vtbl* pCVar1;
        unsigned int arg1_01;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        uint8_t* puVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        void* pvVar8;
        Array<unsigned char>* this_00;
        void* pvVar9;
        size_t sVar10;
        uint64_t uVar11;
        long* plVar12;
        unsigned long arg1_03;
        Array<Array<unsigned char>>* this_01;
        shared_ptr<HeadbarType> local_50;
        Js5Index* local_40;

        headbarType = *PTR_NullConfigType_100ee64f0;
        if (arg1 < 0) {
            MakeSharedPool<HeadbarType, 32>::MakeShared<BaseTemplateConfigTypeList<HeadbarType>*&, int&>(
                (BaseTemplateConfigTypeList<HeadbarType>**)&local_50, (int*)(this + 1));
            headbarType = local_50;
        LAB_1005a50cb:
        LAB_1005a50d4:
            uVar11 = 1;
        } else {
            arg1_01 = this[1]._vptr->GetClientGroupID(arg1);
            uVar3 = this[1]._vptr->GetClientFileID(arg1);
            local_40 = nullptr;
            puVar6 =
                (uint8_t*)(**(void (**)(...))((this[2]._vptr)->_dtor + 24))(this[2]._vptr, &local_40, this[3]._vptr);
            if (puVar6 != DataStatus::MISSING) {
                if (local_40->DoesFileExist(arg1_01, uVar3) != '\0') {
                    if (puVar6 == DataStatus::READY) {
                        uVar3 = local_40->GetFileIndex(arg1_01, uVar3);
                        uVar4 = this[1]._vptr->GetUIHeight();
                        arg1_03 = 0;
                        if (1 < uVar4) {
                            arg1_03 = (unsigned long)arg1_01;
                        }
                        iVar5 = local_40->GetFileCount(arg1_01);
                        arg1_00 = (PacketT<Array<unsigned char>>*)(this + 22);
                        this_01 = (Array<Array<unsigned char>>*)(this + 19);
                        pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                        if (iVar5 == 1) {
                            arg1_00->Reserve(pvVar7->end());
                            arg1_00->SetPos(0);
                            pvVar8 = (void*)arg1_00->GetDataPtr();
                            this_00 = (Array<unsigned char>*)(*this_01)[arg1_03];
                            pvVar9 = (void*)(*this_00)[0];
                            pvVar7 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                            sVar10 = pvVar7->end();
                            _memcpy(pvVar8, pvVar9, sVar10);
                        } else {
                            Js5DiskFileFormat::GetGroupFileData((PacketT<Array<unsigned char> _>*)arg1_00,
                                                                (Array<unsigned char>*)pvVar7, uVar3);
                        }
                        MakeSharedPool<HeadbarType, 32>::MakeShared<BaseTemplateConfigTypeList<HeadbarType>*&, int&>(
                            (BaseTemplateConfigTypeList<HeadbarType>**)&local_50, (int*)(this + 1));
                        plVar12 = (long*)local_50.operator->();
                        puVar6 = (uint8_t*)(**(void (**)(...))(*plVar12 + 32))(plVar12, arg1_00);
                        if (puVar6 == DataStatus::READY) {
                            plVar12 = (long*)local_50.operator->();
                            (**(void (**)(...))(*plVar12 + 24))(plVar12);
                            pCVar1 = this[1]._vptr;
                            puVar6 = (uint8_t*)(**(void (**)(...))(pCVar1->_dtor + 72))(pCVar1, &local_50);
                            if (puVar6 == DataStatus::READY) {
                                headbarType = local_50;
                            }
                        }
                        goto LAB_1005a50cb;
                    }
                    goto LAB_1005a50d4;
                }
            }
            uVar11 = 0;
        }
        return uVar11;
    }

    // 0x1005a5180
    auto ConfigTypePreloadPackedContainer<HeadbarType>::AddConfigID(const shared_ptr<HeadbarType>& headbarType,
                                                                    int arg2) {
        auto result;
        unsigned long uVar1;
        unique_ptr<ConfigTypePreloadPackedContainer<HeadbarType>::PageList>* puVar2;
        long lVar3;
        array<ConfigTypePreloadPackedContainer<HeadbarType>::ConfigPage*, 256ul>* paVar4;
        ReturnValue* pRVar5;
        ReturnValue this;
        ReturnValue* pRVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue local_48;
        unsigned int local_38;
        unsigned int local_34;

        if (arg2 == -1) {
            pRVar6 = &result + 17;
            *pRVar6 = headbarType;
        } else {
            local_34 = arg2 & 4294901760;
            pRVar6 = &result + 9;
            uVar1 = pRVar6->size();
            arg1 = 0;
            if (uVar1 != 0) {
                do {
                    puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<HeadbarType>::PageList>*)(*pRVar6)[arg1];
                    lVar3 = (*puVar2).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == local_34)
                        break;
                    arg1 = (unsigned long)((int)arg1 + 1);
                } while (arg1 < uVar1);
            }
            if (uVar1 == arg1) {
                local_48 =
                    std::make_unique<ConfigTypePreloadPackedContainer<HeadbarType>::PageList, unsigned int&>(local_34);
                eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<HeadbarType>::PageList>>::emplace_back<
                    std::unique_ptr<ConfigTypePreloadPackedContainer<HeadbarType>::PageList>>(
                    (vector<std::unique_ptr<ConfigTypePreloadPackedContainer<HeadbarType>::PageList>>*)pRVar6,
                    (unique_ptr<
                        ConfigTypePreloadPackedContainer<HeadbarType>::PageList,
                        std::default_delete<ConfigTypePreloadPackedContainer<HeadbarType>::PageList> _>*)&local_48);
            }
            uVar1 = (unsigned long)(arg2 - local_34 >> 8);
            puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<HeadbarType>::PageList>*)(*pRVar6)[arg1];
            paVar4 = (array<ConfigTypePreloadPackedContainer<HeadbarType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
            pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
            this = *pRVar5;
            uVar7 = arg2 & 255U;
            if (this == (ReturnValue)0) {
                local_38 = arg2 & 255U;
                this = (ReturnValue)AllocatePageBuffer(&result);
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<HeadbarType>::PageList>*)(*pRVar6)[arg1];
                paVar4 =
                    (array<ConfigTypePreloadPackedContainer<HeadbarType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
                pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
                *pRVar5 = this;
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<HeadbarType>::PageList>*)(*pRVar6)[arg1];
                lVar3 = (*puVar2).operator->();
                if (*(unsigned int*)(lVar3 + 2048) != local_34) {
                    LogAssert("m_pageListContainer[thisPageList]->m_pageListID == pageListID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigTypePreloadPackedContainer.h",
                              469, nullptr);
                }
                uVar7 = local_38;
            }
            pRVar6 = (ReturnValue*)(*this)[(unsigned long)uVar7];
            *pRVar6 = headbarType;
            *(int*)((long)this + 4096) = *(int*)((long)this + 4096) + 1;
            *(int*)(&result + 13) = arg2;
            &result[14] = this;
            *(unsigned int*)(&result + 15) = uVar7;
        }
        return pRVar6;
    }

    // 0x1005a5470
    ConfigPage* ConfigTypePreloadPackedContainer<HeadbarType>::AllocatePageBuffer() {
        AllocatedBlock local_28 = this[16]._vptr->Allocate(4128);
        void* pvVar1 = local_28.field_8;
        if (local_28.field_8 == nullptr) {
            LogAssert("block.m_address != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      534, nullptr);
        }
        new (local_28.field_8) ConfigPage();
        *(unsigned long*)((long)pvVar1 + 4120) = local_28.field_16;
        *(uint64_t*)((long)pvVar1 + 4104) = local_28._0_8_;
        *(void**)((long)pvVar1 + 4112) = local_28.field_8;
        return pvVar1;
    }

    // 0x1005a5810
    ConfigTypePreloadPackedContainer<HeadbarType>::PageList::PageList(unsigned int arg1) {
        uint64_t* puVar1;

        *(unsigned int*)(this + 2048) = arg1;
        *(uint32_t*)(this + 2052) = 0;
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1_00];
            *puVar1 = 0;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
    }

    // 0x1005a58c0
    ConfigTypePreloadPackedContainer<HeadbarType>::ConfigPage::ConfigPage()
        : std::array<shared_ptr<HeadbarType>, 256ul>() {
        *(uint32_t*)(this + 4096) = 0;
        new ((this + 4104)) SimpleAllocator::AllocatedBlock();
    }

    // 0x1005a9800
    ConfigTypePreloadPackedContainer<IDKType>::ConfigTypePreloadPackedContainer(
        BaseTemplateConfigTypeList<IDKType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<IDKType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                           js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8468;
        new ((this + 9)) eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<IDKType>::PageList>>();
        new ((this + 17)) shared_ptr();
        new ((this + 19)) Array<Array<unsigned char>>();
        new ((this + 22)) PacketT();
        ((this + 26))->unique_ptr<true, void>();
    }

    // 0x1005a9960
    _x7e___2* ConfigTypePreloadPackedContainer<IDKType>::LoadList() {
        unique_ptr* this_00;
        bool bVar2;
        bool cVar3;
        DownloadWaitHandler* pDVar6;
        CoordMapSquare* pCVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        ConfigTypePreloadPackedContainer<IDKType> _vtbl* local_48;

        if (*(int*)&this[6]._vptr == 2) {
            return (_x7e___2*)DataStatus::READY;
        }
        ConfigTypePreloadPackedContainer<IDKType> _vtbl* pCVar1 = this[2]._vptr;
        ConfigTypePreloadPackedContainer<IDKType> _vtbl* js5ArchiveSettings = this[3]._vptr;
        Js5Index* local_40 = nullptr;
        _x7e___2* p_Var5 = (_x7e___2*)(**(void (**)(...))(pCVar1->_dtor + 24))(pCVar1, &local_40, js5ArchiveSettings);
        if (p_Var5 != (_x7e___2*)DataStatus::READY) {
            return p_Var5;
        }
        unsigned int local_34 = this[1]._vptr->GetUIHeight();
        int iVar4 = this[1]._vptr->GetStreamCountLastMix();
        *(unsigned int*)&this[8]._vptr = iVar4 + local_34;
        if (*(int*)&this[6]._vptr == 0) {
            this_00 = (unique_ptr*)(this + 26);
            local_48 = js5ArchiveSettings;
            cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar3) {
                LogAssert("!m_downloadHandler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "ConfigTypePreloadPackedContainer.h",
                          213, nullptr);
            }
            local_50 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_34);
            *this_00 = local_50;
            pDVar6 = (DownloadWaitHandler*)**this_00;
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                CheckGroupExistence(this, pDVar6, local_40, uVar8, 0);
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    CheckGroupExistence(this, pDVar6, local_40, uVar8, uVar8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            ((this + 19))->set_max_size((unsigned long)local_34, 0);
            *(uint32_t*)&this[6]._vptr = 1;
            iVar4 = *(int*)&this[6]._vptr;
            js5ArchiveSettings = local_48;
        } else {
            iVar4 = *(int*)&this[6]._vptr;
        }
        if (iVar4 != 1) {
            return (_x7e___2*)DataStatus::READY;
        }
        pDVar6 = (DownloadWaitHandler*)*(*((this + 26)));
        if ((this[1]._vptr != nullptr) && (cVar3 = (**(void (**)(...))(pCVar1->_dtor + 64))(pCVar1), cVar3)) {
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                cVar3 = pDVar6->IsComplete(0);
                if ((!cVar3) && (cVar3 = pDVar6->CanCheck(0), cVar3)) {
                    CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, 0);
                }
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    cVar3 = pDVar6->IsComplete(uVar8);
                    if ((!cVar3) && (cVar3 = pDVar6->CanCheck(uVar8), cVar3)) {
                        CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, uVar8);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            if (*(unsigned int*)&this[8]._vptr <= *(unsigned int*)((long)&this[7]._vptr + 4)) {
                ((this + 26))->reset(nullptr);
                *(uint32_t*)&this[6]._vptr = 2;
                p_Var5 = (_x7e___2*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->_x7e___2 = p_Var5;
                bVar2 = true;
                goto LAB_1005a9bd6;
            }
        }
        bVar2 = false;
        p_Var5 = (_x7e___2*)DataStatus::NOTLOADED;
    LAB_1005a9bd6:
        if (bVar2) {
            return (_x7e___2*)DataStatus::READY;
        }
        return p_Var5;
    }

    // 0x1005a9c20
    void ConfigTypePreloadPackedContainer<IDKType>::CacheReset() {
        unique_ptr<ConfigTypePreloadPackedContainer<IDKType>::PageList>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (unique_ptr<ConfigTypePreloadPackedContainer<IDKType>::PageList>*)(*this_00)[arg1];
                ((PageList*)this_01->get())->ClearPageList(*this[16]._vptr);
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        this_00->clear();
        this[14]._vptr = nullptr;
        *(uint32_t*)&this[15]._vptr = 0;
        *(uint32_t*)&this[13]._vptr = 4294967295;
    }

    // 0x1005a9cb0
    void ConfigTypePreloadPackedContainer<IDKType>::CacheClean(unsigned int arg1) {
        LoadList** ppLVar1;
        ConfigTypePreloadPackedContainer<IDKType> _vtbl* this_01;
        unsigned long uVar4;
        unique_ptr<ConfigTypePreloadPackedContainer<IDKType>::PageList>* this_02;
        array<ConfigTypePreloadPackedContainer<IDKType>::ConfigPage*, 256ul>* this_03;
        uint64_t* puVar5;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_04;
        unsigned long arg1_00;
        unsigned int uVar6;
        int iVar7;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_02 = (unique_ptr<ConfigTypePreloadPackedContainer<IDKType>::PageList>*)(*this_00)[arg1_00];
                this_03 = (array<ConfigTypePreloadPackedContainer<IDKType>::ConfigPage*, 256ul>*)this_02->get();
                uVar6 = *(unsigned int*)(this_03 + 2052);
                iVar7 = 16;
                do {
                    puVar5 = (uint64_t*)(*this_03)[(unsigned long)(uVar6 >> 8)];
                    this_01 = (ConfigTypePreloadPackedContainer<IDKType> _vtbl*)*puVar5;
                    if (this_01 != nullptr) {
                        this_04 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*this_01)[(
                            unsigned long)(uVar6 & 255)];
                        if (this_04->unique() != '\0') {
                            this_04->reset();
                            if ((this_01 == this[14]._vptr) && ((uVar6 & 255) == *(unsigned int*)&this[15]._vptr)) {
                                this[14]._vptr = nullptr;
                                *(uint32_t*)&this[15]._vptr = 0;
                                *(uint32_t*)&this[13]._vptr = 4294967295;
                            }
                            ppLVar1 = &this_01[51].LoadList;
                            *(int*)ppLVar1 = *(int*)ppLVar1 - 1;
                            if (*(int*)ppLVar1 == 0) {
                                this[16]._vptr->DeAllocate(&this_01[51].CacheReset);
                                *puVar5 = 0;
                            }
                        }
                    }
                    uVar6 = uVar6 + 1 & 65535;
                    iVar7 = iVar7 - 1;
                } while (iVar7 != 0);
                *(unsigned int*)(this_03 + 2052) = uVar6;
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x1005a9e20
    shared_ptr* ConfigTypePreloadPackedContainer<IDKType>::List(int arg1, const DataStatus** arg2) {
        shared_ptr* psVar2;
        uint8_t** ppuVar3;

        if (*(int*)&this[6]._vptr != 2) {
            if (arg2 == nullptr) {
                return (shared_ptr*)PTR_NullConfigType_100ee6540;
            }
            ppuVar3 = &DataStatus::NOTLOADED;
            psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6540;
        LAB_1005a9e7b:
            *arg2 = (DataStatus*)*ppuVar3;
            return psVar2;
        }
        psVar2 = (shared_ptr*)FindConfigID(this, arg1);
        if (shared_ptr::operator_cast_to_bool(psVar2)) {
            if (arg2 == nullptr) {
                return psVar2;
            }
            ppuVar3 = &DataStatus::READY;
            goto LAB_1005a9e7b;
        }
        shared_ptr local_38;
        if (!(DecodeConfig(this, arg1, (shared_ptr<IDKType>*)&local_38))) {
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::MISSING;
            LAB_1005a9ef1:
                *arg2 = (DataStatus*)*ppuVar3;
            }
        } else {
            if (shared_ptr::operator_cast_to_bool(&local_38)) {
                if (arg2 != nullptr) {
                    *arg2 = (DataStatus*)DataStatus::READY;
                }
                psVar2 = (shared_ptr*)AddConfigID((ReturnValue*)this, (shared_ptr<IDKType>*)&local_38, arg1);
                goto LAB_1005a9efe;
            }
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_1005a9ef1;
            }
        }
        psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6540;
    LAB_1005a9efe:
        return psVar2;
    }

    // 0x1005a9f30
    auto ConfigTypePreloadPackedContainer<IDKType>::DirectFetch(int arg1) {
        if (*(int*)&this[6]._vptr != 2) {
            LogAssert("m_loadStep == BaseLoadAllConfigTypeContainer::LoadStep::DONE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      179, nullptr);
        }
        auto result;
        if (DecodeConfig(this, arg1, &result) == '\0') {
            LogAssert("exists",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      183, nullptr);
        }
        return result;
    }

    // 0x1005aa140
    ConfigTypePreloadPackedContainer<IDKType>::~ConfigTypePreloadPackedContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8468;
        this[16]._vptr->PrintMetrics();
        CacheReset();
        ((this + 26))->~unique_ptr();
        ((this + 22))->~VBOMapper();
        ((this + 19))->~Array();
        ((this + 17))->~shared_ptr();
        ((this + 9))->~vector();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005aa230
    void ConfigTypePreloadPackedContainer<IDKType>::CheckGroupExistence(DownloadWaitHandler& downloadWaitHandler,
                                                                        Js5Index* js5Index, unsigned int arg3,
                                                                        unsigned int arg4) {
        int* piVar1;

        if (js5Index == nullptr) {
            LogAssert("js5Index",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      365, nullptr);
        }
        if (js5Index->DoesGroupExist(arg3) == '\0') {
            piVar1 = (int*)((long)&this[7]._vptr + 4);
            *piVar1 = *piVar1 + 1;
        } else {
            downloadWaitHandler.SetExists(arg4);
        }
    }

    // 0x1005aa2b0
    void ConfigTypePreloadPackedContainer<IDKType>::CheckDecodeProgress(const Js5ArchiveSettings& js5ArchiveSettings,
                                                                        Js5Index* js5Index, unsigned int arg3,
                                                                        unsigned int arg4) {
        int iVar1;
        Array<unsigned char>* this_00;
        TextureAtlasReference* pTVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        void* pvVar4;
        PacketT<Array<unsigned char>>* this_02;
        void* pvVar5;
        size_t sVar6;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)this[1]._vptr->GetGroup(local_48, js5ArchiveSettings, arg3, (Priority*)Priority::HIGHEST, true,
                                              true) == DataStatus::READY) {
            this_00 = (Array<unsigned char>*)(*((this + 19)))[(unsigned long)arg4];
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            this_00->set_max_size(pTVar3->GetTextureAtlas(), 0);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*((this + 19)))[(unsigned long)arg4];
            pvVar4 = (void*)this_01->data();
            this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pvVar5 = (void*)this_02->GetDataPtr();
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            sVar6 = pTVar3->GetTextureAtlas();
            _memcpy(pvVar4, pvVar5, sVar6);
            iVar1 = js5Index->GetMaximumFileID(arg3);
            *(int*)((long)&this[7]._vptr + 4) = iVar1 + *(int*)((long)&this[7]._vptr + 4) + 1;
            ((DownloadWaitHandler*)(*((this + 26))).operator->())->Completed(arg4);
        }
    }

    // 0x1005aa450
    void ConfigTypePreloadPackedContainer<IDKType>::PageList::ClearPageList(SimpleAllocator& simpleAllocator) {
        ConfigPage* this_00;
        uint64_t* puVar1;

        unsigned long arg1 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1];
            this_00 = (ConfigPage*)*puVar1;
            if (this_00 != nullptr) {
                this_00->Clear();
                simpleAllocator.DeAllocate((this_00 + 4104));
                *puVar1 = 0;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005aa530
    void ConfigTypePreloadPackedContainer<IDKType>::ConfigPage::Clear() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1];
            if (this_00->end() != 0) {
                this_00->reset();
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005aa660
    ConfigTypePreloadPackedContainer<IDKType>* ConfigTypePreloadPackedContainer<IDKType>::FindConfigID(int arg1) const {
        unsigned int uVar2;
        shared_ptr* this_00;
        long lVar3;
        unique_ptr<ConfigTypePreloadPackedContainer<IDKType>::PageList>* puVar4;
        unsigned long uVar5;
        array<ConfigTypePreloadPackedContainer<IDKType>::ConfigPage*, 256ul>* this_01;
        long* plVar6;
        ConfigTypePreloadPackedContainer<IDKType>* pCVar7;
        unsigned long arg1_00;
        unsigned int uVar8;
        ConfigTypePreloadPackedContainer<IDKType> _vtbl* this_02;
        vector<eastl::pair<int, int>>* this_03;

        if (arg1 == -1) {
            pCVar7 = this + 17;
        } else {
            if (*(int*)&this[13]._vptr == arg1) {
                if (this[14]._vptr != nullptr) {
                    this_00 = (shared_ptr*)(*this[14]._vptr)[(unsigned long)*(unsigned int*)&this[15]._vptr];
                    if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                        this_02 = this[14]._vptr;
                        uVar8 = *(unsigned int*)&this[15]._vptr;
                    LAB_1005aa782:
                        pCVar7 = (ConfigTypePreloadPackedContainer<IDKType>*)(*this_02)[(unsigned long)uVar8];
                        return pCVar7;
                    }
                }
                uVar8 = *(unsigned int*)&this[13]._vptr;
                uVar2 = this[3]._vptr->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigTypePreloadPackedContainer.h",
                                507, "Previously loaded config ID %d (archive ID %u) unexpectedly missing",
                                (unsigned long)uVar8, (unsigned long)uVar2);
            }
            this_03 = (vector<eastl::pair<int, int>>*)(this + 9);
            lVar3 = this_03->size();
            pCVar7 = (ConfigTypePreloadPackedContainer<IDKType>*)PTR_NullConfigType_100ee6540;
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<IDKType>::PageList>*)(*this_03)[arg1_00];
                    lVar3 = (*puVar4).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == (arg1 & 4294901760U)) {
                        puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<IDKType>::PageList>*)(*this_03)[arg1_00];
                        this_01 = (array<ConfigTypePreloadPackedContainer<IDKType>::ConfigPage*, 256ul>*)(*puVar4)
                                      .operator->();
                        plVar6 = (long*)(*this_01)[(unsigned long)((unsigned int)arg1 >> 8 & 255)];
                        this_02 = (ConfigTypePreloadPackedContainer<IDKType> _vtbl*)*plVar6;
                        if (this_02 == nullptr) {
                            return pCVar7;
                        }
                        uVar8 = arg1 & 255;
                        goto LAB_1005aa782;
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar5 = this_03->size();
                } while (arg1_00 < uVar5);
            }
        }
        return pCVar7;
    }

    // 0x1005aa7a0
    uint64_t ConfigTypePreloadPackedContainer<IDKType>::DecodeConfig(int arg1, shared_ptr<IDKType>& idkType) {
        PacketT<Array<unsigned char>>* arg1_00;
        ConfigTypePreloadPackedContainer<IDKType> _vtbl* pCVar1;
        unsigned int arg1_01;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        uint8_t* puVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        void* pvVar8;
        Array<unsigned char>* this_00;
        void* pvVar9;
        size_t sVar10;
        uint64_t uVar11;
        long* plVar12;
        unsigned long arg1_03;
        Array<Array<unsigned char>>* this_01;
        shared_ptr<IDKType> local_50;
        Js5Index* local_40;

        idkType = *PTR_NullConfigType_100ee6540;
        if (arg1 < 0) {
            MakeSharedPool<IDKType, 32>::MakeShared<BaseTemplateConfigTypeList<IDKType>*&, int&>(
                (BaseTemplateConfigTypeList<IDKType>**)&local_50, (int*)(this + 1));
            idkType = local_50;
        LAB_1005aa92b:
        LAB_1005aa934:
            uVar11 = 1;
        } else {
            arg1_01 = this[1]._vptr->GetClientGroupID(arg1);
            uVar3 = this[1]._vptr->GetClientFileID(arg1);
            local_40 = nullptr;
            puVar6 =
                (uint8_t*)(**(void (**)(...))((this[2]._vptr)->_dtor + 24))(this[2]._vptr, &local_40, this[3]._vptr);
            if (puVar6 != DataStatus::MISSING) {
                if (local_40->DoesFileExist(arg1_01, uVar3) != '\0') {
                    if (puVar6 == DataStatus::READY) {
                        uVar3 = local_40->GetFileIndex(arg1_01, uVar3);
                        uVar4 = this[1]._vptr->GetUIHeight();
                        arg1_03 = 0;
                        if (1 < uVar4) {
                            arg1_03 = (unsigned long)arg1_01;
                        }
                        iVar5 = local_40->GetFileCount(arg1_01);
                        arg1_00 = (PacketT<Array<unsigned char>>*)(this + 22);
                        this_01 = (Array<Array<unsigned char>>*)(this + 19);
                        pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                        if (iVar5 == 1) {
                            arg1_00->Reserve(pvVar7->end());
                            arg1_00->SetPos(0);
                            pvVar8 = (void*)arg1_00->GetDataPtr();
                            this_00 = (Array<unsigned char>*)(*this_01)[arg1_03];
                            pvVar9 = (void*)(*this_00)[0];
                            pvVar7 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                            sVar10 = pvVar7->end();
                            _memcpy(pvVar8, pvVar9, sVar10);
                        } else {
                            Js5DiskFileFormat::GetGroupFileData((PacketT<Array<unsigned char> _>*)arg1_00,
                                                                (Array<unsigned char>*)pvVar7, uVar3);
                        }
                        MakeSharedPool<IDKType, 32>::MakeShared<BaseTemplateConfigTypeList<IDKType>*&, int&>(
                            (BaseTemplateConfigTypeList<IDKType>**)&local_50, (int*)(this + 1));
                        plVar12 = (long*)local_50.operator->();
                        puVar6 = (uint8_t*)(**(void (**)(...))(*plVar12 + 32))(plVar12, arg1_00);
                        if (puVar6 == DataStatus::READY) {
                            plVar12 = (long*)local_50.operator->();
                            (**(void (**)(...))(*plVar12 + 24))(plVar12);
                            pCVar1 = this[1]._vptr;
                            puVar6 = (uint8_t*)(**(void (**)(...))(pCVar1->_dtor + 72))(pCVar1, &local_50);
                            if (puVar6 == DataStatus::READY) {
                                idkType = local_50;
                            }
                        }
                        goto LAB_1005aa92b;
                    }
                    goto LAB_1005aa934;
                }
            }
            uVar11 = 0;
        }
        return uVar11;
    }

    // 0x1005aa9e0
    auto ConfigTypePreloadPackedContainer<IDKType>::AddConfigID(const shared_ptr<IDKType>& idkType, int arg2) {
        auto result;
        unsigned long uVar1;
        unique_ptr<ConfigTypePreloadPackedContainer<IDKType>::PageList>* puVar2;
        long lVar3;
        array<ConfigTypePreloadPackedContainer<IDKType>::ConfigPage*, 256ul>* paVar4;
        ReturnValue* pRVar5;
        ReturnValue this;
        ReturnValue* pRVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue local_48;
        unsigned int local_38;
        unsigned int local_34;

        if (arg2 == -1) {
            pRVar6 = &result + 17;
            *pRVar6 = idkType;
        } else {
            local_34 = arg2 & 4294901760;
            pRVar6 = &result + 9;
            uVar1 = pRVar6->size();
            arg1 = 0;
            if (uVar1 != 0) {
                do {
                    puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<IDKType>::PageList>*)(*pRVar6)[arg1];
                    lVar3 = (*puVar2).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == local_34)
                        break;
                    arg1 = (unsigned long)((int)arg1 + 1);
                } while (arg1 < uVar1);
            }
            if (uVar1 == arg1) {
                local_48 =
                    std::make_unique<ConfigTypePreloadPackedContainer<IDKType>::PageList, unsigned int&>(local_34);
                eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<IDKType>::PageList>>::emplace_back<
                    std::unique_ptr<ConfigTypePreloadPackedContainer<IDKType>::PageList>>(
                    (vector<std::unique_ptr<ConfigTypePreloadPackedContainer<IDKType>::PageList>>*)pRVar6,
                    (unique_ptr<ConfigTypePreloadPackedContainer<IDKType>::PageList,
                                std::default_delete<ConfigTypePreloadPackedContainer<IDKType>::PageList> _>*)&local_48);
            }
            uVar1 = (unsigned long)(arg2 - local_34 >> 8);
            puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<IDKType>::PageList>*)(*pRVar6)[arg1];
            paVar4 = (array<ConfigTypePreloadPackedContainer<IDKType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
            pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
            this = *pRVar5;
            uVar7 = arg2 & 255U;
            if (this == (ReturnValue)0) {
                local_38 = arg2 & 255U;
                this = (ReturnValue)AllocatePageBuffer(&result);
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<IDKType>::PageList>*)(*pRVar6)[arg1];
                paVar4 = (array<ConfigTypePreloadPackedContainer<IDKType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
                pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
                *pRVar5 = this;
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<IDKType>::PageList>*)(*pRVar6)[arg1];
                lVar3 = (*puVar2).operator->();
                if (*(unsigned int*)(lVar3 + 2048) != local_34) {
                    LogAssert("m_pageListContainer[thisPageList]->m_pageListID == pageListID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigTypePreloadPackedContainer.h",
                              469, nullptr);
                }
                uVar7 = local_38;
            }
            pRVar6 = (ReturnValue*)(*this)[(unsigned long)uVar7];
            *pRVar6 = idkType;
            *(int*)((long)this + 4096) = *(int*)((long)this + 4096) + 1;
            *(int*)(&result + 13) = arg2;
            &result[14] = this;
            *(unsigned int*)(&result + 15) = uVar7;
        }
        return pRVar6;
    }

    // 0x1005aad50
    ConfigPage* ConfigTypePreloadPackedContainer<IDKType>::AllocatePageBuffer() {
        AllocatedBlock local_28 = this[16]._vptr->Allocate(4128);
        void* pvVar1 = local_28.field_8;
        if (local_28.field_8 == nullptr) {
            LogAssert("block.m_address != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      534, nullptr);
        }
        new (local_28.field_8) ConfigPage();
        *(unsigned long*)((long)pvVar1 + 4120) = local_28.field_16;
        *(uint64_t*)((long)pvVar1 + 4104) = local_28._0_8_;
        *(void**)((long)pvVar1 + 4112) = local_28.field_8;
        return pvVar1;
    }

    // 0x1005ab0f0
    ConfigTypePreloadPackedContainer<IDKType>::PageList::PageList(unsigned int arg1) {
        uint64_t* puVar1;

        *(unsigned int*)(this + 2048) = arg1;
        *(uint32_t*)(this + 2052) = 0;
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1_00];
            *puVar1 = 0;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
    }

    // 0x1005ab1a0
    ConfigTypePreloadPackedContainer<IDKType>::ConfigPage::ConfigPage() : std::array<shared_ptr<IDKType>, 256ul>() {
        *(uint32_t*)(this + 4096) = 0;
        new ((this + 4104)) SimpleAllocator::AllocatedBlock();
    }

    // 0x1005afa60
    ConfigTypePreloadPackedContainer<MapElementType>::ConfigTypePreloadPackedContainer(
        BaseTemplateConfigTypeList<MapElementType>& baseTemplateConfigTypeList,
        Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
        const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<MapElementType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                                  js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8440;
        new ((this + 9)) eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<MapElementType>::PageList>>();
        new ((this + 17)) shared_ptr();
        new ((this + 19)) Array<Array<unsigned char>>();
        new ((this + 22)) PacketT();
        ((this + 26))->unique_ptr<true, void>();
    }

    // 0x1005afbc0
    _x7e___2* ConfigTypePreloadPackedContainer<MapElementType>::LoadList() {
        unique_ptr* this_00;
        bool bVar2;
        bool cVar3;
        DownloadWaitHandler* pDVar6;
        CoordMapSquare* pCVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        ConfigTypePreloadPackedContainer<MapElementType> _vtbl* local_48;

        if (*(int*)&this[6]._vptr == 2) {
            return (_x7e___2*)DataStatus::READY;
        }
        ConfigTypePreloadPackedContainer<MapElementType> _vtbl* pCVar1 = this[2]._vptr;
        ConfigTypePreloadPackedContainer<MapElementType> _vtbl* js5ArchiveSettings = this[3]._vptr;
        Js5Index* local_40 = nullptr;
        _x7e___2* p_Var5 = (_x7e___2*)(**(void (**)(...))(pCVar1->_dtor + 24))(pCVar1, &local_40, js5ArchiveSettings);
        if (p_Var5 != (_x7e___2*)DataStatus::READY) {
            return p_Var5;
        }
        unsigned int local_34 = this[1]._vptr->GetUIHeight();
        int iVar4 = this[1]._vptr->GetStreamCountLastMix();
        *(unsigned int*)&this[8]._vptr = iVar4 + local_34;
        if (*(int*)&this[6]._vptr == 0) {
            this_00 = (unique_ptr*)(this + 26);
            local_48 = js5ArchiveSettings;
            cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar3) {
                LogAssert("!m_downloadHandler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "ConfigTypePreloadPackedContainer.h",
                          213, nullptr);
            }
            local_50 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_34);
            *this_00 = local_50;
            pDVar6 = (DownloadWaitHandler*)**this_00;
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                CheckGroupExistence(this, pDVar6, local_40, uVar8, 0);
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    CheckGroupExistence(this, pDVar6, local_40, uVar8, uVar8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            ((this + 19))->set_max_size((unsigned long)local_34, 0);
            *(uint32_t*)&this[6]._vptr = 1;
            iVar4 = *(int*)&this[6]._vptr;
            js5ArchiveSettings = local_48;
        } else {
            iVar4 = *(int*)&this[6]._vptr;
        }
        if (iVar4 != 1) {
            return (_x7e___2*)DataStatus::READY;
        }
        pDVar6 = (DownloadWaitHandler*)*(*((this + 26)));
        if ((this[1]._vptr != nullptr) && (cVar3 = (**(void (**)(...))(pCVar1->_dtor + 64))(pCVar1), cVar3)) {
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                cVar3 = pDVar6->IsComplete(0);
                if ((!cVar3) && (cVar3 = pDVar6->CanCheck(0), cVar3)) {
                    CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, 0);
                }
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    cVar3 = pDVar6->IsComplete(uVar8);
                    if ((!cVar3) && (cVar3 = pDVar6->CanCheck(uVar8), cVar3)) {
                        CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, uVar8);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            if (*(unsigned int*)&this[8]._vptr <= *(unsigned int*)((long)&this[7]._vptr + 4)) {
                ((this + 26))->reset(nullptr);
                *(uint32_t*)&this[6]._vptr = 2;
                p_Var5 = (_x7e___2*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->_x7e___2 = p_Var5;
                bVar2 = true;
                goto LAB_1005afe36;
            }
        }
        bVar2 = false;
        p_Var5 = (_x7e___2*)DataStatus::NOTLOADED;
    LAB_1005afe36:
        if (bVar2) {
            return (_x7e___2*)DataStatus::READY;
        }
        return p_Var5;
    }

    // 0x1005afe80
    void ConfigTypePreloadPackedContainer<MapElementType>::CacheReset() {
        unique_ptr<ConfigTypePreloadPackedContainer<MapElementType>::PageList>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (unique_ptr<ConfigTypePreloadPackedContainer<MapElementType>::PageList>*)(*this_00)[arg1];
                ((PageList*)this_01->get())->ClearPageList(*this[16]._vptr);
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        this_00->clear();
        this[14]._vptr = nullptr;
        *(uint32_t*)&this[15]._vptr = 0;
        *(uint32_t*)&this[13]._vptr = 4294967295;
    }

    // 0x1005aff10
    void ConfigTypePreloadPackedContainer<MapElementType>::CacheClean(unsigned int arg1) {
        LoadList** ppLVar1;
        ConfigTypePreloadPackedContainer<MapElementType> _vtbl* this_01;
        unsigned long uVar4;
        unique_ptr<ConfigTypePreloadPackedContainer<MapElementType>::PageList>* this_02;
        array<ConfigTypePreloadPackedContainer<MapElementType>::ConfigPage*, 256ul>* this_03;
        uint64_t* puVar5;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_04;
        unsigned long arg1_00;
        unsigned int uVar6;
        int iVar7;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_02 = (unique_ptr<ConfigTypePreloadPackedContainer<MapElementType>::PageList>*)(*this_00)[arg1_00];
                this_03 = (array<ConfigTypePreloadPackedContainer<MapElementType>::ConfigPage*, 256ul>*)this_02->get();
                uVar6 = *(unsigned int*)(this_03 + 2052);
                iVar7 = 16;
                do {
                    puVar5 = (uint64_t*)(*this_03)[(unsigned long)(uVar6 >> 8)];
                    this_01 = (ConfigTypePreloadPackedContainer<MapElementType> _vtbl*)*puVar5;
                    if (this_01 != nullptr) {
                        this_04 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*this_01)[(
                            unsigned long)(uVar6 & 255)];
                        if (this_04->unique() != '\0') {
                            this_04->reset();
                            if ((this_01 == this[14]._vptr) && ((uVar6 & 255) == *(unsigned int*)&this[15]._vptr)) {
                                this[14]._vptr = nullptr;
                                *(uint32_t*)&this[15]._vptr = 0;
                                *(uint32_t*)&this[13]._vptr = 4294967295;
                            }
                            ppLVar1 = &this_01[51].LoadList;
                            *(int*)ppLVar1 = *(int*)ppLVar1 - 1;
                            if (*(int*)ppLVar1 == 0) {
                                this[16]._vptr->DeAllocate(&this_01[51].CacheReset);
                                *puVar5 = 0;
                            }
                        }
                    }
                    uVar6 = uVar6 + 1 & 65535;
                    iVar7 = iVar7 - 1;
                } while (iVar7 != 0);
                *(unsigned int*)(this_03 + 2052) = uVar6;
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x1005b0080
    shared_ptr* ConfigTypePreloadPackedContainer<MapElementType>::List(int arg1, const DataStatus** arg2) {
        shared_ptr* psVar2;
        uint8_t** ppuVar3;

        if (*(int*)&this[6]._vptr != 2) {
            if (arg2 == nullptr) {
                return (shared_ptr*)PTR_NullConfigType_100ee6518;
            }
            ppuVar3 = &DataStatus::NOTLOADED;
            psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6518;
        LAB_1005b00db:
            *arg2 = (DataStatus*)*ppuVar3;
            return psVar2;
        }
        psVar2 = (shared_ptr*)FindConfigID(this, arg1);
        if (shared_ptr::operator_cast_to_bool(psVar2)) {
            if (arg2 == nullptr) {
                return psVar2;
            }
            ppuVar3 = &DataStatus::READY;
            goto LAB_1005b00db;
        }
        shared_ptr local_38;
        if (!(DecodeConfig(this, arg1, (shared_ptr<MapElementType>*)&local_38))) {
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::MISSING;
            LAB_1005b0151:
                *arg2 = (DataStatus*)*ppuVar3;
            }
        } else {
            if (shared_ptr::operator_cast_to_bool(&local_38)) {
                if (arg2 != nullptr) {
                    *arg2 = (DataStatus*)DataStatus::READY;
                }
                psVar2 = (shared_ptr*)AddConfigID((ReturnValue*)this, (shared_ptr<MapElementType>*)&local_38, arg1);
                goto LAB_1005b015e;
            }
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_1005b0151;
            }
        }
        psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6518;
    LAB_1005b015e:
        return psVar2;
    }

    // 0x1005b0190
    auto ConfigTypePreloadPackedContainer<MapElementType>::DirectFetch(int arg1) {
        if (*(int*)&this[6]._vptr != 2) {
            LogAssert("m_loadStep == BaseLoadAllConfigTypeContainer::LoadStep::DONE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      179, nullptr);
        }
        auto result;
        if (DecodeConfig(this, arg1, &result) == '\0') {
            LogAssert("exists",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      183, nullptr);
        }
        return result;
    }

    // 0x1005b03a0
    ConfigTypePreloadPackedContainer<MapElementType>::~ConfigTypePreloadPackedContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8440;
        this[16]._vptr->PrintMetrics();
        CacheReset();
        ((this + 26))->~unique_ptr();
        ((this + 22))->~VBOMapper();
        ((this + 19))->~Array();
        ((this + 17))->~shared_ptr();
        ((this + 9))->~vector();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005b0490
    void ConfigTypePreloadPackedContainer<MapElementType>::CheckGroupExistence(DownloadWaitHandler& downloadWaitHandler,
                                                                               Js5Index* js5Index, unsigned int arg3,
                                                                               unsigned int arg4) {
        int* piVar1;

        if (js5Index == nullptr) {
            LogAssert("js5Index",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      365, nullptr);
        }
        if (js5Index->DoesGroupExist(arg3) == '\0') {
            piVar1 = (int*)((long)&this[7]._vptr + 4);
            *piVar1 = *piVar1 + 1;
        } else {
            downloadWaitHandler.SetExists(arg4);
        }
    }

    // 0x1005b0510
    void ConfigTypePreloadPackedContainer<MapElementType>::CheckDecodeProgress(
        const Js5ArchiveSettings& js5ArchiveSettings, Js5Index* js5Index, unsigned int arg3, unsigned int arg4) {
        int iVar1;
        Array<unsigned char>* this_00;
        TextureAtlasReference* pTVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        void* pvVar4;
        PacketT<Array<unsigned char>>* this_02;
        void* pvVar5;
        size_t sVar6;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)this[1]._vptr->GetGroup(local_48, js5ArchiveSettings, arg3, (Priority*)Priority::HIGHEST, true,
                                              true) == DataStatus::READY) {
            this_00 = (Array<unsigned char>*)(*((this + 19)))[(unsigned long)arg4];
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            this_00->set_max_size(pTVar3->GetTextureAtlas(), 0);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*((this + 19)))[(unsigned long)arg4];
            pvVar4 = (void*)this_01->data();
            this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pvVar5 = (void*)this_02->GetDataPtr();
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            sVar6 = pTVar3->GetTextureAtlas();
            _memcpy(pvVar4, pvVar5, sVar6);
            iVar1 = js5Index->GetMaximumFileID(arg3);
            *(int*)((long)&this[7]._vptr + 4) = iVar1 + *(int*)((long)&this[7]._vptr + 4) + 1;
            ((DownloadWaitHandler*)(*((this + 26))).operator->())->Completed(arg4);
        }
    }

    // 0x1005b06b0
    void ConfigTypePreloadPackedContainer<MapElementType>::PageList::ClearPageList(SimpleAllocator& simpleAllocator) {
        ConfigPage* this_00;
        uint64_t* puVar1;

        unsigned long arg1 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1];
            this_00 = (ConfigPage*)*puVar1;
            if (this_00 != nullptr) {
                this_00->Clear();
                simpleAllocator.DeAllocate((this_00 + 4104));
                *puVar1 = 0;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005b0790
    void ConfigTypePreloadPackedContainer<MapElementType>::ConfigPage::Clear() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1];
            if (this_00->end() != 0) {
                this_00->reset();
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005b08c0
    ConfigTypePreloadPackedContainer<MapElementType>*
    ConfigTypePreloadPackedContainer<MapElementType>::FindConfigID(int arg1) const {
        unsigned int uVar2;
        shared_ptr* this_00;
        long lVar3;
        unique_ptr<ConfigTypePreloadPackedContainer<MapElementType>::PageList>* puVar4;
        unsigned long uVar5;
        array<ConfigTypePreloadPackedContainer<MapElementType>::ConfigPage*, 256ul>* this_01;
        long* plVar6;
        ConfigTypePreloadPackedContainer<MapElementType>* pCVar7;
        unsigned long arg1_00;
        unsigned int uVar8;
        ConfigTypePreloadPackedContainer<MapElementType> _vtbl* this_02;
        vector<eastl::pair<int, int>>* this_03;

        if (arg1 == -1) {
            pCVar7 = this + 17;
        } else {
            if (*(int*)&this[13]._vptr == arg1) {
                if (this[14]._vptr != nullptr) {
                    this_00 = (shared_ptr*)(*this[14]._vptr)[(unsigned long)*(unsigned int*)&this[15]._vptr];
                    if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                        this_02 = this[14]._vptr;
                        uVar8 = *(unsigned int*)&this[15]._vptr;
                    LAB_1005b09e2:
                        pCVar7 = (ConfigTypePreloadPackedContainer<MapElementType>*)(*this_02)[(unsigned long)uVar8];
                        return pCVar7;
                    }
                }
                uVar8 = *(unsigned int*)&this[13]._vptr;
                uVar2 = this[3]._vptr->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigTypePreloadPackedContainer.h",
                                507, "Previously loaded config ID %d (archive ID %u) unexpectedly missing",
                                (unsigned long)uVar8, (unsigned long)uVar2);
            }
            this_03 = (vector<eastl::pair<int, int>>*)(this + 9);
            lVar3 = this_03->size();
            pCVar7 = (ConfigTypePreloadPackedContainer<MapElementType>*)PTR_NullConfigType_100ee6518;
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    puVar4 =
                        (unique_ptr<ConfigTypePreloadPackedContainer<MapElementType>::PageList>*)(*this_03)[arg1_00];
                    lVar3 = (*puVar4).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == (arg1 & 4294901760U)) {
                        puVar4 = (unique_ptr<
                                  ConfigTypePreloadPackedContainer<MapElementType>::PageList>*)(*this_03)[arg1_00];
                        this_01 =
                            (array<ConfigTypePreloadPackedContainer<MapElementType>::ConfigPage*, 256ul>*)(*puVar4)
                                .operator->();
                        plVar6 = (long*)(*this_01)[(unsigned long)((unsigned int)arg1 >> 8 & 255)];
                        this_02 = (ConfigTypePreloadPackedContainer<MapElementType> _vtbl*)*plVar6;
                        if (this_02 == nullptr) {
                            return pCVar7;
                        }
                        uVar8 = arg1 & 255;
                        goto LAB_1005b09e2;
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar5 = this_03->size();
                } while (arg1_00 < uVar5);
            }
        }
        return pCVar7;
    }

    // 0x1005b0a00
    uint64_t
    ConfigTypePreloadPackedContainer<MapElementType>::DecodeConfig(int arg1,
                                                                   shared_ptr<MapElementType>& mapElementType) {
        PacketT<Array<unsigned char>>* arg1_00;
        ConfigTypePreloadPackedContainer<MapElementType> _vtbl* pCVar1;
        unsigned int arg1_01;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        uint8_t* puVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        void* pvVar8;
        Array<unsigned char>* this_00;
        void* pvVar9;
        size_t sVar10;
        uint64_t uVar11;
        long* plVar12;
        unsigned long arg1_03;
        Array<Array<unsigned char>>* this_01;
        shared_ptr<MapElementType> local_50;
        Js5Index* local_40;

        mapElementType = *PTR_NullConfigType_100ee6518;
        if (arg1 < 0) {
            MakeSharedPool<MapElementType, 512>::MakeShared<BaseTemplateConfigTypeList<MapElementType>*&, int&>(
                (BaseTemplateConfigTypeList<MapElementType>**)&local_50, (int*)(this + 1));
            mapElementType = local_50;
        LAB_1005b0b8b:
        LAB_1005b0b94:
            uVar11 = 1;
        } else {
            arg1_01 = this[1]._vptr->GetClientGroupID(arg1);
            uVar3 = this[1]._vptr->GetClientFileID(arg1);
            local_40 = nullptr;
            puVar6 =
                (uint8_t*)(**(void (**)(...))((this[2]._vptr)->_dtor + 24))(this[2]._vptr, &local_40, this[3]._vptr);
            if (puVar6 != DataStatus::MISSING) {
                if (local_40->DoesFileExist(arg1_01, uVar3) != '\0') {
                    if (puVar6 == DataStatus::READY) {
                        uVar3 = local_40->GetFileIndex(arg1_01, uVar3);
                        uVar4 = this[1]._vptr->GetUIHeight();
                        arg1_03 = 0;
                        if (1 < uVar4) {
                            arg1_03 = (unsigned long)arg1_01;
                        }
                        iVar5 = local_40->GetFileCount(arg1_01);
                        arg1_00 = (PacketT<Array<unsigned char>>*)(this + 22);
                        this_01 = (Array<Array<unsigned char>>*)(this + 19);
                        pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                        if (iVar5 == 1) {
                            arg1_00->Reserve(pvVar7->end());
                            arg1_00->SetPos(0);
                            pvVar8 = (void*)arg1_00->GetDataPtr();
                            this_00 = (Array<unsigned char>*)(*this_01)[arg1_03];
                            pvVar9 = (void*)(*this_00)[0];
                            pvVar7 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                            sVar10 = pvVar7->end();
                            _memcpy(pvVar8, pvVar9, sVar10);
                        } else {
                            Js5DiskFileFormat::GetGroupFileData((PacketT<Array<unsigned char> _>*)arg1_00,
                                                                (Array<unsigned char>*)pvVar7, uVar3);
                        }
                        MakeSharedPool<MapElementType, 512>::MakeShared<BaseTemplateConfigTypeList<MapElementType>*&,
                                                                        int&>(
                            (BaseTemplateConfigTypeList<MapElementType>**)&local_50, (int*)(this + 1));
                        plVar12 = (long*)local_50.operator->();
                        puVar6 = (uint8_t*)(**(void (**)(...))(*plVar12 + 32))(plVar12, arg1_00);
                        if (puVar6 == DataStatus::READY) {
                            plVar12 = (long*)local_50.operator->();
                            (**(void (**)(...))(*plVar12 + 24))(plVar12);
                            pCVar1 = this[1]._vptr;
                            puVar6 = (uint8_t*)(**(void (**)(...))(pCVar1->_dtor + 72))(pCVar1, &local_50);
                            if (puVar6 == DataStatus::READY) {
                                mapElementType = local_50;
                            }
                        }
                        goto LAB_1005b0b8b;
                    }
                    goto LAB_1005b0b94;
                }
            }
            uVar11 = 0;
        }
        return uVar11;
    }

    // 0x1005b0c40
    auto ConfigTypePreloadPackedContainer<MapElementType>::AddConfigID(const shared_ptr<MapElementType>& mapElementType,
                                                                       int arg2) {
        auto result;
        unsigned long uVar1;
        unique_ptr<ConfigTypePreloadPackedContainer<MapElementType>::PageList>* puVar2;
        long lVar3;
        array<ConfigTypePreloadPackedContainer<MapElementType>::ConfigPage*, 256ul>* paVar4;
        ReturnValue* pRVar5;
        ReturnValue this;
        ReturnValue* pRVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue local_48;
        unsigned int local_38;
        unsigned int local_34;

        if (arg2 == -1) {
            pRVar6 = &result + 17;
            *pRVar6 = mapElementType;
        } else {
            local_34 = arg2 & 4294901760;
            pRVar6 = &result + 9;
            uVar1 = pRVar6->size();
            arg1 = 0;
            if (uVar1 != 0) {
                do {
                    puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<MapElementType>::PageList>*)(*pRVar6)[arg1];
                    lVar3 = (*puVar2).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == local_34)
                        break;
                    arg1 = (unsigned long)((int)arg1 + 1);
                } while (arg1 < uVar1);
            }
            if (uVar1 == arg1) {
                local_48 = std::make_unique<ConfigTypePreloadPackedContainer<MapElementType>::PageList, unsigned int&>(
                    local_34);
                eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<MapElementType>::PageList>>::
                    emplace_back<std::unique_ptr<ConfigTypePreloadPackedContainer<MapElementType>::PageList>>(
                        (vector<std::unique_ptr<ConfigTypePreloadPackedContainer<MapElementType>::PageList>>*)pRVar6,
                        (unique_ptr<ConfigTypePreloadPackedContainer<MapElementType>::PageList,
                                    std::default_delete<ConfigTypePreloadPackedContainer<MapElementType>::PageList>
                                        _>*)&local_48);
            }
            uVar1 = (unsigned long)(arg2 - local_34 >> 8);
            puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<MapElementType>::PageList>*)(*pRVar6)[arg1];
            paVar4 =
                (array<ConfigTypePreloadPackedContainer<MapElementType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
            pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
            this = *pRVar5;
            uVar7 = arg2 & 255U;
            if (this == (ReturnValue)0) {
                local_38 = arg2 & 255U;
                this = (ReturnValue)AllocatePageBuffer((ConfigTypePreloadPackedContainer<MapElementType>*)&result);
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<MapElementType>::PageList>*)(*pRVar6)[arg1];
                paVar4 = (array<ConfigTypePreloadPackedContainer<MapElementType>::ConfigPage*, 256ul>*)(*puVar2)
                             .operator->();
                pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
                *pRVar5 = this;
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<MapElementType>::PageList>*)(*pRVar6)[arg1];
                lVar3 = (*puVar2).operator->();
                if (*(unsigned int*)(lVar3 + 2048) != local_34) {
                    LogAssert("m_pageListContainer[thisPageList]->m_pageListID == pageListID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigTypePreloadPackedContainer.h",
                              469, nullptr);
                }
                uVar7 = local_38;
            }
            pRVar6 = (ReturnValue*)(*this)[(unsigned long)uVar7];
            *pRVar6 = mapElementType;
            *(int*)((long)this + 4096) = *(int*)((long)this + 4096) + 1;
            *(int*)(&result + 13) = arg2;
            &result[14] = this;
            *(unsigned int*)(&result + 15) = uVar7;
        }
        return pRVar6;
    }

    // 0x1005b0fb0
    ConfigPage* ConfigTypePreloadPackedContainer<MapElementType>::AllocatePageBuffer() {
        AllocatedBlock local_28 = this[16]._vptr->Allocate(4128);
        void* pvVar1 = local_28.field_8;
        if (local_28.field_8 == nullptr) {
            LogAssert("block.m_address != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      534, nullptr);
        }
        new (local_28.field_8) ConfigPage();
        *(unsigned long*)((long)pvVar1 + 4120) = local_28.field_16;
        *(uint64_t*)((long)pvVar1 + 4104) = local_28._0_8_;
        *(void**)((long)pvVar1 + 4112) = local_28.field_8;
        return pvVar1;
    }

    // 0x1005b1350
    ConfigTypePreloadPackedContainer<MapElementType>::PageList::PageList(unsigned int arg1) {
        uint64_t* puVar1;

        *(unsigned int*)(this + 2048) = arg1;
        *(uint32_t*)(this + 2052) = 0;
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1_00];
            *puVar1 = 0;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
    }

    // 0x1005b1400
    ConfigTypePreloadPackedContainer<MapElementType>::ConfigPage::ConfigPage()
        : std::array<shared_ptr<MapElementType>, 256ul>() {
        *(uint32_t*)(this + 4096) = 0;
        new ((this + 4104)) SimpleAllocator::AllocatedBlock();
    }

    // 0x1005b57b0
    ConfigTypePreloadPackedContainer<MSIType>::ConfigTypePreloadPackedContainer(
        BaseTemplateConfigTypeList<MSIType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<MSIType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                           js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8480;
        new ((this + 9)) eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<MSIType>::PageList>>();
        new ((this + 17)) shared_ptr();
        new ((this + 19)) Array<Array<unsigned char>>();
        new ((this + 22)) PacketT();
        ((this + 26))->unique_ptr<true, void>();
    }

    // 0x1005b5910
    _x7e___2* ConfigTypePreloadPackedContainer<MSIType>::LoadList() {
        unique_ptr* this_00;
        bool bVar2;
        bool cVar3;
        DownloadWaitHandler* pDVar6;
        CoordMapSquare* pCVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        ConfigTypePreloadPackedContainer<MSIType> _vtbl* local_48;

        if (*(int*)&this[6]._vptr == 2) {
            return (_x7e___2*)DataStatus::READY;
        }
        ConfigTypePreloadPackedContainer<MSIType> _vtbl* pCVar1 = this[2]._vptr;
        ConfigTypePreloadPackedContainer<MSIType> _vtbl* js5ArchiveSettings = this[3]._vptr;
        Js5Index* local_40 = nullptr;
        _x7e___2* p_Var5 = (_x7e___2*)(**(void (**)(...))(pCVar1->_dtor + 24))(pCVar1, &local_40, js5ArchiveSettings);
        if (p_Var5 != (_x7e___2*)DataStatus::READY) {
            return p_Var5;
        }
        unsigned int local_34 = this[1]._vptr->GetUIHeight();
        int iVar4 = this[1]._vptr->GetStreamCountLastMix();
        *(unsigned int*)&this[8]._vptr = iVar4 + local_34;
        if (*(int*)&this[6]._vptr == 0) {
            this_00 = (unique_ptr*)(this + 26);
            local_48 = js5ArchiveSettings;
            cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar3) {
                LogAssert("!m_downloadHandler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "ConfigTypePreloadPackedContainer.h",
                          213, nullptr);
            }
            local_50 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_34);
            *this_00 = local_50;
            pDVar6 = (DownloadWaitHandler*)**this_00;
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                CheckGroupExistence(this, pDVar6, local_40, uVar8, 0);
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    CheckGroupExistence(this, pDVar6, local_40, uVar8, uVar8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            ((this + 19))->set_max_size((unsigned long)local_34, 0);
            *(uint32_t*)&this[6]._vptr = 1;
            iVar4 = *(int*)&this[6]._vptr;
            js5ArchiveSettings = local_48;
        } else {
            iVar4 = *(int*)&this[6]._vptr;
        }
        if (iVar4 != 1) {
            return (_x7e___2*)DataStatus::READY;
        }
        pDVar6 = (DownloadWaitHandler*)*(*((this + 26)));
        if ((this[1]._vptr != nullptr) && (cVar3 = (**(void (**)(...))(pCVar1->_dtor + 64))(pCVar1), cVar3)) {
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                cVar3 = pDVar6->IsComplete(0);
                if ((!cVar3) && (cVar3 = pDVar6->CanCheck(0), cVar3)) {
                    CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, 0);
                }
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    cVar3 = pDVar6->IsComplete(uVar8);
                    if ((!cVar3) && (cVar3 = pDVar6->CanCheck(uVar8), cVar3)) {
                        CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, uVar8);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            if (*(unsigned int*)&this[8]._vptr <= *(unsigned int*)((long)&this[7]._vptr + 4)) {
                ((this + 26))->reset(nullptr);
                *(uint32_t*)&this[6]._vptr = 2;
                p_Var5 = (_x7e___2*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->_x7e___2 = p_Var5;
                bVar2 = true;
                goto LAB_1005b5b86;
            }
        }
        bVar2 = false;
        p_Var5 = (_x7e___2*)DataStatus::NOTLOADED;
    LAB_1005b5b86:
        if (bVar2) {
            return (_x7e___2*)DataStatus::READY;
        }
        return p_Var5;
    }

    // 0x1005b5bd0
    void ConfigTypePreloadPackedContainer<MSIType>::CacheReset() {
        unique_ptr<ConfigTypePreloadPackedContainer<MSIType>::PageList>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (unique_ptr<ConfigTypePreloadPackedContainer<MSIType>::PageList>*)(*this_00)[arg1];
                ((PageList*)this_01->get())->ClearPageList(*this[16]._vptr);
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        this_00->clear();
        this[14]._vptr = nullptr;
        *(uint32_t*)&this[15]._vptr = 0;
        *(uint32_t*)&this[13]._vptr = 4294967295;
    }

    // 0x1005b5c60
    void ConfigTypePreloadPackedContainer<MSIType>::CacheClean(unsigned int arg1) {
        LoadList** ppLVar1;
        ConfigTypePreloadPackedContainer<MSIType> _vtbl* this_01;
        unsigned long uVar4;
        unique_ptr<ConfigTypePreloadPackedContainer<MSIType>::PageList>* this_02;
        array<ConfigTypePreloadPackedContainer<MSIType>::ConfigPage*, 256ul>* this_03;
        uint64_t* puVar5;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_04;
        unsigned long arg1_00;
        unsigned int uVar6;
        int iVar7;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_02 = (unique_ptr<ConfigTypePreloadPackedContainer<MSIType>::PageList>*)(*this_00)[arg1_00];
                this_03 = (array<ConfigTypePreloadPackedContainer<MSIType>::ConfigPage*, 256ul>*)this_02->get();
                uVar6 = *(unsigned int*)(this_03 + 2052);
                iVar7 = 16;
                do {
                    puVar5 = (uint64_t*)(*this_03)[(unsigned long)(uVar6 >> 8)];
                    this_01 = (ConfigTypePreloadPackedContainer<MSIType> _vtbl*)*puVar5;
                    if (this_01 != nullptr) {
                        this_04 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*this_01)[(
                            unsigned long)(uVar6 & 255)];
                        if (this_04->unique() != '\0') {
                            this_04->reset();
                            if ((this_01 == this[14]._vptr) && ((uVar6 & 255) == *(unsigned int*)&this[15]._vptr)) {
                                this[14]._vptr = nullptr;
                                *(uint32_t*)&this[15]._vptr = 0;
                                *(uint32_t*)&this[13]._vptr = 4294967295;
                            }
                            ppLVar1 = &this_01[51].LoadList;
                            *(int*)ppLVar1 = *(int*)ppLVar1 - 1;
                            if (*(int*)ppLVar1 == 0) {
                                this[16]._vptr->DeAllocate(&this_01[51].CacheReset);
                                *puVar5 = 0;
                            }
                        }
                    }
                    uVar6 = uVar6 + 1 & 65535;
                    iVar7 = iVar7 - 1;
                } while (iVar7 != 0);
                *(unsigned int*)(this_03 + 2052) = uVar6;
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x1005b5dd0
    shared_ptr* ConfigTypePreloadPackedContainer<MSIType>::List(int arg1, const DataStatus** arg2) {
        shared_ptr* psVar2;
        uint8_t** ppuVar3;

        if (*(int*)&this[6]._vptr != 2) {
            if (arg2 == nullptr) {
                return (shared_ptr*)PTR_NullConfigType_100ee6558;
            }
            ppuVar3 = &DataStatus::NOTLOADED;
            psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6558;
        LAB_1005b5e2b:
            *arg2 = (DataStatus*)*ppuVar3;
            return psVar2;
        }
        psVar2 = (shared_ptr*)FindConfigID(this, arg1);
        if (shared_ptr::operator_cast_to_bool(psVar2)) {
            if (arg2 == nullptr) {
                return psVar2;
            }
            ppuVar3 = &DataStatus::READY;
            goto LAB_1005b5e2b;
        }
        shared_ptr local_38;
        if (!(DecodeConfig(this, arg1, (shared_ptr<MSIType>*)&local_38))) {
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::MISSING;
            LAB_1005b5ea1:
                *arg2 = (DataStatus*)*ppuVar3;
            }
        } else {
            if (shared_ptr::operator_cast_to_bool(&local_38)) {
                if (arg2 != nullptr) {
                    *arg2 = (DataStatus*)DataStatus::READY;
                }
                psVar2 = (shared_ptr*)AddConfigID((ReturnValue*)this, (shared_ptr<MSIType>*)&local_38, arg1);
                goto LAB_1005b5eae;
            }
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_1005b5ea1;
            }
        }
        psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6558;
    LAB_1005b5eae:
        return psVar2;
    }

    // 0x1005b5ee0
    auto ConfigTypePreloadPackedContainer<MSIType>::DirectFetch(int arg1) {
        if (*(int*)&this[6]._vptr != 2) {
            LogAssert("m_loadStep == BaseLoadAllConfigTypeContainer::LoadStep::DONE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      179, nullptr);
        }
        auto result;
        if (DecodeConfig(this, arg1, &result) == '\0') {
            LogAssert("exists",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      183, nullptr);
        }
        return result;
    }

    // 0x1005b60f0
    ConfigTypePreloadPackedContainer<MSIType>::~ConfigTypePreloadPackedContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8480;
        this[16]._vptr->PrintMetrics();
        CacheReset();
        ((this + 26))->~unique_ptr();
        ((this + 22))->~VBOMapper();
        ((this + 19))->~Array();
        ((this + 17))->~shared_ptr();
        ((this + 9))->~vector();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005b61e0
    void ConfigTypePreloadPackedContainer<MSIType>::CheckGroupExistence(DownloadWaitHandler& downloadWaitHandler,
                                                                        Js5Index* js5Index, unsigned int arg3,
                                                                        unsigned int arg4) {
        int* piVar1;

        if (js5Index == nullptr) {
            LogAssert("js5Index",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      365, nullptr);
        }
        if (js5Index->DoesGroupExist(arg3) == '\0') {
            piVar1 = (int*)((long)&this[7]._vptr + 4);
            *piVar1 = *piVar1 + 1;
        } else {
            downloadWaitHandler.SetExists(arg4);
        }
    }

    // 0x1005b6260
    void ConfigTypePreloadPackedContainer<MSIType>::CheckDecodeProgress(const Js5ArchiveSettings& js5ArchiveSettings,
                                                                        Js5Index* js5Index, unsigned int arg3,
                                                                        unsigned int arg4) {
        int iVar1;
        Array<unsigned char>* this_00;
        TextureAtlasReference* pTVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        void* pvVar4;
        PacketT<Array<unsigned char>>* this_02;
        void* pvVar5;
        size_t sVar6;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)this[1]._vptr->GetGroup(local_48, js5ArchiveSettings, arg3, (Priority*)Priority::HIGHEST, true,
                                              true) == DataStatus::READY) {
            this_00 = (Array<unsigned char>*)(*((this + 19)))[(unsigned long)arg4];
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            this_00->set_max_size(pTVar3->GetTextureAtlas(), 0);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*((this + 19)))[(unsigned long)arg4];
            pvVar4 = (void*)this_01->data();
            this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pvVar5 = (void*)this_02->GetDataPtr();
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            sVar6 = pTVar3->GetTextureAtlas();
            _memcpy(pvVar4, pvVar5, sVar6);
            iVar1 = js5Index->GetMaximumFileID(arg3);
            *(int*)((long)&this[7]._vptr + 4) = iVar1 + *(int*)((long)&this[7]._vptr + 4) + 1;
            ((DownloadWaitHandler*)(*((this + 26))).operator->())->Completed(arg4);
        }
    }

    // 0x1005b6400
    void ConfigTypePreloadPackedContainer<MSIType>::PageList::ClearPageList(SimpleAllocator& simpleAllocator) {
        ConfigPage* this_00;
        uint64_t* puVar1;

        unsigned long arg1 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1];
            this_00 = (ConfigPage*)*puVar1;
            if (this_00 != nullptr) {
                this_00->Clear();
                simpleAllocator.DeAllocate((this_00 + 4104));
                *puVar1 = 0;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005b64e0
    void ConfigTypePreloadPackedContainer<MSIType>::ConfigPage::Clear() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1];
            if (this_00->end() != 0) {
                this_00->reset();
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005b6610
    ConfigTypePreloadPackedContainer<MSIType>* ConfigTypePreloadPackedContainer<MSIType>::FindConfigID(int arg1) const {
        unsigned int uVar2;
        shared_ptr* this_00;
        long lVar3;
        unique_ptr<ConfigTypePreloadPackedContainer<MSIType>::PageList>* puVar4;
        unsigned long uVar5;
        array<ConfigTypePreloadPackedContainer<MSIType>::ConfigPage*, 256ul>* this_01;
        long* plVar6;
        ConfigTypePreloadPackedContainer<MSIType>* pCVar7;
        unsigned long arg1_00;
        unsigned int uVar8;
        ConfigTypePreloadPackedContainer<MSIType> _vtbl* this_02;
        vector<eastl::pair<int, int>>* this_03;

        if (arg1 == -1) {
            pCVar7 = this + 17;
        } else {
            if (*(int*)&this[13]._vptr == arg1) {
                if (this[14]._vptr != nullptr) {
                    this_00 = (shared_ptr*)(*this[14]._vptr)[(unsigned long)*(unsigned int*)&this[15]._vptr];
                    if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                        this_02 = this[14]._vptr;
                        uVar8 = *(unsigned int*)&this[15]._vptr;
                    LAB_1005b6732:
                        pCVar7 = (ConfigTypePreloadPackedContainer<MSIType>*)(*this_02)[(unsigned long)uVar8];
                        return pCVar7;
                    }
                }
                uVar8 = *(unsigned int*)&this[13]._vptr;
                uVar2 = this[3]._vptr->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigTypePreloadPackedContainer.h",
                                507, "Previously loaded config ID %d (archive ID %u) unexpectedly missing",
                                (unsigned long)uVar8, (unsigned long)uVar2);
            }
            this_03 = (vector<eastl::pair<int, int>>*)(this + 9);
            lVar3 = this_03->size();
            pCVar7 = (ConfigTypePreloadPackedContainer<MSIType>*)PTR_NullConfigType_100ee6558;
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<MSIType>::PageList>*)(*this_03)[arg1_00];
                    lVar3 = (*puVar4).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == (arg1 & 4294901760U)) {
                        puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<MSIType>::PageList>*)(*this_03)[arg1_00];
                        this_01 = (array<ConfigTypePreloadPackedContainer<MSIType>::ConfigPage*, 256ul>*)(*puVar4)
                                      .operator->();
                        plVar6 = (long*)(*this_01)[(unsigned long)((unsigned int)arg1 >> 8 & 255)];
                        this_02 = (ConfigTypePreloadPackedContainer<MSIType> _vtbl*)*plVar6;
                        if (this_02 == nullptr) {
                            return pCVar7;
                        }
                        uVar8 = arg1 & 255;
                        goto LAB_1005b6732;
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar5 = this_03->size();
                } while (arg1_00 < uVar5);
            }
        }
        return pCVar7;
    }

    // 0x1005b6750
    uint64_t ConfigTypePreloadPackedContainer<MSIType>::DecodeConfig(int arg1, shared_ptr<MSIType>& msiType) {
        PacketT<Array<unsigned char>>* arg1_00;
        ConfigTypePreloadPackedContainer<MSIType> _vtbl* pCVar1;
        unsigned int arg1_01;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        uint8_t* puVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        void* pvVar8;
        Array<unsigned char>* this_00;
        void* pvVar9;
        size_t sVar10;
        uint64_t uVar11;
        long* plVar12;
        unsigned long arg1_03;
        Array<Array<unsigned char>>* this_01;
        shared_ptr<MSIType> local_50;
        Js5Index* local_40;

        msiType = *PTR_NullConfigType_100ee6558;
        if (arg1 < 0) {
            MakeSharedPool<MSIType, 32>::MakeShared<BaseTemplateConfigTypeList<MSIType>*&, int&>(
                (BaseTemplateConfigTypeList<MSIType>**)&local_50, (int*)(this + 1));
            msiType = local_50;
        LAB_1005b68db:
        LAB_1005b68e4:
            uVar11 = 1;
        } else {
            arg1_01 = this[1]._vptr->GetClientGroupID(arg1);
            uVar3 = this[1]._vptr->GetClientFileID(arg1);
            local_40 = nullptr;
            puVar6 =
                (uint8_t*)(**(void (**)(...))((this[2]._vptr)->_dtor + 24))(this[2]._vptr, &local_40, this[3]._vptr);
            if (puVar6 != DataStatus::MISSING) {
                if (local_40->DoesFileExist(arg1_01, uVar3) != '\0') {
                    if (puVar6 == DataStatus::READY) {
                        uVar3 = local_40->GetFileIndex(arg1_01, uVar3);
                        uVar4 = this[1]._vptr->GetUIHeight();
                        arg1_03 = 0;
                        if (1 < uVar4) {
                            arg1_03 = (unsigned long)arg1_01;
                        }
                        iVar5 = local_40->GetFileCount(arg1_01);
                        arg1_00 = (PacketT<Array<unsigned char>>*)(this + 22);
                        this_01 = (Array<Array<unsigned char>>*)(this + 19);
                        pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                        if (iVar5 == 1) {
                            arg1_00->Reserve(pvVar7->end());
                            arg1_00->SetPos(0);
                            pvVar8 = (void*)arg1_00->GetDataPtr();
                            this_00 = (Array<unsigned char>*)(*this_01)[arg1_03];
                            pvVar9 = (void*)(*this_00)[0];
                            pvVar7 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                            sVar10 = pvVar7->end();
                            _memcpy(pvVar8, pvVar9, sVar10);
                        } else {
                            Js5DiskFileFormat::GetGroupFileData((PacketT<Array<unsigned char> _>*)arg1_00,
                                                                (Array<unsigned char>*)pvVar7, uVar3);
                        }
                        MakeSharedPool<MSIType, 32>::MakeShared<BaseTemplateConfigTypeList<MSIType>*&, int&>(
                            (BaseTemplateConfigTypeList<MSIType>**)&local_50, (int*)(this + 1));
                        plVar12 = (long*)local_50.operator->();
                        puVar6 = (uint8_t*)(**(void (**)(...))(*plVar12 + 32))(plVar12, arg1_00);
                        if (puVar6 == DataStatus::READY) {
                            plVar12 = (long*)local_50.operator->();
                            (**(void (**)(...))(*plVar12 + 24))(plVar12);
                            pCVar1 = this[1]._vptr;
                            puVar6 = (uint8_t*)(**(void (**)(...))(pCVar1->_dtor + 72))(pCVar1, &local_50);
                            if (puVar6 == DataStatus::READY) {
                                msiType = local_50;
                            }
                        }
                        goto LAB_1005b68db;
                    }
                    goto LAB_1005b68e4;
                }
            }
            uVar11 = 0;
        }
        return uVar11;
    }

    // 0x1005b6990
    auto ConfigTypePreloadPackedContainer<MSIType>::AddConfigID(const shared_ptr<MSIType>& msiType, int arg2) {
        auto result;
        unsigned long uVar1;
        unique_ptr<ConfigTypePreloadPackedContainer<MSIType>::PageList>* puVar2;
        long lVar3;
        array<ConfigTypePreloadPackedContainer<MSIType>::ConfigPage*, 256ul>* paVar4;
        ReturnValue* pRVar5;
        ReturnValue this;
        ReturnValue* pRVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue local_48;
        unsigned int local_38;
        unsigned int local_34;

        if (arg2 == -1) {
            pRVar6 = &result + 17;
            *pRVar6 = msiType;
        } else {
            local_34 = arg2 & 4294901760;
            pRVar6 = &result + 9;
            uVar1 = pRVar6->size();
            arg1 = 0;
            if (uVar1 != 0) {
                do {
                    puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<MSIType>::PageList>*)(*pRVar6)[arg1];
                    lVar3 = (*puVar2).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == local_34)
                        break;
                    arg1 = (unsigned long)((int)arg1 + 1);
                } while (arg1 < uVar1);
            }
            if (uVar1 == arg1) {
                local_48 =
                    std::make_unique<ConfigTypePreloadPackedContainer<MSIType>::PageList, unsigned int&>(local_34);
                eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<MSIType>::PageList>>::emplace_back<
                    std::unique_ptr<ConfigTypePreloadPackedContainer<MSIType>::PageList>>(
                    (vector<std::unique_ptr<ConfigTypePreloadPackedContainer<MSIType>::PageList>>*)pRVar6,
                    (unique_ptr<ConfigTypePreloadPackedContainer<MSIType>::PageList,
                                std::default_delete<ConfigTypePreloadPackedContainer<MSIType>::PageList> _>*)&local_48);
            }
            uVar1 = (unsigned long)(arg2 - local_34 >> 8);
            puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<MSIType>::PageList>*)(*pRVar6)[arg1];
            paVar4 = (array<ConfigTypePreloadPackedContainer<MSIType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
            pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
            this = *pRVar5;
            uVar7 = arg2 & 255U;
            if (this == (ReturnValue)0) {
                local_38 = arg2 & 255U;
                this = (ReturnValue)AllocatePageBuffer(&result);
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<MSIType>::PageList>*)(*pRVar6)[arg1];
                paVar4 = (array<ConfigTypePreloadPackedContainer<MSIType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
                pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
                *pRVar5 = this;
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<MSIType>::PageList>*)(*pRVar6)[arg1];
                lVar3 = (*puVar2).operator->();
                if (*(unsigned int*)(lVar3 + 2048) != local_34) {
                    LogAssert("m_pageListContainer[thisPageList]->m_pageListID == pageListID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigTypePreloadPackedContainer.h",
                              469, nullptr);
                }
                uVar7 = local_38;
            }
            pRVar6 = (ReturnValue*)(*this)[(unsigned long)uVar7];
            *pRVar6 = msiType;
            *(int*)((long)this + 4096) = *(int*)((long)this + 4096) + 1;
            *(int*)(&result + 13) = arg2;
            &result[14] = this;
            *(unsigned int*)(&result + 15) = uVar7;
        }
        return pRVar6;
    }

    // 0x1005b6d00
    ConfigPage* ConfigTypePreloadPackedContainer<MSIType>::AllocatePageBuffer() {
        AllocatedBlock local_28 = this[16]._vptr->Allocate(4128);
        void* pvVar1 = local_28.field_8;
        if (local_28.field_8 == nullptr) {
            LogAssert("block.m_address != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      534, nullptr);
        }
        new (local_28.field_8) ConfigPage();
        *(unsigned long*)((long)pvVar1 + 4120) = local_28.field_16;
        *(uint64_t*)((long)pvVar1 + 4104) = local_28._0_8_;
        *(void**)((long)pvVar1 + 4112) = local_28.field_8;
        return pvVar1;
    }

    // 0x1005b70a0
    ConfigTypePreloadPackedContainer<MSIType>::PageList::PageList(unsigned int arg1) {
        uint64_t* puVar1;

        *(unsigned int*)(this + 2048) = arg1;
        *(uint32_t*)(this + 2052) = 0;
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1_00];
            *puVar1 = 0;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
    }

    // 0x1005b7150
    ConfigTypePreloadPackedContainer<MSIType>::ConfigPage::ConfigPage() : std::array<shared_ptr<MSIType>, 256ul>() {
        *(uint32_t*)(this + 4096) = 0;
        new ((this + 4104)) SimpleAllocator::AllocatedBlock();
    }

    // 0x1005bb760
    ConfigTypePreloadPackedContainer<QuestType>::ConfigTypePreloadPackedContainer(
        BaseTemplateConfigTypeList<QuestType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<QuestType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                             js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee84c8;
        new ((this + 9)) eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<QuestType>::PageList>>();
        new ((this + 17)) shared_ptr();
        new ((this + 19)) Array<Array<unsigned char>>();
        new ((this + 22)) PacketT();
        ((this + 26))->unique_ptr<true, void>();
    }

    // 0x1005bb8c0
    _x7e___2* ConfigTypePreloadPackedContainer<QuestType>::LoadList() {
        unique_ptr* this_00;
        bool bVar2;
        bool cVar3;
        DownloadWaitHandler* pDVar6;
        CoordMapSquare* pCVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        ConfigTypePreloadPackedContainer<QuestType> _vtbl* local_48;

        if (*(int*)&this[6]._vptr == 2) {
            return (_x7e___2*)DataStatus::READY;
        }
        ConfigTypePreloadPackedContainer<QuestType> _vtbl* pCVar1 = this[2]._vptr;
        ConfigTypePreloadPackedContainer<QuestType> _vtbl* js5ArchiveSettings = this[3]._vptr;
        Js5Index* local_40 = nullptr;
        _x7e___2* p_Var5 = (_x7e___2*)(**(void (**)(...))(pCVar1->_dtor + 24))(pCVar1, &local_40, js5ArchiveSettings);
        if (p_Var5 != (_x7e___2*)DataStatus::READY) {
            return p_Var5;
        }
        unsigned int local_34 = this[1]._vptr->GetUIHeight();
        int iVar4 = this[1]._vptr->GetStreamCountLastMix();
        *(unsigned int*)&this[8]._vptr = iVar4 + local_34;
        if (*(int*)&this[6]._vptr == 0) {
            this_00 = (unique_ptr*)(this + 26);
            local_48 = js5ArchiveSettings;
            cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar3) {
                LogAssert("!m_downloadHandler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "ConfigTypePreloadPackedContainer.h",
                          213, nullptr);
            }
            local_50 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_34);
            *this_00 = local_50;
            pDVar6 = (DownloadWaitHandler*)**this_00;
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                CheckGroupExistence(this, pDVar6, local_40, uVar8, 0);
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    CheckGroupExistence(this, pDVar6, local_40, uVar8, uVar8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            ((this + 19))->set_max_size((unsigned long)local_34, 0);
            *(uint32_t*)&this[6]._vptr = 1;
            iVar4 = *(int*)&this[6]._vptr;
            js5ArchiveSettings = local_48;
        } else {
            iVar4 = *(int*)&this[6]._vptr;
        }
        if (iVar4 != 1) {
            return (_x7e___2*)DataStatus::READY;
        }
        pDVar6 = (DownloadWaitHandler*)*(*((this + 26)));
        if ((this[1]._vptr != nullptr) && (cVar3 = (**(void (**)(...))(pCVar1->_dtor + 64))(pCVar1), cVar3)) {
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                cVar3 = pDVar6->IsComplete(0);
                if ((!cVar3) && (cVar3 = pDVar6->CanCheck(0), cVar3)) {
                    CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, 0);
                }
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    cVar3 = pDVar6->IsComplete(uVar8);
                    if ((!cVar3) && (cVar3 = pDVar6->CanCheck(uVar8), cVar3)) {
                        CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, uVar8);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            if (*(unsigned int*)&this[8]._vptr <= *(unsigned int*)((long)&this[7]._vptr + 4)) {
                ((this + 26))->reset(nullptr);
                *(uint32_t*)&this[6]._vptr = 2;
                p_Var5 = (_x7e___2*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->_x7e___2 = p_Var5;
                bVar2 = true;
                goto LAB_1005bbb36;
            }
        }
        bVar2 = false;
        p_Var5 = (_x7e___2*)DataStatus::NOTLOADED;
    LAB_1005bbb36:
        if (bVar2) {
            return (_x7e___2*)DataStatus::READY;
        }
        return p_Var5;
    }

    // 0x1005bbb80
    void ConfigTypePreloadPackedContainer<QuestType>::CacheReset() {
        unique_ptr<ConfigTypePreloadPackedContainer<QuestType>::PageList>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (unique_ptr<ConfigTypePreloadPackedContainer<QuestType>::PageList>*)(*this_00)[arg1];
                ((PageList*)this_01->get())->ClearPageList(*this[16]._vptr);
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        this_00->clear();
        this[14]._vptr = nullptr;
        *(uint32_t*)&this[15]._vptr = 0;
        *(uint32_t*)&this[13]._vptr = 4294967295;
    }

    // 0x1005bbc10
    void ConfigTypePreloadPackedContainer<QuestType>::CacheClean(unsigned int arg1) {
        LoadList** ppLVar1;
        ConfigTypePreloadPackedContainer<QuestType> _vtbl* this_01;
        unsigned long uVar4;
        unique_ptr<ConfigTypePreloadPackedContainer<QuestType>::PageList>* this_02;
        array<ConfigTypePreloadPackedContainer<QuestType>::ConfigPage*, 256ul>* this_03;
        uint64_t* puVar5;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_04;
        unsigned long arg1_00;
        unsigned int uVar6;
        int iVar7;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_02 = (unique_ptr<ConfigTypePreloadPackedContainer<QuestType>::PageList>*)(*this_00)[arg1_00];
                this_03 = (array<ConfigTypePreloadPackedContainer<QuestType>::ConfigPage*, 256ul>*)this_02->get();
                uVar6 = *(unsigned int*)(this_03 + 2052);
                iVar7 = 16;
                do {
                    puVar5 = (uint64_t*)(*this_03)[(unsigned long)(uVar6 >> 8)];
                    this_01 = (ConfigTypePreloadPackedContainer<QuestType> _vtbl*)*puVar5;
                    if (this_01 != nullptr) {
                        this_04 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*this_01)[(
                            unsigned long)(uVar6 & 255)];
                        if (this_04->unique() != '\0') {
                            this_04->reset();
                            if ((this_01 == this[14]._vptr) && ((uVar6 & 255) == *(unsigned int*)&this[15]._vptr)) {
                                this[14]._vptr = nullptr;
                                *(uint32_t*)&this[15]._vptr = 0;
                                *(uint32_t*)&this[13]._vptr = 4294967295;
                            }
                            ppLVar1 = &this_01[51].LoadList;
                            *(int*)ppLVar1 = *(int*)ppLVar1 - 1;
                            if (*(int*)ppLVar1 == 0) {
                                this[16]._vptr->DeAllocate(&this_01[51].CacheReset);
                                *puVar5 = 0;
                            }
                        }
                    }
                    uVar6 = uVar6 + 1 & 65535;
                    iVar7 = iVar7 - 1;
                } while (iVar7 != 0);
                *(unsigned int*)(this_03 + 2052) = uVar6;
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x1005bbd80
    shared_ptr* ConfigTypePreloadPackedContainer<QuestType>::List(int arg1, const DataStatus** arg2) {
        shared_ptr* psVar2;
        uint8_t** ppuVar3;

        if (*(int*)&this[6]._vptr != 2) {
            if (arg2 == nullptr) {
                return (shared_ptr*)PTR_NullConfigType_100ee65a0;
            }
            ppuVar3 = &DataStatus::NOTLOADED;
            psVar2 = (shared_ptr*)PTR_NullConfigType_100ee65a0;
        LAB_1005bbddb:
            *arg2 = (DataStatus*)*ppuVar3;
            return psVar2;
        }
        psVar2 = (shared_ptr*)FindConfigID(this, arg1);
        if (shared_ptr::operator_cast_to_bool(psVar2)) {
            if (arg2 == nullptr) {
                return psVar2;
            }
            ppuVar3 = &DataStatus::READY;
            goto LAB_1005bbddb;
        }
        shared_ptr local_38;
        if (!(DecodeConfig(this, arg1, (shared_ptr<QuestType>*)&local_38))) {
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::MISSING;
            LAB_1005bbe51:
                *arg2 = (DataStatus*)*ppuVar3;
            }
        } else {
            if (shared_ptr::operator_cast_to_bool(&local_38)) {
                if (arg2 != nullptr) {
                    *arg2 = (DataStatus*)DataStatus::READY;
                }
                psVar2 = (shared_ptr*)AddConfigID((ReturnValue*)this, (shared_ptr<QuestType>*)&local_38, arg1);
                goto LAB_1005bbe5e;
            }
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_1005bbe51;
            }
        }
        psVar2 = (shared_ptr*)PTR_NullConfigType_100ee65a0;
    LAB_1005bbe5e:
        return psVar2;
    }

    // 0x1005bbe90
    auto ConfigTypePreloadPackedContainer<QuestType>::DirectFetch(int arg1) {
        if (*(int*)&this[6]._vptr != 2) {
            LogAssert("m_loadStep == BaseLoadAllConfigTypeContainer::LoadStep::DONE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      179, nullptr);
        }
        auto result;
        if (DecodeConfig(this, arg1, &result) == '\0') {
            LogAssert("exists",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      183, nullptr);
        }
        return result;
    }

    // 0x1005bc0a0
    ConfigTypePreloadPackedContainer<QuestType>::~ConfigTypePreloadPackedContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee84c8;
        this[16]._vptr->PrintMetrics();
        CacheReset();
        ((this + 26))->~unique_ptr();
        ((this + 22))->~VBOMapper();
        ((this + 19))->~Array();
        ((this + 17))->~shared_ptr();
        ((this + 9))->~vector();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005bc190
    void ConfigTypePreloadPackedContainer<QuestType>::CheckGroupExistence(DownloadWaitHandler& downloadWaitHandler,
                                                                          Js5Index* js5Index, unsigned int arg3,
                                                                          unsigned int arg4) {
        int* piVar1;

        if (js5Index == nullptr) {
            LogAssert("js5Index",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      365, nullptr);
        }
        if (js5Index->DoesGroupExist(arg3) == '\0') {
            piVar1 = (int*)((long)&this[7]._vptr + 4);
            *piVar1 = *piVar1 + 1;
        } else {
            downloadWaitHandler.SetExists(arg4);
        }
    }

    // 0x1005bc210
    void ConfigTypePreloadPackedContainer<QuestType>::CheckDecodeProgress(const Js5ArchiveSettings& js5ArchiveSettings,
                                                                          Js5Index* js5Index, unsigned int arg3,
                                                                          unsigned int arg4) {
        int iVar1;
        Array<unsigned char>* this_00;
        TextureAtlasReference* pTVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        void* pvVar4;
        PacketT<Array<unsigned char>>* this_02;
        void* pvVar5;
        size_t sVar6;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)this[1]._vptr->GetGroup(local_48, js5ArchiveSettings, arg3, (Priority*)Priority::HIGHEST, true,
                                              true) == DataStatus::READY) {
            this_00 = (Array<unsigned char>*)(*((this + 19)))[(unsigned long)arg4];
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            this_00->set_max_size(pTVar3->GetTextureAtlas(), 0);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*((this + 19)))[(unsigned long)arg4];
            pvVar4 = (void*)this_01->data();
            this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pvVar5 = (void*)this_02->GetDataPtr();
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            sVar6 = pTVar3->GetTextureAtlas();
            _memcpy(pvVar4, pvVar5, sVar6);
            iVar1 = js5Index->GetMaximumFileID(arg3);
            *(int*)((long)&this[7]._vptr + 4) = iVar1 + *(int*)((long)&this[7]._vptr + 4) + 1;
            ((DownloadWaitHandler*)(*((this + 26))).operator->())->Completed(arg4);
        }
    }

    // 0x1005bc3b0
    void ConfigTypePreloadPackedContainer<QuestType>::PageList::ClearPageList(SimpleAllocator& simpleAllocator) {
        ConfigPage* this_00;
        uint64_t* puVar1;

        unsigned long arg1 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1];
            this_00 = (ConfigPage*)*puVar1;
            if (this_00 != nullptr) {
                this_00->Clear();
                simpleAllocator.DeAllocate((this_00 + 4104));
                *puVar1 = 0;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005bc490
    void ConfigTypePreloadPackedContainer<QuestType>::ConfigPage::Clear() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1];
            if (this_00->end() != 0) {
                this_00->reset();
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005bc5c0
    ConfigTypePreloadPackedContainer<QuestType>*
    ConfigTypePreloadPackedContainer<QuestType>::FindConfigID(int arg1) const {
        unsigned int uVar2;
        shared_ptr* this_00;
        long lVar3;
        unique_ptr<ConfigTypePreloadPackedContainer<QuestType>::PageList>* puVar4;
        unsigned long uVar5;
        array<ConfigTypePreloadPackedContainer<QuestType>::ConfigPage*, 256ul>* this_01;
        long* plVar6;
        ConfigTypePreloadPackedContainer<QuestType>* pCVar7;
        unsigned long arg1_00;
        unsigned int uVar8;
        ConfigTypePreloadPackedContainer<QuestType> _vtbl* this_02;
        vector<eastl::pair<int, int>>* this_03;

        if (arg1 == -1) {
            pCVar7 = this + 17;
        } else {
            if (*(int*)&this[13]._vptr == arg1) {
                if (this[14]._vptr != nullptr) {
                    this_00 = (shared_ptr*)(*this[14]._vptr)[(unsigned long)*(unsigned int*)&this[15]._vptr];
                    if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                        this_02 = this[14]._vptr;
                        uVar8 = *(unsigned int*)&this[15]._vptr;
                    LAB_1005bc6e2:
                        pCVar7 = (ConfigTypePreloadPackedContainer<QuestType>*)(*this_02)[(unsigned long)uVar8];
                        return pCVar7;
                    }
                }
                uVar8 = *(unsigned int*)&this[13]._vptr;
                uVar2 = this[3]._vptr->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigTypePreloadPackedContainer.h",
                                507, "Previously loaded config ID %d (archive ID %u) unexpectedly missing",
                                (unsigned long)uVar8, (unsigned long)uVar2);
            }
            this_03 = (vector<eastl::pair<int, int>>*)(this + 9);
            lVar3 = this_03->size();
            pCVar7 = (ConfigTypePreloadPackedContainer<QuestType>*)PTR_NullConfigType_100ee65a0;
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<QuestType>::PageList>*)(*this_03)[arg1_00];
                    lVar3 = (*puVar4).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == (arg1 & 4294901760U)) {
                        puVar4 =
                            (unique_ptr<ConfigTypePreloadPackedContainer<QuestType>::PageList>*)(*this_03)[arg1_00];
                        this_01 = (array<ConfigTypePreloadPackedContainer<QuestType>::ConfigPage*, 256ul>*)(*puVar4)
                                      .operator->();
                        plVar6 = (long*)(*this_01)[(unsigned long)((unsigned int)arg1 >> 8 & 255)];
                        this_02 = (ConfigTypePreloadPackedContainer<QuestType> _vtbl*)*plVar6;
                        if (this_02 == nullptr) {
                            return pCVar7;
                        }
                        uVar8 = arg1 & 255;
                        goto LAB_1005bc6e2;
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar5 = this_03->size();
                } while (arg1_00 < uVar5);
            }
        }
        return pCVar7;
    }

    // 0x1005bc700
    uint64_t ConfigTypePreloadPackedContainer<QuestType>::DecodeConfig(int arg1, shared_ptr<QuestType>& questType) {
        PacketT<Array<unsigned char>>* arg1_00;
        ConfigTypePreloadPackedContainer<QuestType> _vtbl* pCVar1;
        unsigned int arg1_01;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        uint8_t* puVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        void* pvVar8;
        Array<unsigned char>* this_00;
        void* pvVar9;
        size_t sVar10;
        uint64_t uVar11;
        long* plVar12;
        unsigned long arg1_03;
        Array<Array<unsigned char>>* this_01;
        shared_ptr<QuestType> local_50;
        Js5Index* local_40;

        questType = *PTR_NullConfigType_100ee65a0;
        if (arg1 < 0) {
            MakeSharedPool<QuestType, 128>::MakeShared<BaseTemplateConfigTypeList<QuestType>*&, int&>(
                (BaseTemplateConfigTypeList<QuestType>**)&local_50, (int*)(this + 1));
            questType = local_50;
        LAB_1005bc88b:
        LAB_1005bc894:
            uVar11 = 1;
        } else {
            arg1_01 = this[1]._vptr->GetClientGroupID(arg1);
            uVar3 = this[1]._vptr->GetClientFileID(arg1);
            local_40 = nullptr;
            puVar6 =
                (uint8_t*)(**(void (**)(...))((this[2]._vptr)->_dtor + 24))(this[2]._vptr, &local_40, this[3]._vptr);
            if (puVar6 != DataStatus::MISSING) {
                if (local_40->DoesFileExist(arg1_01, uVar3) != '\0') {
                    if (puVar6 == DataStatus::READY) {
                        uVar3 = local_40->GetFileIndex(arg1_01, uVar3);
                        uVar4 = this[1]._vptr->GetUIHeight();
                        arg1_03 = 0;
                        if (1 < uVar4) {
                            arg1_03 = (unsigned long)arg1_01;
                        }
                        iVar5 = local_40->GetFileCount(arg1_01);
                        arg1_00 = (PacketT<Array<unsigned char>>*)(this + 22);
                        this_01 = (Array<Array<unsigned char>>*)(this + 19);
                        pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                        if (iVar5 == 1) {
                            arg1_00->Reserve(pvVar7->end());
                            arg1_00->SetPos(0);
                            pvVar8 = (void*)arg1_00->GetDataPtr();
                            this_00 = (Array<unsigned char>*)(*this_01)[arg1_03];
                            pvVar9 = (void*)(*this_00)[0];
                            pvVar7 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                            sVar10 = pvVar7->end();
                            _memcpy(pvVar8, pvVar9, sVar10);
                        } else {
                            Js5DiskFileFormat::GetGroupFileData((PacketT<Array<unsigned char> _>*)arg1_00,
                                                                (Array<unsigned char>*)pvVar7, uVar3);
                        }
                        MakeSharedPool<QuestType, 128>::MakeShared<BaseTemplateConfigTypeList<QuestType>*&, int&>(
                            (BaseTemplateConfigTypeList<QuestType>**)&local_50, (int*)(this + 1));
                        plVar12 = (long*)local_50.operator->();
                        puVar6 = (uint8_t*)(**(void (**)(...))(*plVar12 + 32))(plVar12, arg1_00);
                        if (puVar6 == DataStatus::READY) {
                            plVar12 = (long*)local_50.operator->();
                            (**(void (**)(...))(*plVar12 + 24))(plVar12);
                            pCVar1 = this[1]._vptr;
                            puVar6 = (uint8_t*)(**(void (**)(...))(pCVar1->_dtor + 72))(pCVar1, &local_50);
                            if (puVar6 == DataStatus::READY) {
                                questType = local_50;
                            }
                        }
                        goto LAB_1005bc88b;
                    }
                    goto LAB_1005bc894;
                }
            }
            uVar11 = 0;
        }
        return uVar11;
    }

    // 0x1005bc940
    auto ConfigTypePreloadPackedContainer<QuestType>::AddConfigID(const shared_ptr<QuestType>& questType, int arg2) {
        auto result;
        unsigned long uVar1;
        unique_ptr<ConfigTypePreloadPackedContainer<QuestType>::PageList>* puVar2;
        long lVar3;
        array<ConfigTypePreloadPackedContainer<QuestType>::ConfigPage*, 256ul>* paVar4;
        ReturnValue* pRVar5;
        ReturnValue this;
        ReturnValue* pRVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue local_48;
        unsigned int local_38;
        unsigned int local_34;

        if (arg2 == -1) {
            pRVar6 = &result + 17;
            *pRVar6 = questType;
        } else {
            local_34 = arg2 & 4294901760;
            pRVar6 = &result + 9;
            uVar1 = pRVar6->size();
            arg1 = 0;
            if (uVar1 != 0) {
                do {
                    puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<QuestType>::PageList>*)(*pRVar6)[arg1];
                    lVar3 = (*puVar2).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == local_34)
                        break;
                    arg1 = (unsigned long)((int)arg1 + 1);
                } while (arg1 < uVar1);
            }
            if (uVar1 == arg1) {
                local_48 =
                    std::make_unique<ConfigTypePreloadPackedContainer<QuestType>::PageList, unsigned int&>(local_34);
                eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<QuestType>::PageList>>::emplace_back<
                    std::unique_ptr<ConfigTypePreloadPackedContainer<QuestType>::PageList>>(
                    (vector<std::unique_ptr<ConfigTypePreloadPackedContainer<QuestType>::PageList>>*)pRVar6,
                    (unique_ptr<
                        ConfigTypePreloadPackedContainer<QuestType>::PageList,
                        std::default_delete<ConfigTypePreloadPackedContainer<QuestType>::PageList> _>*)&local_48);
            }
            uVar1 = (unsigned long)(arg2 - local_34 >> 8);
            puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<QuestType>::PageList>*)(*pRVar6)[arg1];
            paVar4 = (array<ConfigTypePreloadPackedContainer<QuestType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
            pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
            this = *pRVar5;
            uVar7 = arg2 & 255U;
            if (this == (ReturnValue)0) {
                local_38 = arg2 & 255U;
                this = (ReturnValue)AllocatePageBuffer(&result);
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<QuestType>::PageList>*)(*pRVar6)[arg1];
                paVar4 =
                    (array<ConfigTypePreloadPackedContainer<QuestType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
                pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
                *pRVar5 = this;
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<QuestType>::PageList>*)(*pRVar6)[arg1];
                lVar3 = (*puVar2).operator->();
                if (*(unsigned int*)(lVar3 + 2048) != local_34) {
                    LogAssert("m_pageListContainer[thisPageList]->m_pageListID == pageListID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigTypePreloadPackedContainer.h",
                              469, nullptr);
                }
                uVar7 = local_38;
            }
            pRVar6 = (ReturnValue*)(*this)[(unsigned long)uVar7];
            *pRVar6 = questType;
            *(int*)((long)this + 4096) = *(int*)((long)this + 4096) + 1;
            *(int*)(&result + 13) = arg2;
            &result[14] = this;
            *(unsigned int*)(&result + 15) = uVar7;
        }
        return pRVar6;
    }

    // 0x1005bccb0
    ConfigPage* ConfigTypePreloadPackedContainer<QuestType>::AllocatePageBuffer() {
        AllocatedBlock local_28 = this[16]._vptr->Allocate(4128);
        void* pvVar1 = local_28.field_8;
        if (local_28.field_8 == nullptr) {
            LogAssert("block.m_address != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      534, nullptr);
        }
        new (local_28.field_8) ConfigPage();
        *(unsigned long*)((long)pvVar1 + 4120) = local_28.field_16;
        *(uint64_t*)((long)pvVar1 + 4104) = local_28._0_8_;
        *(void**)((long)pvVar1 + 4112) = local_28.field_8;
        return pvVar1;
    }

    // 0x1005bd050
    ConfigTypePreloadPackedContainer<QuestType>::PageList::PageList(unsigned int arg1) {
        uint64_t* puVar1;

        *(unsigned int*)(this + 2048) = arg1;
        *(uint32_t*)(this + 2052) = 0;
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1_00];
            *puVar1 = 0;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
    }

    // 0x1005bd100
    ConfigTypePreloadPackedContainer<QuestType>::ConfigPage::ConfigPage() : std::array<shared_ptr<QuestType>, 256ul>() {
        *(uint32_t*)(this + 4096) = 0;
        new ((this + 4104)) SimpleAllocator::AllocatedBlock();
    }

    // 0x1005c0e80
    ConfigTypePreloadPackedContainer<SeqGroupType>::ConfigTypePreloadPackedContainer(
        BaseTemplateConfigTypeList<SeqGroupType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<SeqGroupType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                                js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8428;
        new ((this + 9)) eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<SeqGroupType>::PageList>>();
        new ((this + 17)) shared_ptr();
        new ((this + 19)) Array<Array<unsigned char>>();
        new ((this + 22)) PacketT();
        ((this + 26))->unique_ptr<true, void>();
    }

    // 0x1005c0fe0
    _x7e___2* ConfigTypePreloadPackedContainer<SeqGroupType>::LoadList() {
        unique_ptr* this_00;
        bool bVar2;
        bool cVar3;
        DownloadWaitHandler* pDVar6;
        CoordMapSquare* pCVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        ConfigTypePreloadPackedContainer<SeqGroupType> _vtbl* local_48;

        if (*(int*)&this[6]._vptr == 2) {
            return (_x7e___2*)DataStatus::READY;
        }
        ConfigTypePreloadPackedContainer<SeqGroupType> _vtbl* pCVar1 = this[2]._vptr;
        ConfigTypePreloadPackedContainer<SeqGroupType> _vtbl* js5ArchiveSettings = this[3]._vptr;
        Js5Index* local_40 = nullptr;
        _x7e___2* p_Var5 = (_x7e___2*)(**(void (**)(...))(pCVar1->_dtor + 24))(pCVar1, &local_40, js5ArchiveSettings);
        if (p_Var5 != (_x7e___2*)DataStatus::READY) {
            return p_Var5;
        }
        unsigned int local_34 = this[1]._vptr->GetUIHeight();
        int iVar4 = this[1]._vptr->GetStreamCountLastMix();
        *(unsigned int*)&this[8]._vptr = iVar4 + local_34;
        if (*(int*)&this[6]._vptr == 0) {
            this_00 = (unique_ptr*)(this + 26);
            local_48 = js5ArchiveSettings;
            cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar3) {
                LogAssert("!m_downloadHandler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "ConfigTypePreloadPackedContainer.h",
                          213, nullptr);
            }
            local_50 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_34);
            *this_00 = local_50;
            pDVar6 = (DownloadWaitHandler*)**this_00;
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                CheckGroupExistence(this, pDVar6, local_40, uVar8, 0);
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    CheckGroupExistence(this, pDVar6, local_40, uVar8, uVar8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            ((this + 19))->set_max_size((unsigned long)local_34, 0);
            *(uint32_t*)&this[6]._vptr = 1;
            iVar4 = *(int*)&this[6]._vptr;
            js5ArchiveSettings = local_48;
        } else {
            iVar4 = *(int*)&this[6]._vptr;
        }
        if (iVar4 != 1) {
            return (_x7e___2*)DataStatus::READY;
        }
        pDVar6 = (DownloadWaitHandler*)*(*((this + 26)));
        if ((this[1]._vptr != nullptr) && (cVar3 = (**(void (**)(...))(pCVar1->_dtor + 64))(pCVar1), cVar3)) {
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                cVar3 = pDVar6->IsComplete(0);
                if ((!cVar3) && (cVar3 = pDVar6->CanCheck(0), cVar3)) {
                    CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, 0);
                }
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    cVar3 = pDVar6->IsComplete(uVar8);
                    if ((!cVar3) && (cVar3 = pDVar6->CanCheck(uVar8), cVar3)) {
                        CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, uVar8);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            if (*(unsigned int*)&this[8]._vptr <= *(unsigned int*)((long)&this[7]._vptr + 4)) {
                ((this + 26))->reset(nullptr);
                *(uint32_t*)&this[6]._vptr = 2;
                p_Var5 = (_x7e___2*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->_x7e___2 = p_Var5;
                bVar2 = true;
                goto LAB_1005c1256;
            }
        }
        bVar2 = false;
        p_Var5 = (_x7e___2*)DataStatus::NOTLOADED;
    LAB_1005c1256:
        if (bVar2) {
            return (_x7e___2*)DataStatus::READY;
        }
        return p_Var5;
    }

    // 0x1005c12a0
    void ConfigTypePreloadPackedContainer<SeqGroupType>::CacheReset() {
        unique_ptr<ConfigTypePreloadPackedContainer<SeqGroupType>::PageList>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (unique_ptr<ConfigTypePreloadPackedContainer<SeqGroupType>::PageList>*)(*this_00)[arg1];
                ((PageList*)this_01->get())->ClearPageList(*this[16]._vptr);
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        this_00->clear();
        this[14]._vptr = nullptr;
        *(uint32_t*)&this[15]._vptr = 0;
        *(uint32_t*)&this[13]._vptr = 4294967295;
    }

    // 0x1005c1330
    void ConfigTypePreloadPackedContainer<SeqGroupType>::CacheClean(unsigned int arg1) {
        LoadList** ppLVar1;
        ConfigTypePreloadPackedContainer<SeqGroupType> _vtbl* this_01;
        unsigned long uVar4;
        unique_ptr<ConfigTypePreloadPackedContainer<SeqGroupType>::PageList>* this_02;
        array<ConfigTypePreloadPackedContainer<SeqGroupType>::ConfigPage*, 256ul>* this_03;
        uint64_t* puVar5;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_04;
        unsigned long arg1_00;
        unsigned int uVar6;
        int iVar7;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_02 = (unique_ptr<ConfigTypePreloadPackedContainer<SeqGroupType>::PageList>*)(*this_00)[arg1_00];
                this_03 = (array<ConfigTypePreloadPackedContainer<SeqGroupType>::ConfigPage*, 256ul>*)this_02->get();
                uVar6 = *(unsigned int*)(this_03 + 2052);
                iVar7 = 16;
                do {
                    puVar5 = (uint64_t*)(*this_03)[(unsigned long)(uVar6 >> 8)];
                    this_01 = (ConfigTypePreloadPackedContainer<SeqGroupType> _vtbl*)*puVar5;
                    if (this_01 != nullptr) {
                        this_04 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*this_01)[(
                            unsigned long)(uVar6 & 255)];
                        if (this_04->unique() != '\0') {
                            this_04->reset();
                            if ((this_01 == this[14]._vptr) && ((uVar6 & 255) == *(unsigned int*)&this[15]._vptr)) {
                                this[14]._vptr = nullptr;
                                *(uint32_t*)&this[15]._vptr = 0;
                                *(uint32_t*)&this[13]._vptr = 4294967295;
                            }
                            ppLVar1 = &this_01[51].LoadList;
                            *(int*)ppLVar1 = *(int*)ppLVar1 - 1;
                            if (*(int*)ppLVar1 == 0) {
                                this[16]._vptr->DeAllocate(&this_01[51].CacheReset);
                                *puVar5 = 0;
                            }
                        }
                    }
                    uVar6 = uVar6 + 1 & 65535;
                    iVar7 = iVar7 - 1;
                } while (iVar7 != 0);
                *(unsigned int*)(this_03 + 2052) = uVar6;
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x1005c14a0
    shared_ptr* ConfigTypePreloadPackedContainer<SeqGroupType>::List(int arg1, const DataStatus** arg2) {
        shared_ptr* psVar2;
        uint8_t** ppuVar3;

        if (*(int*)&this[6]._vptr != 2) {
            if (arg2 == nullptr) {
                return (shared_ptr*)PTR_NullConfigType_100ee6500;
            }
            ppuVar3 = &DataStatus::NOTLOADED;
            psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6500;
        LAB_1005c14fb:
            *arg2 = (DataStatus*)*ppuVar3;
            return psVar2;
        }
        psVar2 = (shared_ptr*)FindConfigID(this, arg1);
        if (shared_ptr::operator_cast_to_bool(psVar2)) {
            if (arg2 == nullptr) {
                return psVar2;
            }
            ppuVar3 = &DataStatus::READY;
            goto LAB_1005c14fb;
        }
        shared_ptr local_38;
        if (!(DecodeConfig(this, arg1, (shared_ptr<SeqGroupType>*)&local_38))) {
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::MISSING;
            LAB_1005c1571:
                *arg2 = (DataStatus*)*ppuVar3;
            }
        } else {
            if (shared_ptr::operator_cast_to_bool(&local_38)) {
                if (arg2 != nullptr) {
                    *arg2 = (DataStatus*)DataStatus::READY;
                }
                psVar2 = (shared_ptr*)AddConfigID((ReturnValue*)this, (shared_ptr<SeqGroupType>*)&local_38, arg1);
                goto LAB_1005c157e;
            }
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_1005c1571;
            }
        }
        psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6500;
    LAB_1005c157e:
        return psVar2;
    }

    // 0x1005c15b0
    auto ConfigTypePreloadPackedContainer<SeqGroupType>::DirectFetch(int arg1) {
        if (*(int*)&this[6]._vptr != 2) {
            LogAssert("m_loadStep == BaseLoadAllConfigTypeContainer::LoadStep::DONE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      179, nullptr);
        }
        auto result;
        if (DecodeConfig(this, arg1, &result) == '\0') {
            LogAssert("exists",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      183, nullptr);
        }
        return result;
    }

    // 0x1005c17c0
    ConfigTypePreloadPackedContainer<SeqGroupType>::~ConfigTypePreloadPackedContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8428;
        this[16]._vptr->PrintMetrics();
        CacheReset();
        ((this + 26))->~unique_ptr();
        ((this + 22))->~VBOMapper();
        ((this + 19))->~Array();
        ((this + 17))->~shared_ptr();
        ((this + 9))->~vector();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005c18b0
    void ConfigTypePreloadPackedContainer<SeqGroupType>::CheckGroupExistence(DownloadWaitHandler& downloadWaitHandler,
                                                                             Js5Index* js5Index, unsigned int arg3,
                                                                             unsigned int arg4) {
        int* piVar1;

        if (js5Index == nullptr) {
            LogAssert("js5Index",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      365, nullptr);
        }
        if (js5Index->DoesGroupExist(arg3) == '\0') {
            piVar1 = (int*)((long)&this[7]._vptr + 4);
            *piVar1 = *piVar1 + 1;
        } else {
            downloadWaitHandler.SetExists(arg4);
        }
    }

    // 0x1005c1930
    void ConfigTypePreloadPackedContainer<SeqGroupType>::CheckDecodeProgress(
        const Js5ArchiveSettings& js5ArchiveSettings, Js5Index* js5Index, unsigned int arg3, unsigned int arg4) {
        int iVar1;
        Array<unsigned char>* this_00;
        TextureAtlasReference* pTVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        void* pvVar4;
        PacketT<Array<unsigned char>>* this_02;
        void* pvVar5;
        size_t sVar6;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)this[1]._vptr->GetGroup(local_48, js5ArchiveSettings, arg3, (Priority*)Priority::HIGHEST, true,
                                              true) == DataStatus::READY) {
            this_00 = (Array<unsigned char>*)(*((this + 19)))[(unsigned long)arg4];
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            this_00->set_max_size(pTVar3->GetTextureAtlas(), 0);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*((this + 19)))[(unsigned long)arg4];
            pvVar4 = (void*)this_01->data();
            this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pvVar5 = (void*)this_02->GetDataPtr();
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            sVar6 = pTVar3->GetTextureAtlas();
            _memcpy(pvVar4, pvVar5, sVar6);
            iVar1 = js5Index->GetMaximumFileID(arg3);
            *(int*)((long)&this[7]._vptr + 4) = iVar1 + *(int*)((long)&this[7]._vptr + 4) + 1;
            ((DownloadWaitHandler*)(*((this + 26))).operator->())->Completed(arg4);
        }
    }

    // 0x1005c1ad0
    void ConfigTypePreloadPackedContainer<SeqGroupType>::PageList::ClearPageList(SimpleAllocator& simpleAllocator) {
        ConfigPage* this_00;
        uint64_t* puVar1;

        unsigned long arg1 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1];
            this_00 = (ConfigPage*)*puVar1;
            if (this_00 != nullptr) {
                this_00->Clear();
                simpleAllocator.DeAllocate((this_00 + 4104));
                *puVar1 = 0;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005c1bb0
    void ConfigTypePreloadPackedContainer<SeqGroupType>::ConfigPage::Clear() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1];
            if (this_00->end() != 0) {
                this_00->reset();
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005c1ce0
    ConfigTypePreloadPackedContainer<SeqGroupType>*
    ConfigTypePreloadPackedContainer<SeqGroupType>::FindConfigID(int arg1) const {
        unsigned int uVar2;
        shared_ptr* this_00;
        long lVar3;
        unique_ptr<ConfigTypePreloadPackedContainer<SeqGroupType>::PageList>* puVar4;
        unsigned long uVar5;
        array<ConfigTypePreloadPackedContainer<SeqGroupType>::ConfigPage*, 256ul>* this_01;
        long* plVar6;
        ConfigTypePreloadPackedContainer<SeqGroupType>* pCVar7;
        unsigned long arg1_00;
        unsigned int uVar8;
        ConfigTypePreloadPackedContainer<SeqGroupType> _vtbl* this_02;
        vector<eastl::pair<int, int>>* this_03;

        if (arg1 == -1) {
            pCVar7 = this + 17;
        } else {
            if (*(int*)&this[13]._vptr == arg1) {
                if (this[14]._vptr != nullptr) {
                    this_00 = (shared_ptr*)(*this[14]._vptr)[(unsigned long)*(unsigned int*)&this[15]._vptr];
                    if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                        this_02 = this[14]._vptr;
                        uVar8 = *(unsigned int*)&this[15]._vptr;
                    LAB_1005c1e02:
                        pCVar7 = (ConfigTypePreloadPackedContainer<SeqGroupType>*)(*this_02)[(unsigned long)uVar8];
                        return pCVar7;
                    }
                }
                uVar8 = *(unsigned int*)&this[13]._vptr;
                uVar2 = this[3]._vptr->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigTypePreloadPackedContainer.h",
                                507, "Previously loaded config ID %d (archive ID %u) unexpectedly missing",
                                (unsigned long)uVar8, (unsigned long)uVar2);
            }
            this_03 = (vector<eastl::pair<int, int>>*)(this + 9);
            lVar3 = this_03->size();
            pCVar7 = (ConfigTypePreloadPackedContainer<SeqGroupType>*)PTR_NullConfigType_100ee6500;
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<SeqGroupType>::PageList>*)(*this_03)[arg1_00];
                    lVar3 = (*puVar4).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == (arg1 & 4294901760U)) {
                        puVar4 =
                            (unique_ptr<ConfigTypePreloadPackedContainer<SeqGroupType>::PageList>*)(*this_03)[arg1_00];
                        this_01 = (array<ConfigTypePreloadPackedContainer<SeqGroupType>::ConfigPage*, 256ul>*)(*puVar4)
                                      .operator->();
                        plVar6 = (long*)(*this_01)[(unsigned long)((unsigned int)arg1 >> 8 & 255)];
                        this_02 = (ConfigTypePreloadPackedContainer<SeqGroupType> _vtbl*)*plVar6;
                        if (this_02 == nullptr) {
                            return pCVar7;
                        }
                        uVar8 = arg1 & 255;
                        goto LAB_1005c1e02;
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar5 = this_03->size();
                } while (arg1_00 < uVar5);
            }
        }
        return pCVar7;
    }

    // 0x1005c1e20
    uint64_t ConfigTypePreloadPackedContainer<SeqGroupType>::DecodeConfig(int arg1,
                                                                          shared_ptr<SeqGroupType>& seqGroupType) {
        PacketT<Array<unsigned char>>* arg1_00;
        ConfigTypePreloadPackedContainer<SeqGroupType> _vtbl* pCVar1;
        unsigned int arg1_01;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        uint8_t* puVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        void* pvVar8;
        Array<unsigned char>* this_00;
        void* pvVar9;
        size_t sVar10;
        uint64_t uVar11;
        long* plVar12;
        unsigned long arg1_03;
        Array<Array<unsigned char>>* this_01;
        shared_ptr<SeqGroupType> local_50;
        Js5Index* local_40;

        seqGroupType = *PTR_NullConfigType_100ee6500;
        if (arg1 < 0) {
            MakeSharedPool<SeqGroupType, 64>::MakeShared<BaseTemplateConfigTypeList<SeqGroupType>*&, int&>(
                (BaseTemplateConfigTypeList<SeqGroupType>**)&local_50, (int*)(this + 1));
            seqGroupType = local_50;
        LAB_1005c1fab:
        LAB_1005c1fb4:
            uVar11 = 1;
        } else {
            arg1_01 = this[1]._vptr->GetClientGroupID(arg1);
            uVar3 = this[1]._vptr->GetClientFileID(arg1);
            local_40 = nullptr;
            puVar6 =
                (uint8_t*)(**(void (**)(...))((this[2]._vptr)->_dtor + 24))(this[2]._vptr, &local_40, this[3]._vptr);
            if (puVar6 != DataStatus::MISSING) {
                if (local_40->DoesFileExist(arg1_01, uVar3) != '\0') {
                    if (puVar6 == DataStatus::READY) {
                        uVar3 = local_40->GetFileIndex(arg1_01, uVar3);
                        uVar4 = this[1]._vptr->GetUIHeight();
                        arg1_03 = 0;
                        if (1 < uVar4) {
                            arg1_03 = (unsigned long)arg1_01;
                        }
                        iVar5 = local_40->GetFileCount(arg1_01);
                        arg1_00 = (PacketT<Array<unsigned char>>*)(this + 22);
                        this_01 = (Array<Array<unsigned char>>*)(this + 19);
                        pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                        if (iVar5 == 1) {
                            arg1_00->Reserve(pvVar7->end());
                            arg1_00->SetPos(0);
                            pvVar8 = (void*)arg1_00->GetDataPtr();
                            this_00 = (Array<unsigned char>*)(*this_01)[arg1_03];
                            pvVar9 = (void*)(*this_00)[0];
                            pvVar7 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                            sVar10 = pvVar7->end();
                            _memcpy(pvVar8, pvVar9, sVar10);
                        } else {
                            Js5DiskFileFormat::GetGroupFileData((PacketT<Array<unsigned char> _>*)arg1_00,
                                                                (Array<unsigned char>*)pvVar7, uVar3);
                        }
                        MakeSharedPool<SeqGroupType, 64>::MakeShared<BaseTemplateConfigTypeList<SeqGroupType>*&, int&>(
                            (BaseTemplateConfigTypeList<SeqGroupType>**)&local_50, (int*)(this + 1));
                        plVar12 = (long*)local_50.operator->();
                        puVar6 = (uint8_t*)(**(void (**)(...))(*plVar12 + 32))(plVar12, arg1_00);
                        if (puVar6 == DataStatus::READY) {
                            plVar12 = (long*)local_50.operator->();
                            (**(void (**)(...))(*plVar12 + 24))(plVar12);
                            pCVar1 = this[1]._vptr;
                            puVar6 = (uint8_t*)(**(void (**)(...))(pCVar1->_dtor + 72))(pCVar1, &local_50);
                            if (puVar6 == DataStatus::READY) {
                                seqGroupType = local_50;
                            }
                        }
                        goto LAB_1005c1fab;
                    }
                    goto LAB_1005c1fb4;
                }
            }
            uVar11 = 0;
        }
        return uVar11;
    }

    // 0x1005c2060
    auto ConfigTypePreloadPackedContainer<SeqGroupType>::AddConfigID(const shared_ptr<SeqGroupType>& seqGroupType,
                                                                     int arg2) {
        auto result;
        unsigned long uVar1;
        unique_ptr<ConfigTypePreloadPackedContainer<SeqGroupType>::PageList>* puVar2;
        long lVar3;
        array<ConfigTypePreloadPackedContainer<SeqGroupType>::ConfigPage*, 256ul>* paVar4;
        ReturnValue* pRVar5;
        ReturnValue this;
        ReturnValue* pRVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue local_48;
        unsigned int local_38;
        unsigned int local_34;

        if (arg2 == -1) {
            pRVar6 = &result + 17;
            *pRVar6 = seqGroupType;
        } else {
            local_34 = arg2 & 4294901760;
            pRVar6 = &result + 9;
            uVar1 = pRVar6->size();
            arg1 = 0;
            if (uVar1 != 0) {
                do {
                    puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<SeqGroupType>::PageList>*)(*pRVar6)[arg1];
                    lVar3 = (*puVar2).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == local_34)
                        break;
                    arg1 = (unsigned long)((int)arg1 + 1);
                } while (arg1 < uVar1);
            }
            if (uVar1 == arg1) {
                local_48 =
                    std::make_unique<ConfigTypePreloadPackedContainer<SeqGroupType>::PageList, unsigned int&>(local_34);
                eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<SeqGroupType>::PageList>>::emplace_back<
                    std::unique_ptr<ConfigTypePreloadPackedContainer<SeqGroupType>::PageList>>(
                    (vector<std::unique_ptr<ConfigTypePreloadPackedContainer<SeqGroupType>::PageList>>*)pRVar6,
                    (unique_ptr<
                        ConfigTypePreloadPackedContainer<SeqGroupType>::PageList,
                        std::default_delete<ConfigTypePreloadPackedContainer<SeqGroupType>::PageList> _>*)&local_48);
            }
            uVar1 = (unsigned long)(arg2 - local_34 >> 8);
            puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<SeqGroupType>::PageList>*)(*pRVar6)[arg1];
            paVar4 = (array<ConfigTypePreloadPackedContainer<SeqGroupType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
            pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
            this = *pRVar5;
            uVar7 = arg2 & 255U;
            if (this == (ReturnValue)0) {
                local_38 = arg2 & 255U;
                this = (ReturnValue)AllocatePageBuffer((ConfigTypePreloadPackedContainer<SeqGroupType>*)&result);
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<SeqGroupType>::PageList>*)(*pRVar6)[arg1];
                paVar4 =
                    (array<ConfigTypePreloadPackedContainer<SeqGroupType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
                pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
                *pRVar5 = this;
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<SeqGroupType>::PageList>*)(*pRVar6)[arg1];
                lVar3 = (*puVar2).operator->();
                if (*(unsigned int*)(lVar3 + 2048) != local_34) {
                    LogAssert("m_pageListContainer[thisPageList]->m_pageListID == pageListID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigTypePreloadPackedContainer.h",
                              469, nullptr);
                }
                uVar7 = local_38;
            }
            pRVar6 = (ReturnValue*)(*this)[(unsigned long)uVar7];
            *pRVar6 = seqGroupType;
            *(int*)((long)this + 4096) = *(int*)((long)this + 4096) + 1;
            *(int*)(&result + 13) = arg2;
            &result[14] = this;
            *(unsigned int*)(&result + 15) = uVar7;
        }
        return pRVar6;
    }

    // 0x1005c23d0
    ConfigPage* ConfigTypePreloadPackedContainer<SeqGroupType>::AllocatePageBuffer() {
        AllocatedBlock local_28 = this[16]._vptr->Allocate(4128);
        void* pvVar1 = local_28.field_8;
        if (local_28.field_8 == nullptr) {
            LogAssert("block.m_address != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      534, nullptr);
        }
        new (local_28.field_8) ConfigPage();
        *(unsigned long*)((long)pvVar1 + 4120) = local_28.field_16;
        *(uint64_t*)((long)pvVar1 + 4104) = local_28._0_8_;
        *(void**)((long)pvVar1 + 4112) = local_28.field_8;
        return pvVar1;
    }

    // 0x1005c2770
    ConfigTypePreloadPackedContainer<SeqGroupType>::PageList::PageList(unsigned int arg1) {
        uint64_t* puVar1;

        *(unsigned int*)(this + 2048) = arg1;
        *(uint32_t*)(this + 2052) = 0;
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1_00];
            *puVar1 = 0;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
    }

    // 0x1005c2820
    ConfigTypePreloadPackedContainer<SeqGroupType>::ConfigPage::ConfigPage()
        : std::array<shared_ptr<SeqGroupType>, 256ul>() {
        *(uint32_t*)(this + 4096) = 0;
        new ((this + 4104)) SimpleAllocator::AllocatedBlock();
    }

    // 0x1005c6530
    ConfigTypePreloadPackedContainer<LightType>::ConfigTypePreloadPackedContainer(
        BaseTemplateConfigTypeList<LightType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<LightType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                             js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee84b8;
        new ((this + 9)) eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<LightType>::PageList>>();
        new ((this + 17)) shared_ptr();
        new ((this + 19)) Array<Array<unsigned char>>();
        new ((this + 22)) PacketT();
        ((this + 26))->unique_ptr<true, void>();
    }

    // 0x1005c6690
    _x7e___2* ConfigTypePreloadPackedContainer<LightType>::LoadList() {
        unique_ptr* this_00;
        bool bVar2;
        bool cVar3;
        DownloadWaitHandler* pDVar6;
        CoordMapSquare* pCVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        ConfigTypePreloadPackedContainer<LightType> _vtbl* local_48;

        if (*(int*)&this[6]._vptr == 2) {
            return (_x7e___2*)DataStatus::READY;
        }
        ConfigTypePreloadPackedContainer<LightType> _vtbl* pCVar1 = this[2]._vptr;
        ConfigTypePreloadPackedContainer<LightType> _vtbl* js5ArchiveSettings = this[3]._vptr;
        Js5Index* local_40 = nullptr;
        _x7e___2* p_Var5 = (_x7e___2*)(**(void (**)(...))(pCVar1->_dtor + 24))(pCVar1, &local_40, js5ArchiveSettings);
        if (p_Var5 != (_x7e___2*)DataStatus::READY) {
            return p_Var5;
        }
        unsigned int local_34 = this[1]._vptr->GetUIHeight();
        int iVar4 = this[1]._vptr->GetStreamCountLastMix();
        *(unsigned int*)&this[8]._vptr = iVar4 + local_34;
        if (*(int*)&this[6]._vptr == 0) {
            this_00 = (unique_ptr*)(this + 26);
            local_48 = js5ArchiveSettings;
            cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar3) {
                LogAssert("!m_downloadHandler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "ConfigTypePreloadPackedContainer.h",
                          213, nullptr);
            }
            local_50 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_34);
            *this_00 = local_50;
            pDVar6 = (DownloadWaitHandler*)**this_00;
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                CheckGroupExistence(this, pDVar6, local_40, uVar8, 0);
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    CheckGroupExistence(this, pDVar6, local_40, uVar8, uVar8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            ((this + 19))->set_max_size((unsigned long)local_34, 0);
            *(uint32_t*)&this[6]._vptr = 1;
            iVar4 = *(int*)&this[6]._vptr;
            js5ArchiveSettings = local_48;
        } else {
            iVar4 = *(int*)&this[6]._vptr;
        }
        if (iVar4 != 1) {
            return (_x7e___2*)DataStatus::READY;
        }
        pDVar6 = (DownloadWaitHandler*)*(*((this + 26)));
        if ((this[1]._vptr != nullptr) && (cVar3 = (**(void (**)(...))(pCVar1->_dtor + 64))(pCVar1), cVar3)) {
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                cVar3 = pDVar6->IsComplete(0);
                if ((!cVar3) && (cVar3 = pDVar6->CanCheck(0), cVar3)) {
                    CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, 0);
                }
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    cVar3 = pDVar6->IsComplete(uVar8);
                    if ((!cVar3) && (cVar3 = pDVar6->CanCheck(uVar8), cVar3)) {
                        CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, uVar8);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            if (*(unsigned int*)&this[8]._vptr <= *(unsigned int*)((long)&this[7]._vptr + 4)) {
                ((this + 26))->reset(nullptr);
                *(uint32_t*)&this[6]._vptr = 2;
                p_Var5 = (_x7e___2*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->_x7e___2 = p_Var5;
                bVar2 = true;
                goto LAB_1005c6906;
            }
        }
        bVar2 = false;
        p_Var5 = (_x7e___2*)DataStatus::NOTLOADED;
    LAB_1005c6906:
        if (bVar2) {
            return (_x7e___2*)DataStatus::READY;
        }
        return p_Var5;
    }

    // 0x1005c6950
    void ConfigTypePreloadPackedContainer<LightType>::CacheReset() {
        unique_ptr<ConfigTypePreloadPackedContainer<LightType>::PageList>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (unique_ptr<ConfigTypePreloadPackedContainer<LightType>::PageList>*)(*this_00)[arg1];
                ((PageList*)this_01->get())->ClearPageList(*this[16]._vptr);
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        this_00->clear();
        this[14]._vptr = nullptr;
        *(uint32_t*)&this[15]._vptr = 0;
        *(uint32_t*)&this[13]._vptr = 4294967295;
    }

    // 0x1005c69e0
    void ConfigTypePreloadPackedContainer<LightType>::CacheClean(unsigned int arg1) {
        LoadList** ppLVar1;
        ConfigTypePreloadPackedContainer<LightType> _vtbl* this_01;
        unsigned long uVar4;
        unique_ptr<ConfigTypePreloadPackedContainer<LightType>::PageList>* this_02;
        array<ConfigTypePreloadPackedContainer<LightType>::ConfigPage*, 256ul>* this_03;
        uint64_t* puVar5;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_04;
        unsigned long arg1_00;
        unsigned int uVar6;
        int iVar7;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_02 = (unique_ptr<ConfigTypePreloadPackedContainer<LightType>::PageList>*)(*this_00)[arg1_00];
                this_03 = (array<ConfigTypePreloadPackedContainer<LightType>::ConfigPage*, 256ul>*)this_02->get();
                uVar6 = *(unsigned int*)(this_03 + 2052);
                iVar7 = 16;
                do {
                    puVar5 = (uint64_t*)(*this_03)[(unsigned long)(uVar6 >> 8)];
                    this_01 = (ConfigTypePreloadPackedContainer<LightType> _vtbl*)*puVar5;
                    if (this_01 != nullptr) {
                        this_04 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*this_01)[(
                            unsigned long)(uVar6 & 255)];
                        if (this_04->unique() != '\0') {
                            this_04->reset();
                            if ((this_01 == this[14]._vptr) && ((uVar6 & 255) == *(unsigned int*)&this[15]._vptr)) {
                                this[14]._vptr = nullptr;
                                *(uint32_t*)&this[15]._vptr = 0;
                                *(uint32_t*)&this[13]._vptr = 4294967295;
                            }
                            ppLVar1 = &this_01[51].LoadList;
                            *(int*)ppLVar1 = *(int*)ppLVar1 - 1;
                            if (*(int*)ppLVar1 == 0) {
                                this[16]._vptr->DeAllocate(&this_01[51].CacheReset);
                                *puVar5 = 0;
                            }
                        }
                    }
                    uVar6 = uVar6 + 1 & 65535;
                    iVar7 = iVar7 - 1;
                } while (iVar7 != 0);
                *(unsigned int*)(this_03 + 2052) = uVar6;
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x1005c6b50
    shared_ptr* ConfigTypePreloadPackedContainer<LightType>::List(int arg1, const DataStatus** arg2) {
        shared_ptr* psVar2;
        uint8_t** ppuVar3;

        if (*(int*)&this[6]._vptr != 2) {
            if (arg2 == nullptr) {
                return (shared_ptr*)PTR_NullConfigType_100ee6590;
            }
            ppuVar3 = &DataStatus::NOTLOADED;
            psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6590;
        LAB_1005c6bab:
            *arg2 = (DataStatus*)*ppuVar3;
            return psVar2;
        }
        psVar2 = (shared_ptr*)FindConfigID(this, arg1);
        if (shared_ptr::operator_cast_to_bool(psVar2)) {
            if (arg2 == nullptr) {
                return psVar2;
            }
            ppuVar3 = &DataStatus::READY;
            goto LAB_1005c6bab;
        }
        shared_ptr local_38;
        if (!(DecodeConfig(this, arg1, (shared_ptr<LightType>*)&local_38))) {
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::MISSING;
            LAB_1005c6c21:
                *arg2 = (DataStatus*)*ppuVar3;
            }
        } else {
            if (shared_ptr::operator_cast_to_bool(&local_38)) {
                if (arg2 != nullptr) {
                    *arg2 = (DataStatus*)DataStatus::READY;
                }
                psVar2 = (shared_ptr*)AddConfigID((ReturnValue*)this, (shared_ptr<LightType>*)&local_38, arg1);
                goto LAB_1005c6c2e;
            }
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_1005c6c21;
            }
        }
        psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6590;
    LAB_1005c6c2e:
        return psVar2;
    }

    // 0x1005c6c60
    auto ConfigTypePreloadPackedContainer<LightType>::DirectFetch(int arg1) {
        if (*(int*)&this[6]._vptr != 2) {
            LogAssert("m_loadStep == BaseLoadAllConfigTypeContainer::LoadStep::DONE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      179, nullptr);
        }
        auto result;
        if (DecodeConfig(this, arg1, &result) == '\0') {
            LogAssert("exists",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      183, nullptr);
        }
        return result;
    }

    // 0x1005c6e70
    ConfigTypePreloadPackedContainer<LightType>::~ConfigTypePreloadPackedContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee84b8;
        this[16]._vptr->PrintMetrics();
        CacheReset();
        ((this + 26))->~unique_ptr();
        ((this + 22))->~VBOMapper();
        ((this + 19))->~Array();
        ((this + 17))->~shared_ptr();
        ((this + 9))->~vector();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005c6f60
    void ConfigTypePreloadPackedContainer<LightType>::CheckGroupExistence(DownloadWaitHandler& downloadWaitHandler,
                                                                          Js5Index* js5Index, unsigned int arg3,
                                                                          unsigned int arg4) {
        int* piVar1;

        if (js5Index == nullptr) {
            LogAssert("js5Index",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      365, nullptr);
        }
        if (js5Index->DoesGroupExist(arg3) == '\0') {
            piVar1 = (int*)((long)&this[7]._vptr + 4);
            *piVar1 = *piVar1 + 1;
        } else {
            downloadWaitHandler.SetExists(arg4);
        }
    }

    // 0x1005c6fe0
    void ConfigTypePreloadPackedContainer<LightType>::CheckDecodeProgress(const Js5ArchiveSettings& js5ArchiveSettings,
                                                                          Js5Index* js5Index, unsigned int arg3,
                                                                          unsigned int arg4) {
        int iVar1;
        Array<unsigned char>* this_00;
        TextureAtlasReference* pTVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        void* pvVar4;
        PacketT<Array<unsigned char>>* this_02;
        void* pvVar5;
        size_t sVar6;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)this[1]._vptr->GetGroup(local_48, js5ArchiveSettings, arg3, (Priority*)Priority::HIGHEST, true,
                                              true) == DataStatus::READY) {
            this_00 = (Array<unsigned char>*)(*((this + 19)))[(unsigned long)arg4];
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            this_00->set_max_size(pTVar3->GetTextureAtlas(), 0);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*((this + 19)))[(unsigned long)arg4];
            pvVar4 = (void*)this_01->data();
            this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pvVar5 = (void*)this_02->GetDataPtr();
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            sVar6 = pTVar3->GetTextureAtlas();
            _memcpy(pvVar4, pvVar5, sVar6);
            iVar1 = js5Index->GetMaximumFileID(arg3);
            *(int*)((long)&this[7]._vptr + 4) = iVar1 + *(int*)((long)&this[7]._vptr + 4) + 1;
            ((DownloadWaitHandler*)(*((this + 26))).operator->())->Completed(arg4);
        }
    }

    // 0x1005c7180
    void ConfigTypePreloadPackedContainer<LightType>::PageList::ClearPageList(SimpleAllocator& simpleAllocator) {
        ConfigPage* this_00;
        uint64_t* puVar1;

        unsigned long arg1 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1];
            this_00 = (ConfigPage*)*puVar1;
            if (this_00 != nullptr) {
                this_00->Clear();
                simpleAllocator.DeAllocate((this_00 + 4104));
                *puVar1 = 0;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005c7260
    void ConfigTypePreloadPackedContainer<LightType>::ConfigPage::Clear() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1];
            if (this_00->end() != 0) {
                this_00->reset();
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005c7390
    ConfigTypePreloadPackedContainer<LightType>*
    ConfigTypePreloadPackedContainer<LightType>::FindConfigID(int arg1) const {
        unsigned int uVar2;
        shared_ptr* this_00;
        long lVar3;
        unique_ptr<ConfigTypePreloadPackedContainer<LightType>::PageList>* puVar4;
        unsigned long uVar5;
        array<ConfigTypePreloadPackedContainer<LightType>::ConfigPage*, 256ul>* this_01;
        long* plVar6;
        ConfigTypePreloadPackedContainer<LightType>* pCVar7;
        unsigned long arg1_00;
        unsigned int uVar8;
        ConfigTypePreloadPackedContainer<LightType> _vtbl* this_02;
        vector<eastl::pair<int, int>>* this_03;

        if (arg1 == -1) {
            pCVar7 = this + 17;
        } else {
            if (*(int*)&this[13]._vptr == arg1) {
                if (this[14]._vptr != nullptr) {
                    this_00 = (shared_ptr*)(*this[14]._vptr)[(unsigned long)*(unsigned int*)&this[15]._vptr];
                    if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                        this_02 = this[14]._vptr;
                        uVar8 = *(unsigned int*)&this[15]._vptr;
                    LAB_1005c74b2:
                        pCVar7 = (ConfigTypePreloadPackedContainer<LightType>*)(*this_02)[(unsigned long)uVar8];
                        return pCVar7;
                    }
                }
                uVar8 = *(unsigned int*)&this[13]._vptr;
                uVar2 = this[3]._vptr->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigTypePreloadPackedContainer.h",
                                507, "Previously loaded config ID %d (archive ID %u) unexpectedly missing",
                                (unsigned long)uVar8, (unsigned long)uVar2);
            }
            this_03 = (vector<eastl::pair<int, int>>*)(this + 9);
            lVar3 = this_03->size();
            pCVar7 = (ConfigTypePreloadPackedContainer<LightType>*)PTR_NullConfigType_100ee6590;
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<LightType>::PageList>*)(*this_03)[arg1_00];
                    lVar3 = (*puVar4).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == (arg1 & 4294901760U)) {
                        puVar4 =
                            (unique_ptr<ConfigTypePreloadPackedContainer<LightType>::PageList>*)(*this_03)[arg1_00];
                        this_01 = (array<ConfigTypePreloadPackedContainer<LightType>::ConfigPage*, 256ul>*)(*puVar4)
                                      .operator->();
                        plVar6 = (long*)(*this_01)[(unsigned long)((unsigned int)arg1 >> 8 & 255)];
                        this_02 = (ConfigTypePreloadPackedContainer<LightType> _vtbl*)*plVar6;
                        if (this_02 == nullptr) {
                            return pCVar7;
                        }
                        uVar8 = arg1 & 255;
                        goto LAB_1005c74b2;
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar5 = this_03->size();
                } while (arg1_00 < uVar5);
            }
        }
        return pCVar7;
    }

    // 0x1005c74d0
    uint64_t ConfigTypePreloadPackedContainer<LightType>::DecodeConfig(int arg1, shared_ptr<LightType>& lightType) {
        PacketT<Array<unsigned char>>* arg1_00;
        ConfigTypePreloadPackedContainer<LightType> _vtbl* pCVar1;
        unsigned int arg1_01;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        uint8_t* puVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        void* pvVar8;
        Array<unsigned char>* this_00;
        void* pvVar9;
        size_t sVar10;
        uint64_t uVar11;
        long* plVar12;
        unsigned long arg1_03;
        Array<Array<unsigned char>>* this_01;
        shared_ptr<LightType> local_50;
        Js5Index* local_40;

        lightType = *PTR_NullConfigType_100ee6590;
        if (arg1 < 0) {
            MakeSharedPool<LightType, 32>::MakeShared<BaseTemplateConfigTypeList<LightType>*&, int&>(
                (BaseTemplateConfigTypeList<LightType>**)&local_50, (int*)(this + 1));
            lightType = local_50;
        LAB_1005c765b:
        LAB_1005c7664:
            uVar11 = 1;
        } else {
            arg1_01 = this[1]._vptr->GetClientGroupID(arg1);
            uVar3 = this[1]._vptr->GetClientFileID(arg1);
            local_40 = nullptr;
            puVar6 =
                (uint8_t*)(**(void (**)(...))((this[2]._vptr)->_dtor + 24))(this[2]._vptr, &local_40, this[3]._vptr);
            if (puVar6 != DataStatus::MISSING) {
                if (local_40->DoesFileExist(arg1_01, uVar3) != '\0') {
                    if (puVar6 == DataStatus::READY) {
                        uVar3 = local_40->GetFileIndex(arg1_01, uVar3);
                        uVar4 = this[1]._vptr->GetUIHeight();
                        arg1_03 = 0;
                        if (1 < uVar4) {
                            arg1_03 = (unsigned long)arg1_01;
                        }
                        iVar5 = local_40->GetFileCount(arg1_01);
                        arg1_00 = (PacketT<Array<unsigned char>>*)(this + 22);
                        this_01 = (Array<Array<unsigned char>>*)(this + 19);
                        pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                        if (iVar5 == 1) {
                            arg1_00->Reserve(pvVar7->end());
                            arg1_00->SetPos(0);
                            pvVar8 = (void*)arg1_00->GetDataPtr();
                            this_00 = (Array<unsigned char>*)(*this_01)[arg1_03];
                            pvVar9 = (void*)(*this_00)[0];
                            pvVar7 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                            sVar10 = pvVar7->end();
                            _memcpy(pvVar8, pvVar9, sVar10);
                        } else {
                            Js5DiskFileFormat::GetGroupFileData((PacketT<Array<unsigned char> _>*)arg1_00,
                                                                (Array<unsigned char>*)pvVar7, uVar3);
                        }
                        MakeSharedPool<LightType, 32>::MakeShared<BaseTemplateConfigTypeList<LightType>*&, int&>(
                            (BaseTemplateConfigTypeList<LightType>**)&local_50, (int*)(this + 1));
                        plVar12 = (long*)local_50.operator->();
                        puVar6 = (uint8_t*)(**(void (**)(...))(*plVar12 + 32))(plVar12, arg1_00);
                        if (puVar6 == DataStatus::READY) {
                            plVar12 = (long*)local_50.operator->();
                            (**(void (**)(...))(*plVar12 + 24))(plVar12);
                            pCVar1 = this[1]._vptr;
                            puVar6 = (uint8_t*)(**(void (**)(...))(pCVar1->_dtor + 72))(pCVar1, &local_50);
                            if (puVar6 == DataStatus::READY) {
                                lightType = local_50;
                            }
                        }
                        goto LAB_1005c765b;
                    }
                    goto LAB_1005c7664;
                }
            }
            uVar11 = 0;
        }
        return uVar11;
    }

    // 0x1005c7710
    auto ConfigTypePreloadPackedContainer<LightType>::AddConfigID(const shared_ptr<LightType>& lightType, int arg2) {
        auto result;
        unsigned long uVar1;
        unique_ptr<ConfigTypePreloadPackedContainer<LightType>::PageList>* puVar2;
        long lVar3;
        array<ConfigTypePreloadPackedContainer<LightType>::ConfigPage*, 256ul>* paVar4;
        ReturnValue* pRVar5;
        ReturnValue this;
        ReturnValue* pRVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue local_48;
        unsigned int local_38;
        unsigned int local_34;

        if (arg2 == -1) {
            pRVar6 = &result + 17;
            *pRVar6 = lightType;
        } else {
            local_34 = arg2 & 4294901760;
            pRVar6 = &result + 9;
            uVar1 = pRVar6->size();
            arg1 = 0;
            if (uVar1 != 0) {
                do {
                    puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<LightType>::PageList>*)(*pRVar6)[arg1];
                    lVar3 = (*puVar2).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == local_34)
                        break;
                    arg1 = (unsigned long)((int)arg1 + 1);
                } while (arg1 < uVar1);
            }
            if (uVar1 == arg1) {
                local_48 =
                    std::make_unique<ConfigTypePreloadPackedContainer<LightType>::PageList, unsigned int&>(local_34);
                eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<LightType>::PageList>>::emplace_back<
                    std::unique_ptr<ConfigTypePreloadPackedContainer<LightType>::PageList>>(
                    (vector<std::unique_ptr<ConfigTypePreloadPackedContainer<LightType>::PageList>>*)pRVar6,
                    (unique_ptr<
                        ConfigTypePreloadPackedContainer<LightType>::PageList,
                        std::default_delete<ConfigTypePreloadPackedContainer<LightType>::PageList> _>*)&local_48);
            }
            uVar1 = (unsigned long)(arg2 - local_34 >> 8);
            puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<LightType>::PageList>*)(*pRVar6)[arg1];
            paVar4 = (array<ConfigTypePreloadPackedContainer<LightType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
            pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
            this = *pRVar5;
            uVar7 = arg2 & 255U;
            if (this == (ReturnValue)0) {
                local_38 = arg2 & 255U;
                this = (ReturnValue)AllocatePageBuffer(&result);
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<LightType>::PageList>*)(*pRVar6)[arg1];
                paVar4 =
                    (array<ConfigTypePreloadPackedContainer<LightType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
                pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
                *pRVar5 = this;
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<LightType>::PageList>*)(*pRVar6)[arg1];
                lVar3 = (*puVar2).operator->();
                if (*(unsigned int*)(lVar3 + 2048) != local_34) {
                    LogAssert("m_pageListContainer[thisPageList]->m_pageListID == pageListID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigTypePreloadPackedContainer.h",
                              469, nullptr);
                }
                uVar7 = local_38;
            }
            pRVar6 = (ReturnValue*)(*this)[(unsigned long)uVar7];
            *pRVar6 = lightType;
            *(int*)((long)this + 4096) = *(int*)((long)this + 4096) + 1;
            *(int*)(&result + 13) = arg2;
            &result[14] = this;
            *(unsigned int*)(&result + 15) = uVar7;
        }
        return pRVar6;
    }

    // 0x1005c7a80
    ConfigPage* ConfigTypePreloadPackedContainer<LightType>::AllocatePageBuffer() {
        AllocatedBlock local_28 = this[16]._vptr->Allocate(4128);
        void* pvVar1 = local_28.field_8;
        if (local_28.field_8 == nullptr) {
            LogAssert("block.m_address != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      534, nullptr);
        }
        new (local_28.field_8) ConfigPage();
        *(unsigned long*)((long)pvVar1 + 4120) = local_28.field_16;
        *(uint64_t*)((long)pvVar1 + 4104) = local_28._0_8_;
        *(void**)((long)pvVar1 + 4112) = local_28.field_8;
        return pvVar1;
    }

    // 0x1005c7e20
    ConfigTypePreloadPackedContainer<LightType>::PageList::PageList(unsigned int arg1) {
        uint64_t* puVar1;

        *(unsigned int*)(this + 2048) = arg1;
        *(uint32_t*)(this + 2052) = 0;
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1_00];
            *puVar1 = 0;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
    }

    // 0x1005c7ed0
    ConfigTypePreloadPackedContainer<LightType>::ConfigPage::ConfigPage() : std::array<shared_ptr<LightType>, 256ul>() {
        *(uint32_t*)(this + 4096) = 0;
        new ((this + 4104)) SimpleAllocator::AllocatedBlock();
    }

    // 0x1005cbcd0
    ConfigTypePreloadPackedContainer<SkyBoxType>::ConfigTypePreloadPackedContainer(
        BaseTemplateConfigTypeList<SkyBoxType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<SkyBoxType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                              js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee83f8;
        new ((this + 9)) eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<SkyBoxType>::PageList>>();
        new ((this + 17)) shared_ptr();
        new ((this + 19)) Array<Array<unsigned char>>();
        new ((this + 22)) PacketT();
        ((this + 26))->unique_ptr<true, void>();
    }

    // 0x1005cbe30
    _x7e___2* ConfigTypePreloadPackedContainer<SkyBoxType>::LoadList() {
        unique_ptr* this_00;
        bool bVar2;
        bool cVar3;
        DownloadWaitHandler* pDVar6;
        CoordMapSquare* pCVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        ConfigTypePreloadPackedContainer<SkyBoxType> _vtbl* local_48;

        if (*(int*)&this[6]._vptr == 2) {
            return (_x7e___2*)DataStatus::READY;
        }
        ConfigTypePreloadPackedContainer<SkyBoxType> _vtbl* pCVar1 = this[2]._vptr;
        ConfigTypePreloadPackedContainer<SkyBoxType> _vtbl* js5ArchiveSettings = this[3]._vptr;
        Js5Index* local_40 = nullptr;
        _x7e___2* p_Var5 = (_x7e___2*)(**(void (**)(...))(pCVar1->_dtor + 24))(pCVar1, &local_40, js5ArchiveSettings);
        if (p_Var5 != (_x7e___2*)DataStatus::READY) {
            return p_Var5;
        }
        unsigned int local_34 = this[1]._vptr->GetUIHeight();
        int iVar4 = this[1]._vptr->GetStreamCountLastMix();
        *(unsigned int*)&this[8]._vptr = iVar4 + local_34;
        if (*(int*)&this[6]._vptr == 0) {
            this_00 = (unique_ptr*)(this + 26);
            local_48 = js5ArchiveSettings;
            cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar3) {
                LogAssert("!m_downloadHandler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "ConfigTypePreloadPackedContainer.h",
                          213, nullptr);
            }
            local_50 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_34);
            *this_00 = local_50;
            pDVar6 = (DownloadWaitHandler*)**this_00;
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                CheckGroupExistence(this, pDVar6, local_40, uVar8, 0);
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    CheckGroupExistence(this, pDVar6, local_40, uVar8, uVar8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            ((this + 19))->set_max_size((unsigned long)local_34, 0);
            *(uint32_t*)&this[6]._vptr = 1;
            iVar4 = *(int*)&this[6]._vptr;
            js5ArchiveSettings = local_48;
        } else {
            iVar4 = *(int*)&this[6]._vptr;
        }
        if (iVar4 != 1) {
            return (_x7e___2*)DataStatus::READY;
        }
        pDVar6 = (DownloadWaitHandler*)*(*((this + 26)));
        if ((this[1]._vptr != nullptr) && (cVar3 = (**(void (**)(...))(pCVar1->_dtor + 64))(pCVar1), cVar3)) {
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                cVar3 = pDVar6->IsComplete(0);
                if ((!cVar3) && (cVar3 = pDVar6->CanCheck(0), cVar3)) {
                    CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, 0);
                }
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    cVar3 = pDVar6->IsComplete(uVar8);
                    if ((!cVar3) && (cVar3 = pDVar6->CanCheck(uVar8), cVar3)) {
                        CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, uVar8);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            if (*(unsigned int*)&this[8]._vptr <= *(unsigned int*)((long)&this[7]._vptr + 4)) {
                ((this + 26))->reset(nullptr);
                *(uint32_t*)&this[6]._vptr = 2;
                p_Var5 = (_x7e___2*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->_x7e___2 = p_Var5;
                bVar2 = true;
                goto LAB_1005cc0a6;
            }
        }
        bVar2 = false;
        p_Var5 = (_x7e___2*)DataStatus::NOTLOADED;
    LAB_1005cc0a6:
        if (bVar2) {
            return (_x7e___2*)DataStatus::READY;
        }
        return p_Var5;
    }

    // 0x1005cc0f0
    void ConfigTypePreloadPackedContainer<SkyBoxType>::CacheReset() {
        unique_ptr<ConfigTypePreloadPackedContainer<SkyBoxType>::PageList>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (unique_ptr<ConfigTypePreloadPackedContainer<SkyBoxType>::PageList>*)(*this_00)[arg1];
                ((PageList*)this_01->get())->ClearPageList(*this[16]._vptr);
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        this_00->clear();
        this[14]._vptr = nullptr;
        *(uint32_t*)&this[15]._vptr = 0;
        *(uint32_t*)&this[13]._vptr = 4294967295;
    }

    // 0x1005cc180
    void ConfigTypePreloadPackedContainer<SkyBoxType>::CacheClean(unsigned int arg1) {
        LoadList** ppLVar1;
        ConfigTypePreloadPackedContainer<SkyBoxType> _vtbl* this_01;
        unsigned long uVar4;
        unique_ptr<ConfigTypePreloadPackedContainer<SkyBoxType>::PageList>* this_02;
        array<ConfigTypePreloadPackedContainer<SkyBoxType>::ConfigPage*, 256ul>* this_03;
        uint64_t* puVar5;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_04;
        unsigned long arg1_00;
        unsigned int uVar6;
        int iVar7;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_02 = (unique_ptr<ConfigTypePreloadPackedContainer<SkyBoxType>::PageList>*)(*this_00)[arg1_00];
                this_03 = (array<ConfigTypePreloadPackedContainer<SkyBoxType>::ConfigPage*, 256ul>*)this_02->get();
                uVar6 = *(unsigned int*)(this_03 + 2052);
                iVar7 = 16;
                do {
                    puVar5 = (uint64_t*)(*this_03)[(unsigned long)(uVar6 >> 8)];
                    this_01 = (ConfigTypePreloadPackedContainer<SkyBoxType> _vtbl*)*puVar5;
                    if (this_01 != nullptr) {
                        this_04 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*this_01)[(
                            unsigned long)(uVar6 & 255)];
                        if (this_04->unique() != '\0') {
                            this_04->reset();
                            if ((this_01 == this[14]._vptr) && ((uVar6 & 255) == *(unsigned int*)&this[15]._vptr)) {
                                this[14]._vptr = nullptr;
                                *(uint32_t*)&this[15]._vptr = 0;
                                *(uint32_t*)&this[13]._vptr = 4294967295;
                            }
                            ppLVar1 = &this_01[51].LoadList;
                            *(int*)ppLVar1 = *(int*)ppLVar1 - 1;
                            if (*(int*)ppLVar1 == 0) {
                                this[16]._vptr->DeAllocate(&this_01[51].CacheReset);
                                *puVar5 = 0;
                            }
                        }
                    }
                    uVar6 = uVar6 + 1 & 65535;
                    iVar7 = iVar7 - 1;
                } while (iVar7 != 0);
                *(unsigned int*)(this_03 + 2052) = uVar6;
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x1005cc2f0
    shared_ptr* ConfigTypePreloadPackedContainer<SkyBoxType>::List(int arg1, const DataStatus** arg2) {
        shared_ptr* psVar2;
        uint8_t** ppuVar3;

        if (*(int*)&this[6]._vptr != 2) {
            if (arg2 == nullptr) {
                return (shared_ptr*)PTR_NullConfigType_100ee64d0;
            }
            ppuVar3 = &DataStatus::NOTLOADED;
            psVar2 = (shared_ptr*)PTR_NullConfigType_100ee64d0;
        LAB_1005cc34b:
            *arg2 = (DataStatus*)*ppuVar3;
            return psVar2;
        }
        psVar2 = (shared_ptr*)FindConfigID(this, arg1);
        if (shared_ptr::operator_cast_to_bool(psVar2)) {
            if (arg2 == nullptr) {
                return psVar2;
            }
            ppuVar3 = &DataStatus::READY;
            goto LAB_1005cc34b;
        }
        shared_ptr local_38;
        if (!(DecodeConfig(this, arg1, (shared_ptr<SkyBoxType>*)&local_38))) {
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::MISSING;
            LAB_1005cc3c1:
                *arg2 = (DataStatus*)*ppuVar3;
            }
        } else {
            if (shared_ptr::operator_cast_to_bool(&local_38)) {
                if (arg2 != nullptr) {
                    *arg2 = (DataStatus*)DataStatus::READY;
                }
                psVar2 = (shared_ptr*)AddConfigID((ReturnValue*)this, (shared_ptr<SkyBoxType>*)&local_38, arg1);
                goto LAB_1005cc3ce;
            }
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_1005cc3c1;
            }
        }
        psVar2 = (shared_ptr*)PTR_NullConfigType_100ee64d0;
    LAB_1005cc3ce:
        return psVar2;
    }

    // 0x1005cc400
    auto ConfigTypePreloadPackedContainer<SkyBoxType>::DirectFetch(int arg1) {
        if (*(int*)&this[6]._vptr != 2) {
            LogAssert("m_loadStep == BaseLoadAllConfigTypeContainer::LoadStep::DONE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      179, nullptr);
        }
        auto result;
        if (DecodeConfig(this, arg1, &result) == '\0') {
            LogAssert("exists",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      183, nullptr);
        }
        return result;
    }

    // 0x1005cc610
    ConfigTypePreloadPackedContainer<SkyBoxType>::~ConfigTypePreloadPackedContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee83f8;
        this[16]._vptr->PrintMetrics();
        CacheReset();
        ((this + 26))->~unique_ptr();
        ((this + 22))->~VBOMapper();
        ((this + 19))->~Array();
        ((this + 17))->~shared_ptr();
        ((this + 9))->~vector();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005cc700
    void ConfigTypePreloadPackedContainer<SkyBoxType>::CheckGroupExistence(DownloadWaitHandler& downloadWaitHandler,
                                                                           Js5Index* js5Index, unsigned int arg3,
                                                                           unsigned int arg4) {
        int* piVar1;

        if (js5Index == nullptr) {
            LogAssert("js5Index",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      365, nullptr);
        }
        if (js5Index->DoesGroupExist(arg3) == '\0') {
            piVar1 = (int*)((long)&this[7]._vptr + 4);
            *piVar1 = *piVar1 + 1;
        } else {
            downloadWaitHandler.SetExists(arg4);
        }
    }

    // 0x1005cc780
    void ConfigTypePreloadPackedContainer<SkyBoxType>::CheckDecodeProgress(const Js5ArchiveSettings& js5ArchiveSettings,
                                                                           Js5Index* js5Index, unsigned int arg3,
                                                                           unsigned int arg4) {
        int iVar1;
        Array<unsigned char>* this_00;
        TextureAtlasReference* pTVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        void* pvVar4;
        PacketT<Array<unsigned char>>* this_02;
        void* pvVar5;
        size_t sVar6;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)this[1]._vptr->GetGroup(local_48, js5ArchiveSettings, arg3, (Priority*)Priority::HIGHEST, true,
                                              true) == DataStatus::READY) {
            this_00 = (Array<unsigned char>*)(*((this + 19)))[(unsigned long)arg4];
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            this_00->set_max_size(pTVar3->GetTextureAtlas(), 0);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*((this + 19)))[(unsigned long)arg4];
            pvVar4 = (void*)this_01->data();
            this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pvVar5 = (void*)this_02->GetDataPtr();
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            sVar6 = pTVar3->GetTextureAtlas();
            _memcpy(pvVar4, pvVar5, sVar6);
            iVar1 = js5Index->GetMaximumFileID(arg3);
            *(int*)((long)&this[7]._vptr + 4) = iVar1 + *(int*)((long)&this[7]._vptr + 4) + 1;
            ((DownloadWaitHandler*)(*((this + 26))).operator->())->Completed(arg4);
        }
    }

    // 0x1005cc920
    void ConfigTypePreloadPackedContainer<SkyBoxType>::PageList::ClearPageList(SimpleAllocator& simpleAllocator) {
        ConfigPage* this_00;
        uint64_t* puVar1;

        unsigned long arg1 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1];
            this_00 = (ConfigPage*)*puVar1;
            if (this_00 != nullptr) {
                this_00->Clear();
                simpleAllocator.DeAllocate((this_00 + 4104));
                *puVar1 = 0;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005cca00
    void ConfigTypePreloadPackedContainer<SkyBoxType>::ConfigPage::Clear() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1];
            if (this_00->end() != 0) {
                this_00->reset();
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005ccb30
    ConfigTypePreloadPackedContainer<SkyBoxType>*
    ConfigTypePreloadPackedContainer<SkyBoxType>::FindConfigID(int arg1) const {
        unsigned int uVar2;
        shared_ptr* this_00;
        long lVar3;
        unique_ptr<ConfigTypePreloadPackedContainer<SkyBoxType>::PageList>* puVar4;
        unsigned long uVar5;
        array<ConfigTypePreloadPackedContainer<SkyBoxType>::ConfigPage*, 256ul>* this_01;
        long* plVar6;
        ConfigTypePreloadPackedContainer<SkyBoxType>* pCVar7;
        unsigned long arg1_00;
        unsigned int uVar8;
        ConfigTypePreloadPackedContainer<SkyBoxType> _vtbl* this_02;
        vector<eastl::pair<int, int>>* this_03;

        if (arg1 == -1) {
            pCVar7 = this + 17;
        } else {
            if (*(int*)&this[13]._vptr == arg1) {
                if (this[14]._vptr != nullptr) {
                    this_00 = (shared_ptr*)(*this[14]._vptr)[(unsigned long)*(unsigned int*)&this[15]._vptr];
                    if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                        this_02 = this[14]._vptr;
                        uVar8 = *(unsigned int*)&this[15]._vptr;
                    LAB_1005ccc52:
                        pCVar7 = (ConfigTypePreloadPackedContainer<SkyBoxType>*)(*this_02)[(unsigned long)uVar8];
                        return pCVar7;
                    }
                }
                uVar8 = *(unsigned int*)&this[13]._vptr;
                uVar2 = this[3]._vptr->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigTypePreloadPackedContainer.h",
                                507, "Previously loaded config ID %d (archive ID %u) unexpectedly missing",
                                (unsigned long)uVar8, (unsigned long)uVar2);
            }
            this_03 = (vector<eastl::pair<int, int>>*)(this + 9);
            lVar3 = this_03->size();
            pCVar7 = (ConfigTypePreloadPackedContainer<SkyBoxType>*)PTR_NullConfigType_100ee64d0;
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<SkyBoxType>::PageList>*)(*this_03)[arg1_00];
                    lVar3 = (*puVar4).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == (arg1 & 4294901760U)) {
                        puVar4 =
                            (unique_ptr<ConfigTypePreloadPackedContainer<SkyBoxType>::PageList>*)(*this_03)[arg1_00];
                        this_01 = (array<ConfigTypePreloadPackedContainer<SkyBoxType>::ConfigPage*, 256ul>*)(*puVar4)
                                      .operator->();
                        plVar6 = (long*)(*this_01)[(unsigned long)((unsigned int)arg1 >> 8 & 255)];
                        this_02 = (ConfigTypePreloadPackedContainer<SkyBoxType> _vtbl*)*plVar6;
                        if (this_02 == nullptr) {
                            return pCVar7;
                        }
                        uVar8 = arg1 & 255;
                        goto LAB_1005ccc52;
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar5 = this_03->size();
                } while (arg1_00 < uVar5);
            }
        }
        return pCVar7;
    }

    // 0x1005ccc70
    uint64_t ConfigTypePreloadPackedContainer<SkyBoxType>::DecodeConfig(int arg1, shared_ptr<SkyBoxType>& skyBoxType) {
        PacketT<Array<unsigned char>>* arg1_00;
        ConfigTypePreloadPackedContainer<SkyBoxType> _vtbl* pCVar1;
        unsigned int arg1_01;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        uint8_t* puVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        void* pvVar8;
        Array<unsigned char>* this_00;
        void* pvVar9;
        size_t sVar10;
        uint64_t uVar11;
        long* plVar12;
        unsigned long arg1_03;
        Array<Array<unsigned char>>* this_01;
        shared_ptr<SkyBoxType> local_50;
        Js5Index* local_40;

        skyBoxType = *PTR_NullConfigType_100ee64d0;
        if (arg1 < 0) {
            MakeSharedPool<SkyBoxType, 16>::MakeShared<BaseTemplateConfigTypeList<SkyBoxType>*&, int&>(
                (BaseTemplateConfigTypeList<SkyBoxType>**)&local_50, (int*)(this + 1));
            skyBoxType = local_50;
        LAB_1005ccdfb:
        LAB_1005cce04:
            uVar11 = 1;
        } else {
            arg1_01 = this[1]._vptr->GetClientGroupID(arg1);
            uVar3 = this[1]._vptr->GetClientFileID(arg1);
            local_40 = nullptr;
            puVar6 =
                (uint8_t*)(**(void (**)(...))((this[2]._vptr)->_dtor + 24))(this[2]._vptr, &local_40, this[3]._vptr);
            if (puVar6 != DataStatus::MISSING) {
                if (local_40->DoesFileExist(arg1_01, uVar3) != '\0') {
                    if (puVar6 == DataStatus::READY) {
                        uVar3 = local_40->GetFileIndex(arg1_01, uVar3);
                        uVar4 = this[1]._vptr->GetUIHeight();
                        arg1_03 = 0;
                        if (1 < uVar4) {
                            arg1_03 = (unsigned long)arg1_01;
                        }
                        iVar5 = local_40->GetFileCount(arg1_01);
                        arg1_00 = (PacketT<Array<unsigned char>>*)(this + 22);
                        this_01 = (Array<Array<unsigned char>>*)(this + 19);
                        pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                        if (iVar5 == 1) {
                            arg1_00->Reserve(pvVar7->end());
                            arg1_00->SetPos(0);
                            pvVar8 = (void*)arg1_00->GetDataPtr();
                            this_00 = (Array<unsigned char>*)(*this_01)[arg1_03];
                            pvVar9 = (void*)(*this_00)[0];
                            pvVar7 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                            sVar10 = pvVar7->end();
                            _memcpy(pvVar8, pvVar9, sVar10);
                        } else {
                            Js5DiskFileFormat::GetGroupFileData((PacketT<Array<unsigned char> _>*)arg1_00,
                                                                (Array<unsigned char>*)pvVar7, uVar3);
                        }
                        MakeSharedPool<SkyBoxType, 16>::MakeShared<BaseTemplateConfigTypeList<SkyBoxType>*&, int&>(
                            (BaseTemplateConfigTypeList<SkyBoxType>**)&local_50, (int*)(this + 1));
                        plVar12 = (long*)local_50.operator->();
                        puVar6 = (uint8_t*)(**(void (**)(...))(*plVar12 + 32))(plVar12, arg1_00);
                        if (puVar6 == DataStatus::READY) {
                            plVar12 = (long*)local_50.operator->();
                            (**(void (**)(...))(*plVar12 + 24))(plVar12);
                            pCVar1 = this[1]._vptr;
                            puVar6 = (uint8_t*)(**(void (**)(...))(pCVar1->_dtor + 72))(pCVar1, &local_50);
                            if (puVar6 == DataStatus::READY) {
                                skyBoxType = local_50;
                            }
                        }
                        goto LAB_1005ccdfb;
                    }
                    goto LAB_1005cce04;
                }
            }
            uVar11 = 0;
        }
        return uVar11;
    }

    // 0x1005cceb0
    auto ConfigTypePreloadPackedContainer<SkyBoxType>::AddConfigID(const shared_ptr<SkyBoxType>& skyBoxType, int arg2) {
        auto result;
        unsigned long uVar1;
        unique_ptr<ConfigTypePreloadPackedContainer<SkyBoxType>::PageList>* puVar2;
        long lVar3;
        array<ConfigTypePreloadPackedContainer<SkyBoxType>::ConfigPage*, 256ul>* paVar4;
        ReturnValue* pRVar5;
        ReturnValue this;
        ReturnValue* pRVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue local_48;
        unsigned int local_38;
        unsigned int local_34;

        if (arg2 == -1) {
            pRVar6 = &result + 17;
            *pRVar6 = skyBoxType;
        } else {
            local_34 = arg2 & 4294901760;
            pRVar6 = &result + 9;
            uVar1 = pRVar6->size();
            arg1 = 0;
            if (uVar1 != 0) {
                do {
                    puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<SkyBoxType>::PageList>*)(*pRVar6)[arg1];
                    lVar3 = (*puVar2).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == local_34)
                        break;
                    arg1 = (unsigned long)((int)arg1 + 1);
                } while (arg1 < uVar1);
            }
            if (uVar1 == arg1) {
                local_48 =
                    std::make_unique<ConfigTypePreloadPackedContainer<SkyBoxType>::PageList, unsigned int&>(local_34);
                eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<SkyBoxType>::PageList>>::emplace_back<
                    std::unique_ptr<ConfigTypePreloadPackedContainer<SkyBoxType>::PageList>>(
                    (vector<std::unique_ptr<ConfigTypePreloadPackedContainer<SkyBoxType>::PageList>>*)pRVar6,
                    (unique_ptr<
                        ConfigTypePreloadPackedContainer<SkyBoxType>::PageList,
                        std::default_delete<ConfigTypePreloadPackedContainer<SkyBoxType>::PageList> _>*)&local_48);
            }
            uVar1 = (unsigned long)(arg2 - local_34 >> 8);
            puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<SkyBoxType>::PageList>*)(*pRVar6)[arg1];
            paVar4 = (array<ConfigTypePreloadPackedContainer<SkyBoxType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
            pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
            this = *pRVar5;
            uVar7 = arg2 & 255U;
            if (this == (ReturnValue)0) {
                local_38 = arg2 & 255U;
                this = (ReturnValue)AllocatePageBuffer(&result);
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<SkyBoxType>::PageList>*)(*pRVar6)[arg1];
                paVar4 =
                    (array<ConfigTypePreloadPackedContainer<SkyBoxType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
                pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
                *pRVar5 = this;
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<SkyBoxType>::PageList>*)(*pRVar6)[arg1];
                lVar3 = (*puVar2).operator->();
                if (*(unsigned int*)(lVar3 + 2048) != local_34) {
                    LogAssert("m_pageListContainer[thisPageList]->m_pageListID == pageListID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigTypePreloadPackedContainer.h",
                              469, nullptr);
                }
                uVar7 = local_38;
            }
            pRVar6 = (ReturnValue*)(*this)[(unsigned long)uVar7];
            *pRVar6 = skyBoxType;
            *(int*)((long)this + 4096) = *(int*)((long)this + 4096) + 1;
            *(int*)(&result + 13) = arg2;
            &result[14] = this;
            *(unsigned int*)(&result + 15) = uVar7;
        }
        return pRVar6;
    }

    // 0x1005cd220
    ConfigPage* ConfigTypePreloadPackedContainer<SkyBoxType>::AllocatePageBuffer() {
        AllocatedBlock local_28 = this[16]._vptr->Allocate(4128);
        void* pvVar1 = local_28.field_8;
        if (local_28.field_8 == nullptr) {
            LogAssert("block.m_address != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      534, nullptr);
        }
        new (local_28.field_8) ConfigPage();
        *(unsigned long*)((long)pvVar1 + 4120) = local_28.field_16;
        *(uint64_t*)((long)pvVar1 + 4104) = local_28._0_8_;
        *(void**)((long)pvVar1 + 4112) = local_28.field_8;
        return pvVar1;
    }

    // 0x1005cd5c0
    ConfigTypePreloadPackedContainer<SkyBoxType>::PageList::PageList(unsigned int arg1) {
        uint64_t* puVar1;

        *(unsigned int*)(this + 2048) = arg1;
        *(uint32_t*)(this + 2052) = 0;
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1_00];
            *puVar1 = 0;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
    }

    // 0x1005cd670
    ConfigTypePreloadPackedContainer<SkyBoxType>::ConfigPage::ConfigPage()
        : std::array<shared_ptr<SkyBoxType>, 256ul>() {
        *(uint32_t*)(this + 4096) = 0;
        new ((this + 4104)) SimpleAllocator::AllocatedBlock();
    }

    // 0x1005d0770
    ConfigTypePreloadPackedContainer<WaterType>::ConfigTypePreloadPackedContainer(
        BaseTemplateConfigTypeList<WaterType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<WaterType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                             js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee84d0;
        new ((this + 9)) eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<WaterType>::PageList>>();
        new ((this + 17)) shared_ptr();
        new ((this + 19)) Array<Array<unsigned char>>();
        new ((this + 22)) PacketT();
        ((this + 26))->unique_ptr<true, void>();
    }

    // 0x1005d08d0
    _x7e___2* ConfigTypePreloadPackedContainer<WaterType>::LoadList() {
        unique_ptr* this_00;
        bool bVar2;
        bool cVar3;
        DownloadWaitHandler* pDVar6;
        CoordMapSquare* pCVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        ConfigTypePreloadPackedContainer<WaterType> _vtbl* local_48;

        if (*(int*)&this[6]._vptr == 2) {
            return (_x7e___2*)DataStatus::READY;
        }
        ConfigTypePreloadPackedContainer<WaterType> _vtbl* pCVar1 = this[2]._vptr;
        ConfigTypePreloadPackedContainer<WaterType> _vtbl* js5ArchiveSettings = this[3]._vptr;
        Js5Index* local_40 = nullptr;
        _x7e___2* p_Var5 = (_x7e___2*)(**(void (**)(...))(pCVar1->_dtor + 24))(pCVar1, &local_40, js5ArchiveSettings);
        if (p_Var5 != (_x7e___2*)DataStatus::READY) {
            return p_Var5;
        }
        unsigned int local_34 = this[1]._vptr->GetUIHeight();
        int iVar4 = this[1]._vptr->GetStreamCountLastMix();
        *(unsigned int*)&this[8]._vptr = iVar4 + local_34;
        if (*(int*)&this[6]._vptr == 0) {
            this_00 = (unique_ptr*)(this + 26);
            local_48 = js5ArchiveSettings;
            cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar3) {
                LogAssert("!m_downloadHandler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "ConfigTypePreloadPackedContainer.h",
                          213, nullptr);
            }
            local_50 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_34);
            *this_00 = local_50;
            pDVar6 = (DownloadWaitHandler*)**this_00;
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                CheckGroupExistence(this, pDVar6, local_40, uVar8, 0);
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    CheckGroupExistence(this, pDVar6, local_40, uVar8, uVar8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            ((this + 19))->set_max_size((unsigned long)local_34, 0);
            *(uint32_t*)&this[6]._vptr = 1;
            iVar4 = *(int*)&this[6]._vptr;
            js5ArchiveSettings = local_48;
        } else {
            iVar4 = *(int*)&this[6]._vptr;
        }
        if (iVar4 != 1) {
            return (_x7e___2*)DataStatus::READY;
        }
        pDVar6 = (DownloadWaitHandler*)*(*((this + 26)));
        if ((this[1]._vptr != nullptr) && (cVar3 = (**(void (**)(...))(pCVar1->_dtor + 64))(pCVar1), cVar3)) {
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                cVar3 = pDVar6->IsComplete(0);
                if ((!cVar3) && (cVar3 = pDVar6->CanCheck(0), cVar3)) {
                    CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, 0);
                }
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    cVar3 = pDVar6->IsComplete(uVar8);
                    if ((!cVar3) && (cVar3 = pDVar6->CanCheck(uVar8), cVar3)) {
                        CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, uVar8);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            if (*(unsigned int*)&this[8]._vptr <= *(unsigned int*)((long)&this[7]._vptr + 4)) {
                ((this + 26))->reset(nullptr);
                *(uint32_t*)&this[6]._vptr = 2;
                p_Var5 = (_x7e___2*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->_x7e___2 = p_Var5;
                bVar2 = true;
                goto LAB_1005d0b46;
            }
        }
        bVar2 = false;
        p_Var5 = (_x7e___2*)DataStatus::NOTLOADED;
    LAB_1005d0b46:
        if (bVar2) {
            return (_x7e___2*)DataStatus::READY;
        }
        return p_Var5;
    }

    // 0x1005d0b90
    void ConfigTypePreloadPackedContainer<WaterType>::CacheReset() {
        unique_ptr<ConfigTypePreloadPackedContainer<WaterType>::PageList>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (unique_ptr<ConfigTypePreloadPackedContainer<WaterType>::PageList>*)(*this_00)[arg1];
                ((PageList*)this_01->get())->ClearPageList(*this[16]._vptr);
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        this_00->clear();
        this[14]._vptr = nullptr;
        *(uint32_t*)&this[15]._vptr = 0;
        *(uint32_t*)&this[13]._vptr = 4294967295;
    }

    // 0x1005d0c20
    void ConfigTypePreloadPackedContainer<WaterType>::CacheClean(unsigned int arg1) {
        LoadList** ppLVar1;
        ConfigTypePreloadPackedContainer<WaterType> _vtbl* this_01;
        unsigned long uVar4;
        unique_ptr<ConfigTypePreloadPackedContainer<WaterType>::PageList>* this_02;
        array<ConfigTypePreloadPackedContainer<WaterType>::ConfigPage*, 256ul>* this_03;
        uint64_t* puVar5;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_04;
        unsigned long arg1_00;
        unsigned int uVar6;
        int iVar7;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_02 = (unique_ptr<ConfigTypePreloadPackedContainer<WaterType>::PageList>*)(*this_00)[arg1_00];
                this_03 = (array<ConfigTypePreloadPackedContainer<WaterType>::ConfigPage*, 256ul>*)this_02->get();
                uVar6 = *(unsigned int*)(this_03 + 2052);
                iVar7 = 16;
                do {
                    puVar5 = (uint64_t*)(*this_03)[(unsigned long)(uVar6 >> 8)];
                    this_01 = (ConfigTypePreloadPackedContainer<WaterType> _vtbl*)*puVar5;
                    if (this_01 != nullptr) {
                        this_04 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*this_01)[(
                            unsigned long)(uVar6 & 255)];
                        if (this_04->unique() != '\0') {
                            this_04->reset();
                            if ((this_01 == this[14]._vptr) && ((uVar6 & 255) == *(unsigned int*)&this[15]._vptr)) {
                                this[14]._vptr = nullptr;
                                *(uint32_t*)&this[15]._vptr = 0;
                                *(uint32_t*)&this[13]._vptr = 4294967295;
                            }
                            ppLVar1 = &this_01[51].LoadList;
                            *(int*)ppLVar1 = *(int*)ppLVar1 - 1;
                            if (*(int*)ppLVar1 == 0) {
                                this[16]._vptr->DeAllocate(&this_01[51].CacheReset);
                                *puVar5 = 0;
                            }
                        }
                    }
                    uVar6 = uVar6 + 1 & 65535;
                    iVar7 = iVar7 - 1;
                } while (iVar7 != 0);
                *(unsigned int*)(this_03 + 2052) = uVar6;
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x1005d0d90
    shared_ptr* ConfigTypePreloadPackedContainer<WaterType>::List(int arg1, const DataStatus** arg2) {
        shared_ptr* psVar2;
        uint8_t** ppuVar3;

        if (*(int*)&this[6]._vptr != 2) {
            if (arg2 == nullptr) {
                return (shared_ptr*)PTR_NullConfigType_100ee65a8;
            }
            ppuVar3 = &DataStatus::NOTLOADED;
            psVar2 = (shared_ptr*)PTR_NullConfigType_100ee65a8;
        LAB_1005d0deb:
            *arg2 = (DataStatus*)*ppuVar3;
            return psVar2;
        }
        psVar2 = (shared_ptr*)FindConfigID(this, arg1);
        if (shared_ptr::operator_cast_to_bool(psVar2)) {
            if (arg2 == nullptr) {
                return psVar2;
            }
            ppuVar3 = &DataStatus::READY;
            goto LAB_1005d0deb;
        }
        shared_ptr local_38;
        if (!(DecodeConfig(this, arg1, (shared_ptr<WaterType>*)&local_38))) {
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::MISSING;
            LAB_1005d0e61:
                *arg2 = (DataStatus*)*ppuVar3;
            }
        } else {
            if (shared_ptr::operator_cast_to_bool(&local_38)) {
                if (arg2 != nullptr) {
                    *arg2 = (DataStatus*)DataStatus::READY;
                }
                psVar2 = (shared_ptr*)AddConfigID((ReturnValue*)this, (shared_ptr<WaterType>*)&local_38, arg1);
                goto LAB_1005d0e6e;
            }
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_1005d0e61;
            }
        }
        psVar2 = (shared_ptr*)PTR_NullConfigType_100ee65a8;
    LAB_1005d0e6e:
        return psVar2;
    }

    // 0x1005d0ea0
    auto ConfigTypePreloadPackedContainer<WaterType>::DirectFetch(int arg1) {
        if (*(int*)&this[6]._vptr != 2) {
            LogAssert("m_loadStep == BaseLoadAllConfigTypeContainer::LoadStep::DONE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      179, nullptr);
        }
        auto result;
        if (DecodeConfig(this, arg1, &result) == '\0') {
            LogAssert("exists",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      183, nullptr);
        }
        return result;
    }

    // 0x1005d10b0
    ConfigTypePreloadPackedContainer<WaterType>::~ConfigTypePreloadPackedContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee84d0;
        this[16]._vptr->PrintMetrics();
        CacheReset();
        ((this + 26))->~unique_ptr();
        ((this + 22))->~VBOMapper();
        ((this + 19))->~Array();
        ((this + 17))->~shared_ptr();
        ((this + 9))->~vector();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005d11a0
    void ConfigTypePreloadPackedContainer<WaterType>::CheckGroupExistence(DownloadWaitHandler& downloadWaitHandler,
                                                                          Js5Index* js5Index, unsigned int arg3,
                                                                          unsigned int arg4) {
        int* piVar1;

        if (js5Index == nullptr) {
            LogAssert("js5Index",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      365, nullptr);
        }
        if (js5Index->DoesGroupExist(arg3) == '\0') {
            piVar1 = (int*)((long)&this[7]._vptr + 4);
            *piVar1 = *piVar1 + 1;
        } else {
            downloadWaitHandler.SetExists(arg4);
        }
    }

    // 0x1005d1220
    void ConfigTypePreloadPackedContainer<WaterType>::CheckDecodeProgress(const Js5ArchiveSettings& js5ArchiveSettings,
                                                                          Js5Index* js5Index, unsigned int arg3,
                                                                          unsigned int arg4) {
        int iVar1;
        Array<unsigned char>* this_00;
        TextureAtlasReference* pTVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        void* pvVar4;
        PacketT<Array<unsigned char>>* this_02;
        void* pvVar5;
        size_t sVar6;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)this[1]._vptr->GetGroup(local_48, js5ArchiveSettings, arg3, (Priority*)Priority::HIGHEST, true,
                                              true) == DataStatus::READY) {
            this_00 = (Array<unsigned char>*)(*((this + 19)))[(unsigned long)arg4];
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            this_00->set_max_size(pTVar3->GetTextureAtlas(), 0);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*((this + 19)))[(unsigned long)arg4];
            pvVar4 = (void*)this_01->data();
            this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pvVar5 = (void*)this_02->GetDataPtr();
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            sVar6 = pTVar3->GetTextureAtlas();
            _memcpy(pvVar4, pvVar5, sVar6);
            iVar1 = js5Index->GetMaximumFileID(arg3);
            *(int*)((long)&this[7]._vptr + 4) = iVar1 + *(int*)((long)&this[7]._vptr + 4) + 1;
            ((DownloadWaitHandler*)(*((this + 26))).operator->())->Completed(arg4);
        }
    }

    // 0x1005d13c0
    void ConfigTypePreloadPackedContainer<WaterType>::PageList::ClearPageList(SimpleAllocator& simpleAllocator) {
        ConfigPage* this_00;
        uint64_t* puVar1;

        unsigned long arg1 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1];
            this_00 = (ConfigPage*)*puVar1;
            if (this_00 != nullptr) {
                this_00->Clear();
                simpleAllocator.DeAllocate((this_00 + 4104));
                *puVar1 = 0;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005d14a0
    void ConfigTypePreloadPackedContainer<WaterType>::ConfigPage::Clear() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1];
            if (this_00->end() != 0) {
                this_00->reset();
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005d15d0
    ConfigTypePreloadPackedContainer<WaterType>*
    ConfigTypePreloadPackedContainer<WaterType>::FindConfigID(int arg1) const {
        unsigned int uVar2;
        shared_ptr* this_00;
        long lVar3;
        unique_ptr<ConfigTypePreloadPackedContainer<WaterType>::PageList>* puVar4;
        unsigned long uVar5;
        array<ConfigTypePreloadPackedContainer<WaterType>::ConfigPage*, 256ul>* this_01;
        long* plVar6;
        ConfigTypePreloadPackedContainer<WaterType>* pCVar7;
        unsigned long arg1_00;
        unsigned int uVar8;
        ConfigTypePreloadPackedContainer<WaterType> _vtbl* this_02;
        vector<eastl::pair<int, int>>* this_03;

        if (arg1 == -1) {
            pCVar7 = this + 17;
        } else {
            if (*(int*)&this[13]._vptr == arg1) {
                if (this[14]._vptr != nullptr) {
                    this_00 = (shared_ptr*)(*this[14]._vptr)[(unsigned long)*(unsigned int*)&this[15]._vptr];
                    if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                        this_02 = this[14]._vptr;
                        uVar8 = *(unsigned int*)&this[15]._vptr;
                    LAB_1005d16f2:
                        pCVar7 = (ConfigTypePreloadPackedContainer<WaterType>*)(*this_02)[(unsigned long)uVar8];
                        return pCVar7;
                    }
                }
                uVar8 = *(unsigned int*)&this[13]._vptr;
                uVar2 = this[3]._vptr->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigTypePreloadPackedContainer.h",
                                507, "Previously loaded config ID %d (archive ID %u) unexpectedly missing",
                                (unsigned long)uVar8, (unsigned long)uVar2);
            }
            this_03 = (vector<eastl::pair<int, int>>*)(this + 9);
            lVar3 = this_03->size();
            pCVar7 = (ConfigTypePreloadPackedContainer<WaterType>*)PTR_NullConfigType_100ee65a8;
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<WaterType>::PageList>*)(*this_03)[arg1_00];
                    lVar3 = (*puVar4).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == (arg1 & 4294901760U)) {
                        puVar4 =
                            (unique_ptr<ConfigTypePreloadPackedContainer<WaterType>::PageList>*)(*this_03)[arg1_00];
                        this_01 = (array<ConfigTypePreloadPackedContainer<WaterType>::ConfigPage*, 256ul>*)(*puVar4)
                                      .operator->();
                        plVar6 = (long*)(*this_01)[(unsigned long)((unsigned int)arg1 >> 8 & 255)];
                        this_02 = (ConfigTypePreloadPackedContainer<WaterType> _vtbl*)*plVar6;
                        if (this_02 == nullptr) {
                            return pCVar7;
                        }
                        uVar8 = arg1 & 255;
                        goto LAB_1005d16f2;
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar5 = this_03->size();
                } while (arg1_00 < uVar5);
            }
        }
        return pCVar7;
    }

    // 0x1005d1710
    uint64_t ConfigTypePreloadPackedContainer<WaterType>::DecodeConfig(int arg1, shared_ptr<WaterType>& waterType) {
        PacketT<Array<unsigned char>>* arg1_00;
        ConfigTypePreloadPackedContainer<WaterType> _vtbl* pCVar1;
        unsigned int arg1_01;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        uint8_t* puVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        void* pvVar8;
        Array<unsigned char>* this_00;
        void* pvVar9;
        size_t sVar10;
        uint64_t uVar11;
        long* plVar12;
        unsigned long arg1_03;
        Array<Array<unsigned char>>* this_01;
        shared_ptr<WaterType> local_50;
        Js5Index* local_40;

        waterType = *PTR_NullConfigType_100ee65a8;
        if (arg1 < 0) {
            MakeSharedPool<WaterType, 16>::MakeShared<BaseTemplateConfigTypeList<WaterType>*&, int&>(
                (BaseTemplateConfigTypeList<WaterType>**)&local_50, (int*)(this + 1));
            waterType = local_50;
        LAB_1005d189b:
        LAB_1005d18a4:
            uVar11 = 1;
        } else {
            arg1_01 = this[1]._vptr->GetClientGroupID(arg1);
            uVar3 = this[1]._vptr->GetClientFileID(arg1);
            local_40 = nullptr;
            puVar6 =
                (uint8_t*)(**(void (**)(...))((this[2]._vptr)->_dtor + 24))(this[2]._vptr, &local_40, this[3]._vptr);
            if (puVar6 != DataStatus::MISSING) {
                if (local_40->DoesFileExist(arg1_01, uVar3) != '\0') {
                    if (puVar6 == DataStatus::READY) {
                        uVar3 = local_40->GetFileIndex(arg1_01, uVar3);
                        uVar4 = this[1]._vptr->GetUIHeight();
                        arg1_03 = 0;
                        if (1 < uVar4) {
                            arg1_03 = (unsigned long)arg1_01;
                        }
                        iVar5 = local_40->GetFileCount(arg1_01);
                        arg1_00 = (PacketT<Array<unsigned char>>*)(this + 22);
                        this_01 = (Array<Array<unsigned char>>*)(this + 19);
                        pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                        if (iVar5 == 1) {
                            arg1_00->Reserve(pvVar7->end());
                            arg1_00->SetPos(0);
                            pvVar8 = (void*)arg1_00->GetDataPtr();
                            this_00 = (Array<unsigned char>*)(*this_01)[arg1_03];
                            pvVar9 = (void*)(*this_00)[0];
                            pvVar7 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                            sVar10 = pvVar7->end();
                            _memcpy(pvVar8, pvVar9, sVar10);
                        } else {
                            Js5DiskFileFormat::GetGroupFileData((PacketT<Array<unsigned char> _>*)arg1_00,
                                                                (Array<unsigned char>*)pvVar7, uVar3);
                        }
                        MakeSharedPool<WaterType, 16>::MakeShared<BaseTemplateConfigTypeList<WaterType>*&, int&>(
                            (BaseTemplateConfigTypeList<WaterType>**)&local_50, (int*)(this + 1));
                        plVar12 = (long*)local_50.operator->();
                        puVar6 = (uint8_t*)(**(void (**)(...))(*plVar12 + 32))(plVar12, arg1_00);
                        if (puVar6 == DataStatus::READY) {
                            plVar12 = (long*)local_50.operator->();
                            (**(void (**)(...))(*plVar12 + 24))(plVar12);
                            pCVar1 = this[1]._vptr;
                            puVar6 = (uint8_t*)(**(void (**)(...))(pCVar1->_dtor + 72))(pCVar1, &local_50);
                            if (puVar6 == DataStatus::READY) {
                                waterType = local_50;
                            }
                        }
                        goto LAB_1005d189b;
                    }
                    goto LAB_1005d18a4;
                }
            }
            uVar11 = 0;
        }
        return uVar11;
    }

    // 0x1005d1950
    auto ConfigTypePreloadPackedContainer<WaterType>::AddConfigID(const shared_ptr<WaterType>& waterType, int arg2) {
        auto result;
        unsigned long uVar1;
        unique_ptr<ConfigTypePreloadPackedContainer<WaterType>::PageList>* puVar2;
        long lVar3;
        array<ConfigTypePreloadPackedContainer<WaterType>::ConfigPage*, 256ul>* paVar4;
        ReturnValue* pRVar5;
        ReturnValue this;
        ReturnValue* pRVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue local_48;
        unsigned int local_38;
        unsigned int local_34;

        if (arg2 == -1) {
            pRVar6 = &result + 17;
            *pRVar6 = waterType;
        } else {
            local_34 = arg2 & 4294901760;
            pRVar6 = &result + 9;
            uVar1 = pRVar6->size();
            arg1 = 0;
            if (uVar1 != 0) {
                do {
                    puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<WaterType>::PageList>*)(*pRVar6)[arg1];
                    lVar3 = (*puVar2).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == local_34)
                        break;
                    arg1 = (unsigned long)((int)arg1 + 1);
                } while (arg1 < uVar1);
            }
            if (uVar1 == arg1) {
                local_48 =
                    std::make_unique<ConfigTypePreloadPackedContainer<WaterType>::PageList, unsigned int&>(local_34);
                eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<WaterType>::PageList>>::emplace_back<
                    std::unique_ptr<ConfigTypePreloadPackedContainer<WaterType>::PageList>>(
                    (vector<std::unique_ptr<ConfigTypePreloadPackedContainer<WaterType>::PageList>>*)pRVar6,
                    (unique_ptr<
                        ConfigTypePreloadPackedContainer<WaterType>::PageList,
                        std::default_delete<ConfigTypePreloadPackedContainer<WaterType>::PageList> _>*)&local_48);
            }
            uVar1 = (unsigned long)(arg2 - local_34 >> 8);
            puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<WaterType>::PageList>*)(*pRVar6)[arg1];
            paVar4 = (array<ConfigTypePreloadPackedContainer<WaterType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
            pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
            this = *pRVar5;
            uVar7 = arg2 & 255U;
            if (this == (ReturnValue)0) {
                local_38 = arg2 & 255U;
                this = (ReturnValue)AllocatePageBuffer(&result);
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<WaterType>::PageList>*)(*pRVar6)[arg1];
                paVar4 =
                    (array<ConfigTypePreloadPackedContainer<WaterType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
                pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
                *pRVar5 = this;
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<WaterType>::PageList>*)(*pRVar6)[arg1];
                lVar3 = (*puVar2).operator->();
                if (*(unsigned int*)(lVar3 + 2048) != local_34) {
                    LogAssert("m_pageListContainer[thisPageList]->m_pageListID == pageListID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigTypePreloadPackedContainer.h",
                              469, nullptr);
                }
                uVar7 = local_38;
            }
            pRVar6 = (ReturnValue*)(*this)[(unsigned long)uVar7];
            *pRVar6 = waterType;
            *(int*)((long)this + 4096) = *(int*)((long)this + 4096) + 1;
            *(int*)(&result + 13) = arg2;
            &result[14] = this;
            *(unsigned int*)(&result + 15) = uVar7;
        }
        return pRVar6;
    }

    // 0x1005d1cc0
    ConfigPage* ConfigTypePreloadPackedContainer<WaterType>::AllocatePageBuffer() {
        AllocatedBlock local_28 = this[16]._vptr->Allocate(4128);
        void* pvVar1 = local_28.field_8;
        if (local_28.field_8 == nullptr) {
            LogAssert("block.m_address != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      534, nullptr);
        }
        new (local_28.field_8) ConfigPage();
        *(unsigned long*)((long)pvVar1 + 4120) = local_28.field_16;
        *(uint64_t*)((long)pvVar1 + 4104) = local_28._0_8_;
        *(void**)((long)pvVar1 + 4112) = local_28.field_8;
        return pvVar1;
    }

    // 0x1005d2060
    ConfigTypePreloadPackedContainer<WaterType>::PageList::PageList(unsigned int arg1) {
        uint64_t* puVar1;

        *(unsigned int*)(this + 2048) = arg1;
        *(uint32_t*)(this + 2052) = 0;
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1_00];
            *puVar1 = 0;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
    }

    // 0x1005d2110
    ConfigTypePreloadPackedContainer<WaterType>::ConfigPage::ConfigPage() : std::array<shared_ptr<WaterType>, 256ul>() {
        *(uint32_t*)(this + 4096) = 0;
        new ((this + 4104)) SimpleAllocator::AllocatedBlock();
    }

    // 0x1005d5de0
    ConfigTypePreloadPackedContainer<CursorType>::ConfigTypePreloadPackedContainer(
        BaseTemplateConfigTypeList<CursorType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<CursorType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                              js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee83f0;
        new ((this + 9)) eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<CursorType>::PageList>>();
        new ((this + 17)) shared_ptr();
        new ((this + 19)) Array<Array<unsigned char>>();
        new ((this + 22)) PacketT();
        ((this + 26))->unique_ptr<true, void>();
    }

    // 0x1005d5f40
    _x7e___2* ConfigTypePreloadPackedContainer<CursorType>::LoadList() {
        unique_ptr* this_00;
        bool bVar2;
        bool cVar3;
        DownloadWaitHandler* pDVar6;
        CoordMapSquare* pCVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        ConfigTypePreloadPackedContainer<CursorType> _vtbl* local_48;

        if (*(int*)&this[6]._vptr == 2) {
            return (_x7e___2*)DataStatus::READY;
        }
        ConfigTypePreloadPackedContainer<CursorType> _vtbl* pCVar1 = this[2]._vptr;
        ConfigTypePreloadPackedContainer<CursorType> _vtbl* js5ArchiveSettings = this[3]._vptr;
        Js5Index* local_40 = nullptr;
        _x7e___2* p_Var5 = (_x7e___2*)(**(void (**)(...))(pCVar1->_dtor + 24))(pCVar1, &local_40, js5ArchiveSettings);
        if (p_Var5 != (_x7e___2*)DataStatus::READY) {
            return p_Var5;
        }
        unsigned int local_34 = this[1]._vptr->GetUIHeight();
        int iVar4 = this[1]._vptr->GetStreamCountLastMix();
        *(unsigned int*)&this[8]._vptr = iVar4 + local_34;
        if (*(int*)&this[6]._vptr == 0) {
            this_00 = (unique_ptr*)(this + 26);
            local_48 = js5ArchiveSettings;
            cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar3) {
                LogAssert("!m_downloadHandler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "ConfigTypePreloadPackedContainer.h",
                          213, nullptr);
            }
            local_50 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_34);
            *this_00 = local_50;
            pDVar6 = (DownloadWaitHandler*)**this_00;
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                CheckGroupExistence(this, pDVar6, local_40, uVar8, 0);
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    CheckGroupExistence(this, pDVar6, local_40, uVar8, uVar8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            ((this + 19))->set_max_size((unsigned long)local_34, 0);
            *(uint32_t*)&this[6]._vptr = 1;
            iVar4 = *(int*)&this[6]._vptr;
            js5ArchiveSettings = local_48;
        } else {
            iVar4 = *(int*)&this[6]._vptr;
        }
        if (iVar4 != 1) {
            return (_x7e___2*)DataStatus::READY;
        }
        pDVar6 = (DownloadWaitHandler*)*(*((this + 26)));
        if ((this[1]._vptr != nullptr) && (cVar3 = (**(void (**)(...))(pCVar1->_dtor + 64))(pCVar1), cVar3)) {
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                cVar3 = pDVar6->IsComplete(0);
                if ((!cVar3) && (cVar3 = pDVar6->CanCheck(0), cVar3)) {
                    CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, 0);
                }
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    cVar3 = pDVar6->IsComplete(uVar8);
                    if ((!cVar3) && (cVar3 = pDVar6->CanCheck(uVar8), cVar3)) {
                        CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, uVar8);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            if (*(unsigned int*)&this[8]._vptr <= *(unsigned int*)((long)&this[7]._vptr + 4)) {
                ((this + 26))->reset(nullptr);
                *(uint32_t*)&this[6]._vptr = 2;
                p_Var5 = (_x7e___2*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->_x7e___2 = p_Var5;
                bVar2 = true;
                goto LAB_1005d61b6;
            }
        }
        bVar2 = false;
        p_Var5 = (_x7e___2*)DataStatus::NOTLOADED;
    LAB_1005d61b6:
        if (bVar2) {
            return (_x7e___2*)DataStatus::READY;
        }
        return p_Var5;
    }

    // 0x1005d6200
    void ConfigTypePreloadPackedContainer<CursorType>::CacheReset() {
        unique_ptr<ConfigTypePreloadPackedContainer<CursorType>::PageList>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (unique_ptr<ConfigTypePreloadPackedContainer<CursorType>::PageList>*)(*this_00)[arg1];
                ((PageList*)this_01->get())->ClearPageList(*this[16]._vptr);
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        this_00->clear();
        this[14]._vptr = nullptr;
        *(uint32_t*)&this[15]._vptr = 0;
        *(uint32_t*)&this[13]._vptr = 4294967295;
    }

    // 0x1005d6290
    void ConfigTypePreloadPackedContainer<CursorType>::CacheClean(unsigned int arg1) {
        LoadList** ppLVar1;
        ConfigTypePreloadPackedContainer<CursorType> _vtbl* this_01;
        unsigned long uVar4;
        unique_ptr<ConfigTypePreloadPackedContainer<CursorType>::PageList>* this_02;
        array<ConfigTypePreloadPackedContainer<CursorType>::ConfigPage*, 256ul>* this_03;
        uint64_t* puVar5;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_04;
        unsigned long arg1_00;
        unsigned int uVar6;
        int iVar7;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_02 = (unique_ptr<ConfigTypePreloadPackedContainer<CursorType>::PageList>*)(*this_00)[arg1_00];
                this_03 = (array<ConfigTypePreloadPackedContainer<CursorType>::ConfigPage*, 256ul>*)this_02->get();
                uVar6 = *(unsigned int*)(this_03 + 2052);
                iVar7 = 16;
                do {
                    puVar5 = (uint64_t*)(*this_03)[(unsigned long)(uVar6 >> 8)];
                    this_01 = (ConfigTypePreloadPackedContainer<CursorType> _vtbl*)*puVar5;
                    if (this_01 != nullptr) {
                        this_04 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*this_01)[(
                            unsigned long)(uVar6 & 255)];
                        if (this_04->unique() != '\0') {
                            this_04->reset();
                            if ((this_01 == this[14]._vptr) && ((uVar6 & 255) == *(unsigned int*)&this[15]._vptr)) {
                                this[14]._vptr = nullptr;
                                *(uint32_t*)&this[15]._vptr = 0;
                                *(uint32_t*)&this[13]._vptr = 4294967295;
                            }
                            ppLVar1 = &this_01[51].LoadList;
                            *(int*)ppLVar1 = *(int*)ppLVar1 - 1;
                            if (*(int*)ppLVar1 == 0) {
                                this[16]._vptr->DeAllocate(&this_01[51].CacheReset);
                                *puVar5 = 0;
                            }
                        }
                    }
                    uVar6 = uVar6 + 1 & 65535;
                    iVar7 = iVar7 - 1;
                } while (iVar7 != 0);
                *(unsigned int*)(this_03 + 2052) = uVar6;
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x1005d6400
    shared_ptr* ConfigTypePreloadPackedContainer<CursorType>::List(int arg1, const DataStatus** arg2) {
        shared_ptr* psVar2;
        uint8_t** ppuVar3;

        if (*(int*)&this[6]._vptr != 2) {
            if (arg2 == nullptr) {
                return (shared_ptr*)PTR_NullConfigType_100ee64c8;
            }
            ppuVar3 = &DataStatus::NOTLOADED;
            psVar2 = (shared_ptr*)PTR_NullConfigType_100ee64c8;
        LAB_1005d645b:
            *arg2 = (DataStatus*)*ppuVar3;
            return psVar2;
        }
        psVar2 = (shared_ptr*)FindConfigID(this, arg1);
        if (shared_ptr::operator_cast_to_bool(psVar2)) {
            if (arg2 == nullptr) {
                return psVar2;
            }
            ppuVar3 = &DataStatus::READY;
            goto LAB_1005d645b;
        }
        shared_ptr local_38;
        if (!(DecodeConfig(this, arg1, (shared_ptr<CursorType>*)&local_38))) {
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::MISSING;
            LAB_1005d64d1:
                *arg2 = (DataStatus*)*ppuVar3;
            }
        } else {
            if (shared_ptr::operator_cast_to_bool(&local_38)) {
                if (arg2 != nullptr) {
                    *arg2 = (DataStatus*)DataStatus::READY;
                }
                psVar2 = (shared_ptr*)AddConfigID((ReturnValue*)this, (shared_ptr<CursorType>*)&local_38, arg1);
                goto LAB_1005d64de;
            }
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_1005d64d1;
            }
        }
        psVar2 = (shared_ptr*)PTR_NullConfigType_100ee64c8;
    LAB_1005d64de:
        return psVar2;
    }

    // 0x1005d6510
    auto ConfigTypePreloadPackedContainer<CursorType>::DirectFetch(int arg1) {
        if (*(int*)&this[6]._vptr != 2) {
            LogAssert("m_loadStep == BaseLoadAllConfigTypeContainer::LoadStep::DONE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      179, nullptr);
        }
        auto result;
        if (DecodeConfig(this, arg1, &result) == '\0') {
            LogAssert("exists",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      183, nullptr);
        }
        return result;
    }

    // 0x1005d6720
    ConfigTypePreloadPackedContainer<CursorType>::~ConfigTypePreloadPackedContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee83f0;
        this[16]._vptr->PrintMetrics();
        CacheReset();
        ((this + 26))->~unique_ptr();
        ((this + 22))->~VBOMapper();
        ((this + 19))->~Array();
        ((this + 17))->~shared_ptr();
        ((this + 9))->~vector();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005d6810
    void ConfigTypePreloadPackedContainer<CursorType>::CheckGroupExistence(DownloadWaitHandler& downloadWaitHandler,
                                                                           Js5Index* js5Index, unsigned int arg3,
                                                                           unsigned int arg4) {
        int* piVar1;

        if (js5Index == nullptr) {
            LogAssert("js5Index",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      365, nullptr);
        }
        if (js5Index->DoesGroupExist(arg3) == '\0') {
            piVar1 = (int*)((long)&this[7]._vptr + 4);
            *piVar1 = *piVar1 + 1;
        } else {
            downloadWaitHandler.SetExists(arg4);
        }
    }

    // 0x1005d6890
    void ConfigTypePreloadPackedContainer<CursorType>::CheckDecodeProgress(const Js5ArchiveSettings& js5ArchiveSettings,
                                                                           Js5Index* js5Index, unsigned int arg3,
                                                                           unsigned int arg4) {
        int iVar1;
        Array<unsigned char>* this_00;
        TextureAtlasReference* pTVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        void* pvVar4;
        PacketT<Array<unsigned char>>* this_02;
        void* pvVar5;
        size_t sVar6;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)this[1]._vptr->GetGroup(local_48, js5ArchiveSettings, arg3, (Priority*)Priority::HIGHEST, true,
                                              true) == DataStatus::READY) {
            this_00 = (Array<unsigned char>*)(*((this + 19)))[(unsigned long)arg4];
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            this_00->set_max_size(pTVar3->GetTextureAtlas(), 0);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*((this + 19)))[(unsigned long)arg4];
            pvVar4 = (void*)this_01->data();
            this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pvVar5 = (void*)this_02->GetDataPtr();
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            sVar6 = pTVar3->GetTextureAtlas();
            _memcpy(pvVar4, pvVar5, sVar6);
            iVar1 = js5Index->GetMaximumFileID(arg3);
            *(int*)((long)&this[7]._vptr + 4) = iVar1 + *(int*)((long)&this[7]._vptr + 4) + 1;
            ((DownloadWaitHandler*)(*((this + 26))).operator->())->Completed(arg4);
        }
    }

    // 0x1005d6a30
    void ConfigTypePreloadPackedContainer<CursorType>::PageList::ClearPageList(SimpleAllocator& simpleAllocator) {
        ConfigPage* this_00;
        uint64_t* puVar1;

        unsigned long arg1 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1];
            this_00 = (ConfigPage*)*puVar1;
            if (this_00 != nullptr) {
                this_00->Clear();
                simpleAllocator.DeAllocate((this_00 + 4104));
                *puVar1 = 0;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005d6b10
    void ConfigTypePreloadPackedContainer<CursorType>::ConfigPage::Clear() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1];
            if (this_00->end() != 0) {
                this_00->reset();
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005d6c40
    ConfigTypePreloadPackedContainer<CursorType>*
    ConfigTypePreloadPackedContainer<CursorType>::FindConfigID(int arg1) const {
        unsigned int uVar2;
        shared_ptr* this_00;
        long lVar3;
        unique_ptr<ConfigTypePreloadPackedContainer<CursorType>::PageList>* puVar4;
        unsigned long uVar5;
        array<ConfigTypePreloadPackedContainer<CursorType>::ConfigPage*, 256ul>* this_01;
        long* plVar6;
        ConfigTypePreloadPackedContainer<CursorType>* pCVar7;
        unsigned long arg1_00;
        unsigned int uVar8;
        ConfigTypePreloadPackedContainer<CursorType> _vtbl* this_02;
        vector<eastl::pair<int, int>>* this_03;

        if (arg1 == -1) {
            pCVar7 = this + 17;
        } else {
            if (*(int*)&this[13]._vptr == arg1) {
                if (this[14]._vptr != nullptr) {
                    this_00 = (shared_ptr*)(*this[14]._vptr)[(unsigned long)*(unsigned int*)&this[15]._vptr];
                    if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                        this_02 = this[14]._vptr;
                        uVar8 = *(unsigned int*)&this[15]._vptr;
                    LAB_1005d6d62:
                        pCVar7 = (ConfigTypePreloadPackedContainer<CursorType>*)(*this_02)[(unsigned long)uVar8];
                        return pCVar7;
                    }
                }
                uVar8 = *(unsigned int*)&this[13]._vptr;
                uVar2 = this[3]._vptr->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigTypePreloadPackedContainer.h",
                                507, "Previously loaded config ID %d (archive ID %u) unexpectedly missing",
                                (unsigned long)uVar8, (unsigned long)uVar2);
            }
            this_03 = (vector<eastl::pair<int, int>>*)(this + 9);
            lVar3 = this_03->size();
            pCVar7 = (ConfigTypePreloadPackedContainer<CursorType>*)PTR_NullConfigType_100ee64c8;
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<CursorType>::PageList>*)(*this_03)[arg1_00];
                    lVar3 = (*puVar4).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == (arg1 & 4294901760U)) {
                        puVar4 =
                            (unique_ptr<ConfigTypePreloadPackedContainer<CursorType>::PageList>*)(*this_03)[arg1_00];
                        this_01 = (array<ConfigTypePreloadPackedContainer<CursorType>::ConfigPage*, 256ul>*)(*puVar4)
                                      .operator->();
                        plVar6 = (long*)(*this_01)[(unsigned long)((unsigned int)arg1 >> 8 & 255)];
                        this_02 = (ConfigTypePreloadPackedContainer<CursorType> _vtbl*)*plVar6;
                        if (this_02 == nullptr) {
                            return pCVar7;
                        }
                        uVar8 = arg1 & 255;
                        goto LAB_1005d6d62;
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar5 = this_03->size();
                } while (arg1_00 < uVar5);
            }
        }
        return pCVar7;
    }

    // 0x1005d6d80
    uint64_t ConfigTypePreloadPackedContainer<CursorType>::DecodeConfig(int arg1, shared_ptr<CursorType>& cursorType) {
        PacketT<Array<unsigned char>>* arg1_00;
        ConfigTypePreloadPackedContainer<CursorType> _vtbl* pCVar1;
        unsigned int arg1_01;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        uint8_t* puVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        void* pvVar8;
        Array<unsigned char>* this_00;
        void* pvVar9;
        size_t sVar10;
        uint64_t uVar11;
        long* plVar12;
        unsigned long arg1_03;
        Array<Array<unsigned char>>* this_01;
        shared_ptr<CursorType> local_50;
        Js5Index* local_40;

        cursorType = *PTR_NullConfigType_100ee64c8;
        if (arg1 < 0) {
            MakeSharedPool<CursorType, 64>::MakeShared<BaseTemplateConfigTypeList<CursorType>*&, int&>(
                (BaseTemplateConfigTypeList<CursorType>**)&local_50, (int*)(this + 1));
            cursorType = local_50;
        LAB_1005d6f0b:
        LAB_1005d6f14:
            uVar11 = 1;
        } else {
            arg1_01 = this[1]._vptr->GetClientGroupID(arg1);
            uVar3 = this[1]._vptr->GetClientFileID(arg1);
            local_40 = nullptr;
            puVar6 =
                (uint8_t*)(**(void (**)(...))((this[2]._vptr)->_dtor + 24))(this[2]._vptr, &local_40, this[3]._vptr);
            if (puVar6 != DataStatus::MISSING) {
                if (local_40->DoesFileExist(arg1_01, uVar3) != '\0') {
                    if (puVar6 == DataStatus::READY) {
                        uVar3 = local_40->GetFileIndex(arg1_01, uVar3);
                        uVar4 = this[1]._vptr->GetUIHeight();
                        arg1_03 = 0;
                        if (1 < uVar4) {
                            arg1_03 = (unsigned long)arg1_01;
                        }
                        iVar5 = local_40->GetFileCount(arg1_01);
                        arg1_00 = (PacketT<Array<unsigned char>>*)(this + 22);
                        this_01 = (Array<Array<unsigned char>>*)(this + 19);
                        pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                        if (iVar5 == 1) {
                            arg1_00->Reserve(pvVar7->end());
                            arg1_00->SetPos(0);
                            pvVar8 = (void*)arg1_00->GetDataPtr();
                            this_00 = (Array<unsigned char>*)(*this_01)[arg1_03];
                            pvVar9 = (void*)(*this_00)[0];
                            pvVar7 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                            sVar10 = pvVar7->end();
                            _memcpy(pvVar8, pvVar9, sVar10);
                        } else {
                            Js5DiskFileFormat::GetGroupFileData((PacketT<Array<unsigned char> _>*)arg1_00,
                                                                (Array<unsigned char>*)pvVar7, uVar3);
                        }
                        MakeSharedPool<CursorType, 64>::MakeShared<BaseTemplateConfigTypeList<CursorType>*&, int&>(
                            (BaseTemplateConfigTypeList<CursorType>**)&local_50, (int*)(this + 1));
                        plVar12 = (long*)local_50.operator->();
                        puVar6 = (uint8_t*)(**(void (**)(...))(*plVar12 + 32))(plVar12, arg1_00);
                        if (puVar6 == DataStatus::READY) {
                            plVar12 = (long*)local_50.operator->();
                            (**(void (**)(...))(*plVar12 + 24))(plVar12);
                            pCVar1 = this[1]._vptr;
                            puVar6 = (uint8_t*)(**(void (**)(...))(pCVar1->_dtor + 72))(pCVar1, &local_50);
                            if (puVar6 == DataStatus::READY) {
                                cursorType = local_50;
                            }
                        }
                        goto LAB_1005d6f0b;
                    }
                    goto LAB_1005d6f14;
                }
            }
            uVar11 = 0;
        }
        return uVar11;
    }

    // 0x1005d6fc0
    auto ConfigTypePreloadPackedContainer<CursorType>::AddConfigID(const shared_ptr<CursorType>& cursorType, int arg2) {
        auto result;
        unsigned long uVar1;
        unique_ptr<ConfigTypePreloadPackedContainer<CursorType>::PageList>* puVar2;
        long lVar3;
        array<ConfigTypePreloadPackedContainer<CursorType>::ConfigPage*, 256ul>* paVar4;
        ReturnValue* pRVar5;
        ReturnValue this;
        ReturnValue* pRVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue local_48;
        unsigned int local_38;
        unsigned int local_34;

        if (arg2 == -1) {
            pRVar6 = &result + 17;
            *pRVar6 = cursorType;
        } else {
            local_34 = arg2 & 4294901760;
            pRVar6 = &result + 9;
            uVar1 = pRVar6->size();
            arg1 = 0;
            if (uVar1 != 0) {
                do {
                    puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<CursorType>::PageList>*)(*pRVar6)[arg1];
                    lVar3 = (*puVar2).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == local_34)
                        break;
                    arg1 = (unsigned long)((int)arg1 + 1);
                } while (arg1 < uVar1);
            }
            if (uVar1 == arg1) {
                local_48 =
                    std::make_unique<ConfigTypePreloadPackedContainer<CursorType>::PageList, unsigned int&>(local_34);
                eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<CursorType>::PageList>>::emplace_back<
                    std::unique_ptr<ConfigTypePreloadPackedContainer<CursorType>::PageList>>(
                    (vector<std::unique_ptr<ConfigTypePreloadPackedContainer<CursorType>::PageList>>*)pRVar6,
                    (unique_ptr<
                        ConfigTypePreloadPackedContainer<CursorType>::PageList,
                        std::default_delete<ConfigTypePreloadPackedContainer<CursorType>::PageList> _>*)&local_48);
            }
            uVar1 = (unsigned long)(arg2 - local_34 >> 8);
            puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<CursorType>::PageList>*)(*pRVar6)[arg1];
            paVar4 = (array<ConfigTypePreloadPackedContainer<CursorType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
            pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
            this = *pRVar5;
            uVar7 = arg2 & 255U;
            if (this == (ReturnValue)0) {
                local_38 = arg2 & 255U;
                this = (ReturnValue)AllocatePageBuffer(&result);
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<CursorType>::PageList>*)(*pRVar6)[arg1];
                paVar4 =
                    (array<ConfigTypePreloadPackedContainer<CursorType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
                pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
                *pRVar5 = this;
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<CursorType>::PageList>*)(*pRVar6)[arg1];
                lVar3 = (*puVar2).operator->();
                if (*(unsigned int*)(lVar3 + 2048) != local_34) {
                    LogAssert("m_pageListContainer[thisPageList]->m_pageListID == pageListID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigTypePreloadPackedContainer.h",
                              469, nullptr);
                }
                uVar7 = local_38;
            }
            pRVar6 = (ReturnValue*)(*this)[(unsigned long)uVar7];
            *pRVar6 = cursorType;
            *(int*)((long)this + 4096) = *(int*)((long)this + 4096) + 1;
            *(int*)(&result + 13) = arg2;
            &result[14] = this;
            *(unsigned int*)(&result + 15) = uVar7;
        }
        return pRVar6;
    }

    // 0x1005d7330
    ConfigPage* ConfigTypePreloadPackedContainer<CursorType>::AllocatePageBuffer() {
        AllocatedBlock local_28 = this[16]._vptr->Allocate(4128);
        void* pvVar1 = local_28.field_8;
        if (local_28.field_8 == nullptr) {
            LogAssert("block.m_address != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      534, nullptr);
        }
        new (local_28.field_8) ConfigPage();
        *(unsigned long*)((long)pvVar1 + 4120) = local_28.field_16;
        *(uint64_t*)((long)pvVar1 + 4104) = local_28._0_8_;
        *(void**)((long)pvVar1 + 4112) = local_28.field_8;
        return pvVar1;
    }

    // 0x1005d76d0
    ConfigTypePreloadPackedContainer<CursorType>::PageList::PageList(unsigned int arg1) {
        uint64_t* puVar1;

        *(unsigned int*)(this + 2048) = arg1;
        *(uint32_t*)(this + 2052) = 0;
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1_00];
            *puVar1 = 0;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
    }

    // 0x1005d7780
    ConfigTypePreloadPackedContainer<CursorType>::ConfigPage::ConfigPage()
        : std::array<shared_ptr<CursorType>, 256ul>() {
        *(uint32_t*)(this + 4096) = 0;
        new ((this + 4104)) SimpleAllocator::AllocatedBlock();
    }

    // 0x1005db3d0
    ConfigTypePreloadPackedContainer<WorldAreaType>::ConfigTypePreloadPackedContainer(
        BaseTemplateConfigTypeList<WorldAreaType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<WorldAreaType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                                 js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8430;
        new ((this + 9)) eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<WorldAreaType>::PageList>>();
        new ((this + 17)) shared_ptr();
        new ((this + 19)) Array<Array<unsigned char>>();
        new ((this + 22)) PacketT();
        ((this + 26))->unique_ptr<true, void>();
    }

    // 0x1005db530
    _x7e___2* ConfigTypePreloadPackedContainer<WorldAreaType>::LoadList() {
        unique_ptr* this_00;
        bool bVar2;
        bool cVar3;
        DownloadWaitHandler* pDVar6;
        CoordMapSquare* pCVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        ConfigTypePreloadPackedContainer<WorldAreaType> _vtbl* local_48;

        if (*(int*)&this[6]._vptr == 2) {
            return (_x7e___2*)DataStatus::READY;
        }
        ConfigTypePreloadPackedContainer<WorldAreaType> _vtbl* pCVar1 = this[2]._vptr;
        ConfigTypePreloadPackedContainer<WorldAreaType> _vtbl* js5ArchiveSettings = this[3]._vptr;
        Js5Index* local_40 = nullptr;
        _x7e___2* p_Var5 = (_x7e___2*)(**(void (**)(...))(pCVar1->_dtor + 24))(pCVar1, &local_40, js5ArchiveSettings);
        if (p_Var5 != (_x7e___2*)DataStatus::READY) {
            return p_Var5;
        }
        unsigned int local_34 = this[1]._vptr->GetUIHeight();
        int iVar4 = this[1]._vptr->GetStreamCountLastMix();
        *(unsigned int*)&this[8]._vptr = iVar4 + local_34;
        if (*(int*)&this[6]._vptr == 0) {
            this_00 = (unique_ptr*)(this + 26);
            local_48 = js5ArchiveSettings;
            cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar3) {
                LogAssert("!m_downloadHandler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "ConfigTypePreloadPackedContainer.h",
                          213, nullptr);
            }
            local_50 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_34);
            *this_00 = local_50;
            pDVar6 = (DownloadWaitHandler*)**this_00;
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                CheckGroupExistence(this, pDVar6, local_40, uVar8, 0);
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    CheckGroupExistence(this, pDVar6, local_40, uVar8, uVar8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            ((this + 19))->set_max_size((unsigned long)local_34, 0);
            *(uint32_t*)&this[6]._vptr = 1;
            iVar4 = *(int*)&this[6]._vptr;
            js5ArchiveSettings = local_48;
        } else {
            iVar4 = *(int*)&this[6]._vptr;
        }
        if (iVar4 != 1) {
            return (_x7e___2*)DataStatus::READY;
        }
        pDVar6 = (DownloadWaitHandler*)*(*((this + 26)));
        if ((this[1]._vptr != nullptr) && (cVar3 = (**(void (**)(...))(pCVar1->_dtor + 64))(pCVar1), cVar3)) {
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                cVar3 = pDVar6->IsComplete(0);
                if ((!cVar3) && (cVar3 = pDVar6->CanCheck(0), cVar3)) {
                    CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, 0);
                }
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    cVar3 = pDVar6->IsComplete(uVar8);
                    if ((!cVar3) && (cVar3 = pDVar6->CanCheck(uVar8), cVar3)) {
                        CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, uVar8);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            if (*(unsigned int*)&this[8]._vptr <= *(unsigned int*)((long)&this[7]._vptr + 4)) {
                ((this + 26))->reset(nullptr);
                *(uint32_t*)&this[6]._vptr = 2;
                p_Var5 = (_x7e___2*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->_x7e___2 = p_Var5;
                bVar2 = true;
                goto LAB_1005db7a6;
            }
        }
        bVar2 = false;
        p_Var5 = (_x7e___2*)DataStatus::NOTLOADED;
    LAB_1005db7a6:
        if (bVar2) {
            return (_x7e___2*)DataStatus::READY;
        }
        return p_Var5;
    }

    // 0x1005db7f0
    void ConfigTypePreloadPackedContainer<WorldAreaType>::CacheReset() {
        unique_ptr<ConfigTypePreloadPackedContainer<WorldAreaType>::PageList>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (unique_ptr<ConfigTypePreloadPackedContainer<WorldAreaType>::PageList>*)(*this_00)[arg1];
                ((PageList*)this_01->get())->ClearPageList(*this[16]._vptr);
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        this_00->clear();
        this[14]._vptr = nullptr;
        *(uint32_t*)&this[15]._vptr = 0;
        *(uint32_t*)&this[13]._vptr = 4294967295;
    }

    // 0x1005db880
    void ConfigTypePreloadPackedContainer<WorldAreaType>::CacheClean(unsigned int arg1) {
        LoadList** ppLVar1;
        ConfigTypePreloadPackedContainer<WorldAreaType> _vtbl* this_01;
        unsigned long uVar4;
        unique_ptr<ConfigTypePreloadPackedContainer<WorldAreaType>::PageList>* this_02;
        array<ConfigTypePreloadPackedContainer<WorldAreaType>::ConfigPage*, 256ul>* this_03;
        uint64_t* puVar5;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_04;
        unsigned long arg1_00;
        unsigned int uVar6;
        int iVar7;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_02 = (unique_ptr<ConfigTypePreloadPackedContainer<WorldAreaType>::PageList>*)(*this_00)[arg1_00];
                this_03 = (array<ConfigTypePreloadPackedContainer<WorldAreaType>::ConfigPage*, 256ul>*)this_02->get();
                uVar6 = *(unsigned int*)(this_03 + 2052);
                iVar7 = 16;
                do {
                    puVar5 = (uint64_t*)(*this_03)[(unsigned long)(uVar6 >> 8)];
                    this_01 = (ConfigTypePreloadPackedContainer<WorldAreaType> _vtbl*)*puVar5;
                    if (this_01 != nullptr) {
                        this_04 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*this_01)[(
                            unsigned long)(uVar6 & 255)];
                        if (this_04->unique() != '\0') {
                            this_04->reset();
                            if ((this_01 == this[14]._vptr) && ((uVar6 & 255) == *(unsigned int*)&this[15]._vptr)) {
                                this[14]._vptr = nullptr;
                                *(uint32_t*)&this[15]._vptr = 0;
                                *(uint32_t*)&this[13]._vptr = 4294967295;
                            }
                            ppLVar1 = &this_01[51].LoadList;
                            *(int*)ppLVar1 = *(int*)ppLVar1 - 1;
                            if (*(int*)ppLVar1 == 0) {
                                this[16]._vptr->DeAllocate(&this_01[51].CacheReset);
                                *puVar5 = 0;
                            }
                        }
                    }
                    uVar6 = uVar6 + 1 & 65535;
                    iVar7 = iVar7 - 1;
                } while (iVar7 != 0);
                *(unsigned int*)(this_03 + 2052) = uVar6;
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x1005db9f0
    shared_ptr* ConfigTypePreloadPackedContainer<WorldAreaType>::List(int arg1, const DataStatus** arg2) {
        shared_ptr* psVar2;
        uint8_t** ppuVar3;

        if (*(int*)&this[6]._vptr != 2) {
            if (arg2 == nullptr) {
                return (shared_ptr*)PTR_NullConfigType_100ee6508;
            }
            ppuVar3 = &DataStatus::NOTLOADED;
            psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6508;
        LAB_1005dba4b:
            *arg2 = (DataStatus*)*ppuVar3;
            return psVar2;
        }
        psVar2 = (shared_ptr*)FindConfigID(this, arg1);
        if (shared_ptr::operator_cast_to_bool(psVar2)) {
            if (arg2 == nullptr) {
                return psVar2;
            }
            ppuVar3 = &DataStatus::READY;
            goto LAB_1005dba4b;
        }
        shared_ptr local_38;
        if (!(DecodeConfig(this, arg1, (shared_ptr<WorldAreaType>*)&local_38))) {
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::MISSING;
            LAB_1005dbac1:
                *arg2 = (DataStatus*)*ppuVar3;
            }
        } else {
            if (shared_ptr::operator_cast_to_bool(&local_38)) {
                if (arg2 != nullptr) {
                    *arg2 = (DataStatus*)DataStatus::READY;
                }
                psVar2 = (shared_ptr*)AddConfigID((ReturnValue*)this, (shared_ptr<WorldAreaType>*)&local_38, arg1);
                goto LAB_1005dbace;
            }
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_1005dbac1;
            }
        }
        psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6508;
    LAB_1005dbace:
        return psVar2;
    }

    // 0x1005dbb00
    auto ConfigTypePreloadPackedContainer<WorldAreaType>::DirectFetch(int arg1) {
        if (*(int*)&this[6]._vptr != 2) {
            LogAssert("m_loadStep == BaseLoadAllConfigTypeContainer::LoadStep::DONE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      179, nullptr);
        }
        auto result;
        if (DecodeConfig(this, arg1, &result) == '\0') {
            LogAssert("exists",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      183, nullptr);
        }
        return result;
    }

    // 0x1005dbd10
    ConfigTypePreloadPackedContainer<WorldAreaType>::~ConfigTypePreloadPackedContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8430;
        this[16]._vptr->PrintMetrics();
        CacheReset();
        ((this + 26))->~unique_ptr();
        ((this + 22))->~VBOMapper();
        ((this + 19))->~Array();
        ((this + 17))->~shared_ptr();
        ((this + 9))->~vector();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005dbe00
    void ConfigTypePreloadPackedContainer<WorldAreaType>::CheckGroupExistence(DownloadWaitHandler& downloadWaitHandler,
                                                                              Js5Index* js5Index, unsigned int arg3,
                                                                              unsigned int arg4) {
        int* piVar1;

        if (js5Index == nullptr) {
            LogAssert("js5Index",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      365, nullptr);
        }
        if (js5Index->DoesGroupExist(arg3) == '\0') {
            piVar1 = (int*)((long)&this[7]._vptr + 4);
            *piVar1 = *piVar1 + 1;
        } else {
            downloadWaitHandler.SetExists(arg4);
        }
    }

    // 0x1005dbe80
    void ConfigTypePreloadPackedContainer<WorldAreaType>::CheckDecodeProgress(
        const Js5ArchiveSettings& js5ArchiveSettings, Js5Index* js5Index, unsigned int arg3, unsigned int arg4) {
        int iVar1;
        Array<unsigned char>* this_00;
        TextureAtlasReference* pTVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        void* pvVar4;
        PacketT<Array<unsigned char>>* this_02;
        void* pvVar5;
        size_t sVar6;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)this[1]._vptr->GetGroup(local_48, js5ArchiveSettings, arg3, (Priority*)Priority::HIGHEST, true,
                                              true) == DataStatus::READY) {
            this_00 = (Array<unsigned char>*)(*((this + 19)))[(unsigned long)arg4];
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            this_00->set_max_size(pTVar3->GetTextureAtlas(), 0);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*((this + 19)))[(unsigned long)arg4];
            pvVar4 = (void*)this_01->data();
            this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pvVar5 = (void*)this_02->GetDataPtr();
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            sVar6 = pTVar3->GetTextureAtlas();
            _memcpy(pvVar4, pvVar5, sVar6);
            iVar1 = js5Index->GetMaximumFileID(arg3);
            *(int*)((long)&this[7]._vptr + 4) = iVar1 + *(int*)((long)&this[7]._vptr + 4) + 1;
            ((DownloadWaitHandler*)(*((this + 26))).operator->())->Completed(arg4);
        }
    }

    // 0x1005dc020
    void ConfigTypePreloadPackedContainer<WorldAreaType>::PageList::ClearPageList(SimpleAllocator& simpleAllocator) {
        ConfigPage* this_00;
        uint64_t* puVar1;

        unsigned long arg1 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1];
            this_00 = (ConfigPage*)*puVar1;
            if (this_00 != nullptr) {
                this_00->Clear();
                simpleAllocator.DeAllocate((this_00 + 4104));
                *puVar1 = 0;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005dc100
    void ConfigTypePreloadPackedContainer<WorldAreaType>::ConfigPage::Clear() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1];
            if (this_00->end() != 0) {
                this_00->reset();
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005dc190
    ConfigTypePreloadPackedContainer<WorldAreaType>*
    ConfigTypePreloadPackedContainer<WorldAreaType>::FindConfigID(int arg1) const {
        unsigned int uVar2;
        shared_ptr* this_00;
        long lVar3;
        unique_ptr<ConfigTypePreloadPackedContainer<WorldAreaType>::PageList>* puVar4;
        unsigned long uVar5;
        array<ConfigTypePreloadPackedContainer<WorldAreaType>::ConfigPage*, 256ul>* this_01;
        long* plVar6;
        ConfigTypePreloadPackedContainer<WorldAreaType>* pCVar7;
        unsigned long arg1_00;
        unsigned int uVar8;
        ConfigTypePreloadPackedContainer<WorldAreaType> _vtbl* this_02;
        vector<eastl::pair<int, int>>* this_03;

        if (arg1 == -1) {
            pCVar7 = this + 17;
        } else {
            if (*(int*)&this[13]._vptr == arg1) {
                if (this[14]._vptr != nullptr) {
                    this_00 = (shared_ptr*)(*this[14]._vptr)[(unsigned long)*(unsigned int*)&this[15]._vptr];
                    if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                        this_02 = this[14]._vptr;
                        uVar8 = *(unsigned int*)&this[15]._vptr;
                    LAB_1005dc2b2:
                        pCVar7 = (ConfigTypePreloadPackedContainer<WorldAreaType>*)(*this_02)[(unsigned long)uVar8];
                        return pCVar7;
                    }
                }
                uVar8 = *(unsigned int*)&this[13]._vptr;
                uVar2 = this[3]._vptr->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigTypePreloadPackedContainer.h",
                                507, "Previously loaded config ID %d (archive ID %u) unexpectedly missing",
                                (unsigned long)uVar8, (unsigned long)uVar2);
            }
            this_03 = (vector<eastl::pair<int, int>>*)(this + 9);
            lVar3 = this_03->size();
            pCVar7 = (ConfigTypePreloadPackedContainer<WorldAreaType>*)PTR_NullConfigType_100ee6508;
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    puVar4 =
                        (unique_ptr<ConfigTypePreloadPackedContainer<WorldAreaType>::PageList>*)(*this_03)[arg1_00];
                    lVar3 = (*puVar4).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == (arg1 & 4294901760U)) {
                        puVar4 =
                            (unique_ptr<ConfigTypePreloadPackedContainer<WorldAreaType>::PageList>*)(*this_03)[arg1_00];
                        this_01 = (array<ConfigTypePreloadPackedContainer<WorldAreaType>::ConfigPage*, 256ul>*)(*puVar4)
                                      .operator->();
                        plVar6 = (long*)(*this_01)[(unsigned long)((unsigned int)arg1 >> 8 & 255)];
                        this_02 = (ConfigTypePreloadPackedContainer<WorldAreaType> _vtbl*)*plVar6;
                        if (this_02 == nullptr) {
                            return pCVar7;
                        }
                        uVar8 = arg1 & 255;
                        goto LAB_1005dc2b2;
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar5 = this_03->size();
                } while (arg1_00 < uVar5);
            }
        }
        return pCVar7;
    }

    // 0x1005dc2d0
    uint64_t ConfigTypePreloadPackedContainer<WorldAreaType>::DecodeConfig(int arg1,
                                                                           shared_ptr<WorldAreaType>& worldAreaType) {
        PacketT<Array<unsigned char>>* arg1_00;
        ConfigTypePreloadPackedContainer<WorldAreaType> _vtbl* pCVar1;
        unsigned int arg1_01;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        uint8_t* puVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        void* pvVar8;
        Array<unsigned char>* this_00;
        void* pvVar9;
        size_t sVar10;
        uint64_t uVar11;
        long* plVar12;
        unsigned long arg1_03;
        Array<Array<unsigned char>>* this_01;
        shared_ptr<WorldAreaType> local_50;
        Js5Index* local_40;

        worldAreaType = *PTR_NullConfigType_100ee6508;
        if (arg1 < 0) {
            MakeSharedPool<WorldAreaType, 1024>::MakeShared<BaseTemplateConfigTypeList<WorldAreaType>*&, int&>(
                (BaseTemplateConfigTypeList<WorldAreaType>**)&local_50, (int*)(this + 1));
            worldAreaType = local_50;
        LAB_1005dc45b:
        LAB_1005dc464:
            uVar11 = 1;
        } else {
            arg1_01 = this[1]._vptr->GetClientGroupID(arg1);
            uVar3 = this[1]._vptr->GetClientFileID(arg1);
            local_40 = nullptr;
            puVar6 =
                (uint8_t*)(**(void (**)(...))((this[2]._vptr)->_dtor + 24))(this[2]._vptr, &local_40, this[3]._vptr);
            if (puVar6 != DataStatus::MISSING) {
                if (local_40->DoesFileExist(arg1_01, uVar3) != '\0') {
                    if (puVar6 == DataStatus::READY) {
                        uVar3 = local_40->GetFileIndex(arg1_01, uVar3);
                        uVar4 = this[1]._vptr->GetUIHeight();
                        arg1_03 = 0;
                        if (1 < uVar4) {
                            arg1_03 = (unsigned long)arg1_01;
                        }
                        iVar5 = local_40->GetFileCount(arg1_01);
                        arg1_00 = (PacketT<Array<unsigned char>>*)(this + 22);
                        this_01 = (Array<Array<unsigned char>>*)(this + 19);
                        pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                        if (iVar5 == 1) {
                            arg1_00->Reserve(pvVar7->end());
                            arg1_00->SetPos(0);
                            pvVar8 = (void*)arg1_00->GetDataPtr();
                            this_00 = (Array<unsigned char>*)(*this_01)[arg1_03];
                            pvVar9 = (void*)(*this_00)[0];
                            pvVar7 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                            sVar10 = pvVar7->end();
                            _memcpy(pvVar8, pvVar9, sVar10);
                        } else {
                            Js5DiskFileFormat::GetGroupFileData((PacketT<Array<unsigned char> _>*)arg1_00,
                                                                (Array<unsigned char>*)pvVar7, uVar3);
                        }
                        MakeSharedPool<WorldAreaType, 1024>::MakeShared<BaseTemplateConfigTypeList<WorldAreaType>*&,
                                                                        int&>(
                            (BaseTemplateConfigTypeList<WorldAreaType>**)&local_50, (int*)(this + 1));
                        plVar12 = (long*)local_50.operator->();
                        puVar6 = (uint8_t*)(**(void (**)(...))(*plVar12 + 32))(plVar12, arg1_00);
                        if (puVar6 == DataStatus::READY) {
                            plVar12 = (long*)local_50.operator->();
                            (**(void (**)(...))(*plVar12 + 24))(plVar12);
                            pCVar1 = this[1]._vptr;
                            puVar6 = (uint8_t*)(**(void (**)(...))(pCVar1->_dtor + 72))(pCVar1, &local_50);
                            if (puVar6 == DataStatus::READY) {
                                worldAreaType = local_50;
                            }
                        }
                        goto LAB_1005dc45b;
                    }
                    goto LAB_1005dc464;
                }
            }
            uVar11 = 0;
        }
        return uVar11;
    }

    // 0x1005dc510
    auto ConfigTypePreloadPackedContainer<WorldAreaType>::AddConfigID(const shared_ptr<WorldAreaType>& worldAreaType,
                                                                      int arg2) {
        auto result;
        unsigned long uVar1;
        unique_ptr<ConfigTypePreloadPackedContainer<WorldAreaType>::PageList>* puVar2;
        long lVar3;
        array<ConfigTypePreloadPackedContainer<WorldAreaType>::ConfigPage*, 256ul>* paVar4;
        ReturnValue* pRVar5;
        ReturnValue this;
        ReturnValue* pRVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue local_48;
        unsigned int local_38;
        unsigned int local_34;

        if (arg2 == -1) {
            pRVar6 = &result + 17;
            *pRVar6 = worldAreaType;
        } else {
            local_34 = arg2 & 4294901760;
            pRVar6 = &result + 9;
            uVar1 = pRVar6->size();
            arg1 = 0;
            if (uVar1 != 0) {
                do {
                    puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<WorldAreaType>::PageList>*)(*pRVar6)[arg1];
                    lVar3 = (*puVar2).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == local_34)
                        break;
                    arg1 = (unsigned long)((int)arg1 + 1);
                } while (arg1 < uVar1);
            }
            if (uVar1 == arg1) {
                local_48 = std::make_unique<ConfigTypePreloadPackedContainer<WorldAreaType>::PageList, unsigned int&>(
                    local_34);
                eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<WorldAreaType>::PageList>>::emplace_back<
                    std::unique_ptr<ConfigTypePreloadPackedContainer<WorldAreaType>::PageList>>(
                    (vector<std::unique_ptr<ConfigTypePreloadPackedContainer<WorldAreaType>::PageList>>*)pRVar6,
                    (unique_ptr<
                        ConfigTypePreloadPackedContainer<WorldAreaType>::PageList,
                        std::default_delete<ConfigTypePreloadPackedContainer<WorldAreaType>::PageList> _>*)&local_48);
            }
            uVar1 = (unsigned long)(arg2 - local_34 >> 8);
            puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<WorldAreaType>::PageList>*)(*pRVar6)[arg1];
            paVar4 =
                (array<ConfigTypePreloadPackedContainer<WorldAreaType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
            pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
            this = *pRVar5;
            uVar7 = arg2 & 255U;
            if (this == (ReturnValue)0) {
                local_38 = arg2 & 255U;
                this = (ReturnValue)AllocatePageBuffer((ConfigTypePreloadPackedContainer<WorldAreaType>*)&result);
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<WorldAreaType>::PageList>*)(*pRVar6)[arg1];
                paVar4 =
                    (array<ConfigTypePreloadPackedContainer<WorldAreaType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
                pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
                *pRVar5 = this;
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<WorldAreaType>::PageList>*)(*pRVar6)[arg1];
                lVar3 = (*puVar2).operator->();
                if (*(unsigned int*)(lVar3 + 2048) != local_34) {
                    LogAssert("m_pageListContainer[thisPageList]->m_pageListID == pageListID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigTypePreloadPackedContainer.h",
                              469, nullptr);
                }
                uVar7 = local_38;
            }
            pRVar6 = (ReturnValue*)(*this)[(unsigned long)uVar7];
            *pRVar6 = worldAreaType;
            *(int*)((long)this + 4096) = *(int*)((long)this + 4096) + 1;
            *(int*)(&result + 13) = arg2;
            &result[14] = this;
            *(unsigned int*)(&result + 15) = uVar7;
        }
        return pRVar6;
    }

    // 0x1005dc840
    ConfigPage* ConfigTypePreloadPackedContainer<WorldAreaType>::AllocatePageBuffer() {
        AllocatedBlock local_28 = this[16]._vptr->Allocate(4128);
        void* pvVar1 = local_28.field_8;
        if (local_28.field_8 == nullptr) {
            LogAssert("block.m_address != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      534, nullptr);
        }
        new (local_28.field_8) ConfigPage();
        *(unsigned long*)((long)pvVar1 + 4120) = local_28.field_16;
        *(uint64_t*)((long)pvVar1 + 4104) = local_28._0_8_;
        *(void**)((long)pvVar1 + 4112) = local_28.field_8;
        return pvVar1;
    }

    // 0x1005dcbe0
    ConfigTypePreloadPackedContainer<WorldAreaType>::PageList::PageList(unsigned int arg1) {
        uint64_t* puVar1;

        *(unsigned int*)(this + 2048) = arg1;
        *(uint32_t*)(this + 2052) = 0;
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1_00];
            *puVar1 = 0;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
    }

    // 0x1005dcc90
    ConfigTypePreloadPackedContainer<WorldAreaType>::ConfigPage::ConfigPage()
        : std::array<shared_ptr<WorldAreaType>, 256ul>() {
        *(uint32_t*)(this + 4096) = 0;
        new ((this + 4104)) SimpleAllocator::AllocatedBlock();
    }

    // 0x1005e1710
    ConfigTypePreloadPackedContainer<EnumType>::ConfigTypePreloadPackedContainer(
        BaseTemplateConfigTypeList<EnumType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<EnumType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                            js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee84a8;
        new ((this + 9)) eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<EnumType>::PageList>>();
        new ((this + 17)) shared_ptr();
        new ((this + 19)) Array<Array<unsigned char>>();
        new ((this + 22)) PacketT();
        ((this + 26))->unique_ptr<true, void>();
    }

    // 0x1005e1870
    _x7e___2* ConfigTypePreloadPackedContainer<EnumType>::LoadList() {
        unique_ptr* this_00;
        bool bVar2;
        bool cVar3;
        DownloadWaitHandler* pDVar6;
        CoordMapSquare* pCVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        ConfigTypePreloadPackedContainer<EnumType> _vtbl* local_48;

        if (*(int*)&this[6]._vptr == 2) {
            return (_x7e___2*)DataStatus::READY;
        }
        ConfigTypePreloadPackedContainer<EnumType> _vtbl* pCVar1 = this[2]._vptr;
        ConfigTypePreloadPackedContainer<EnumType> _vtbl* js5ArchiveSettings = this[3]._vptr;
        Js5Index* local_40 = nullptr;
        _x7e___2* p_Var5 = (_x7e___2*)(**(void (**)(...))(pCVar1->_dtor + 24))(pCVar1, &local_40, js5ArchiveSettings);
        if (p_Var5 != (_x7e___2*)DataStatus::READY) {
            return p_Var5;
        }
        unsigned int local_34 = this[1]._vptr->GetUIHeight();
        int iVar4 = this[1]._vptr->GetStreamCountLastMix();
        *(unsigned int*)&this[8]._vptr = iVar4 + local_34;
        if (*(int*)&this[6]._vptr == 0) {
            this_00 = (unique_ptr*)(this + 26);
            local_48 = js5ArchiveSettings;
            cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar3) {
                LogAssert("!m_downloadHandler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "ConfigTypePreloadPackedContainer.h",
                          213, nullptr);
            }
            local_50 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_34);
            *this_00 = local_50;
            pDVar6 = (DownloadWaitHandler*)**this_00;
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                CheckGroupExistence(this, pDVar6, local_40, uVar8, 0);
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    CheckGroupExistence(this, pDVar6, local_40, uVar8, uVar8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            ((this + 19))->set_max_size((unsigned long)local_34, 0);
            *(uint32_t*)&this[6]._vptr = 1;
            iVar4 = *(int*)&this[6]._vptr;
            js5ArchiveSettings = local_48;
        } else {
            iVar4 = *(int*)&this[6]._vptr;
        }
        if (iVar4 != 1) {
            return (_x7e___2*)DataStatus::READY;
        }
        pDVar6 = (DownloadWaitHandler*)*(*((this + 26)));
        if ((this[1]._vptr != nullptr) && (cVar3 = (**(void (**)(...))(pCVar1->_dtor + 64))(pCVar1), cVar3)) {
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                cVar3 = pDVar6->IsComplete(0);
                if ((!cVar3) && (cVar3 = pDVar6->CanCheck(0), cVar3)) {
                    CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, 0);
                }
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    cVar3 = pDVar6->IsComplete(uVar8);
                    if ((!cVar3) && (cVar3 = pDVar6->CanCheck(uVar8), cVar3)) {
                        CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, uVar8);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            if (*(unsigned int*)&this[8]._vptr <= *(unsigned int*)((long)&this[7]._vptr + 4)) {
                ((this + 26))->reset(nullptr);
                *(uint32_t*)&this[6]._vptr = 2;
                p_Var5 = (_x7e___2*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->_x7e___2 = p_Var5;
                bVar2 = true;
                goto LAB_1005e1ae6;
            }
        }
        bVar2 = false;
        p_Var5 = (_x7e___2*)DataStatus::NOTLOADED;
    LAB_1005e1ae6:
        if (bVar2) {
            return (_x7e___2*)DataStatus::READY;
        }
        return p_Var5;
    }

    // 0x1005e1b30
    void ConfigTypePreloadPackedContainer<EnumType>::CacheReset() {
        unique_ptr<ConfigTypePreloadPackedContainer<EnumType>::PageList>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (unique_ptr<ConfigTypePreloadPackedContainer<EnumType>::PageList>*)(*this_00)[arg1];
                ((PageList*)this_01->get())->ClearPageList(*this[16]._vptr);
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        this_00->clear();
        this[14]._vptr = nullptr;
        *(uint32_t*)&this[15]._vptr = 0;
        *(uint32_t*)&this[13]._vptr = 4294967295;
    }

    // 0x1005e1bc0
    void ConfigTypePreloadPackedContainer<EnumType>::CacheClean(unsigned int arg1) {
        LoadList** ppLVar1;
        ConfigTypePreloadPackedContainer<EnumType> _vtbl* this_01;
        unsigned long uVar4;
        unique_ptr<ConfigTypePreloadPackedContainer<EnumType>::PageList>* this_02;
        array<ConfigTypePreloadPackedContainer<EnumType>::ConfigPage*, 256ul>* this_03;
        uint64_t* puVar5;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_04;
        unsigned long arg1_00;
        unsigned int uVar6;
        int iVar7;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_02 = (unique_ptr<ConfigTypePreloadPackedContainer<EnumType>::PageList>*)(*this_00)[arg1_00];
                this_03 = (array<ConfigTypePreloadPackedContainer<EnumType>::ConfigPage*, 256ul>*)this_02->get();
                uVar6 = *(unsigned int*)(this_03 + 2052);
                iVar7 = 16;
                do {
                    puVar5 = (uint64_t*)(*this_03)[(unsigned long)(uVar6 >> 8)];
                    this_01 = (ConfigTypePreloadPackedContainer<EnumType> _vtbl*)*puVar5;
                    if (this_01 != nullptr) {
                        this_04 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*this_01)[(
                            unsigned long)(uVar6 & 255)];
                        if (this_04->unique() != '\0') {
                            this_04->reset();
                            if ((this_01 == this[14]._vptr) && ((uVar6 & 255) == *(unsigned int*)&this[15]._vptr)) {
                                this[14]._vptr = nullptr;
                                *(uint32_t*)&this[15]._vptr = 0;
                                *(uint32_t*)&this[13]._vptr = 4294967295;
                            }
                            ppLVar1 = &this_01[51].LoadList;
                            *(int*)ppLVar1 = *(int*)ppLVar1 - 1;
                            if (*(int*)ppLVar1 == 0) {
                                this[16]._vptr->DeAllocate(&this_01[51].CacheReset);
                                *puVar5 = 0;
                            }
                        }
                    }
                    uVar6 = uVar6 + 1 & 65535;
                    iVar7 = iVar7 - 1;
                } while (iVar7 != 0);
                *(unsigned int*)(this_03 + 2052) = uVar6;
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x1005e1d30
    shared_ptr* ConfigTypePreloadPackedContainer<EnumType>::List(int arg1, const DataStatus** arg2) {
        shared_ptr* psVar2;
        uint8_t** ppuVar3;

        if (*(int*)&this[6]._vptr != 2) {
            if (arg2 == nullptr) {
                return (shared_ptr*)PTR_NullConfigType_100ee6580;
            }
            ppuVar3 = &DataStatus::NOTLOADED;
            psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6580;
        LAB_1005e1d8b:
            *arg2 = (DataStatus*)*ppuVar3;
            return psVar2;
        }
        psVar2 = (shared_ptr*)FindConfigID(this, arg1);
        if (shared_ptr::operator_cast_to_bool(psVar2)) {
            if (arg2 == nullptr) {
                return psVar2;
            }
            ppuVar3 = &DataStatus::READY;
            goto LAB_1005e1d8b;
        }
        shared_ptr local_38;
        if (!(DecodeConfig(this, arg1, (shared_ptr<EnumType>*)&local_38))) {
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::MISSING;
            LAB_1005e1e01:
                *arg2 = (DataStatus*)*ppuVar3;
            }
        } else {
            if (shared_ptr::operator_cast_to_bool(&local_38)) {
                if (arg2 != nullptr) {
                    *arg2 = (DataStatus*)DataStatus::READY;
                }
                psVar2 = (shared_ptr*)AddConfigID((ReturnValue*)this, (shared_ptr<EnumType>*)&local_38, arg1);
                goto LAB_1005e1e0e;
            }
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_1005e1e01;
            }
        }
        psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6580;
    LAB_1005e1e0e:
        return psVar2;
    }

    // 0x1005e1e40
    auto ConfigTypePreloadPackedContainer<EnumType>::DirectFetch(int arg1) {
        if (*(int*)&this[6]._vptr != 2) {
            LogAssert("m_loadStep == BaseLoadAllConfigTypeContainer::LoadStep::DONE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      179, nullptr);
        }
        auto result;
        if (DecodeConfig(this, arg1, &result) == '\0') {
            LogAssert("exists",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      183, nullptr);
        }
        return result;
    }

    // 0x1005e2050
    ConfigTypePreloadPackedContainer<EnumType>::~ConfigTypePreloadPackedContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee84a8;
        this[16]._vptr->PrintMetrics();
        CacheReset();
        ((this + 26))->~unique_ptr();
        ((this + 22))->~VBOMapper();
        ((this + 19))->~Array();
        ((this + 17))->~shared_ptr();
        ((this + 9))->~vector();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005e2140
    void ConfigTypePreloadPackedContainer<EnumType>::CheckGroupExistence(DownloadWaitHandler& downloadWaitHandler,
                                                                         Js5Index* js5Index, unsigned int arg3,
                                                                         unsigned int arg4) {
        int* piVar1;

        if (js5Index == nullptr) {
            LogAssert("js5Index",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      365, nullptr);
        }
        if (js5Index->DoesGroupExist(arg3) == '\0') {
            piVar1 = (int*)((long)&this[7]._vptr + 4);
            *piVar1 = *piVar1 + 1;
        } else {
            downloadWaitHandler.SetExists(arg4);
        }
    }

    // 0x1005e21c0
    void ConfigTypePreloadPackedContainer<EnumType>::CheckDecodeProgress(const Js5ArchiveSettings& js5ArchiveSettings,
                                                                         Js5Index* js5Index, unsigned int arg3,
                                                                         unsigned int arg4) {
        int iVar1;
        Array<unsigned char>* this_00;
        TextureAtlasReference* pTVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        void* pvVar4;
        PacketT<Array<unsigned char>>* this_02;
        void* pvVar5;
        size_t sVar6;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)this[1]._vptr->GetGroup(local_48, js5ArchiveSettings, arg3, (Priority*)Priority::HIGHEST, true,
                                              true) == DataStatus::READY) {
            this_00 = (Array<unsigned char>*)(*((this + 19)))[(unsigned long)arg4];
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            this_00->set_max_size(pTVar3->GetTextureAtlas(), 0);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*((this + 19)))[(unsigned long)arg4];
            pvVar4 = (void*)this_01->data();
            this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pvVar5 = (void*)this_02->GetDataPtr();
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            sVar6 = pTVar3->GetTextureAtlas();
            _memcpy(pvVar4, pvVar5, sVar6);
            iVar1 = js5Index->GetMaximumFileID(arg3);
            *(int*)((long)&this[7]._vptr + 4) = iVar1 + *(int*)((long)&this[7]._vptr + 4) + 1;
            ((DownloadWaitHandler*)(*((this + 26))).operator->())->Completed(arg4);
        }
    }

    // 0x1005e2360
    void ConfigTypePreloadPackedContainer<EnumType>::PageList::ClearPageList(SimpleAllocator& simpleAllocator) {
        ConfigPage* this_00;
        uint64_t* puVar1;

        unsigned long arg1 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1];
            this_00 = (ConfigPage*)*puVar1;
            if (this_00 != nullptr) {
                this_00->Clear();
                simpleAllocator.DeAllocate((this_00 + 4104));
                *puVar1 = 0;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005e2440
    void ConfigTypePreloadPackedContainer<EnumType>::ConfigPage::Clear() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1];
            if (this_00->end() != 0) {
                this_00->reset();
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005e2570
    ConfigTypePreloadPackedContainer<EnumType>*
    ConfigTypePreloadPackedContainer<EnumType>::FindConfigID(int arg1) const {
        unsigned int uVar2;
        shared_ptr* this_00;
        long lVar3;
        unique_ptr<ConfigTypePreloadPackedContainer<EnumType>::PageList>* puVar4;
        unsigned long uVar5;
        array<ConfigTypePreloadPackedContainer<EnumType>::ConfigPage*, 256ul>* this_01;
        long* plVar6;
        ConfigTypePreloadPackedContainer<EnumType>* pCVar7;
        unsigned long arg1_00;
        unsigned int uVar8;
        ConfigTypePreloadPackedContainer<EnumType> _vtbl* this_02;
        vector<eastl::pair<int, int>>* this_03;

        if (arg1 == -1) {
            pCVar7 = this + 17;
        } else {
            if (*(int*)&this[13]._vptr == arg1) {
                if (this[14]._vptr != nullptr) {
                    this_00 = (shared_ptr*)(*this[14]._vptr)[(unsigned long)*(unsigned int*)&this[15]._vptr];
                    if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                        this_02 = this[14]._vptr;
                        uVar8 = *(unsigned int*)&this[15]._vptr;
                    LAB_1005e2692:
                        pCVar7 = (ConfigTypePreloadPackedContainer<EnumType>*)(*this_02)[(unsigned long)uVar8];
                        return pCVar7;
                    }
                }
                uVar8 = *(unsigned int*)&this[13]._vptr;
                uVar2 = this[3]._vptr->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigTypePreloadPackedContainer.h",
                                507, "Previously loaded config ID %d (archive ID %u) unexpectedly missing",
                                (unsigned long)uVar8, (unsigned long)uVar2);
            }
            this_03 = (vector<eastl::pair<int, int>>*)(this + 9);
            lVar3 = this_03->size();
            pCVar7 = (ConfigTypePreloadPackedContainer<EnumType>*)PTR_NullConfigType_100ee6580;
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<EnumType>::PageList>*)(*this_03)[arg1_00];
                    lVar3 = (*puVar4).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == (arg1 & 4294901760U)) {
                        puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<EnumType>::PageList>*)(*this_03)[arg1_00];
                        this_01 = (array<ConfigTypePreloadPackedContainer<EnumType>::ConfigPage*, 256ul>*)(*puVar4)
                                      .operator->();
                        plVar6 = (long*)(*this_01)[(unsigned long)((unsigned int)arg1 >> 8 & 255)];
                        this_02 = (ConfigTypePreloadPackedContainer<EnumType> _vtbl*)*plVar6;
                        if (this_02 == nullptr) {
                            return pCVar7;
                        }
                        uVar8 = arg1 & 255;
                        goto LAB_1005e2692;
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar5 = this_03->size();
                } while (arg1_00 < uVar5);
            }
        }
        return pCVar7;
    }

    // 0x1005e26b0
    uint64_t ConfigTypePreloadPackedContainer<EnumType>::DecodeConfig(int arg1, shared_ptr<EnumType>& enumType) {
        PacketT<Array<unsigned char>>* arg1_00;
        ConfigTypePreloadPackedContainer<EnumType> _vtbl* pCVar1;
        unsigned int arg1_01;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        uint8_t* puVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        void* pvVar8;
        Array<unsigned char>* this_00;
        void* pvVar9;
        size_t sVar10;
        uint64_t uVar11;
        long* plVar12;
        unsigned long arg1_03;
        Array<Array<unsigned char>>* this_01;
        shared_ptr<EnumType> local_50;
        Js5Index* local_40;

        enumType = *PTR_NullConfigType_100ee6580;
        if (arg1 < 0) {
            MakeSharedPool<EnumType, 128>::MakeShared<BaseTemplateConfigTypeList<EnumType>*&, int&>(
                (BaseTemplateConfigTypeList<EnumType>**)&local_50, (int*)(this + 1));
            enumType = local_50;
        LAB_1005e283b:
        LAB_1005e2844:
            uVar11 = 1;
        } else {
            arg1_01 = this[1]._vptr->GetClientGroupID(arg1);
            uVar3 = this[1]._vptr->GetClientFileID(arg1);
            local_40 = nullptr;
            puVar6 =
                (uint8_t*)(**(void (**)(...))((this[2]._vptr)->_dtor + 24))(this[2]._vptr, &local_40, this[3]._vptr);
            if (puVar6 != DataStatus::MISSING) {
                if (local_40->DoesFileExist(arg1_01, uVar3) != '\0') {
                    if (puVar6 == DataStatus::READY) {
                        uVar3 = local_40->GetFileIndex(arg1_01, uVar3);
                        uVar4 = this[1]._vptr->GetUIHeight();
                        arg1_03 = 0;
                        if (1 < uVar4) {
                            arg1_03 = (unsigned long)arg1_01;
                        }
                        iVar5 = local_40->GetFileCount(arg1_01);
                        arg1_00 = (PacketT<Array<unsigned char>>*)(this + 22);
                        this_01 = (Array<Array<unsigned char>>*)(this + 19);
                        pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                        if (iVar5 == 1) {
                            arg1_00->Reserve(pvVar7->end());
                            arg1_00->SetPos(0);
                            pvVar8 = (void*)arg1_00->GetDataPtr();
                            this_00 = (Array<unsigned char>*)(*this_01)[arg1_03];
                            pvVar9 = (void*)(*this_00)[0];
                            pvVar7 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                            sVar10 = pvVar7->end();
                            _memcpy(pvVar8, pvVar9, sVar10);
                        } else {
                            Js5DiskFileFormat::GetGroupFileData((PacketT<Array<unsigned char> _>*)arg1_00,
                                                                (Array<unsigned char>*)pvVar7, uVar3);
                        }
                        MakeSharedPool<EnumType, 128>::MakeShared<BaseTemplateConfigTypeList<EnumType>*&, int&>(
                            (BaseTemplateConfigTypeList<EnumType>**)&local_50, (int*)(this + 1));
                        plVar12 = (long*)local_50.operator->();
                        puVar6 = (uint8_t*)(**(void (**)(...))(*plVar12 + 32))(plVar12, arg1_00);
                        if (puVar6 == DataStatus::READY) {
                            plVar12 = (long*)local_50.operator->();
                            (**(void (**)(...))(*plVar12 + 24))(plVar12);
                            pCVar1 = this[1]._vptr;
                            puVar6 = (uint8_t*)(**(void (**)(...))(pCVar1->_dtor + 72))(pCVar1, &local_50);
                            if (puVar6 == DataStatus::READY) {
                                enumType = local_50;
                            }
                        }
                        goto LAB_1005e283b;
                    }
                    goto LAB_1005e2844;
                }
            }
            uVar11 = 0;
        }
        return uVar11;
    }

    // 0x1005e28f0
    auto ConfigTypePreloadPackedContainer<EnumType>::AddConfigID(const shared_ptr<EnumType>& enumType, int arg2) {
        auto result;
        unsigned long uVar1;
        unique_ptr<ConfigTypePreloadPackedContainer<EnumType>::PageList>* puVar2;
        long lVar3;
        array<ConfigTypePreloadPackedContainer<EnumType>::ConfigPage*, 256ul>* paVar4;
        ReturnValue* pRVar5;
        ReturnValue this;
        ReturnValue* pRVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue local_48;
        unsigned int local_38;
        unsigned int local_34;

        if (arg2 == -1) {
            pRVar6 = &result + 17;
            *pRVar6 = enumType;
        } else {
            local_34 = arg2 & 4294901760;
            pRVar6 = &result + 9;
            uVar1 = pRVar6->size();
            arg1 = 0;
            if (uVar1 != 0) {
                do {
                    puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<EnumType>::PageList>*)(*pRVar6)[arg1];
                    lVar3 = (*puVar2).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == local_34)
                        break;
                    arg1 = (unsigned long)((int)arg1 + 1);
                } while (arg1 < uVar1);
            }
            if (uVar1 == arg1) {
                local_48 =
                    std::make_unique<ConfigTypePreloadPackedContainer<EnumType>::PageList, unsigned int&>(local_34);
                eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<EnumType>::PageList>>::emplace_back<
                    std::unique_ptr<ConfigTypePreloadPackedContainer<EnumType>::PageList>>(
                    (vector<std::unique_ptr<ConfigTypePreloadPackedContainer<EnumType>::PageList>>*)pRVar6,
                    (unique_ptr<
                        ConfigTypePreloadPackedContainer<EnumType>::PageList,
                        std::default_delete<ConfigTypePreloadPackedContainer<EnumType>::PageList> _>*)&local_48);
            }
            uVar1 = (unsigned long)(arg2 - local_34 >> 8);
            puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<EnumType>::PageList>*)(*pRVar6)[arg1];
            paVar4 = (array<ConfigTypePreloadPackedContainer<EnumType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
            pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
            this = *pRVar5;
            uVar7 = arg2 & 255U;
            if (this == (ReturnValue)0) {
                local_38 = arg2 & 255U;
                this = (ReturnValue)AllocatePageBuffer(&result);
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<EnumType>::PageList>*)(*pRVar6)[arg1];
                paVar4 = (array<ConfigTypePreloadPackedContainer<EnumType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
                pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
                *pRVar5 = this;
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<EnumType>::PageList>*)(*pRVar6)[arg1];
                lVar3 = (*puVar2).operator->();
                if (*(unsigned int*)(lVar3 + 2048) != local_34) {
                    LogAssert("m_pageListContainer[thisPageList]->m_pageListID == pageListID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigTypePreloadPackedContainer.h",
                              469, nullptr);
                }
                uVar7 = local_38;
            }
            pRVar6 = (ReturnValue*)(*this)[(unsigned long)uVar7];
            *pRVar6 = enumType;
            *(int*)((long)this + 4096) = *(int*)((long)this + 4096) + 1;
            *(int*)(&result + 13) = arg2;
            &result[14] = this;
            *(unsigned int*)(&result + 15) = uVar7;
        }
        return pRVar6;
    }

    // 0x1005e2c60
    ConfigPage* ConfigTypePreloadPackedContainer<EnumType>::AllocatePageBuffer() {
        AllocatedBlock local_28 = this[16]._vptr->Allocate(4128);
        void* pvVar1 = local_28.field_8;
        if (local_28.field_8 == nullptr) {
            LogAssert("block.m_address != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      534, nullptr);
        }
        new (local_28.field_8) ConfigPage();
        *(unsigned long*)((long)pvVar1 + 4120) = local_28.field_16;
        *(uint64_t*)((long)pvVar1 + 4104) = local_28._0_8_;
        *(void**)((long)pvVar1 + 4112) = local_28.field_8;
        return pvVar1;
    }

    // 0x1005e3000
    ConfigTypePreloadPackedContainer<EnumType>::PageList::PageList(unsigned int arg1) {
        uint64_t* puVar1;

        *(unsigned int*)(this + 2048) = arg1;
        *(uint32_t*)(this + 2052) = 0;
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1_00];
            *puVar1 = 0;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
    }

    // 0x1005e30b0
    ConfigTypePreloadPackedContainer<EnumType>::ConfigPage::ConfigPage() : std::array<shared_ptr<EnumType>, 256ul>() {
        *(uint32_t*)(this + 4096) = 0;
        new ((this + 4104)) SimpleAllocator::AllocatedBlock();
    }

    // 0x1005e7130
    ConfigTypePreloadPackedContainer<EffectAnimType>::ConfigTypePreloadPackedContainer(
        BaseTemplateConfigTypeList<EffectAnimType>& baseTemplateConfigTypeList,
        Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
        const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<EffectAnimType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                                  js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8438;
        new ((this + 9)) eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<EffectAnimType>::PageList>>();
        new ((this + 17)) shared_ptr();
        new ((this + 19)) Array<Array<unsigned char>>();
        new ((this + 22)) PacketT();
        ((this + 26))->unique_ptr<true, void>();
    }

    // 0x1005e7290
    _x7e___2* ConfigTypePreloadPackedContainer<EffectAnimType>::LoadList() {
        unique_ptr* this_00;
        bool bVar2;
        bool cVar3;
        DownloadWaitHandler* pDVar6;
        CoordMapSquare* pCVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        ConfigTypePreloadPackedContainer<EffectAnimType> _vtbl* local_48;

        if (*(int*)&this[6]._vptr == 2) {
            return (_x7e___2*)DataStatus::READY;
        }
        ConfigTypePreloadPackedContainer<EffectAnimType> _vtbl* pCVar1 = this[2]._vptr;
        ConfigTypePreloadPackedContainer<EffectAnimType> _vtbl* js5ArchiveSettings = this[3]._vptr;
        Js5Index* local_40 = nullptr;
        _x7e___2* p_Var5 = (_x7e___2*)(**(void (**)(...))(pCVar1->_dtor + 24))(pCVar1, &local_40, js5ArchiveSettings);
        if (p_Var5 != (_x7e___2*)DataStatus::READY) {
            return p_Var5;
        }
        unsigned int local_34 = this[1]._vptr->GetUIHeight();
        int iVar4 = this[1]._vptr->GetStreamCountLastMix();
        *(unsigned int*)&this[8]._vptr = iVar4 + local_34;
        if (*(int*)&this[6]._vptr == 0) {
            this_00 = (unique_ptr*)(this + 26);
            local_48 = js5ArchiveSettings;
            cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar3) {
                LogAssert("!m_downloadHandler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "ConfigTypePreloadPackedContainer.h",
                          213, nullptr);
            }
            local_50 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_34);
            *this_00 = local_50;
            pDVar6 = (DownloadWaitHandler*)**this_00;
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                CheckGroupExistence(this, pDVar6, local_40, uVar8, 0);
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    CheckGroupExistence(this, pDVar6, local_40, uVar8, uVar8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            ((this + 19))->set_max_size((unsigned long)local_34, 0);
            *(uint32_t*)&this[6]._vptr = 1;
            iVar4 = *(int*)&this[6]._vptr;
            js5ArchiveSettings = local_48;
        } else {
            iVar4 = *(int*)&this[6]._vptr;
        }
        if (iVar4 != 1) {
            return (_x7e___2*)DataStatus::READY;
        }
        pDVar6 = (DownloadWaitHandler*)*(*((this + 26)));
        if ((this[1]._vptr != nullptr) && (cVar3 = (**(void (**)(...))(pCVar1->_dtor + 64))(pCVar1), cVar3)) {
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                cVar3 = pDVar6->IsComplete(0);
                if ((!cVar3) && (cVar3 = pDVar6->CanCheck(0), cVar3)) {
                    CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, 0);
                }
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    cVar3 = pDVar6->IsComplete(uVar8);
                    if ((!cVar3) && (cVar3 = pDVar6->CanCheck(uVar8), cVar3)) {
                        CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, uVar8);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            if (*(unsigned int*)&this[8]._vptr <= *(unsigned int*)((long)&this[7]._vptr + 4)) {
                ((this + 26))->reset(nullptr);
                *(uint32_t*)&this[6]._vptr = 2;
                p_Var5 = (_x7e___2*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->_x7e___2 = p_Var5;
                bVar2 = true;
                goto LAB_1005e7506;
            }
        }
        bVar2 = false;
        p_Var5 = (_x7e___2*)DataStatus::NOTLOADED;
    LAB_1005e7506:
        if (bVar2) {
            return (_x7e___2*)DataStatus::READY;
        }
        return p_Var5;
    }

    // 0x1005e7550
    void ConfigTypePreloadPackedContainer<EffectAnimType>::CacheReset() {
        unique_ptr<ConfigTypePreloadPackedContainer<EffectAnimType>::PageList>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (unique_ptr<ConfigTypePreloadPackedContainer<EffectAnimType>::PageList>*)(*this_00)[arg1];
                ((PageList*)this_01->get())->ClearPageList(*this[16]._vptr);
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        this_00->clear();
        this[14]._vptr = nullptr;
        *(uint32_t*)&this[15]._vptr = 0;
        *(uint32_t*)&this[13]._vptr = 4294967295;
    }

    // 0x1005e75e0
    void ConfigTypePreloadPackedContainer<EffectAnimType>::CacheClean(unsigned int arg1) {
        LoadList** ppLVar1;
        ConfigTypePreloadPackedContainer<EffectAnimType> _vtbl* this_01;
        unsigned long uVar4;
        unique_ptr<ConfigTypePreloadPackedContainer<EffectAnimType>::PageList>* this_02;
        array<ConfigTypePreloadPackedContainer<EffectAnimType>::ConfigPage*, 256ul>* this_03;
        uint64_t* puVar5;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_04;
        unsigned long arg1_00;
        unsigned int uVar6;
        int iVar7;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_02 = (unique_ptr<ConfigTypePreloadPackedContainer<EffectAnimType>::PageList>*)(*this_00)[arg1_00];
                this_03 = (array<ConfigTypePreloadPackedContainer<EffectAnimType>::ConfigPage*, 256ul>*)this_02->get();
                uVar6 = *(unsigned int*)(this_03 + 2052);
                iVar7 = 16;
                do {
                    puVar5 = (uint64_t*)(*this_03)[(unsigned long)(uVar6 >> 8)];
                    this_01 = (ConfigTypePreloadPackedContainer<EffectAnimType> _vtbl*)*puVar5;
                    if (this_01 != nullptr) {
                        this_04 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*this_01)[(
                            unsigned long)(uVar6 & 255)];
                        if (this_04->unique() != '\0') {
                            this_04->reset();
                            if ((this_01 == this[14]._vptr) && ((uVar6 & 255) == *(unsigned int*)&this[15]._vptr)) {
                                this[14]._vptr = nullptr;
                                *(uint32_t*)&this[15]._vptr = 0;
                                *(uint32_t*)&this[13]._vptr = 4294967295;
                            }
                            ppLVar1 = &this_01[51].LoadList;
                            *(int*)ppLVar1 = *(int*)ppLVar1 - 1;
                            if (*(int*)ppLVar1 == 0) {
                                this[16]._vptr->DeAllocate(&this_01[51].CacheReset);
                                *puVar5 = 0;
                            }
                        }
                    }
                    uVar6 = uVar6 + 1 & 65535;
                    iVar7 = iVar7 - 1;
                } while (iVar7 != 0);
                *(unsigned int*)(this_03 + 2052) = uVar6;
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x1005e7750
    shared_ptr* ConfigTypePreloadPackedContainer<EffectAnimType>::List(int arg1, const DataStatus** arg2) {
        shared_ptr* psVar2;
        uint8_t** ppuVar3;

        if (*(int*)&this[6]._vptr != 2) {
            if (arg2 == nullptr) {
                return (shared_ptr*)PTR_NullConfigType_100ee6510;
            }
            ppuVar3 = &DataStatus::NOTLOADED;
            psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6510;
        LAB_1005e77ab:
            *arg2 = (DataStatus*)*ppuVar3;
            return psVar2;
        }
        psVar2 = (shared_ptr*)FindConfigID(this, arg1);
        if (shared_ptr::operator_cast_to_bool(psVar2)) {
            if (arg2 == nullptr) {
                return psVar2;
            }
            ppuVar3 = &DataStatus::READY;
            goto LAB_1005e77ab;
        }
        shared_ptr local_38;
        if (!(DecodeConfig(this, arg1, (shared_ptr<EffectAnimType>*)&local_38))) {
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::MISSING;
            LAB_1005e7821:
                *arg2 = (DataStatus*)*ppuVar3;
            }
        } else {
            if (shared_ptr::operator_cast_to_bool(&local_38)) {
                if (arg2 != nullptr) {
                    *arg2 = (DataStatus*)DataStatus::READY;
                }
                psVar2 = (shared_ptr*)AddConfigID((ReturnValue*)this, (shared_ptr<EffectAnimType>*)&local_38, arg1);
                goto LAB_1005e782e;
            }
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_1005e7821;
            }
        }
        psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6510;
    LAB_1005e782e:
        return psVar2;
    }

    // 0x1005e7860
    auto ConfigTypePreloadPackedContainer<EffectAnimType>::DirectFetch(int arg1) {
        if (*(int*)&this[6]._vptr != 2) {
            LogAssert("m_loadStep == BaseLoadAllConfigTypeContainer::LoadStep::DONE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      179, nullptr);
        }
        auto result;
        if (DecodeConfig(this, arg1, &result) == '\0') {
            LogAssert("exists",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      183, nullptr);
        }
        return result;
    }

    // 0x1005e7a70
    ConfigTypePreloadPackedContainer<EffectAnimType>::~ConfigTypePreloadPackedContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8438;
        this[16]._vptr->PrintMetrics();
        CacheReset();
        ((this + 26))->~unique_ptr();
        ((this + 22))->~VBOMapper();
        ((this + 19))->~Array();
        ((this + 17))->~shared_ptr();
        ((this + 9))->~vector();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005e7b60
    void ConfigTypePreloadPackedContainer<EffectAnimType>::CheckGroupExistence(DownloadWaitHandler& downloadWaitHandler,
                                                                               Js5Index* js5Index, unsigned int arg3,
                                                                               unsigned int arg4) {
        int* piVar1;

        if (js5Index == nullptr) {
            LogAssert("js5Index",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      365, nullptr);
        }
        if (js5Index->DoesGroupExist(arg3) == '\0') {
            piVar1 = (int*)((long)&this[7]._vptr + 4);
            *piVar1 = *piVar1 + 1;
        } else {
            downloadWaitHandler.SetExists(arg4);
        }
    }

    // 0x1005e7be0
    void ConfigTypePreloadPackedContainer<EffectAnimType>::CheckDecodeProgress(
        const Js5ArchiveSettings& js5ArchiveSettings, Js5Index* js5Index, unsigned int arg3, unsigned int arg4) {
        int iVar1;
        Array<unsigned char>* this_00;
        TextureAtlasReference* pTVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        void* pvVar4;
        PacketT<Array<unsigned char>>* this_02;
        void* pvVar5;
        size_t sVar6;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)this[1]._vptr->GetGroup(local_48, js5ArchiveSettings, arg3, (Priority*)Priority::HIGHEST, true,
                                              true) == DataStatus::READY) {
            this_00 = (Array<unsigned char>*)(*((this + 19)))[(unsigned long)arg4];
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            this_00->set_max_size(pTVar3->GetTextureAtlas(), 0);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*((this + 19)))[(unsigned long)arg4];
            pvVar4 = (void*)this_01->data();
            this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pvVar5 = (void*)this_02->GetDataPtr();
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            sVar6 = pTVar3->GetTextureAtlas();
            _memcpy(pvVar4, pvVar5, sVar6);
            iVar1 = js5Index->GetMaximumFileID(arg3);
            *(int*)((long)&this[7]._vptr + 4) = iVar1 + *(int*)((long)&this[7]._vptr + 4) + 1;
            ((DownloadWaitHandler*)(*((this + 26))).operator->())->Completed(arg4);
        }
    }

    // 0x1005e7d80
    void ConfigTypePreloadPackedContainer<EffectAnimType>::PageList::ClearPageList(SimpleAllocator& simpleAllocator) {
        ConfigPage* this_00;
        uint64_t* puVar1;

        unsigned long arg1 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1];
            this_00 = (ConfigPage*)*puVar1;
            if (this_00 != nullptr) {
                this_00->Clear();
                simpleAllocator.DeAllocate((this_00 + 4104));
                *puVar1 = 0;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005e7e60
    void ConfigTypePreloadPackedContainer<EffectAnimType>::ConfigPage::Clear() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1];
            if (this_00->end() != 0) {
                this_00->reset();
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005e7f90
    ConfigTypePreloadPackedContainer<EffectAnimType>*
    ConfigTypePreloadPackedContainer<EffectAnimType>::FindConfigID(int arg1) const {
        unsigned int uVar2;
        shared_ptr* this_00;
        long lVar3;
        unique_ptr<ConfigTypePreloadPackedContainer<EffectAnimType>::PageList>* puVar4;
        unsigned long uVar5;
        array<ConfigTypePreloadPackedContainer<EffectAnimType>::ConfigPage*, 256ul>* this_01;
        long* plVar6;
        ConfigTypePreloadPackedContainer<EffectAnimType>* pCVar7;
        unsigned long arg1_00;
        unsigned int uVar8;
        ConfigTypePreloadPackedContainer<EffectAnimType> _vtbl* this_02;
        vector<eastl::pair<int, int>>* this_03;

        if (arg1 == -1) {
            pCVar7 = this + 17;
        } else {
            if (*(int*)&this[13]._vptr == arg1) {
                if (this[14]._vptr != nullptr) {
                    this_00 = (shared_ptr*)(*this[14]._vptr)[(unsigned long)*(unsigned int*)&this[15]._vptr];
                    if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                        this_02 = this[14]._vptr;
                        uVar8 = *(unsigned int*)&this[15]._vptr;
                    LAB_1005e80b2:
                        pCVar7 = (ConfigTypePreloadPackedContainer<EffectAnimType>*)(*this_02)[(unsigned long)uVar8];
                        return pCVar7;
                    }
                }
                uVar8 = *(unsigned int*)&this[13]._vptr;
                uVar2 = this[3]._vptr->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigTypePreloadPackedContainer.h",
                                507, "Previously loaded config ID %d (archive ID %u) unexpectedly missing",
                                (unsigned long)uVar8, (unsigned long)uVar2);
            }
            this_03 = (vector<eastl::pair<int, int>>*)(this + 9);
            lVar3 = this_03->size();
            pCVar7 = (ConfigTypePreloadPackedContainer<EffectAnimType>*)PTR_NullConfigType_100ee6510;
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    puVar4 =
                        (unique_ptr<ConfigTypePreloadPackedContainer<EffectAnimType>::PageList>*)(*this_03)[arg1_00];
                    lVar3 = (*puVar4).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == (arg1 & 4294901760U)) {
                        puVar4 = (unique_ptr<
                                  ConfigTypePreloadPackedContainer<EffectAnimType>::PageList>*)(*this_03)[arg1_00];
                        this_01 =
                            (array<ConfigTypePreloadPackedContainer<EffectAnimType>::ConfigPage*, 256ul>*)(*puVar4)
                                .operator->();
                        plVar6 = (long*)(*this_01)[(unsigned long)((unsigned int)arg1 >> 8 & 255)];
                        this_02 = (ConfigTypePreloadPackedContainer<EffectAnimType> _vtbl*)*plVar6;
                        if (this_02 == nullptr) {
                            return pCVar7;
                        }
                        uVar8 = arg1 & 255;
                        goto LAB_1005e80b2;
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar5 = this_03->size();
                } while (arg1_00 < uVar5);
            }
        }
        return pCVar7;
    }

    // 0x1005e80d0
    uint64_t
    ConfigTypePreloadPackedContainer<EffectAnimType>::DecodeConfig(int arg1,
                                                                   shared_ptr<EffectAnimType>& effectAnimType) {
        PacketT<Array<unsigned char>>* arg1_00;
        ConfigTypePreloadPackedContainer<EffectAnimType> _vtbl* pCVar1;
        unsigned int arg1_01;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        uint8_t* puVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        void* pvVar8;
        Array<unsigned char>* this_00;
        void* pvVar9;
        size_t sVar10;
        uint64_t uVar11;
        long* plVar12;
        unsigned long arg1_03;
        Array<Array<unsigned char>>* this_01;
        shared_ptr<EffectAnimType> local_50;
        Js5Index* local_40;

        effectAnimType = *PTR_NullConfigType_100ee6510;
        if (arg1 < 0) {
            MakeSharedPool<EffectAnimType, 256>::MakeShared<BaseTemplateConfigTypeList<EffectAnimType>*&, int&>(
                (BaseTemplateConfigTypeList<EffectAnimType>**)&local_50, (int*)(this + 1));
            effectAnimType = local_50;
        LAB_1005e825b:
        LAB_1005e8264:
            uVar11 = 1;
        } else {
            arg1_01 = this[1]._vptr->GetClientGroupID(arg1);
            uVar3 = this[1]._vptr->GetClientFileID(arg1);
            local_40 = nullptr;
            puVar6 =
                (uint8_t*)(**(void (**)(...))((this[2]._vptr)->_dtor + 24))(this[2]._vptr, &local_40, this[3]._vptr);
            if (puVar6 != DataStatus::MISSING) {
                if (local_40->DoesFileExist(arg1_01, uVar3) != '\0') {
                    if (puVar6 == DataStatus::READY) {
                        uVar3 = local_40->GetFileIndex(arg1_01, uVar3);
                        uVar4 = this[1]._vptr->GetUIHeight();
                        arg1_03 = 0;
                        if (1 < uVar4) {
                            arg1_03 = (unsigned long)arg1_01;
                        }
                        iVar5 = local_40->GetFileCount(arg1_01);
                        arg1_00 = (PacketT<Array<unsigned char>>*)(this + 22);
                        this_01 = (Array<Array<unsigned char>>*)(this + 19);
                        pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                        if (iVar5 == 1) {
                            arg1_00->Reserve(pvVar7->end());
                            arg1_00->SetPos(0);
                            pvVar8 = (void*)arg1_00->GetDataPtr();
                            this_00 = (Array<unsigned char>*)(*this_01)[arg1_03];
                            pvVar9 = (void*)(*this_00)[0];
                            pvVar7 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                            sVar10 = pvVar7->end();
                            _memcpy(pvVar8, pvVar9, sVar10);
                        } else {
                            Js5DiskFileFormat::GetGroupFileData((PacketT<Array<unsigned char> _>*)arg1_00,
                                                                (Array<unsigned char>*)pvVar7, uVar3);
                        }
                        MakeSharedPool<EffectAnimType, 256>::MakeShared<BaseTemplateConfigTypeList<EffectAnimType>*&,
                                                                        int&>(
                            (BaseTemplateConfigTypeList<EffectAnimType>**)&local_50, (int*)(this + 1));
                        plVar12 = (long*)local_50.operator->();
                        puVar6 = (uint8_t*)(**(void (**)(...))(*plVar12 + 32))(plVar12, arg1_00);
                        if (puVar6 == DataStatus::READY) {
                            plVar12 = (long*)local_50.operator->();
                            (**(void (**)(...))(*plVar12 + 24))(plVar12);
                            pCVar1 = this[1]._vptr;
                            puVar6 = (uint8_t*)(**(void (**)(...))(pCVar1->_dtor + 72))(pCVar1, &local_50);
                            if (puVar6 == DataStatus::READY) {
                                effectAnimType = local_50;
                            }
                        }
                        goto LAB_1005e825b;
                    }
                    goto LAB_1005e8264;
                }
            }
            uVar11 = 0;
        }
        return uVar11;
    }

    // 0x1005e8310
    auto ConfigTypePreloadPackedContainer<EffectAnimType>::AddConfigID(const shared_ptr<EffectAnimType>& effectAnimType,
                                                                       int arg2) {
        auto result;
        unsigned long uVar1;
        unique_ptr<ConfigTypePreloadPackedContainer<EffectAnimType>::PageList>* puVar2;
        long lVar3;
        array<ConfigTypePreloadPackedContainer<EffectAnimType>::ConfigPage*, 256ul>* paVar4;
        ReturnValue* pRVar5;
        ReturnValue this;
        ReturnValue* pRVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue local_48;
        unsigned int local_38;
        unsigned int local_34;

        if (arg2 == -1) {
            pRVar6 = &result + 17;
            *pRVar6 = effectAnimType;
        } else {
            local_34 = arg2 & 4294901760;
            pRVar6 = &result + 9;
            uVar1 = pRVar6->size();
            arg1 = 0;
            if (uVar1 != 0) {
                do {
                    puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<EffectAnimType>::PageList>*)(*pRVar6)[arg1];
                    lVar3 = (*puVar2).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == local_34)
                        break;
                    arg1 = (unsigned long)((int)arg1 + 1);
                } while (arg1 < uVar1);
            }
            if (uVar1 == arg1) {
                local_48 = std::make_unique<ConfigTypePreloadPackedContainer<EffectAnimType>::PageList, unsigned int&>(
                    local_34);
                eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<EffectAnimType>::PageList>>::
                    emplace_back<std::unique_ptr<ConfigTypePreloadPackedContainer<EffectAnimType>::PageList>>(
                        (vector<std::unique_ptr<ConfigTypePreloadPackedContainer<EffectAnimType>::PageList>>*)pRVar6,
                        (unique_ptr<ConfigTypePreloadPackedContainer<EffectAnimType>::PageList,
                                    std::default_delete<ConfigTypePreloadPackedContainer<EffectAnimType>::PageList>
                                        _>*)&local_48);
            }
            uVar1 = (unsigned long)(arg2 - local_34 >> 8);
            puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<EffectAnimType>::PageList>*)(*pRVar6)[arg1];
            paVar4 =
                (array<ConfigTypePreloadPackedContainer<EffectAnimType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
            pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
            this = *pRVar5;
            uVar7 = arg2 & 255U;
            if (this == (ReturnValue)0) {
                local_38 = arg2 & 255U;
                this = (ReturnValue)AllocatePageBuffer((ConfigTypePreloadPackedContainer<EffectAnimType>*)&result);
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<EffectAnimType>::PageList>*)(*pRVar6)[arg1];
                paVar4 = (array<ConfigTypePreloadPackedContainer<EffectAnimType>::ConfigPage*, 256ul>*)(*puVar2)
                             .operator->();
                pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
                *pRVar5 = this;
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<EffectAnimType>::PageList>*)(*pRVar6)[arg1];
                lVar3 = (*puVar2).operator->();
                if (*(unsigned int*)(lVar3 + 2048) != local_34) {
                    LogAssert("m_pageListContainer[thisPageList]->m_pageListID == pageListID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigTypePreloadPackedContainer.h",
                              469, nullptr);
                }
                uVar7 = local_38;
            }
            pRVar6 = (ReturnValue*)(*this)[(unsigned long)uVar7];
            *pRVar6 = effectAnimType;
            *(int*)((long)this + 4096) = *(int*)((long)this + 4096) + 1;
            *(int*)(&result + 13) = arg2;
            &result[14] = this;
            *(unsigned int*)(&result + 15) = uVar7;
        }
        return pRVar6;
    }

    // 0x1005e8680
    ConfigPage* ConfigTypePreloadPackedContainer<EffectAnimType>::AllocatePageBuffer() {
        AllocatedBlock local_28 = this[16]._vptr->Allocate(4128);
        void* pvVar1 = local_28.field_8;
        if (local_28.field_8 == nullptr) {
            LogAssert("block.m_address != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      534, nullptr);
        }
        new (local_28.field_8) ConfigPage();
        *(unsigned long*)((long)pvVar1 + 4120) = local_28.field_16;
        *(uint64_t*)((long)pvVar1 + 4104) = local_28._0_8_;
        *(void**)((long)pvVar1 + 4112) = local_28.field_8;
        return pvVar1;
    }

    // 0x1005e8a20
    ConfigTypePreloadPackedContainer<EffectAnimType>::PageList::PageList(unsigned int arg1) {
        uint64_t* puVar1;

        *(unsigned int*)(this + 2048) = arg1;
        *(uint32_t*)(this + 2052) = 0;
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1_00];
            *puVar1 = 0;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
    }

    // 0x1005e8ad0
    ConfigTypePreloadPackedContainer<EffectAnimType>::ConfigPage::ConfigPage()
        : std::array<shared_ptr<EffectAnimType>, 256ul>() {
        *(uint32_t*)(this + 4096) = 0;
        new ((this + 4104)) SimpleAllocator::AllocatedBlock();
    }

    // 0x1005ecd80
    ConfigTypePreloadPackedContainer<StructType>::ConfigTypePreloadPackedContainer(
        BaseTemplateConfigTypeList<StructType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<StructType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                              js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8400;
        new ((this + 9)) eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<StructType>::PageList>>();
        new ((this + 17)) shared_ptr();
        new ((this + 19)) Array<Array<unsigned char>>();
        new ((this + 22)) PacketT();
        ((this + 26))->unique_ptr<true, void>();
    }

    // 0x1005ecee0
    _x7e___2* ConfigTypePreloadPackedContainer<StructType>::LoadList() {
        unique_ptr* this_00;
        bool bVar2;
        bool cVar3;
        DownloadWaitHandler* pDVar6;
        CoordMapSquare* pCVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        ConfigTypePreloadPackedContainer<StructType> _vtbl* local_48;

        if (*(int*)&this[6]._vptr == 2) {
            return (_x7e___2*)DataStatus::READY;
        }
        ConfigTypePreloadPackedContainer<StructType> _vtbl* pCVar1 = this[2]._vptr;
        ConfigTypePreloadPackedContainer<StructType> _vtbl* js5ArchiveSettings = this[3]._vptr;
        Js5Index* local_40 = nullptr;
        _x7e___2* p_Var5 = (_x7e___2*)(**(void (**)(...))(pCVar1->_dtor + 24))(pCVar1, &local_40, js5ArchiveSettings);
        if (p_Var5 != (_x7e___2*)DataStatus::READY) {
            return p_Var5;
        }
        unsigned int local_34 = this[1]._vptr->GetUIHeight();
        int iVar4 = this[1]._vptr->GetStreamCountLastMix();
        *(unsigned int*)&this[8]._vptr = iVar4 + local_34;
        if (*(int*)&this[6]._vptr == 0) {
            this_00 = (unique_ptr*)(this + 26);
            local_48 = js5ArchiveSettings;
            cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar3) {
                LogAssert("!m_downloadHandler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "ConfigTypePreloadPackedContainer.h",
                          213, nullptr);
            }
            local_50 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_34);
            *this_00 = local_50;
            pDVar6 = (DownloadWaitHandler*)**this_00;
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                CheckGroupExistence(this, pDVar6, local_40, uVar8, 0);
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    CheckGroupExistence(this, pDVar6, local_40, uVar8, uVar8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            ((this + 19))->set_max_size((unsigned long)local_34, 0);
            *(uint32_t*)&this[6]._vptr = 1;
            iVar4 = *(int*)&this[6]._vptr;
            js5ArchiveSettings = local_48;
        } else {
            iVar4 = *(int*)&this[6]._vptr;
        }
        if (iVar4 != 1) {
            return (_x7e___2*)DataStatus::READY;
        }
        pDVar6 = (DownloadWaitHandler*)*(*((this + 26)));
        if ((this[1]._vptr != nullptr) && (cVar3 = (**(void (**)(...))(pCVar1->_dtor + 64))(pCVar1), cVar3)) {
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                cVar3 = pDVar6->IsComplete(0);
                if ((!cVar3) && (cVar3 = pDVar6->CanCheck(0), cVar3)) {
                    CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, 0);
                }
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    cVar3 = pDVar6->IsComplete(uVar8);
                    if ((!cVar3) && (cVar3 = pDVar6->CanCheck(uVar8), cVar3)) {
                        CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, uVar8);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            if (*(unsigned int*)&this[8]._vptr <= *(unsigned int*)((long)&this[7]._vptr + 4)) {
                ((this + 26))->reset(nullptr);
                *(uint32_t*)&this[6]._vptr = 2;
                p_Var5 = (_x7e___2*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->_x7e___2 = p_Var5;
                bVar2 = true;
                goto LAB_1005ed156;
            }
        }
        bVar2 = false;
        p_Var5 = (_x7e___2*)DataStatus::NOTLOADED;
    LAB_1005ed156:
        if (bVar2) {
            return (_x7e___2*)DataStatus::READY;
        }
        return p_Var5;
    }

    // 0x1005ed1a0
    void ConfigTypePreloadPackedContainer<StructType>::CacheReset() {
        unique_ptr<ConfigTypePreloadPackedContainer<StructType>::PageList>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (unique_ptr<ConfigTypePreloadPackedContainer<StructType>::PageList>*)(*this_00)[arg1];
                ((PageList*)this_01->get())->ClearPageList(*this[16]._vptr);
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        this_00->clear();
        this[14]._vptr = nullptr;
        *(uint32_t*)&this[15]._vptr = 0;
        *(uint32_t*)&this[13]._vptr = 4294967295;
    }

    // 0x1005ed230
    void ConfigTypePreloadPackedContainer<StructType>::CacheClean(unsigned int arg1) {
        LoadList** ppLVar1;
        ConfigTypePreloadPackedContainer<StructType> _vtbl* this_01;
        unsigned long uVar4;
        unique_ptr<ConfigTypePreloadPackedContainer<StructType>::PageList>* this_02;
        array<ConfigTypePreloadPackedContainer<StructType>::ConfigPage*, 256ul>* this_03;
        uint64_t* puVar5;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_04;
        unsigned long arg1_00;
        unsigned int uVar6;
        int iVar7;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_02 = (unique_ptr<ConfigTypePreloadPackedContainer<StructType>::PageList>*)(*this_00)[arg1_00];
                this_03 = (array<ConfigTypePreloadPackedContainer<StructType>::ConfigPage*, 256ul>*)this_02->get();
                uVar6 = *(unsigned int*)(this_03 + 2052);
                iVar7 = 16;
                do {
                    puVar5 = (uint64_t*)(*this_03)[(unsigned long)(uVar6 >> 8)];
                    this_01 = (ConfigTypePreloadPackedContainer<StructType> _vtbl*)*puVar5;
                    if (this_01 != nullptr) {
                        this_04 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*this_01)[(
                            unsigned long)(uVar6 & 255)];
                        if (this_04->unique() != '\0') {
                            this_04->reset();
                            if ((this_01 == this[14]._vptr) && ((uVar6 & 255) == *(unsigned int*)&this[15]._vptr)) {
                                this[14]._vptr = nullptr;
                                *(uint32_t*)&this[15]._vptr = 0;
                                *(uint32_t*)&this[13]._vptr = 4294967295;
                            }
                            ppLVar1 = &this_01[51].LoadList;
                            *(int*)ppLVar1 = *(int*)ppLVar1 - 1;
                            if (*(int*)ppLVar1 == 0) {
                                this[16]._vptr->DeAllocate(&this_01[51].CacheReset);
                                *puVar5 = 0;
                            }
                        }
                    }
                    uVar6 = uVar6 + 1 & 65535;
                    iVar7 = iVar7 - 1;
                } while (iVar7 != 0);
                *(unsigned int*)(this_03 + 2052) = uVar6;
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x1005ed3a0
    shared_ptr* ConfigTypePreloadPackedContainer<StructType>::List(int arg1, const DataStatus** arg2) {
        shared_ptr* psVar2;
        uint8_t** ppuVar3;

        if (*(int*)&this[6]._vptr != 2) {
            if (arg2 == nullptr) {
                return (shared_ptr*)PTR_NullConfigType_100ee64d8;
            }
            ppuVar3 = &DataStatus::NOTLOADED;
            psVar2 = (shared_ptr*)PTR_NullConfigType_100ee64d8;
        LAB_1005ed3fb:
            *arg2 = (DataStatus*)*ppuVar3;
            return psVar2;
        }
        psVar2 = (shared_ptr*)FindConfigID(this, arg1);
        if (shared_ptr::operator_cast_to_bool(psVar2)) {
            if (arg2 == nullptr) {
                return psVar2;
            }
            ppuVar3 = &DataStatus::READY;
            goto LAB_1005ed3fb;
        }
        shared_ptr local_38;
        if (!(DecodeConfig(this, arg1, (shared_ptr<StructType>*)&local_38))) {
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::MISSING;
            LAB_1005ed471:
                *arg2 = (DataStatus*)*ppuVar3;
            }
        } else {
            if (shared_ptr::operator_cast_to_bool(&local_38)) {
                if (arg2 != nullptr) {
                    *arg2 = (DataStatus*)DataStatus::READY;
                }
                psVar2 = (shared_ptr*)AddConfigID((ReturnValue*)this, (shared_ptr<StructType>*)&local_38, arg1);
                goto LAB_1005ed47e;
            }
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_1005ed471;
            }
        }
        psVar2 = (shared_ptr*)PTR_NullConfigType_100ee64d8;
    LAB_1005ed47e:
        return psVar2;
    }

    // 0x1005ed4b0
    auto ConfigTypePreloadPackedContainer<StructType>::DirectFetch(int arg1) {
        if (*(int*)&this[6]._vptr != 2) {
            LogAssert("m_loadStep == BaseLoadAllConfigTypeContainer::LoadStep::DONE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      179, nullptr);
        }
        auto result;
        if (DecodeConfig(this, arg1, &result) == '\0') {
            LogAssert("exists",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      183, nullptr);
        }
        return result;
    }

    // 0x1005ed6c0
    ConfigTypePreloadPackedContainer<StructType>::~ConfigTypePreloadPackedContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8400;
        this[16]._vptr->PrintMetrics();
        CacheReset();
        ((this + 26))->~unique_ptr();
        ((this + 22))->~VBOMapper();
        ((this + 19))->~Array();
        ((this + 17))->~shared_ptr();
        ((this + 9))->~vector();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005ed7b0
    void ConfigTypePreloadPackedContainer<StructType>::CheckGroupExistence(DownloadWaitHandler& downloadWaitHandler,
                                                                           Js5Index* js5Index, unsigned int arg3,
                                                                           unsigned int arg4) {
        int* piVar1;

        if (js5Index == nullptr) {
            LogAssert("js5Index",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      365, nullptr);
        }
        if (js5Index->DoesGroupExist(arg3) == '\0') {
            piVar1 = (int*)((long)&this[7]._vptr + 4);
            *piVar1 = *piVar1 + 1;
        } else {
            downloadWaitHandler.SetExists(arg4);
        }
    }

    // 0x1005ed830
    void ConfigTypePreloadPackedContainer<StructType>::CheckDecodeProgress(const Js5ArchiveSettings& js5ArchiveSettings,
                                                                           Js5Index* js5Index, unsigned int arg3,
                                                                           unsigned int arg4) {
        int iVar1;
        Array<unsigned char>* this_00;
        TextureAtlasReference* pTVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        void* pvVar4;
        PacketT<Array<unsigned char>>* this_02;
        void* pvVar5;
        size_t sVar6;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)this[1]._vptr->GetGroup(local_48, js5ArchiveSettings, arg3, (Priority*)Priority::HIGHEST, true,
                                              true) == DataStatus::READY) {
            this_00 = (Array<unsigned char>*)(*((this + 19)))[(unsigned long)arg4];
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            this_00->set_max_size(pTVar3->GetTextureAtlas(), 0);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*((this + 19)))[(unsigned long)arg4];
            pvVar4 = (void*)this_01->data();
            this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pvVar5 = (void*)this_02->GetDataPtr();
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            sVar6 = pTVar3->GetTextureAtlas();
            _memcpy(pvVar4, pvVar5, sVar6);
            iVar1 = js5Index->GetMaximumFileID(arg3);
            *(int*)((long)&this[7]._vptr + 4) = iVar1 + *(int*)((long)&this[7]._vptr + 4) + 1;
            ((DownloadWaitHandler*)(*((this + 26))).operator->())->Completed(arg4);
        }
    }

    // 0x1005ed9d0
    void ConfigTypePreloadPackedContainer<StructType>::PageList::ClearPageList(SimpleAllocator& simpleAllocator) {
        ConfigPage* this_00;
        uint64_t* puVar1;

        unsigned long arg1 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1];
            this_00 = (ConfigPage*)*puVar1;
            if (this_00 != nullptr) {
                this_00->Clear();
                simpleAllocator.DeAllocate((this_00 + 4104));
                *puVar1 = 0;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005edab0
    void ConfigTypePreloadPackedContainer<StructType>::ConfigPage::Clear() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1];
            if (this_00->end() != 0) {
                this_00->reset();
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005edbe0
    ConfigTypePreloadPackedContainer<StructType>*
    ConfigTypePreloadPackedContainer<StructType>::FindConfigID(int arg1) const {
        unsigned int uVar2;
        shared_ptr* this_00;
        long lVar3;
        unique_ptr<ConfigTypePreloadPackedContainer<StructType>::PageList>* puVar4;
        unsigned long uVar5;
        array<ConfigTypePreloadPackedContainer<StructType>::ConfigPage*, 256ul>* this_01;
        long* plVar6;
        ConfigTypePreloadPackedContainer<StructType>* pCVar7;
        unsigned long arg1_00;
        unsigned int uVar8;
        ConfigTypePreloadPackedContainer<StructType> _vtbl* this_02;
        vector<eastl::pair<int, int>>* this_03;

        if (arg1 == -1) {
            pCVar7 = this + 17;
        } else {
            if (*(int*)&this[13]._vptr == arg1) {
                if (this[14]._vptr != nullptr) {
                    this_00 = (shared_ptr*)(*this[14]._vptr)[(unsigned long)*(unsigned int*)&this[15]._vptr];
                    if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                        this_02 = this[14]._vptr;
                        uVar8 = *(unsigned int*)&this[15]._vptr;
                    LAB_1005edd02:
                        pCVar7 = (ConfigTypePreloadPackedContainer<StructType>*)(*this_02)[(unsigned long)uVar8];
                        return pCVar7;
                    }
                }
                uVar8 = *(unsigned int*)&this[13]._vptr;
                uVar2 = this[3]._vptr->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigTypePreloadPackedContainer.h",
                                507, "Previously loaded config ID %d (archive ID %u) unexpectedly missing",
                                (unsigned long)uVar8, (unsigned long)uVar2);
            }
            this_03 = (vector<eastl::pair<int, int>>*)(this + 9);
            lVar3 = this_03->size();
            pCVar7 = (ConfigTypePreloadPackedContainer<StructType>*)PTR_NullConfigType_100ee64d8;
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    puVar4 = (unique_ptr<ConfigTypePreloadPackedContainer<StructType>::PageList>*)(*this_03)[arg1_00];
                    lVar3 = (*puVar4).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == (arg1 & 4294901760U)) {
                        puVar4 =
                            (unique_ptr<ConfigTypePreloadPackedContainer<StructType>::PageList>*)(*this_03)[arg1_00];
                        this_01 = (array<ConfigTypePreloadPackedContainer<StructType>::ConfigPage*, 256ul>*)(*puVar4)
                                      .operator->();
                        plVar6 = (long*)(*this_01)[(unsigned long)((unsigned int)arg1 >> 8 & 255)];
                        this_02 = (ConfigTypePreloadPackedContainer<StructType> _vtbl*)*plVar6;
                        if (this_02 == nullptr) {
                            return pCVar7;
                        }
                        uVar8 = arg1 & 255;
                        goto LAB_1005edd02;
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar5 = this_03->size();
                } while (arg1_00 < uVar5);
            }
        }
        return pCVar7;
    }

    // 0x1005edd20
    uint64_t ConfigTypePreloadPackedContainer<StructType>::DecodeConfig(int arg1, shared_ptr<StructType>& structType) {
        PacketT<Array<unsigned char>>* arg1_00;
        ConfigTypePreloadPackedContainer<StructType> _vtbl* pCVar1;
        unsigned int arg1_01;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        uint8_t* puVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        void* pvVar8;
        Array<unsigned char>* this_00;
        void* pvVar9;
        size_t sVar10;
        uint64_t uVar11;
        long* plVar12;
        unsigned long arg1_03;
        Array<Array<unsigned char>>* this_01;
        shared_ptr<StructType> local_50;
        Js5Index* local_40;

        structType = *PTR_NullConfigType_100ee64d8;
        if (arg1 < 0) {
            MakeSharedPool<StructType, 1024>::MakeShared<BaseTemplateConfigTypeList<StructType>*&, int&>(
                (BaseTemplateConfigTypeList<StructType>**)&local_50, (int*)(this + 1));
            structType = local_50;
        LAB_1005edeab:
        LAB_1005edeb4:
            uVar11 = 1;
        } else {
            arg1_01 = this[1]._vptr->GetClientGroupID(arg1);
            uVar3 = this[1]._vptr->GetClientFileID(arg1);
            local_40 = nullptr;
            puVar6 =
                (uint8_t*)(**(void (**)(...))((this[2]._vptr)->_dtor + 24))(this[2]._vptr, &local_40, this[3]._vptr);
            if (puVar6 != DataStatus::MISSING) {
                if (local_40->DoesFileExist(arg1_01, uVar3) != '\0') {
                    if (puVar6 == DataStatus::READY) {
                        uVar3 = local_40->GetFileIndex(arg1_01, uVar3);
                        uVar4 = this[1]._vptr->GetUIHeight();
                        arg1_03 = 0;
                        if (1 < uVar4) {
                            arg1_03 = (unsigned long)arg1_01;
                        }
                        iVar5 = local_40->GetFileCount(arg1_01);
                        arg1_00 = (PacketT<Array<unsigned char>>*)(this + 22);
                        this_01 = (Array<Array<unsigned char>>*)(this + 19);
                        pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                        if (iVar5 == 1) {
                            arg1_00->Reserve(pvVar7->end());
                            arg1_00->SetPos(0);
                            pvVar8 = (void*)arg1_00->GetDataPtr();
                            this_00 = (Array<unsigned char>*)(*this_01)[arg1_03];
                            pvVar9 = (void*)(*this_00)[0];
                            pvVar7 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                            sVar10 = pvVar7->end();
                            _memcpy(pvVar8, pvVar9, sVar10);
                        } else {
                            Js5DiskFileFormat::GetGroupFileData((PacketT<Array<unsigned char> _>*)arg1_00,
                                                                (Array<unsigned char>*)pvVar7, uVar3);
                        }
                        MakeSharedPool<StructType, 1024>::MakeShared<BaseTemplateConfigTypeList<StructType>*&, int&>(
                            (BaseTemplateConfigTypeList<StructType>**)&local_50, (int*)(this + 1));
                        plVar12 = (long*)local_50.operator->();
                        puVar6 = (uint8_t*)(**(void (**)(...))(*plVar12 + 32))(plVar12, arg1_00);
                        if (puVar6 == DataStatus::READY) {
                            plVar12 = (long*)local_50.operator->();
                            (**(void (**)(...))(*plVar12 + 24))(plVar12);
                            pCVar1 = this[1]._vptr;
                            puVar6 = (uint8_t*)(**(void (**)(...))(pCVar1->_dtor + 72))(pCVar1, &local_50);
                            if (puVar6 == DataStatus::READY) {
                                structType = local_50;
                            }
                        }
                        goto LAB_1005edeab;
                    }
                    goto LAB_1005edeb4;
                }
            }
            uVar11 = 0;
        }
        return uVar11;
    }

    // 0x1005edf60
    auto ConfigTypePreloadPackedContainer<StructType>::AddConfigID(const shared_ptr<StructType>& structType, int arg2) {
        auto result;
        unsigned long uVar1;
        unique_ptr<ConfigTypePreloadPackedContainer<StructType>::PageList>* puVar2;
        long lVar3;
        array<ConfigTypePreloadPackedContainer<StructType>::ConfigPage*, 256ul>* paVar4;
        ReturnValue* pRVar5;
        ReturnValue this;
        ReturnValue* pRVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue local_48;
        unsigned int local_38;
        unsigned int local_34;

        if (arg2 == -1) {
            pRVar6 = &result + 17;
            *pRVar6 = structType;
        } else {
            local_34 = arg2 & 4294901760;
            pRVar6 = &result + 9;
            uVar1 = pRVar6->size();
            arg1 = 0;
            if (uVar1 != 0) {
                do {
                    puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<StructType>::PageList>*)(*pRVar6)[arg1];
                    lVar3 = (*puVar2).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == local_34)
                        break;
                    arg1 = (unsigned long)((int)arg1 + 1);
                } while (arg1 < uVar1);
            }
            if (uVar1 == arg1) {
                local_48 =
                    std::make_unique<ConfigTypePreloadPackedContainer<StructType>::PageList, unsigned int&>(local_34);
                eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<StructType>::PageList>>::emplace_back<
                    std::unique_ptr<ConfigTypePreloadPackedContainer<StructType>::PageList>>(
                    (vector<std::unique_ptr<ConfigTypePreloadPackedContainer<StructType>::PageList>>*)pRVar6,
                    (unique_ptr<
                        ConfigTypePreloadPackedContainer<StructType>::PageList,
                        std::default_delete<ConfigTypePreloadPackedContainer<StructType>::PageList> _>*)&local_48);
            }
            uVar1 = (unsigned long)(arg2 - local_34 >> 8);
            puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<StructType>::PageList>*)(*pRVar6)[arg1];
            paVar4 = (array<ConfigTypePreloadPackedContainer<StructType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
            pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
            this = *pRVar5;
            uVar7 = arg2 & 255U;
            if (this == (ReturnValue)0) {
                local_38 = arg2 & 255U;
                this = (ReturnValue)AllocatePageBuffer(&result);
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<StructType>::PageList>*)(*pRVar6)[arg1];
                paVar4 =
                    (array<ConfigTypePreloadPackedContainer<StructType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
                pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
                *pRVar5 = this;
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<StructType>::PageList>*)(*pRVar6)[arg1];
                lVar3 = (*puVar2).operator->();
                if (*(unsigned int*)(lVar3 + 2048) != local_34) {
                    LogAssert("m_pageListContainer[thisPageList]->m_pageListID == pageListID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigTypePreloadPackedContainer.h",
                              469, nullptr);
                }
                uVar7 = local_38;
            }
            pRVar6 = (ReturnValue*)(*this)[(unsigned long)uVar7];
            *pRVar6 = structType;
            *(int*)((long)this + 4096) = *(int*)((long)this + 4096) + 1;
            *(int*)(&result + 13) = arg2;
            &result[14] = this;
            *(unsigned int*)(&result + 15) = uVar7;
        }
        return pRVar6;
    }

    // 0x1005ee2d0
    ConfigPage* ConfigTypePreloadPackedContainer<StructType>::AllocatePageBuffer() {
        AllocatedBlock local_28 = this[16]._vptr->Allocate(4128);
        void* pvVar1 = local_28.field_8;
        if (local_28.field_8 == nullptr) {
            LogAssert("block.m_address != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      534, nullptr);
        }
        new (local_28.field_8) ConfigPage();
        *(unsigned long*)((long)pvVar1 + 4120) = local_28.field_16;
        *(uint64_t*)((long)pvVar1 + 4104) = local_28._0_8_;
        *(void**)((long)pvVar1 + 4112) = local_28.field_8;
        return pvVar1;
    }

    // 0x1005ee670
    ConfigTypePreloadPackedContainer<StructType>::PageList::PageList(unsigned int arg1) {
        uint64_t* puVar1;

        *(unsigned int*)(this + 2048) = arg1;
        *(uint32_t*)(this + 2052) = 0;
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1_00];
            *puVar1 = 0;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
    }

    // 0x1005ee720
    ConfigTypePreloadPackedContainer<StructType>::ConfigPage::ConfigPage()
        : std::array<shared_ptr<StructType>, 256ul>() {
        *(uint32_t*)(this + 4096) = 0;
        new ((this + 4104)) SimpleAllocator::AllocatedBlock();
    }

    // 0x1005f2cd0
    ConfigTypePreloadPackedContainer<AchievementType>::ConfigTypePreloadPackedContainer(
        BaseTemplateConfigTypeList<AchievementType>& baseTemplateConfigTypeList,
        Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
        const Js5ConfigGroup* js5ConfigGroup, unsigned int arg5)
        : BaseConfigTypeContainer<AchievementType>(baseTemplateConfigTypeList, js5ResourceProvider, js5ArchiveSettings,
                                                   js5ConfigGroup) {
        new ((this + 5)) BaseLoadAllConfigTypeContainer(arg5);
        uint8_t* puVar1 = PTR_vtable_100ee8448;
        new ((this + 9)) eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<AchievementType>::PageList>>();
        new ((this + 17)) shared_ptr();
        new ((this + 19)) Array<Array<unsigned char>>();
        new ((this + 22)) PacketT();
        ((this + 26))->unique_ptr<true, void>();
    }

    // 0x1005f2e30
    _x7e___2* ConfigTypePreloadPackedContainer<AchievementType>::LoadList() {
        unique_ptr* this_00;
        bool bVar2;
        bool cVar3;
        DownloadWaitHandler* pDVar6;
        CoordMapSquare* pCVar7;
        unsigned int uVar8;
        ReturnValue local_50;
        ConfigTypePreloadPackedContainer<AchievementType> _vtbl* local_48;

        if (*(int*)&this[6]._vptr == 2) {
            return (_x7e___2*)DataStatus::READY;
        }
        ConfigTypePreloadPackedContainer<AchievementType> _vtbl* pCVar1 = this[2]._vptr;
        ConfigTypePreloadPackedContainer<AchievementType> _vtbl* js5ArchiveSettings = this[3]._vptr;
        Js5Index* local_40 = nullptr;
        _x7e___2* p_Var5 = (_x7e___2*)(**(void (**)(...))(pCVar1->_dtor + 24))(pCVar1, &local_40, js5ArchiveSettings);
        if (p_Var5 != (_x7e___2*)DataStatus::READY) {
            return p_Var5;
        }
        unsigned int local_34 = this[1]._vptr->GetUIHeight();
        int iVar4 = this[1]._vptr->GetStreamCountLastMix();
        *(unsigned int*)&this[8]._vptr = iVar4 + local_34;
        if (*(int*)&this[6]._vptr == 0) {
            this_00 = (unique_ptr*)(this + 26);
            local_48 = js5ArchiveSettings;
            cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar3) {
                LogAssert("!m_downloadHandler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "ConfigTypePreloadPackedContainer.h",
                          213, nullptr);
            }
            local_50 = std::make_unique<DownloadWaitHandler, unsigned int&>(local_34);
            *this_00 = local_50;
            pDVar6 = (DownloadWaitHandler*)**this_00;
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                CheckGroupExistence(this, pDVar6, local_40, uVar8, 0);
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    CheckGroupExistence(this, pDVar6, local_40, uVar8, uVar8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            ((this + 19))->set_max_size((unsigned long)local_34, 0);
            *(uint32_t*)&this[6]._vptr = 1;
            iVar4 = *(int*)&this[6]._vptr;
            js5ArchiveSettings = local_48;
        } else {
            iVar4 = *(int*)&this[6]._vptr;
        }
        if (iVar4 != 1) {
            return (_x7e___2*)DataStatus::READY;
        }
        pDVar6 = (DownloadWaitHandler*)*(*((this + 26)));
        if ((this[1]._vptr != nullptr) && (cVar3 = (**(void (**)(...))(pCVar1->_dtor + 64))(pCVar1), cVar3)) {
            pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
            iVar4 = pCVar7->GetZ();
            if (iVar4 == 0) {
                pCVar7 = (CoordMapSquare*)this[1]._vptr->GetConfigGroup();
                uVar8 = pCVar7->GetX();
                cVar3 = pDVar6->IsComplete(0);
                if ((!cVar3) && (cVar3 = pDVar6->CanCheck(0), cVar3)) {
                    CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, 0);
                }
            } else if (local_34 != 0) {
                uVar8 = 0;
                do {
                    cVar3 = pDVar6->IsComplete(uVar8);
                    if ((!cVar3) && (cVar3 = pDVar6->CanCheck(uVar8), cVar3)) {
                        CheckDecodeProgress(this, (Js5ArchiveSettings*)js5ArchiveSettings, local_40, uVar8, uVar8);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < local_34);
            }
            if (*(unsigned int*)&this[8]._vptr <= *(unsigned int*)((long)&this[7]._vptr + 4)) {
                ((this + 26))->reset(nullptr);
                *(uint32_t*)&this[6]._vptr = 2;
                p_Var5 = (_x7e___2*)SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                (this[1]._vptr)->_x7e___2 = p_Var5;
                bVar2 = true;
                goto LAB_1005f30a6;
            }
        }
        bVar2 = false;
        p_Var5 = (_x7e___2*)DataStatus::NOTLOADED;
    LAB_1005f30a6:
        if (bVar2) {
            return (_x7e___2*)DataStatus::READY;
        }
        return p_Var5;
    }

    // 0x1005f30f0
    void ConfigTypePreloadPackedContainer<AchievementType>::CacheReset() {
        unique_ptr<ConfigTypePreloadPackedContainer<AchievementType>::PageList>* this_01;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                this_01 = (unique_ptr<ConfigTypePreloadPackedContainer<AchievementType>::PageList>*)(*this_00)[arg1];
                ((PageList*)this_01->get())->ClearPageList(*this[16]._vptr);
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        this_00->clear();
        this[14]._vptr = nullptr;
        *(uint32_t*)&this[15]._vptr = 0;
        *(uint32_t*)&this[13]._vptr = 4294967295;
    }

    // 0x1005f3180
    void ConfigTypePreloadPackedContainer<AchievementType>::CacheClean(unsigned int arg1) {
        LoadList** ppLVar1;
        ConfigTypePreloadPackedContainer<AchievementType> _vtbl* this_01;
        unsigned long uVar4;
        unique_ptr<ConfigTypePreloadPackedContainer<AchievementType>::PageList>* this_02;
        array<ConfigTypePreloadPackedContainer<AchievementType>::ConfigPage*, 256ul>* this_03;
        uint64_t* puVar5;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_04;
        unsigned long arg1_00;
        unsigned int uVar6;
        int iVar7;

        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 9);
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_02 = (unique_ptr<ConfigTypePreloadPackedContainer<AchievementType>::PageList>*)(*this_00)[arg1_00];
                this_03 = (array<ConfigTypePreloadPackedContainer<AchievementType>::ConfigPage*, 256ul>*)this_02->get();
                uVar6 = *(unsigned int*)(this_03 + 2052);
                iVar7 = 16;
                do {
                    puVar5 = (uint64_t*)(*this_03)[(unsigned long)(uVar6 >> 8)];
                    this_01 = (ConfigTypePreloadPackedContainer<AchievementType> _vtbl*)*puVar5;
                    if (this_01 != nullptr) {
                        this_04 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(*this_01)[(
                            unsigned long)(uVar6 & 255)];
                        if (this_04->unique() != '\0') {
                            this_04->reset();
                            if ((this_01 == this[14]._vptr) && ((uVar6 & 255) == *(unsigned int*)&this[15]._vptr)) {
                                this[14]._vptr = nullptr;
                                *(uint32_t*)&this[15]._vptr = 0;
                                *(uint32_t*)&this[13]._vptr = 4294967295;
                            }
                            ppLVar1 = &this_01[51].LoadList;
                            *(int*)ppLVar1 = *(int*)ppLVar1 - 1;
                            if (*(int*)ppLVar1 == 0) {
                                this[16]._vptr->DeAllocate(&this_01[51].CacheReset);
                                *puVar5 = 0;
                            }
                        }
                    }
                    uVar6 = uVar6 + 1 & 65535;
                    iVar7 = iVar7 - 1;
                } while (iVar7 != 0);
                *(unsigned int*)(this_03 + 2052) = uVar6;
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar4 = this_00->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x1005f32f0
    shared_ptr* ConfigTypePreloadPackedContainer<AchievementType>::List(int arg1, const DataStatus** arg2) {
        shared_ptr* psVar2;
        uint8_t** ppuVar3;

        if (*(int*)&this[6]._vptr != 2) {
            if (arg2 == nullptr) {
                return (shared_ptr*)PTR_NullConfigType_100ee6520;
            }
            ppuVar3 = &DataStatus::NOTLOADED;
            psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6520;
        LAB_1005f334b:
            *arg2 = (DataStatus*)*ppuVar3;
            return psVar2;
        }
        psVar2 = (shared_ptr*)FindConfigID(this, arg1);
        if (shared_ptr::operator_cast_to_bool(psVar2)) {
            if (arg2 == nullptr) {
                return psVar2;
            }
            ppuVar3 = &DataStatus::READY;
            goto LAB_1005f334b;
        }
        shared_ptr local_38;
        if (!(DecodeConfig(this, arg1, (shared_ptr<AchievementType>*)&local_38))) {
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::MISSING;
            LAB_1005f33c1:
                *arg2 = (DataStatus*)*ppuVar3;
            }
        } else {
            if (shared_ptr::operator_cast_to_bool(&local_38)) {
                if (arg2 != nullptr) {
                    *arg2 = (DataStatus*)DataStatus::READY;
                }
                psVar2 = (shared_ptr*)AddConfigID((ReturnValue*)this, (shared_ptr<AchievementType>*)&local_38, arg1);
                goto LAB_1005f33ce;
            }
            if (arg2 != nullptr) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_1005f33c1;
            }
        }
        psVar2 = (shared_ptr*)PTR_NullConfigType_100ee6520;
    LAB_1005f33ce:
        return psVar2;
    }

    // 0x1005f3400
    auto ConfigTypePreloadPackedContainer<AchievementType>::DirectFetch(int arg1) {
        if (*(int*)&this[6]._vptr != 2) {
            LogAssert("m_loadStep == BaseLoadAllConfigTypeContainer::LoadStep::DONE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      179, nullptr);
        }
        auto result;
        if (DecodeConfig(this, arg1, &result) == '\0') {
            LogAssert("exists",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      183, nullptr);
        }
        return result;
    }

    // 0x1005f3610
    ConfigTypePreloadPackedContainer<AchievementType>::~ConfigTypePreloadPackedContainer() {
        uint8_t* puVar1 = PTR_vtable_100ee8448;
        this[16]._vptr->PrintMetrics();
        CacheReset();
        ((this + 26))->~unique_ptr();
        ((this + 22))->~VBOMapper();
        ((this + 19))->~Array();
        ((this + 17))->~shared_ptr();
        ((this + 9))->~vector();
        ((this + 5))->~AutoSingleton();
    }

    // 0x1005f3700
    void ConfigTypePreloadPackedContainer<AchievementType>::CheckGroupExistence(
        DownloadWaitHandler& downloadWaitHandler, Js5Index* js5Index, unsigned int arg3, unsigned int arg4) {
        int* piVar1;

        if (js5Index == nullptr) {
            LogAssert("js5Index",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      365, nullptr);
        }
        if (js5Index->DoesGroupExist(arg3) == '\0') {
            piVar1 = (int*)((long)&this[7]._vptr + 4);
            *piVar1 = *piVar1 + 1;
        } else {
            downloadWaitHandler.SetExists(arg4);
        }
    }

    // 0x1005f3780
    void ConfigTypePreloadPackedContainer<AchievementType>::CheckDecodeProgress(
        const Js5ArchiveSettings& js5ArchiveSettings, Js5Index* js5Index, unsigned int arg3, unsigned int arg4) {
        int iVar1;
        Array<unsigned char>* this_00;
        TextureAtlasReference* pTVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        void* pvVar4;
        PacketT<Array<unsigned char>>* this_02;
        void* pvVar5;
        size_t sVar6;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)this[1]._vptr->GetGroup(local_48, js5ArchiveSettings, arg3, (Priority*)Priority::HIGHEST, true,
                                              true) == DataStatus::READY) {
            this_00 = (Array<unsigned char>*)(*((this + 19)))[(unsigned long)arg4];
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            this_00->set_max_size(pTVar3->GetTextureAtlas(), 0);
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*((this + 19)))[(unsigned long)arg4];
            pvVar4 = (void*)this_01->data();
            this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
            pvVar5 = (void*)this_02->GetDataPtr();
            pTVar3 = (TextureAtlasReference*)local_48.operator->();
            sVar6 = pTVar3->GetTextureAtlas();
            _memcpy(pvVar4, pvVar5, sVar6);
            iVar1 = js5Index->GetMaximumFileID(arg3);
            *(int*)((long)&this[7]._vptr + 4) = iVar1 + *(int*)((long)&this[7]._vptr + 4) + 1;
            ((DownloadWaitHandler*)(*((this + 26))).operator->())->Completed(arg4);
        }
    }

    // 0x1005f3920
    void ConfigTypePreloadPackedContainer<AchievementType>::PageList::ClearPageList(SimpleAllocator& simpleAllocator) {
        ConfigPage* this_00;
        uint64_t* puVar1;

        unsigned long arg1 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1];
            this_00 = (ConfigPage*)*puVar1;
            if (this_00 != nullptr) {
                this_00->Clear();
                simpleAllocator.DeAllocate((this_00 + 4104));
                *puVar1 = 0;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005f3a00
    void ConfigTypePreloadPackedContainer<AchievementType>::ConfigPage::Clear() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1];
            if (this_00->end() != 0) {
                this_00->reset();
            }
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x1005f3b30
    ConfigTypePreloadPackedContainer<AchievementType>*
    ConfigTypePreloadPackedContainer<AchievementType>::FindConfigID(int arg1) const {
        unsigned int uVar2;
        shared_ptr* this_00;
        long lVar3;
        unique_ptr<ConfigTypePreloadPackedContainer<AchievementType>::PageList>* puVar4;
        unsigned long uVar5;
        array<ConfigTypePreloadPackedContainer<AchievementType>::ConfigPage*, 256ul>* this_01;
        long* plVar6;
        ConfigTypePreloadPackedContainer<AchievementType>* pCVar7;
        unsigned long arg1_00;
        unsigned int uVar8;
        ConfigTypePreloadPackedContainer<AchievementType> _vtbl* this_02;
        vector<eastl::pair<int, int>>* this_03;

        if (arg1 == -1) {
            pCVar7 = this + 17;
        } else {
            if (*(int*)&this[13]._vptr == arg1) {
                if (this[14]._vptr != nullptr) {
                    this_00 = (shared_ptr*)(*this[14]._vptr)[(unsigned long)*(unsigned int*)&this[15]._vptr];
                    if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                        this_02 = this[14]._vptr;
                        uVar8 = *(unsigned int*)&this[15]._vptr;
                    LAB_1005f3c52:
                        pCVar7 = (ConfigTypePreloadPackedContainer<AchievementType>*)(*this_02)[(unsigned long)uVar8];
                        return pCVar7;
                    }
                }
                uVar8 = *(unsigned int*)&this[13]._vptr;
                uVar2 = this[3]._vptr->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigTypePreloadPackedContainer.h",
                                507, "Previously loaded config ID %d (archive ID %u) unexpectedly missing",
                                (unsigned long)uVar8, (unsigned long)uVar2);
            }
            this_03 = (vector<eastl::pair<int, int>>*)(this + 9);
            lVar3 = this_03->size();
            pCVar7 = (ConfigTypePreloadPackedContainer<AchievementType>*)PTR_NullConfigType_100ee6520;
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    puVar4 =
                        (unique_ptr<ConfigTypePreloadPackedContainer<AchievementType>::PageList>*)(*this_03)[arg1_00];
                    lVar3 = (*puVar4).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == (arg1 & 4294901760U)) {
                        puVar4 = (unique_ptr<
                                  ConfigTypePreloadPackedContainer<AchievementType>::PageList>*)(*this_03)[arg1_00];
                        this_01 =
                            (array<ConfigTypePreloadPackedContainer<AchievementType>::ConfigPage*, 256ul>*)(*puVar4)
                                .operator->();
                        plVar6 = (long*)(*this_01)[(unsigned long)((unsigned int)arg1 >> 8 & 255)];
                        this_02 = (ConfigTypePreloadPackedContainer<AchievementType> _vtbl*)*plVar6;
                        if (this_02 == nullptr) {
                            return pCVar7;
                        }
                        uVar8 = arg1 & 255;
                        goto LAB_1005f3c52;
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar5 = this_03->size();
                } while (arg1_00 < uVar5);
            }
        }
        return pCVar7;
    }

    // 0x1005f3c70
    uint64_t
    ConfigTypePreloadPackedContainer<AchievementType>::DecodeConfig(int arg1,
                                                                    shared_ptr<AchievementType>& achievementType) {
        PacketT<Array<unsigned char>>* arg1_00;
        ConfigTypePreloadPackedContainer<AchievementType> _vtbl* pCVar1;
        unsigned int arg1_01;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        uint8_t* puVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        void* pvVar8;
        Array<unsigned char>* this_00;
        void* pvVar9;
        size_t sVar10;
        uint64_t uVar11;
        long* plVar12;
        unsigned long arg1_03;
        Array<Array<unsigned char>>* this_01;
        shared_ptr<AchievementType> local_50;
        Js5Index* local_40;

        achievementType = *PTR_NullConfigType_100ee6520;
        if (arg1 < 0) {
            MakeSharedPool<AchievementType, 256>::MakeShared<BaseTemplateConfigTypeList<AchievementType>*&, int&>(
                (BaseTemplateConfigTypeList<AchievementType>**)&local_50, (int*)(this + 1));
            achievementType = local_50;
        LAB_1005f3dfb:
        LAB_1005f3e04:
            uVar11 = 1;
        } else {
            arg1_01 = this[1]._vptr->GetClientGroupID(arg1);
            uVar3 = this[1]._vptr->GetClientFileID(arg1);
            local_40 = nullptr;
            puVar6 =
                (uint8_t*)(**(void (**)(...))((this[2]._vptr)->_dtor + 24))(this[2]._vptr, &local_40, this[3]._vptr);
            if (puVar6 != DataStatus::MISSING) {
                if (local_40->DoesFileExist(arg1_01, uVar3) != '\0') {
                    if (puVar6 == DataStatus::READY) {
                        uVar3 = local_40->GetFileIndex(arg1_01, uVar3);
                        uVar4 = this[1]._vptr->GetUIHeight();
                        arg1_03 = 0;
                        if (1 < uVar4) {
                            arg1_03 = (unsigned long)arg1_01;
                        }
                        iVar5 = local_40->GetFileCount(arg1_01);
                        arg1_00 = (PacketT<Array<unsigned char>>*)(this + 22);
                        this_01 = (Array<Array<unsigned char>>*)(this + 19);
                        pvVar7 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                        if (iVar5 == 1) {
                            arg1_00->Reserve(pvVar7->end());
                            arg1_00->SetPos(0);
                            pvVar8 = (void*)arg1_00->GetDataPtr();
                            this_00 = (Array<unsigned char>*)(*this_01)[arg1_03];
                            pvVar9 = (void*)(*this_00)[0];
                            pvVar7 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[arg1_03];
                            sVar10 = pvVar7->end();
                            _memcpy(pvVar8, pvVar9, sVar10);
                        } else {
                            Js5DiskFileFormat::GetGroupFileData((PacketT<Array<unsigned char> _>*)arg1_00,
                                                                (Array<unsigned char>*)pvVar7, uVar3);
                        }
                        MakeSharedPool<AchievementType, 256>::MakeShared<BaseTemplateConfigTypeList<AchievementType>*&,
                                                                         int&>(
                            (BaseTemplateConfigTypeList<AchievementType>**)&local_50, (int*)(this + 1));
                        plVar12 = (long*)local_50.operator->();
                        puVar6 = (uint8_t*)(**(void (**)(...))(*plVar12 + 32))(plVar12, arg1_00);
                        if (puVar6 == DataStatus::READY) {
                            plVar12 = (long*)local_50.operator->();
                            (**(void (**)(...))(*plVar12 + 24))(plVar12);
                            pCVar1 = this[1]._vptr;
                            puVar6 = (uint8_t*)(**(void (**)(...))(pCVar1->_dtor + 72))(pCVar1, &local_50);
                            if (puVar6 == DataStatus::READY) {
                                achievementType = local_50;
                            }
                        }
                        goto LAB_1005f3dfb;
                    }
                    goto LAB_1005f3e04;
                }
            }
            uVar11 = 0;
        }
        return uVar11;
    }

    // 0x1005f3eb0
    auto
    ConfigTypePreloadPackedContainer<AchievementType>::AddConfigID(const shared_ptr<AchievementType>& achievementType,
                                                                   int arg2) {
        auto result;
        unsigned long uVar1;
        unique_ptr<ConfigTypePreloadPackedContainer<AchievementType>::PageList>* puVar2;
        long lVar3;
        array<ConfigTypePreloadPackedContainer<AchievementType>::ConfigPage*, 256ul>* paVar4;
        ReturnValue* pRVar5;
        ReturnValue this;
        ReturnValue* pRVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue local_48;
        unsigned int local_38;
        unsigned int local_34;

        if (arg2 == -1) {
            pRVar6 = &result + 17;
            *pRVar6 = achievementType;
        } else {
            local_34 = arg2 & 4294901760;
            pRVar6 = &result + 9;
            uVar1 = pRVar6->size();
            arg1 = 0;
            if (uVar1 != 0) {
                do {
                    puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<AchievementType>::PageList>*)(*pRVar6)[arg1];
                    lVar3 = (*puVar2).operator->();
                    if (*(unsigned int*)(lVar3 + 2048) == local_34)
                        break;
                    arg1 = (unsigned long)((int)arg1 + 1);
                } while (arg1 < uVar1);
            }
            if (uVar1 == arg1) {
                local_48 = std::make_unique<ConfigTypePreloadPackedContainer<AchievementType>::PageList, unsigned int&>(
                    local_34);
                eastl::vector<std::unique_ptr<ConfigTypePreloadPackedContainer<AchievementType>::PageList>>::
                    emplace_back<std::unique_ptr<ConfigTypePreloadPackedContainer<AchievementType>::PageList>>(
                        (vector<std::unique_ptr<ConfigTypePreloadPackedContainer<AchievementType>::PageList>>*)pRVar6,
                        (unique_ptr<ConfigTypePreloadPackedContainer<AchievementType>::PageList,
                                    std::default_delete<ConfigTypePreloadPackedContainer<AchievementType>::PageList>
                                        _>*)&local_48);
            }
            uVar1 = (unsigned long)(arg2 - local_34 >> 8);
            puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<AchievementType>::PageList>*)(*pRVar6)[arg1];
            paVar4 =
                (array<ConfigTypePreloadPackedContainer<AchievementType>::ConfigPage*, 256ul>*)(*puVar2).operator->();
            pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
            this = *pRVar5;
            uVar7 = arg2 & 255U;
            if (this == (ReturnValue)0) {
                local_38 = arg2 & 255U;
                this = (ReturnValue)AllocatePageBuffer((ConfigTypePreloadPackedContainer<AchievementType>*)&result);
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<AchievementType>::PageList>*)(*pRVar6)[arg1];
                paVar4 = (array<ConfigTypePreloadPackedContainer<AchievementType>::ConfigPage*, 256ul>*)(*puVar2)
                             .operator->();
                pRVar5 = (ReturnValue*)(*paVar4)[uVar1];
                *pRVar5 = this;
                puVar2 = (unique_ptr<ConfigTypePreloadPackedContainer<AchievementType>::PageList>*)(*pRVar6)[arg1];
                lVar3 = (*puVar2).operator->();
                if (*(unsigned int*)(lVar3 + 2048) != local_34) {
                    LogAssert("m_pageListContainer[thisPageList]->m_pageListID == pageListID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigTypePreloadPackedContainer.h",
                              469, nullptr);
                }
                uVar7 = local_38;
            }
            pRVar6 = (ReturnValue*)(*this)[(unsigned long)uVar7];
            *pRVar6 = achievementType;
            *(int*)((long)this + 4096) = *(int*)((long)this + 4096) + 1;
            *(int*)(&result + 13) = arg2;
            &result[14] = this;
            *(unsigned int*)(&result + 15) = uVar7;
        }
        return pRVar6;
    }

    // 0x1005f4220
    ConfigPage* ConfigTypePreloadPackedContainer<AchievementType>::AllocatePageBuffer() {
        AllocatedBlock local_28 = this[16]._vptr->Allocate(4128);
        void* pvVar1 = local_28.field_8;
        if (local_28.field_8 == nullptr) {
            LogAssert("block.m_address != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypePreloadPackedContainer.h",
                      534, nullptr);
        }
        new (local_28.field_8) ConfigPage();
        *(unsigned long*)((long)pvVar1 + 4120) = local_28.field_16;
        *(uint64_t*)((long)pvVar1 + 4104) = local_28._0_8_;
        *(void**)((long)pvVar1 + 4112) = local_28.field_8;
        return pvVar1;
    }

    // 0x1005f45c0
    ConfigTypePreloadPackedContainer<AchievementType>::PageList::PageList(unsigned int arg1) {
        uint64_t* puVar1;

        *(unsigned int*)(this + 2048) = arg1;
        *(uint32_t*)(this + 2052) = 0;
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint64_t*)(*this)[arg1_00];
            *puVar1 = 0;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
    }

    // 0x1005f4670
    ConfigTypePreloadPackedContainer<AchievementType>::ConfigPage::ConfigPage()
        : std::array<shared_ptr<AchievementType>, 256ul>() {
        *(uint32_t*)(this + 4096) = 0;
        new ((this + 4104)) SimpleAllocator::AllocatedBlock();
    }

} // namespace jag::game
