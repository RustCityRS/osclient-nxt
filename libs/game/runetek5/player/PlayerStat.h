// libs/game/runetek5/player/PlayerStat.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class PlayerStat {
    public:
        uint GetActualXPLevel() const;
        uint GetActualXP() const;
        GetGameplayLevel() const;
        void SetGameplayLevel(unsigned int);
        ulong GetCappedXP(ModeAccountType const*) const;
        void SetXP(unsigned int);
        void RecalculateXPLevel();
        ulong GetCappedXPLevel(ModeAccountType const*) const;
        void Reset();
        PlayerStat(PlayerSkill const&, bool);
        PlayerStat();

        // data members, from how the methods use this: 28 bytes
        PlayerSkill* field_0; // offset 0
        bool field_8;         // offset 8
        char _unknown_9[3];
        uint m_xP;            // offset 12
        uint m_actualXPLevel; // offset 16
        uint m_gameplayLevel; // offset 20
        char _unknown_24[4];
    };

    // 0x1004a0360, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // PlayerStat::PlayerStat(PlayerSkill const&, bool): jumps straight to the base-object constructor

    // 0x1004a0b00, 48 bytes, base-object constructor, inline, placed by class name
    // PlayerStat::PlayerStat(PlayerSkill const&, bool)
    void PlayerStat::PlayerStat(PlayerSkill* param_1, bool param_2) {
        field_0 = param_1;
        field_8 = param_2;
        m_xP = 0;
        m_actualXPLevel = 1;
        m_gameplayLevel = 1;
    }

    // 0x1004a17a0, 16 bytes, complete-object constructor, inline, placed by class name
    // PlayerStat::PlayerStat(): jumps straight to the base-object constructor

    // 0x1004a17b0, 48 bytes, base-object constructor, inline, placed by class name
    // PlayerStat::PlayerStat()
    void PlayerStat::PlayerStat() {
        field_0 = (PlayerSkill*)0;
        field_8 = false;
        m_xP = 0;
        m_actualXPLevel = 1;
        m_gameplayLevel = 1;
    }

} // namespace jag::game
