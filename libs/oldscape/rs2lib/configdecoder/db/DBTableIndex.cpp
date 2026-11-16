// libs/oldscape/rs2lib/configdecoder/db/DBTableIndex.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "DBTableIndex.h"

namespace jag::oldscape {
    // 0x10023acc0, 64 bytes, base-object constructor, placed by class name and debug map
    // DBTableIndex::DBTableIndex(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void DBTableIndex::DBTableIndex(PacketJ* param_1) {
        new (this) MakeSharedPool<DBTableIndex, 64>();
        new (this) eastl::vector<
            eastl::vector_map<
                game::VarValue, Array<int, eastl::allocator>, eastl::less<game::VarValue>, eastl::allocator,
                eastl::vector<eastl::pair<game::VarValue, Array<int, eastl::allocator>>, eastl::allocator>>,
            eastl::allocator>();
        Deserialise(this, param_1);
    }

    // 0x10023ad70, 368 bytes, placed by class name and debug map
    // DBTableIndex::Deserialise(PacketJ<Array<unsigned char, eastl::allocator> >&)
    ulong DBTableIndex::Deserialise(PacketJ* param_1) {
        byte bVar1;
        uint uVar2;
        undefined4 uVar3;
        ulong uVar4;
        vector_map<game::VarValue, Array<int, eastl::allocator>, eastl::less<game::VarValue>, eastl::allocator,
                   eastl::vector<eastl::pair<game::VarValue, Array<int, eastl::allocator>>, eastl::allocator>>* this_00;
        Array<int, eastl::allocator>* this_01;
        undefined4* puVar5;
        ulong uVar6;
        VarValue local_78[32];
        ulong local_58;
        long* local_50;
        DBTableIndex* local_48;
        ulong local_40;
        ulong local_38;

        param_1->SetPos(0);
        uVar2 = param_1->gVarInt();
        local_40 = (ulong)uVar2;
        local_48 = this;
        local_38 = resize(local_40);
        if (uVar2 != 0) {
            local_38 = 0;
            do {
                bVar1 = param_1->g1();
                local_50 = (long*)game::BaseVarType::GetByID((uint)bVar1);
                uVar4 = param_1->gVarInt();
                uVar2 = (uint)uVar4;
                uVar6 = local_58;
                while (local_58 = uVar4, uVar2 != 0) {
                    game::VarValue::VarValue(local_78);
                    (**(code**)(*local_50 + 24))(local_50, local_78, param_1);
                    uVar2 = param_1->gVarInt();
                    this_00 = (vector_map<game::VarValue, Array<int, eastl::allocator>, eastl::less<game::VarValue>,
                                          eastl::allocator,
                                          eastl::vector<eastl::pair<game::VarValue, Array<int, eastl::allocator>>,
                                                        eastl::allocator>>*)
                        eastl::vector<
                            eastl::vector_map<game::VarValue, Array<int, eastl::allocator>, eastl::less<game::VarValue>,
                                              eastl::allocator,
                                              eastl::vector<eastl::pair<game::VarValue, Array<int, eastl::allocator>>,
                                                            eastl::allocator>>,
                            eastl::allocator>::
                        operator[]((vector<eastl::vector_map<
                                               game::VarValue, Array<int, eastl::allocator>,
                                               eastl::less<game::VarValue>, eastl::allocator,
                                               eastl::vector<eastl::pair<game::VarValue, Array<int, eastl::allocator>>,
                                                             eastl::allocator>>,
                                           eastl::allocator>*)local_48,
                                   local_38);
                    this_01 = (Array<int, eastl::allocator>*)eastl::vector_map<
                        game::VarValue, Array<int, eastl::allocator>, eastl::less<game::VarValue>, eastl::allocator,
                        eastl::vector<eastl::pair<game::VarValue, Array<int, eastl::allocator>>,
                                      eastl::allocator>>::operator[](this_00, local_78);
                    this_01->set_max_size((ulong)uVar2, 5);
                    if (uVar2 != 0) {
                        uVar6 = 0;
                        do {
                            uVar3 = param_1->gVarInt();
                            puVar5 = (undefined4*)Array<int, eastl::allocator>::operator[](this_01, uVar6);
                            *puVar5 = uVar3;
                            uVar6 = uVar6 + 1;
                        } while (uVar2 != uVar6);
                    }
                    local_78->~VarValue();
                    uVar2 = (int)local_58 - 1;
                    uVar4 = (ulong)uVar2;
                    uVar6 = local_58;
                }
                local_38 = local_38 + 1;
                local_58 = uVar6;
            } while (local_38 != local_40);
        }
        return local_38;
    }

    // 0x10023aef0, 16 bytes, complete-object constructor, placed by class name and debug map
    // DBTableIndex::DBTableIndex(PacketJ<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x10023b070, 208 bytes, placed by class name and debug map
    // DBTableIndex::GetDBRowsForValue(game::VarValue const&, int) const
    undefined1* DBTableIndex::GetDBRowsForValue(VarValue* param_1, int param_2) {
        int iVar1;
        vector_map<game::VarValue, Array<int, eastl::allocator>, eastl::less<game::VarValue>, eastl::allocator,
                   eastl::vector<eastl::pair<game::VarValue, Array<int, eastl::allocator>>, eastl::allocator>>* this_00;
        long lVar2;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        long lVar3;
        undefined1* puVar4;
        ulong uVar5;

        if (GetDBRowsForValue(game::VarValue_const&, int)::emptyList == '\0') {
            iVar1 = ___cxa_guard_acquire(&GetDBRowsForValue(game::VarValue_const&, int)::emptyList);
            if (iVar1 != 0) {
                new (&GetDBRowsForValue(game::VarValue_const&, int)::emptyList) Array<int, eastl::allocator>();
                ___cxa_atexit(PTR__Array_100ee6800, &GetDBRowsForValue(game::VarValue_const&, int)::emptyList,
                              4294967296);
                ___cxa_guard_release(&GetDBRowsForValue(game::VarValue_const&, int)::emptyList);
            }
        }
        uVar5 = 0;
        if (-1 < param_2) {
            uVar5 = (ulong)(uint)param_2;
        }
        this_00 = (vector_map<
                   game::VarValue, Array<int, eastl::allocator>, eastl::less<game::VarValue>, eastl::allocator,
                   eastl::vector<eastl::pair<game::VarValue, Array<int, eastl::allocator>>, eastl::allocator>>*)
            eastl::vector<
                eastl::vector_map<
                    game::VarValue, Array<int, eastl::allocator>, eastl::less<game::VarValue>, eastl::allocator,
                    eastl::vector<eastl::pair<game::VarValue, Array<int, eastl::allocator>>, eastl::allocator>>,
                eastl::allocator>::
            operator[](
                (vector<eastl::vector_map<
                            game::VarValue, Array<int, eastl::allocator>, eastl::less<game::VarValue>, eastl::allocator,
                            eastl::vector<eastl::pair<game::VarValue, Array<int, eastl::allocator>>, eastl::allocator>>,
                        eastl::allocator>*)this,
                uVar5);
        lVar2 = eastl::vector_map<
            game::VarValue, Array<int, eastl::allocator>, eastl::less<game::VarValue>, eastl::allocator,
            eastl::vector<eastl::pair<game::VarValue, Array<int, eastl::allocator>>, eastl::allocator>>::find(this_00,
                                                                                                              param_1);
        this_01 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)eastl::vector<
            eastl::vector_map<
                game::VarValue, Array<int, eastl::allocator>, eastl::less<game::VarValue>, eastl::allocator,
                eastl::vector<eastl::pair<game::VarValue, Array<int, eastl::allocator>>, eastl::allocator>>,
            eastl::allocator>::
        operator[](
            (vector<eastl::vector_map<
                        game::VarValue, Array<int, eastl::allocator>, eastl::less<game::VarValue>, eastl::allocator,
                        eastl::vector<eastl::pair<game::VarValue, Array<int, eastl::allocator>>, eastl::allocator>>,
                    eastl::allocator>*)this,
            uVar5);
        lVar3 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
        puVar4 = &GetDBRowsForValue(game::VarValue_const&, int)::emptyList;
        if (lVar2 != lVar3) {
            puVar4 = (undefined1*)(lVar2 + 32);
        }
        return puVar4;
    }

} // namespace jag::oldscape
