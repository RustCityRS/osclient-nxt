// libs/game/runetek5/config/defaults/PlayerSkillXPTable.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "PlayerSkillXPTable.h"

namespace jag::game {
    // 0x1039bbc50, 24 bytes, __common; set at startup by ___cxx_global_var_init
    PlayerSkillXPTable PlayerSkillXPTable::DEFAULT = PlayerSkillXPTable();

    // 0x10054e470, 16 bytes, complete-object constructor, placed by class name and debug map
    // PlayerSkillXPTable::PlayerSkillXPTable(): jumps straight to the base-object constructor

    // 0x10054e480, 192 bytes, base-object constructor, placed by class name and debug map
    // PlayerSkillXPTable::PlayerSkillXPTable()
    void PlayerSkillXPTable::PlayerSkillXPTable() {
        undefined4* puVar1;
        PlayerSkillXPTable* pPVar2;
        ulong uVar3;
        ulong uVar4;
        uint uVar5;
        double dVar6;

        new (this) Array<unsigned int, eastl::allocator>();
        uVar5 = 0;
        pPVar2 = this;
        set_max_size(120, 0);
        uVar3 = 0;
        do {
            uVar4 = uVar3 + 1;
            dVar6 = (double)pow<int, double>((int)pPVar2, (double)(uVar4 & 4294967295) * 0.14285714285714285);
            dVar6 = (double)_floor(dVar6 * 300.0 + (double)(uVar4 & 4294967295));
            puVar1 = (undefined4*)Array<unsigned int, eastl::allocator>::operator[](
                (Array<unsigned int, eastl::allocator>*)this, uVar3);
            uVar5 = uVar5 + (int)(long)dVar6;
            pPVar2 = (PlayerSkillXPTable*)(ulong)(uVar5 >> 2);
            dVar6 = (double)floor<unsigned int>(uVar5 >> 2);
            *puVar1 = (int)(long)dVar6;
            uVar3 = uVar4;
        } while (uVar4 != 120);
    }

    // 0x10054e560, 16 bytes, base-object constructor, placed by class name and debug map
    // PlayerSkillXPTable::PlayerSkillXPTable(Array<unsigned int, eastl::allocator> const&)
    void PlayerSkillXPTable::PlayerSkillXPTable(Array* param_1) {
        new (this) Array<unsigned int, eastl::allocator>(param_1);
    }

    // 0x10054e570, 16 bytes, complete-object constructor, placed by class name and debug map
    // PlayerSkillXPTable::PlayerSkillXPTable(Array<unsigned int, eastl::allocator> const&): jumps straight to the base-object constructor

    // 0x10054e580, 80 bytes, placed by class name and debug map
    // PlayerSkillXPTable::GetXPFromLevel(unsigned int) const
    undefined4 PlayerSkillXPTable::GetXPFromLevel(uint param_1) {
        ulong uVar1;
        undefined4* puVar2;

        if (param_1 == 0) {
            return 0;
        }
        uVar1 = end();
        if (uVar1 < param_1) {
            param_1 = end();
        }
        puVar2 = (undefined4*)Array<unsigned int, eastl::allocator>::operator[](
            (Array<unsigned int, eastl::allocator>*)this, (ulong)(param_1 - 1));
        return *puVar2;
    }

    // 0x10054e5d0, 16 bytes, placed by class name and debug map
    // PlayerSkillXPTable::GetFineXPFromLevel(unsigned int) const
    int PlayerSkillXPTable::GetFineXPFromLevel(uint param_1) {
        return GetXPFromLevel(this, param_1) * 10;
    }

    // 0x10054e5e0, 80 bytes, placed by class name and debug map
    // PlayerSkillXPTable::GetLevelFromXP(unsigned int) const
    ulong PlayerSkillXPTable::GetLevelFromXP(uint param_1) {
        long lVar1;
        uint* puVar2;
        ulong uVar3;
        ulong uVar4;

        lVar1 = end();
        uVar4 = 0;
        if (lVar1 != 0) {
            do {
                puVar2 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                    (Array<unsigned int, eastl::allocator>*)this, uVar4);
                if (param_1 < *puVar2) {
                    return uVar4;
                }
                uVar4 = (ulong)((int)uVar4 + 1);
                uVar3 = end();
            } while (uVar4 < uVar3);
        }
        return uVar4;
    }

    // 0x10054e630, 32 bytes, placed by class name and debug map
    // PlayerSkillXPTable::GetLevelFromFineXP(unsigned int) const
    void PlayerSkillXPTable::GetLevelFromFineXP(uint param_1) {
        GetLevelFromXP(this, param_1 / 10);
    }

    // 0x100550cf0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        new (&PlayerSkillXPTable::DEFAULT) PlayerSkillXPTable();
        ___cxa_atexit(PTR__PlayerSkillXPTable_100ee6630, &PlayerSkillXPTable::DEFAULT, 4294967296);
    }

} // namespace jag::game
