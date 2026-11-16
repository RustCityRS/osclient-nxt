// libs/game/runetek5/config/BaseTemplateConfigTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    template <typename...> // 30 instantiations, e.g. <AchievementType>, <BASType>, <CursorType>
    class BaseTemplateConfigTypeList {
    public:
        // virtual methods in vtable order
        virtual ~BaseTemplateConfigTypeList();
        virtual void CacheResize(unsigned int);
        virtual void LoadList();
        virtual void CacheReset();
        virtual void CacheClean(unsigned int);
        virtual void IsPreloaded() const;
        virtual void GetPreloadProgress() const;
        virtual ListPostDecode(shared_ptr<oldscape::configdecoder::OldscapeVarType> const&);
        BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*,
                                   Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*,
                                   unsigned int);
        void List(int, DataStatus const**);
    };

    // 0x10013f160, 320 bytes, base-object constructor, inline, placed by class name and debug map
    // BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>::BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>::BaseTemplateConfigTypeList(
        uint param_2, ModeGame* param_3, Language* param_4, Js5ResourceProvider* param_5, Js5ArchiveSettings* param_6,
        Js5ConfigGroup* param_7) {
        unique_ptr<BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>,
                   std::default_delete<BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>>>* this_00;
        BaseTemplateConfigTypeList local_38[8];

        new (this) BaseConfigTypeList(param_3, param_4, param_5, param_6, param_7);
        *(undefined**)this = PTR_vtable_100ee81f0 + 16;
        this_00 =
            (unique_ptr<BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>,
                        std::default_delete<BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>>>*)(this +
                                                                                                                  104);
        std::unique_ptr<BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>,
                        std::default_delete<BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>>>::
            unique_ptr<true, void>(this_00);
        if (param_2 == 3) {
            std::make_unique<ConfigTypeLoadAllContainer<oldscape::configdecoder::OldscapeVarType>,
                             BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>,
                            std::default_delete<BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>>>::
            operator=(this_00, (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else if (param_2 == 2) {
            std::make_unique<ConfigTypePreloadPackedContainer<oldscape::configdecoder::OldscapeVarType>,
                             BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>,
                            std::default_delete<BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>>>::
            operator=(this_00, (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else {
            if (param_2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", (ulong)param_2);
            }
            std::make_unique<ConfigTypeNoPreloadContainer<oldscape::configdecoder::OldscapeVarType>,
                             BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&, unsigned int&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6,
                (uint*)&param_7);
            std::unique_ptr<BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>,
                            std::default_delete<BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>>>::
            operator=(this_00, (unique_ptr*)local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x10013f2a0, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>::~BaseTemplateConfigTypeList() {
        *(undefined**)this = PTR_vtable_100ee81f0 + 16;
        ((this + 104))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x10013f300, 48 bytes, inline, placed by class name and debug map
    // BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>::CacheResize(unsigned int)
    void BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>::CacheResize(uint param_1) {
        long* plVar1;

        plVar1 =
            (long*)std::unique_ptr<
                BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>,
                std::default_delete<BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>>>::
            operator->((unique_ptr<
                        BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>,
                        std::default_delete<BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>>>*)(this +
                                                                                                                  104));
        (**(code**)(*plVar1 + 40))(plVar1, param_1);
    }

    // 0x10013f330, 32 bytes, inline, placed by class name and debug map
    // BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>::LoadList()
    void BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>::LoadList() {
        long* plVar1;

        plVar1 =
            (long*)std::unique_ptr<
                BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>,
                std::default_delete<BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>>>::
            operator->((unique_ptr<
                        BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>,
                        std::default_delete<BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>>>*)(this +
                                                                                                                  104));
        (**(code**)(*plVar1 + 16))(plVar1);
    }

    // 0x10013f350, 32 bytes, inline, placed by class name and debug map
    // BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>::CacheReset()
    void BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>::CacheReset() {
        long* plVar1;

        plVar1 =
            (long*)std::unique_ptr<
                BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>,
                std::default_delete<BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>>>::
            operator->((unique_ptr<
                        BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>,
                        std::default_delete<BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>>>*)(this +
                                                                                                                  104));
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x10013f370, 48 bytes, inline, placed by class name and debug map
    // BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>::CacheClean(unsigned int)
    void BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>::CacheClean(uint param_1) {
        long* plVar1;

        plVar1 =
            (long*)std::unique_ptr<
                BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>,
                std::default_delete<BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>>>::
            operator->((unique_ptr<
                        BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>,
                        std::default_delete<BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>>>*)(this +
                                                                                                                  104));
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x10013f3a0, 32 bytes, inline, placed by class name and debug map
    // BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>::IsPreloaded() const
    void BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>::IsPreloaded() {
        long* plVar1;

        plVar1 =
            (long*)std::unique_ptr<
                BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>,
                std::default_delete<BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>>>::
            operator->((unique_ptr<
                        BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>,
                        std::default_delete<BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>>>*)(this +
                                                                                                                  104));
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x10013f3c0, 32 bytes, inline, placed by class name and debug map
    // BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>::GetPreloadProgress() const
    void BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>::GetPreloadProgress() {
        long* plVar1;

        plVar1 =
            (long*)std::unique_ptr<
                BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>,
                std::default_delete<BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>>>::
            operator->((unique_ptr<
                        BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>,
                        std::default_delete<BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>>>*)(this +
                                                                                                                  104));
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x10013f3e0, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>::ListPostDecode(shared_ptr<oldscape::configdecoder::OldscapeVarType> const&)
    /* BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>::LoadList() */

    undefined* BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>::LoadList() {
        return DataStatus::READY;
    }

    // 0x10013f6a0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>::~BaseTemplateConfigTypeList(): jumps straight to the base-object destructor

    // 0x10013f6b0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>::~BaseTemplateConfigTypeList() {
        ~OldscapeVarTypeList();
        operator_delete(this);
    }

    // 0x1003d50f0, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<MSIType>::List(int, DataStatus const**)
    void BaseTemplateConfigTypeList<MSIType>::List(int param_1, DataStatus** param_2) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<MSIType>,
                                        std::default_delete<BaseConfigTypeContainer<MSIType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<MSIType>,
                                        std::default_delete<BaseConfigTypeContainer<MSIType>>>*)(this + 104));
        (**(code**)(*plVar1 + 64))(plVar1, param_1, param_2);
    }

    // 0x1003e58d0, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<SkyBoxType>::List(int, DataStatus const**)
    void BaseTemplateConfigTypeList<SkyBoxType>::List(int param_1, DataStatus** param_2) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<SkyBoxType>,
                                        std::default_delete<BaseConfigTypeContainer<SkyBoxType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<SkyBoxType>,
                                        std::default_delete<BaseConfigTypeContainer<SkyBoxType>>>*)(this + 104));
        (**(code**)(*plVar1 + 64))(plVar1, param_1, param_2);
    }

    // 0x100406180, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<EnumType>::List(int, DataStatus const**)
    void BaseTemplateConfigTypeList<EnumType>::List(int param_1, DataStatus** param_2) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<EnumType>,
                                        std::default_delete<BaseConfigTypeContainer<EnumType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<EnumType>,
                                        std::default_delete<BaseConfigTypeContainer<EnumType>>>*)(this + 104));
        (**(code**)(*plVar1 + 64))(plVar1, param_1, param_2);
    }

    // 0x1004087f0, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<EffectAnimType>::List(int, DataStatus const**)
    void BaseTemplateConfigTypeList<EffectAnimType>::List(int param_1, DataStatus** param_2) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<EffectAnimType>,
                                        std::default_delete<BaseConfigTypeContainer<EffectAnimType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<EffectAnimType>,
                                        std::default_delete<BaseConfigTypeContainer<EffectAnimType>>>*)(this + 104));
        (**(code**)(*plVar1 + 64))(plVar1, param_1, param_2);
    }

    // 0x100422170, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<WaterType>::List(int, DataStatus const**)
    void BaseTemplateConfigTypeList<WaterType>::List(int param_1, DataStatus** param_2) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<WaterType>,
                                        std::default_delete<BaseConfigTypeContainer<WaterType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<WaterType>,
                                        std::default_delete<BaseConfigTypeContainer<WaterType>>>*)(this + 104));
        (**(code**)(*plVar1 + 64))(plVar1, param_1, param_2);
    }

    // 0x100426c00, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<NPCType>::List(int, DataStatus const**)
    void BaseTemplateConfigTypeList<NPCType>::List(int param_1, DataStatus** param_2) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<NPCType>,
                                        std::default_delete<BaseConfigTypeContainer<NPCType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<NPCType>,
                                        std::default_delete<BaseConfigTypeContainer<NPCType>>>*)(this + 104));
        (**(code**)(*plVar1 + 64))(plVar1, param_1, param_2);
    }

    // 0x100426d30, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<BASType>::List(int, DataStatus const**)
    void BaseTemplateConfigTypeList<BASType>::List(int param_1, DataStatus** param_2) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<BASType>,
                                        std::default_delete<BaseConfigTypeContainer<BASType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<BASType>,
                                        std::default_delete<BaseConfigTypeContainer<BASType>>>*)(this + 104));
        (**(code**)(*plVar1 + 64))(plVar1, param_1, param_2);
    }

    // 0x100433360, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<HitmarkType>::List(int, DataStatus const**)
    void BaseTemplateConfigTypeList<HitmarkType>::List(int param_1, DataStatus** param_2) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<HitmarkType>,
                                        std::default_delete<BaseConfigTypeContainer<HitmarkType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<HitmarkType>,
                                        std::default_delete<BaseConfigTypeContainer<HitmarkType>>>*)(this + 104));
        (**(code**)(*plVar1 + 64))(plVar1, param_1, param_2);
    }

    // 0x100434040, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<HeadbarType>::List(int, DataStatus const**)
    void BaseTemplateConfigTypeList<HeadbarType>::List(int param_1, DataStatus** param_2) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<HeadbarType>,
                                        std::default_delete<BaseConfigTypeContainer<HeadbarType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<HeadbarType>,
                                        std::default_delete<BaseConfigTypeContainer<HeadbarType>>>*)(this + 104));
        (**(code**)(*plVar1 + 64))(plVar1, param_1, param_2);
    }

    // 0x100437f60, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<LocType>::List(int, DataStatus const**)
    void BaseTemplateConfigTypeList<LocType>::List(int param_1, DataStatus** param_2) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<LocType>,
                                        std::default_delete<BaseConfigTypeContainer<LocType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<LocType>,
                                        std::default_delete<BaseConfigTypeContainer<LocType>>>*)(this + 104));
        (**(code**)(*plVar1 + 64))(plVar1, param_1, param_2);
    }

    // 0x10044ef70, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<LightType>::List(int, DataStatus const**)
    void BaseTemplateConfigTypeList<LightType>::List(int param_1, DataStatus** param_2) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<LightType>,
                                        std::default_delete<BaseConfigTypeContainer<LightType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<LightType>,
                                        std::default_delete<BaseConfigTypeContainer<LightType>>>*)(this + 104));
        (**(code**)(*plVar1 + 64))(plVar1, param_1, param_2);
    }

    // 0x10049bd40, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<IDKType>::List(int, DataStatus const**)
    void BaseTemplateConfigTypeList<IDKType>::List(int param_1, DataStatus** param_2) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<IDKType>,
                                        std::default_delete<BaseConfigTypeContainer<IDKType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<IDKType>,
                                        std::default_delete<BaseConfigTypeContainer<IDKType>>>*)(this + 104));
        (**(code**)(*plVar1 + 64))(plVar1, param_1, param_2);
    }

    // 0x1004bf980, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<InvType>::List(int, DataStatus const**)
    void BaseTemplateConfigTypeList<InvType>::List(int param_1, DataStatus** param_2) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<InvType>,
                                        std::default_delete<BaseConfigTypeContainer<InvType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<InvType>,
                                        std::default_delete<BaseConfigTypeContainer<InvType>>>*)(this + 104));
        (**(code**)(*plVar1 + 64))(plVar1, param_1, param_2);
    }

    // 0x1004c0d40, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<WorldAreaType>::List(int, DataStatus const**)
    void BaseTemplateConfigTypeList<WorldAreaType>::List(int param_1, DataStatus** param_2) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<WorldAreaType>,
                                        std::default_delete<BaseConfigTypeContainer<WorldAreaType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<WorldAreaType>,
                                        std::default_delete<BaseConfigTypeContainer<WorldAreaType>>>*)(this + 104));
        (**(code**)(*plVar1 + 64))(plVar1, param_1, param_2);
    }

    // 0x1004c2b70, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<WorldAreaType>::CacheResize(unsigned int)
    void BaseTemplateConfigTypeList<WorldAreaType>::CacheResize(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<WorldAreaType>,
                                        std::default_delete<BaseConfigTypeContainer<WorldAreaType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<WorldAreaType>,
                                        std::default_delete<BaseConfigTypeContainer<WorldAreaType>>>*)(this + 104));
        (**(code**)(*plVar1 + 40))(plVar1, param_1);
    }

    // 0x1004c2ba0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<WorldAreaType>::LoadList()
    void BaseTemplateConfigTypeList<WorldAreaType>::LoadList() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<WorldAreaType>,
                                        std::default_delete<BaseConfigTypeContainer<WorldAreaType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<WorldAreaType>,
                                        std::default_delete<BaseConfigTypeContainer<WorldAreaType>>>*)(this + 104));
        (**(code**)(*plVar1 + 16))(plVar1);
    }

    // 0x1004c2c20, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<WorldAreaType>::IsPreloaded() const
    void BaseTemplateConfigTypeList<WorldAreaType>::IsPreloaded() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<WorldAreaType>,
                                        std::default_delete<BaseConfigTypeContainer<WorldAreaType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<WorldAreaType>,
                                        std::default_delete<BaseConfigTypeContainer<WorldAreaType>>>*)(this + 104));
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x1004c2c40, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<WorldAreaType>::GetPreloadProgress() const
    void BaseTemplateConfigTypeList<WorldAreaType>::GetPreloadProgress() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<WorldAreaType>,
                                        std::default_delete<BaseConfigTypeContainer<WorldAreaType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<WorldAreaType>,
                                        std::default_delete<BaseConfigTypeContainer<WorldAreaType>>>*)(this + 104));
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x1004c2db0, 48 bytes, base-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<WorldAreaType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<WorldAreaType>::~BaseTemplateConfigTypeList() {
        *(undefined**)this = PTR_vtable_100ee8148 + 16;
        ((this + 104))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x1004c2e40, 16 bytes, complete-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<WorldAreaType>::~BaseTemplateConfigTypeList(): jumps straight to the base-object destructor

    // 0x1004c2e50, 32 bytes, deleting destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<WorldAreaType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<WorldAreaType>::~BaseTemplateConfigTypeList() {
        ~BaseTemplateConfigTypeList(this);
        operator_delete(this);
    }

    // 0x1004c2e70, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<WorldAreaType>::CacheReset()
    void BaseTemplateConfigTypeList<WorldAreaType>::CacheReset() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<WorldAreaType>,
                                        std::default_delete<BaseConfigTypeContainer<WorldAreaType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<WorldAreaType>,
                                        std::default_delete<BaseConfigTypeContainer<WorldAreaType>>>*)(this + 104));
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x1004c2e90, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<WorldAreaType>::CacheClean(unsigned int)
    void BaseTemplateConfigTypeList<WorldAreaType>::CacheClean(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<WorldAreaType>,
                                        std::default_delete<BaseConfigTypeContainer<WorldAreaType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<WorldAreaType>,
                                        std::default_delete<BaseConfigTypeContainer<WorldAreaType>>>*)(this + 104));
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x1004d1b00, 320 bytes, base-object constructor, inline, placed by class name
    // BaseTemplateConfigTypeList<VarType>::BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void BaseTemplateConfigTypeList<VarType>::BaseTemplateConfigTypeList(uint param_2, ModeGame* param_3,
                                                                         Language* param_4,
                                                                         Js5ResourceProvider* param_5,
                                                                         Js5ArchiveSettings* param_6,
                                                                         Js5ConfigGroup* param_7) {
        unique_ptr<BaseConfigTypeContainer<VarType>, std::default_delete<BaseConfigTypeContainer<VarType>>>* this_00;
        BaseTemplateConfigTypeList local_38[8];

        new (this) BaseConfigTypeList(param_3, param_4, param_5, param_6, param_7);
        *(undefined**)this = PTR_vtable_100ee81b8 + 16;
        this_00 = (unique_ptr<BaseConfigTypeContainer<VarType>,
                              std::default_delete<BaseConfigTypeContainer<VarType>>>*)(this + 104);
        std::unique_ptr<BaseConfigTypeContainer<VarType>,
                        std::default_delete<BaseConfigTypeContainer<VarType>>>::unique_ptr<true, void>(this_00);
        if (param_2 == 3) {
            std::make_unique<ConfigTypeLoadAllContainer<VarType>, BaseTemplateConfigTypeList<VarType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<VarType>,
                            std::default_delete<BaseConfigTypeContainer<VarType>>>::operator=(this_00,
                                                                                              (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else if (param_2 == 2) {
            std::make_unique<ConfigTypePreloadPackedContainer<VarType>, BaseTemplateConfigTypeList<VarType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<VarType>,
                            std::default_delete<BaseConfigTypeContainer<VarType>>>::operator=(this_00,
                                                                                              (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else {
            if (param_2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", (ulong)param_2);
            }
            std::make_unique<ConfigTypeNoPreloadContainer<VarType>, BaseTemplateConfigTypeList<VarType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&, unsigned int&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6,
                (uint*)&param_7);
            std::unique_ptr<BaseConfigTypeContainer<VarType>,
                            std::default_delete<BaseConfigTypeContainer<VarType>>>::operator=(this_00,
                                                                                              (unique_ptr*)local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x1004d1db0, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<VarType>::CacheResize(unsigned int)
    void BaseTemplateConfigTypeList<VarType>::CacheResize(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<VarType>,
                                        std::default_delete<BaseConfigTypeContainer<VarType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<VarType>,
                                        std::default_delete<BaseConfigTypeContainer<VarType>>>*)(this + 104));
        (**(code**)(*plVar1 + 40))(plVar1, param_1);
    }

    // 0x1004d1de0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<VarType>::LoadList()
    void BaseTemplateConfigTypeList<VarType>::LoadList() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<VarType>,
                                        std::default_delete<BaseConfigTypeContainer<VarType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<VarType>,
                                        std::default_delete<BaseConfigTypeContainer<VarType>>>*)(this + 104));
        (**(code**)(*plVar1 + 16))(plVar1);
    }

    // 0x1004d1e00, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<VarType>::CacheReset()
    void BaseTemplateConfigTypeList<VarType>::CacheReset() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<VarType>,
                                        std::default_delete<BaseConfigTypeContainer<VarType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<VarType>,
                                        std::default_delete<BaseConfigTypeContainer<VarType>>>*)(this + 104));
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x1004d1e20, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<VarType>::CacheClean(unsigned int)
    void BaseTemplateConfigTypeList<VarType>::CacheClean(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<VarType>,
                                        std::default_delete<BaseConfigTypeContainer<VarType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<VarType>,
                                        std::default_delete<BaseConfigTypeContainer<VarType>>>*)(this + 104));
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x1004d1e50, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<VarType>::IsPreloaded() const
    void BaseTemplateConfigTypeList<VarType>::IsPreloaded() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<VarType>,
                                        std::default_delete<BaseConfigTypeContainer<VarType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<VarType>,
                                        std::default_delete<BaseConfigTypeContainer<VarType>>>*)(this + 104));
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x1004d1e70, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<VarType>::GetPreloadProgress() const
    void BaseTemplateConfigTypeList<VarType>::GetPreloadProgress() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<VarType>,
                                        std::default_delete<BaseConfigTypeContainer<VarType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<VarType>,
                                        std::default_delete<BaseConfigTypeContainer<VarType>>>*)(this + 104));
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x1004d6aa0, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<QuestType>::List(int, DataStatus const**)
    void BaseTemplateConfigTypeList<QuestType>::List(int param_1, DataStatus** param_2) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<QuestType>,
                                        std::default_delete<BaseConfigTypeContainer<QuestType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<QuestType>,
                                        std::default_delete<BaseConfigTypeContainer<QuestType>>>*)(this + 104));
        (**(code**)(*plVar1 + 64))(plVar1, param_1, param_2);
    }

    // 0x1004d84b0, 16 bytes, complete-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<VarType>::~BaseTemplateConfigTypeList(): jumps straight to the base-object destructor

    // 0x1004d84c0, 32 bytes, deleting destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<VarType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<VarType>::~BaseTemplateConfigTypeList() {
        ~VarTypeList();
        operator_delete(this);
    }

    // 0x1004dc9d0, 48 bytes, base-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<VarType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<VarType>::~BaseTemplateConfigTypeList() {
        *(undefined**)this = PTR_vtable_100ee81b8 + 16;
        ((this + 104))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x1004de680, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<SeqGroupType>::List(int, DataStatus const**)
    void BaseTemplateConfigTypeList<SeqGroupType>::List(int param_1, DataStatus** param_2) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<SeqGroupType>,
                                        std::default_delete<BaseConfigTypeContainer<SeqGroupType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<SeqGroupType>,
                                        std::default_delete<BaseConfigTypeContainer<SeqGroupType>>>*)(this + 104));
        (**(code**)(*plVar1 + 64))(plVar1, param_1, param_2);
    }

    // 0x1004e0180, 320 bytes, base-object constructor, inline, placed by class name
    // BaseTemplateConfigTypeList<SeqType>::BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void BaseTemplateConfigTypeList<SeqType>::BaseTemplateConfigTypeList(uint param_2, ModeGame* param_3,
                                                                         Language* param_4,
                                                                         Js5ResourceProvider* param_5,
                                                                         Js5ArchiveSettings* param_6,
                                                                         Js5ConfigGroup* param_7) {
        unique_ptr<BaseConfigTypeContainer<SeqType>, std::default_delete<BaseConfigTypeContainer<SeqType>>>* this_00;
        BaseTemplateConfigTypeList local_38[8];

        new (this) BaseConfigTypeList(param_3, param_4, param_5, param_6, param_7);
        *(undefined**)this = PTR_vtable_100ee81b0 + 16;
        this_00 = (unique_ptr<BaseConfigTypeContainer<SeqType>,
                              std::default_delete<BaseConfigTypeContainer<SeqType>>>*)(this + 104);
        std::unique_ptr<BaseConfigTypeContainer<SeqType>,
                        std::default_delete<BaseConfigTypeContainer<SeqType>>>::unique_ptr<true, void>(this_00);
        if (param_2 == 3) {
            std::make_unique<ConfigTypeLoadAllContainer<SeqType>, BaseTemplateConfigTypeList<SeqType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<SeqType>,
                            std::default_delete<BaseConfigTypeContainer<SeqType>>>::operator=(this_00,
                                                                                              (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else if (param_2 == 2) {
            std::make_unique<ConfigTypePreloadPackedContainer<SeqType>, BaseTemplateConfigTypeList<SeqType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<SeqType>,
                            std::default_delete<BaseConfigTypeContainer<SeqType>>>::operator=(this_00,
                                                                                              (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else {
            if (param_2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", (ulong)param_2);
            }
            std::make_unique<ConfigTypeNoPreloadContainer<SeqType>, BaseTemplateConfigTypeList<SeqType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&, unsigned int&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6,
                (uint*)&param_7);
            std::unique_ptr<BaseConfigTypeContainer<SeqType>,
                            std::default_delete<BaseConfigTypeContainer<SeqType>>>::operator=(this_00,
                                                                                              (unique_ptr*)local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x1004e02f0, 48 bytes, base-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<SeqType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<SeqType>::~BaseTemplateConfigTypeList() {
        *(undefined**)this = PTR_vtable_100ee81b0 + 16;
        ((this + 104))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x1004e1520, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<SeqType>::CacheResize(unsigned int)
    void BaseTemplateConfigTypeList<SeqType>::CacheResize(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<SeqType>,
                                        std::default_delete<BaseConfigTypeContainer<SeqType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<SeqType>,
                                        std::default_delete<BaseConfigTypeContainer<SeqType>>>*)(this + 104));
        (**(code**)(*plVar1 + 40))(plVar1, param_1);
    }

    // 0x1004e1550, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<SeqType>::LoadList()
    void BaseTemplateConfigTypeList<SeqType>::LoadList() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<SeqType>,
                                        std::default_delete<BaseConfigTypeContainer<SeqType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<SeqType>,
                                        std::default_delete<BaseConfigTypeContainer<SeqType>>>*)(this + 104));
        (**(code**)(*plVar1 + 16))(plVar1);
    }

    // 0x1004e15e0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<SeqType>::IsPreloaded() const
    void BaseTemplateConfigTypeList<SeqType>::IsPreloaded() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<SeqType>,
                                        std::default_delete<BaseConfigTypeContainer<SeqType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<SeqType>,
                                        std::default_delete<BaseConfigTypeContainer<SeqType>>>*)(this + 104));
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x1004e1600, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<SeqType>::GetPreloadProgress() const
    void BaseTemplateConfigTypeList<SeqType>::GetPreloadProgress() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<SeqType>,
                                        std::default_delete<BaseConfigTypeContainer<SeqType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<SeqType>,
                                        std::default_delete<BaseConfigTypeContainer<SeqType>>>*)(this + 104));
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x1004e1ca0, 16 bytes, complete-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<SeqType>::~BaseTemplateConfigTypeList(): jumps straight to the base-object destructor

    // 0x1004e1cb0, 32 bytes, deleting destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<SeqType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<SeqType>::~BaseTemplateConfigTypeList() {
        ~BaseTemplateConfigTypeList(this);
        operator_delete(this);
    }

    // 0x1004e1cd0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<SeqType>::CacheReset()
    void BaseTemplateConfigTypeList<SeqType>::CacheReset() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<SeqType>,
                                        std::default_delete<BaseConfigTypeContainer<SeqType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<SeqType>,
                                        std::default_delete<BaseConfigTypeContainer<SeqType>>>*)(this + 104));
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x1004e1cf0, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<SeqType>::CacheClean(unsigned int)
    void BaseTemplateConfigTypeList<SeqType>::CacheClean(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<SeqType>,
                                        std::default_delete<BaseConfigTypeContainer<SeqType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<SeqType>,
                                        std::default_delete<BaseConfigTypeContainer<SeqType>>>*)(this + 104));
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x1004f2f70, 320 bytes, base-object constructor, inline, placed by class name
    // BaseTemplateConfigTypeList<ObjType>::BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void BaseTemplateConfigTypeList<ObjType>::BaseTemplateConfigTypeList(uint param_2, ModeGame* param_3,
                                                                         Language* param_4,
                                                                         Js5ResourceProvider* param_5,
                                                                         Js5ArchiveSettings* param_6,
                                                                         Js5ConfigGroup* param_7) {
        unique_ptr<BaseConfigTypeContainer<ObjType>, std::default_delete<BaseConfigTypeContainer<ObjType>>>* this_00;
        BaseTemplateConfigTypeList local_38[8];

        new (this) BaseConfigTypeList(param_3, param_4, param_5, param_6, param_7);
        *(undefined**)this = PTR_vtable_100ee81a8 + 16;
        this_00 = (unique_ptr<BaseConfigTypeContainer<ObjType>,
                              std::default_delete<BaseConfigTypeContainer<ObjType>>>*)(this + 104);
        std::unique_ptr<BaseConfigTypeContainer<ObjType>,
                        std::default_delete<BaseConfigTypeContainer<ObjType>>>::unique_ptr<true, void>(this_00);
        if (param_2 == 3) {
            std::make_unique<ConfigTypeLoadAllContainer<ObjType>, BaseTemplateConfigTypeList<ObjType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<ObjType>,
                            std::default_delete<BaseConfigTypeContainer<ObjType>>>::operator=(this_00,
                                                                                              (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else if (param_2 == 2) {
            std::make_unique<ConfigTypePreloadPackedContainer<ObjType>, BaseTemplateConfigTypeList<ObjType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<ObjType>,
                            std::default_delete<BaseConfigTypeContainer<ObjType>>>::operator=(this_00,
                                                                                              (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else {
            if (param_2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", (ulong)param_2);
            }
            std::make_unique<ConfigTypeNoPreloadContainer<ObjType>, BaseTemplateConfigTypeList<ObjType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&, unsigned int&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6,
                (uint*)&param_7);
            std::unique_ptr<BaseConfigTypeContainer<ObjType>,
                            std::default_delete<BaseConfigTypeContainer<ObjType>>>::operator=(this_00,
                                                                                              (unique_ptr*)local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x1004f3130, 48 bytes, base-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<ObjType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<ObjType>::~BaseTemplateConfigTypeList() {
        *(undefined**)this = PTR_vtable_100ee81a8 + 16;
        ((this + 104))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x1004f35d0, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<ObjType>::List(int, DataStatus const**)
    void BaseTemplateConfigTypeList<ObjType>::List(int param_1, DataStatus** param_2) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<ObjType>,
                                        std::default_delete<BaseConfigTypeContainer<ObjType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<ObjType>,
                                        std::default_delete<BaseConfigTypeContainer<ObjType>>>*)(this + 104));
        (**(code**)(*plVar1 + 64))(plVar1, param_1, param_2);
    }

    // 0x1004f6a50, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<ObjType>::CacheResize(unsigned int)
    void BaseTemplateConfigTypeList<ObjType>::CacheResize(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<ObjType>,
                                        std::default_delete<BaseConfigTypeContainer<ObjType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<ObjType>,
                                        std::default_delete<BaseConfigTypeContainer<ObjType>>>*)(this + 104));
        (**(code**)(*plVar1 + 40))(plVar1, param_1);
    }

    // 0x1004f6a80, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<ObjType>::LoadList()
    void BaseTemplateConfigTypeList<ObjType>::LoadList() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<ObjType>,
                                        std::default_delete<BaseConfigTypeContainer<ObjType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<ObjType>,
                                        std::default_delete<BaseConfigTypeContainer<ObjType>>>*)(this + 104));
        (**(code**)(*plVar1 + 16))(plVar1);
    }

    // 0x1004f6b00, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<ObjType>::IsPreloaded() const
    void BaseTemplateConfigTypeList<ObjType>::IsPreloaded() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<ObjType>,
                                        std::default_delete<BaseConfigTypeContainer<ObjType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<ObjType>,
                                        std::default_delete<BaseConfigTypeContainer<ObjType>>>*)(this + 104));
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x1004f6b20, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<ObjType>::GetPreloadProgress() const
    void BaseTemplateConfigTypeList<ObjType>::GetPreloadProgress() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<ObjType>,
                                        std::default_delete<BaseConfigTypeContainer<ObjType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<ObjType>,
                                        std::default_delete<BaseConfigTypeContainer<ObjType>>>*)(this + 104));
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x1004f6dc0, 16 bytes, complete-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<ObjType>::~BaseTemplateConfigTypeList(): jumps straight to the base-object destructor

    // 0x1004f6dd0, 32 bytes, deleting destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<ObjType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<ObjType>::~BaseTemplateConfigTypeList() {
        ~BaseTemplateConfigTypeList(this);
        operator_delete(this);
    }

    // 0x1004f6df0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<ObjType>::CacheReset()
    void BaseTemplateConfigTypeList<ObjType>::CacheReset() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<ObjType>,
                                        std::default_delete<BaseConfigTypeContainer<ObjType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<ObjType>,
                                        std::default_delete<BaseConfigTypeContainer<ObjType>>>*)(this + 104));
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x1004f6e10, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<ObjType>::CacheClean(unsigned int)
    void BaseTemplateConfigTypeList<ObjType>::CacheClean(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<ObjType>,
                                        std::default_delete<BaseConfigTypeContainer<ObjType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<ObjType>,
                                        std::default_delete<BaseConfigTypeContainer<ObjType>>>*)(this + 104));
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x100505b30, 320 bytes, base-object constructor, inline, placed by class name
    // BaseTemplateConfigTypeList<NPCType>::BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void BaseTemplateConfigTypeList<NPCType>::BaseTemplateConfigTypeList(uint param_2, ModeGame* param_3,
                                                                         Language* param_4,
                                                                         Js5ResourceProvider* param_5,
                                                                         Js5ArchiveSettings* param_6,
                                                                         Js5ConfigGroup* param_7) {
        unique_ptr<BaseConfigTypeContainer<NPCType>, std::default_delete<BaseConfigTypeContainer<NPCType>>>* this_00;
        BaseTemplateConfigTypeList local_38[8];

        new (this) BaseConfigTypeList(param_3, param_4, param_5, param_6, param_7);
        *(undefined**)this = PTR_vtable_100ee81a0 + 16;
        this_00 = (unique_ptr<BaseConfigTypeContainer<NPCType>,
                              std::default_delete<BaseConfigTypeContainer<NPCType>>>*)(this + 104);
        std::unique_ptr<BaseConfigTypeContainer<NPCType>,
                        std::default_delete<BaseConfigTypeContainer<NPCType>>>::unique_ptr<true, void>(this_00);
        if (param_2 == 3) {
            std::make_unique<ConfigTypeLoadAllContainer<NPCType>, BaseTemplateConfigTypeList<NPCType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<NPCType>,
                            std::default_delete<BaseConfigTypeContainer<NPCType>>>::operator=(this_00,
                                                                                              (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else if (param_2 == 2) {
            std::make_unique<ConfigTypePreloadPackedContainer<NPCType>, BaseTemplateConfigTypeList<NPCType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<NPCType>,
                            std::default_delete<BaseConfigTypeContainer<NPCType>>>::operator=(this_00,
                                                                                              (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else {
            if (param_2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", (ulong)param_2);
            }
            std::make_unique<ConfigTypeNoPreloadContainer<NPCType>, BaseTemplateConfigTypeList<NPCType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&, unsigned int&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6,
                (uint*)&param_7);
            std::unique_ptr<BaseConfigTypeContainer<NPCType>,
                            std::default_delete<BaseConfigTypeContainer<NPCType>>>::operator=(this_00,
                                                                                              (unique_ptr*)local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x100505ca0, 48 bytes, base-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<NPCType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<NPCType>::~BaseTemplateConfigTypeList() {
        *(undefined**)this = PTR_vtable_100ee81a0 + 16;
        ((this + 104))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x10050a180, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<NPCType>::CacheResize(unsigned int)
    void BaseTemplateConfigTypeList<NPCType>::CacheResize(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<NPCType>,
                                        std::default_delete<BaseConfigTypeContainer<NPCType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<NPCType>,
                                        std::default_delete<BaseConfigTypeContainer<NPCType>>>*)(this + 104));
        (**(code**)(*plVar1 + 40))(plVar1, param_1);
    }

    // 0x10050a1b0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<NPCType>::LoadList()
    void BaseTemplateConfigTypeList<NPCType>::LoadList() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<NPCType>,
                                        std::default_delete<BaseConfigTypeContainer<NPCType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<NPCType>,
                                        std::default_delete<BaseConfigTypeContainer<NPCType>>>*)(this + 104));
        (**(code**)(*plVar1 + 16))(plVar1);
    }

    // 0x10050a240, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<NPCType>::IsPreloaded() const
    void BaseTemplateConfigTypeList<NPCType>::IsPreloaded() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<NPCType>,
                                        std::default_delete<BaseConfigTypeContainer<NPCType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<NPCType>,
                                        std::default_delete<BaseConfigTypeContainer<NPCType>>>*)(this + 104));
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x10050a260, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<NPCType>::GetPreloadProgress() const
    void BaseTemplateConfigTypeList<NPCType>::GetPreloadProgress() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<NPCType>,
                                        std::default_delete<BaseConfigTypeContainer<NPCType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<NPCType>,
                                        std::default_delete<BaseConfigTypeContainer<NPCType>>>*)(this + 104));
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x10050ad60, 16 bytes, complete-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<NPCType>::~BaseTemplateConfigTypeList(): jumps straight to the base-object destructor

    // 0x10050ad70, 32 bytes, deleting destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<NPCType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<NPCType>::~BaseTemplateConfigTypeList() {
        ~BaseTemplateConfigTypeList(this);
        operator_delete(this);
    }

    // 0x10050ad90, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<NPCType>::CacheReset()
    void BaseTemplateConfigTypeList<NPCType>::CacheReset() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<NPCType>,
                                        std::default_delete<BaseConfigTypeContainer<NPCType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<NPCType>,
                                        std::default_delete<BaseConfigTypeContainer<NPCType>>>*)(this + 104));
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x10050adb0, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<NPCType>::CacheClean(unsigned int)
    void BaseTemplateConfigTypeList<NPCType>::CacheClean(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<NPCType>,
                                        std::default_delete<BaseConfigTypeContainer<NPCType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<NPCType>,
                                        std::default_delete<BaseConfigTypeContainer<NPCType>>>*)(this + 104));
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x100514ae0, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<ParamType>::List(int, DataStatus const**)
    void BaseTemplateConfigTypeList<ParamType>::List(int param_1, DataStatus** param_2) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<ParamType>,
                                        std::default_delete<BaseConfigTypeContainer<ParamType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<ParamType>,
                                        std::default_delete<BaseConfigTypeContainer<ParamType>>>*)(this + 104));
        (**(code**)(*plVar1 + 64))(plVar1, param_1, param_2);
    }

    // 0x100515980, 320 bytes, base-object constructor, inline, placed by class name
    // BaseTemplateConfigTypeList<LocType>::BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void BaseTemplateConfigTypeList<LocType>::BaseTemplateConfigTypeList(uint param_2, ModeGame* param_3,
                                                                         Language* param_4,
                                                                         Js5ResourceProvider* param_5,
                                                                         Js5ArchiveSettings* param_6,
                                                                         Js5ConfigGroup* param_7) {
        unique_ptr<BaseConfigTypeContainer<LocType>, std::default_delete<BaseConfigTypeContainer<LocType>>>* this_00;
        BaseTemplateConfigTypeList local_38[8];

        new (this) BaseConfigTypeList(param_3, param_4, param_5, param_6, param_7);
        *(undefined**)this = PTR_vtable_100ee8190 + 16;
        this_00 = (unique_ptr<BaseConfigTypeContainer<LocType>,
                              std::default_delete<BaseConfigTypeContainer<LocType>>>*)(this + 104);
        std::unique_ptr<BaseConfigTypeContainer<LocType>,
                        std::default_delete<BaseConfigTypeContainer<LocType>>>::unique_ptr<true, void>(this_00);
        if (param_2 == 3) {
            std::make_unique<ConfigTypeLoadAllContainer<LocType>, BaseTemplateConfigTypeList<LocType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<LocType>,
                            std::default_delete<BaseConfigTypeContainer<LocType>>>::operator=(this_00,
                                                                                              (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else if (param_2 == 2) {
            std::make_unique<ConfigTypePreloadPackedContainer<LocType>, BaseTemplateConfigTypeList<LocType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<LocType>,
                            std::default_delete<BaseConfigTypeContainer<LocType>>>::operator=(this_00,
                                                                                              (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else {
            if (param_2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", (ulong)param_2);
            }
            std::make_unique<ConfigTypeNoPreloadContainer<LocType>, BaseTemplateConfigTypeList<LocType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&, unsigned int&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6,
                (uint*)&param_7);
            std::unique_ptr<BaseConfigTypeContainer<LocType>,
                            std::default_delete<BaseConfigTypeContainer<LocType>>>::operator=(this_00,
                                                                                              (unique_ptr*)local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x100515ad0, 48 bytes, base-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<LocType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<LocType>::~BaseTemplateConfigTypeList() {
        *(undefined**)this = PTR_vtable_100ee8190 + 16;
        ((this + 104))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x100517880, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<MapElementType>::List(int, DataStatus const**)
    void BaseTemplateConfigTypeList<MapElementType>::List(int param_1, DataStatus** param_2) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<MapElementType>,
                                        std::default_delete<BaseConfigTypeContainer<MapElementType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<MapElementType>,
                                        std::default_delete<BaseConfigTypeContainer<MapElementType>>>*)(this + 104));
        (**(code**)(*plVar1 + 64))(plVar1, param_1, param_2);
    }

    // 0x100518730, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<LocType>::CacheResize(unsigned int)
    void BaseTemplateConfigTypeList<LocType>::CacheResize(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<LocType>,
                                        std::default_delete<BaseConfigTypeContainer<LocType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<LocType>,
                                        std::default_delete<BaseConfigTypeContainer<LocType>>>*)(this + 104));
        (**(code**)(*plVar1 + 40))(plVar1, param_1);
    }

    // 0x100518760, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<LocType>::LoadList()
    void BaseTemplateConfigTypeList<LocType>::LoadList() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<LocType>,
                                        std::default_delete<BaseConfigTypeContainer<LocType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<LocType>,
                                        std::default_delete<BaseConfigTypeContainer<LocType>>>*)(this + 104));
        (**(code**)(*plVar1 + 16))(plVar1);
    }

    // 0x1005187e0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<LocType>::IsPreloaded() const
    void BaseTemplateConfigTypeList<LocType>::IsPreloaded() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<LocType>,
                                        std::default_delete<BaseConfigTypeContainer<LocType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<LocType>,
                                        std::default_delete<BaseConfigTypeContainer<LocType>>>*)(this + 104));
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x100518800, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<LocType>::GetPreloadProgress() const
    void BaseTemplateConfigTypeList<LocType>::GetPreloadProgress() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<LocType>,
                                        std::default_delete<BaseConfigTypeContainer<LocType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<LocType>,
                                        std::default_delete<BaseConfigTypeContainer<LocType>>>*)(this + 104));
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x100518830, 16 bytes, complete-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<LocType>::~BaseTemplateConfigTypeList(): jumps straight to the base-object destructor

    // 0x100518840, 32 bytes, deleting destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<LocType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<LocType>::~BaseTemplateConfigTypeList() {
        ~BaseTemplateConfigTypeList(this);
        operator_delete(this);
    }

    // 0x100518860, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<LocType>::CacheReset()
    void BaseTemplateConfigTypeList<LocType>::CacheReset() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<LocType>,
                                        std::default_delete<BaseConfigTypeContainer<LocType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<LocType>,
                                        std::default_delete<BaseConfigTypeContainer<LocType>>>*)(this + 104));
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x100518880, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<LocType>::CacheClean(unsigned int)
    void BaseTemplateConfigTypeList<LocType>::CacheClean(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<LocType>,
                                        std::default_delete<BaseConfigTypeContainer<LocType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<LocType>,
                                        std::default_delete<BaseConfigTypeContainer<LocType>>>*)(this + 104));
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x100556a20, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<AchievementType>::List(int, DataStatus const**)
    void BaseTemplateConfigTypeList<AchievementType>::List(int param_1, DataStatus** param_2) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<AchievementType>,
                                        std::default_delete<BaseConfigTypeContainer<AchievementType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<AchievementType>,
                                        std::default_delete<BaseConfigTypeContainer<AchievementType>>>*)(this + 104));
        (**(code**)(*plVar1 + 64))(plVar1, param_1, param_2);
    }

    // 0x1005655f0, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<VarType>::List(int, DataStatus const**)
    void BaseTemplateConfigTypeList<VarType>::List(int param_1, DataStatus** param_2) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<VarType>,
                                        std::default_delete<BaseConfigTypeContainer<VarType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<VarType>,
                                        std::default_delete<BaseConfigTypeContainer<VarType>>>*)(this + 104));
        (**(code**)(*plVar1 + 64))(plVar1, param_1, param_2);
    }

    // 0x100565670, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<VarBitType>::List(int, DataStatus const**)
    void BaseTemplateConfigTypeList<VarBitType>::List(int param_1, DataStatus** param_2) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<VarBitType>,
                                        std::default_delete<BaseConfigTypeContainer<VarBitType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<VarBitType>,
                                        std::default_delete<BaseConfigTypeContainer<VarBitType>>>*)(this + 104));
        (**(code**)(*plVar1 + 64))(plVar1, param_1, param_2);
    }

    // 0x1005713c0, 320 bytes, base-object constructor, inline, placed by class name
    // BaseTemplateConfigTypeList<ParamType>::BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void BaseTemplateConfigTypeList<ParamType>::BaseTemplateConfigTypeList(uint param_2, ModeGame* param_3,
                                                                           Language* param_4,
                                                                           Js5ResourceProvider* param_5,
                                                                           Js5ArchiveSettings* param_6,
                                                                           Js5ConfigGroup* param_7) {
        unique_ptr<BaseConfigTypeContainer<ParamType>, std::default_delete<BaseConfigTypeContainer<ParamType>>>*
            this_00;
        BaseTemplateConfigTypeList local_38[8];

        new (this) BaseConfigTypeList(param_3, param_4, param_5, param_6, param_7);
        *(undefined**)this = PTR_vtable_100ee81d8 + 16;
        this_00 = (unique_ptr<BaseConfigTypeContainer<ParamType>,
                              std::default_delete<BaseConfigTypeContainer<ParamType>>>*)(this + 104);
        std::unique_ptr<BaseConfigTypeContainer<ParamType>,
                        std::default_delete<BaseConfigTypeContainer<ParamType>>>::unique_ptr<true, void>(this_00);
        if (param_2 == 3) {
            std::make_unique<ConfigTypeLoadAllContainer<ParamType>, BaseTemplateConfigTypeList<ParamType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<ParamType>,
                            std::default_delete<BaseConfigTypeContainer<ParamType>>>::operator=(this_00,
                                                                                                (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else if (param_2 == 2) {
            std::make_unique<ConfigTypePreloadPackedContainer<ParamType>, BaseTemplateConfigTypeList<ParamType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<ParamType>,
                            std::default_delete<BaseConfigTypeContainer<ParamType>>>::operator=(this_00,
                                                                                                (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else {
            if (param_2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", (ulong)param_2);
            }
            std::make_unique<ConfigTypeNoPreloadContainer<ParamType>, BaseTemplateConfigTypeList<ParamType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&, unsigned int&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6,
                (uint*)&param_7);
            std::unique_ptr<BaseConfigTypeContainer<ParamType>,
                            std::default_delete<BaseConfigTypeContainer<ParamType>>>::operator=(this_00,
                                                                                                (unique_ptr*)local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x100571530, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<ParamType>::CacheResize(unsigned int)
    void BaseTemplateConfigTypeList<ParamType>::CacheResize(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<ParamType>,
                                        std::default_delete<BaseConfigTypeContainer<ParamType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<ParamType>,
                                        std::default_delete<BaseConfigTypeContainer<ParamType>>>*)(this + 104));
        (**(code**)(*plVar1 + 40))(plVar1, param_1);
    }

    // 0x100571560, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<ParamType>::LoadList()
    void BaseTemplateConfigTypeList<ParamType>::LoadList() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<ParamType>,
                                        std::default_delete<BaseConfigTypeContainer<ParamType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<ParamType>,
                                        std::default_delete<BaseConfigTypeContainer<ParamType>>>*)(this + 104));
        (**(code**)(*plVar1 + 16))(plVar1);
    }

    // 0x100571580, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<ParamType>::CacheReset()
    void BaseTemplateConfigTypeList<ParamType>::CacheReset() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<ParamType>,
                                        std::default_delete<BaseConfigTypeContainer<ParamType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<ParamType>,
                                        std::default_delete<BaseConfigTypeContainer<ParamType>>>*)(this + 104));
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x1005715a0, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<ParamType>::CacheClean(unsigned int)
    void BaseTemplateConfigTypeList<ParamType>::CacheClean(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<ParamType>,
                                        std::default_delete<BaseConfigTypeContainer<ParamType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<ParamType>,
                                        std::default_delete<BaseConfigTypeContainer<ParamType>>>*)(this + 104));
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x1005715d0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<ParamType>::IsPreloaded() const
    void BaseTemplateConfigTypeList<ParamType>::IsPreloaded() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<ParamType>,
                                        std::default_delete<BaseConfigTypeContainer<ParamType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<ParamType>,
                                        std::default_delete<BaseConfigTypeContainer<ParamType>>>*)(this + 104));
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x1005715f0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<ParamType>::GetPreloadProgress() const
    void BaseTemplateConfigTypeList<ParamType>::GetPreloadProgress() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<ParamType>,
                                        std::default_delete<BaseConfigTypeContainer<ParamType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<ParamType>,
                                        std::default_delete<BaseConfigTypeContainer<ParamType>>>*)(this + 104));
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x100571870, 16 bytes, complete-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<ParamType>::~BaseTemplateConfigTypeList(): jumps straight to the base-object destructor

    // 0x100571880, 32 bytes, deleting destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<ParamType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<ParamType>::~BaseTemplateConfigTypeList() {
        ~ParamTypeList();
        operator_delete(this);
    }

    // 0x100576c50, 48 bytes, base-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<ParamType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<ParamType>::~BaseTemplateConfigTypeList() {
        *(undefined**)this = PTR_vtable_100ee81d8 + 16;
        ((this + 104))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x100576da0, 320 bytes, base-object constructor, inline, placed by class name
    // BaseTemplateConfigTypeList<DBRowType>::BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void BaseTemplateConfigTypeList<DBRowType>::BaseTemplateConfigTypeList(uint param_2, ModeGame* param_3,
                                                                           Language* param_4,
                                                                           Js5ResourceProvider* param_5,
                                                                           Js5ArchiveSettings* param_6,
                                                                           Js5ConfigGroup* param_7) {
        unique_ptr<BaseConfigTypeContainer<DBRowType>, std::default_delete<BaseConfigTypeContainer<DBRowType>>>*
            this_00;
        BaseTemplateConfigTypeList local_38[8];

        new (this) BaseConfigTypeList(param_3, param_4, param_5, param_6, param_7);
        *(undefined**)this = PTR_vtable_100ee81c8 + 16;
        this_00 = (unique_ptr<BaseConfigTypeContainer<DBRowType>,
                              std::default_delete<BaseConfigTypeContainer<DBRowType>>>*)(this + 104);
        std::unique_ptr<BaseConfigTypeContainer<DBRowType>,
                        std::default_delete<BaseConfigTypeContainer<DBRowType>>>::unique_ptr<true, void>(this_00);
        if (param_2 == 3) {
            std::make_unique<ConfigTypeLoadAllContainer<DBRowType>, BaseTemplateConfigTypeList<DBRowType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<DBRowType>,
                            std::default_delete<BaseConfigTypeContainer<DBRowType>>>::operator=(this_00,
                                                                                                (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else if (param_2 == 2) {
            std::make_unique<ConfigTypePreloadPackedContainer<DBRowType>, BaseTemplateConfigTypeList<DBRowType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<DBRowType>,
                            std::default_delete<BaseConfigTypeContainer<DBRowType>>>::operator=(this_00,
                                                                                                (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else {
            if (param_2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", (ulong)param_2);
            }
            std::make_unique<ConfigTypeNoPreloadContainer<DBRowType>, BaseTemplateConfigTypeList<DBRowType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&, unsigned int&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6,
                (uint*)&param_7);
            std::unique_ptr<BaseConfigTypeContainer<DBRowType>,
                            std::default_delete<BaseConfigTypeContainer<DBRowType>>>::operator=(this_00,
                                                                                                (unique_ptr*)local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x100576f10, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<DBRowType>::CacheResize(unsigned int)
    void BaseTemplateConfigTypeList<DBRowType>::CacheResize(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<DBRowType>,
                                        std::default_delete<BaseConfigTypeContainer<DBRowType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<DBRowType>,
                                        std::default_delete<BaseConfigTypeContainer<DBRowType>>>*)(this + 104));
        (**(code**)(*plVar1 + 40))(plVar1, param_1);
    }

    // 0x100576f40, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<DBRowType>::LoadList()
    void BaseTemplateConfigTypeList<DBRowType>::LoadList() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<DBRowType>,
                                        std::default_delete<BaseConfigTypeContainer<DBRowType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<DBRowType>,
                                        std::default_delete<BaseConfigTypeContainer<DBRowType>>>*)(this + 104));
        (**(code**)(*plVar1 + 16))(plVar1);
    }

    // 0x100576f60, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<DBRowType>::CacheReset()
    void BaseTemplateConfigTypeList<DBRowType>::CacheReset() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<DBRowType>,
                                        std::default_delete<BaseConfigTypeContainer<DBRowType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<DBRowType>,
                                        std::default_delete<BaseConfigTypeContainer<DBRowType>>>*)(this + 104));
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x100576f80, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<DBRowType>::CacheClean(unsigned int)
    void BaseTemplateConfigTypeList<DBRowType>::CacheClean(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<DBRowType>,
                                        std::default_delete<BaseConfigTypeContainer<DBRowType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<DBRowType>,
                                        std::default_delete<BaseConfigTypeContainer<DBRowType>>>*)(this + 104));
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x100576fb0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<DBRowType>::IsPreloaded() const
    void BaseTemplateConfigTypeList<DBRowType>::IsPreloaded() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<DBRowType>,
                                        std::default_delete<BaseConfigTypeContainer<DBRowType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<DBRowType>,
                                        std::default_delete<BaseConfigTypeContainer<DBRowType>>>*)(this + 104));
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x100576fd0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<DBRowType>::GetPreloadProgress() const
    void BaseTemplateConfigTypeList<DBRowType>::GetPreloadProgress() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<DBRowType>,
                                        std::default_delete<BaseConfigTypeContainer<DBRowType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<DBRowType>,
                                        std::default_delete<BaseConfigTypeContainer<DBRowType>>>*)(this + 104));
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x100577250, 16 bytes, complete-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<DBRowType>::~BaseTemplateConfigTypeList(): jumps straight to the base-object destructor

    // 0x100577260, 32 bytes, deleting destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<DBRowType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<DBRowType>::~BaseTemplateConfigTypeList() {
        ~DBRowTypeList();
        operator_delete(this);
    }

    // 0x10057c710, 48 bytes, base-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<DBRowType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<DBRowType>::~BaseTemplateConfigTypeList() {
        *(undefined**)this = PTR_vtable_100ee81c8 + 16;
        ((this + 104))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x10057c860, 320 bytes, base-object constructor, inline, placed by class name
    // BaseTemplateConfigTypeList<DBTableType>::BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void BaseTemplateConfigTypeList<DBTableType>::BaseTemplateConfigTypeList(uint param_2, ModeGame* param_3,
                                                                             Language* param_4,
                                                                             Js5ResourceProvider* param_5,
                                                                             Js5ArchiveSettings* param_6,
                                                                             Js5ConfigGroup* param_7) {
        unique_ptr<BaseConfigTypeContainer<DBTableType>, std::default_delete<BaseConfigTypeContainer<DBTableType>>>*
            this_00;
        BaseTemplateConfigTypeList local_38[8];

        new (this) BaseConfigTypeList(param_3, param_4, param_5, param_6, param_7);
        *(undefined**)this = PTR_vtable_100ee8128 + 16;
        this_00 = (unique_ptr<BaseConfigTypeContainer<DBTableType>,
                              std::default_delete<BaseConfigTypeContainer<DBTableType>>>*)(this + 104);
        std::unique_ptr<BaseConfigTypeContainer<DBTableType>,
                        std::default_delete<BaseConfigTypeContainer<DBTableType>>>::unique_ptr<true, void>(this_00);
        if (param_2 == 3) {
            std::make_unique<ConfigTypeLoadAllContainer<DBTableType>, BaseTemplateConfigTypeList<DBTableType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<DBTableType>,
                            std::default_delete<BaseConfigTypeContainer<DBTableType>>>::operator=(this_00,
                                                                                                  (unique_ptr*)
                                                                                                      local_38);
            local_38->~unique_ptr();
        } else if (param_2 == 2) {
            std::make_unique<ConfigTypePreloadPackedContainer<DBTableType>, BaseTemplateConfigTypeList<DBTableType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<DBTableType>,
                            std::default_delete<BaseConfigTypeContainer<DBTableType>>>::operator=(this_00,
                                                                                                  (unique_ptr*)
                                                                                                      local_38);
            local_38->~unique_ptr();
        } else {
            if (param_2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", (ulong)param_2);
            }
            std::make_unique<ConfigTypeNoPreloadContainer<DBTableType>, BaseTemplateConfigTypeList<DBTableType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&, unsigned int&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6,
                (uint*)&param_7);
            std::unique_ptr<BaseConfigTypeContainer<DBTableType>,
                            std::default_delete<BaseConfigTypeContainer<DBTableType>>>::operator=(this_00,
                                                                                                  (unique_ptr*)
                                                                                                      local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x10057c9d0, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<DBTableType>::CacheResize(unsigned int)
    void BaseTemplateConfigTypeList<DBTableType>::CacheResize(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<DBTableType>,
                                        std::default_delete<BaseConfigTypeContainer<DBTableType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<DBTableType>,
                                        std::default_delete<BaseConfigTypeContainer<DBTableType>>>*)(this + 104));
        (**(code**)(*plVar1 + 40))(plVar1, param_1);
    }

    // 0x10057ca00, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<DBTableType>::LoadList()
    void BaseTemplateConfigTypeList<DBTableType>::LoadList() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<DBTableType>,
                                        std::default_delete<BaseConfigTypeContainer<DBTableType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<DBTableType>,
                                        std::default_delete<BaseConfigTypeContainer<DBTableType>>>*)(this + 104));
        (**(code**)(*plVar1 + 16))(plVar1);
    }

    // 0x10057ca20, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<DBTableType>::CacheReset()
    void BaseTemplateConfigTypeList<DBTableType>::CacheReset() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<DBTableType>,
                                        std::default_delete<BaseConfigTypeContainer<DBTableType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<DBTableType>,
                                        std::default_delete<BaseConfigTypeContainer<DBTableType>>>*)(this + 104));
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x10057ca40, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<DBTableType>::CacheClean(unsigned int)
    void BaseTemplateConfigTypeList<DBTableType>::CacheClean(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<DBTableType>,
                                        std::default_delete<BaseConfigTypeContainer<DBTableType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<DBTableType>,
                                        std::default_delete<BaseConfigTypeContainer<DBTableType>>>*)(this + 104));
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x10057ca70, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<DBTableType>::IsPreloaded() const
    void BaseTemplateConfigTypeList<DBTableType>::IsPreloaded() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<DBTableType>,
                                        std::default_delete<BaseConfigTypeContainer<DBTableType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<DBTableType>,
                                        std::default_delete<BaseConfigTypeContainer<DBTableType>>>*)(this + 104));
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x10057ca90, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<DBTableType>::GetPreloadProgress() const
    void BaseTemplateConfigTypeList<DBTableType>::GetPreloadProgress() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<DBTableType>,
                                        std::default_delete<BaseConfigTypeContainer<DBTableType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<DBTableType>,
                                        std::default_delete<BaseConfigTypeContainer<DBTableType>>>*)(this + 104));
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x10057cd10, 16 bytes, complete-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<DBTableType>::~BaseTemplateConfigTypeList(): jumps straight to the base-object destructor

    // 0x10057cd20, 32 bytes, deleting destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<DBTableType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<DBTableType>::~BaseTemplateConfigTypeList() {
        ~DBTableTypeList();
        operator_delete(this);
    }

    // 0x100581e00, 48 bytes, base-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<DBTableType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<DBTableType>::~BaseTemplateConfigTypeList() {
        *(undefined**)this = PTR_vtable_100ee8128 + 16;
        ((this + 104))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x100581f50, 320 bytes, base-object constructor, inline, placed by class name
    // BaseTemplateConfigTypeList<InvType>::BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void BaseTemplateConfigTypeList<InvType>::BaseTemplateConfigTypeList(uint param_2, ModeGame* param_3,
                                                                         Language* param_4,
                                                                         Js5ResourceProvider* param_5,
                                                                         Js5ArchiveSettings* param_6,
                                                                         Js5ConfigGroup* param_7) {
        unique_ptr<BaseConfigTypeContainer<InvType>, std::default_delete<BaseConfigTypeContainer<InvType>>>* this_00;
        BaseTemplateConfigTypeList local_38[8];

        new (this) BaseConfigTypeList(param_3, param_4, param_5, param_6, param_7);
        *(undefined**)this = PTR_vtable_100ee8188 + 16;
        this_00 = (unique_ptr<BaseConfigTypeContainer<InvType>,
                              std::default_delete<BaseConfigTypeContainer<InvType>>>*)(this + 104);
        std::unique_ptr<BaseConfigTypeContainer<InvType>,
                        std::default_delete<BaseConfigTypeContainer<InvType>>>::unique_ptr<true, void>(this_00);
        if (param_2 == 3) {
            std::make_unique<ConfigTypeLoadAllContainer<InvType>, BaseTemplateConfigTypeList<InvType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<InvType>,
                            std::default_delete<BaseConfigTypeContainer<InvType>>>::operator=(this_00,
                                                                                              (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else if (param_2 == 2) {
            std::make_unique<ConfigTypePreloadPackedContainer<InvType>, BaseTemplateConfigTypeList<InvType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<InvType>,
                            std::default_delete<BaseConfigTypeContainer<InvType>>>::operator=(this_00,
                                                                                              (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else {
            if (param_2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", (ulong)param_2);
            }
            std::make_unique<ConfigTypeNoPreloadContainer<InvType>, BaseTemplateConfigTypeList<InvType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&, unsigned int&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6,
                (uint*)&param_7);
            std::unique_ptr<BaseConfigTypeContainer<InvType>,
                            std::default_delete<BaseConfigTypeContainer<InvType>>>::operator=(this_00,
                                                                                              (unique_ptr*)local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x1005820c0, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<InvType>::CacheResize(unsigned int)
    void BaseTemplateConfigTypeList<InvType>::CacheResize(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<InvType>,
                                        std::default_delete<BaseConfigTypeContainer<InvType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<InvType>,
                                        std::default_delete<BaseConfigTypeContainer<InvType>>>*)(this + 104));
        (**(code**)(*plVar1 + 40))(plVar1, param_1);
    }

    // 0x1005820f0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<InvType>::LoadList()
    void BaseTemplateConfigTypeList<InvType>::LoadList() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<InvType>,
                                        std::default_delete<BaseConfigTypeContainer<InvType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<InvType>,
                                        std::default_delete<BaseConfigTypeContainer<InvType>>>*)(this + 104));
        (**(code**)(*plVar1 + 16))(plVar1);
    }

    // 0x100582110, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<InvType>::CacheReset()
    void BaseTemplateConfigTypeList<InvType>::CacheReset() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<InvType>,
                                        std::default_delete<BaseConfigTypeContainer<InvType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<InvType>,
                                        std::default_delete<BaseConfigTypeContainer<InvType>>>*)(this + 104));
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x100582130, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<InvType>::CacheClean(unsigned int)
    void BaseTemplateConfigTypeList<InvType>::CacheClean(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<InvType>,
                                        std::default_delete<BaseConfigTypeContainer<InvType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<InvType>,
                                        std::default_delete<BaseConfigTypeContainer<InvType>>>*)(this + 104));
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x100582160, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<InvType>::IsPreloaded() const
    void BaseTemplateConfigTypeList<InvType>::IsPreloaded() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<InvType>,
                                        std::default_delete<BaseConfigTypeContainer<InvType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<InvType>,
                                        std::default_delete<BaseConfigTypeContainer<InvType>>>*)(this + 104));
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x100582180, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<InvType>::GetPreloadProgress() const
    void BaseTemplateConfigTypeList<InvType>::GetPreloadProgress() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<InvType>,
                                        std::default_delete<BaseConfigTypeContainer<InvType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<InvType>,
                                        std::default_delete<BaseConfigTypeContainer<InvType>>>*)(this + 104));
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x100582400, 16 bytes, complete-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<InvType>::~BaseTemplateConfigTypeList(): jumps straight to the base-object destructor

    // 0x100582410, 32 bytes, deleting destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<InvType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<InvType>::~BaseTemplateConfigTypeList() {
        ~InvTypeList();
        operator_delete(this);
    }

    // 0x1005874e0, 48 bytes, base-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<InvType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<InvType>::~BaseTemplateConfigTypeList() {
        *(undefined**)this = PTR_vtable_100ee8188 + 16;
        ((this + 104))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x100587620, 320 bytes, base-object constructor, inline, placed by class name
    // BaseTemplateConfigTypeList<VarBitType>::BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void BaseTemplateConfigTypeList<VarBitType>::BaseTemplateConfigTypeList(uint param_2, ModeGame* param_3,
                                                                            Language* param_4,
                                                                            Js5ResourceProvider* param_5,
                                                                            Js5ArchiveSettings* param_6,
                                                                            Js5ConfigGroup* param_7) {
        unique_ptr<BaseConfigTypeContainer<VarBitType>, std::default_delete<BaseConfigTypeContainer<VarBitType>>>*
            this_00;
        BaseTemplateConfigTypeList local_38[8];

        new (this) BaseConfigTypeList(param_3, param_4, param_5, param_6, param_7);
        *(undefined**)this = PTR_vtable_100ee8120 + 16;
        this_00 = (unique_ptr<BaseConfigTypeContainer<VarBitType>,
                              std::default_delete<BaseConfigTypeContainer<VarBitType>>>*)(this + 104);
        std::unique_ptr<BaseConfigTypeContainer<VarBitType>,
                        std::default_delete<BaseConfigTypeContainer<VarBitType>>>::unique_ptr<true, void>(this_00);
        if (param_2 == 3) {
            std::make_unique<ConfigTypeLoadAllContainer<VarBitType>, BaseTemplateConfigTypeList<VarBitType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<VarBitType>,
                            std::default_delete<BaseConfigTypeContainer<VarBitType>>>::operator=(this_00,
                                                                                                 (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else if (param_2 == 2) {
            std::make_unique<ConfigTypePreloadPackedContainer<VarBitType>, BaseTemplateConfigTypeList<VarBitType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<VarBitType>,
                            std::default_delete<BaseConfigTypeContainer<VarBitType>>>::operator=(this_00,
                                                                                                 (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else {
            if (param_2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", (ulong)param_2);
            }
            std::make_unique<ConfigTypeNoPreloadContainer<VarBitType>, BaseTemplateConfigTypeList<VarBitType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&, unsigned int&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6,
                (uint*)&param_7);
            std::unique_ptr<BaseConfigTypeContainer<VarBitType>,
                            std::default_delete<BaseConfigTypeContainer<VarBitType>>>::operator=(this_00,
                                                                                                 (unique_ptr*)local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x100587790, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<VarBitType>::CacheResize(unsigned int)
    void BaseTemplateConfigTypeList<VarBitType>::CacheResize(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<VarBitType>,
                                        std::default_delete<BaseConfigTypeContainer<VarBitType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<VarBitType>,
                                        std::default_delete<BaseConfigTypeContainer<VarBitType>>>*)(this + 104));
        (**(code**)(*plVar1 + 40))(plVar1, param_1);
    }

    // 0x1005877c0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<VarBitType>::LoadList()
    void BaseTemplateConfigTypeList<VarBitType>::LoadList() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<VarBitType>,
                                        std::default_delete<BaseConfigTypeContainer<VarBitType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<VarBitType>,
                                        std::default_delete<BaseConfigTypeContainer<VarBitType>>>*)(this + 104));
        (**(code**)(*plVar1 + 16))(plVar1);
    }

    // 0x1005877e0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<VarBitType>::CacheReset()
    void BaseTemplateConfigTypeList<VarBitType>::CacheReset() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<VarBitType>,
                                        std::default_delete<BaseConfigTypeContainer<VarBitType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<VarBitType>,
                                        std::default_delete<BaseConfigTypeContainer<VarBitType>>>*)(this + 104));
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x100587800, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<VarBitType>::CacheClean(unsigned int)
    void BaseTemplateConfigTypeList<VarBitType>::CacheClean(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<VarBitType>,
                                        std::default_delete<BaseConfigTypeContainer<VarBitType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<VarBitType>,
                                        std::default_delete<BaseConfigTypeContainer<VarBitType>>>*)(this + 104));
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x100587830, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<VarBitType>::IsPreloaded() const
    void BaseTemplateConfigTypeList<VarBitType>::IsPreloaded() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<VarBitType>,
                                        std::default_delete<BaseConfigTypeContainer<VarBitType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<VarBitType>,
                                        std::default_delete<BaseConfigTypeContainer<VarBitType>>>*)(this + 104));
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x100587850, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<VarBitType>::GetPreloadProgress() const
    void BaseTemplateConfigTypeList<VarBitType>::GetPreloadProgress() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<VarBitType>,
                                        std::default_delete<BaseConfigTypeContainer<VarBitType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<VarBitType>,
                                        std::default_delete<BaseConfigTypeContainer<VarBitType>>>*)(this + 104));
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x100587ad0, 16 bytes, complete-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<VarBitType>::~BaseTemplateConfigTypeList(): jumps straight to the base-object destructor

    // 0x100587ae0, 32 bytes, deleting destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<VarBitType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<VarBitType>::~BaseTemplateConfigTypeList() {
        ~VarBitTypeList();
        operator_delete(this);
    }

    // 0x10058b850, 48 bytes, base-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<VarBitType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<VarBitType>::~BaseTemplateConfigTypeList() {
        *(undefined**)this = PTR_vtable_100ee8120 + 16;
        ((this + 104))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x10058b9f0, 320 bytes, base-object constructor, inline, placed by class name
    // BaseTemplateConfigTypeList<BASType>::BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void BaseTemplateConfigTypeList<BASType>::BaseTemplateConfigTypeList(uint param_2, ModeGame* param_3,
                                                                         Language* param_4,
                                                                         Js5ResourceProvider* param_5,
                                                                         Js5ArchiveSettings* param_6,
                                                                         Js5ConfigGroup* param_7) {
        unique_ptr<BaseConfigTypeContainer<BASType>, std::default_delete<BaseConfigTypeContainer<BASType>>>* this_00;
        BaseTemplateConfigTypeList local_38[8];

        new (this) BaseConfigTypeList(param_3, param_4, param_5, param_6, param_7);
        *(undefined**)this = PTR_vtable_100ee8178 + 16;
        this_00 = (unique_ptr<BaseConfigTypeContainer<BASType>,
                              std::default_delete<BaseConfigTypeContainer<BASType>>>*)(this + 104);
        std::unique_ptr<BaseConfigTypeContainer<BASType>,
                        std::default_delete<BaseConfigTypeContainer<BASType>>>::unique_ptr<true, void>(this_00);
        if (param_2 == 3) {
            std::make_unique<ConfigTypeLoadAllContainer<BASType>, BaseTemplateConfigTypeList<BASType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<BASType>,
                            std::default_delete<BaseConfigTypeContainer<BASType>>>::operator=(this_00,
                                                                                              (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else if (param_2 == 2) {
            std::make_unique<ConfigTypePreloadPackedContainer<BASType>, BaseTemplateConfigTypeList<BASType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<BASType>,
                            std::default_delete<BaseConfigTypeContainer<BASType>>>::operator=(this_00,
                                                                                              (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else {
            if (param_2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", (ulong)param_2);
            }
            std::make_unique<ConfigTypeNoPreloadContainer<BASType>, BaseTemplateConfigTypeList<BASType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&, unsigned int&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6,
                (uint*)&param_7);
            std::unique_ptr<BaseConfigTypeContainer<BASType>,
                            std::default_delete<BaseConfigTypeContainer<BASType>>>::operator=(this_00,
                                                                                              (unique_ptr*)local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x10058bb60, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<BASType>::CacheResize(unsigned int)
    void BaseTemplateConfigTypeList<BASType>::CacheResize(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<BASType>,
                                        std::default_delete<BaseConfigTypeContainer<BASType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<BASType>,
                                        std::default_delete<BaseConfigTypeContainer<BASType>>>*)(this + 104));
        (**(code**)(*plVar1 + 40))(plVar1, param_1);
    }

    // 0x10058bb90, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<BASType>::LoadList()
    void BaseTemplateConfigTypeList<BASType>::LoadList() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<BASType>,
                                        std::default_delete<BaseConfigTypeContainer<BASType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<BASType>,
                                        std::default_delete<BaseConfigTypeContainer<BASType>>>*)(this + 104));
        (**(code**)(*plVar1 + 16))(plVar1);
    }

    // 0x10058bbb0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<BASType>::CacheReset()
    void BaseTemplateConfigTypeList<BASType>::CacheReset() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<BASType>,
                                        std::default_delete<BaseConfigTypeContainer<BASType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<BASType>,
                                        std::default_delete<BaseConfigTypeContainer<BASType>>>*)(this + 104));
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x10058bbd0, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<BASType>::CacheClean(unsigned int)
    void BaseTemplateConfigTypeList<BASType>::CacheClean(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<BASType>,
                                        std::default_delete<BaseConfigTypeContainer<BASType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<BASType>,
                                        std::default_delete<BaseConfigTypeContainer<BASType>>>*)(this + 104));
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x10058bc00, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<BASType>::IsPreloaded() const
    void BaseTemplateConfigTypeList<BASType>::IsPreloaded() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<BASType>,
                                        std::default_delete<BaseConfigTypeContainer<BASType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<BASType>,
                                        std::default_delete<BaseConfigTypeContainer<BASType>>>*)(this + 104));
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x10058bc20, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<BASType>::GetPreloadProgress() const
    void BaseTemplateConfigTypeList<BASType>::GetPreloadProgress() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<BASType>,
                                        std::default_delete<BaseConfigTypeContainer<BASType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<BASType>,
                                        std::default_delete<BaseConfigTypeContainer<BASType>>>*)(this + 104));
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x10058bea0, 16 bytes, complete-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<BASType>::~BaseTemplateConfigTypeList(): jumps straight to the base-object destructor

    // 0x10058beb0, 32 bytes, deleting destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<BASType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<BASType>::~BaseTemplateConfigTypeList() {
        ~BASTypeList();
        operator_delete(this);
    }

    // 0x100591000, 48 bytes, base-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<BASType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<BASType>::~BaseTemplateConfigTypeList() {
        *(undefined**)this = PTR_vtable_100ee8178 + 16;
        ((this + 104))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x100591150, 320 bytes, base-object constructor, inline, placed by class name
    // BaseTemplateConfigTypeList<FloorUnderlayType>::BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void BaseTemplateConfigTypeList<FloorUnderlayType>::BaseTemplateConfigTypeList(uint param_2, ModeGame* param_3,
                                                                                   Language* param_4,
                                                                                   Js5ResourceProvider* param_5,
                                                                                   Js5ArchiveSettings* param_6,
                                                                                   Js5ConfigGroup* param_7) {
        unique_ptr<BaseConfigTypeContainer<FloorUnderlayType>,
                   std::default_delete<BaseConfigTypeContainer<FloorUnderlayType>>>* this_00;
        BaseTemplateConfigTypeList local_38[8];

        new (this) BaseConfigTypeList(param_3, param_4, param_5, param_6, param_7);
        *(undefined**)this = PTR_vtable_100ee8170 + 16;
        this_00 = (unique_ptr<BaseConfigTypeContainer<FloorUnderlayType>,
                              std::default_delete<BaseConfigTypeContainer<FloorUnderlayType>>>*)(this + 104);
        std::unique_ptr<BaseConfigTypeContainer<FloorUnderlayType>,
                        std::default_delete<BaseConfigTypeContainer<FloorUnderlayType>>>::unique_ptr<true,
                                                                                                     void>(this_00);
        if (param_2 == 3) {
            std::make_unique<ConfigTypeLoadAllContainer<FloorUnderlayType>,
                             BaseTemplateConfigTypeList<FloorUnderlayType>&, Js5ResourceProvider&,
                             Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<FloorUnderlayType>,
                            std::default_delete<BaseConfigTypeContainer<FloorUnderlayType>>>::operator=(this_00,
                                                                                                        (unique_ptr*)
                                                                                                            local_38);
            local_38->~unique_ptr();
        } else if (param_2 == 2) {
            std::make_unique<ConfigTypePreloadPackedContainer<FloorUnderlayType>,
                             BaseTemplateConfigTypeList<FloorUnderlayType>&, Js5ResourceProvider&,
                             Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<FloorUnderlayType>,
                            std::default_delete<BaseConfigTypeContainer<FloorUnderlayType>>>::operator=(this_00,
                                                                                                        (unique_ptr*)
                                                                                                            local_38);
            local_38->~unique_ptr();
        } else {
            if (param_2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", (ulong)param_2);
            }
            std::make_unique<ConfigTypeNoPreloadContainer<FloorUnderlayType>,
                             BaseTemplateConfigTypeList<FloorUnderlayType>&, Js5ResourceProvider&,
                             Js5ArchiveSettings_const&, Js5ConfigGroup_const*&, unsigned int&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6,
                (uint*)&param_7);
            std::unique_ptr<BaseConfigTypeContainer<FloorUnderlayType>,
                            std::default_delete<BaseConfigTypeContainer<FloorUnderlayType>>>::operator=(this_00,
                                                                                                        (unique_ptr*)
                                                                                                            local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x1005912c0, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<FloorUnderlayType>::CacheResize(unsigned int)
    void BaseTemplateConfigTypeList<FloorUnderlayType>::CacheResize(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<FloorUnderlayType>,
                                        std::default_delete<BaseConfigTypeContainer<FloorUnderlayType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<FloorUnderlayType>,
                                        std::default_delete<BaseConfigTypeContainer<FloorUnderlayType>>>*)(this + 104));
        (**(code**)(*plVar1 + 40))(plVar1, param_1);
    }

    // 0x1005912f0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<FloorUnderlayType>::LoadList()
    void BaseTemplateConfigTypeList<FloorUnderlayType>::LoadList() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<FloorUnderlayType>,
                                        std::default_delete<BaseConfigTypeContainer<FloorUnderlayType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<FloorUnderlayType>,
                                        std::default_delete<BaseConfigTypeContainer<FloorUnderlayType>>>*)(this + 104));
        (**(code**)(*plVar1 + 16))(plVar1);
    }

    // 0x100591310, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<FloorUnderlayType>::CacheReset()
    void BaseTemplateConfigTypeList<FloorUnderlayType>::CacheReset() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<FloorUnderlayType>,
                                        std::default_delete<BaseConfigTypeContainer<FloorUnderlayType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<FloorUnderlayType>,
                                        std::default_delete<BaseConfigTypeContainer<FloorUnderlayType>>>*)(this + 104));
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x100591330, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<FloorUnderlayType>::CacheClean(unsigned int)
    void BaseTemplateConfigTypeList<FloorUnderlayType>::CacheClean(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<FloorUnderlayType>,
                                        std::default_delete<BaseConfigTypeContainer<FloorUnderlayType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<FloorUnderlayType>,
                                        std::default_delete<BaseConfigTypeContainer<FloorUnderlayType>>>*)(this + 104));
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x100591360, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<FloorUnderlayType>::IsPreloaded() const
    void BaseTemplateConfigTypeList<FloorUnderlayType>::IsPreloaded() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<FloorUnderlayType>,
                                        std::default_delete<BaseConfigTypeContainer<FloorUnderlayType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<FloorUnderlayType>,
                                        std::default_delete<BaseConfigTypeContainer<FloorUnderlayType>>>*)(this + 104));
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x100591380, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<FloorUnderlayType>::GetPreloadProgress() const
    void BaseTemplateConfigTypeList<FloorUnderlayType>::GetPreloadProgress() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<FloorUnderlayType>,
                                        std::default_delete<BaseConfigTypeContainer<FloorUnderlayType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<FloorUnderlayType>,
                                        std::default_delete<BaseConfigTypeContainer<FloorUnderlayType>>>*)(this + 104));
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x100591600, 16 bytes, complete-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<FloorUnderlayType>::~BaseTemplateConfigTypeList(): jumps straight to the base-object destructor

    // 0x100591610, 32 bytes, deleting destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<FloorUnderlayType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<FloorUnderlayType>::~BaseTemplateConfigTypeList() {
        ~FloorUnderlayTypeList();
        operator_delete(this);
    }

    // 0x1005966b0, 48 bytes, base-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<FloorUnderlayType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<FloorUnderlayType>::~BaseTemplateConfigTypeList() {
        *(undefined**)this = PTR_vtable_100ee8170 + 16;
        ((this + 104))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x100596800, 320 bytes, base-object constructor, inline, placed by class name
    // BaseTemplateConfigTypeList<FloorOverlayType>::BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void BaseTemplateConfigTypeList<FloorOverlayType>::BaseTemplateConfigTypeList(uint param_2, ModeGame* param_3,
                                                                                  Language* param_4,
                                                                                  Js5ResourceProvider* param_5,
                                                                                  Js5ArchiveSettings* param_6,
                                                                                  Js5ConfigGroup* param_7) {
        unique_ptr<BaseConfigTypeContainer<FloorOverlayType>,
                   std::default_delete<BaseConfigTypeContainer<FloorOverlayType>>>* this_00;
        BaseTemplateConfigTypeList local_38[8];

        new (this) BaseConfigTypeList(param_3, param_4, param_5, param_6, param_7);
        *(undefined**)this = PTR_vtable_100ee8168 + 16;
        this_00 = (unique_ptr<BaseConfigTypeContainer<FloorOverlayType>,
                              std::default_delete<BaseConfigTypeContainer<FloorOverlayType>>>*)(this + 104);
        std::unique_ptr<BaseConfigTypeContainer<FloorOverlayType>,
                        std::default_delete<BaseConfigTypeContainer<FloorOverlayType>>>::unique_ptr<true,
                                                                                                    void>(this_00);
        if (param_2 == 3) {
            std::make_unique<ConfigTypeLoadAllContainer<FloorOverlayType>,
                             BaseTemplateConfigTypeList<FloorOverlayType>&, Js5ResourceProvider&,
                             Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<FloorOverlayType>,
                            std::default_delete<BaseConfigTypeContainer<FloorOverlayType>>>::operator=(this_00,
                                                                                                       (unique_ptr*)
                                                                                                           local_38);
            local_38->~unique_ptr();
        } else if (param_2 == 2) {
            std::make_unique<ConfigTypePreloadPackedContainer<FloorOverlayType>,
                             BaseTemplateConfigTypeList<FloorOverlayType>&, Js5ResourceProvider&,
                             Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<FloorOverlayType>,
                            std::default_delete<BaseConfigTypeContainer<FloorOverlayType>>>::operator=(this_00,
                                                                                                       (unique_ptr*)
                                                                                                           local_38);
            local_38->~unique_ptr();
        } else {
            if (param_2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", (ulong)param_2);
            }
            std::make_unique<ConfigTypeNoPreloadContainer<FloorOverlayType>,
                             BaseTemplateConfigTypeList<FloorOverlayType>&, Js5ResourceProvider&,
                             Js5ArchiveSettings_const&, Js5ConfigGroup_const*&, unsigned int&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6,
                (uint*)&param_7);
            std::unique_ptr<BaseConfigTypeContainer<FloorOverlayType>,
                            std::default_delete<BaseConfigTypeContainer<FloorOverlayType>>>::operator=(this_00,
                                                                                                       (unique_ptr*)
                                                                                                           local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x100596970, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<FloorOverlayType>::CacheResize(unsigned int)
    void BaseTemplateConfigTypeList<FloorOverlayType>::CacheResize(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<FloorOverlayType>,
                                        std::default_delete<BaseConfigTypeContainer<FloorOverlayType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<FloorOverlayType>,
                                        std::default_delete<BaseConfigTypeContainer<FloorOverlayType>>>*)(this + 104));
        (**(code**)(*plVar1 + 40))(plVar1, param_1);
    }

    // 0x1005969a0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<FloorOverlayType>::LoadList()
    void BaseTemplateConfigTypeList<FloorOverlayType>::LoadList() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<FloorOverlayType>,
                                        std::default_delete<BaseConfigTypeContainer<FloorOverlayType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<FloorOverlayType>,
                                        std::default_delete<BaseConfigTypeContainer<FloorOverlayType>>>*)(this + 104));
        (**(code**)(*plVar1 + 16))(plVar1);
    }

    // 0x1005969c0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<FloorOverlayType>::CacheReset()
    void BaseTemplateConfigTypeList<FloorOverlayType>::CacheReset() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<FloorOverlayType>,
                                        std::default_delete<BaseConfigTypeContainer<FloorOverlayType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<FloorOverlayType>,
                                        std::default_delete<BaseConfigTypeContainer<FloorOverlayType>>>*)(this + 104));
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x1005969e0, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<FloorOverlayType>::CacheClean(unsigned int)
    void BaseTemplateConfigTypeList<FloorOverlayType>::CacheClean(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<FloorOverlayType>,
                                        std::default_delete<BaseConfigTypeContainer<FloorOverlayType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<FloorOverlayType>,
                                        std::default_delete<BaseConfigTypeContainer<FloorOverlayType>>>*)(this + 104));
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x100596a10, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<FloorOverlayType>::IsPreloaded() const
    void BaseTemplateConfigTypeList<FloorOverlayType>::IsPreloaded() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<FloorOverlayType>,
                                        std::default_delete<BaseConfigTypeContainer<FloorOverlayType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<FloorOverlayType>,
                                        std::default_delete<BaseConfigTypeContainer<FloorOverlayType>>>*)(this + 104));
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x100596a30, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<FloorOverlayType>::GetPreloadProgress() const
    void BaseTemplateConfigTypeList<FloorOverlayType>::GetPreloadProgress() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<FloorOverlayType>,
                                        std::default_delete<BaseConfigTypeContainer<FloorOverlayType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<FloorOverlayType>,
                                        std::default_delete<BaseConfigTypeContainer<FloorOverlayType>>>*)(this + 104));
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x100596cb0, 16 bytes, complete-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<FloorOverlayType>::~BaseTemplateConfigTypeList(): jumps straight to the base-object destructor

    // 0x100596cc0, 32 bytes, deleting destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<FloorOverlayType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<FloorOverlayType>::~BaseTemplateConfigTypeList() {
        ~FloorOverlayTypeList();
        operator_delete(this);
    }

    // 0x10059bd70, 48 bytes, base-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<FloorOverlayType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<FloorOverlayType>::~BaseTemplateConfigTypeList() {
        *(undefined**)this = PTR_vtable_100ee8168 + 16;
        ((this + 104))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x10059bf00, 320 bytes, base-object constructor, inline, placed by class name
    // BaseTemplateConfigTypeList<HitmarkType>::BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void BaseTemplateConfigTypeList<HitmarkType>::BaseTemplateConfigTypeList(uint param_2, ModeGame* param_3,
                                                                             Language* param_4,
                                                                             Js5ResourceProvider* param_5,
                                                                             Js5ArchiveSettings* param_6,
                                                                             Js5ConfigGroup* param_7) {
        unique_ptr<BaseConfigTypeContainer<HitmarkType>, std::default_delete<BaseConfigTypeContainer<HitmarkType>>>*
            this_00;
        BaseTemplateConfigTypeList local_38[8];

        new (this) BaseConfigTypeList(param_3, param_4, param_5, param_6, param_7);
        *(undefined**)this = PTR_vtable_100ee8138 + 16;
        this_00 = (unique_ptr<BaseConfigTypeContainer<HitmarkType>,
                              std::default_delete<BaseConfigTypeContainer<HitmarkType>>>*)(this + 104);
        std::unique_ptr<BaseConfigTypeContainer<HitmarkType>,
                        std::default_delete<BaseConfigTypeContainer<HitmarkType>>>::unique_ptr<true, void>(this_00);
        if (param_2 == 3) {
            std::make_unique<ConfigTypeLoadAllContainer<HitmarkType>, BaseTemplateConfigTypeList<HitmarkType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<HitmarkType>,
                            std::default_delete<BaseConfigTypeContainer<HitmarkType>>>::operator=(this_00,
                                                                                                  (unique_ptr*)
                                                                                                      local_38);
            local_38->~unique_ptr();
        } else if (param_2 == 2) {
            std::make_unique<ConfigTypePreloadPackedContainer<HitmarkType>, BaseTemplateConfigTypeList<HitmarkType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<HitmarkType>,
                            std::default_delete<BaseConfigTypeContainer<HitmarkType>>>::operator=(this_00,
                                                                                                  (unique_ptr*)
                                                                                                      local_38);
            local_38->~unique_ptr();
        } else {
            if (param_2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", (ulong)param_2);
            }
            std::make_unique<ConfigTypeNoPreloadContainer<HitmarkType>, BaseTemplateConfigTypeList<HitmarkType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&, unsigned int&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6,
                (uint*)&param_7);
            std::unique_ptr<BaseConfigTypeContainer<HitmarkType>,
                            std::default_delete<BaseConfigTypeContainer<HitmarkType>>>::operator=(this_00,
                                                                                                  (unique_ptr*)
                                                                                                      local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x10059c050, 48 bytes, base-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<HitmarkType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<HitmarkType>::~BaseTemplateConfigTypeList() {
        *(undefined**)this = PTR_vtable_100ee8138 + 16;
        ((this + 104))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x10059c0b0, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<HitmarkType>::CacheResize(unsigned int)
    void BaseTemplateConfigTypeList<HitmarkType>::CacheResize(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<HitmarkType>,
                                        std::default_delete<BaseConfigTypeContainer<HitmarkType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<HitmarkType>,
                                        std::default_delete<BaseConfigTypeContainer<HitmarkType>>>*)(this + 104));
        (**(code**)(*plVar1 + 40))(plVar1, param_1);
    }

    // 0x10059c0e0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<HitmarkType>::LoadList()
    void BaseTemplateConfigTypeList<HitmarkType>::LoadList() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<HitmarkType>,
                                        std::default_delete<BaseConfigTypeContainer<HitmarkType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<HitmarkType>,
                                        std::default_delete<BaseConfigTypeContainer<HitmarkType>>>*)(this + 104));
        (**(code**)(*plVar1 + 16))(plVar1);
    }

    // 0x10059c160, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<HitmarkType>::IsPreloaded() const
    void BaseTemplateConfigTypeList<HitmarkType>::IsPreloaded() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<HitmarkType>,
                                        std::default_delete<BaseConfigTypeContainer<HitmarkType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<HitmarkType>,
                                        std::default_delete<BaseConfigTypeContainer<HitmarkType>>>*)(this + 104));
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x10059c180, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<HitmarkType>::GetPreloadProgress() const
    void BaseTemplateConfigTypeList<HitmarkType>::GetPreloadProgress() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<HitmarkType>,
                                        std::default_delete<BaseConfigTypeContainer<HitmarkType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<HitmarkType>,
                                        std::default_delete<BaseConfigTypeContainer<HitmarkType>>>*)(this + 104));
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x10059c400, 16 bytes, complete-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<HitmarkType>::~BaseTemplateConfigTypeList(): jumps straight to the base-object destructor

    // 0x10059c410, 32 bytes, deleting destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<HitmarkType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<HitmarkType>::~BaseTemplateConfigTypeList() {
        ~BaseTemplateConfigTypeList(this);
        operator_delete(this);
    }

    // 0x10059c430, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<HitmarkType>::CacheReset()
    void BaseTemplateConfigTypeList<HitmarkType>::CacheReset() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<HitmarkType>,
                                        std::default_delete<BaseConfigTypeContainer<HitmarkType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<HitmarkType>,
                                        std::default_delete<BaseConfigTypeContainer<HitmarkType>>>*)(this + 104));
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x10059c450, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<HitmarkType>::CacheClean(unsigned int)
    void BaseTemplateConfigTypeList<HitmarkType>::CacheClean(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<HitmarkType>,
                                        std::default_delete<BaseConfigTypeContainer<HitmarkType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<HitmarkType>,
                                        std::default_delete<BaseConfigTypeContainer<HitmarkType>>>*)(this + 104));
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x1005a0f80, 320 bytes, base-object constructor, inline, placed by class name
    // BaseTemplateConfigTypeList<HeadbarType>::BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void BaseTemplateConfigTypeList<HeadbarType>::BaseTemplateConfigTypeList(uint param_2, ModeGame* param_3,
                                                                             Language* param_4,
                                                                             Js5ResourceProvider* param_5,
                                                                             Js5ArchiveSettings* param_6,
                                                                             Js5ConfigGroup* param_7) {
        unique_ptr<BaseConfigTypeContainer<HeadbarType>, std::default_delete<BaseConfigTypeContainer<HeadbarType>>>*
            this_00;
        BaseTemplateConfigTypeList local_38[8];

        new (this) BaseConfigTypeList(param_3, param_4, param_5, param_6, param_7);
        *(undefined**)this = PTR_vtable_100ee8130 + 16;
        this_00 = (unique_ptr<BaseConfigTypeContainer<HeadbarType>,
                              std::default_delete<BaseConfigTypeContainer<HeadbarType>>>*)(this + 104);
        std::unique_ptr<BaseConfigTypeContainer<HeadbarType>,
                        std::default_delete<BaseConfigTypeContainer<HeadbarType>>>::unique_ptr<true, void>(this_00);
        if (param_2 == 3) {
            std::make_unique<ConfigTypeLoadAllContainer<HeadbarType>, BaseTemplateConfigTypeList<HeadbarType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<HeadbarType>,
                            std::default_delete<BaseConfigTypeContainer<HeadbarType>>>::operator=(this_00,
                                                                                                  (unique_ptr*)
                                                                                                      local_38);
            local_38->~unique_ptr();
        } else if (param_2 == 2) {
            std::make_unique<ConfigTypePreloadPackedContainer<HeadbarType>, BaseTemplateConfigTypeList<HeadbarType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<HeadbarType>,
                            std::default_delete<BaseConfigTypeContainer<HeadbarType>>>::operator=(this_00,
                                                                                                  (unique_ptr*)
                                                                                                      local_38);
            local_38->~unique_ptr();
        } else {
            if (param_2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", (ulong)param_2);
            }
            std::make_unique<ConfigTypeNoPreloadContainer<HeadbarType>, BaseTemplateConfigTypeList<HeadbarType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&, unsigned int&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6,
                (uint*)&param_7);
            std::unique_ptr<BaseConfigTypeContainer<HeadbarType>,
                            std::default_delete<BaseConfigTypeContainer<HeadbarType>>>::operator=(this_00,
                                                                                                  (unique_ptr*)
                                                                                                      local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x1005a10c0, 48 bytes, base-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<HeadbarType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<HeadbarType>::~BaseTemplateConfigTypeList() {
        *(undefined**)this = PTR_vtable_100ee8130 + 16;
        ((this + 104))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x1005a1120, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<HeadbarType>::CacheResize(unsigned int)
    void BaseTemplateConfigTypeList<HeadbarType>::CacheResize(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<HeadbarType>,
                                        std::default_delete<BaseConfigTypeContainer<HeadbarType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<HeadbarType>,
                                        std::default_delete<BaseConfigTypeContainer<HeadbarType>>>*)(this + 104));
        (**(code**)(*plVar1 + 40))(plVar1, param_1);
    }

    // 0x1005a1150, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<HeadbarType>::LoadList()
    void BaseTemplateConfigTypeList<HeadbarType>::LoadList() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<HeadbarType>,
                                        std::default_delete<BaseConfigTypeContainer<HeadbarType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<HeadbarType>,
                                        std::default_delete<BaseConfigTypeContainer<HeadbarType>>>*)(this + 104));
        (**(code**)(*plVar1 + 16))(plVar1);
    }

    // 0x1005a11d0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<HeadbarType>::IsPreloaded() const
    void BaseTemplateConfigTypeList<HeadbarType>::IsPreloaded() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<HeadbarType>,
                                        std::default_delete<BaseConfigTypeContainer<HeadbarType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<HeadbarType>,
                                        std::default_delete<BaseConfigTypeContainer<HeadbarType>>>*)(this + 104));
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x1005a11f0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<HeadbarType>::GetPreloadProgress() const
    void BaseTemplateConfigTypeList<HeadbarType>::GetPreloadProgress() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<HeadbarType>,
                                        std::default_delete<BaseConfigTypeContainer<HeadbarType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<HeadbarType>,
                                        std::default_delete<BaseConfigTypeContainer<HeadbarType>>>*)(this + 104));
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x1005a1470, 16 bytes, complete-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<HeadbarType>::~BaseTemplateConfigTypeList(): jumps straight to the base-object destructor

    // 0x1005a1480, 32 bytes, deleting destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<HeadbarType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<HeadbarType>::~BaseTemplateConfigTypeList() {
        ~BaseTemplateConfigTypeList(this);
        operator_delete(this);
    }

    // 0x1005a14a0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<HeadbarType>::CacheReset()
    void BaseTemplateConfigTypeList<HeadbarType>::CacheReset() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<HeadbarType>,
                                        std::default_delete<BaseConfigTypeContainer<HeadbarType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<HeadbarType>,
                                        std::default_delete<BaseConfigTypeContainer<HeadbarType>>>*)(this + 104));
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x1005a14c0, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<HeadbarType>::CacheClean(unsigned int)
    void BaseTemplateConfigTypeList<HeadbarType>::CacheClean(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<HeadbarType>,
                                        std::default_delete<BaseConfigTypeContainer<HeadbarType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<HeadbarType>,
                                        std::default_delete<BaseConfigTypeContainer<HeadbarType>>>*)(this + 104));
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x1005a65c0, 320 bytes, base-object constructor, inline, placed by class name
    // BaseTemplateConfigTypeList<IDKType>::BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void BaseTemplateConfigTypeList<IDKType>::BaseTemplateConfigTypeList(uint param_2, ModeGame* param_3,
                                                                         Language* param_4,
                                                                         Js5ResourceProvider* param_5,
                                                                         Js5ArchiveSettings* param_6,
                                                                         Js5ConfigGroup* param_7) {
        unique_ptr<BaseConfigTypeContainer<IDKType>, std::default_delete<BaseConfigTypeContainer<IDKType>>>* this_00;
        BaseTemplateConfigTypeList local_38[8];

        new (this) BaseConfigTypeList(param_3, param_4, param_5, param_6, param_7);
        *(undefined**)this = PTR_vtable_100ee8180 + 16;
        this_00 = (unique_ptr<BaseConfigTypeContainer<IDKType>,
                              std::default_delete<BaseConfigTypeContainer<IDKType>>>*)(this + 104);
        std::unique_ptr<BaseConfigTypeContainer<IDKType>,
                        std::default_delete<BaseConfigTypeContainer<IDKType>>>::unique_ptr<true, void>(this_00);
        if (param_2 == 3) {
            std::make_unique<ConfigTypeLoadAllContainer<IDKType>, BaseTemplateConfigTypeList<IDKType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<IDKType>,
                            std::default_delete<BaseConfigTypeContainer<IDKType>>>::operator=(this_00,
                                                                                              (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else if (param_2 == 2) {
            std::make_unique<ConfigTypePreloadPackedContainer<IDKType>, BaseTemplateConfigTypeList<IDKType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<IDKType>,
                            std::default_delete<BaseConfigTypeContainer<IDKType>>>::operator=(this_00,
                                                                                              (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else {
            if (param_2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", (ulong)param_2);
            }
            std::make_unique<ConfigTypeNoPreloadContainer<IDKType>, BaseTemplateConfigTypeList<IDKType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&, unsigned int&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6,
                (uint*)&param_7);
            std::unique_ptr<BaseConfigTypeContainer<IDKType>,
                            std::default_delete<BaseConfigTypeContainer<IDKType>>>::operator=(this_00,
                                                                                              (unique_ptr*)local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x1005a6730, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<IDKType>::CacheResize(unsigned int)
    void BaseTemplateConfigTypeList<IDKType>::CacheResize(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<IDKType>,
                                        std::default_delete<BaseConfigTypeContainer<IDKType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<IDKType>,
                                        std::default_delete<BaseConfigTypeContainer<IDKType>>>*)(this + 104));
        (**(code**)(*plVar1 + 40))(plVar1, param_1);
    }

    // 0x1005a6760, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<IDKType>::LoadList()
    void BaseTemplateConfigTypeList<IDKType>::LoadList() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<IDKType>,
                                        std::default_delete<BaseConfigTypeContainer<IDKType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<IDKType>,
                                        std::default_delete<BaseConfigTypeContainer<IDKType>>>*)(this + 104));
        (**(code**)(*plVar1 + 16))(plVar1);
    }

    // 0x1005a6780, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<IDKType>::CacheReset()
    void BaseTemplateConfigTypeList<IDKType>::CacheReset() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<IDKType>,
                                        std::default_delete<BaseConfigTypeContainer<IDKType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<IDKType>,
                                        std::default_delete<BaseConfigTypeContainer<IDKType>>>*)(this + 104));
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x1005a67a0, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<IDKType>::CacheClean(unsigned int)
    void BaseTemplateConfigTypeList<IDKType>::CacheClean(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<IDKType>,
                                        std::default_delete<BaseConfigTypeContainer<IDKType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<IDKType>,
                                        std::default_delete<BaseConfigTypeContainer<IDKType>>>*)(this + 104));
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x1005a67d0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<IDKType>::IsPreloaded() const
    void BaseTemplateConfigTypeList<IDKType>::IsPreloaded() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<IDKType>,
                                        std::default_delete<BaseConfigTypeContainer<IDKType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<IDKType>,
                                        std::default_delete<BaseConfigTypeContainer<IDKType>>>*)(this + 104));
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x1005a67f0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<IDKType>::GetPreloadProgress() const
    void BaseTemplateConfigTypeList<IDKType>::GetPreloadProgress() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<IDKType>,
                                        std::default_delete<BaseConfigTypeContainer<IDKType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<IDKType>,
                                        std::default_delete<BaseConfigTypeContainer<IDKType>>>*)(this + 104));
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x1005a6a70, 16 bytes, complete-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<IDKType>::~BaseTemplateConfigTypeList(): jumps straight to the base-object destructor

    // 0x1005a6a80, 32 bytes, deleting destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<IDKType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<IDKType>::~BaseTemplateConfigTypeList() {
        ~IDKTypeList();
        operator_delete(this);
    }

    // 0x1005abd30, 48 bytes, base-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<IDKType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<IDKType>::~BaseTemplateConfigTypeList() {
        *(undefined**)this = PTR_vtable_100ee8180 + 16;
        ((this + 104))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x1005abeb0, 320 bytes, base-object constructor, inline, placed by class name
    // BaseTemplateConfigTypeList<MapElementType>::BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void BaseTemplateConfigTypeList<MapElementType>::BaseTemplateConfigTypeList(uint param_2, ModeGame* param_3,
                                                                                Language* param_4,
                                                                                Js5ResourceProvider* param_5,
                                                                                Js5ArchiveSettings* param_6,
                                                                                Js5ConfigGroup* param_7) {
        unique_ptr<BaseConfigTypeContainer<MapElementType>,
                   std::default_delete<BaseConfigTypeContainer<MapElementType>>>* this_00;
        BaseTemplateConfigTypeList local_38[8];

        new (this) BaseConfigTypeList(param_3, param_4, param_5, param_6, param_7);
        *(undefined**)this = PTR_vtable_100ee8158 + 16;
        this_00 = (unique_ptr<BaseConfigTypeContainer<MapElementType>,
                              std::default_delete<BaseConfigTypeContainer<MapElementType>>>*)(this + 104);
        std::unique_ptr<BaseConfigTypeContainer<MapElementType>,
                        std::default_delete<BaseConfigTypeContainer<MapElementType>>>::unique_ptr<true, void>(this_00);
        if (param_2 == 3) {
            std::make_unique<ConfigTypeLoadAllContainer<MapElementType>, BaseTemplateConfigTypeList<MapElementType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<MapElementType>,
                            std::default_delete<BaseConfigTypeContainer<MapElementType>>>::operator=(this_00,
                                                                                                     (unique_ptr*)
                                                                                                         local_38);
            local_38->~unique_ptr();
        } else if (param_2 == 2) {
            std::make_unique<ConfigTypePreloadPackedContainer<MapElementType>,
                             BaseTemplateConfigTypeList<MapElementType>&, Js5ResourceProvider&,
                             Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<MapElementType>,
                            std::default_delete<BaseConfigTypeContainer<MapElementType>>>::operator=(this_00,
                                                                                                     (unique_ptr*)
                                                                                                         local_38);
            local_38->~unique_ptr();
        } else {
            if (param_2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", (ulong)param_2);
            }
            std::make_unique<ConfigTypeNoPreloadContainer<MapElementType>, BaseTemplateConfigTypeList<MapElementType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&, unsigned int&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6,
                (uint*)&param_7);
            std::unique_ptr<BaseConfigTypeContainer<MapElementType>,
                            std::default_delete<BaseConfigTypeContainer<MapElementType>>>::operator=(this_00,
                                                                                                     (unique_ptr*)
                                                                                                         local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x1005ac000, 48 bytes, base-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<MapElementType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<MapElementType>::~BaseTemplateConfigTypeList() {
        *(undefined**)this = PTR_vtable_100ee8158 + 16;
        ((this + 104))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x1005ac060, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<MapElementType>::CacheResize(unsigned int)
    void BaseTemplateConfigTypeList<MapElementType>::CacheResize(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<MapElementType>,
                                        std::default_delete<BaseConfigTypeContainer<MapElementType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<MapElementType>,
                                        std::default_delete<BaseConfigTypeContainer<MapElementType>>>*)(this + 104));
        (**(code**)(*plVar1 + 40))(plVar1, param_1);
    }

    // 0x1005ac090, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<MapElementType>::LoadList()
    void BaseTemplateConfigTypeList<MapElementType>::LoadList() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<MapElementType>,
                                        std::default_delete<BaseConfigTypeContainer<MapElementType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<MapElementType>,
                                        std::default_delete<BaseConfigTypeContainer<MapElementType>>>*)(this + 104));
        (**(code**)(*plVar1 + 16))(plVar1);
    }

    // 0x1005ac110, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<MapElementType>::IsPreloaded() const
    void BaseTemplateConfigTypeList<MapElementType>::IsPreloaded() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<MapElementType>,
                                        std::default_delete<BaseConfigTypeContainer<MapElementType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<MapElementType>,
                                        std::default_delete<BaseConfigTypeContainer<MapElementType>>>*)(this + 104));
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x1005ac130, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<MapElementType>::GetPreloadProgress() const
    void BaseTemplateConfigTypeList<MapElementType>::GetPreloadProgress() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<MapElementType>,
                                        std::default_delete<BaseConfigTypeContainer<MapElementType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<MapElementType>,
                                        std::default_delete<BaseConfigTypeContainer<MapElementType>>>*)(this + 104));
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x1005ac3b0, 16 bytes, complete-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<MapElementType>::~BaseTemplateConfigTypeList(): jumps straight to the base-object destructor

    // 0x1005ac3c0, 32 bytes, deleting destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<MapElementType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<MapElementType>::~BaseTemplateConfigTypeList() {
        ~BaseTemplateConfigTypeList(this);
        operator_delete(this);
    }

    // 0x1005ac3e0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<MapElementType>::CacheReset()
    void BaseTemplateConfigTypeList<MapElementType>::CacheReset() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<MapElementType>,
                                        std::default_delete<BaseConfigTypeContainer<MapElementType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<MapElementType>,
                                        std::default_delete<BaseConfigTypeContainer<MapElementType>>>*)(this + 104));
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x1005ac400, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<MapElementType>::CacheClean(unsigned int)
    void BaseTemplateConfigTypeList<MapElementType>::CacheClean(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<MapElementType>,
                                        std::default_delete<BaseConfigTypeContainer<MapElementType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<MapElementType>,
                                        std::default_delete<BaseConfigTypeContainer<MapElementType>>>*)(this + 104));
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x1005b2730, 320 bytes, base-object constructor, inline, placed by class name
    // BaseTemplateConfigTypeList<MSIType>::BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void BaseTemplateConfigTypeList<MSIType>::BaseTemplateConfigTypeList(uint param_2, ModeGame* param_3,
                                                                         Language* param_4,
                                                                         Js5ResourceProvider* param_5,
                                                                         Js5ArchiveSettings* param_6,
                                                                         Js5ConfigGroup* param_7) {
        unique_ptr<BaseConfigTypeContainer<MSIType>, std::default_delete<BaseConfigTypeContainer<MSIType>>>* this_00;
        BaseTemplateConfigTypeList local_38[8];

        new (this) BaseConfigTypeList(param_3, param_4, param_5, param_6, param_7);
        *(undefined**)this = PTR_vtable_100ee8198 + 16;
        this_00 = (unique_ptr<BaseConfigTypeContainer<MSIType>,
                              std::default_delete<BaseConfigTypeContainer<MSIType>>>*)(this + 104);
        std::unique_ptr<BaseConfigTypeContainer<MSIType>,
                        std::default_delete<BaseConfigTypeContainer<MSIType>>>::unique_ptr<true, void>(this_00);
        if (param_2 == 3) {
            std::make_unique<ConfigTypeLoadAllContainer<MSIType>, BaseTemplateConfigTypeList<MSIType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<MSIType>,
                            std::default_delete<BaseConfigTypeContainer<MSIType>>>::operator=(this_00,
                                                                                              (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else if (param_2 == 2) {
            std::make_unique<ConfigTypePreloadPackedContainer<MSIType>, BaseTemplateConfigTypeList<MSIType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<MSIType>,
                            std::default_delete<BaseConfigTypeContainer<MSIType>>>::operator=(this_00,
                                                                                              (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else {
            if (param_2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", (ulong)param_2);
            }
            std::make_unique<ConfigTypeNoPreloadContainer<MSIType>, BaseTemplateConfigTypeList<MSIType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&, unsigned int&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6,
                (uint*)&param_7);
            std::unique_ptr<BaseConfigTypeContainer<MSIType>,
                            std::default_delete<BaseConfigTypeContainer<MSIType>>>::operator=(this_00,
                                                                                              (unique_ptr*)local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x1005b2880, 48 bytes, base-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<MSIType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<MSIType>::~BaseTemplateConfigTypeList() {
        *(undefined**)this = PTR_vtable_100ee8198 + 16;
        ((this + 104))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x1005b28e0, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<MSIType>::CacheResize(unsigned int)
    void BaseTemplateConfigTypeList<MSIType>::CacheResize(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<MSIType>,
                                        std::default_delete<BaseConfigTypeContainer<MSIType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<MSIType>,
                                        std::default_delete<BaseConfigTypeContainer<MSIType>>>*)(this + 104));
        (**(code**)(*plVar1 + 40))(plVar1, param_1);
    }

    // 0x1005b2910, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<MSIType>::LoadList()
    void BaseTemplateConfigTypeList<MSIType>::LoadList() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<MSIType>,
                                        std::default_delete<BaseConfigTypeContainer<MSIType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<MSIType>,
                                        std::default_delete<BaseConfigTypeContainer<MSIType>>>*)(this + 104));
        (**(code**)(*plVar1 + 16))(plVar1);
    }

    // 0x1005b2990, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<MSIType>::IsPreloaded() const
    void BaseTemplateConfigTypeList<MSIType>::IsPreloaded() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<MSIType>,
                                        std::default_delete<BaseConfigTypeContainer<MSIType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<MSIType>,
                                        std::default_delete<BaseConfigTypeContainer<MSIType>>>*)(this + 104));
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x1005b29b0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<MSIType>::GetPreloadProgress() const
    void BaseTemplateConfigTypeList<MSIType>::GetPreloadProgress() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<MSIType>,
                                        std::default_delete<BaseConfigTypeContainer<MSIType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<MSIType>,
                                        std::default_delete<BaseConfigTypeContainer<MSIType>>>*)(this + 104));
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x1005b2c30, 16 bytes, complete-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<MSIType>::~BaseTemplateConfigTypeList(): jumps straight to the base-object destructor

    // 0x1005b2c40, 32 bytes, deleting destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<MSIType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<MSIType>::~BaseTemplateConfigTypeList() {
        ~BaseTemplateConfigTypeList(this);
        operator_delete(this);
    }

    // 0x1005b2c60, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<MSIType>::CacheReset()
    void BaseTemplateConfigTypeList<MSIType>::CacheReset() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<MSIType>,
                                        std::default_delete<BaseConfigTypeContainer<MSIType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<MSIType>,
                                        std::default_delete<BaseConfigTypeContainer<MSIType>>>*)(this + 104));
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x1005b2c80, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<MSIType>::CacheClean(unsigned int)
    void BaseTemplateConfigTypeList<MSIType>::CacheClean(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<MSIType>,
                                        std::default_delete<BaseConfigTypeContainer<MSIType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<MSIType>,
                                        std::default_delete<BaseConfigTypeContainer<MSIType>>>*)(this + 104));
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x1005b8250, 320 bytes, base-object constructor, inline, placed by class name
    // BaseTemplateConfigTypeList<QuestType>::BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void BaseTemplateConfigTypeList<QuestType>::BaseTemplateConfigTypeList(uint param_2, ModeGame* param_3,
                                                                           Language* param_4,
                                                                           Js5ResourceProvider* param_5,
                                                                           Js5ArchiveSettings* param_6,
                                                                           Js5ConfigGroup* param_7) {
        unique_ptr<BaseConfigTypeContainer<QuestType>, std::default_delete<BaseConfigTypeContainer<QuestType>>>*
            this_00;
        BaseTemplateConfigTypeList local_38[8];

        new (this) BaseConfigTypeList(param_3, param_4, param_5, param_6, param_7);
        *(undefined**)this = PTR_vtable_100ee81e0 + 16;
        this_00 = (unique_ptr<BaseConfigTypeContainer<QuestType>,
                              std::default_delete<BaseConfigTypeContainer<QuestType>>>*)(this + 104);
        std::unique_ptr<BaseConfigTypeContainer<QuestType>,
                        std::default_delete<BaseConfigTypeContainer<QuestType>>>::unique_ptr<true, void>(this_00);
        if (param_2 == 3) {
            std::make_unique<ConfigTypeLoadAllContainer<QuestType>, BaseTemplateConfigTypeList<QuestType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<QuestType>,
                            std::default_delete<BaseConfigTypeContainer<QuestType>>>::operator=(this_00,
                                                                                                (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else if (param_2 == 2) {
            std::make_unique<ConfigTypePreloadPackedContainer<QuestType>, BaseTemplateConfigTypeList<QuestType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<QuestType>,
                            std::default_delete<BaseConfigTypeContainer<QuestType>>>::operator=(this_00,
                                                                                                (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else {
            if (param_2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", (ulong)param_2);
            }
            std::make_unique<ConfigTypeNoPreloadContainer<QuestType>, BaseTemplateConfigTypeList<QuestType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&, unsigned int&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6,
                (uint*)&param_7);
            std::unique_ptr<BaseConfigTypeContainer<QuestType>,
                            std::default_delete<BaseConfigTypeContainer<QuestType>>>::operator=(this_00,
                                                                                                (unique_ptr*)local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x1005b83c0, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<QuestType>::CacheResize(unsigned int)
    void BaseTemplateConfigTypeList<QuestType>::CacheResize(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<QuestType>,
                                        std::default_delete<BaseConfigTypeContainer<QuestType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<QuestType>,
                                        std::default_delete<BaseConfigTypeContainer<QuestType>>>*)(this + 104));
        (**(code**)(*plVar1 + 40))(plVar1, param_1);
    }

    // 0x1005b83f0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<QuestType>::LoadList()
    void BaseTemplateConfigTypeList<QuestType>::LoadList() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<QuestType>,
                                        std::default_delete<BaseConfigTypeContainer<QuestType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<QuestType>,
                                        std::default_delete<BaseConfigTypeContainer<QuestType>>>*)(this + 104));
        (**(code**)(*plVar1 + 16))(plVar1);
    }

    // 0x1005b8410, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<QuestType>::CacheReset()
    void BaseTemplateConfigTypeList<QuestType>::CacheReset() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<QuestType>,
                                        std::default_delete<BaseConfigTypeContainer<QuestType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<QuestType>,
                                        std::default_delete<BaseConfigTypeContainer<QuestType>>>*)(this + 104));
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x1005b8430, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<QuestType>::CacheClean(unsigned int)
    void BaseTemplateConfigTypeList<QuestType>::CacheClean(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<QuestType>,
                                        std::default_delete<BaseConfigTypeContainer<QuestType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<QuestType>,
                                        std::default_delete<BaseConfigTypeContainer<QuestType>>>*)(this + 104));
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x1005b8460, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<QuestType>::IsPreloaded() const
    void BaseTemplateConfigTypeList<QuestType>::IsPreloaded() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<QuestType>,
                                        std::default_delete<BaseConfigTypeContainer<QuestType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<QuestType>,
                                        std::default_delete<BaseConfigTypeContainer<QuestType>>>*)(this + 104));
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x1005b8480, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<QuestType>::GetPreloadProgress() const
    void BaseTemplateConfigTypeList<QuestType>::GetPreloadProgress() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<QuestType>,
                                        std::default_delete<BaseConfigTypeContainer<QuestType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<QuestType>,
                                        std::default_delete<BaseConfigTypeContainer<QuestType>>>*)(this + 104));
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x1005b8700, 16 bytes, complete-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<QuestType>::~BaseTemplateConfigTypeList(): jumps straight to the base-object destructor

    // 0x1005b8710, 32 bytes, deleting destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<QuestType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<QuestType>::~BaseTemplateConfigTypeList() {
        ~QuestTypeList();
        operator_delete(this);
    }

    // 0x1005bdc90, 48 bytes, base-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<QuestType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<QuestType>::~BaseTemplateConfigTypeList() {
        *(undefined**)this = PTR_vtable_100ee81e0 + 16;
        ((this + 104))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x1005bdde0, 320 bytes, base-object constructor, inline, placed by class name
    // BaseTemplateConfigTypeList<SeqGroupType>::BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void BaseTemplateConfigTypeList<SeqGroupType>::BaseTemplateConfigTypeList(uint param_2, ModeGame* param_3,
                                                                              Language* param_4,
                                                                              Js5ResourceProvider* param_5,
                                                                              Js5ArchiveSettings* param_6,
                                                                              Js5ConfigGroup* param_7) {
        unique_ptr<BaseConfigTypeContainer<SeqGroupType>, std::default_delete<BaseConfigTypeContainer<SeqGroupType>>>*
            this_00;
        BaseTemplateConfigTypeList local_38[8];

        new (this) BaseConfigTypeList(param_3, param_4, param_5, param_6, param_7);
        *(undefined**)this = PTR_vtable_100ee8140 + 16;
        this_00 = (unique_ptr<BaseConfigTypeContainer<SeqGroupType>,
                              std::default_delete<BaseConfigTypeContainer<SeqGroupType>>>*)(this + 104);
        std::unique_ptr<BaseConfigTypeContainer<SeqGroupType>,
                        std::default_delete<BaseConfigTypeContainer<SeqGroupType>>>::unique_ptr<true, void>(this_00);
        if (param_2 == 3) {
            std::make_unique<ConfigTypeLoadAllContainer<SeqGroupType>, BaseTemplateConfigTypeList<SeqGroupType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<SeqGroupType>,
                            std::default_delete<BaseConfigTypeContainer<SeqGroupType>>>::operator=(this_00,
                                                                                                   (unique_ptr*)
                                                                                                       local_38);
            local_38->~unique_ptr();
        } else if (param_2 == 2) {
            std::make_unique<ConfigTypePreloadPackedContainer<SeqGroupType>, BaseTemplateConfigTypeList<SeqGroupType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<SeqGroupType>,
                            std::default_delete<BaseConfigTypeContainer<SeqGroupType>>>::operator=(this_00,
                                                                                                   (unique_ptr*)
                                                                                                       local_38);
            local_38->~unique_ptr();
        } else {
            if (param_2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", (ulong)param_2);
            }
            std::make_unique<ConfigTypeNoPreloadContainer<SeqGroupType>, BaseTemplateConfigTypeList<SeqGroupType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&, unsigned int&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6,
                (uint*)&param_7);
            std::unique_ptr<BaseConfigTypeContainer<SeqGroupType>,
                            std::default_delete<BaseConfigTypeContainer<SeqGroupType>>>::operator=(this_00,
                                                                                                   (unique_ptr*)
                                                                                                       local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x1005bdf50, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<SeqGroupType>::CacheResize(unsigned int)
    void BaseTemplateConfigTypeList<SeqGroupType>::CacheResize(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<SeqGroupType>,
                                        std::default_delete<BaseConfigTypeContainer<SeqGroupType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<SeqGroupType>,
                                        std::default_delete<BaseConfigTypeContainer<SeqGroupType>>>*)(this + 104));
        (**(code**)(*plVar1 + 40))(plVar1, param_1);
    }

    // 0x1005bdf80, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<SeqGroupType>::LoadList()
    void BaseTemplateConfigTypeList<SeqGroupType>::LoadList() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<SeqGroupType>,
                                        std::default_delete<BaseConfigTypeContainer<SeqGroupType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<SeqGroupType>,
                                        std::default_delete<BaseConfigTypeContainer<SeqGroupType>>>*)(this + 104));
        (**(code**)(*plVar1 + 16))(plVar1);
    }

    // 0x1005bdfa0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<SeqGroupType>::CacheReset()
    void BaseTemplateConfigTypeList<SeqGroupType>::CacheReset() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<SeqGroupType>,
                                        std::default_delete<BaseConfigTypeContainer<SeqGroupType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<SeqGroupType>,
                                        std::default_delete<BaseConfigTypeContainer<SeqGroupType>>>*)(this + 104));
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x1005bdfc0, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<SeqGroupType>::CacheClean(unsigned int)
    void BaseTemplateConfigTypeList<SeqGroupType>::CacheClean(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<SeqGroupType>,
                                        std::default_delete<BaseConfigTypeContainer<SeqGroupType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<SeqGroupType>,
                                        std::default_delete<BaseConfigTypeContainer<SeqGroupType>>>*)(this + 104));
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x1005bdff0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<SeqGroupType>::IsPreloaded() const
    void BaseTemplateConfigTypeList<SeqGroupType>::IsPreloaded() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<SeqGroupType>,
                                        std::default_delete<BaseConfigTypeContainer<SeqGroupType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<SeqGroupType>,
                                        std::default_delete<BaseConfigTypeContainer<SeqGroupType>>>*)(this + 104));
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x1005be010, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<SeqGroupType>::GetPreloadProgress() const
    void BaseTemplateConfigTypeList<SeqGroupType>::GetPreloadProgress() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<SeqGroupType>,
                                        std::default_delete<BaseConfigTypeContainer<SeqGroupType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<SeqGroupType>,
                                        std::default_delete<BaseConfigTypeContainer<SeqGroupType>>>*)(this + 104));
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x1005be290, 16 bytes, complete-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<SeqGroupType>::~BaseTemplateConfigTypeList(): jumps straight to the base-object destructor

    // 0x1005be2a0, 32 bytes, deleting destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<SeqGroupType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<SeqGroupType>::~BaseTemplateConfigTypeList() {
        ~SeqGroupTypeList();
        operator_delete(this);
    }

    // 0x1005c33d0, 48 bytes, base-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<SeqGroupType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<SeqGroupType>::~BaseTemplateConfigTypeList() {
        *(undefined**)this = PTR_vtable_100ee8140 + 16;
        ((this + 104))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x1005c3520, 320 bytes, base-object constructor, inline, placed by class name
    // BaseTemplateConfigTypeList<LightType>::BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void BaseTemplateConfigTypeList<LightType>::BaseTemplateConfigTypeList(uint param_2, ModeGame* param_3,
                                                                           Language* param_4,
                                                                           Js5ResourceProvider* param_5,
                                                                           Js5ArchiveSettings* param_6,
                                                                           Js5ConfigGroup* param_7) {
        unique_ptr<BaseConfigTypeContainer<LightType>, std::default_delete<BaseConfigTypeContainer<LightType>>>*
            this_00;
        BaseTemplateConfigTypeList local_38[8];

        new (this) BaseConfigTypeList(param_3, param_4, param_5, param_6, param_7);
        *(undefined**)this = PTR_vtable_100ee81d0 + 16;
        this_00 = (unique_ptr<BaseConfigTypeContainer<LightType>,
                              std::default_delete<BaseConfigTypeContainer<LightType>>>*)(this + 104);
        std::unique_ptr<BaseConfigTypeContainer<LightType>,
                        std::default_delete<BaseConfigTypeContainer<LightType>>>::unique_ptr<true, void>(this_00);
        if (param_2 == 3) {
            std::make_unique<ConfigTypeLoadAllContainer<LightType>, BaseTemplateConfigTypeList<LightType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<LightType>,
                            std::default_delete<BaseConfigTypeContainer<LightType>>>::operator=(this_00,
                                                                                                (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else if (param_2 == 2) {
            std::make_unique<ConfigTypePreloadPackedContainer<LightType>, BaseTemplateConfigTypeList<LightType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<LightType>,
                            std::default_delete<BaseConfigTypeContainer<LightType>>>::operator=(this_00,
                                                                                                (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else {
            if (param_2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", (ulong)param_2);
            }
            std::make_unique<ConfigTypeNoPreloadContainer<LightType>, BaseTemplateConfigTypeList<LightType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&, unsigned int&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6,
                (uint*)&param_7);
            std::unique_ptr<BaseConfigTypeContainer<LightType>,
                            std::default_delete<BaseConfigTypeContainer<LightType>>>::operator=(this_00,
                                                                                                (unique_ptr*)local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x1005c3690, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<LightType>::CacheResize(unsigned int)
    void BaseTemplateConfigTypeList<LightType>::CacheResize(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<LightType>,
                                        std::default_delete<BaseConfigTypeContainer<LightType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<LightType>,
                                        std::default_delete<BaseConfigTypeContainer<LightType>>>*)(this + 104));
        (**(code**)(*plVar1 + 40))(plVar1, param_1);
    }

    // 0x1005c36c0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<LightType>::LoadList()
    void BaseTemplateConfigTypeList<LightType>::LoadList() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<LightType>,
                                        std::default_delete<BaseConfigTypeContainer<LightType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<LightType>,
                                        std::default_delete<BaseConfigTypeContainer<LightType>>>*)(this + 104));
        (**(code**)(*plVar1 + 16))(plVar1);
    }

    // 0x1005c36e0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<LightType>::CacheReset()
    void BaseTemplateConfigTypeList<LightType>::CacheReset() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<LightType>,
                                        std::default_delete<BaseConfigTypeContainer<LightType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<LightType>,
                                        std::default_delete<BaseConfigTypeContainer<LightType>>>*)(this + 104));
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x1005c3700, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<LightType>::CacheClean(unsigned int)
    void BaseTemplateConfigTypeList<LightType>::CacheClean(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<LightType>,
                                        std::default_delete<BaseConfigTypeContainer<LightType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<LightType>,
                                        std::default_delete<BaseConfigTypeContainer<LightType>>>*)(this + 104));
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x1005c3730, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<LightType>::IsPreloaded() const
    void BaseTemplateConfigTypeList<LightType>::IsPreloaded() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<LightType>,
                                        std::default_delete<BaseConfigTypeContainer<LightType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<LightType>,
                                        std::default_delete<BaseConfigTypeContainer<LightType>>>*)(this + 104));
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x1005c3750, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<LightType>::GetPreloadProgress() const
    void BaseTemplateConfigTypeList<LightType>::GetPreloadProgress() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<LightType>,
                                        std::default_delete<BaseConfigTypeContainer<LightType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<LightType>,
                                        std::default_delete<BaseConfigTypeContainer<LightType>>>*)(this + 104));
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x1005c39d0, 16 bytes, complete-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<LightType>::~BaseTemplateConfigTypeList(): jumps straight to the base-object destructor

    // 0x1005c39e0, 32 bytes, deleting destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<LightType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<LightType>::~BaseTemplateConfigTypeList() {
        ~LightTypeList();
        operator_delete(this);
    }

    // 0x1005c8a70, 48 bytes, base-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<LightType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<LightType>::~BaseTemplateConfigTypeList() {
        *(undefined**)this = PTR_vtable_100ee81d0 + 16;
        ((this + 104))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x1005c8c00, 320 bytes, base-object constructor, inline, placed by class name
    // BaseTemplateConfigTypeList<SkyBoxType>::BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void BaseTemplateConfigTypeList<SkyBoxType>::BaseTemplateConfigTypeList(uint param_2, ModeGame* param_3,
                                                                            Language* param_4,
                                                                            Js5ResourceProvider* param_5,
                                                                            Js5ArchiveSettings* param_6,
                                                                            Js5ConfigGroup* param_7) {
        unique_ptr<BaseConfigTypeContainer<SkyBoxType>, std::default_delete<BaseConfigTypeContainer<SkyBoxType>>>*
            this_00;
        BaseTemplateConfigTypeList local_38[8];

        new (this) BaseConfigTypeList(param_3, param_4, param_5, param_6, param_7);
        *(undefined**)this = PTR_vtable_100ee8110 + 16;
        this_00 = (unique_ptr<BaseConfigTypeContainer<SkyBoxType>,
                              std::default_delete<BaseConfigTypeContainer<SkyBoxType>>>*)(this + 104);
        std::unique_ptr<BaseConfigTypeContainer<SkyBoxType>,
                        std::default_delete<BaseConfigTypeContainer<SkyBoxType>>>::unique_ptr<true, void>(this_00);
        if (param_2 == 3) {
            std::make_unique<ConfigTypeLoadAllContainer<SkyBoxType>, BaseTemplateConfigTypeList<SkyBoxType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<SkyBoxType>,
                            std::default_delete<BaseConfigTypeContainer<SkyBoxType>>>::operator=(this_00,
                                                                                                 (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else if (param_2 == 2) {
            std::make_unique<ConfigTypePreloadPackedContainer<SkyBoxType>, BaseTemplateConfigTypeList<SkyBoxType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<SkyBoxType>,
                            std::default_delete<BaseConfigTypeContainer<SkyBoxType>>>::operator=(this_00,
                                                                                                 (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else {
            if (param_2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", (ulong)param_2);
            }
            std::make_unique<ConfigTypeNoPreloadContainer<SkyBoxType>, BaseTemplateConfigTypeList<SkyBoxType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&, unsigned int&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6,
                (uint*)&param_7);
            std::unique_ptr<BaseConfigTypeContainer<SkyBoxType>,
                            std::default_delete<BaseConfigTypeContainer<SkyBoxType>>>::operator=(this_00,
                                                                                                 (unique_ptr*)local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x1005c8d50, 48 bytes, base-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<SkyBoxType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<SkyBoxType>::~BaseTemplateConfigTypeList() {
        *(undefined**)this = PTR_vtable_100ee8110 + 16;
        ((this + 104))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x1005c8db0, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<SkyBoxType>::CacheResize(unsigned int)
    void BaseTemplateConfigTypeList<SkyBoxType>::CacheResize(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<SkyBoxType>,
                                        std::default_delete<BaseConfigTypeContainer<SkyBoxType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<SkyBoxType>,
                                        std::default_delete<BaseConfigTypeContainer<SkyBoxType>>>*)(this + 104));
        (**(code**)(*plVar1 + 40))(plVar1, param_1);
    }

    // 0x1005c8de0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<SkyBoxType>::LoadList()
    void BaseTemplateConfigTypeList<SkyBoxType>::LoadList() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<SkyBoxType>,
                                        std::default_delete<BaseConfigTypeContainer<SkyBoxType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<SkyBoxType>,
                                        std::default_delete<BaseConfigTypeContainer<SkyBoxType>>>*)(this + 104));
        (**(code**)(*plVar1 + 16))(plVar1);
    }

    // 0x1005c8e60, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<SkyBoxType>::IsPreloaded() const
    void BaseTemplateConfigTypeList<SkyBoxType>::IsPreloaded() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<SkyBoxType>,
                                        std::default_delete<BaseConfigTypeContainer<SkyBoxType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<SkyBoxType>,
                                        std::default_delete<BaseConfigTypeContainer<SkyBoxType>>>*)(this + 104));
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x1005c8e80, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<SkyBoxType>::GetPreloadProgress() const
    void BaseTemplateConfigTypeList<SkyBoxType>::GetPreloadProgress() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<SkyBoxType>,
                                        std::default_delete<BaseConfigTypeContainer<SkyBoxType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<SkyBoxType>,
                                        std::default_delete<BaseConfigTypeContainer<SkyBoxType>>>*)(this + 104));
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x1005c9100, 16 bytes, complete-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<SkyBoxType>::~BaseTemplateConfigTypeList(): jumps straight to the base-object destructor

    // 0x1005c9110, 32 bytes, deleting destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<SkyBoxType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<SkyBoxType>::~BaseTemplateConfigTypeList() {
        ~BaseTemplateConfigTypeList(this);
        operator_delete(this);
    }

    // 0x1005c9130, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<SkyBoxType>::CacheReset()
    void BaseTemplateConfigTypeList<SkyBoxType>::CacheReset() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<SkyBoxType>,
                                        std::default_delete<BaseConfigTypeContainer<SkyBoxType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<SkyBoxType>,
                                        std::default_delete<BaseConfigTypeContainer<SkyBoxType>>>*)(this + 104));
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x1005c9150, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<SkyBoxType>::CacheClean(unsigned int)
    void BaseTemplateConfigTypeList<SkyBoxType>::CacheClean(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<SkyBoxType>,
                                        std::default_delete<BaseConfigTypeContainer<SkyBoxType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<SkyBoxType>,
                                        std::default_delete<BaseConfigTypeContainer<SkyBoxType>>>*)(this + 104));
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x1005cea30, 320 bytes, base-object constructor, inline, placed by class name
    // BaseTemplateConfigTypeList<WaterType>::BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void BaseTemplateConfigTypeList<WaterType>::BaseTemplateConfigTypeList(uint param_2, ModeGame* param_3,
                                                                           Language* param_4,
                                                                           Js5ResourceProvider* param_5,
                                                                           Js5ArchiveSettings* param_6,
                                                                           Js5ConfigGroup* param_7) {
        unique_ptr<BaseConfigTypeContainer<WaterType>, std::default_delete<BaseConfigTypeContainer<WaterType>>>*
            this_00;
        BaseTemplateConfigTypeList local_38[8];

        new (this) BaseConfigTypeList(param_3, param_4, param_5, param_6, param_7);
        *(undefined**)this = PTR_vtable_100ee81e8 + 16;
        this_00 = (unique_ptr<BaseConfigTypeContainer<WaterType>,
                              std::default_delete<BaseConfigTypeContainer<WaterType>>>*)(this + 104);
        std::unique_ptr<BaseConfigTypeContainer<WaterType>,
                        std::default_delete<BaseConfigTypeContainer<WaterType>>>::unique_ptr<true, void>(this_00);
        if (param_2 == 3) {
            std::make_unique<ConfigTypeLoadAllContainer<WaterType>, BaseTemplateConfigTypeList<WaterType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<WaterType>,
                            std::default_delete<BaseConfigTypeContainer<WaterType>>>::operator=(this_00,
                                                                                                (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else if (param_2 == 2) {
            std::make_unique<ConfigTypePreloadPackedContainer<WaterType>, BaseTemplateConfigTypeList<WaterType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<WaterType>,
                            std::default_delete<BaseConfigTypeContainer<WaterType>>>::operator=(this_00,
                                                                                                (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else {
            if (param_2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", (ulong)param_2);
            }
            std::make_unique<ConfigTypeNoPreloadContainer<WaterType>, BaseTemplateConfigTypeList<WaterType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&, unsigned int&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6,
                (uint*)&param_7);
            std::unique_ptr<BaseConfigTypeContainer<WaterType>,
                            std::default_delete<BaseConfigTypeContainer<WaterType>>>::operator=(this_00,
                                                                                                (unique_ptr*)local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x1005ceba0, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<WaterType>::CacheResize(unsigned int)
    void BaseTemplateConfigTypeList<WaterType>::CacheResize(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<WaterType>,
                                        std::default_delete<BaseConfigTypeContainer<WaterType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<WaterType>,
                                        std::default_delete<BaseConfigTypeContainer<WaterType>>>*)(this + 104));
        (**(code**)(*plVar1 + 40))(plVar1, param_1);
    }

    // 0x1005cebd0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<WaterType>::LoadList()
    void BaseTemplateConfigTypeList<WaterType>::LoadList() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<WaterType>,
                                        std::default_delete<BaseConfigTypeContainer<WaterType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<WaterType>,
                                        std::default_delete<BaseConfigTypeContainer<WaterType>>>*)(this + 104));
        (**(code**)(*plVar1 + 16))(plVar1);
    }

    // 0x1005cebf0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<WaterType>::CacheReset()
    void BaseTemplateConfigTypeList<WaterType>::CacheReset() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<WaterType>,
                                        std::default_delete<BaseConfigTypeContainer<WaterType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<WaterType>,
                                        std::default_delete<BaseConfigTypeContainer<WaterType>>>*)(this + 104));
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x1005cec10, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<WaterType>::CacheClean(unsigned int)
    void BaseTemplateConfigTypeList<WaterType>::CacheClean(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<WaterType>,
                                        std::default_delete<BaseConfigTypeContainer<WaterType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<WaterType>,
                                        std::default_delete<BaseConfigTypeContainer<WaterType>>>*)(this + 104));
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x1005cec40, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<WaterType>::IsPreloaded() const
    void BaseTemplateConfigTypeList<WaterType>::IsPreloaded() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<WaterType>,
                                        std::default_delete<BaseConfigTypeContainer<WaterType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<WaterType>,
                                        std::default_delete<BaseConfigTypeContainer<WaterType>>>*)(this + 104));
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x1005cec60, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<WaterType>::GetPreloadProgress() const
    void BaseTemplateConfigTypeList<WaterType>::GetPreloadProgress() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<WaterType>,
                                        std::default_delete<BaseConfigTypeContainer<WaterType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<WaterType>,
                                        std::default_delete<BaseConfigTypeContainer<WaterType>>>*)(this + 104));
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x1005ceee0, 16 bytes, complete-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<WaterType>::~BaseTemplateConfigTypeList(): jumps straight to the base-object destructor

    // 0x1005ceef0, 32 bytes, deleting destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<WaterType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<WaterType>::~BaseTemplateConfigTypeList() {
        ~WaterTypeList();
        operator_delete(this);
    }

    // 0x1005d2ca0, 48 bytes, base-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<WaterType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<WaterType>::~BaseTemplateConfigTypeList() {
        *(undefined**)this = PTR_vtable_100ee81e8 + 16;
        ((this + 104))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x1005d2df0, 320 bytes, base-object constructor, inline, placed by class name
    // BaseTemplateConfigTypeList<CursorType>::BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void BaseTemplateConfigTypeList<CursorType>::BaseTemplateConfigTypeList(uint param_2, ModeGame* param_3,
                                                                            Language* param_4,
                                                                            Js5ResourceProvider* param_5,
                                                                            Js5ArchiveSettings* param_6,
                                                                            Js5ConfigGroup* param_7) {
        unique_ptr<BaseConfigTypeContainer<CursorType>, std::default_delete<BaseConfigTypeContainer<CursorType>>>*
            this_00;
        BaseTemplateConfigTypeList local_38[8];

        new (this) BaseConfigTypeList(param_3, param_4, param_5, param_6, param_7);
        *(undefined**)this = PTR_vtable_100ee8108 + 16;
        this_00 = (unique_ptr<BaseConfigTypeContainer<CursorType>,
                              std::default_delete<BaseConfigTypeContainer<CursorType>>>*)(this + 104);
        std::unique_ptr<BaseConfigTypeContainer<CursorType>,
                        std::default_delete<BaseConfigTypeContainer<CursorType>>>::unique_ptr<true, void>(this_00);
        if (param_2 == 3) {
            std::make_unique<ConfigTypeLoadAllContainer<CursorType>, BaseTemplateConfigTypeList<CursorType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<CursorType>,
                            std::default_delete<BaseConfigTypeContainer<CursorType>>>::operator=(this_00,
                                                                                                 (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else if (param_2 == 2) {
            std::make_unique<ConfigTypePreloadPackedContainer<CursorType>, BaseTemplateConfigTypeList<CursorType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<CursorType>,
                            std::default_delete<BaseConfigTypeContainer<CursorType>>>::operator=(this_00,
                                                                                                 (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else {
            if (param_2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", (ulong)param_2);
            }
            std::make_unique<ConfigTypeNoPreloadContainer<CursorType>, BaseTemplateConfigTypeList<CursorType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&, unsigned int&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6,
                (uint*)&param_7);
            std::unique_ptr<BaseConfigTypeContainer<CursorType>,
                            std::default_delete<BaseConfigTypeContainer<CursorType>>>::operator=(this_00,
                                                                                                 (unique_ptr*)local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x1005d2f60, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<CursorType>::CacheResize(unsigned int)
    void BaseTemplateConfigTypeList<CursorType>::CacheResize(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<CursorType>,
                                        std::default_delete<BaseConfigTypeContainer<CursorType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<CursorType>,
                                        std::default_delete<BaseConfigTypeContainer<CursorType>>>*)(this + 104));
        (**(code**)(*plVar1 + 40))(plVar1, param_1);
    }

    // 0x1005d2f90, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<CursorType>::LoadList()
    void BaseTemplateConfigTypeList<CursorType>::LoadList() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<CursorType>,
                                        std::default_delete<BaseConfigTypeContainer<CursorType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<CursorType>,
                                        std::default_delete<BaseConfigTypeContainer<CursorType>>>*)(this + 104));
        (**(code**)(*plVar1 + 16))(plVar1);
    }

    // 0x1005d2fb0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<CursorType>::CacheReset()
    void BaseTemplateConfigTypeList<CursorType>::CacheReset() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<CursorType>,
                                        std::default_delete<BaseConfigTypeContainer<CursorType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<CursorType>,
                                        std::default_delete<BaseConfigTypeContainer<CursorType>>>*)(this + 104));
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x1005d2fd0, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<CursorType>::CacheClean(unsigned int)
    void BaseTemplateConfigTypeList<CursorType>::CacheClean(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<CursorType>,
                                        std::default_delete<BaseConfigTypeContainer<CursorType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<CursorType>,
                                        std::default_delete<BaseConfigTypeContainer<CursorType>>>*)(this + 104));
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x1005d3000, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<CursorType>::IsPreloaded() const
    void BaseTemplateConfigTypeList<CursorType>::IsPreloaded() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<CursorType>,
                                        std::default_delete<BaseConfigTypeContainer<CursorType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<CursorType>,
                                        std::default_delete<BaseConfigTypeContainer<CursorType>>>*)(this + 104));
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x1005d3020, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<CursorType>::GetPreloadProgress() const
    void BaseTemplateConfigTypeList<CursorType>::GetPreloadProgress() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<CursorType>,
                                        std::default_delete<BaseConfigTypeContainer<CursorType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<CursorType>,
                                        std::default_delete<BaseConfigTypeContainer<CursorType>>>*)(this + 104));
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x1005d32a0, 16 bytes, complete-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<CursorType>::~BaseTemplateConfigTypeList(): jumps straight to the base-object destructor

    // 0x1005d32b0, 32 bytes, deleting destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<CursorType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<CursorType>::~BaseTemplateConfigTypeList() {
        ~CursorTypeList();
        operator_delete(this);
    }

    // 0x1005d8310, 48 bytes, base-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<CursorType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<CursorType>::~BaseTemplateConfigTypeList() {
        *(undefined**)this = PTR_vtable_100ee8108 + 16;
        ((this + 104))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x1005d84d0, 320 bytes, base-object constructor, inline, placed by class name
    // BaseTemplateConfigTypeList<WorldAreaType>::BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void BaseTemplateConfigTypeList<WorldAreaType>::BaseTemplateConfigTypeList(uint param_2, ModeGame* param_3,
                                                                               Language* param_4,
                                                                               Js5ResourceProvider* param_5,
                                                                               Js5ArchiveSettings* param_6,
                                                                               Js5ConfigGroup* param_7) {
        unique_ptr<BaseConfigTypeContainer<WorldAreaType>, std::default_delete<BaseConfigTypeContainer<WorldAreaType>>>*
            this_00;
        BaseTemplateConfigTypeList local_38[8];

        new (this) BaseConfigTypeList(param_3, param_4, param_5, param_6, param_7);
        *(undefined**)this = PTR_vtable_100ee8148 + 16;
        this_00 = (unique_ptr<BaseConfigTypeContainer<WorldAreaType>,
                              std::default_delete<BaseConfigTypeContainer<WorldAreaType>>>*)(this + 104);
        std::unique_ptr<BaseConfigTypeContainer<WorldAreaType>,
                        std::default_delete<BaseConfigTypeContainer<WorldAreaType>>>::unique_ptr<true, void>(this_00);
        if (param_2 == 3) {
            std::make_unique<ConfigTypeLoadAllContainer<WorldAreaType>, BaseTemplateConfigTypeList<WorldAreaType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<WorldAreaType>,
                            std::default_delete<BaseConfigTypeContainer<WorldAreaType>>>::operator=(this_00,
                                                                                                    (unique_ptr*)
                                                                                                        local_38);
            local_38->~unique_ptr();
        } else if (param_2 == 2) {
            std::make_unique<ConfigTypePreloadPackedContainer<WorldAreaType>,
                             BaseTemplateConfigTypeList<WorldAreaType>&, Js5ResourceProvider&,
                             Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<WorldAreaType>,
                            std::default_delete<BaseConfigTypeContainer<WorldAreaType>>>::operator=(this_00,
                                                                                                    (unique_ptr*)
                                                                                                        local_38);
            local_38->~unique_ptr();
        } else {
            if (param_2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", (ulong)param_2);
            }
            std::make_unique<ConfigTypeNoPreloadContainer<WorldAreaType>, BaseTemplateConfigTypeList<WorldAreaType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&, unsigned int&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6,
                (uint*)&param_7);
            std::unique_ptr<BaseConfigTypeContainer<WorldAreaType>,
                            std::default_delete<BaseConfigTypeContainer<WorldAreaType>>>::operator=(this_00,
                                                                                                    (unique_ptr*)
                                                                                                        local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x1005ddcd0, 320 bytes, base-object constructor, inline, placed by class name
    // BaseTemplateConfigTypeList<EnumType>::BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void BaseTemplateConfigTypeList<EnumType>::BaseTemplateConfigTypeList(uint param_2, ModeGame* param_3,
                                                                          Language* param_4,
                                                                          Js5ResourceProvider* param_5,
                                                                          Js5ArchiveSettings* param_6,
                                                                          Js5ConfigGroup* param_7) {
        unique_ptr<BaseConfigTypeContainer<EnumType>, std::default_delete<BaseConfigTypeContainer<EnumType>>>* this_00;
        BaseTemplateConfigTypeList local_38[8];

        new (this) BaseConfigTypeList(param_3, param_4, param_5, param_6, param_7);
        *(undefined**)this = PTR_vtable_100ee81c0 + 16;
        this_00 = (unique_ptr<BaseConfigTypeContainer<EnumType>,
                              std::default_delete<BaseConfigTypeContainer<EnumType>>>*)(this + 104);
        std::unique_ptr<BaseConfigTypeContainer<EnumType>,
                        std::default_delete<BaseConfigTypeContainer<EnumType>>>::unique_ptr<true, void>(this_00);
        if (param_2 == 3) {
            std::make_unique<ConfigTypeLoadAllContainer<EnumType>, BaseTemplateConfigTypeList<EnumType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<EnumType>,
                            std::default_delete<BaseConfigTypeContainer<EnumType>>>::operator=(this_00,
                                                                                               (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else if (param_2 == 2) {
            std::make_unique<ConfigTypePreloadPackedContainer<EnumType>, BaseTemplateConfigTypeList<EnumType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<EnumType>,
                            std::default_delete<BaseConfigTypeContainer<EnumType>>>::operator=(this_00,
                                                                                               (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else {
            if (param_2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", (ulong)param_2);
            }
            std::make_unique<ConfigTypeNoPreloadContainer<EnumType>, BaseTemplateConfigTypeList<EnumType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&, unsigned int&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6,
                (uint*)&param_7);
            std::unique_ptr<BaseConfigTypeContainer<EnumType>,
                            std::default_delete<BaseConfigTypeContainer<EnumType>>>::operator=(this_00,
                                                                                               (unique_ptr*)local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x1005dde40, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<EnumType>::CacheResize(unsigned int)
    void BaseTemplateConfigTypeList<EnumType>::CacheResize(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<EnumType>,
                                        std::default_delete<BaseConfigTypeContainer<EnumType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<EnumType>,
                                        std::default_delete<BaseConfigTypeContainer<EnumType>>>*)(this + 104));
        (**(code**)(*plVar1 + 40))(plVar1, param_1);
    }

    // 0x1005dde70, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<EnumType>::LoadList()
    void BaseTemplateConfigTypeList<EnumType>::LoadList() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<EnumType>,
                                        std::default_delete<BaseConfigTypeContainer<EnumType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<EnumType>,
                                        std::default_delete<BaseConfigTypeContainer<EnumType>>>*)(this + 104));
        (**(code**)(*plVar1 + 16))(plVar1);
    }

    // 0x1005dde90, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<EnumType>::CacheReset()
    void BaseTemplateConfigTypeList<EnumType>::CacheReset() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<EnumType>,
                                        std::default_delete<BaseConfigTypeContainer<EnumType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<EnumType>,
                                        std::default_delete<BaseConfigTypeContainer<EnumType>>>*)(this + 104));
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x1005ddeb0, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<EnumType>::CacheClean(unsigned int)
    void BaseTemplateConfigTypeList<EnumType>::CacheClean(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<EnumType>,
                                        std::default_delete<BaseConfigTypeContainer<EnumType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<EnumType>,
                                        std::default_delete<BaseConfigTypeContainer<EnumType>>>*)(this + 104));
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x1005ddee0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<EnumType>::IsPreloaded() const
    void BaseTemplateConfigTypeList<EnumType>::IsPreloaded() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<EnumType>,
                                        std::default_delete<BaseConfigTypeContainer<EnumType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<EnumType>,
                                        std::default_delete<BaseConfigTypeContainer<EnumType>>>*)(this + 104));
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x1005ddf00, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<EnumType>::GetPreloadProgress() const
    void BaseTemplateConfigTypeList<EnumType>::GetPreloadProgress() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<EnumType>,
                                        std::default_delete<BaseConfigTypeContainer<EnumType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<EnumType>,
                                        std::default_delete<BaseConfigTypeContainer<EnumType>>>*)(this + 104));
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x1005de180, 16 bytes, complete-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<EnumType>::~BaseTemplateConfigTypeList(): jumps straight to the base-object destructor

    // 0x1005de190, 32 bytes, deleting destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<EnumType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<EnumType>::~BaseTemplateConfigTypeList() {
        ~EnumTypeList();
        operator_delete(this);
    }

    // 0x1005e3c40, 48 bytes, base-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<EnumType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<EnumType>::~BaseTemplateConfigTypeList() {
        *(undefined**)this = PTR_vtable_100ee81c0 + 16;
        ((this + 104))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x1005e3f90, 320 bytes, base-object constructor, inline, placed by class name
    // BaseTemplateConfigTypeList<EffectAnimType>::BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void BaseTemplateConfigTypeList<EffectAnimType>::BaseTemplateConfigTypeList(uint param_2, ModeGame* param_3,
                                                                                Language* param_4,
                                                                                Js5ResourceProvider* param_5,
                                                                                Js5ArchiveSettings* param_6,
                                                                                Js5ConfigGroup* param_7) {
        unique_ptr<BaseConfigTypeContainer<EffectAnimType>,
                   std::default_delete<BaseConfigTypeContainer<EffectAnimType>>>* this_00;
        BaseTemplateConfigTypeList local_38[8];

        new (this) BaseConfigTypeList(param_3, param_4, param_5, param_6, param_7);
        *(undefined**)this = PTR_vtable_100ee8150 + 16;
        this_00 = (unique_ptr<BaseConfigTypeContainer<EffectAnimType>,
                              std::default_delete<BaseConfigTypeContainer<EffectAnimType>>>*)(this + 104);
        std::unique_ptr<BaseConfigTypeContainer<EffectAnimType>,
                        std::default_delete<BaseConfigTypeContainer<EffectAnimType>>>::unique_ptr<true, void>(this_00);
        if (param_2 == 3) {
            std::make_unique<ConfigTypeLoadAllContainer<EffectAnimType>, BaseTemplateConfigTypeList<EffectAnimType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<EffectAnimType>,
                            std::default_delete<BaseConfigTypeContainer<EffectAnimType>>>::operator=(this_00,
                                                                                                     (unique_ptr*)
                                                                                                         local_38);
            local_38->~unique_ptr();
        } else if (param_2 == 2) {
            std::make_unique<ConfigTypePreloadPackedContainer<EffectAnimType>,
                             BaseTemplateConfigTypeList<EffectAnimType>&, Js5ResourceProvider&,
                             Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<EffectAnimType>,
                            std::default_delete<BaseConfigTypeContainer<EffectAnimType>>>::operator=(this_00,
                                                                                                     (unique_ptr*)
                                                                                                         local_38);
            local_38->~unique_ptr();
        } else {
            if (param_2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", (ulong)param_2);
            }
            std::make_unique<ConfigTypeNoPreloadContainer<EffectAnimType>, BaseTemplateConfigTypeList<EffectAnimType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&, unsigned int&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6,
                (uint*)&param_7);
            std::unique_ptr<BaseConfigTypeContainer<EffectAnimType>,
                            std::default_delete<BaseConfigTypeContainer<EffectAnimType>>>::operator=(this_00,
                                                                                                     (unique_ptr*)
                                                                                                         local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x1005e40e0, 48 bytes, base-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<EffectAnimType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<EffectAnimType>::~BaseTemplateConfigTypeList() {
        *(undefined**)this = PTR_vtable_100ee8150 + 16;
        ((this + 104))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x1005e4140, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<EffectAnimType>::CacheResize(unsigned int)
    void BaseTemplateConfigTypeList<EffectAnimType>::CacheResize(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<EffectAnimType>,
                                        std::default_delete<BaseConfigTypeContainer<EffectAnimType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<EffectAnimType>,
                                        std::default_delete<BaseConfigTypeContainer<EffectAnimType>>>*)(this + 104));
        (**(code**)(*plVar1 + 40))(plVar1, param_1);
    }

    // 0x1005e4170, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<EffectAnimType>::LoadList()
    void BaseTemplateConfigTypeList<EffectAnimType>::LoadList() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<EffectAnimType>,
                                        std::default_delete<BaseConfigTypeContainer<EffectAnimType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<EffectAnimType>,
                                        std::default_delete<BaseConfigTypeContainer<EffectAnimType>>>*)(this + 104));
        (**(code**)(*plVar1 + 16))(plVar1);
    }

    // 0x1005e41f0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<EffectAnimType>::IsPreloaded() const
    void BaseTemplateConfigTypeList<EffectAnimType>::IsPreloaded() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<EffectAnimType>,
                                        std::default_delete<BaseConfigTypeContainer<EffectAnimType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<EffectAnimType>,
                                        std::default_delete<BaseConfigTypeContainer<EffectAnimType>>>*)(this + 104));
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x1005e4210, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<EffectAnimType>::GetPreloadProgress() const
    void BaseTemplateConfigTypeList<EffectAnimType>::GetPreloadProgress() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<EffectAnimType>,
                                        std::default_delete<BaseConfigTypeContainer<EffectAnimType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<EffectAnimType>,
                                        std::default_delete<BaseConfigTypeContainer<EffectAnimType>>>*)(this + 104));
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x1005e4490, 16 bytes, complete-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<EffectAnimType>::~BaseTemplateConfigTypeList(): jumps straight to the base-object destructor

    // 0x1005e44a0, 32 bytes, deleting destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<EffectAnimType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<EffectAnimType>::~BaseTemplateConfigTypeList() {
        ~BaseTemplateConfigTypeList(this);
        operator_delete(this);
    }

    // 0x1005e44c0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<EffectAnimType>::CacheReset()
    void BaseTemplateConfigTypeList<EffectAnimType>::CacheReset() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<EffectAnimType>,
                                        std::default_delete<BaseConfigTypeContainer<EffectAnimType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<EffectAnimType>,
                                        std::default_delete<BaseConfigTypeContainer<EffectAnimType>>>*)(this + 104));
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x1005e44e0, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<EffectAnimType>::CacheClean(unsigned int)
    void BaseTemplateConfigTypeList<EffectAnimType>::CacheClean(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<EffectAnimType>,
                                        std::default_delete<BaseConfigTypeContainer<EffectAnimType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<EffectAnimType>,
                                        std::default_delete<BaseConfigTypeContainer<EffectAnimType>>>*)(this + 104));
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x1005e9d80, 320 bytes, base-object constructor, inline, placed by class name
    // BaseTemplateConfigTypeList<StructType>::BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void BaseTemplateConfigTypeList<StructType>::BaseTemplateConfigTypeList(uint param_2, ModeGame* param_3,
                                                                            Language* param_4,
                                                                            Js5ResourceProvider* param_5,
                                                                            Js5ArchiveSettings* param_6,
                                                                            Js5ConfigGroup* param_7) {
        unique_ptr<BaseConfigTypeContainer<StructType>, std::default_delete<BaseConfigTypeContainer<StructType>>>*
            this_00;
        BaseTemplateConfigTypeList local_38[8];

        new (this) BaseConfigTypeList(param_3, param_4, param_5, param_6, param_7);
        *(undefined**)this = PTR_vtable_100ee8118 + 16;
        this_00 = (unique_ptr<BaseConfigTypeContainer<StructType>,
                              std::default_delete<BaseConfigTypeContainer<StructType>>>*)(this + 104);
        std::unique_ptr<BaseConfigTypeContainer<StructType>,
                        std::default_delete<BaseConfigTypeContainer<StructType>>>::unique_ptr<true, void>(this_00);
        if (param_2 == 3) {
            std::make_unique<ConfigTypeLoadAllContainer<StructType>, BaseTemplateConfigTypeList<StructType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<StructType>,
                            std::default_delete<BaseConfigTypeContainer<StructType>>>::operator=(this_00,
                                                                                                 (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else if (param_2 == 2) {
            std::make_unique<ConfigTypePreloadPackedContainer<StructType>, BaseTemplateConfigTypeList<StructType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<StructType>,
                            std::default_delete<BaseConfigTypeContainer<StructType>>>::operator=(this_00,
                                                                                                 (unique_ptr*)local_38);
            local_38->~unique_ptr();
        } else {
            if (param_2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", (ulong)param_2);
            }
            std::make_unique<ConfigTypeNoPreloadContainer<StructType>, BaseTemplateConfigTypeList<StructType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&, unsigned int&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6,
                (uint*)&param_7);
            std::unique_ptr<BaseConfigTypeContainer<StructType>,
                            std::default_delete<BaseConfigTypeContainer<StructType>>>::operator=(this_00,
                                                                                                 (unique_ptr*)local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x1005e9ef0, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<StructType>::CacheResize(unsigned int)
    void BaseTemplateConfigTypeList<StructType>::CacheResize(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<StructType>,
                                        std::default_delete<BaseConfigTypeContainer<StructType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<StructType>,
                                        std::default_delete<BaseConfigTypeContainer<StructType>>>*)(this + 104));
        (**(code**)(*plVar1 + 40))(plVar1, param_1);
    }

    // 0x1005e9f20, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<StructType>::LoadList()
    void BaseTemplateConfigTypeList<StructType>::LoadList() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<StructType>,
                                        std::default_delete<BaseConfigTypeContainer<StructType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<StructType>,
                                        std::default_delete<BaseConfigTypeContainer<StructType>>>*)(this + 104));
        (**(code**)(*plVar1 + 16))(plVar1);
    }

    // 0x1005e9f40, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<StructType>::CacheReset()
    void BaseTemplateConfigTypeList<StructType>::CacheReset() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<StructType>,
                                        std::default_delete<BaseConfigTypeContainer<StructType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<StructType>,
                                        std::default_delete<BaseConfigTypeContainer<StructType>>>*)(this + 104));
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x1005e9f60, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<StructType>::CacheClean(unsigned int)
    void BaseTemplateConfigTypeList<StructType>::CacheClean(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<StructType>,
                                        std::default_delete<BaseConfigTypeContainer<StructType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<StructType>,
                                        std::default_delete<BaseConfigTypeContainer<StructType>>>*)(this + 104));
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x1005e9f90, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<StructType>::IsPreloaded() const
    void BaseTemplateConfigTypeList<StructType>::IsPreloaded() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<StructType>,
                                        std::default_delete<BaseConfigTypeContainer<StructType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<StructType>,
                                        std::default_delete<BaseConfigTypeContainer<StructType>>>*)(this + 104));
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x1005e9fb0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<StructType>::GetPreloadProgress() const
    void BaseTemplateConfigTypeList<StructType>::GetPreloadProgress() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<StructType>,
                                        std::default_delete<BaseConfigTypeContainer<StructType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<StructType>,
                                        std::default_delete<BaseConfigTypeContainer<StructType>>>*)(this + 104));
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x1005ea230, 16 bytes, complete-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<StructType>::~BaseTemplateConfigTypeList(): jumps straight to the base-object destructor

    // 0x1005ea240, 32 bytes, deleting destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<StructType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<StructType>::~BaseTemplateConfigTypeList() {
        ~StructTypeList();
        operator_delete(this);
    }

    // 0x1005ef2c0, 48 bytes, base-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<StructType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<StructType>::~BaseTemplateConfigTypeList() {
        *(undefined**)this = PTR_vtable_100ee8118 + 16;
        ((this + 104))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x1005ef420, 320 bytes, base-object constructor, inline, placed by class name
    // BaseTemplateConfigTypeList<AchievementType>::BaseTemplateConfigTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*, unsigned int)
    void BaseTemplateConfigTypeList<AchievementType>::BaseTemplateConfigTypeList(uint param_2, ModeGame* param_3,
                                                                                 Language* param_4,
                                                                                 Js5ResourceProvider* param_5,
                                                                                 Js5ArchiveSettings* param_6,
                                                                                 Js5ConfigGroup* param_7) {
        unique_ptr<BaseConfigTypeContainer<AchievementType>,
                   std::default_delete<BaseConfigTypeContainer<AchievementType>>>* this_00;
        BaseTemplateConfigTypeList local_38[8];

        new (this) BaseConfigTypeList(param_3, param_4, param_5, param_6, param_7);
        *(undefined**)this = PTR_vtable_100ee8160 + 16;
        this_00 = (unique_ptr<BaseConfigTypeContainer<AchievementType>,
                              std::default_delete<BaseConfigTypeContainer<AchievementType>>>*)(this + 104);
        std::unique_ptr<BaseConfigTypeContainer<AchievementType>,
                        std::default_delete<BaseConfigTypeContainer<AchievementType>>>::unique_ptr<true, void>(this_00);
        if (param_2 == 3) {
            std::make_unique<ConfigTypeLoadAllContainer<AchievementType>, BaseTemplateConfigTypeList<AchievementType>&,
                             Js5ResourceProvider&, Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<AchievementType>,
                            std::default_delete<BaseConfigTypeContainer<AchievementType>>>::operator=(this_00,
                                                                                                      (unique_ptr*)
                                                                                                          local_38);
            local_38->~unique_ptr();
        } else if (param_2 == 2) {
            std::make_unique<ConfigTypePreloadPackedContainer<AchievementType>,
                             BaseTemplateConfigTypeList<AchievementType>&, Js5ResourceProvider&,
                             Js5ArchiveSettings_const&, Js5ConfigGroup_const*&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6);
            std::unique_ptr<BaseConfigTypeContainer<AchievementType>,
                            std::default_delete<BaseConfigTypeContainer<AchievementType>>>::operator=(this_00,
                                                                                                      (unique_ptr*)
                                                                                                          local_38);
            local_38->~unique_ptr();
        } else {
            if (param_2 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/BaseTemplateConfigTypeList.h",
                                43, "Unsupported config type list strategy: %d", (ulong)param_2);
            }
            std::make_unique<ConfigTypeNoPreloadContainer<AchievementType>,
                             BaseTemplateConfigTypeList<AchievementType>&, Js5ResourceProvider&,
                             Js5ArchiveSettings_const&, Js5ConfigGroup_const*&, unsigned int&>(
                local_38, (Js5ResourceProvider*)this, (Js5ArchiveSettings*)param_5, (Js5ConfigGroup**)param_6,
                (uint*)&param_7);
            std::unique_ptr<BaseConfigTypeContainer<AchievementType>,
                            std::default_delete<BaseConfigTypeContainer<AchievementType>>>::operator=(this_00,
                                                                                                      (unique_ptr*)
                                                                                                          local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x1005ef590, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<AchievementType>::CacheResize(unsigned int)
    void BaseTemplateConfigTypeList<AchievementType>::CacheResize(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<AchievementType>,
                                        std::default_delete<BaseConfigTypeContainer<AchievementType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<AchievementType>,
                                        std::default_delete<BaseConfigTypeContainer<AchievementType>>>*)(this + 104));
        (**(code**)(*plVar1 + 40))(plVar1, param_1);
    }

    // 0x1005ef5c0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<AchievementType>::LoadList()
    void BaseTemplateConfigTypeList<AchievementType>::LoadList() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<AchievementType>,
                                        std::default_delete<BaseConfigTypeContainer<AchievementType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<AchievementType>,
                                        std::default_delete<BaseConfigTypeContainer<AchievementType>>>*)(this + 104));
        (**(code**)(*plVar1 + 16))(plVar1);
    }

    // 0x1005ef5e0, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<AchievementType>::CacheReset()
    void BaseTemplateConfigTypeList<AchievementType>::CacheReset() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<AchievementType>,
                                        std::default_delete<BaseConfigTypeContainer<AchievementType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<AchievementType>,
                                        std::default_delete<BaseConfigTypeContainer<AchievementType>>>*)(this + 104));
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x1005ef600, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<AchievementType>::CacheClean(unsigned int)
    void BaseTemplateConfigTypeList<AchievementType>::CacheClean(uint param_1) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<AchievementType>,
                                        std::default_delete<BaseConfigTypeContainer<AchievementType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<AchievementType>,
                                        std::default_delete<BaseConfigTypeContainer<AchievementType>>>*)(this + 104));
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x1005ef630, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<AchievementType>::IsPreloaded() const
    void BaseTemplateConfigTypeList<AchievementType>::IsPreloaded() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<AchievementType>,
                                        std::default_delete<BaseConfigTypeContainer<AchievementType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<AchievementType>,
                                        std::default_delete<BaseConfigTypeContainer<AchievementType>>>*)(this + 104));
        (**(code**)(*plVar1 + 48))(plVar1);
    }

    // 0x1005ef650, 32 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<AchievementType>::GetPreloadProgress() const
    void BaseTemplateConfigTypeList<AchievementType>::GetPreloadProgress() {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<AchievementType>,
                                        std::default_delete<BaseConfigTypeContainer<AchievementType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<AchievementType>,
                                        std::default_delete<BaseConfigTypeContainer<AchievementType>>>*)(this + 104));
        (**(code**)(*plVar1 + 56))(plVar1);
    }

    // 0x1005ef8d0, 16 bytes, complete-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<AchievementType>::~BaseTemplateConfigTypeList(): jumps straight to the base-object destructor

    // 0x1005ef8e0, 32 bytes, deleting destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<AchievementType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<AchievementType>::~BaseTemplateConfigTypeList() {
        ~AchievementTypeList();
        operator_delete(this);
    }

    // 0x1005f5200, 48 bytes, base-object destructor, inline, placed by class name
    // BaseTemplateConfigTypeList<AchievementType>::~BaseTemplateConfigTypeList()
    void BaseTemplateConfigTypeList<AchievementType>::~BaseTemplateConfigTypeList() {
        *(undefined**)this = PTR_vtable_100ee8160 + 16;
        ((this + 104))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x100636b00, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<FloorOverlayType>::List(int, DataStatus const**)
    void BaseTemplateConfigTypeList<FloorOverlayType>::List(int param_1, DataStatus** param_2) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<FloorOverlayType>,
                                        std::default_delete<BaseConfigTypeContainer<FloorOverlayType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<FloorOverlayType>,
                                        std::default_delete<BaseConfigTypeContainer<FloorOverlayType>>>*)(this + 104));
        (**(code**)(*plVar1 + 64))(plVar1, param_1, param_2);
    }

    // 0x100636f90, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<FloorUnderlayType>::List(int, DataStatus const**)
    void BaseTemplateConfigTypeList<FloorUnderlayType>::List(int param_1, DataStatus** param_2) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<FloorUnderlayType>,
                                        std::default_delete<BaseConfigTypeContainer<FloorUnderlayType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<FloorUnderlayType>,
                                        std::default_delete<BaseConfigTypeContainer<FloorUnderlayType>>>*)(this + 104));
        (**(code**)(*plVar1 + 64))(plVar1, param_1, param_2);
    }

    // 0x100670cb0, 48 bytes, inline, placed by class name
    // BaseTemplateConfigTypeList<SeqType>::List(int, DataStatus const**)
    void BaseTemplateConfigTypeList<SeqType>::List(int param_1, DataStatus** param_2) {
        long* plVar1;

        plVar1 = (long*)std::unique_ptr<BaseConfigTypeContainer<SeqType>,
                                        std::default_delete<BaseConfigTypeContainer<SeqType>>>::
                 operator->((unique_ptr<BaseConfigTypeContainer<SeqType>,
                                        std::default_delete<BaseConfigTypeContainer<SeqType>>>*)(this + 104));
        (**(code**)(*plVar1 + 64))(plVar1, param_1, param_2);
    }

} // namespace jag::game
