// libs/game/runetek5/config/BaseConfigTypeContainer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    template <typename...> // 30 instantiations, e.g. <AchievementType>, <BASType>, <CursorType>
    class BaseConfigTypeContainer {
    public:
        // virtual methods in vtable order
        virtual void __pure_slot_3() = 0;
        virtual void __pure_slot_4() = 0;
        BaseConfigTypeContainer(
            BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>& baseTemplateConfigTypeList,
            Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
            const Js5ConfigGroup* js5ConfigGroup);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<VarType>& baseTemplateConfigTypeList,
                                Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
                                const Js5ConfigGroup* js5ConfigGroup);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<SeqType>& baseTemplateConfigTypeList,
                                Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
                                const Js5ConfigGroup* js5ConfigGroup);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<ObjType>& baseTemplateConfigTypeList,
                                Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
                                const Js5ConfigGroup* js5ConfigGroup);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<NPCType>& baseTemplateConfigTypeList,
                                Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
                                const Js5ConfigGroup* js5ConfigGroup);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<LocType>& baseTemplateConfigTypeList,
                                Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
                                const Js5ConfigGroup* js5ConfigGroup);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<ParamType>& baseTemplateConfigTypeList,
                                Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
                                const Js5ConfigGroup* js5ConfigGroup);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<DBRowType>& baseTemplateConfigTypeList,
                                Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
                                const Js5ConfigGroup* js5ConfigGroup);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<DBTableType>& baseTemplateConfigTypeList,
                                Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
                                const Js5ConfigGroup* js5ConfigGroup);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<InvType>& baseTemplateConfigTypeList,
                                Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
                                const Js5ConfigGroup* js5ConfigGroup);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<VarBitType>& baseTemplateConfigTypeList,
                                Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
                                const Js5ConfigGroup* js5ConfigGroup);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<BASType>& baseTemplateConfigTypeList,
                                Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
                                const Js5ConfigGroup* js5ConfigGroup);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<FloorUnderlayType>& baseTemplateConfigTypeList,
                                Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
                                const Js5ConfigGroup* js5ConfigGroup);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<FloorOverlayType>& baseTemplateConfigTypeList,
                                Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
                                const Js5ConfigGroup* js5ConfigGroup);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<HitmarkType>& baseTemplateConfigTypeList,
                                Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
                                const Js5ConfigGroup* js5ConfigGroup);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<HeadbarType>& baseTemplateConfigTypeList,
                                Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
                                const Js5ConfigGroup* js5ConfigGroup);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<IDKType>& baseTemplateConfigTypeList,
                                Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
                                const Js5ConfigGroup* js5ConfigGroup);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<MapElementType>& baseTemplateConfigTypeList,
                                Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
                                const Js5ConfigGroup* js5ConfigGroup);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<MSIType>& baseTemplateConfigTypeList,
                                Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
                                const Js5ConfigGroup* js5ConfigGroup);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<QuestType>& baseTemplateConfigTypeList,
                                Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
                                const Js5ConfigGroup* js5ConfigGroup);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<SeqGroupType>& baseTemplateConfigTypeList,
                                Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
                                const Js5ConfigGroup* js5ConfigGroup);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<LightType>& baseTemplateConfigTypeList,
                                Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
                                const Js5ConfigGroup* js5ConfigGroup);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<SkyBoxType>& baseTemplateConfigTypeList,
                                Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
                                const Js5ConfigGroup* js5ConfigGroup);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<WaterType>& baseTemplateConfigTypeList,
                                Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
                                const Js5ConfigGroup* js5ConfigGroup);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<CursorType>& baseTemplateConfigTypeList,
                                Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
                                const Js5ConfigGroup* js5ConfigGroup);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<WorldAreaType>& baseTemplateConfigTypeList,
                                Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
                                const Js5ConfigGroup* js5ConfigGroup);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<EnumType>& baseTemplateConfigTypeList,
                                Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
                                const Js5ConfigGroup* js5ConfigGroup);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<EffectAnimType>& baseTemplateConfigTypeList,
                                Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
                                const Js5ConfigGroup* js5ConfigGroup);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<StructType>& baseTemplateConfigTypeList,
                                Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
                                const Js5ConfigGroup* js5ConfigGroup);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<AchievementType>& baseTemplateConfigTypeList,
                                Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
                                const Js5ConfigGroup* js5ConfigGroup);
    };

    // 0x10013f7d0
    BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>& baseTemplateConfigTypeList,
        Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
        const Js5ConfigGroup* js5ConfigGroup) {}

    // 0x1004d85e0
    BaseConfigTypeContainer<VarType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList<VarType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup) {}

    // 0x1004ea880
    BaseConfigTypeContainer<SeqType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList<SeqType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup) {}

    // 0x1004f7d70
    BaseConfigTypeContainer<ObjType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList<ObjType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup) {}

    // 0x10050f020
    BaseConfigTypeContainer<NPCType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList<NPCType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup) {}

    // 0x100519f20
    BaseConfigTypeContainer<LocType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList<LocType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup) {}

    // 0x1005719a0
    BaseConfigTypeContainer<ParamType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList<ParamType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup) {}

    // 0x100577380
    BaseConfigTypeContainer<DBRowType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList<DBRowType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup) {}

    // 0x10057ce40
    BaseConfigTypeContainer<DBTableType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList<DBTableType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup) {}

    // 0x100582530
    BaseConfigTypeContainer<InvType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList<InvType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup) {}

    // 0x100587c00
    BaseConfigTypeContainer<VarBitType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList<VarBitType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup) {}

    // 0x10058bfd0
    BaseConfigTypeContainer<BASType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList<BASType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup) {}

    // 0x100591730
    BaseConfigTypeContainer<FloorUnderlayType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList<FloorUnderlayType>& baseTemplateConfigTypeList,
        Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
        const Js5ConfigGroup* js5ConfigGroup) {}

    // 0x100596de0
    BaseConfigTypeContainer<FloorOverlayType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList<FloorOverlayType>& baseTemplateConfigTypeList,
        Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
        const Js5ConfigGroup* js5ConfigGroup) {}

    // 0x10059c580
    BaseConfigTypeContainer<HitmarkType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList<HitmarkType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup) {}

    // 0x1005a15f0
    BaseConfigTypeContainer<HeadbarType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList<HeadbarType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup) {}

    // 0x1005a6ba0
    BaseConfigTypeContainer<IDKType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList<IDKType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup) {}

    // 0x1005ac530
    BaseConfigTypeContainer<MapElementType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList<MapElementType>& baseTemplateConfigTypeList,
        Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
        const Js5ConfigGroup* js5ConfigGroup) {}

    // 0x1005b2db0
    BaseConfigTypeContainer<MSIType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList<MSIType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup) {}

    // 0x1005b8830
    BaseConfigTypeContainer<QuestType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList<QuestType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup) {}

    // 0x1005be3c0
    BaseConfigTypeContainer<SeqGroupType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList<SeqGroupType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup) {}

    // 0x1005c3b00
    BaseConfigTypeContainer<LightType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList<LightType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup) {}

    // 0x1005c9280
    BaseConfigTypeContainer<SkyBoxType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList<SkyBoxType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup) {}

    // 0x1005cf010
    BaseConfigTypeContainer<WaterType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList<WaterType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup) {}

    // 0x1005d33d0
    BaseConfigTypeContainer<CursorType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList<CursorType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup) {}

    // 0x1005d8990
    BaseConfigTypeContainer<WorldAreaType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList<WorldAreaType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup) {}

    // 0x1005de2b0
    BaseConfigTypeContainer<EnumType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList<EnumType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup) {}

    // 0x1005e4610
    BaseConfigTypeContainer<EffectAnimType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList<EffectAnimType>& baseTemplateConfigTypeList,
        Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
        const Js5ConfigGroup* js5ConfigGroup) {}

    // 0x1005ea360
    BaseConfigTypeContainer<StructType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList<StructType>& baseTemplateConfigTypeList, Js5ResourceProvider& js5ResourceProvider,
        const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup) {}

    // 0x1005efa00
    BaseConfigTypeContainer<AchievementType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList<AchievementType>& baseTemplateConfigTypeList,
        Js5ResourceProvider& js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
        const Js5ConfigGroup* js5ConfigGroup) {}

} // namespace jag::game
