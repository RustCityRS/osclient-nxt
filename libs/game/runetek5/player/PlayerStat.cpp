// libs/game/runetek5/player/PlayerStat.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "PlayerStat.h"

namespace jag::game {
    // 0x100066b70: PlayerStat::GetActualXPLevel() const has the same machine code as oldscape::widgets::Widget::GetTextColour() const

    // 0x1000e5d50: PlayerStat::GetActualXP() const has the same machine code as oldscape::rs2lib::CoordZoneSource::GetRotation() const

    // 0x1001117e0: PlayerStat::GetGameplayLevel() const has the same machine code as oldscape::jagex3::Js5::GetIndexCrc() const

    // 0x100207330: PlayerStat::SetGameplayLevel(unsigned int) has the same machine code as oldscape::rs2lib::StockPlayerOffer::SetCompletedGold(int)

    // 0x100497d90
    unsigned long PlayerStat::GetCappedXP(const ModeAccountType* modeAccountType) const {
        bool cVar1;
        unsigned long uVar2;

        if ((((ModeAccountType*)ModeAccountType::FREE == modeAccountType) && (cVar1 = field_0->IsValid(), cVar1)) &&
            (cVar1 = field_0->HasFreeWorldCap(), cVar1)) {
            uVar2 = field_0->GetLevel();
            if (field_8 == false) {
                uVar2 = (uVar2 & 4294967295) / 10;
            }
            if ((unsigned int)uVar2 < m_actualXP) {
                return uVar2;
            }
        }
        return (unsigned long)m_actualXP;
    }

    // 0x100497e00
    void PlayerStat::SetXP(unsigned int arg1) {
        unsigned int uVar1;

        m_actualXP = arg1;
        if (((field_8 != false) && (uVar1 = 2000000000, 2000000000 < arg1)) ||
            ((field_8 == false && (uVar1 = 200000000, 200000000 < arg1)))) {
            m_actualXP = uVar1;
        }
        RecalculateXPLevel();
    }

    // 0x100497e40
    void PlayerStat::RecalculateXPLevel() {
        unsigned int uVar1;

        if (field_8 == false) {
            uVar1 = field_0->GetLevelFromXP(m_actualXP);
        } else {
            uVar1 = field_0->GetLevelFromFineXP(m_actualXP);
        }
        m_actualXPLevel = uVar1;
    }

    // 0x100497e70
    unsigned long PlayerStat::GetCappedXPLevel(const ModeAccountType* modeAccountType) const {
        bool cVar1;
        unsigned long uVar2;

        if (((((ModeAccountType*)ModeAccountType::FREE == modeAccountType) && (cVar1 = field_0->IsValid(), cVar1)) &&
             (cVar1 = field_0->HasFreeWorldCap(), cVar1)) &&
            (uVar2 = field_0->GetMaxLineWidth(), (unsigned int)uVar2 < m_actualXPLevel)) {
            return uVar2;
        }
        return (unsigned long)m_actualXPLevel;
    }

    // 0x100497ec0
    void PlayerStat::Reset() {
        m_actualXP = 0;
        m_actualXPLevel = 1;
        m_gameplayLevel = 1;
    }

} // namespace jag::game
