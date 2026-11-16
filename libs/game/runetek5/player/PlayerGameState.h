// libs/game/runetek5/player/PlayerGameState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class PlayerGameState {
    public:
        PlayerGameState(const SkillDefaults& skillDefaults);
        uint32_t GetStatXP(unsigned int arg1, const ModeAccountType* modeAccountType) const;
        void GetStatLevel(unsigned int arg1) const;
        void GetStatLevelMax(unsigned int arg1, const ModeAccountType* modeAccountType) const;
        uint32_t GetStatXPActual(unsigned int arg1) const;
        void GetStatLevelMaxActual(unsigned int arg1) const;
        void ResetStats();

    private:
        uint8_t _unknown_0[8];
        unsigned long field_8;
        long field_16;
        uint64_t field_24;
    };

    // 0x1004a0280
    PlayerGameState::PlayerGameState(const SkillDefaults& skillDefaults) {
        PlayerSkill* playerSkill;
        uint64_t* puVar3;
        unsigned long uVar4;
        unsigned long arg1;
        PlayerSkill* local_40[3];

        unsigned int uVar1 = skillDefaults.GetTextureAtlas();
        new (this) Array<PlayerStat>((unsigned long)uVar1);
        field_24 = 0;
        if (end() != 0) {
            arg1 = 0;
            do {
                playerSkill = skillDefaults.GetSkill((int)arg1);
                new (local_40) PlayerStat(*playerSkill, false);
                puVar3 = (uint64_t*)(*this)[arg1];
                puVar3[2] = local_40[2];
                *puVar3 = local_40[0];
                puVar3[1] = local_40[1];
                arg1 = (unsigned long)((int)arg1 + 1);
                uVar4 = end();
            } while (arg1 < uVar4);
        }
    }

    // 0x1004a0410
    uint32_t PlayerGameState::GetStatXP(unsigned int arg1, const ModeAccountType* modeAccountType) const {
        return ((PlayerStat*)(*this)[(unsigned long)arg1])->GetCappedXP(modeAccountType);
    }

    // 0x1004a04c0
    void PlayerGameState::GetStatLevel(unsigned int arg1) const {
        ((StockPlayerOffer*)(*this)[(unsigned long)arg1])->GetCompletedGold();
    }

    // 0x1004a04e0
    void PlayerGameState::GetStatLevelMax(unsigned int arg1, const ModeAccountType* modeAccountType) const {
        ((PlayerStat*)(*this)[(unsigned long)arg1])->GetCappedXPLevel(modeAccountType);
    }

    // 0x1004a0510
    uint32_t PlayerGameState::GetStatXPActual(unsigned int arg1) const {
        return ((Minimap*)(*this)[(unsigned long)arg1])->GetLevel();
    }

    // 0x1004a0530
    void PlayerGameState::GetStatLevelMaxActual(unsigned int arg1) const {
        ((TextRun*)(*this)[(unsigned long)arg1])->GetMaxLineWidth();
    }

    // 0x1004a0550
    void PlayerGameState::ResetStats() {
        auto this_00 = data();
        auto pPVar1 = end();
        for (; this_00 != pPVar1; this_00 = (PlayerStat*)&this_00->field_24) {
            this_00->Reset();
        }
    }

} // namespace jag::game
