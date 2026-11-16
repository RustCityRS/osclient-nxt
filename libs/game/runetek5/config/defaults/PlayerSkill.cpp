// libs/game/runetek5/config/defaults/PlayerSkill.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "PlayerSkill.h"

namespace jag::game {
    // 0x1000096a0: the linker folded this into BaseApp::GetExitAfterInit(), which has identical code
    PlayerSkill::IsMembersOnly() const;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    PlayerSkill::PlayerSkill();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    PlayerSkill::PlayerSkill();

    // 0x100066b70: the linker folded this into oldscape::widgets::Widget::GetTextColour() const, which has identical code
    PlayerSkill::GetCappedFreeLevel() const;

    // 0x1000e5d50: the linker folded this into oldscape::rs2lib::CoordZoneSource::GetRotation() const, which has identical code
    PlayerSkill::GetCappedFreeXP() const;

    // 0x1005526c0, 80 bytes, base-object constructor, placed by class name and debug map
    // PlayerSkill::PlayerSkill(unsigned int, unsigned int, bool, bool, unsigned int, PlayerSkillXPTable const*, int)
    void PlayerSkill::PlayerSkill(uint param_1, uint param_2, bool param_3, bool param_4, uint param_5,
                                  PlayerSkillXPTable* param_6, int param_7) {
        undefined4 uVar1;
        undefined3 in_register_00000009;

        field_0 = param_1;
        field_4 = param_2;
        field_8 = param_3;
        field_9 = param_4;
        field_24 = param_6;
        field_32 = param_7;
        if (CONCAT31(in_register_00000009, param_3) == 0) {
            field_16 = 4294967295;
            uVar1 = 4294967295;
        } else {
            field_16 = param_5;
            uVar1 = GetFineXPFromLevel(this, param_5);
        }
        field_12 = uVar1;
    }

    // 0x100552710, 16 bytes, placed by class name and debug map
    // PlayerSkill::GetFineXPFromLevel(unsigned int) const
    int PlayerSkill::GetFineXPFromLevel(uint param_1) {
        return GetXPFromLevel(this, param_1) * 10;
    }

    // 0x100552720, 32 bytes, complete-object constructor, placed by class name and debug map
    // PlayerSkill::PlayerSkill(unsigned int, unsigned int, bool, bool, unsigned int, PlayerSkillXPTable const*, int)
    void PlayerSkill::PlayerSkill(uint param_1, uint param_2, bool param_3, bool param_4, uint param_5,
                                  PlayerSkillXPTable* param_6, int param_7) {
        PlayerSkill(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7);
    }

    // 0x100552740, 32 bytes, placed by class name and debug map
    // PlayerSkill::GetXPFromLevel(unsigned int) const
    void PlayerSkill::GetXPFromLevel(uint param_1) {
        if (field_4 < param_1) {
            param_1 = field_4;
        }
        (field_24, param_1 - field_32)->GetXPFromLevel();
    }

    // 0x100552760, 48 bytes, placed by class name and debug map
    // PlayerSkill::GetLevelFromXP(unsigned int) const
    uint PlayerSkill::GetLevelFromXP(uint param_1) {
        uint uVar2;

        uVar2 = (field_24, param_1)->GetLevelFromXP() + field_32;
        if (field_4 < uVar2) {
            uVar2 = field_4;
        }
        return uVar2;
    }

    // 0x100552790, 32 bytes, placed by class name and debug map
    // PlayerSkill::GetLevelFromFineXP(unsigned int) const
    void PlayerSkill::GetLevelFromFineXP(uint param_1) {
        GetLevelFromXP(this, param_1 / 10);
    }

} // namespace jag::game
