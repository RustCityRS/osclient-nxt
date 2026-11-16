// libs/game/runetek5/player/PlayerGameState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class PlayerGameState {
    public:
        PlayerGameState(SkillDefaults const&);
        GetStatXP(unsigned int, ModeAccountType const*) const;
        void GetStatLevel(unsigned int) const;
        void GetStatLevelMax(unsigned int, ModeAccountType const*) const;
        GetStatXPActual(unsigned int) const;
        void GetStatLevelMaxActual(unsigned int) const;
        void ResetStats();

        // data members, from how the methods use this: 32 bytes
        char _unknown_0[8];
        ulong field_8;       // offset 8
        long field_16;       // offset 16
        undefined8 field_24; // offset 24
    };

    // 0x1004a0280, 192 bytes, base-object constructor, placed by class name
    // PlayerGameState::PlayerGameState(SkillDefaults const&)
    void PlayerGameState::PlayerGameState(SkillDefaults* param_1) {
        long lVar1;
        PlayerSkill* pPVar2;
        ulong uVar3;
        uint uVar4;
        undefined8* puVar5;
        ulong uVar6;
        PlayerSkill* local_40[3];

        uVar4 = param_1->GetTextureAtlas();
        new (this) Array<PlayerStat, eastl::allocator>((ulong)uVar4);
        field_24 = 0;
        lVar1 = end();
        if (lVar1 != 0) {
            uVar6 = 0;
            do {
                pPVar2 = (PlayerSkill*)param_1->GetSkill((int)uVar6);
                new (local_40) PlayerStat(pPVar2, false);
                puVar5 = (undefined8*)Array<PlayerStat, eastl::allocator>::operator[](
                    (Array<PlayerStat, eastl::allocator>*)this, uVar6);
                puVar5[2] = local_40[2];
                *puVar5 = local_40[0];
                puVar5[1] = local_40[1];
                uVar6 = (ulong)((int)uVar6 + 1);
                uVar3 = end();
            } while (uVar6 < uVar3);
        }
    }

    // 0x1004a0400, 16 bytes, complete-object constructor, placed by class name
    // PlayerGameState::PlayerGameState(SkillDefaults const&): jumps straight to the base-object constructor

    // 0x1004a0410, 48 bytes, placed by class name
    // PlayerGameState::GetStatXP(unsigned int, ModeAccountType const*) const
    undefined4 PlayerGameState::GetStatXP(uint param_1, ModeAccountType* param_2) {
        PlayerStat* this_00;

        this_00 = (PlayerStat*)Array<PlayerStat, eastl::allocator>::operator[](
            (Array<PlayerStat, eastl::allocator>*)this, (ulong)param_1);
        return this_00->GetCappedXP(param_2);
    }

    // 0x1004a04c0, 32 bytes, placed by class name
    // PlayerGameState::GetStatLevel(unsigned int) const
    void PlayerGameState::GetStatLevel(uint param_1) {
        StockPlayerOffer* this_00;

        this_00 = (StockPlayerOffer*)Array<PlayerStat, eastl::allocator>::operator[](
            (Array<PlayerStat, eastl::allocator>*)this, (ulong)param_1);
        this_00->GetCompletedGold();
    }

    // 0x1004a04e0, 48 bytes, placed by class name
    // PlayerGameState::GetStatLevelMax(unsigned int, ModeAccountType const*) const
    void PlayerGameState::GetStatLevelMax(uint param_1, ModeAccountType* param_2) {
        PlayerStat* this_00;

        this_00 = (PlayerStat*)Array<PlayerStat, eastl::allocator>::operator[](
            (Array<PlayerStat, eastl::allocator>*)this, (ulong)param_1);
        this_00->GetCappedXPLevel(param_2);
    }

    // 0x1004a0510, 32 bytes, placed by class name
    // PlayerGameState::GetStatXPActual(unsigned int) const
    undefined4 PlayerGameState::GetStatXPActual(uint param_1) {
        Minimap* this_00;

        this_00 = (Minimap*)Array<PlayerStat, eastl::allocator>::operator[]((Array<PlayerStat, eastl::allocator>*)this,
                                                                            (ulong)param_1);
        return this_00->GetLevel();
    }

    // 0x1004a0530, 32 bytes, placed by class name
    // PlayerGameState::GetStatLevelMaxActual(unsigned int) const
    void PlayerGameState::GetStatLevelMaxActual(uint param_1) {
        TextRun* this_00;

        this_00 = (TextRun*)Array<PlayerStat, eastl::allocator>::operator[]((Array<PlayerStat, eastl::allocator>*)this,
                                                                            (ulong)param_1);
        this_00->GetMaxLineWidth();
    }

    // 0x1004a0550, 80 bytes, placed by class name
    // PlayerGameState::ResetStats()
    void PlayerGameState::ResetStats() {
        PlayerStat* this_00;
        PlayerStat* pPVar1;

        this_00 = (PlayerStat*)data();
        pPVar1 = (PlayerStat*)end();
        for (; this_00 != pPVar1; this_00 = (PlayerStat*)&this_00->field_24) {
            this_00->Reset();
        }
    }

} // namespace jag::game
