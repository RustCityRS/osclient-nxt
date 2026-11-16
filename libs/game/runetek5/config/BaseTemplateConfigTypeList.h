// libs/game/runetek5/config/BaseTemplateConfigTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    template <typename...> // 30 instantiations, e.g. <AchievementType>, <BASType>, <CursorType>
    class BaseTemplateConfigTypeList {
    public:
        // virtual methods in vtable order
        virtual ~BaseTemplateConfigTypeList();
        virtual void CacheResize(unsigned int arg1);
        virtual void LoadList();
        virtual void CacheReset();
        virtual void CacheClean(unsigned int arg1);
        virtual void IsPreloaded() const;
        virtual void GetPreloadProgress() const;
        virtual uint8_t* ListPostDecode(const shared_ptr<oldscape::configdecoder::OldscapeVarType>& arg1);
        BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy,
                                   const ModeGame* modeGame, const Language* language,
                                   Js5ResourceProvider& js5ResourceProvider,
                                   const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup,
                                   unsigned int arg7);
        void List(int arg1, const DataStatus** arg2);
    };

    // 0x10013f160
    BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>::BaseTemplateConfigTypeList(
        ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
        const Language* language, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg7)
        : BaseConfigTypeList(modeGame, language, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        ReturnValue local_38;

        unique_ptr<BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>>* this_00 =
            (unique_ptr<BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>>*)(this + 13);
        this_00->unique_ptr<true, void>();
        if (configTypeListContainerStrategy == 3) {
            local_38 = std::make_unique<ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType>,
                                        BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>&,
                                        Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>>::operator=(
                this_00,
                (unique_ptr<ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType>,
                            std::default_delete<ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType> _>
                                _>*)&local_38);
        } else if (configTypeListContainerStrategy == 2) {
            local_38 = std::make_unique<ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>,
                                        BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>&,
                                        Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>>::operator=(
                this_00,
                (unique_ptr<
                    ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>,
                    std::default_delete<ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType> _>
                        _>*)&local_38);
        } else {
            if (configTypeListContainerStrategy != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", configTypeListContainerStrategy);
            }
            local_38 =
                std::make_unique<ConfigTypeNoPreloadContainer<oldscape::configdecoder::OldscapeVarType>,
                                 BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&,
                                 unsigned int&>(*this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup, arg7);
            std::unique_ptr<BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>>::operator=(
                this_00,
                (unique_ptr<
                    ConfigTypeNoPreloadContainer<oldscape::configdecoder::OldscapeVarType>,
                    std::default_delete<ConfigTypeNoPreloadContainer<oldscape::configdecoder::OldscapeVarType> _>
                        _>*)&local_38);
        }
    }

    // 0x10013f2a0
    BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>::~BaseTemplateConfigTypeList() {
        ((this + 13))->~unique_ptr();
    }

    // 0x10013f300
    void BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>::CacheResize(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1);
    }

    // 0x10013f330
    void BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>::LoadList() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
    }

    // 0x10013f350
    void BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>::CacheReset() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x10013f370
    void BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>::CacheClean(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x10013f3a0
    void BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>::IsPreloaded() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x10013f3c0
    void BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>::GetPreloadProgress() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x10013f3e0
    uint8_t* BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>::ListPostDecode(
        const shared_ptr<oldscape::configdecoder::OldscapeVarType>& arg1) {
        return DataStatus::READY;
    }

    // 0x1003d50f0
    void BaseTemplateConfigTypeList<MSIType>::List(int arg1, const DataStatus** arg2) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 64))(plVar1, arg1, arg2);
    }

    // 0x1003e58d0
    void BaseTemplateConfigTypeList<SkyBoxType>::List(int arg1, const DataStatus** arg2) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 64))(plVar1, arg1, arg2);
    }

    // 0x100406180
    void BaseTemplateConfigTypeList<EnumType>::List(int arg1, const DataStatus** arg2) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 64))(plVar1, arg1, arg2);
    }

    // 0x1004087f0
    void BaseTemplateConfigTypeList<EffectAnimType>::List(int arg1, const DataStatus** arg2) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 64))(plVar1, arg1, arg2);
    }

    // 0x100422170
    void BaseTemplateConfigTypeList<WaterType>::List(int arg1, const DataStatus** arg2) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 64))(plVar1, arg1, arg2);
    }

    // 0x100426c00
    void BaseTemplateConfigTypeList<NPCType>::List(int arg1, const DataStatus** arg2) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 64))(plVar1, arg1, arg2);
    }

    // 0x100426d30
    void BaseTemplateConfigTypeList<BASType>::List(int arg1, const DataStatus** arg2) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 64))(plVar1, arg1, arg2);
    }

    // 0x100433360
    void BaseTemplateConfigTypeList<HitmarkType>::List(int arg1, const DataStatus** arg2) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 64))(plVar1, arg1, arg2);
    }

    // 0x100434040
    void BaseTemplateConfigTypeList<HeadbarType>::List(int arg1, const DataStatus** arg2) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 64))(plVar1, arg1, arg2);
    }

    // 0x100437f60
    void BaseTemplateConfigTypeList<LocType>::List(int arg1, const DataStatus** arg2) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 64))(plVar1, arg1, arg2);
    }

    // 0x10044ef70
    void BaseTemplateConfigTypeList<LightType>::List(int arg1, const DataStatus** arg2) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 64))(plVar1, arg1, arg2);
    }

    // 0x10049bd40
    void BaseTemplateConfigTypeList<IDKType>::List(int arg1, const DataStatus** arg2) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 64))(plVar1, arg1, arg2);
    }

    // 0x1004bf980
    void BaseTemplateConfigTypeList<InvType>::List(int arg1, const DataStatus** arg2) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 64))(plVar1, arg1, arg2);
    }

    // 0x1004c0d40
    void BaseTemplateConfigTypeList<WorldAreaType>::List(int arg1, const DataStatus** arg2) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 64))(plVar1, arg1, arg2);
    }

    // 0x1004c2b70
    void BaseTemplateConfigTypeList<WorldAreaType>::CacheResize(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1);
    }

    // 0x1004c2ba0
    void BaseTemplateConfigTypeList<WorldAreaType>::LoadList() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
    }

    // 0x1004c2c20
    void BaseTemplateConfigTypeList<WorldAreaType>::IsPreloaded() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x1004c2c40
    void BaseTemplateConfigTypeList<WorldAreaType>::GetPreloadProgress() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x1004c2db0
    BaseTemplateConfigTypeList<WorldAreaType>::~BaseTemplateConfigTypeList() {
        ((this + 13))->~unique_ptr();
    }

    // 0x1004c2e70
    void BaseTemplateConfigTypeList<WorldAreaType>::CacheReset() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x1004c2e90
    void BaseTemplateConfigTypeList<WorldAreaType>::CacheClean(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x1004d1b00
    BaseTemplateConfigTypeList<VarType>::BaseTemplateConfigTypeList(
        ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
        const Language* language, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg7)
        : BaseConfigTypeList(modeGame, language, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        ReturnValue local_38;

        unique_ptr<BaseConfigTypeContainer<VarType>>* this_00 =
            (unique_ptr<BaseConfigTypeContainer<VarType>>*)(this + 13);
        this_00->unique_ptr<true, void>();
        if (configTypeListContainerStrategy == 3) {
            local_38 = std::make_unique<ConfigTypeLoadAllContainer<VarType>, BaseTemplateConfigTypeList<VarType>&,
                                        Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<VarType>>::operator=(
                this_00, (unique_ptr<ConfigTypeLoadAllContainer<VarType>,
                                     std::default_delete<ConfigTypeLoadAllContainer<VarType> _> _>*)&local_38);
        } else if (configTypeListContainerStrategy == 2) {
            local_38 = std::make_unique<ConfigTypePreloadPackedContainer<VarType>, BaseTemplateConfigTypeList<VarType>&,
                                        Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<VarType>>::operator=(
                this_00, (unique_ptr<ConfigTypePreloadPackedContainer<VarType>,
                                     std::default_delete<ConfigTypePreloadPackedContainer<VarType> _> _>*)&local_38);
        } else {
            if (configTypeListContainerStrategy != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", configTypeListContainerStrategy);
            }
            local_38 =
                std::make_unique<ConfigTypeNoPreloadContainer<VarType>, BaseTemplateConfigTypeList<VarType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&,
                                 unsigned int&>(*this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup, arg7);
            std::unique_ptr<BaseConfigTypeContainer<VarType>>::operator=(
                this_00, (unique_ptr<ConfigTypeNoPreloadContainer<VarType>,
                                     std::default_delete<ConfigTypeNoPreloadContainer<VarType> _> _>*)&local_38);
        }
    }

    // 0x1004d1db0
    void BaseTemplateConfigTypeList<VarType>::CacheResize(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1);
    }

    // 0x1004d1de0
    void BaseTemplateConfigTypeList<VarType>::LoadList() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
    }

    // 0x1004d1e00
    void BaseTemplateConfigTypeList<VarType>::CacheReset() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x1004d1e20
    void BaseTemplateConfigTypeList<VarType>::CacheClean(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x1004d1e50
    void BaseTemplateConfigTypeList<VarType>::IsPreloaded() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x1004d1e70
    void BaseTemplateConfigTypeList<VarType>::GetPreloadProgress() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x1004d6aa0
    void BaseTemplateConfigTypeList<QuestType>::List(int arg1, const DataStatus** arg2) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 64))(plVar1, arg1, arg2);
    }

    // 0x1004dc9d0
    BaseTemplateConfigTypeList<VarType>::~BaseTemplateConfigTypeList() {
        ((this + 13))->~unique_ptr();
    }

    // 0x1004de680
    void BaseTemplateConfigTypeList<SeqGroupType>::List(int arg1, const DataStatus** arg2) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 64))(plVar1, arg1, arg2);
    }

    // 0x1004e0180
    BaseTemplateConfigTypeList<SeqType>::BaseTemplateConfigTypeList(
        ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
        const Language* language, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg7)
        : BaseConfigTypeList(modeGame, language, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        ReturnValue local_38;

        unique_ptr<BaseConfigTypeContainer<SeqType>>* this_00 =
            (unique_ptr<BaseConfigTypeContainer<SeqType>>*)(this + 13);
        this_00->unique_ptr<true, void>();
        if (configTypeListContainerStrategy == 3) {
            local_38 = std::make_unique<ConfigTypeLoadAllContainer<SeqType>, BaseTemplateConfigTypeList<SeqType>&,
                                        Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<SeqType>>::operator=(
                this_00, (unique_ptr<ConfigTypeLoadAllContainer<SeqType>,
                                     std::default_delete<ConfigTypeLoadAllContainer<SeqType> _> _>*)&local_38);
        } else if (configTypeListContainerStrategy == 2) {
            local_38 = std::make_unique<ConfigTypePreloadPackedContainer<SeqType>, BaseTemplateConfigTypeList<SeqType>&,
                                        Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<SeqType>>::operator=(
                this_00, (unique_ptr<ConfigTypePreloadPackedContainer<SeqType>,
                                     std::default_delete<ConfigTypePreloadPackedContainer<SeqType> _> _>*)&local_38);
        } else {
            if (configTypeListContainerStrategy != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", configTypeListContainerStrategy);
            }
            local_38 =
                std::make_unique<ConfigTypeNoPreloadContainer<SeqType>, BaseTemplateConfigTypeList<SeqType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&,
                                 unsigned int&>(*this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup, arg7);
            std::unique_ptr<BaseConfigTypeContainer<SeqType>>::operator=(
                this_00, (unique_ptr<ConfigTypeNoPreloadContainer<SeqType>,
                                     std::default_delete<ConfigTypeNoPreloadContainer<SeqType> _> _>*)&local_38);
        }
    }

    // 0x1004e02f0
    BaseTemplateConfigTypeList<SeqType>::~BaseTemplateConfigTypeList() {
        ((this + 13))->~unique_ptr();
    }

    // 0x1004e1520
    void BaseTemplateConfigTypeList<SeqType>::CacheResize(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1);
    }

    // 0x1004e1550
    void BaseTemplateConfigTypeList<SeqType>::LoadList() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
    }

    // 0x1004e15e0
    void BaseTemplateConfigTypeList<SeqType>::IsPreloaded() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x1004e1600
    void BaseTemplateConfigTypeList<SeqType>::GetPreloadProgress() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x1004e1cd0
    void BaseTemplateConfigTypeList<SeqType>::CacheReset() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x1004e1cf0
    void BaseTemplateConfigTypeList<SeqType>::CacheClean(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x1004f2f70
    BaseTemplateConfigTypeList<ObjType>::BaseTemplateConfigTypeList(
        ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
        const Language* language, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg7)
        : BaseConfigTypeList(modeGame, language, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        ReturnValue local_38;

        unique_ptr<BaseConfigTypeContainer<ObjType>>* this_00 =
            (unique_ptr<BaseConfigTypeContainer<ObjType>>*)(this + 13);
        this_00->unique_ptr<true, void>();
        if (configTypeListContainerStrategy == 3) {
            local_38 = std::make_unique<ConfigTypeLoadAllContainer<ObjType>, BaseTemplateConfigTypeList<ObjType>&,
                                        Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<ObjType>>::operator=(
                this_00, (unique_ptr<ConfigTypeLoadAllContainer<ObjType>,
                                     std::default_delete<ConfigTypeLoadAllContainer<ObjType> _> _>*)&local_38);
        } else if (configTypeListContainerStrategy == 2) {
            local_38 = std::make_unique<ConfigTypePreloadPackedContainer<ObjType>, BaseTemplateConfigTypeList<ObjType>&,
                                        Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<ObjType>>::operator=(
                this_00, (unique_ptr<ConfigTypePreloadPackedContainer<ObjType>,
                                     std::default_delete<ConfigTypePreloadPackedContainer<ObjType> _> _>*)&local_38);
        } else {
            if (configTypeListContainerStrategy != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", configTypeListContainerStrategy);
            }
            local_38 =
                std::make_unique<ConfigTypeNoPreloadContainer<ObjType>, BaseTemplateConfigTypeList<ObjType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&,
                                 unsigned int&>(*this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup, arg7);
            std::unique_ptr<BaseConfigTypeContainer<ObjType>>::operator=(
                this_00, (unique_ptr<ConfigTypeNoPreloadContainer<ObjType>,
                                     std::default_delete<ConfigTypeNoPreloadContainer<ObjType> _> _>*)&local_38);
        }
    }

    // 0x1004f3130
    BaseTemplateConfigTypeList<ObjType>::~BaseTemplateConfigTypeList() {
        ((this + 13))->~unique_ptr();
    }

    // 0x1004f35d0
    void BaseTemplateConfigTypeList<ObjType>::List(int arg1, const DataStatus** arg2) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 64))(plVar1, arg1, arg2);
    }

    // 0x1004f6a50
    void BaseTemplateConfigTypeList<ObjType>::CacheResize(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1);
    }

    // 0x1004f6a80
    void BaseTemplateConfigTypeList<ObjType>::LoadList() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
    }

    // 0x1004f6b00
    void BaseTemplateConfigTypeList<ObjType>::IsPreloaded() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x1004f6b20
    void BaseTemplateConfigTypeList<ObjType>::GetPreloadProgress() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x1004f6df0
    void BaseTemplateConfigTypeList<ObjType>::CacheReset() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x1004f6e10
    void BaseTemplateConfigTypeList<ObjType>::CacheClean(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x100505b30
    BaseTemplateConfigTypeList<NPCType>::BaseTemplateConfigTypeList(
        ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
        const Language* language, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg7)
        : BaseConfigTypeList(modeGame, language, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        ReturnValue local_38;

        unique_ptr<BaseConfigTypeContainer<NPCType>>* this_00 =
            (unique_ptr<BaseConfigTypeContainer<NPCType>>*)(this + 13);
        this_00->unique_ptr<true, void>();
        if (configTypeListContainerStrategy == 3) {
            local_38 = std::make_unique<ConfigTypeLoadAllContainer<NPCType>, BaseTemplateConfigTypeList<NPCType>&,
                                        Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<NPCType>>::operator=(
                this_00, (unique_ptr<ConfigTypeLoadAllContainer<NPCType>,
                                     std::default_delete<ConfigTypeLoadAllContainer<NPCType> _> _>*)&local_38);
        } else if (configTypeListContainerStrategy == 2) {
            local_38 = std::make_unique<ConfigTypePreloadPackedContainer<NPCType>, BaseTemplateConfigTypeList<NPCType>&,
                                        Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<NPCType>>::operator=(
                this_00, (unique_ptr<ConfigTypePreloadPackedContainer<NPCType>,
                                     std::default_delete<ConfigTypePreloadPackedContainer<NPCType> _> _>*)&local_38);
        } else {
            if (configTypeListContainerStrategy != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", configTypeListContainerStrategy);
            }
            local_38 =
                std::make_unique<ConfigTypeNoPreloadContainer<NPCType>, BaseTemplateConfigTypeList<NPCType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&,
                                 unsigned int&>(*this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup, arg7);
            std::unique_ptr<BaseConfigTypeContainer<NPCType>>::operator=(
                this_00, (unique_ptr<ConfigTypeNoPreloadContainer<NPCType>,
                                     std::default_delete<ConfigTypeNoPreloadContainer<NPCType> _> _>*)&local_38);
        }
    }

    // 0x100505ca0
    BaseTemplateConfigTypeList<NPCType>::~BaseTemplateConfigTypeList() {
        ((this + 13))->~unique_ptr();
    }

    // 0x10050a180
    void BaseTemplateConfigTypeList<NPCType>::CacheResize(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1);
    }

    // 0x10050a1b0
    void BaseTemplateConfigTypeList<NPCType>::LoadList() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
    }

    // 0x10050a240
    void BaseTemplateConfigTypeList<NPCType>::IsPreloaded() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x10050a260
    void BaseTemplateConfigTypeList<NPCType>::GetPreloadProgress() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x10050ad90
    void BaseTemplateConfigTypeList<NPCType>::CacheReset() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x10050adb0
    void BaseTemplateConfigTypeList<NPCType>::CacheClean(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x100514ae0
    void BaseTemplateConfigTypeList<ParamType>::List(int arg1, const DataStatus** arg2) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 64))(plVar1, arg1, arg2);
    }

    // 0x100515980
    BaseTemplateConfigTypeList<LocType>::BaseTemplateConfigTypeList(
        ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
        const Language* language, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg7)
        : BaseConfigTypeList(modeGame, language, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        ReturnValue local_38;

        unique_ptr<BaseConfigTypeContainer<LocType>>* this_00 =
            (unique_ptr<BaseConfigTypeContainer<LocType>>*)(this + 13);
        this_00->unique_ptr<true, void>();
        if (configTypeListContainerStrategy == 3) {
            local_38 = std::make_unique<ConfigTypeLoadAllContainer<LocType>, BaseTemplateConfigTypeList<LocType>&,
                                        Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<LocType>>::operator=(
                this_00, (unique_ptr<ConfigTypeLoadAllContainer<LocType>,
                                     std::default_delete<ConfigTypeLoadAllContainer<LocType> _> _>*)&local_38);
        } else if (configTypeListContainerStrategy == 2) {
            local_38 = std::make_unique<ConfigTypePreloadPackedContainer<LocType>, BaseTemplateConfigTypeList<LocType>&,
                                        Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<LocType>>::operator=(
                this_00, (unique_ptr<ConfigTypePreloadPackedContainer<LocType>,
                                     std::default_delete<ConfigTypePreloadPackedContainer<LocType> _> _>*)&local_38);
        } else {
            if (configTypeListContainerStrategy != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", configTypeListContainerStrategy);
            }
            local_38 =
                std::make_unique<ConfigTypeNoPreloadContainer<LocType>, BaseTemplateConfigTypeList<LocType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&,
                                 unsigned int&>(*this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup, arg7);
            std::unique_ptr<BaseConfigTypeContainer<LocType>>::operator=(
                this_00, (unique_ptr<ConfigTypeNoPreloadContainer<LocType>,
                                     std::default_delete<ConfigTypeNoPreloadContainer<LocType> _> _>*)&local_38);
        }
    }

    // 0x100515ad0
    BaseTemplateConfigTypeList<LocType>::~BaseTemplateConfigTypeList() {
        ((this + 13))->~unique_ptr();
    }

    // 0x100517880
    void BaseTemplateConfigTypeList<MapElementType>::List(int arg1, const DataStatus** arg2) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 64))(plVar1, arg1, arg2);
    }

    // 0x100518730
    void BaseTemplateConfigTypeList<LocType>::CacheResize(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1);
    }

    // 0x100518760
    void BaseTemplateConfigTypeList<LocType>::LoadList() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
    }

    // 0x1005187e0
    void BaseTemplateConfigTypeList<LocType>::IsPreloaded() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x100518800
    void BaseTemplateConfigTypeList<LocType>::GetPreloadProgress() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x100518860
    void BaseTemplateConfigTypeList<LocType>::CacheReset() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x100518880
    void BaseTemplateConfigTypeList<LocType>::CacheClean(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x100556a20
    void BaseTemplateConfigTypeList<AchievementType>::List(int arg1, const DataStatus** arg2) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 64))(plVar1, arg1, arg2);
    }

    // 0x1005655f0
    void BaseTemplateConfigTypeList<VarType>::List(int arg1, const DataStatus** arg2) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 64))(plVar1, arg1, arg2);
    }

    // 0x100565670
    void BaseTemplateConfigTypeList<VarBitType>::List(int arg1, const DataStatus** arg2) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 64))(plVar1, arg1, arg2);
    }

    // 0x1005713c0
    BaseTemplateConfigTypeList<ParamType>::BaseTemplateConfigTypeList(
        ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
        const Language* language, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg7)
        : BaseConfigTypeList(modeGame, language, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        ReturnValue local_38;

        unique_ptr<BaseConfigTypeContainer<ParamType>>* this_00 =
            (unique_ptr<BaseConfigTypeContainer<ParamType>>*)(this + 13);
        this_00->unique_ptr<true, void>();
        if (configTypeListContainerStrategy == 3) {
            local_38 = std::make_unique<ConfigTypeLoadAllContainer<ParamType>, BaseTemplateConfigTypeList<ParamType>&,
                                        Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<ParamType>>::operator=(
                this_00, (unique_ptr<ConfigTypeLoadAllContainer<ParamType>,
                                     std::default_delete<ConfigTypeLoadAllContainer<ParamType> _> _>*)&local_38);
        } else if (configTypeListContainerStrategy == 2) {
            local_38 =
                std::make_unique<ConfigTypePreloadPackedContainer<ParamType>, BaseTemplateConfigTypeList<ParamType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                    *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<ParamType>>::operator=(
                this_00, (unique_ptr<ConfigTypePreloadPackedContainer<ParamType>,
                                     std::default_delete<ConfigTypePreloadPackedContainer<ParamType> _> _>*)&local_38);
        } else {
            if (configTypeListContainerStrategy != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", configTypeListContainerStrategy);
            }
            local_38 =
                std::make_unique<ConfigTypeNoPreloadContainer<ParamType>, BaseTemplateConfigTypeList<ParamType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&,
                                 unsigned int&>(*this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup, arg7);
            std::unique_ptr<BaseConfigTypeContainer<ParamType>>::operator=(
                this_00, (unique_ptr<ConfigTypeNoPreloadContainer<ParamType>,
                                     std::default_delete<ConfigTypeNoPreloadContainer<ParamType> _> _>*)&local_38);
        }
    }

    // 0x100571530
    void BaseTemplateConfigTypeList<ParamType>::CacheResize(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1);
    }

    // 0x100571560
    void BaseTemplateConfigTypeList<ParamType>::LoadList() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
    }

    // 0x100571580
    void BaseTemplateConfigTypeList<ParamType>::CacheReset() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x1005715a0
    void BaseTemplateConfigTypeList<ParamType>::CacheClean(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x1005715d0
    void BaseTemplateConfigTypeList<ParamType>::IsPreloaded() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x1005715f0
    void BaseTemplateConfigTypeList<ParamType>::GetPreloadProgress() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x100576c50
    BaseTemplateConfigTypeList<ParamType>::~BaseTemplateConfigTypeList() {
        ((this + 13))->~unique_ptr();
    }

    // 0x100576da0
    BaseTemplateConfigTypeList<DBRowType>::BaseTemplateConfigTypeList(
        ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
        const Language* language, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg7)
        : BaseConfigTypeList(modeGame, language, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        ReturnValue local_38;

        unique_ptr<BaseConfigTypeContainer<DBRowType>>* this_00 =
            (unique_ptr<BaseConfigTypeContainer<DBRowType>>*)(this + 13);
        this_00->unique_ptr<true, void>();
        if (configTypeListContainerStrategy == 3) {
            local_38 = std::make_unique<ConfigTypeLoadAllContainer<DBRowType>, BaseTemplateConfigTypeList<DBRowType>&,
                                        Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<DBRowType>>::operator=(
                this_00, (unique_ptr<ConfigTypeLoadAllContainer<DBRowType>,
                                     std::default_delete<ConfigTypeLoadAllContainer<DBRowType> _> _>*)&local_38);
        } else if (configTypeListContainerStrategy == 2) {
            local_38 =
                std::make_unique<ConfigTypePreloadPackedContainer<DBRowType>, BaseTemplateConfigTypeList<DBRowType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                    *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<DBRowType>>::operator=(
                this_00, (unique_ptr<ConfigTypePreloadPackedContainer<DBRowType>,
                                     std::default_delete<ConfigTypePreloadPackedContainer<DBRowType> _> _>*)&local_38);
        } else {
            if (configTypeListContainerStrategy != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", configTypeListContainerStrategy);
            }
            local_38 =
                std::make_unique<ConfigTypeNoPreloadContainer<DBRowType>, BaseTemplateConfigTypeList<DBRowType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&,
                                 unsigned int&>(*this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup, arg7);
            std::unique_ptr<BaseConfigTypeContainer<DBRowType>>::operator=(
                this_00, (unique_ptr<ConfigTypeNoPreloadContainer<DBRowType>,
                                     std::default_delete<ConfigTypeNoPreloadContainer<DBRowType> _> _>*)&local_38);
        }
    }

    // 0x100576f10
    void BaseTemplateConfigTypeList<DBRowType>::CacheResize(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1);
    }

    // 0x100576f40
    void BaseTemplateConfigTypeList<DBRowType>::LoadList() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
    }

    // 0x100576f60
    void BaseTemplateConfigTypeList<DBRowType>::CacheReset() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x100576f80
    void BaseTemplateConfigTypeList<DBRowType>::CacheClean(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x100576fb0
    void BaseTemplateConfigTypeList<DBRowType>::IsPreloaded() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x100576fd0
    void BaseTemplateConfigTypeList<DBRowType>::GetPreloadProgress() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x10057c710
    BaseTemplateConfigTypeList<DBRowType>::~BaseTemplateConfigTypeList() {
        ((this + 13))->~unique_ptr();
    }

    // 0x10057c860
    BaseTemplateConfigTypeList<DBTableType>::BaseTemplateConfigTypeList(
        ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
        const Language* language, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg7)
        : BaseConfigTypeList(modeGame, language, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        ReturnValue local_38;

        unique_ptr<BaseConfigTypeContainer<DBTableType>>* this_00 =
            (unique_ptr<BaseConfigTypeContainer<DBTableType>>*)(this + 13);
        this_00->unique_ptr<true, void>();
        if (configTypeListContainerStrategy == 3) {
            local_38 =
                std::make_unique<ConfigTypeLoadAllContainer<DBTableType>, BaseTemplateConfigTypeList<DBTableType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                    *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<DBTableType>>::operator=(
                this_00, (unique_ptr<ConfigTypeLoadAllContainer<DBTableType>,
                                     std::default_delete<ConfigTypeLoadAllContainer<DBTableType> _> _>*)&local_38);
        } else if (configTypeListContainerStrategy == 2) {
            local_38 = std::make_unique<ConfigTypePreloadPackedContainer<DBTableType>,
                                        BaseTemplateConfigTypeList<DBTableType>&, Js5ResourceProvider&,
                                        Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<DBTableType>>::operator=(
                this_00,
                (unique_ptr<ConfigTypePreloadPackedContainer<DBTableType>,
                            std::default_delete<ConfigTypePreloadPackedContainer<DBTableType> _> _>*)&local_38);
        } else {
            if (configTypeListContainerStrategy != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", configTypeListContainerStrategy);
            }
            local_38 =
                std::make_unique<ConfigTypeNoPreloadContainer<DBTableType>, BaseTemplateConfigTypeList<DBTableType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&,
                                 unsigned int&>(*this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup, arg7);
            std::unique_ptr<BaseConfigTypeContainer<DBTableType>>::operator=(
                this_00, (unique_ptr<ConfigTypeNoPreloadContainer<DBTableType>,
                                     std::default_delete<ConfigTypeNoPreloadContainer<DBTableType> _> _>*)&local_38);
        }
    }

    // 0x10057c9d0
    void BaseTemplateConfigTypeList<DBTableType>::CacheResize(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1);
    }

    // 0x10057ca00
    void BaseTemplateConfigTypeList<DBTableType>::LoadList() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
    }

    // 0x10057ca20
    void BaseTemplateConfigTypeList<DBTableType>::CacheReset() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x10057ca40
    void BaseTemplateConfigTypeList<DBTableType>::CacheClean(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x10057ca70
    void BaseTemplateConfigTypeList<DBTableType>::IsPreloaded() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x10057ca90
    void BaseTemplateConfigTypeList<DBTableType>::GetPreloadProgress() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x100581e00
    BaseTemplateConfigTypeList<DBTableType>::~BaseTemplateConfigTypeList() {
        ((this + 13))->~unique_ptr();
    }

    // 0x100581f50
    BaseTemplateConfigTypeList<InvType>::BaseTemplateConfigTypeList(
        ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
        const Language* language, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg7)
        : BaseConfigTypeList(modeGame, language, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        ReturnValue local_38;

        unique_ptr<BaseConfigTypeContainer<InvType>>* this_00 =
            (unique_ptr<BaseConfigTypeContainer<InvType>>*)(this + 13);
        this_00->unique_ptr<true, void>();
        if (configTypeListContainerStrategy == 3) {
            local_38 = std::make_unique<ConfigTypeLoadAllContainer<InvType>, BaseTemplateConfigTypeList<InvType>&,
                                        Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<InvType>>::operator=(
                this_00, (unique_ptr<ConfigTypeLoadAllContainer<InvType>,
                                     std::default_delete<ConfigTypeLoadAllContainer<InvType> _> _>*)&local_38);
        } else if (configTypeListContainerStrategy == 2) {
            local_38 = std::make_unique<ConfigTypePreloadPackedContainer<InvType>, BaseTemplateConfigTypeList<InvType>&,
                                        Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<InvType>>::operator=(
                this_00, (unique_ptr<ConfigTypePreloadPackedContainer<InvType>,
                                     std::default_delete<ConfigTypePreloadPackedContainer<InvType> _> _>*)&local_38);
        } else {
            if (configTypeListContainerStrategy != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", configTypeListContainerStrategy);
            }
            local_38 =
                std::make_unique<ConfigTypeNoPreloadContainer<InvType>, BaseTemplateConfigTypeList<InvType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&,
                                 unsigned int&>(*this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup, arg7);
            std::unique_ptr<BaseConfigTypeContainer<InvType>>::operator=(
                this_00, (unique_ptr<ConfigTypeNoPreloadContainer<InvType>,
                                     std::default_delete<ConfigTypeNoPreloadContainer<InvType> _> _>*)&local_38);
        }
    }

    // 0x1005820c0
    void BaseTemplateConfigTypeList<InvType>::CacheResize(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1);
    }

    // 0x1005820f0
    void BaseTemplateConfigTypeList<InvType>::LoadList() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
    }

    // 0x100582110
    void BaseTemplateConfigTypeList<InvType>::CacheReset() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x100582130
    void BaseTemplateConfigTypeList<InvType>::CacheClean(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x100582160
    void BaseTemplateConfigTypeList<InvType>::IsPreloaded() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x100582180
    void BaseTemplateConfigTypeList<InvType>::GetPreloadProgress() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x1005874e0
    BaseTemplateConfigTypeList<InvType>::~BaseTemplateConfigTypeList() {
        ((this + 13))->~unique_ptr();
    }

    // 0x100587620
    BaseTemplateConfigTypeList<VarBitType>::BaseTemplateConfigTypeList(
        ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
        const Language* language, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg7)
        : BaseConfigTypeList(modeGame, language, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        ReturnValue local_38;

        unique_ptr<BaseConfigTypeContainer<VarBitType>>* this_00 =
            (unique_ptr<BaseConfigTypeContainer<VarBitType>>*)(this + 13);
        this_00->unique_ptr<true, void>();
        if (configTypeListContainerStrategy == 3) {
            local_38 = std::make_unique<ConfigTypeLoadAllContainer<VarBitType>, BaseTemplateConfigTypeList<VarBitType>&,
                                        Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<VarBitType>>::operator=(
                this_00, (unique_ptr<ConfigTypeLoadAllContainer<VarBitType>,
                                     std::default_delete<ConfigTypeLoadAllContainer<VarBitType> _> _>*)&local_38);
        } else if (configTypeListContainerStrategy == 2) {
            local_38 =
                std::make_unique<ConfigTypePreloadPackedContainer<VarBitType>, BaseTemplateConfigTypeList<VarBitType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                    *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<VarBitType>>::operator=(
                this_00, (unique_ptr<ConfigTypePreloadPackedContainer<VarBitType>,
                                     std::default_delete<ConfigTypePreloadPackedContainer<VarBitType> _> _>*)&local_38);
        } else {
            if (configTypeListContainerStrategy != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", configTypeListContainerStrategy);
            }
            local_38 =
                std::make_unique<ConfigTypeNoPreloadContainer<VarBitType>, BaseTemplateConfigTypeList<VarBitType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&,
                                 unsigned int&>(*this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup, arg7);
            std::unique_ptr<BaseConfigTypeContainer<VarBitType>>::operator=(
                this_00, (unique_ptr<ConfigTypeNoPreloadContainer<VarBitType>,
                                     std::default_delete<ConfigTypeNoPreloadContainer<VarBitType> _> _>*)&local_38);
        }
    }

    // 0x100587790
    void BaseTemplateConfigTypeList<VarBitType>::CacheResize(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1);
    }

    // 0x1005877c0
    void BaseTemplateConfigTypeList<VarBitType>::LoadList() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
    }

    // 0x1005877e0
    void BaseTemplateConfigTypeList<VarBitType>::CacheReset() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x100587800
    void BaseTemplateConfigTypeList<VarBitType>::CacheClean(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x100587830
    void BaseTemplateConfigTypeList<VarBitType>::IsPreloaded() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x100587850
    void BaseTemplateConfigTypeList<VarBitType>::GetPreloadProgress() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x10058b850
    BaseTemplateConfigTypeList<VarBitType>::~BaseTemplateConfigTypeList() {
        ((this + 13))->~unique_ptr();
    }

    // 0x10058b9f0
    BaseTemplateConfigTypeList<BASType>::BaseTemplateConfigTypeList(
        ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
        const Language* language, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg7)
        : BaseConfigTypeList(modeGame, language, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        ReturnValue local_38;

        unique_ptr<BaseConfigTypeContainer<BASType>>* this_00 =
            (unique_ptr<BaseConfigTypeContainer<BASType>>*)(this + 13);
        this_00->unique_ptr<true, void>();
        if (configTypeListContainerStrategy == 3) {
            local_38 = std::make_unique<ConfigTypeLoadAllContainer<BASType>, BaseTemplateConfigTypeList<BASType>&,
                                        Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<BASType>>::operator=(
                this_00, (unique_ptr<ConfigTypeLoadAllContainer<BASType>,
                                     std::default_delete<ConfigTypeLoadAllContainer<BASType> _> _>*)&local_38);
        } else if (configTypeListContainerStrategy == 2) {
            local_38 = std::make_unique<ConfigTypePreloadPackedContainer<BASType>, BaseTemplateConfigTypeList<BASType>&,
                                        Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<BASType>>::operator=(
                this_00, (unique_ptr<ConfigTypePreloadPackedContainer<BASType>,
                                     std::default_delete<ConfigTypePreloadPackedContainer<BASType> _> _>*)&local_38);
        } else {
            if (configTypeListContainerStrategy != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", configTypeListContainerStrategy);
            }
            local_38 =
                std::make_unique<ConfigTypeNoPreloadContainer<BASType>, BaseTemplateConfigTypeList<BASType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&,
                                 unsigned int&>(*this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup, arg7);
            std::unique_ptr<BaseConfigTypeContainer<BASType>>::operator=(
                this_00, (unique_ptr<ConfigTypeNoPreloadContainer<BASType>,
                                     std::default_delete<ConfigTypeNoPreloadContainer<BASType> _> _>*)&local_38);
        }
    }

    // 0x10058bb60
    void BaseTemplateConfigTypeList<BASType>::CacheResize(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1);
    }

    // 0x10058bb90
    void BaseTemplateConfigTypeList<BASType>::LoadList() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
    }

    // 0x10058bbb0
    void BaseTemplateConfigTypeList<BASType>::CacheReset() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x10058bbd0
    void BaseTemplateConfigTypeList<BASType>::CacheClean(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x10058bc00
    void BaseTemplateConfigTypeList<BASType>::IsPreloaded() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x10058bc20
    void BaseTemplateConfigTypeList<BASType>::GetPreloadProgress() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x100591000
    BaseTemplateConfigTypeList<BASType>::~BaseTemplateConfigTypeList() {
        ((this + 13))->~unique_ptr();
    }

    // 0x100591150
    BaseTemplateConfigTypeList<FloorUnderlayType>::BaseTemplateConfigTypeList(
        ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
        const Language* language, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg7)
        : BaseConfigTypeList(modeGame, language, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        ReturnValue local_38;

        unique_ptr<BaseConfigTypeContainer<FloorUnderlayType>>* this_00 =
            (unique_ptr<BaseConfigTypeContainer<FloorUnderlayType>>*)(this + 13);
        this_00->unique_ptr<true, void>();
        if (configTypeListContainerStrategy == 3) {
            local_38 = std::make_unique<ConfigTypeLoadAllContainer<FloorUnderlayType>,
                                        BaseTemplateConfigTypeList<FloorUnderlayType>&, Js5ResourceProvider&,
                                        Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<FloorUnderlayType>>::operator=(
                this_00,
                (unique_ptr<ConfigTypeLoadAllContainer<FloorUnderlayType>,
                            std::default_delete<ConfigTypeLoadAllContainer<FloorUnderlayType> _> _>*)&local_38);
        } else if (configTypeListContainerStrategy == 2) {
            local_38 = std::make_unique<ConfigTypePreloadPackedContainer<FloorUnderlayType>,
                                        BaseTemplateConfigTypeList<FloorUnderlayType>&, Js5ResourceProvider&,
                                        Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<FloorUnderlayType>>::operator=(
                this_00,
                (unique_ptr<ConfigTypePreloadPackedContainer<FloorUnderlayType>,
                            std::default_delete<ConfigTypePreloadPackedContainer<FloorUnderlayType> _> _>*)&local_38);
        } else {
            if (configTypeListContainerStrategy != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", configTypeListContainerStrategy);
            }
            local_38 = std::make_unique<ConfigTypeNoPreloadContainer<FloorUnderlayType>,
                                        BaseTemplateConfigTypeList<FloorUnderlayType>&, Js5ResourceProvider&,
                                        Js5ArchiveSettings const&, Js5ConfigGroup const*&, unsigned int&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup, arg7);
            std::unique_ptr<BaseConfigTypeContainer<FloorUnderlayType>>::operator=(
                this_00,
                (unique_ptr<ConfigTypeNoPreloadContainer<FloorUnderlayType>,
                            std::default_delete<ConfigTypeNoPreloadContainer<FloorUnderlayType> _> _>*)&local_38);
        }
    }

    // 0x1005912c0
    void BaseTemplateConfigTypeList<FloorUnderlayType>::CacheResize(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1);
    }

    // 0x1005912f0
    void BaseTemplateConfigTypeList<FloorUnderlayType>::LoadList() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
    }

    // 0x100591310
    void BaseTemplateConfigTypeList<FloorUnderlayType>::CacheReset() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x100591330
    void BaseTemplateConfigTypeList<FloorUnderlayType>::CacheClean(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x100591360
    void BaseTemplateConfigTypeList<FloorUnderlayType>::IsPreloaded() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x100591380
    void BaseTemplateConfigTypeList<FloorUnderlayType>::GetPreloadProgress() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x1005966b0
    BaseTemplateConfigTypeList<FloorUnderlayType>::~BaseTemplateConfigTypeList() {
        ((this + 13))->~unique_ptr();
    }

    // 0x100596800
    BaseTemplateConfigTypeList<FloorOverlayType>::BaseTemplateConfigTypeList(
        ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
        const Language* language, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg7)
        : BaseConfigTypeList(modeGame, language, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        ReturnValue local_38;

        unique_ptr<BaseConfigTypeContainer<FloorOverlayType>>* this_00 =
            (unique_ptr<BaseConfigTypeContainer<FloorOverlayType>>*)(this + 13);
        this_00->unique_ptr<true, void>();
        if (configTypeListContainerStrategy == 3) {
            local_38 = std::make_unique<ConfigTypeLoadAllContainer<FloorOverlayType>,
                                        BaseTemplateConfigTypeList<FloorOverlayType>&, Js5ResourceProvider&,
                                        Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<FloorOverlayType>>::operator=(
                this_00, (unique_ptr<ConfigTypeLoadAllContainer<FloorOverlayType>,
                                     std::default_delete<ConfigTypeLoadAllContainer<FloorOverlayType> _> _>*)&local_38);
        } else if (configTypeListContainerStrategy == 2) {
            local_38 = std::make_unique<ConfigTypePreloadPackedContainer<FloorOverlayType>,
                                        BaseTemplateConfigTypeList<FloorOverlayType>&, Js5ResourceProvider&,
                                        Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<FloorOverlayType>>::operator=(
                this_00,
                (unique_ptr<ConfigTypePreloadPackedContainer<FloorOverlayType>,
                            std::default_delete<ConfigTypePreloadPackedContainer<FloorOverlayType> _> _>*)&local_38);
        } else {
            if (configTypeListContainerStrategy != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", configTypeListContainerStrategy);
            }
            local_38 = std::make_unique<ConfigTypeNoPreloadContainer<FloorOverlayType>,
                                        BaseTemplateConfigTypeList<FloorOverlayType>&, Js5ResourceProvider&,
                                        Js5ArchiveSettings const&, Js5ConfigGroup const*&, unsigned int&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup, arg7);
            std::unique_ptr<BaseConfigTypeContainer<FloorOverlayType>>::operator=(
                this_00,
                (unique_ptr<ConfigTypeNoPreloadContainer<FloorOverlayType>,
                            std::default_delete<ConfigTypeNoPreloadContainer<FloorOverlayType> _> _>*)&local_38);
        }
    }

    // 0x100596970
    void BaseTemplateConfigTypeList<FloorOverlayType>::CacheResize(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1);
    }

    // 0x1005969a0
    void BaseTemplateConfigTypeList<FloorOverlayType>::LoadList() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
    }

    // 0x1005969c0
    void BaseTemplateConfigTypeList<FloorOverlayType>::CacheReset() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x1005969e0
    void BaseTemplateConfigTypeList<FloorOverlayType>::CacheClean(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x100596a10
    void BaseTemplateConfigTypeList<FloorOverlayType>::IsPreloaded() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x100596a30
    void BaseTemplateConfigTypeList<FloorOverlayType>::GetPreloadProgress() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x10059bd70
    BaseTemplateConfigTypeList<FloorOverlayType>::~BaseTemplateConfigTypeList() {
        ((this + 13))->~unique_ptr();
    }

    // 0x10059bf00
    BaseTemplateConfigTypeList<HitmarkType>::BaseTemplateConfigTypeList(
        ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
        const Language* language, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg7)
        : BaseConfigTypeList(modeGame, language, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        ReturnValue local_38;

        unique_ptr<BaseConfigTypeContainer<HitmarkType>>* this_00 =
            (unique_ptr<BaseConfigTypeContainer<HitmarkType>>*)(this + 13);
        this_00->unique_ptr<true, void>();
        if (configTypeListContainerStrategy == 3) {
            local_38 =
                std::make_unique<ConfigTypeLoadAllContainer<HitmarkType>, BaseTemplateConfigTypeList<HitmarkType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                    *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<HitmarkType>>::operator=(
                this_00, (unique_ptr<ConfigTypeLoadAllContainer<HitmarkType>,
                                     std::default_delete<ConfigTypeLoadAllContainer<HitmarkType> _> _>*)&local_38);
        } else if (configTypeListContainerStrategy == 2) {
            local_38 = std::make_unique<ConfigTypePreloadPackedContainer<HitmarkType>,
                                        BaseTemplateConfigTypeList<HitmarkType>&, Js5ResourceProvider&,
                                        Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<HitmarkType>>::operator=(
                this_00,
                (unique_ptr<ConfigTypePreloadPackedContainer<HitmarkType>,
                            std::default_delete<ConfigTypePreloadPackedContainer<HitmarkType> _> _>*)&local_38);
        } else {
            if (configTypeListContainerStrategy != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", configTypeListContainerStrategy);
            }
            local_38 =
                std::make_unique<ConfigTypeNoPreloadContainer<HitmarkType>, BaseTemplateConfigTypeList<HitmarkType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&,
                                 unsigned int&>(*this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup, arg7);
            std::unique_ptr<BaseConfigTypeContainer<HitmarkType>>::operator=(
                this_00, (unique_ptr<ConfigTypeNoPreloadContainer<HitmarkType>,
                                     std::default_delete<ConfigTypeNoPreloadContainer<HitmarkType> _> _>*)&local_38);
        }
    }

    // 0x10059c050
    BaseTemplateConfigTypeList<HitmarkType>::~BaseTemplateConfigTypeList() {
        ((this + 13))->~unique_ptr();
    }

    // 0x10059c0b0
    void BaseTemplateConfigTypeList<HitmarkType>::CacheResize(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1);
    }

    // 0x10059c0e0
    void BaseTemplateConfigTypeList<HitmarkType>::LoadList() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
    }

    // 0x10059c160
    void BaseTemplateConfigTypeList<HitmarkType>::IsPreloaded() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x10059c180
    void BaseTemplateConfigTypeList<HitmarkType>::GetPreloadProgress() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x10059c430
    void BaseTemplateConfigTypeList<HitmarkType>::CacheReset() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x10059c450
    void BaseTemplateConfigTypeList<HitmarkType>::CacheClean(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x1005a0f80
    BaseTemplateConfigTypeList<HeadbarType>::BaseTemplateConfigTypeList(
        ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
        const Language* language, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg7)
        : BaseConfigTypeList(modeGame, language, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        ReturnValue local_38;

        unique_ptr<BaseConfigTypeContainer<HeadbarType>>* this_00 =
            (unique_ptr<BaseConfigTypeContainer<HeadbarType>>*)(this + 13);
        this_00->unique_ptr<true, void>();
        if (configTypeListContainerStrategy == 3) {
            local_38 =
                std::make_unique<ConfigTypeLoadAllContainer<HeadbarType>, BaseTemplateConfigTypeList<HeadbarType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                    *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<HeadbarType>>::operator=(
                this_00, (unique_ptr<ConfigTypeLoadAllContainer<HeadbarType>,
                                     std::default_delete<ConfigTypeLoadAllContainer<HeadbarType> _> _>*)&local_38);
        } else if (configTypeListContainerStrategy == 2) {
            local_38 = std::make_unique<ConfigTypePreloadPackedContainer<HeadbarType>,
                                        BaseTemplateConfigTypeList<HeadbarType>&, Js5ResourceProvider&,
                                        Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<HeadbarType>>::operator=(
                this_00,
                (unique_ptr<ConfigTypePreloadPackedContainer<HeadbarType>,
                            std::default_delete<ConfigTypePreloadPackedContainer<HeadbarType> _> _>*)&local_38);
        } else {
            if (configTypeListContainerStrategy != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", configTypeListContainerStrategy);
            }
            local_38 =
                std::make_unique<ConfigTypeNoPreloadContainer<HeadbarType>, BaseTemplateConfigTypeList<HeadbarType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&,
                                 unsigned int&>(*this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup, arg7);
            std::unique_ptr<BaseConfigTypeContainer<HeadbarType>>::operator=(
                this_00, (unique_ptr<ConfigTypeNoPreloadContainer<HeadbarType>,
                                     std::default_delete<ConfigTypeNoPreloadContainer<HeadbarType> _> _>*)&local_38);
        }
    }

    // 0x1005a10c0
    BaseTemplateConfigTypeList<HeadbarType>::~BaseTemplateConfigTypeList() {
        ((this + 13))->~unique_ptr();
    }

    // 0x1005a1120
    void BaseTemplateConfigTypeList<HeadbarType>::CacheResize(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1);
    }

    // 0x1005a1150
    void BaseTemplateConfigTypeList<HeadbarType>::LoadList() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
    }

    // 0x1005a11d0
    void BaseTemplateConfigTypeList<HeadbarType>::IsPreloaded() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x1005a11f0
    void BaseTemplateConfigTypeList<HeadbarType>::GetPreloadProgress() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x1005a14a0
    void BaseTemplateConfigTypeList<HeadbarType>::CacheReset() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x1005a14c0
    void BaseTemplateConfigTypeList<HeadbarType>::CacheClean(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x1005a65c0
    BaseTemplateConfigTypeList<IDKType>::BaseTemplateConfigTypeList(
        ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
        const Language* language, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg7)
        : BaseConfigTypeList(modeGame, language, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        ReturnValue local_38;

        unique_ptr<BaseConfigTypeContainer<IDKType>>* this_00 =
            (unique_ptr<BaseConfigTypeContainer<IDKType>>*)(this + 13);
        this_00->unique_ptr<true, void>();
        if (configTypeListContainerStrategy == 3) {
            local_38 = std::make_unique<ConfigTypeLoadAllContainer<IDKType>, BaseTemplateConfigTypeList<IDKType>&,
                                        Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<IDKType>>::operator=(
                this_00, (unique_ptr<ConfigTypeLoadAllContainer<IDKType>,
                                     std::default_delete<ConfigTypeLoadAllContainer<IDKType> _> _>*)&local_38);
        } else if (configTypeListContainerStrategy == 2) {
            local_38 = std::make_unique<ConfigTypePreloadPackedContainer<IDKType>, BaseTemplateConfigTypeList<IDKType>&,
                                        Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<IDKType>>::operator=(
                this_00, (unique_ptr<ConfigTypePreloadPackedContainer<IDKType>,
                                     std::default_delete<ConfigTypePreloadPackedContainer<IDKType> _> _>*)&local_38);
        } else {
            if (configTypeListContainerStrategy != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", configTypeListContainerStrategy);
            }
            local_38 =
                std::make_unique<ConfigTypeNoPreloadContainer<IDKType>, BaseTemplateConfigTypeList<IDKType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&,
                                 unsigned int&>(*this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup, arg7);
            std::unique_ptr<BaseConfigTypeContainer<IDKType>>::operator=(
                this_00, (unique_ptr<ConfigTypeNoPreloadContainer<IDKType>,
                                     std::default_delete<ConfigTypeNoPreloadContainer<IDKType> _> _>*)&local_38);
        }
    }

    // 0x1005a6730
    void BaseTemplateConfigTypeList<IDKType>::CacheResize(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1);
    }

    // 0x1005a6760
    void BaseTemplateConfigTypeList<IDKType>::LoadList() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
    }

    // 0x1005a6780
    void BaseTemplateConfigTypeList<IDKType>::CacheReset() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x1005a67a0
    void BaseTemplateConfigTypeList<IDKType>::CacheClean(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x1005a67d0
    void BaseTemplateConfigTypeList<IDKType>::IsPreloaded() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x1005a67f0
    void BaseTemplateConfigTypeList<IDKType>::GetPreloadProgress() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x1005abd30
    BaseTemplateConfigTypeList<IDKType>::~BaseTemplateConfigTypeList() {
        ((this + 13))->~unique_ptr();
    }

    // 0x1005abeb0
    BaseTemplateConfigTypeList<MapElementType>::BaseTemplateConfigTypeList(
        ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
        const Language* language, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg7)
        : BaseConfigTypeList(modeGame, language, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        ReturnValue local_38;

        unique_ptr<BaseConfigTypeContainer<MapElementType>>* this_00 =
            (unique_ptr<BaseConfigTypeContainer<MapElementType>>*)(this + 13);
        this_00->unique_ptr<true, void>();
        if (configTypeListContainerStrategy == 3) {
            local_38 = std::make_unique<ConfigTypeLoadAllContainer<MapElementType>,
                                        BaseTemplateConfigTypeList<MapElementType>&, Js5ResourceProvider&,
                                        Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<MapElementType>>::operator=(
                this_00, (unique_ptr<ConfigTypeLoadAllContainer<MapElementType>,
                                     std::default_delete<ConfigTypeLoadAllContainer<MapElementType> _> _>*)&local_38);
        } else if (configTypeListContainerStrategy == 2) {
            local_38 = std::make_unique<ConfigTypePreloadPackedContainer<MapElementType>,
                                        BaseTemplateConfigTypeList<MapElementType>&, Js5ResourceProvider&,
                                        Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<MapElementType>>::operator=(
                this_00,
                (unique_ptr<ConfigTypePreloadPackedContainer<MapElementType>,
                            std::default_delete<ConfigTypePreloadPackedContainer<MapElementType> _> _>*)&local_38);
        } else {
            if (configTypeListContainerStrategy != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", configTypeListContainerStrategy);
            }
            local_38 = std::make_unique<ConfigTypeNoPreloadContainer<MapElementType>,
                                        BaseTemplateConfigTypeList<MapElementType>&, Js5ResourceProvider&,
                                        Js5ArchiveSettings const&, Js5ConfigGroup const*&, unsigned int&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup, arg7);
            std::unique_ptr<BaseConfigTypeContainer<MapElementType>>::operator=(
                this_00, (unique_ptr<ConfigTypeNoPreloadContainer<MapElementType>,
                                     std::default_delete<ConfigTypeNoPreloadContainer<MapElementType> _> _>*)&local_38);
        }
    }

    // 0x1005ac000
    BaseTemplateConfigTypeList<MapElementType>::~BaseTemplateConfigTypeList() {
        ((this + 13))->~unique_ptr();
    }

    // 0x1005ac060
    void BaseTemplateConfigTypeList<MapElementType>::CacheResize(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1);
    }

    // 0x1005ac090
    void BaseTemplateConfigTypeList<MapElementType>::LoadList() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
    }

    // 0x1005ac110
    void BaseTemplateConfigTypeList<MapElementType>::IsPreloaded() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x1005ac130
    void BaseTemplateConfigTypeList<MapElementType>::GetPreloadProgress() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x1005ac3e0
    void BaseTemplateConfigTypeList<MapElementType>::CacheReset() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x1005ac400
    void BaseTemplateConfigTypeList<MapElementType>::CacheClean(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x1005b2730
    BaseTemplateConfigTypeList<MSIType>::BaseTemplateConfigTypeList(
        ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
        const Language* language, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg7)
        : BaseConfigTypeList(modeGame, language, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        ReturnValue local_38;

        unique_ptr<BaseConfigTypeContainer<MSIType>>* this_00 =
            (unique_ptr<BaseConfigTypeContainer<MSIType>>*)(this + 13);
        this_00->unique_ptr<true, void>();
        if (configTypeListContainerStrategy == 3) {
            local_38 = std::make_unique<ConfigTypeLoadAllContainer<MSIType>, BaseTemplateConfigTypeList<MSIType>&,
                                        Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<MSIType>>::operator=(
                this_00, (unique_ptr<ConfigTypeLoadAllContainer<MSIType>,
                                     std::default_delete<ConfigTypeLoadAllContainer<MSIType> _> _>*)&local_38);
        } else if (configTypeListContainerStrategy == 2) {
            local_38 = std::make_unique<ConfigTypePreloadPackedContainer<MSIType>, BaseTemplateConfigTypeList<MSIType>&,
                                        Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<MSIType>>::operator=(
                this_00, (unique_ptr<ConfigTypePreloadPackedContainer<MSIType>,
                                     std::default_delete<ConfigTypePreloadPackedContainer<MSIType> _> _>*)&local_38);
        } else {
            if (configTypeListContainerStrategy != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", configTypeListContainerStrategy);
            }
            local_38 =
                std::make_unique<ConfigTypeNoPreloadContainer<MSIType>, BaseTemplateConfigTypeList<MSIType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&,
                                 unsigned int&>(*this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup, arg7);
            std::unique_ptr<BaseConfigTypeContainer<MSIType>>::operator=(
                this_00, (unique_ptr<ConfigTypeNoPreloadContainer<MSIType>,
                                     std::default_delete<ConfigTypeNoPreloadContainer<MSIType> _> _>*)&local_38);
        }
    }

    // 0x1005b2880
    BaseTemplateConfigTypeList<MSIType>::~BaseTemplateConfigTypeList() {
        ((this + 13))->~unique_ptr();
    }

    // 0x1005b28e0
    void BaseTemplateConfigTypeList<MSIType>::CacheResize(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1);
    }

    // 0x1005b2910
    void BaseTemplateConfigTypeList<MSIType>::LoadList() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
    }

    // 0x1005b2990
    void BaseTemplateConfigTypeList<MSIType>::IsPreloaded() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x1005b29b0
    void BaseTemplateConfigTypeList<MSIType>::GetPreloadProgress() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x1005b2c60
    void BaseTemplateConfigTypeList<MSIType>::CacheReset() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x1005b2c80
    void BaseTemplateConfigTypeList<MSIType>::CacheClean(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x1005b8250
    BaseTemplateConfigTypeList<QuestType>::BaseTemplateConfigTypeList(
        ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
        const Language* language, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg7)
        : BaseConfigTypeList(modeGame, language, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        ReturnValue local_38;

        unique_ptr<BaseConfigTypeContainer<QuestType>>* this_00 =
            (unique_ptr<BaseConfigTypeContainer<QuestType>>*)(this + 13);
        this_00->unique_ptr<true, void>();
        if (configTypeListContainerStrategy == 3) {
            local_38 = std::make_unique<ConfigTypeLoadAllContainer<QuestType>, BaseTemplateConfigTypeList<QuestType>&,
                                        Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<QuestType>>::operator=(
                this_00, (unique_ptr<ConfigTypeLoadAllContainer<QuestType>,
                                     std::default_delete<ConfigTypeLoadAllContainer<QuestType> _> _>*)&local_38);
        } else if (configTypeListContainerStrategy == 2) {
            local_38 =
                std::make_unique<ConfigTypePreloadPackedContainer<QuestType>, BaseTemplateConfigTypeList<QuestType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                    *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<QuestType>>::operator=(
                this_00, (unique_ptr<ConfigTypePreloadPackedContainer<QuestType>,
                                     std::default_delete<ConfigTypePreloadPackedContainer<QuestType> _> _>*)&local_38);
        } else {
            if (configTypeListContainerStrategy != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", configTypeListContainerStrategy);
            }
            local_38 =
                std::make_unique<ConfigTypeNoPreloadContainer<QuestType>, BaseTemplateConfigTypeList<QuestType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&,
                                 unsigned int&>(*this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup, arg7);
            std::unique_ptr<BaseConfigTypeContainer<QuestType>>::operator=(
                this_00, (unique_ptr<ConfigTypeNoPreloadContainer<QuestType>,
                                     std::default_delete<ConfigTypeNoPreloadContainer<QuestType> _> _>*)&local_38);
        }
    }

    // 0x1005b83c0
    void BaseTemplateConfigTypeList<QuestType>::CacheResize(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1);
    }

    // 0x1005b83f0
    void BaseTemplateConfigTypeList<QuestType>::LoadList() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
    }

    // 0x1005b8410
    void BaseTemplateConfigTypeList<QuestType>::CacheReset() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x1005b8430
    void BaseTemplateConfigTypeList<QuestType>::CacheClean(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x1005b8460
    void BaseTemplateConfigTypeList<QuestType>::IsPreloaded() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x1005b8480
    void BaseTemplateConfigTypeList<QuestType>::GetPreloadProgress() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x1005bdc90
    BaseTemplateConfigTypeList<QuestType>::~BaseTemplateConfigTypeList() {
        ((this + 13))->~unique_ptr();
    }

    // 0x1005bdde0
    BaseTemplateConfigTypeList<SeqGroupType>::BaseTemplateConfigTypeList(
        ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
        const Language* language, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg7)
        : BaseConfigTypeList(modeGame, language, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        ReturnValue local_38;

        unique_ptr<BaseConfigTypeContainer<SeqGroupType>>* this_00 =
            (unique_ptr<BaseConfigTypeContainer<SeqGroupType>>*)(this + 13);
        this_00->unique_ptr<true, void>();
        if (configTypeListContainerStrategy == 3) {
            local_38 =
                std::make_unique<ConfigTypeLoadAllContainer<SeqGroupType>, BaseTemplateConfigTypeList<SeqGroupType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                    *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<SeqGroupType>>::operator=(
                this_00, (unique_ptr<ConfigTypeLoadAllContainer<SeqGroupType>,
                                     std::default_delete<ConfigTypeLoadAllContainer<SeqGroupType> _> _>*)&local_38);
        } else if (configTypeListContainerStrategy == 2) {
            local_38 = std::make_unique<ConfigTypePreloadPackedContainer<SeqGroupType>,
                                        BaseTemplateConfigTypeList<SeqGroupType>&, Js5ResourceProvider&,
                                        Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<SeqGroupType>>::operator=(
                this_00,
                (unique_ptr<ConfigTypePreloadPackedContainer<SeqGroupType>,
                            std::default_delete<ConfigTypePreloadPackedContainer<SeqGroupType> _> _>*)&local_38);
        } else {
            if (configTypeListContainerStrategy != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", configTypeListContainerStrategy);
            }
            local_38 =
                std::make_unique<ConfigTypeNoPreloadContainer<SeqGroupType>, BaseTemplateConfigTypeList<SeqGroupType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&,
                                 unsigned int&>(*this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup, arg7);
            std::unique_ptr<BaseConfigTypeContainer<SeqGroupType>>::operator=(
                this_00, (unique_ptr<ConfigTypeNoPreloadContainer<SeqGroupType>,
                                     std::default_delete<ConfigTypeNoPreloadContainer<SeqGroupType> _> _>*)&local_38);
        }
    }

    // 0x1005bdf50
    void BaseTemplateConfigTypeList<SeqGroupType>::CacheResize(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1);
    }

    // 0x1005bdf80
    void BaseTemplateConfigTypeList<SeqGroupType>::LoadList() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
    }

    // 0x1005bdfa0
    void BaseTemplateConfigTypeList<SeqGroupType>::CacheReset() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x1005bdfc0
    void BaseTemplateConfigTypeList<SeqGroupType>::CacheClean(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x1005bdff0
    void BaseTemplateConfigTypeList<SeqGroupType>::IsPreloaded() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x1005be010
    void BaseTemplateConfigTypeList<SeqGroupType>::GetPreloadProgress() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x1005c33d0
    BaseTemplateConfigTypeList<SeqGroupType>::~BaseTemplateConfigTypeList() {
        ((this + 13))->~unique_ptr();
    }

    // 0x1005c3520
    BaseTemplateConfigTypeList<LightType>::BaseTemplateConfigTypeList(
        ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
        const Language* language, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg7)
        : BaseConfigTypeList(modeGame, language, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        ReturnValue local_38;

        unique_ptr<BaseConfigTypeContainer<LightType>>* this_00 =
            (unique_ptr<BaseConfigTypeContainer<LightType>>*)(this + 13);
        this_00->unique_ptr<true, void>();
        if (configTypeListContainerStrategy == 3) {
            local_38 = std::make_unique<ConfigTypeLoadAllContainer<LightType>, BaseTemplateConfigTypeList<LightType>&,
                                        Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<LightType>>::operator=(
                this_00, (unique_ptr<ConfigTypeLoadAllContainer<LightType>,
                                     std::default_delete<ConfigTypeLoadAllContainer<LightType> _> _>*)&local_38);
        } else if (configTypeListContainerStrategy == 2) {
            local_38 =
                std::make_unique<ConfigTypePreloadPackedContainer<LightType>, BaseTemplateConfigTypeList<LightType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                    *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<LightType>>::operator=(
                this_00, (unique_ptr<ConfigTypePreloadPackedContainer<LightType>,
                                     std::default_delete<ConfigTypePreloadPackedContainer<LightType> _> _>*)&local_38);
        } else {
            if (configTypeListContainerStrategy != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", configTypeListContainerStrategy);
            }
            local_38 =
                std::make_unique<ConfigTypeNoPreloadContainer<LightType>, BaseTemplateConfigTypeList<LightType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&,
                                 unsigned int&>(*this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup, arg7);
            std::unique_ptr<BaseConfigTypeContainer<LightType>>::operator=(
                this_00, (unique_ptr<ConfigTypeNoPreloadContainer<LightType>,
                                     std::default_delete<ConfigTypeNoPreloadContainer<LightType> _> _>*)&local_38);
        }
    }

    // 0x1005c3690
    void BaseTemplateConfigTypeList<LightType>::CacheResize(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1);
    }

    // 0x1005c36c0
    void BaseTemplateConfigTypeList<LightType>::LoadList() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
    }

    // 0x1005c36e0
    void BaseTemplateConfigTypeList<LightType>::CacheReset() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x1005c3700
    void BaseTemplateConfigTypeList<LightType>::CacheClean(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x1005c3730
    void BaseTemplateConfigTypeList<LightType>::IsPreloaded() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x1005c3750
    void BaseTemplateConfigTypeList<LightType>::GetPreloadProgress() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x1005c8a70
    BaseTemplateConfigTypeList<LightType>::~BaseTemplateConfigTypeList() {
        ((this + 13))->~unique_ptr();
    }

    // 0x1005c8c00
    BaseTemplateConfigTypeList<SkyBoxType>::BaseTemplateConfigTypeList(
        ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
        const Language* language, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg7)
        : BaseConfigTypeList(modeGame, language, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        ReturnValue local_38;

        unique_ptr<BaseConfigTypeContainer<SkyBoxType>>* this_00 =
            (unique_ptr<BaseConfigTypeContainer<SkyBoxType>>*)(this + 13);
        this_00->unique_ptr<true, void>();
        if (configTypeListContainerStrategy == 3) {
            local_38 = std::make_unique<ConfigTypeLoadAllContainer<SkyBoxType>, BaseTemplateConfigTypeList<SkyBoxType>&,
                                        Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<SkyBoxType>>::operator=(
                this_00, (unique_ptr<ConfigTypeLoadAllContainer<SkyBoxType>,
                                     std::default_delete<ConfigTypeLoadAllContainer<SkyBoxType> _> _>*)&local_38);
        } else if (configTypeListContainerStrategy == 2) {
            local_38 =
                std::make_unique<ConfigTypePreloadPackedContainer<SkyBoxType>, BaseTemplateConfigTypeList<SkyBoxType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                    *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<SkyBoxType>>::operator=(
                this_00, (unique_ptr<ConfigTypePreloadPackedContainer<SkyBoxType>,
                                     std::default_delete<ConfigTypePreloadPackedContainer<SkyBoxType> _> _>*)&local_38);
        } else {
            if (configTypeListContainerStrategy != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", configTypeListContainerStrategy);
            }
            local_38 =
                std::make_unique<ConfigTypeNoPreloadContainer<SkyBoxType>, BaseTemplateConfigTypeList<SkyBoxType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&,
                                 unsigned int&>(*this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup, arg7);
            std::unique_ptr<BaseConfigTypeContainer<SkyBoxType>>::operator=(
                this_00, (unique_ptr<ConfigTypeNoPreloadContainer<SkyBoxType>,
                                     std::default_delete<ConfigTypeNoPreloadContainer<SkyBoxType> _> _>*)&local_38);
        }
    }

    // 0x1005c8d50
    BaseTemplateConfigTypeList<SkyBoxType>::~BaseTemplateConfigTypeList() {
        ((this + 13))->~unique_ptr();
    }

    // 0x1005c8db0
    void BaseTemplateConfigTypeList<SkyBoxType>::CacheResize(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1);
    }

    // 0x1005c8de0
    void BaseTemplateConfigTypeList<SkyBoxType>::LoadList() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
    }

    // 0x1005c8e60
    void BaseTemplateConfigTypeList<SkyBoxType>::IsPreloaded() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x1005c8e80
    void BaseTemplateConfigTypeList<SkyBoxType>::GetPreloadProgress() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x1005c9130
    void BaseTemplateConfigTypeList<SkyBoxType>::CacheReset() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x1005c9150
    void BaseTemplateConfigTypeList<SkyBoxType>::CacheClean(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x1005cea30
    BaseTemplateConfigTypeList<WaterType>::BaseTemplateConfigTypeList(
        ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
        const Language* language, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg7)
        : BaseConfigTypeList(modeGame, language, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        ReturnValue local_38;

        unique_ptr<BaseConfigTypeContainer<WaterType>>* this_00 =
            (unique_ptr<BaseConfigTypeContainer<WaterType>>*)(this + 13);
        this_00->unique_ptr<true, void>();
        if (configTypeListContainerStrategy == 3) {
            local_38 = std::make_unique<ConfigTypeLoadAllContainer<WaterType>, BaseTemplateConfigTypeList<WaterType>&,
                                        Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<WaterType>>::operator=(
                this_00, (unique_ptr<ConfigTypeLoadAllContainer<WaterType>,
                                     std::default_delete<ConfigTypeLoadAllContainer<WaterType> _> _>*)&local_38);
        } else if (configTypeListContainerStrategy == 2) {
            local_38 =
                std::make_unique<ConfigTypePreloadPackedContainer<WaterType>, BaseTemplateConfigTypeList<WaterType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                    *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<WaterType>>::operator=(
                this_00, (unique_ptr<ConfigTypePreloadPackedContainer<WaterType>,
                                     std::default_delete<ConfigTypePreloadPackedContainer<WaterType> _> _>*)&local_38);
        } else {
            if (configTypeListContainerStrategy != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", configTypeListContainerStrategy);
            }
            local_38 =
                std::make_unique<ConfigTypeNoPreloadContainer<WaterType>, BaseTemplateConfigTypeList<WaterType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&,
                                 unsigned int&>(*this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup, arg7);
            std::unique_ptr<BaseConfigTypeContainer<WaterType>>::operator=(
                this_00, (unique_ptr<ConfigTypeNoPreloadContainer<WaterType>,
                                     std::default_delete<ConfigTypeNoPreloadContainer<WaterType> _> _>*)&local_38);
        }
    }

    // 0x1005ceba0
    void BaseTemplateConfigTypeList<WaterType>::CacheResize(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1);
    }

    // 0x1005cebd0
    void BaseTemplateConfigTypeList<WaterType>::LoadList() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
    }

    // 0x1005cebf0
    void BaseTemplateConfigTypeList<WaterType>::CacheReset() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x1005cec10
    void BaseTemplateConfigTypeList<WaterType>::CacheClean(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x1005cec40
    void BaseTemplateConfigTypeList<WaterType>::IsPreloaded() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x1005cec60
    void BaseTemplateConfigTypeList<WaterType>::GetPreloadProgress() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x1005d2ca0
    BaseTemplateConfigTypeList<WaterType>::~BaseTemplateConfigTypeList() {
        ((this + 13))->~unique_ptr();
    }

    // 0x1005d2df0
    BaseTemplateConfigTypeList<CursorType>::BaseTemplateConfigTypeList(
        ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
        const Language* language, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg7)
        : BaseConfigTypeList(modeGame, language, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        ReturnValue local_38;

        unique_ptr<BaseConfigTypeContainer<CursorType>>* this_00 =
            (unique_ptr<BaseConfigTypeContainer<CursorType>>*)(this + 13);
        this_00->unique_ptr<true, void>();
        if (configTypeListContainerStrategy == 3) {
            local_38 = std::make_unique<ConfigTypeLoadAllContainer<CursorType>, BaseTemplateConfigTypeList<CursorType>&,
                                        Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<CursorType>>::operator=(
                this_00, (unique_ptr<ConfigTypeLoadAllContainer<CursorType>,
                                     std::default_delete<ConfigTypeLoadAllContainer<CursorType> _> _>*)&local_38);
        } else if (configTypeListContainerStrategy == 2) {
            local_38 =
                std::make_unique<ConfigTypePreloadPackedContainer<CursorType>, BaseTemplateConfigTypeList<CursorType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                    *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<CursorType>>::operator=(
                this_00, (unique_ptr<ConfigTypePreloadPackedContainer<CursorType>,
                                     std::default_delete<ConfigTypePreloadPackedContainer<CursorType> _> _>*)&local_38);
        } else {
            if (configTypeListContainerStrategy != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", configTypeListContainerStrategy);
            }
            local_38 =
                std::make_unique<ConfigTypeNoPreloadContainer<CursorType>, BaseTemplateConfigTypeList<CursorType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&,
                                 unsigned int&>(*this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup, arg7);
            std::unique_ptr<BaseConfigTypeContainer<CursorType>>::operator=(
                this_00, (unique_ptr<ConfigTypeNoPreloadContainer<CursorType>,
                                     std::default_delete<ConfigTypeNoPreloadContainer<CursorType> _> _>*)&local_38);
        }
    }

    // 0x1005d2f60
    void BaseTemplateConfigTypeList<CursorType>::CacheResize(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1);
    }

    // 0x1005d2f90
    void BaseTemplateConfigTypeList<CursorType>::LoadList() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
    }

    // 0x1005d2fb0
    void BaseTemplateConfigTypeList<CursorType>::CacheReset() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x1005d2fd0
    void BaseTemplateConfigTypeList<CursorType>::CacheClean(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x1005d3000
    void BaseTemplateConfigTypeList<CursorType>::IsPreloaded() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x1005d3020
    void BaseTemplateConfigTypeList<CursorType>::GetPreloadProgress() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x1005d8310
    BaseTemplateConfigTypeList<CursorType>::~BaseTemplateConfigTypeList() {
        ((this + 13))->~unique_ptr();
    }

    // 0x1005d84d0
    BaseTemplateConfigTypeList<WorldAreaType>::BaseTemplateConfigTypeList(
        ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
        const Language* language, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg7)
        : BaseConfigTypeList(modeGame, language, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        ReturnValue local_38;

        unique_ptr<BaseConfigTypeContainer<WorldAreaType>>* this_00 =
            (unique_ptr<BaseConfigTypeContainer<WorldAreaType>>*)(this + 13);
        this_00->unique_ptr<true, void>();
        if (configTypeListContainerStrategy == 3) {
            local_38 =
                std::make_unique<ConfigTypeLoadAllContainer<WorldAreaType>, BaseTemplateConfigTypeList<WorldAreaType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                    *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<WorldAreaType>>::operator=(
                this_00, (unique_ptr<ConfigTypeLoadAllContainer<WorldAreaType>,
                                     std::default_delete<ConfigTypeLoadAllContainer<WorldAreaType> _> _>*)&local_38);
        } else if (configTypeListContainerStrategy == 2) {
            local_38 = std::make_unique<ConfigTypePreloadPackedContainer<WorldAreaType>,
                                        BaseTemplateConfigTypeList<WorldAreaType>&, Js5ResourceProvider&,
                                        Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<WorldAreaType>>::operator=(
                this_00,
                (unique_ptr<ConfigTypePreloadPackedContainer<WorldAreaType>,
                            std::default_delete<ConfigTypePreloadPackedContainer<WorldAreaType> _> _>*)&local_38);
        } else {
            if (configTypeListContainerStrategy != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", configTypeListContainerStrategy);
            }
            local_38 = std::make_unique<ConfigTypeNoPreloadContainer<WorldAreaType>,
                                        BaseTemplateConfigTypeList<WorldAreaType>&, Js5ResourceProvider&,
                                        Js5ArchiveSettings const&, Js5ConfigGroup const*&, unsigned int&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup, arg7);
            std::unique_ptr<BaseConfigTypeContainer<WorldAreaType>>::operator=(
                this_00, (unique_ptr<ConfigTypeNoPreloadContainer<WorldAreaType>,
                                     std::default_delete<ConfigTypeNoPreloadContainer<WorldAreaType> _> _>*)&local_38);
        }
    }

    // 0x1005ddcd0
    BaseTemplateConfigTypeList<EnumType>::BaseTemplateConfigTypeList(
        ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
        const Language* language, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg7)
        : BaseConfigTypeList(modeGame, language, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        ReturnValue local_38;

        unique_ptr<BaseConfigTypeContainer<EnumType>>* this_00 =
            (unique_ptr<BaseConfigTypeContainer<EnumType>>*)(this + 13);
        this_00->unique_ptr<true, void>();
        if (configTypeListContainerStrategy == 3) {
            local_38 = std::make_unique<ConfigTypeLoadAllContainer<EnumType>, BaseTemplateConfigTypeList<EnumType>&,
                                        Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<EnumType>>::operator=(
                this_00, (unique_ptr<ConfigTypeLoadAllContainer<EnumType>,
                                     std::default_delete<ConfigTypeLoadAllContainer<EnumType> _> _>*)&local_38);
        } else if (configTypeListContainerStrategy == 2) {
            local_38 =
                std::make_unique<ConfigTypePreloadPackedContainer<EnumType>, BaseTemplateConfigTypeList<EnumType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                    *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<EnumType>>::operator=(
                this_00, (unique_ptr<ConfigTypePreloadPackedContainer<EnumType>,
                                     std::default_delete<ConfigTypePreloadPackedContainer<EnumType> _> _>*)&local_38);
        } else {
            if (configTypeListContainerStrategy != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", configTypeListContainerStrategy);
            }
            local_38 =
                std::make_unique<ConfigTypeNoPreloadContainer<EnumType>, BaseTemplateConfigTypeList<EnumType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&,
                                 unsigned int&>(*this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup, arg7);
            std::unique_ptr<BaseConfigTypeContainer<EnumType>>::operator=(
                this_00, (unique_ptr<ConfigTypeNoPreloadContainer<EnumType>,
                                     std::default_delete<ConfigTypeNoPreloadContainer<EnumType> _> _>*)&local_38);
        }
    }

    // 0x1005dde40
    void BaseTemplateConfigTypeList<EnumType>::CacheResize(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1);
    }

    // 0x1005dde70
    void BaseTemplateConfigTypeList<EnumType>::LoadList() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
    }

    // 0x1005dde90
    void BaseTemplateConfigTypeList<EnumType>::CacheReset() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x1005ddeb0
    void BaseTemplateConfigTypeList<EnumType>::CacheClean(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x1005ddee0
    void BaseTemplateConfigTypeList<EnumType>::IsPreloaded() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x1005ddf00
    void BaseTemplateConfigTypeList<EnumType>::GetPreloadProgress() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x1005e3c40
    BaseTemplateConfigTypeList<EnumType>::~BaseTemplateConfigTypeList() {
        ((this + 13))->~unique_ptr();
    }

    // 0x1005e3f90
    BaseTemplateConfigTypeList<EffectAnimType>::BaseTemplateConfigTypeList(
        ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
        const Language* language, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg7)
        : BaseConfigTypeList(modeGame, language, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        ReturnValue local_38;

        unique_ptr<BaseConfigTypeContainer<EffectAnimType>>* this_00 =
            (unique_ptr<BaseConfigTypeContainer<EffectAnimType>>*)(this + 13);
        this_00->unique_ptr<true, void>();
        if (configTypeListContainerStrategy == 3) {
            local_38 = std::make_unique<ConfigTypeLoadAllContainer<EffectAnimType>,
                                        BaseTemplateConfigTypeList<EffectAnimType>&, Js5ResourceProvider&,
                                        Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<EffectAnimType>>::operator=(
                this_00, (unique_ptr<ConfigTypeLoadAllContainer<EffectAnimType>,
                                     std::default_delete<ConfigTypeLoadAllContainer<EffectAnimType> _> _>*)&local_38);
        } else if (configTypeListContainerStrategy == 2) {
            local_38 = std::make_unique<ConfigTypePreloadPackedContainer<EffectAnimType>,
                                        BaseTemplateConfigTypeList<EffectAnimType>&, Js5ResourceProvider&,
                                        Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<EffectAnimType>>::operator=(
                this_00,
                (unique_ptr<ConfigTypePreloadPackedContainer<EffectAnimType>,
                            std::default_delete<ConfigTypePreloadPackedContainer<EffectAnimType> _> _>*)&local_38);
        } else {
            if (configTypeListContainerStrategy != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", configTypeListContainerStrategy);
            }
            local_38 = std::make_unique<ConfigTypeNoPreloadContainer<EffectAnimType>,
                                        BaseTemplateConfigTypeList<EffectAnimType>&, Js5ResourceProvider&,
                                        Js5ArchiveSettings const&, Js5ConfigGroup const*&, unsigned int&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup, arg7);
            std::unique_ptr<BaseConfigTypeContainer<EffectAnimType>>::operator=(
                this_00, (unique_ptr<ConfigTypeNoPreloadContainer<EffectAnimType>,
                                     std::default_delete<ConfigTypeNoPreloadContainer<EffectAnimType> _> _>*)&local_38);
        }
    }

    // 0x1005e40e0
    BaseTemplateConfigTypeList<EffectAnimType>::~BaseTemplateConfigTypeList() {
        ((this + 13))->~unique_ptr();
    }

    // 0x1005e4140
    void BaseTemplateConfigTypeList<EffectAnimType>::CacheResize(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1);
    }

    // 0x1005e4170
    void BaseTemplateConfigTypeList<EffectAnimType>::LoadList() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
    }

    // 0x1005e41f0
    void BaseTemplateConfigTypeList<EffectAnimType>::IsPreloaded() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x1005e4210
    void BaseTemplateConfigTypeList<EffectAnimType>::GetPreloadProgress() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x1005e44c0
    void BaseTemplateConfigTypeList<EffectAnimType>::CacheReset() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x1005e44e0
    void BaseTemplateConfigTypeList<EffectAnimType>::CacheClean(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x1005e9d80
    BaseTemplateConfigTypeList<StructType>::BaseTemplateConfigTypeList(
        ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
        const Language* language, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg7)
        : BaseConfigTypeList(modeGame, language, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        ReturnValue local_38;

        unique_ptr<BaseConfigTypeContainer<StructType>>* this_00 =
            (unique_ptr<BaseConfigTypeContainer<StructType>>*)(this + 13);
        this_00->unique_ptr<true, void>();
        if (configTypeListContainerStrategy == 3) {
            local_38 = std::make_unique<ConfigTypeLoadAllContainer<StructType>, BaseTemplateConfigTypeList<StructType>&,
                                        Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<StructType>>::operator=(
                this_00, (unique_ptr<ConfigTypeLoadAllContainer<StructType>,
                                     std::default_delete<ConfigTypeLoadAllContainer<StructType> _> _>*)&local_38);
        } else if (configTypeListContainerStrategy == 2) {
            local_38 =
                std::make_unique<ConfigTypePreloadPackedContainer<StructType>, BaseTemplateConfigTypeList<StructType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                    *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<StructType>>::operator=(
                this_00, (unique_ptr<ConfigTypePreloadPackedContainer<StructType>,
                                     std::default_delete<ConfigTypePreloadPackedContainer<StructType> _> _>*)&local_38);
        } else {
            if (configTypeListContainerStrategy != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", configTypeListContainerStrategy);
            }
            local_38 =
                std::make_unique<ConfigTypeNoPreloadContainer<StructType>, BaseTemplateConfigTypeList<StructType>&,
                                 Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*&,
                                 unsigned int&>(*this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup, arg7);
            std::unique_ptr<BaseConfigTypeContainer<StructType>>::operator=(
                this_00, (unique_ptr<ConfigTypeNoPreloadContainer<StructType>,
                                     std::default_delete<ConfigTypeNoPreloadContainer<StructType> _> _>*)&local_38);
        }
    }

    // 0x1005e9ef0
    void BaseTemplateConfigTypeList<StructType>::CacheResize(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1);
    }

    // 0x1005e9f20
    void BaseTemplateConfigTypeList<StructType>::LoadList() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
    }

    // 0x1005e9f40
    void BaseTemplateConfigTypeList<StructType>::CacheReset() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x1005e9f60
    void BaseTemplateConfigTypeList<StructType>::CacheClean(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x1005e9f90
    void BaseTemplateConfigTypeList<StructType>::IsPreloaded() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x1005e9fb0
    void BaseTemplateConfigTypeList<StructType>::GetPreloadProgress() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x1005ef2c0
    BaseTemplateConfigTypeList<StructType>::~BaseTemplateConfigTypeList() {
        ((this + 13))->~unique_ptr();
    }

    // 0x1005ef420
    BaseTemplateConfigTypeList<AchievementType>::BaseTemplateConfigTypeList(
        ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
        const Language* language, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup, unsigned int arg7)
        : BaseConfigTypeList(modeGame, language, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup) {
        ReturnValue local_38;

        unique_ptr<BaseConfigTypeContainer<AchievementType>>* this_00 =
            (unique_ptr<BaseConfigTypeContainer<AchievementType>>*)(this + 13);
        this_00->unique_ptr<true, void>();
        if (configTypeListContainerStrategy == 3) {
            local_38 = std::make_unique<ConfigTypeLoadAllContainer<AchievementType>,
                                        BaseTemplateConfigTypeList<AchievementType>&, Js5ResourceProvider&,
                                        Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<AchievementType>>::operator=(
                this_00, (unique_ptr<ConfigTypeLoadAllContainer<AchievementType>,
                                     std::default_delete<ConfigTypeLoadAllContainer<AchievementType> _> _>*)&local_38);
        } else if (configTypeListContainerStrategy == 2) {
            local_38 = std::make_unique<ConfigTypePreloadPackedContainer<AchievementType>,
                                        BaseTemplateConfigTypeList<AchievementType>&, Js5ResourceProvider&,
                                        Js5ArchiveSettings const&, Js5ConfigGroup const*&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup);
            std::unique_ptr<BaseConfigTypeContainer<AchievementType>>::operator=(
                this_00,
                (unique_ptr<ConfigTypePreloadPackedContainer<AchievementType>,
                            std::default_delete<ConfigTypePreloadPackedContainer<AchievementType> _> _>*)&local_38);
        } else {
            if (configTypeListContainerStrategy != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", configTypeListContainerStrategy);
            }
            local_38 = std::make_unique<ConfigTypeNoPreloadContainer<AchievementType>,
                                        BaseTemplateConfigTypeList<AchievementType>&, Js5ResourceProvider&,
                                        Js5ArchiveSettings const&, Js5ConfigGroup const*&, unsigned int&>(
                *this, js5ResourceProvider, js5ArchiveSettings, js5ConfigGroup, arg7);
            std::unique_ptr<BaseConfigTypeContainer<AchievementType>>::operator=(
                this_00,
                (unique_ptr<ConfigTypeNoPreloadContainer<AchievementType>,
                            std::default_delete<ConfigTypeNoPreloadContainer<AchievementType> _> _>*)&local_38);
        }
    }

    // 0x1005ef590
    void BaseTemplateConfigTypeList<AchievementType>::CacheResize(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(plVar1, arg1);
    }

    // 0x1005ef5c0
    void BaseTemplateConfigTypeList<AchievementType>::LoadList() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1);
    }

    // 0x1005ef5e0
    void BaseTemplateConfigTypeList<AchievementType>::CacheReset() {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x1005ef600
    void BaseTemplateConfigTypeList<AchievementType>::CacheClean(unsigned int arg1) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x1005ef630
    void BaseTemplateConfigTypeList<AchievementType>::IsPreloaded() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
    }

    // 0x1005ef650
    void BaseTemplateConfigTypeList<AchievementType>::GetPreloadProgress() const {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1);
    }

    // 0x1005f5200
    BaseTemplateConfigTypeList<AchievementType>::~BaseTemplateConfigTypeList() {
        ((this + 13))->~unique_ptr();
    }

    // 0x100636b00
    void BaseTemplateConfigTypeList<FloorOverlayType>::List(int arg1, const DataStatus** arg2) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 64))(plVar1, arg1, arg2);
    }

    // 0x100636f90
    void BaseTemplateConfigTypeList<FloorUnderlayType>::List(int arg1, const DataStatus** arg2) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 64))(plVar1, arg1, arg2);
    }

    // 0x100670cb0
    void BaseTemplateConfigTypeList<SeqType>::List(int arg1, const DataStatus** arg2) {
        long* plVar1 = (long*)(*((this + 13))).operator->();
        (**(void (**)(...))(*plVar1 + 64))(plVar1, arg1, arg2);
    }

} // namespace jag::game
