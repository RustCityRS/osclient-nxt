// libs/game/runetek5/config/BaseConfigTypeContainer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    template <typename...> // 30 instantiations, e.g. <AchievementType>, <BASType>, <CursorType>
    class BaseConfigTypeContainer {
    public:
        // virtual methods in vtable order
        virtual void __pure_slot_3() = 0;
        virtual void __pure_slot_4() = 0;
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>&,
                                Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<VarType>&, Js5ResourceProvider&, Js5ArchiveSettings const&,
                                Js5ConfigGroup const*);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<SeqType>&, Js5ResourceProvider&, Js5ArchiveSettings const&,
                                Js5ConfigGroup const*);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<ObjType>&, Js5ResourceProvider&, Js5ArchiveSettings const&,
                                Js5ConfigGroup const*);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<NPCType>&, Js5ResourceProvider&, Js5ArchiveSettings const&,
                                Js5ConfigGroup const*);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<LocType>&, Js5ResourceProvider&, Js5ArchiveSettings const&,
                                Js5ConfigGroup const*);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<ParamType>&, Js5ResourceProvider&, Js5ArchiveSettings const&,
                                Js5ConfigGroup const*);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<DBRowType>&, Js5ResourceProvider&, Js5ArchiveSettings const&,
                                Js5ConfigGroup const*);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<DBTableType>&, Js5ResourceProvider&,
                                Js5ArchiveSettings const&, Js5ConfigGroup const*);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<InvType>&, Js5ResourceProvider&, Js5ArchiveSettings const&,
                                Js5ConfigGroup const*);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<VarBitType>&, Js5ResourceProvider&,
                                Js5ArchiveSettings const&, Js5ConfigGroup const*);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<BASType>&, Js5ResourceProvider&, Js5ArchiveSettings const&,
                                Js5ConfigGroup const*);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<FloorUnderlayType>&, Js5ResourceProvider&,
                                Js5ArchiveSettings const&, Js5ConfigGroup const*);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<FloorOverlayType>&, Js5ResourceProvider&,
                                Js5ArchiveSettings const&, Js5ConfigGroup const*);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<HitmarkType>&, Js5ResourceProvider&,
                                Js5ArchiveSettings const&, Js5ConfigGroup const*);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<HeadbarType>&, Js5ResourceProvider&,
                                Js5ArchiveSettings const&, Js5ConfigGroup const*);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<IDKType>&, Js5ResourceProvider&, Js5ArchiveSettings const&,
                                Js5ConfigGroup const*);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<MapElementType>&, Js5ResourceProvider&,
                                Js5ArchiveSettings const&, Js5ConfigGroup const*);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<MSIType>&, Js5ResourceProvider&, Js5ArchiveSettings const&,
                                Js5ConfigGroup const*);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<QuestType>&, Js5ResourceProvider&, Js5ArchiveSettings const&,
                                Js5ConfigGroup const*);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<SeqGroupType>&, Js5ResourceProvider&,
                                Js5ArchiveSettings const&, Js5ConfigGroup const*);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<LightType>&, Js5ResourceProvider&, Js5ArchiveSettings const&,
                                Js5ConfigGroup const*);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<SkyBoxType>&, Js5ResourceProvider&,
                                Js5ArchiveSettings const&, Js5ConfigGroup const*);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<WaterType>&, Js5ResourceProvider&, Js5ArchiveSettings const&,
                                Js5ConfigGroup const*);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<CursorType>&, Js5ResourceProvider&,
                                Js5ArchiveSettings const&, Js5ConfigGroup const*);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<WorldAreaType>&, Js5ResourceProvider&,
                                Js5ArchiveSettings const&, Js5ConfigGroup const*);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<EnumType>&, Js5ResourceProvider&, Js5ArchiveSettings const&,
                                Js5ConfigGroup const*);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<EffectAnimType>&, Js5ResourceProvider&,
                                Js5ArchiveSettings const&, Js5ConfigGroup const*);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<StructType>&, Js5ResourceProvider&,
                                Js5ArchiveSettings const&, Js5ConfigGroup const*);
        BaseConfigTypeContainer(BaseTemplateConfigTypeList<AchievementType>&, Js5ResourceProvider&,
                                Js5ArchiveSettings const&, Js5ConfigGroup const*);
    };

    // 0x10013f7d0, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeContainer<oldscape::configdecoder::OldscapeVarType>::BaseConfigTypeContainer(
        BaseTemplateConfigTypeList* param_1, Js5ResourceProvider* param_2, Js5ArchiveSettings* param_3,
        Js5ConfigGroup* param_4) {
        *(undefined**)this = PTR_vtable_100ee8100 + 16;
        *(BaseTemplateConfigTypeList**)(this + 8) = param_1;
        *(Js5ResourceProvider**)(this + 16) = param_2;
        *(Js5ArchiveSettings**)(this + 24) = param_3;
        *(Js5ConfigGroup**)(this + 32) = param_4;
    }

    // 0x1004d85e0, 48 bytes, base-object constructor, inline, placed by class name
    // BaseConfigTypeContainer<VarType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList<VarType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeContainer<VarType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList* param_1,
                                                                   Js5ResourceProvider* param_2,
                                                                   Js5ArchiveSettings* param_3,
                                                                   Js5ConfigGroup* param_4) {
        *(undefined**)this = PTR_vtable_100ee80c8 + 16;
        *(BaseTemplateConfigTypeList**)(this + 8) = param_1;
        *(Js5ResourceProvider**)(this + 16) = param_2;
        *(Js5ArchiveSettings**)(this + 24) = param_3;
        *(Js5ConfigGroup**)(this + 32) = param_4;
    }

    // 0x1004ea880, 48 bytes, base-object constructor, inline, placed by class name
    // BaseConfigTypeContainer<SeqType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList<SeqType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeContainer<SeqType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList* param_1,
                                                                   Js5ResourceProvider* param_2,
                                                                   Js5ArchiveSettings* param_3,
                                                                   Js5ConfigGroup* param_4) {
        *(undefined**)this = PTR_vtable_100ee80c0 + 16;
        *(BaseTemplateConfigTypeList**)(this + 8) = param_1;
        *(Js5ResourceProvider**)(this + 16) = param_2;
        *(Js5ArchiveSettings**)(this + 24) = param_3;
        *(Js5ConfigGroup**)(this + 32) = param_4;
    }

    // 0x1004f7d70, 48 bytes, base-object constructor, inline, placed by class name
    // BaseConfigTypeContainer<ObjType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList<ObjType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeContainer<ObjType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList* param_1,
                                                                   Js5ResourceProvider* param_2,
                                                                   Js5ArchiveSettings* param_3,
                                                                   Js5ConfigGroup* param_4) {
        *(undefined**)this = PTR_vtable_100ee80b8 + 16;
        *(BaseTemplateConfigTypeList**)(this + 8) = param_1;
        *(Js5ResourceProvider**)(this + 16) = param_2;
        *(Js5ArchiveSettings**)(this + 24) = param_3;
        *(Js5ConfigGroup**)(this + 32) = param_4;
    }

    // 0x10050f020, 48 bytes, base-object constructor, inline, placed by class name
    // BaseConfigTypeContainer<NPCType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList<NPCType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeContainer<NPCType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList* param_1,
                                                                   Js5ResourceProvider* param_2,
                                                                   Js5ArchiveSettings* param_3,
                                                                   Js5ConfigGroup* param_4) {
        *(undefined**)this = PTR_vtable_100ee80b0 + 16;
        *(BaseTemplateConfigTypeList**)(this + 8) = param_1;
        *(Js5ResourceProvider**)(this + 16) = param_2;
        *(Js5ArchiveSettings**)(this + 24) = param_3;
        *(Js5ConfigGroup**)(this + 32) = param_4;
    }

    // 0x100519f20, 48 bytes, base-object constructor, inline, placed by class name
    // BaseConfigTypeContainer<LocType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList<LocType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeContainer<LocType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList* param_1,
                                                                   Js5ResourceProvider* param_2,
                                                                   Js5ArchiveSettings* param_3,
                                                                   Js5ConfigGroup* param_4) {
        *(undefined**)this = PTR_vtable_100ee80a0 + 16;
        *(BaseTemplateConfigTypeList**)(this + 8) = param_1;
        *(Js5ResourceProvider**)(this + 16) = param_2;
        *(Js5ArchiveSettings**)(this + 24) = param_3;
        *(Js5ConfigGroup**)(this + 32) = param_4;
    }

    // 0x1005719a0, 48 bytes, base-object constructor, inline, placed by class name
    // BaseConfigTypeContainer<ParamType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList<ParamType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeContainer<ParamType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList* param_1,
                                                                     Js5ResourceProvider* param_2,
                                                                     Js5ArchiveSettings* param_3,
                                                                     Js5ConfigGroup* param_4) {
        *(undefined**)this = PTR_vtable_100ee80e8 + 16;
        *(BaseTemplateConfigTypeList**)(this + 8) = param_1;
        *(Js5ResourceProvider**)(this + 16) = param_2;
        *(Js5ArchiveSettings**)(this + 24) = param_3;
        *(Js5ConfigGroup**)(this + 32) = param_4;
    }

    // 0x100577380, 48 bytes, base-object constructor, inline, placed by class name
    // BaseConfigTypeContainer<DBRowType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList<DBRowType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeContainer<DBRowType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList* param_1,
                                                                     Js5ResourceProvider* param_2,
                                                                     Js5ArchiveSettings* param_3,
                                                                     Js5ConfigGroup* param_4) {
        *(undefined**)this = PTR_vtable_100ee80d8 + 16;
        *(BaseTemplateConfigTypeList**)(this + 8) = param_1;
        *(Js5ResourceProvider**)(this + 16) = param_2;
        *(Js5ArchiveSettings**)(this + 24) = param_3;
        *(Js5ConfigGroup**)(this + 32) = param_4;
    }

    // 0x10057ce40, 48 bytes, base-object constructor, inline, placed by class name
    // BaseConfigTypeContainer<DBTableType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList<DBTableType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeContainer<DBTableType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList* param_1,
                                                                       Js5ResourceProvider* param_2,
                                                                       Js5ArchiveSettings* param_3,
                                                                       Js5ConfigGroup* param_4) {
        *(undefined**)this = PTR_vtable_100ee8038 + 16;
        *(BaseTemplateConfigTypeList**)(this + 8) = param_1;
        *(Js5ResourceProvider**)(this + 16) = param_2;
        *(Js5ArchiveSettings**)(this + 24) = param_3;
        *(Js5ConfigGroup**)(this + 32) = param_4;
    }

    // 0x100582530, 48 bytes, base-object constructor, inline, placed by class name
    // BaseConfigTypeContainer<InvType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList<InvType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeContainer<InvType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList* param_1,
                                                                   Js5ResourceProvider* param_2,
                                                                   Js5ArchiveSettings* param_3,
                                                                   Js5ConfigGroup* param_4) {
        *(undefined**)this = PTR_vtable_100ee8098 + 16;
        *(BaseTemplateConfigTypeList**)(this + 8) = param_1;
        *(Js5ResourceProvider**)(this + 16) = param_2;
        *(Js5ArchiveSettings**)(this + 24) = param_3;
        *(Js5ConfigGroup**)(this + 32) = param_4;
    }

    // 0x100587c00, 48 bytes, base-object constructor, inline, placed by class name
    // BaseConfigTypeContainer<VarBitType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList<VarBitType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeContainer<VarBitType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList* param_1,
                                                                      Js5ResourceProvider* param_2,
                                                                      Js5ArchiveSettings* param_3,
                                                                      Js5ConfigGroup* param_4) {
        *(undefined**)this = PTR_vtable_100ee8030 + 16;
        *(BaseTemplateConfigTypeList**)(this + 8) = param_1;
        *(Js5ResourceProvider**)(this + 16) = param_2;
        *(Js5ArchiveSettings**)(this + 24) = param_3;
        *(Js5ConfigGroup**)(this + 32) = param_4;
    }

    // 0x10058bfd0, 48 bytes, base-object constructor, inline, placed by class name
    // BaseConfigTypeContainer<BASType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList<BASType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeContainer<BASType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList* param_1,
                                                                   Js5ResourceProvider* param_2,
                                                                   Js5ArchiveSettings* param_3,
                                                                   Js5ConfigGroup* param_4) {
        *(undefined**)this = PTR_vtable_100ee8088 + 16;
        *(BaseTemplateConfigTypeList**)(this + 8) = param_1;
        *(Js5ResourceProvider**)(this + 16) = param_2;
        *(Js5ArchiveSettings**)(this + 24) = param_3;
        *(Js5ConfigGroup**)(this + 32) = param_4;
    }

    // 0x100591730, 48 bytes, base-object constructor, inline, placed by class name
    // BaseConfigTypeContainer<FloorUnderlayType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList<FloorUnderlayType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeContainer<FloorUnderlayType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList* param_1,
                                                                             Js5ResourceProvider* param_2,
                                                                             Js5ArchiveSettings* param_3,
                                                                             Js5ConfigGroup* param_4) {
        *(undefined**)this = PTR_vtable_100ee8080 + 16;
        *(BaseTemplateConfigTypeList**)(this + 8) = param_1;
        *(Js5ResourceProvider**)(this + 16) = param_2;
        *(Js5ArchiveSettings**)(this + 24) = param_3;
        *(Js5ConfigGroup**)(this + 32) = param_4;
    }

    // 0x100596de0, 48 bytes, base-object constructor, inline, placed by class name
    // BaseConfigTypeContainer<FloorOverlayType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList<FloorOverlayType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeContainer<FloorOverlayType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList* param_1,
                                                                            Js5ResourceProvider* param_2,
                                                                            Js5ArchiveSettings* param_3,
                                                                            Js5ConfigGroup* param_4) {
        *(undefined**)this = PTR_vtable_100ee8078 + 16;
        *(BaseTemplateConfigTypeList**)(this + 8) = param_1;
        *(Js5ResourceProvider**)(this + 16) = param_2;
        *(Js5ArchiveSettings**)(this + 24) = param_3;
        *(Js5ConfigGroup**)(this + 32) = param_4;
    }

    // 0x10059c580, 48 bytes, base-object constructor, inline, placed by class name
    // BaseConfigTypeContainer<HitmarkType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList<HitmarkType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeContainer<HitmarkType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList* param_1,
                                                                       Js5ResourceProvider* param_2,
                                                                       Js5ArchiveSettings* param_3,
                                                                       Js5ConfigGroup* param_4) {
        *(undefined**)this = PTR_vtable_100ee8048 + 16;
        *(BaseTemplateConfigTypeList**)(this + 8) = param_1;
        *(Js5ResourceProvider**)(this + 16) = param_2;
        *(Js5ArchiveSettings**)(this + 24) = param_3;
        *(Js5ConfigGroup**)(this + 32) = param_4;
    }

    // 0x1005a15f0, 48 bytes, base-object constructor, inline, placed by class name
    // BaseConfigTypeContainer<HeadbarType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList<HeadbarType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeContainer<HeadbarType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList* param_1,
                                                                       Js5ResourceProvider* param_2,
                                                                       Js5ArchiveSettings* param_3,
                                                                       Js5ConfigGroup* param_4) {
        *(undefined**)this = PTR_vtable_100ee8040 + 16;
        *(BaseTemplateConfigTypeList**)(this + 8) = param_1;
        *(Js5ResourceProvider**)(this + 16) = param_2;
        *(Js5ArchiveSettings**)(this + 24) = param_3;
        *(Js5ConfigGroup**)(this + 32) = param_4;
    }

    // 0x1005a6ba0, 48 bytes, base-object constructor, inline, placed by class name
    // BaseConfigTypeContainer<IDKType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList<IDKType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeContainer<IDKType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList* param_1,
                                                                   Js5ResourceProvider* param_2,
                                                                   Js5ArchiveSettings* param_3,
                                                                   Js5ConfigGroup* param_4) {
        *(undefined**)this = PTR_vtable_100ee8090 + 16;
        *(BaseTemplateConfigTypeList**)(this + 8) = param_1;
        *(Js5ResourceProvider**)(this + 16) = param_2;
        *(Js5ArchiveSettings**)(this + 24) = param_3;
        *(Js5ConfigGroup**)(this + 32) = param_4;
    }

    // 0x1005ac530, 48 bytes, base-object constructor, inline, placed by class name
    // BaseConfigTypeContainer<MapElementType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList<MapElementType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeContainer<MapElementType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList* param_1,
                                                                          Js5ResourceProvider* param_2,
                                                                          Js5ArchiveSettings* param_3,
                                                                          Js5ConfigGroup* param_4) {
        *(undefined**)this = PTR_vtable_100ee8068 + 16;
        *(BaseTemplateConfigTypeList**)(this + 8) = param_1;
        *(Js5ResourceProvider**)(this + 16) = param_2;
        *(Js5ArchiveSettings**)(this + 24) = param_3;
        *(Js5ConfigGroup**)(this + 32) = param_4;
    }

    // 0x1005b2db0, 48 bytes, base-object constructor, inline, placed by class name
    // BaseConfigTypeContainer<MSIType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList<MSIType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeContainer<MSIType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList* param_1,
                                                                   Js5ResourceProvider* param_2,
                                                                   Js5ArchiveSettings* param_3,
                                                                   Js5ConfigGroup* param_4) {
        *(undefined**)this = PTR_vtable_100ee80a8 + 16;
        *(BaseTemplateConfigTypeList**)(this + 8) = param_1;
        *(Js5ResourceProvider**)(this + 16) = param_2;
        *(Js5ArchiveSettings**)(this + 24) = param_3;
        *(Js5ConfigGroup**)(this + 32) = param_4;
    }

    // 0x1005b8830, 48 bytes, base-object constructor, inline, placed by class name
    // BaseConfigTypeContainer<QuestType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList<QuestType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeContainer<QuestType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList* param_1,
                                                                     Js5ResourceProvider* param_2,
                                                                     Js5ArchiveSettings* param_3,
                                                                     Js5ConfigGroup* param_4) {
        *(undefined**)this = PTR_vtable_100ee80f0 + 16;
        *(BaseTemplateConfigTypeList**)(this + 8) = param_1;
        *(Js5ResourceProvider**)(this + 16) = param_2;
        *(Js5ArchiveSettings**)(this + 24) = param_3;
        *(Js5ConfigGroup**)(this + 32) = param_4;
    }

    // 0x1005be3c0, 48 bytes, base-object constructor, inline, placed by class name
    // BaseConfigTypeContainer<SeqGroupType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList<SeqGroupType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeContainer<SeqGroupType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList* param_1,
                                                                        Js5ResourceProvider* param_2,
                                                                        Js5ArchiveSettings* param_3,
                                                                        Js5ConfigGroup* param_4) {
        *(undefined**)this = PTR_vtable_100ee8050 + 16;
        *(BaseTemplateConfigTypeList**)(this + 8) = param_1;
        *(Js5ResourceProvider**)(this + 16) = param_2;
        *(Js5ArchiveSettings**)(this + 24) = param_3;
        *(Js5ConfigGroup**)(this + 32) = param_4;
    }

    // 0x1005c3b00, 48 bytes, base-object constructor, inline, placed by class name
    // BaseConfigTypeContainer<LightType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList<LightType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeContainer<LightType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList* param_1,
                                                                     Js5ResourceProvider* param_2,
                                                                     Js5ArchiveSettings* param_3,
                                                                     Js5ConfigGroup* param_4) {
        *(undefined**)this = PTR_vtable_100ee80e0 + 16;
        *(BaseTemplateConfigTypeList**)(this + 8) = param_1;
        *(Js5ResourceProvider**)(this + 16) = param_2;
        *(Js5ArchiveSettings**)(this + 24) = param_3;
        *(Js5ConfigGroup**)(this + 32) = param_4;
    }

    // 0x1005c9280, 48 bytes, base-object constructor, inline, placed by class name
    // BaseConfigTypeContainer<SkyBoxType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList<SkyBoxType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeContainer<SkyBoxType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList* param_1,
                                                                      Js5ResourceProvider* param_2,
                                                                      Js5ArchiveSettings* param_3,
                                                                      Js5ConfigGroup* param_4) {
        *(undefined**)this = PTR_vtable_100ee8020 + 16;
        *(BaseTemplateConfigTypeList**)(this + 8) = param_1;
        *(Js5ResourceProvider**)(this + 16) = param_2;
        *(Js5ArchiveSettings**)(this + 24) = param_3;
        *(Js5ConfigGroup**)(this + 32) = param_4;
    }

    // 0x1005cf010, 48 bytes, base-object constructor, inline, placed by class name
    // BaseConfigTypeContainer<WaterType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList<WaterType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeContainer<WaterType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList* param_1,
                                                                     Js5ResourceProvider* param_2,
                                                                     Js5ArchiveSettings* param_3,
                                                                     Js5ConfigGroup* param_4) {
        *(undefined**)this = PTR_vtable_100ee80f8 + 16;
        *(BaseTemplateConfigTypeList**)(this + 8) = param_1;
        *(Js5ResourceProvider**)(this + 16) = param_2;
        *(Js5ArchiveSettings**)(this + 24) = param_3;
        *(Js5ConfigGroup**)(this + 32) = param_4;
    }

    // 0x1005d33d0, 48 bytes, base-object constructor, inline, placed by class name
    // BaseConfigTypeContainer<CursorType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList<CursorType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeContainer<CursorType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList* param_1,
                                                                      Js5ResourceProvider* param_2,
                                                                      Js5ArchiveSettings* param_3,
                                                                      Js5ConfigGroup* param_4) {
        *(undefined**)this = PTR_vtable_100ee8018 + 16;
        *(BaseTemplateConfigTypeList**)(this + 8) = param_1;
        *(Js5ResourceProvider**)(this + 16) = param_2;
        *(Js5ArchiveSettings**)(this + 24) = param_3;
        *(Js5ConfigGroup**)(this + 32) = param_4;
    }

    // 0x1005d8990, 48 bytes, base-object constructor, inline, placed by class name
    // BaseConfigTypeContainer<WorldAreaType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList<WorldAreaType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeContainer<WorldAreaType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList* param_1,
                                                                         Js5ResourceProvider* param_2,
                                                                         Js5ArchiveSettings* param_3,
                                                                         Js5ConfigGroup* param_4) {
        *(undefined**)this = PTR_vtable_100ee8058 + 16;
        *(BaseTemplateConfigTypeList**)(this + 8) = param_1;
        *(Js5ResourceProvider**)(this + 16) = param_2;
        *(Js5ArchiveSettings**)(this + 24) = param_3;
        *(Js5ConfigGroup**)(this + 32) = param_4;
    }

    // 0x1005de2b0, 48 bytes, base-object constructor, inline, placed by class name
    // BaseConfigTypeContainer<EnumType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList<EnumType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeContainer<EnumType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList* param_1,
                                                                    Js5ResourceProvider* param_2,
                                                                    Js5ArchiveSettings* param_3,
                                                                    Js5ConfigGroup* param_4) {
        *(undefined**)this = PTR_vtable_100ee80d0 + 16;
        *(BaseTemplateConfigTypeList**)(this + 8) = param_1;
        *(Js5ResourceProvider**)(this + 16) = param_2;
        *(Js5ArchiveSettings**)(this + 24) = param_3;
        *(Js5ConfigGroup**)(this + 32) = param_4;
    }

    // 0x1005e4610, 48 bytes, base-object constructor, inline, placed by class name
    // BaseConfigTypeContainer<EffectAnimType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList<EffectAnimType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeContainer<EffectAnimType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList* param_1,
                                                                          Js5ResourceProvider* param_2,
                                                                          Js5ArchiveSettings* param_3,
                                                                          Js5ConfigGroup* param_4) {
        *(undefined**)this = PTR_vtable_100ee8060 + 16;
        *(BaseTemplateConfigTypeList**)(this + 8) = param_1;
        *(Js5ResourceProvider**)(this + 16) = param_2;
        *(Js5ArchiveSettings**)(this + 24) = param_3;
        *(Js5ConfigGroup**)(this + 32) = param_4;
    }

    // 0x1005ea360, 48 bytes, base-object constructor, inline, placed by class name
    // BaseConfigTypeContainer<StructType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList<StructType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeContainer<StructType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList* param_1,
                                                                      Js5ResourceProvider* param_2,
                                                                      Js5ArchiveSettings* param_3,
                                                                      Js5ConfigGroup* param_4) {
        *(undefined**)this = PTR_vtable_100ee8028 + 16;
        *(BaseTemplateConfigTypeList**)(this + 8) = param_1;
        *(Js5ResourceProvider**)(this + 16) = param_2;
        *(Js5ArchiveSettings**)(this + 24) = param_3;
        *(Js5ConfigGroup**)(this + 32) = param_4;
    }

    // 0x1005efa00, 48 bytes, base-object constructor, inline, placed by class name
    // BaseConfigTypeContainer<AchievementType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList<AchievementType>&, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeContainer<AchievementType>::BaseConfigTypeContainer(BaseTemplateConfigTypeList* param_1,
                                                                           Js5ResourceProvider* param_2,
                                                                           Js5ArchiveSettings* param_3,
                                                                           Js5ConfigGroup* param_4) {
        *(undefined**)this = PTR_vtable_100ee8070 + 16;
        *(BaseTemplateConfigTypeList**)(this + 8) = param_1;
        *(Js5ResourceProvider**)(this + 16) = param_2;
        *(Js5ArchiveSettings**)(this + 24) = param_3;
        *(Js5ConfigGroup**)(this + 32) = param_4;
    }

} // namespace jag::game
