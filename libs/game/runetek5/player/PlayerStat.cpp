// libs/game/runetek5/player/PlayerStat.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "PlayerStat.h"

namespace jag::game {
    // 0x100066b70: the linker folded this into oldscape::widgets::Widget::GetTextColour() const, which has identical code
    PlayerStat::GetActualXPLevel() const;

    // 0x1000e5d50: the linker folded this into oldscape::rs2lib::CoordZoneSource::GetRotation() const, which has identical code
    PlayerStat::GetActualXP() const;

    // 0x1001117e0: the linker folded this into oldscape::jagex3::Js5::GetIndexCrc() const, which has identical code
    PlayerStat::GetGameplayLevel() const;

    // 0x100207330: the linker folded this into oldscape::rs2lib::StockPlayerOffer::SetCompletedGold(int), which has identical code
    PlayerStat::SetGameplayLevel(unsigned int);

    // 0x100497d90, 96 bytes, placed by class name and debug map
    // PlayerStat::GetCappedXP(ModeAccountType const*) const
    ulong PlayerStat::GetCappedXP(ModeAccountType* param_1) {
        char cVar1;
        ulong uVar2;

        if ((((ModeAccountType*)ModeAccountType::FREE == param_1) && (cVar1 = field_0->IsValid(), cVar1 != '\0')) &&
            (cVar1 = field_0->HasFreeWorldCap(), cVar1 != '\0')) {
            uVar2 = field_0->GetLevel();
            if (field_8 == false) {
                uVar2 = (uVar2 & 4294967295) / 10;
            }
            if ((uint)uVar2 < m_xP) {
                return uVar2;
            }
        }
        return (ulong)m_xP;
    }

    // 0x100497e00, 64 bytes, placed by class name
    // PlayerStat::SetXP(unsigned int)
    void PlayerStat::SetXP(uint param_1) {
        uint uVar1;

        m_xP = param_1;
        if (((field_8 != false) && (uVar1 = 2000000000, 2000000000 < param_1)) ||
            ((field_8 == false && (uVar1 = 200000000, 200000000 < param_1)))) {
            m_xP = uVar1;
        }
        RecalculateXPLevel(this);
    }

    // 0x100497e40, 48 bytes, placed by class name
    // PlayerStat::RecalculateXPLevel()
    void PlayerStat::RecalculateXPLevel() {
        uint uVar1;

        if (field_8 == false) {
            uVar1 = (field_0, m_xP)->GetLevelFromXP();
        } else {
            uVar1 = (field_0, m_xP)->GetLevelFromFineXP();
        }
        field_16 = uVar1;
    }

    // 0x100497e70, 80 bytes, placed by class name
    // PlayerStat::GetCappedXPLevel(ModeAccountType const*) const
    ulong PlayerStat::GetCappedXPLevel(ModeAccountType* param_1) {
        char cVar1;
        ulong uVar2;

        if (((((ModeAccountType*)ModeAccountType::FREE == param_1) && (cVar1 = field_0->IsValid(), cVar1 != '\0')) &&
             (cVar1 = field_0->HasFreeWorldCap(), cVar1 != '\0')) &&
            (uVar2 = field_0->GetMaxLineWidth(), (uint)uVar2 < field_16)) {
            return uVar2;
        }
        return (ulong)field_16;
    }

    // 0x100497ec0, 32 bytes, placed by class name
    // PlayerStat::Reset()
    void PlayerStat::Reset() {
        m_xP = 0;
        field_16 = 1;
        m_gameplayLevel = 1;
    }

} // namespace jag::game
