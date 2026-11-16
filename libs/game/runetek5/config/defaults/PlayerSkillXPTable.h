// libs/game/runetek5/config/defaults/PlayerSkillXPTable.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class PlayerSkillXPTable {
    public:
        PlayerSkillXPTable();
        PlayerSkillXPTable(const Array<unsigned int>& arg1);
        uint32_t GetXPFromLevel(unsigned int arg1) const;
        int GetFineXPFromLevel(unsigned int arg1) const;
        unsigned long GetLevelFromXP(unsigned int arg1) const;
        void GetLevelFromFineXP(unsigned int arg1) const;
        PlayerSkillXPTable* operator=(PlayerSkillXPTable&& playerSkillXPTable);
        PlayerSkillXPTable(PlayerSkillXPTable&& playerSkillXPTable);
        ~PlayerSkillXPTable();
        static PlayerSkillXPTable DEFAULT; // = PlayerSkillXPTable()

    private:
        uint8_t _unknown_0[8];
        unsigned long field_8;
        unsigned int* field_16;
    };

    // 0x10054ed40
    PlayerSkillXPTable* PlayerSkillXPTable::operator=(PlayerSkillXPTable&& playerSkillXPTable) {
        *this = playerSkillXPTable;
        return this;
    }

    // 0x1005507e0
    PlayerSkillXPTable::PlayerSkillXPTable(PlayerSkillXPTable&& playerSkillXPTable)
        : Array<unsigned int>(playerSkillXPTable) {}

    // 0x100570320
    PlayerSkillXPTable::~PlayerSkillXPTable() {}

} // namespace jag::game
