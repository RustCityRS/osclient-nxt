// libs/game/runetek5/config/Js5ConfigGroup.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class BaseConfigTypeList {
    public:
        class DebugStats;
        // virtual methods in vtable order
        virtual ~BaseConfigTypeList();
        unsigned int GetGroupCount() const;
        int GetEntryCount() const;
        unsigned int GetMaxEntryIndex() const;
        ModeGame* GetModeGame() const;
        Js5ConfigGroup* GetConfigGroup() const;
        Js5ResourceProvider* GetResourceProvider() const;
        void GetGroup(shared_ptr<PacketT<Array<unsigned char>>>& arg1, const Js5ArchiveSettings& js5ArchiveSettings,
                      unsigned int arg3, const Priority* priority, bool arg5, bool arg6);
        Language* GetLanguage() const;
        BaseConfigTypeList(const ModeGame* modeGame, const Language* language, Js5ResourceProvider& js5ResourceProvider,
                           const Js5ArchiveSettings& js5ArchiveSettings, const Js5ConfigGroup* js5ConfigGroup);
        unsigned int GetClientGroupID(int arg1) const;
        unsigned int GetClientFileID(int arg1) const;
        void GetFile(shared_ptr<PacketT<Array<unsigned char>>>& arg1, const Js5ArchiveSettings& js5ArchiveSettings,
                     unsigned int arg3, const Priority* priority, bool arg5);
        int GetProgressTarget() const;
        long GetLoadTime() const;

    private:
        AABB field_8;
        unsigned long long field_32;
        uint64_t field_40;
        ModeGame* m_pModeGame;
        Language* m_pLanguage;
        Js5ResourceProvider* m_pResourceProvider;
        Js5ArchiveSettings* field_72;
        Js5ConfigGroup* m_pConfigGroup;
        int m_entryCount;
        unsigned int m_maxEntryIndex;
        unsigned int m_groupCount;
        uint8_t _unknown_100[4];
    };

    class BaseConfigTypeList::DebugStats {
    public:
        DebugStats();
    };

    class Js5ConfigGroup {
    public:
        unsigned int GetGroupBitSize() const;
        unsigned int GetGroupID() const;
        Js5ConfigGroup(unsigned int arg1, unsigned int arg2);
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
        uint32_t IgnoreEntryCount() const;
        void GetByGroupID(unsigned int arg1);
        uint8_t* GetTypeName(const Js5ConfigGroup* js5ConfigGroup);
        void GetMaximumConfigGroupID();
        Js5ConfigGroup const* GetConfigGroup<FloorOverlayType>();
        Js5ConfigGroup const* GetConfigGroup<FloorUnderlayType>();
        Js5ConfigGroup const* GetConfigGroup<SeqType>();
        static Js5ConfigGroup const* FLUTYPE;            // = &enumArray[1] /* Js5ConfigGroup(1, 0) */
        static Js5ConfigGroup const* HUNTTYPE;           // = &enumArray[2] /* Js5ConfigGroup(2, 0) */
        static Js5ConfigGroup const* IDKTYPE;            // = &enumArray[3] /* Js5ConfigGroup(3, 0) */
        static Js5ConfigGroup const* FLOTYPE;            // = &enumArray[4] /* Js5ConfigGroup(4, 0) */
        static Js5ConfigGroup const* INVTYPE;            // = &enumArray[5] /* Js5ConfigGroup(5, 0) */
        static Js5ConfigGroup const* LOCTYPE;            // = &enumArray[6] /* Js5ConfigGroup(6, 8) */
        static Js5ConfigGroup const* MESANIMTYPE;        // = &enumArray[7] /* Js5ConfigGroup(7, 0) */
        static Js5ConfigGroup const* ENUMTYPE;           // = &enumArray[8] /* Js5ConfigGroup(8, 8) */
        static Js5ConfigGroup const* NPCTYPE;            // = &enumArray[9] /* Js5ConfigGroup(9, 7) */
        static Js5ConfigGroup const* OBJTYPE;            // = &enumArray[10] /* Js5ConfigGroup(10, 8) */
        static Js5ConfigGroup const* PARAMTYPE;          // = &enumArray[11] /* Js5ConfigGroup(11, 0) */
        static Js5ConfigGroup const* SEQTYPE;            // = &enumArray[12] /* Js5ConfigGroup(12, 7) */
        static Js5ConfigGroup const* SPOTTYPE;           // = &enumArray[13] /* Js5ConfigGroup(13, 8) */
        static Js5ConfigGroup const* CATEGORY;           // = &enumArray[17] /* Js5ConfigGroup(17, 0) */
        static Js5ConfigGroup const* AREATYPE;           // = &enumArray[18] /* Js5ConfigGroup(18, 0) */
        static Js5ConfigGroup const* STRUCTTYPE;         // = &enumArray[26] /* Js5ConfigGroup(26, 5) */
        static Js5ConfigGroup const* CHATPHRASETYPE;     // = &enumArray[27] /* Js5ConfigGroup(27, 0) */
        static Js5ConfigGroup const* CHATCATTYPE;        // = &enumArray[28] /* Js5ConfigGroup(28, 0) */
        static Js5ConfigGroup const* SKYBOXTYPE;         // = &enumArray[29] /* Js5ConfigGroup(29, 0) */
        static Js5ConfigGroup const* SKYDECORTYPE;       // = &enumArray[30] /* Js5ConfigGroup(30, 0) */
        static Js5ConfigGroup const* LIGHTTYPE;          // = &enumArray[31] /* Js5ConfigGroup(31, 0) */
        static Js5ConfigGroup const* BASTYPE;            // = &enumArray[32] /* Js5ConfigGroup(32, 0) */
        static Js5ConfigGroup const* CURSORTYPE;         // = &enumArray[33] /* Js5ConfigGroup(33, 0) */
        static Js5ConfigGroup const* MSITYPE;            // = &enumArray[34] /* Js5ConfigGroup(34, 0) */
        static Js5ConfigGroup const* QUESTTYPE;          // = &enumArray[35] /* Js5ConfigGroup(35, 0) */
        static Js5ConfigGroup const* MELTYPE;            // = &enumArray[36] /* Js5ConfigGroup(36, 0) */
        static Js5ConfigGroup const* DBTABLETYPE;        // = &enumArray[40] /* Js5ConfigGroup(40, 0) */
        static Js5ConfigGroup const* DBROWTYPE;          // = &enumArray[41] /* Js5ConfigGroup(41, 0) */
        static Js5ConfigGroup const* CONTROLLERTYPE;     // = &enumArray[42] /* Js5ConfigGroup(42, 0) */
        static Js5ConfigGroup const* HITMARKTYPE;        // = &enumArray[46] /* Js5ConfigGroup(46, 0) */
        static Js5ConfigGroup const* VARCLANTYPE;        // = &enumArray[47] /* Js5ConfigGroup(47, 0) */
        static Js5ConfigGroup const* ITEMCODETYPE;       // = &enumArray[48] /* Js5ConfigGroup(48, 0) */
        static Js5ConfigGroup const* CATEGORYTYPE;       // = &enumArray[49] /* Js5ConfigGroup(49, 0) */
        static Js5ConfigGroup const* INPUTTYPE;          // = &enumArray[52] /* Js5ConfigGroup(52, 0) */
        static Js5ConfigGroup const* VARCLANSETTINGTYPE; // = &enumArray[54] /* Js5ConfigGroup(54, 0) */
        static Js5ConfigGroup const* VAR_PLAYER;         // = &enumArray[60] /* Js5ConfigGroup(60, 0) */
        static Js5ConfigGroup const* VAR_NPC;            // = &enumArray[61] /* Js5ConfigGroup(61, 0) */
        static Js5ConfigGroup const* VAR_CLIENT;         // = &enumArray[62] /* Js5ConfigGroup(62, 0) */
        static Js5ConfigGroup const* VAR_WORLD;          // = &enumArray[63] /* Js5ConfigGroup(63, 0) */
        static Js5ConfigGroup const* VAR_REGION;         // = &enumArray[64] /* Js5ConfigGroup(64, 0) */
        static Js5ConfigGroup const* VAR_OBJECT;         // = &enumArray[65] /* Js5ConfigGroup(65, 0) */
        static Js5ConfigGroup const* VAR_CLAN;           // = &enumArray[66] /* Js5ConfigGroup(66, 0) */
        static Js5ConfigGroup const* VAR_CLAN_SETTING;   // = &enumArray[67] /* Js5ConfigGroup(67, 0) */
        static Js5ConfigGroup const* VAR_CONTROLLER;     // = &enumArray[68] /* Js5ConfigGroup(68, 0) */
        static Js5ConfigGroup const* VAR_BIT;            // = &enumArray[69] /* Js5ConfigGroup(69, 0) */
        static Js5ConfigGroup const* GAMELOGEVENT;       // = &enumArray[70] /* Js5ConfigGroup(70, 0) */
        static Js5ConfigGroup const* HEADBARTYPE;        // = &enumArray[72] /* Js5ConfigGroup(72, 0) */
        static Js5ConfigGroup const* VAR_GLOBAL;         // = &enumArray[75] /* Js5ConfigGroup(75, 0) */
        static Js5ConfigGroup const* WATERTYPE;          // = &enumArray[76] /* Js5ConfigGroup(76, 0) */
        static Js5ConfigGroup const* SEQGROUPTYPE;       // = &enumArray[77] /* Js5ConfigGroup(77, 0) */
        static Js5ConfigGroup const* VAR_PLAYER_GROUP;   // = &enumArray[80] /* Js5ConfigGroup(80, 0) */
        static Js5ConfigGroup const* WORLDAREATYPE;      // = &enumArray[83] /* Js5ConfigGroup(83, 0) */
        static Js5ConfigGroup const* ACHIEVEMENTTYPE;    // = &enumArray[85] /* Js5ConfigGroup(85, 7) */
        static Js5ConfigGroup enumArray[86];             // initialised in its definition

    private:
        unsigned int m_groupID;
        unsigned int m_groupBitSize;
        uint8_t _unknown_8[4];
    };

    // 0x1003d48d0
    Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<MapElementType>() {
        return (Js5ConfigGroup*)MELTYPE;
    }

    // 0x1003d50e0
    Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<MSIType>() {
        return (Js5ConfigGroup*)MSITYPE;
    }

    // 0x1003e58c0
    Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<SkyBoxType>() {
        return (Js5ConfigGroup*)SKYBOXTYPE;
    }

    // 0x1004033e0
    Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<ObjType>() {
        return (Js5ConfigGroup*)OBJTYPE;
    }

    // 0x100406170
    Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<EnumType>() {
        return (Js5ConfigGroup*)ENUMTYPE;
    }

    // 0x1004087e0
    Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<EffectAnimType>() {
        return (Js5ConfigGroup*)SPOTTYPE;
    }

    // 0x100422160
    Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<WaterType>() {
        return (Js5ConfigGroup*)WATERTYPE;
    }

    // 0x100426bf0
    Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<NPCType>() {
        return (Js5ConfigGroup*)NPCTYPE;
    }

    // 0x100426d20
    Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<BASType>() {
        return (Js5ConfigGroup*)BASTYPE;
    }

    // 0x100433350
    Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<HitmarkType>() {
        return (Js5ConfigGroup*)HITMARKTYPE;
    }

    // 0x100434030
    Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<HeadbarType>() {
        return (Js5ConfigGroup*)HEADBARTYPE;
    }

    // 0x100437f50
    Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<LocType>() {
        return (Js5ConfigGroup*)LOCTYPE;
    }

    // 0x10044ef60
    Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<LightType>() {
        return (Js5ConfigGroup*)LIGHTTYPE;
    }

    // 0x100455c80
    Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<WorldAreaType>() {
        return (Js5ConfigGroup*)WORLDAREATYPE;
    }

    // 0x10049bd30
    Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<IDKType>() {
        return (Js5ConfigGroup*)IDKTYPE;
    }

    // 0x1004bf970
    Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<InvType>() {
        return (Js5ConfigGroup*)INVTYPE;
    }

    // 0x1004d6990
    Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<QuestType>() {
        return (Js5ConfigGroup*)QUESTTYPE;
    }

    // 0x1004f3660
    Language* BaseConfigTypeList::GetLanguage() const {
        return m_pPriority;
    }

    // 0x100514ad0
    Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<ParamType>() {
        return (Js5ConfigGroup*)PARAMTYPE;
    }

    // 0x1005681f0
    void Js5ConfigGroup::GetMaximumConfigGroupID() {
        return 85;
    }

    // 0x10056a050
    int BaseConfigTypeList::GetProgressTarget() const {
        return m_groupCount + m_entryCount;
    }

    // 0x10056a060
    long BaseConfigTypeList::GetLoadTime() const {
        if (field_40 == 0) {
            return 0;
        }
        return field_40 - field_32;
    }

    // 0x100636af0
    Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<FloorOverlayType>() {
        return (Js5ConfigGroup*)FLOTYPE;
    }

    // 0x100636f80
    Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<FloorUnderlayType>() {
        return (Js5ConfigGroup*)FLUTYPE;
    }

    // 0x100670ca0
    Js5ConfigGroup const* Js5ConfigGroup::GetConfigGroup<SeqType>() {
        return (Js5ConfigGroup*)SEQTYPE;
    }

} // namespace jag::game
