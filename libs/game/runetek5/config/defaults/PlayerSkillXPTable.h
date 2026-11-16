// libs/game/runetek5/config/defaults/PlayerSkillXPTable.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class PlayerSkillXPTable {
    public:
        PlayerSkillXPTable();
        PlayerSkillXPTable(Array<unsigned int, eastl::allocator> const&);
        GetXPFromLevel(unsigned int) const;
        int GetFineXPFromLevel(unsigned int) const;
        ulong GetLevelFromXP(unsigned int) const;
        void GetLevelFromFineXP(unsigned int) const;
        PlayerSkillXPTable* operator=(PlayerSkillXPTable&&);
        PlayerSkillXPTable(PlayerSkillXPTable&&);
        ~PlayerSkillXPTable();
        static PlayerSkillXPTable /* 24 bytes */ DEFAULT; // = PlayerSkillXPTable()

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[8];
        ulong field_8;      // offset 8
        ScriptOp* field_16; // offset 16
    };

    // 0x10054ed40, 32 bytes, inline, placed by class name and debug map
    // PlayerSkillXPTable::operator=(PlayerSkillXPTable&&)
    /* PlayerSkillXPTable::TEMPNAMEPLACEHOLDERVALUE(PlayerSkillXPTable&&) */

    PlayerSkillXPTable* PlayerSkillXPTable::operator=(PlayerSkillXPTable* param_1) {
        Array<unsigned int, eastl::allocator>::operator=((Array<unsigned int, eastl::allocator>*)this, (Array*)param_1);
        return this;
    }

    // 0x1005507d0, 16 bytes, complete-object constructor, inline, placed by class name
    // PlayerSkillXPTable::PlayerSkillXPTable(PlayerSkillXPTable&&): jumps straight to the base-object constructor

    // 0x1005507e0, 16 bytes, base-object constructor, inline, placed by class name
    // PlayerSkillXPTable::PlayerSkillXPTable(PlayerSkillXPTable&&)
    void PlayerSkillXPTable::PlayerSkillXPTable(PlayerSkillXPTable* param_1) {
        new (this) Array<unsigned int, eastl::allocator>(param_1);
    }

    // 0x100570310, 16 bytes, complete-object destructor, inline, placed by class name
    // PlayerSkillXPTable::~PlayerSkillXPTable(): jumps straight to the base-object destructor

    // 0x100570320, 16 bytes, base-object destructor, inline, placed by class name
    // PlayerSkillXPTable::~PlayerSkillXPTable()
    void PlayerSkillXPTable::~PlayerSkillXPTable() {
        ~Array();
    }

} // namespace jag::game
