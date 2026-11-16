// libs/game/runetek5/config/defaults/SkillDefaults.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class SkillDefaults {
    public:
        GetSkillCount() const;
        void GetSkill(int) const;
        SkillDefaults(PacketT<Array<unsigned char, eastl::allocator>>&);
        ~SkillDefaults();

        // data members, from how the methods use this: 32 bytes
        char _unknown_0[8];
        ulong field_8; // offset 8
        long field_16; // offset 16
        char _unknown_24[8];
    };

    // 0x1004a0350, 16 bytes, inline, placed by class name and debug map
    // SkillDefaults::GetSkill(int) const
    void SkillDefaults::GetSkill(int param_1) {
        Array<PlayerSkill, eastl::allocator>::operator[]((Array<PlayerSkill, eastl::allocator>*)this, (long)param_1);
    }

    // 0x1005701f0, 16 bytes, complete-object destructor, inline, placed by class name
    // SkillDefaults::~SkillDefaults(): jumps straight to the base-object destructor

    // 0x100570200, 48 bytes, base-object destructor, inline, placed by class name
    // SkillDefaults::~SkillDefaults()
    void SkillDefaults::~SkillDefaults() {
        (&field_24)->~Array();
        ~Array();
    }

} // namespace jag::game
