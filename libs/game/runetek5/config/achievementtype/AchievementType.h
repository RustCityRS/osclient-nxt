// libs/game/runetek5/config/achievementtype/AchievementType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class AchievementType {
    public:
        // virtual methods in vtable order
        virtual ~AchievementType();
        virtual uint8_t* DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        virtual void PostDecode();
        unsigned int GetRuneScore() const;
        long GetTotalPrereqCount() const;
        long GetTotalRequirementCount() const;
        void ValidateReqGroupItemsToComplete();
        void CountReqGroupItemCount();
        uint32_t GetProgress(PlayerGameState& playerGameState, PlayerVarDomain& playerVarDomain, int arg3);
        int GetProgress(PlayerGameState& playerGameState, PlayerVarDomain& playerVarDomain, int arg3,
                        eastl::hash_map<int, int>& arg4);
        unsigned long AreGroupsCompleted(const eastl::fixed_vector<bool, 127ul>& arg1, int arg2);
        bool InGracePeriod(int arg1) const;
        unsigned long PrereqsAreComplete(PlayerGameState& playerGameState, PlayerVarDomain& playerVarDomain, int arg3,
                                         eastl::hash_map<int, int>& arg4);
        unsigned long PrereqCompletionTest(const eastl::fixed_vector<int, 128ul>& arg1);
        uint32_t PrereqsAreComplete(PlayerGameState& playerGameState, PlayerVarDomain& playerVarDomain, int arg3);
        int CalculateRuneScore(PlayerGameState& playerGameState, PlayerVarDomain& playerVarDomain,
                               AchievementTypeList& achievementTypeList);
        void GetNumPrereqGroups() const;
        unsigned long IsPrereqGroupComplete(PlayerGameState& playerGameState, PlayerVarDomain& playerVarDomain,
                                            int arg3, int arg4) const;
        bool IsStatPrereqMet(PlayerGameState& playerGameState, int arg2, int arg3);
        bool IsVarpPrereqMet(PlayerVarDomain& playerVarDomain, int arg2, int arg3);
        bool IsVarbitPrereqMet(PlayerVarDomain& playerVarDomain, int arg2, int arg3);
        bool IsVarpTestbitPrereqMet(PlayerVarDomain& playerVarDomain, int arg2, int arg3);
        bool IsVarbitTestbitPrereqMet(PlayerVarDomain& playerVarDomain, int arg2, int arg3);
        bool IsAchievementPrereqMet(PlayerGameState& playerGameState, PlayerVarDomain& playerVarDomain, int arg3,
                                    int arg4, int arg5);
        void IsQuestPrereqMet(PlayerVarDomain& playerVarDomain, int arg2, int arg3);
        bool IsStatReqMet(PlayerGameState& playerGameState, int arg2);
        bool IsVarpReqMet(PlayerVarDomain& playerVarDomain, int arg2);
        bool IsVarbitReqMet(PlayerVarDomain& playerVarDomain, int arg2);
        bool IsVarpTestbitReqMet(PlayerVarDomain& playerVarDomain, int arg2);
        bool IsVarbitTestbitReqMet(PlayerVarDomain& playerVarDomain, int arg2);
        bool IsAchievementReqMet(PlayerGameState& playerGameState, PlayerVarDomain& playerVarDomain, int arg3,
                                 int arg4);
        void IsQuestReqMet(PlayerVarDomain& playerVarDomain, int arg2);
        void GetDescription(const Array<AchievementRequirementSpec>& achievementRequirementSpecs, int arg2) const;
        void
        GetDescription(const eastl::vector<eastl::vector<AchievementRequirementSpec>>& achievementRequirementSpecss,
                       int arg2, int arg3) const;
        int GetTallyProgress(const PlayerGameState& playerGameState, const PlayerVarDomain& playerVarDomain) const;
        uint32_t GetTallyTarget() const;
        AchievementType(BaseTemplateConfigTypeList<AchievementType>* baseTemplateConfigTypeList, int arg2);

    private:
        long field_8;
        uint8_t _unknown_16[8];
        BaseTemplateConfigTypeList<AchievementType>* field_24;
        int field_32;
        uint8_t _unknown_36[60];
        uint32_t field_96;
        uint8_t _unknown_100[28];
        uint8_t field_128;
        uint8_t _unknown_129[3];
        unsigned int field_132;
        unsigned int field_136;
        uint32_t field_140;
        unsigned int m_runeScore;
        unsigned int field_148;
        uint8_t field_152;
        uint8_t _unknown_153[3];
        unsigned int field_156;
        unsigned int field_160;
        unsigned int field_164;
        unsigned int field_168;
        uint8_t field_172;
        uint8_t _unknown_173[3];
        unsigned int field_176;
        uint8_t _unknown_180[284];
        unsigned int field_464;
        uint8_t _unknown_468[196];
        unsigned int field_664;
        uint8_t _unknown_668[12];
    };

    // 0x100556a90
    bool AchievementType::InGracePeriod(int arg1) const {
        return arg1 < (int)field_176;
    }

    // 0x1005f0ac0
    AchievementType::~AchievementType() {
        field_672.~Array();
        field_640.~Array();
        field_616.~Array();
        field_592.~Array();
        field_568.~Array();
        field_544.~Array();
        field_520.~Array();
        field_496.~Array();
        field_472.~Array();
        field_440.~Array();
        field_408.~vector();
        field_376.~vector();
        field_344.~vector();
        field_312.~vector();
        field_280.~vector();
        field_248.~vector();
        field_216.~vector();
        field_184.~basic_string();
        field_88.~vector_map();
        field_56.~basic_string();
    }

    // 0x1005f1100
    AchievementType::AchievementType(BaseTemplateConfigTypeList<AchievementType>* baseTemplateConfigTypeList, int arg2)
        : ConfigType<AchievementType>(baseTemplateConfigTypeList, arg2), MakeSharedPool<AchievementType, 256>(),
          field_128(0), field_132(4294967295), field_136(4294967295), field_140(4294967295), m_runeScore(0),
          field_148(0), field_152(1), field_156(4294967295), field_160(4294967295), field_164(4294967295),
          field_168(4294967295), field_172(0), field_176(4294967295), field_464(4294967295), field_664(4294967295) {}

} // namespace jag::game
