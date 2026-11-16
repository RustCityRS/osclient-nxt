// libs/game/runetek5/config/defaults/PlayerSkill.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class PlayerSkill {
    public:
        bool IsMembersOnly() const;
        PlayerSkill();
        unsigned int GetCappedFreeLevel() const;
        bool GetCappedFreeXP() const;
        bool HasFreeWorldCap() const;
        PlayerSkill(unsigned int arg1, unsigned int arg2, bool arg3, bool arg4, unsigned int arg5,
                    const PlayerSkillXPTable* playerSkillXPTable, int arg7);
        int GetFineXPFromLevel(unsigned int arg1) const;
        void GetXPFromLevel(unsigned int arg1) const;
        unsigned int GetLevelFromXP(unsigned int arg1) const;
        void GetLevelFromFineXP(unsigned int arg1) const;

    private:
        unsigned int field_0;
        unsigned int field_4;
        bool m_membersOnly;
        bool field_9;
        uint8_t _unknown_10[2];
        int m_cappedFreeXP;
        unsigned int m_cappedFreeLevel;
        uint8_t _unknown_20[4];
        PlayerSkillXPTable* field_24;
        int field_32;
        uint8_t _unknown_36[4];
    };

    // 0x100497df0
    bool PlayerSkill::HasFreeWorldCap() const {
        return m_cappedFreeXP != -1;
    }

} // namespace jag::game
