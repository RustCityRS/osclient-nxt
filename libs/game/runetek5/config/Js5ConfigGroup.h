// libs/game/runetek5/config/Js5ConfigGroup.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class BaseConfigTypeList {
    public:
        class DebugStats;
        // virtual methods in vtable order
        virtual ~BaseConfigTypeList();
        GetGroupCount() const;
        GetEntryCount() const;
        GetMaxEntryIndex() const;
        GetModeGame() const;
        Js5ConfigGroup* GetConfigGroup() const;
        GetResourceProvider() const;
        void GetGroup(shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>&, Js5ArchiveSettings const&,
                      unsigned int, Priority const*, bool, bool);
        GetLanguage() const;
        BaseConfigTypeList(ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&,
                           Js5ConfigGroup const*);
        uint GetClientGroupID(int) const;
        uint GetClientFileID(int) const;
        void GetFile(shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>&, Js5ArchiveSettings const&,
                     unsigned int, Priority const*, bool);
        int GetProgressTarget() const;
        long GetLoadTime() const;

        // data members, from how the methods use this: 104 bytes
        undefined** field_0;            // offset 0, vtable pointer
        AABB field_8;                   // offset 8
        ulonglong field_32;             // offset 32
        undefined8 field_40;            // offset 40
        ModeGame* field_48;             // offset 48
        Language* field_56;             // offset 56
        Js5ResourceProvider* field_64;  // offset 64
        Js5ArchiveSettings* field_72;   // offset 72
        Js5ConfigGroup* m_pConfigGroup; // offset 80
        int field_88;                   // offset 88
        uint field_92;                  // offset 92
        uint field_96;                  // offset 96
        char _unknown_100[4];
    };

    class BaseConfigTypeList::DebugStats {
    public:
        DebugStats();
    };

    class Js5ConfigGroup {
    public:
        GetGroupBitSize() const;
        GetGroupID() const;
        Js5ConfigGroup(unsigned int, unsigned int);
        Js5ConfigGroup const* GetConfigGroup<MapElementType>();
        Js5ConfigGroup const* GetConfigGroup<MSIType>();
        Js5ConfigGroup const* GetConfigGroup<SkyBoxType>();
        Js5ConfigGroup const* GetConfigGroup<ObjType>();
        Js5ConfigGroup const* GetConfigGroup<EnumType>();
        Js5ConfigGroup const* GetConfigGroup<EffectAnimType>();
        Js5ConfigGroup const* GetConfigGroup<WaterType>();
        Js5ConfigGroup const* GetConfigGroup<NPCType>();
        Js5ConfigGroup const* GetConfigGroup<BASType>();
        Js5ConfigGroup const* GetConfigGroup<HitmarkType>();
        Js5ConfigGroup const* GetConfigGroup<HeadbarType>();
        Js5ConfigGroup const* GetConfigGroup<LocType>();
        Js5ConfigGroup const* GetConfigGroup<LightType>();
        Js5ConfigGroup const* GetConfigGroup<WorldAreaType>();
        Js5ConfigGroup const* GetConfigGroup<IDKType>();
        Js5ConfigGroup const* GetConfigGroup<InvType>();
        Js5ConfigGroup const* GetConfigGroup<QuestType>();
        Js5ConfigGroup const* GetConfigGroup<ParamType>();
        IgnoreEntryCount() const;
        void GetByGroupID(unsigned int);
        GetTypeName(Js5ConfigGroup const*);
        GetMaximumConfigGroupID();
        Js5ConfigGroup const* GetConfigGroup<FloorOverlayType>();
        Js5ConfigGroup const* GetConfigGroup<FloorUnderlayType>();
        Js5ConfigGroup const* GetConfigGroup<SeqType>();
        static Js5ConfigGroup const* /* 8 bytes */ FLUTYPE;            // = &enumArray[1] /* Js5ConfigGroup(1, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ HUNTTYPE;           // = &enumArray[2] /* Js5ConfigGroup(2, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ IDKTYPE;            // = &enumArray[3] /* Js5ConfigGroup(3, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ FLOTYPE;            // = &enumArray[4] /* Js5ConfigGroup(4, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ INVTYPE;            // = &enumArray[5] /* Js5ConfigGroup(5, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ LOCTYPE;            // = &enumArray[6] /* Js5ConfigGroup(6, 8) */
        static Js5ConfigGroup const* /* 8 bytes */ MESANIMTYPE;        // = &enumArray[7] /* Js5ConfigGroup(7, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ ENUMTYPE;           // = &enumArray[8] /* Js5ConfigGroup(8, 8) */
        static Js5ConfigGroup const* /* 8 bytes */ NPCTYPE;            // = &enumArray[9] /* Js5ConfigGroup(9, 7) */
        static Js5ConfigGroup const* /* 8 bytes */ OBJTYPE;            // = &enumArray[10] /* Js5ConfigGroup(10, 8) */
        static Js5ConfigGroup const* /* 8 bytes */ PARAMTYPE;          // = &enumArray[11] /* Js5ConfigGroup(11, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ SEQTYPE;            // = &enumArray[12] /* Js5ConfigGroup(12, 7) */
        static Js5ConfigGroup const* /* 8 bytes */ SPOTTYPE;           // = &enumArray[13] /* Js5ConfigGroup(13, 8) */
        static Js5ConfigGroup const* /* 8 bytes */ CATEGORY;           // = &enumArray[17] /* Js5ConfigGroup(17, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ AREATYPE;           // = &enumArray[18] /* Js5ConfigGroup(18, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ STRUCTTYPE;         // = &enumArray[26] /* Js5ConfigGroup(26, 5) */
        static Js5ConfigGroup const* /* 8 bytes */ CHATPHRASETYPE;     // = &enumArray[27] /* Js5ConfigGroup(27, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ CHATCATTYPE;        // = &enumArray[28] /* Js5ConfigGroup(28, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ SKYBOXTYPE;         // = &enumArray[29] /* Js5ConfigGroup(29, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ SKYDECORTYPE;       // = &enumArray[30] /* Js5ConfigGroup(30, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ LIGHTTYPE;          // = &enumArray[31] /* Js5ConfigGroup(31, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ BASTYPE;            // = &enumArray[32] /* Js5ConfigGroup(32, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ CURSORTYPE;         // = &enumArray[33] /* Js5ConfigGroup(33, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ MSITYPE;            // = &enumArray[34] /* Js5ConfigGroup(34, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ QUESTTYPE;          // = &enumArray[35] /* Js5ConfigGroup(35, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ MELTYPE;            // = &enumArray[36] /* Js5ConfigGroup(36, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ DBTABLETYPE;        // = &enumArray[40] /* Js5ConfigGroup(40, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ DBROWTYPE;          // = &enumArray[41] /* Js5ConfigGroup(41, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ CONTROLLERTYPE;     // = &enumArray[42] /* Js5ConfigGroup(42, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ HITMARKTYPE;        // = &enumArray[46] /* Js5ConfigGroup(46, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ VARCLANTYPE;        // = &enumArray[47] /* Js5ConfigGroup(47, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ ITEMCODETYPE;       // = &enumArray[48] /* Js5ConfigGroup(48, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ CATEGORYTYPE;       // = &enumArray[49] /* Js5ConfigGroup(49, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ INPUTTYPE;          // = &enumArray[52] /* Js5ConfigGroup(52, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ VARCLANSETTINGTYPE; // = &enumArray[54] /* Js5ConfigGroup(54, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ VAR_PLAYER;         // = &enumArray[60] /* Js5ConfigGroup(60, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ VAR_NPC;            // = &enumArray[61] /* Js5ConfigGroup(61, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ VAR_CLIENT;         // = &enumArray[62] /* Js5ConfigGroup(62, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ VAR_WORLD;          // = &enumArray[63] /* Js5ConfigGroup(63, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ VAR_REGION;         // = &enumArray[64] /* Js5ConfigGroup(64, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ VAR_OBJECT;         // = &enumArray[65] /* Js5ConfigGroup(65, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ VAR_CLAN;           // = &enumArray[66] /* Js5ConfigGroup(66, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ VAR_CLAN_SETTING;   // = &enumArray[67] /* Js5ConfigGroup(67, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ VAR_CONTROLLER;     // = &enumArray[68] /* Js5ConfigGroup(68, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ VAR_BIT;            // = &enumArray[69] /* Js5ConfigGroup(69, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ GAMELOGEVENT;       // = &enumArray[70] /* Js5ConfigGroup(70, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ HEADBARTYPE;        // = &enumArray[72] /* Js5ConfigGroup(72, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ VAR_GLOBAL;         // = &enumArray[75] /* Js5ConfigGroup(75, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ WATERTYPE;          // = &enumArray[76] /* Js5ConfigGroup(76, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ SEQGROUPTYPE;       // = &enumArray[77] /* Js5ConfigGroup(77, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ VAR_PLAYER_GROUP;   // = &enumArray[80] /* Js5ConfigGroup(80, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ WORLDAREATYPE;      // = &enumArray[83] /* Js5ConfigGroup(83, 0) */
        static Js5ConfigGroup const* /* 8 bytes */ ACHIEVEMENTTYPE;    // = &enumArray[85] /* Js5ConfigGroup(85, 7) */
        static Js5ConfigGroup /* 688 bytes */ enumArray[86];           // initialised in its definition

        // data members, from how the methods use this: 12 bytes
        int field_0; // offset 0
        char _unknown_4[8];
    };

    // 0x1003d48d0, 16 bytes, inline, placed by class name
    // Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<MapElementType>()
    Js5ConfigGroup* Js5ConfigGroup::GetConfigGroup<MapElementType>() {
        return (Js5ConfigGroup*)MELTYPE;
    }

    // 0x1003d50e0, 16 bytes, inline, placed by class name
    // Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<MSIType>()
    Js5ConfigGroup* Js5ConfigGroup::GetConfigGroup<MSIType>() {
        return (Js5ConfigGroup*)MSITYPE;
    }

    // 0x1003e58c0, 16 bytes, inline, placed by class name
    // Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<SkyBoxType>()
    Js5ConfigGroup* Js5ConfigGroup::GetConfigGroup<SkyBoxType>() {
        return (Js5ConfigGroup*)SKYBOXTYPE;
    }

    // 0x1004033e0, 16 bytes, inline, placed by class name
    // Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<ObjType>()
    Js5ConfigGroup* Js5ConfigGroup::GetConfigGroup<ObjType>() {
        return (Js5ConfigGroup*)OBJTYPE;
    }

    // 0x100406170, 16 bytes, inline, placed by class name
    // Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<EnumType>()
    Js5ConfigGroup* Js5ConfigGroup::GetConfigGroup<EnumType>() {
        return (Js5ConfigGroup*)ENUMTYPE;
    }

    // 0x1004087e0, 16 bytes, inline, placed by class name
    // Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<EffectAnimType>()
    Js5ConfigGroup* Js5ConfigGroup::GetConfigGroup<EffectAnimType>() {
        return (Js5ConfigGroup*)SPOTTYPE;
    }

    // 0x100422160, 16 bytes, inline, placed by class name
    // Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<WaterType>()
    Js5ConfigGroup* Js5ConfigGroup::GetConfigGroup<WaterType>() {
        return (Js5ConfigGroup*)WATERTYPE;
    }

    // 0x100426bf0, 16 bytes, inline, placed by class name
    // Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<NPCType>()
    Js5ConfigGroup* Js5ConfigGroup::GetConfigGroup<NPCType>() {
        return (Js5ConfigGroup*)NPCTYPE;
    }

    // 0x100426d20, 16 bytes, inline, placed by class name
    // Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<BASType>()
    Js5ConfigGroup* Js5ConfigGroup::GetConfigGroup<BASType>() {
        return (Js5ConfigGroup*)BASTYPE;
    }

    // 0x100433350, 16 bytes, inline, placed by class name
    // Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<HitmarkType>()
    Js5ConfigGroup* Js5ConfigGroup::GetConfigGroup<HitmarkType>() {
        return (Js5ConfigGroup*)HITMARKTYPE;
    }

    // 0x100434030, 16 bytes, inline, placed by class name
    // Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<HeadbarType>()
    Js5ConfigGroup* Js5ConfigGroup::GetConfigGroup<HeadbarType>() {
        return (Js5ConfigGroup*)HEADBARTYPE;
    }

    // 0x100437f50, 16 bytes, inline, placed by class name
    // Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<LocType>()
    Js5ConfigGroup* Js5ConfigGroup::GetConfigGroup<LocType>() {
        return (Js5ConfigGroup*)LOCTYPE;
    }

    // 0x10044ef60, 16 bytes, inline, placed by class name
    // Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<LightType>()
    Js5ConfigGroup* Js5ConfigGroup::GetConfigGroup<LightType>() {
        return (Js5ConfigGroup*)LIGHTTYPE;
    }

    // 0x100455c80, 16 bytes, inline, placed by class name
    // Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<WorldAreaType>()
    Js5ConfigGroup* Js5ConfigGroup::GetConfigGroup<WorldAreaType>() {
        return (Js5ConfigGroup*)WORLDAREATYPE;
    }

    // 0x10049bd30, 16 bytes, inline, placed by class name
    // Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<IDKType>()
    Js5ConfigGroup* Js5ConfigGroup::GetConfigGroup<IDKType>() {
        return (Js5ConfigGroup*)IDKTYPE;
    }

    // 0x1004bf970, 16 bytes, inline, placed by class name
    // Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<InvType>()
    Js5ConfigGroup* Js5ConfigGroup::GetConfigGroup<InvType>() {
        return (Js5ConfigGroup*)INVTYPE;
    }

    // 0x1004d6990, 16 bytes, inline, placed by class name
    // Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<QuestType>()
    Js5ConfigGroup* Js5ConfigGroup::GetConfigGroup<QuestType>() {
        return (Js5ConfigGroup*)QUESTTYPE;
    }

    // 0x1004f3660, 16 bytes, inline, placed by class header (inline)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // BaseConfigTypeList::GetLanguage() const
    /* Js5HTTPQueueRequest::GetPriority() const */

    undefined8 Js5HTTPQueueRequest::GetPriority() {
        return m_priority;
    }

    // 0x100514ad0, 16 bytes, inline, placed by class name
    // Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<ParamType>()
    Js5ConfigGroup* Js5ConfigGroup::GetConfigGroup<ParamType>() {
        return (Js5ConfigGroup*)PARAMTYPE;
    }

    // 0x1005681f0, 16 bytes, inline, placed by class name and debug map
    // Js5ConfigGroup::GetMaximumConfigGroupID()
    undefined8 Js5ConfigGroup::GetMaximumConfigGroupID() {
        return 85;
    }

    // 0x10056a050, 16 bytes, inline, placed by debug map only (low confidence)
    // BaseConfigTypeList::GetProgressTarget() const
    int BaseConfigTypeList::GetProgressTarget() {
        return field_96 + field_88;
    }

    // 0x10056a060, 32 bytes, inline, placed by debug map only (low confidence)
    // BaseConfigTypeList::GetLoadTime() const
    long BaseConfigTypeList::GetLoadTime() {
        if (field_40 == 0) {
            return 0;
        }
        return field_40 - field_32;
    }

    // 0x100636af0, 16 bytes, inline, placed by class name
    // Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<FloorOverlayType>()
    Js5ConfigGroup* Js5ConfigGroup::GetConfigGroup<FloorOverlayType>() {
        return (Js5ConfigGroup*)FLOTYPE;
    }

    // 0x100636f80, 16 bytes, inline, placed by class name
    // Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<FloorUnderlayType>()
    Js5ConfigGroup* Js5ConfigGroup::GetConfigGroup<FloorUnderlayType>() {
        return (Js5ConfigGroup*)FLUTYPE;
    }

    // 0x100670ca0, 16 bytes, inline, placed by class name
    // Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<SeqType>()
    Js5ConfigGroup* Js5ConfigGroup::GetConfigGroup<SeqType>() {
        return (Js5ConfigGroup*)SEQTYPE;
    }

} // namespace jag::game
