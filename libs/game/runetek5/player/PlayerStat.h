// libs/game/runetek5/player/PlayerStat.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class PlayerStat {
    public:
        unsigned int GetActualXPLevel() const;
        unsigned int GetActualXP() const;
        unsigned int GetGameplayLevel() const;
        void SetGameplayLevel(unsigned int arg1);
        unsigned long GetCappedXP(const ModeAccountType* modeAccountType) const;
        void SetXP(unsigned int arg1);
        void RecalculateXPLevel();
        unsigned long GetCappedXPLevel(const ModeAccountType* modeAccountType) const;
        void Reset();
        PlayerStat(const PlayerSkill& playerSkill, bool arg2);
        PlayerStat();

    private:
        PlayerSkill* field_0;
        bool field_8;
        uint8_t _unknown_9[3];
        unsigned int m_actualXP;
        unsigned int m_actualXPLevel;
        int m_gameplayLevel;
        uint8_t _unknown_24[4];
    };

    // 0x1004a0b00
    PlayerStat::PlayerStat(const PlayerSkill& playerSkill, bool arg2)
        : field_0(playerSkill), field_8(arg2), m_actualXP(0), m_actualXPLevel(1), m_gameplayLevel(1) {}

    // 0x1004a17b0
    PlayerStat::PlayerStat()
        : field_0(nullptr), field_8(false), m_actualXP(0), m_actualXPLevel(1), m_gameplayLevel(1) {}

} // namespace jag::game
