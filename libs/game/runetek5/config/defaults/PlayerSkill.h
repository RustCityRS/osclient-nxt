// libs/game/runetek5/config/defaults/PlayerSkill.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class PlayerSkill {
    public:
        IsMembersOnly() const;
        PlayerSkill();
        GetCappedFreeLevel() const;
        GetCappedFreeXP() const;
        bool HasFreeWorldCap() const;
        PlayerSkill(unsigned int, unsigned int, bool, bool, unsigned int, PlayerSkillXPTable const*, int);
        int GetFineXPFromLevel(unsigned int) const;
        void GetXPFromLevel(unsigned int) const;
        uint GetLevelFromXP(unsigned int) const;
        void GetLevelFromFineXP(unsigned int) const;

        // data members, from how the methods use this: 40 bytes
        uint field_0; // offset 0
        uint field_4; // offset 4
        bool field_8; // offset 8
        bool field_9; // offset 9
        char _unknown_10[2];
        undefined4 field_12; // offset 12
        uint field_16;       // offset 16
        char _unknown_20[4];
        PlayerSkillXPTable* field_24; // offset 24
        int field_32;                 // offset 32
        char _unknown_36[4];
    };

    // 0x100497df0, 16 bytes, inline, placed by class name and debug map
    // PlayerSkill::HasFreeWorldCap() const
    bool PlayerSkill::HasFreeWorldCap() {
        return field_12 != -1;
    }

} // namespace jag::game
