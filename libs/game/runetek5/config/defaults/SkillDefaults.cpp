// libs/game/runetek5/config/defaults/SkillDefaults.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "SkillDefaults.h"

namespace jag::game {
    // 0x10017b8a0: the linker folded this into PacketT<Array<unsigned char, BucketAllocatorEASTL> >::GetSize() const, which has identical code
    SkillDefaults::GetSkillCount() const;

    // 0x10054e650, 800 bytes, base-object constructor, placed by class name and debug map
    // SkillDefaults::SkillDefaults(PacketT<Array<unsigned char, eastl::allocator> >&)
    void SkillDefaults::SkillDefaults(PacketT* param_1) {
        byte bVar1;
        byte bVar2;
        byte bVar3;
        char cVar4;
        undefined1 uVar5;
        ushort uVar6;
        undefined4 uVar7;
        undefined8 uVar8;
        undefined8* puVar9;
        long lVar10;
        undefined4* puVar11;
        ulong uVar12;
        PlayerSkillXPTable* this_00;
        int iVar13;
        ulong uVar14;
        uint uVar15;
        PlayerSkillXPTable* in_stack_ffffffffffffff58;
        undefined4 uVar16;
        PlayerSkill local_98;
        PlayerSkillXPTable local_70;
        ulong local_58;
        Array<PlayerSkillXPTable, eastl::allocator>* local_48;
        ushort local_3a;
        uint local_38;
        byte local_31;

        new (this) Array<PlayerSkill, eastl::allocator>();
        local_48 = (Array<PlayerSkillXPTable, eastl::allocator>*)&field_24;
        Array<PlayerSkillXPTable, eastl::allocator>::Array(local_48);
        while (true) {
            while (true) {
                while (true) {
                    uVar7 = param_1->g1();
                    uVar16 = (undefined4)((ulong)in_stack_ffffffffffffff58 >> 32);
                    cVar4 = (char)uVar7;
                    if (cVar4 != '\x01')
                        break;
                    bVar3 = param_1->g1();
                    uVar14 = (ulong)bVar3;
                    ((SkillDefaults*)this)->set_max_size(uVar14, 0);
                    if (bVar3 != 0) {
                        do {
                            bVar3 = param_1->g1();
                            local_3a = param_1->g2();
                            bVar1 = param_1->g1();
                            local_38 = 0;
                            if ((bVar1 & 2) != 0) {
                                bVar2 = param_1->g1();
                                local_38 = (uint)bVar2;
                            }
                            in_stack_ffffffffffffff58 = (PlayerSkillXPTable*)&PlayerSkillXPTable::DEFAULT;
                            local_58 = uVar14;
                            local_31 = bVar3;
                            if ((bVar1 & 4) != 0) {
                                bVar3 = param_1->g1();
                                in_stack_ffffffffffffff58 =
                                    (PlayerSkillXPTable*)Array<PlayerSkillXPTable, eastl::allocator>::operator[](
                                        local_48, (ulong)bVar3);
                            }
                            iVar13 = 1;
                            if ((bVar1 & 8) != 0) {
                                cVar4 = param_1->g1s();
                                iVar13 = (int)cVar4;
                            }
                            cVar4 = param_1->g1();
                            uVar14 = (ulong)local_31;
                            new (&local_98) PlayerSkill((uint)local_31, (uint)local_3a, (bool)(bVar1 & 1),
                                                        cVar4 == '\x01', local_38, in_stack_ffffffffffffff58, iVar13);
                            puVar9 = (undefined8*)Array<PlayerSkill, eastl::allocator>::operator[](
                                (Array<PlayerSkill, eastl::allocator>*)(SkillDefaults*)this, uVar14);
                            *(int*)(puVar9 + 4) = local_98.field_32;
                            puVar9[2] = local_98._16_8_;
                            puVar9[3] = local_98.field_24;
                            *puVar9 = local_98._0_8_;
                            puVar9[1] = local_98._8_8_;
                            uVar15 = (int)local_58 - 1;
                            uVar14 = (ulong)uVar15;
                        } while (uVar15 != 0);
                    }
                }
                if (cVar4 != '\x02')
                    break;
                bVar3 = param_1->g1();
                local_48->set_max_size((ulong)bVar3, 0);
                cVar4 = param_1->g1();
                local_38 = CONCAT31(local_38._1_3_, cVar4);
                while (cVar4 != -1) {
                    new (&local_98) Array<unsigned int, eastl::allocator>();
                    uVar6 = param_1->g2();
                    local_98.set_max_size((ulong)uVar6, 0);
                    lVar10 = local_98.end();
                    if (lVar10 != 0) {
                        uVar15 = 1;
                        uVar14 = 0;
                        do {
                            uVar7 = param_1->g4();
                            puVar11 = (undefined4*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)&local_98, uVar14);
                            *puVar11 = uVar7;
                            uVar14 = (ulong)uVar15;
                            uVar12 = local_98.end();
                            uVar15 = uVar15 + 1;
                        } while (uVar14 < uVar12);
                    }
                    new (&local_70) PlayerSkillXPTable((Array*)&local_98);
                    this_00 = (PlayerSkillXPTable*)Array<PlayerSkillXPTable, eastl::allocator>::operator[](
                        local_48, (ulong)(byte)local_38);
                    PlayerSkillXPTable::operator=(this_00, &local_70);
                    local_70.~PlayerSkillXPTable();
                    uVar5 = param_1->g1();
                    local_38 = CONCAT31(local_38._1_3_, uVar5);
                    local_98.~Array();
                    cVar4 = (byte)local_38;
                }
            }
            if (cVar4 == '\0')
                break;
            uVar8 = logger::default_logger();
            in_stack_ffffffffffffff58 = (PlayerSkillXPTable*)(CONCAT44(uVar16, uVar7) & 18446744069414584575);
            logger::Logger::Log(uVar8, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/defaults/SkillDefaults.cpp",
                                75, "SkillDefaults: Error unrecognised .defaults config code: %u",
                                in_stack_ffffffffffffff58);
        }
    }

    // 0x10054ed60, 16 bytes, complete-object constructor, placed by class name
    // SkillDefaults::SkillDefaults(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

} // namespace jag::game
