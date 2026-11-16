// libs/game/runetek5/config/defaults/SkillDefaults.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class SkillDefaults {
    public:
        void GetSkillCount() const;
        PlayerSkill* GetSkill(int arg1) const;
        SkillDefaults(PacketT<Array<unsigned char>>& arg1);
        ~SkillDefaults();

    private:
        uint8_t _unknown_0[8];
        unsigned long field_8;
        long field_16;
        uint8_t _unknown_24[8];
    };

    // 0x1004a0350
    PlayerSkill* SkillDefaults::GetSkill(int arg1) const {
        return (PlayerSkill*)(*this)[(long)arg1];
    }

    // 0x100570200
    SkillDefaults::~SkillDefaults() {
        field_24.~Array();
    }

} // namespace jag::game
