// libs/game/runetek5/config/defaults/PlayerSkillXPTable.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "PlayerSkillXPTable.h"

namespace jag::game {
    // 0x1039bbc50, set at startup by ___cxx_global_var_init
    PlayerSkillXPTable PlayerSkillXPTable::DEFAULT = PlayerSkillXPTable();

    // 0x10054e480
    PlayerSkillXPTable::PlayerSkillXPTable() : Array<unsigned int>() {
        uint32_t* puVar1;
        unsigned long uVar3;
        double dVar5;

        unsigned int uVar4 = 0;
        PlayerSkillXPTable* pPVar2 = this;
        set_max_size(120, 0);
        unsigned long arg1 = 0;
        do {
            uVar3 = arg1 + 1;
            dVar5 = (double)pow<int, double>((int)pPVar2, (double)(uVar3 & 4294967295) * 0.14285714285714285);
            dVar5 = (double)_floor(dVar5 * 300.0 + (double)(uVar3 & 4294967295));
            puVar1 = (uint32_t*)(*this)[arg1];
            uVar4 = uVar4 + (int)(long)dVar5;
            pPVar2 = (PlayerSkillXPTable*)(unsigned long)(uVar4 >> 2);
            dVar5 = (double)floor<unsigned int>(uVar4 >> 2);
            *puVar1 = (int)(long)dVar5;
            arg1 = uVar3;
        } while (uVar3 != 120);
    }

    // 0x10054e560
    PlayerSkillXPTable::PlayerSkillXPTable(const Array<unsigned int>& arg1) : Array<unsigned int>(arg1) {}

    // 0x10054e580
    uint32_t PlayerSkillXPTable::GetXPFromLevel(unsigned int arg1) const {
        if (arg1 == 0) {
            return 0;
        }
        if (end() < arg1) {
            arg1 = end();
        }
        uint32_t* puVar2 = (uint32_t*)(*this)[(unsigned long)(arg1 - 1)];
        return *puVar2;
    }

    // 0x10054e5d0
    int PlayerSkillXPTable::GetFineXPFromLevel(unsigned int arg1) const {
        return GetXPFromLevel(arg1) * 10;
    }

    // 0x10054e5e0
    unsigned long PlayerSkillXPTable::GetLevelFromXP(unsigned int arg1) const {
        unsigned int* puVar2;
        unsigned long uVar3;

        long lVar1 = end();
        unsigned long arg1_00 = 0;
        if (lVar1 != 0) {
            do {
                puVar2 = (unsigned int*)(*this)[arg1_00];
                if (arg1 < *puVar2) {
                    return arg1_00;
                }
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar3 = end();
            } while (arg1_00 < uVar3);
        }
        return arg1_00;
    }

    // 0x10054e630
    void PlayerSkillXPTable::GetLevelFromFineXP(unsigned int arg1) const {
        GetLevelFromXP(arg1 / 10);
    }

} // namespace jag::game
