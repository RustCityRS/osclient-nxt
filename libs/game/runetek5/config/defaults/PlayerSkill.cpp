// libs/game/runetek5/config/defaults/PlayerSkill.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "PlayerSkill.h"

namespace jag::game {
    // 0x1000096a0: PlayerSkill::IsMembersOnly() const has the same machine code as BaseApp::GetExitAfterInit()

    // 0x100009e70: PlayerSkill::PlayerSkill() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100066b70: PlayerSkill::GetCappedFreeLevel() const has the same machine code as oldscape::widgets::Widget::GetTextColour() const

    // 0x1000e5d50, the same machine code as oldscape::rs2lib::CoordZoneSource::GetRotation() const
    bool PlayerSkill::GetCappedFreeXP() const {
        return m_membersOnly;
    }

    // 0x1005526c0
    PlayerSkill::PlayerSkill(unsigned int arg1, unsigned int arg2, bool arg3, bool arg4, unsigned int arg5,
                             const PlayerSkillXPTable* playerSkillXPTable, int arg7)
        : field_0(arg1), field_4(arg2), m_membersOnly(arg3), field_9(arg4), field_24(playerSkillXPTable),
          field_32(arg7) {
        int iVar1;
        uint32_t in_register_00000009;

        if ((((uint32_t)in_register_00000009 << 8) | (uint8_t)arg3) == 0) {
            m_cappedFreeLevel = 4294967295;
            iVar1 = -1;
        } else {
            m_cappedFreeLevel = arg5;
            iVar1 = GetFineXPFromLevel(arg5);
        }
        m_cappedFreeXP = iVar1;
    }

    // 0x100552710
    int PlayerSkill::GetFineXPFromLevel(unsigned int arg1) const {
        return GetXPFromLevel(arg1) * 10;
    }

    // 0x100552740
    void PlayerSkill::GetXPFromLevel(unsigned int arg1) const {
        if (field_4 < arg1) {
            arg1 = field_4;
        }
        field_24->GetXPFromLevel(arg1 - field_32);
    }

    // 0x100552760
    unsigned int PlayerSkill::GetLevelFromXP(unsigned int arg1) const {
        unsigned int uVar2 = field_24->GetLevelFromXP(arg1) + field_32;
        if (field_4 < uVar2) {
            uVar2 = field_4;
        }
        return uVar2;
    }

    // 0x100552790
    void PlayerSkill::GetLevelFromFineXP(unsigned int arg1) const {
        GetLevelFromXP(arg1 / 10);
    }

} // namespace jag::game
