// libs/game/runetek5/config/achievementtype/AchievementType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class AchievementType {
    public:
        // virtual methods in vtable order
        virtual ~AchievementType();
        virtual DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        virtual void PostDecode();
        uint GetRuneScore() const;
        long GetTotalPrereqCount() const;
        long GetTotalRequirementCount() const;
        void ValidateReqGroupItemsToComplete();
        void CountReqGroupItemCount();
        GetProgress(PlayerGameState&, PlayerVarDomain&, int);
        int
        GetProgress(PlayerGameState&, PlayerVarDomain&, int,
                    eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, BucketAllocatorEASTL, false>&);
        ulong AreGroupsCompleted(eastl::fixed_vector<bool, 127ul, true, eastl::allocator> const&, int);
        bool InGracePeriod(int) const;
        ulong PrereqsAreComplete(
            PlayerGameState&, PlayerVarDomain&, int,
            eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, BucketAllocatorEASTL, false>&);
        ulong PrereqCompletionTest(eastl::fixed_vector<int, 128ul, true, eastl::allocator> const&);
        PrereqsAreComplete(PlayerGameState&, PlayerVarDomain&, int);
        int CalculateRuneScore(PlayerGameState&, PlayerVarDomain&, AchievementTypeList&);
        void GetNumPrereqGroups() const;
        ulong IsPrereqGroupComplete(PlayerGameState&, PlayerVarDomain&, int, int) const;
        bool IsStatPrereqMet(PlayerGameState&, int, int);
        bool IsVarpPrereqMet(PlayerVarDomain&, int, int);
        bool IsVarbitPrereqMet(PlayerVarDomain&, int, int);
        bool IsVarpTestbitPrereqMet(PlayerVarDomain&, int, int);
        bool IsVarbitTestbitPrereqMet(PlayerVarDomain&, int, int);
        IsAchievementPrereqMet(PlayerGameState&, PlayerVarDomain&, int, int, int);
        void IsQuestPrereqMet(PlayerVarDomain&, int, int);
        bool IsStatReqMet(PlayerGameState&, int);
        bool IsVarpReqMet(PlayerVarDomain&, int);
        bool IsVarbitReqMet(PlayerVarDomain&, int);
        bool IsVarpTestbitReqMet(PlayerVarDomain&, int);
        bool IsVarbitTestbitReqMet(PlayerVarDomain&, int);
        IsAchievementReqMet(PlayerGameState&, PlayerVarDomain&, int, int);
        void IsQuestReqMet(PlayerVarDomain&, int);
        void GetDescription(Array<AchievementRequirementSpec, eastl::allocator> const&, int) const;
        void GetDescription(
            eastl::vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator> const&, int,
            int) const;
        int GetTallyProgress(PlayerGameState const&, PlayerVarDomain const&) const;
        GetTallyTarget() const;
        AchievementType(BaseTemplateConfigTypeList<AchievementType>*, int);

        // data members, from how the methods use this: 680 bytes
        undefined** field_0; // offset 0, vtable pointer
        long field_8;        // offset 8
        char _unknown_16[8];
        BaseTemplateConfigTypeList* field_24; // offset 24
        int field_32;                         // offset 32
        char _unknown_36[60];
        undefined4 field_96; // offset 96
        char _unknown_100[28];
        undefined1 field_128; // offset 128
        char _unknown_129[3];
        uint field_132;       // offset 132
        uint field_136;       // offset 136
        undefined4 field_140; // offset 140
        uint m_runeScore;     // offset 144
        uint field_148;       // offset 148
        undefined1 field_152; // offset 152
        char _unknown_153[3];
        uint field_156;       // offset 156
        uint field_160;       // offset 160
        uint field_164;       // offset 164
        uint field_168;       // offset 168
        undefined1 field_172; // offset 172
        char _unknown_173[3];
        uint field_176; // offset 176
        char _unknown_180[284];
        uint field_464; // offset 464
        char _unknown_468[196];
        uint field_664; // offset 664
        char _unknown_668[12];
    };

    // 0x100556a90, 16 bytes, inline, placed by class name and debug map
    // AchievementType::InGracePeriod(int) const
    bool AchievementType::InGracePeriod(int param_1) {
        return param_1 < (int)field_176;
    }

    // 0x10055ae00, 32 bytes, deleting destructor, inline, placed by class name
    // AchievementType::~AchievementType()
    void AchievementType::~AchievementType() {
        ~AchievementType(this);
        operator_delete(this);
    }

    // 0x1005f0ab0, 16 bytes, complete-object destructor, inline, placed by class name
    // AchievementType::~AchievementType(): jumps straight to the base-object destructor

    // 0x1005f0ac0, 272 bytes, base-object destructor, inline, placed by class name
    // AchievementType::~AchievementType()
    void AchievementType::~AchievementType() {
        field_0 = &PTR__AchievementType_100f04288;
        (&field_672)->~Array();
        (&field_640)->~Array();
        (&field_616)->~Array();
        (&field_592)->~Array();
        (&field_568)->~Array();
        (&field_544)->~Array();
        (&field_520)->~Array();
        (&field_496)->~Array();
        (&field_472)->~Array();
        (&field_440)->~Array();
        (&field_408)->~vector();
        (&field_376)->~vector();
        (&field_344)->~vector();
        (&field_312)->~vector();
        (&field_280)->~vector();
        (&field_248)->~vector();
        (&field_216)->~vector();
        (&field_184)->~basic_string();
        (&field_88)->~vector_map();
        (&field_56)->~basic_string();
        ~ConfigType();
    }

    // 0x1005f10f0, 16 bytes, complete-object constructor, inline, placed by class name
    // AchievementType::AchievementType(BaseTemplateConfigTypeList<AchievementType>*, int): jumps straight to the base-object constructor

    // 0x1005f1100, 864 bytes, base-object constructor, inline, placed by class name
    // AchievementType::AchievementType(BaseTemplateConfigTypeList<AchievementType>*, int)
    void AchievementType::AchievementType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new (this) ConfigType<AchievementType>(param_1, param_2);
        new (this) MakeSharedPool<AchievementType, 256>();
        field_0 = &PTR__AchievementType_100f04288;
        new (&field_56) eastl::string();
        new (&field_88) eastl::vector_map<
            int, eastl::basic_string<char, BucketAllocatorEASTL>, eastl::less<int>, eastl::allocator,
            eastl::vector<eastl::pair<int, eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::allocator>>();
        field_128 = 0;
        field_132 = 4294967295;
        field_136 = 4294967295;
        field_140 = 4294967295;
        m_runeScore = 0;
        field_148 = 0;
        field_152 = 1;
        field_156 = 4294967295;
        field_160 = 4294967295;
        field_164 = 4294967295;
        field_168 = 4294967295;
        field_172 = 0;
        field_176 = 4294967295;
        new (&field_184) eastl::string();
        new (&field_216) eastl::vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>();
        new (&field_248) eastl::vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>();
        new (&field_280) eastl::vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>();
        new (&field_312) eastl::vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>();
        new (&field_344) eastl::vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>();
        new (&field_376) eastl::vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>();
        new (&field_408) eastl::vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>();
        new (&field_440) Array<int, eastl::allocator>();
        field_464 = 4294967295;
        new (&field_472) Array<AchievementRequirementSpec, eastl::allocator>();
        new (&field_496) Array<AchievementRequirementSpec, eastl::allocator>();
        new (&field_520) Array<AchievementRequirementSpec, eastl::allocator>();
        new (&field_544) Array<AchievementRequirementSpec, eastl::allocator>();
        new (&field_568) Array<AchievementRequirementSpec, eastl::allocator>();
        new (&field_592) Array<AchievementRequirementSpec, eastl::allocator>();
        new (&field_616) Array<AchievementRequirementSpec, eastl::allocator>();
        new (&field_640) Array<int, eastl::allocator>();
        field_664 = 4294967295;
        new (&field_672) Array<int, eastl::allocator>();
    }

} // namespace jag::game
