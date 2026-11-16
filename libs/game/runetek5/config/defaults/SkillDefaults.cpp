// libs/game/runetek5/config/defaults/SkillDefaults.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "SkillDefaults.h"

namespace jag::game {
    // 0x10017b8a0: SkillDefaults::GetSkillCount() const has the same machine code as PacketT<Array<unsigned char, BucketAllocatorEASTL>>::GetSize() const

    // 0x10054e650
    SkillDefaults::SkillDefaults(PacketT<Array<unsigned char>>& arg1) : Array<PlayerSkill>() {
        uint8_t bVar1;
        uint8_t bVar2;
        uint8_t bVar3;
        char cVar4;
        uint8_t uVar5;
        unsigned short uVar6;
        uint32_t uVar7;
        Logger* this_00;
        uint64_t* puVar8;
        uint32_t* puVar10;
        unsigned long uVar11;
        PlayerSkillXPTable* this_01;
        int arg7;
        unsigned long uVar12;
        unsigned int uVar13;
        PlayerSkillXPTable* in_stack_ffffffffffffff58;
        uint32_t uVar14;
        PlayerSkill local_98;
        PlayerSkillXPTable local_70;
        unsigned long local_58;
        unsigned short local_3a;
        unsigned int local_38;
        uint8_t local_31;

        Array<PlayerSkillXPTable>* local_48 = (Array<PlayerSkillXPTable>*)&field_24;
        new (local_48) Array<PlayerSkillXPTable>();
        while (true) {
            while (true) {
                while (true) {
                    uVar7 = arg1.g1();
                    uVar14 = (uint32_t)((unsigned long)in_stack_ffffffffffffff58 >> 32);
                    cVar4 = (char)uVar7;
                    if (cVar4 != '\x01')
                        break;
                    bVar3 = arg1.g1();
                    uVar12 = (unsigned long)bVar3;
                    set_max_size(uVar12, 0);
                    if (bVar3 != 0) {
                        do {
                            bVar3 = arg1.g1();
                            local_3a = arg1.g2();
                            bVar1 = arg1.g1();
                            local_38 = 0;
                            if ((bVar1 & 2) != 0) {
                                bVar2 = arg1.g1();
                                local_38 = (unsigned int)bVar2;
                            }
                            in_stack_ffffffffffffff58 = (PlayerSkillXPTable*)&PlayerSkillXPTable::DEFAULT;
                            local_58 = uVar12;
                            local_31 = bVar3;
                            if ((bVar1 & 4) != 0) {
                                bVar3 = arg1.g1();
                                in_stack_ffffffffffffff58 = (PlayerSkillXPTable*)(*local_48)[(unsigned long)bVar3];
                            }
                            arg7 = 1;
                            if ((bVar1 & 8) != 0) {
                                cVar4 = arg1.g1s();
                                arg7 = (int)cVar4;
                            }
                            cVar4 = arg1.g1();
                            uVar12 = (unsigned long)local_31;
                            local_98 = PlayerSkill((unsigned int)local_31, (unsigned int)local_3a, (bool)(bVar1 & 1),
                                                   cVar4 == '\x01', local_38, in_stack_ffffffffffffff58, arg7);
                            puVar8 = (uint64_t*)(*this)[uVar12];
                            *(int*)(puVar8 + 4) = local_98.field_32;
                            puVar8[2] = local_98._16_8_;
                            puVar8[3] = local_98.field_24;
                            *puVar8 = local_98._0_8_;
                            puVar8[1] = local_98._8_8_;
                            uVar13 = (int)local_58 - 1;
                            uVar12 = (unsigned long)uVar13;
                        } while (uVar13 != 0);
                    }
                }
                if (cVar4 != '\x02')
                    break;
                bVar3 = arg1.g1();
                local_48->set_max_size((unsigned long)bVar3, 0);
                cVar4 = arg1.g1();
                local_38 = (((uint32_t)local_38._1_3_ << 8) | (uint8_t)cVar4);
                while (cVar4 != -1) {
                    local_98 = Array<unsigned int>();
                    uVar6 = arg1.g2();
                    local_98.set_max_size((unsigned long)uVar6, 0);
                    if (local_98.end() != 0) {
                        uVar13 = 1;
                        uVar12 = 0;
                        do {
                            uVar7 = arg1.g4();
                            puVar10 = &local_98[uVar12];
                            *puVar10 = uVar7;
                            uVar12 = (unsigned long)uVar13;
                            uVar11 = local_98.end();
                            uVar13 = uVar13 + 1;
                        } while (uVar12 < uVar11);
                    }
                    local_70 = PlayerSkillXPTable(local_98);
                    this_01 = (PlayerSkillXPTable*)(*local_48)[(unsigned long)(uint8_t)local_38];
                    *this_01 = local_70;
                    uVar5 = arg1.g1();
                    local_38 = (((uint32_t)local_38._1_3_ << 8) | (uint8_t)uVar5);
                    cVar4 = (uint8_t)local_38;
                }
            }
            if (!cVar4)
                break;
            this_00 = logger::default_logger();
            in_stack_ffffffffffffff58 =
                (PlayerSkillXPTable*)((((uint64_t)uVar14 << 32) | (uint32_t)uVar7) & 18446744069414584575);
            this_00->Log(false, 8,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                         "defaults/SkillDefaults.cpp",
                         75, "SkillDefaults: Error unrecognised .defaults config code: %u", in_stack_ffffffffffffff58);
        }
    }

} // namespace jag::game
