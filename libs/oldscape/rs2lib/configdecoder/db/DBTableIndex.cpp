// libs/oldscape/rs2lib/configdecoder/db/DBTableIndex.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "DBTableIndex.h"

namespace jag::oldscape {
    // 0x10023acc0
    DBTableIndex::DBTableIndex(PacketJ<Array<unsigned char>>& packetJ)
        : MakeSharedPool<DBTableIndex, 64>(), eastl::vector<eastl::vector_map<game::VarValue, Array<int>>>() {
        Deserialise(packetJ);
    }

    // 0x10023ad70
    unsigned long DBTableIndex::Deserialise(PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t bVar1;
        uint32_t uVar3;
        unsigned long uVar4;
        vector_map<game::VarValue, Array<int>>* this_00;
        Array<int>* this_01;
        uint32_t* puVar5;
        unsigned long uVar6;
        VarValue local_78;
        unsigned long local_58;
        long* local_50;

        packetJ.SetPos(0);
        unsigned int uVar2 = packetJ.gVarInt();
        unsigned long local_40 = (unsigned long)uVar2;
        return local_38 = resize(local_40);
        if (uVar2 != 0) {
            local_38 = 0;
            do {
                bVar1 = packetJ.g1();
                local_50 = (long*)game::BaseVarType::GetByID((unsigned int)bVar1);
                uVar4 = packetJ.gVarInt();
                uVar2 = (unsigned int)uVar4;
                uVar6 = local_58;
                while (local_58 = uVar4, uVar2 != 0) {
                    local_78 = game::VarValue();
                    (**(void (**)(...))(*local_50 + 24))(local_50, &local_78, packetJ);
                    uVar2 = packetJ.gVarInt();
                    this_00 = (vector_map<game::VarValue, Array<int>>*)(*this)[local_38];
                    this_01 = (Array<int>*)(*this_00)[local_78];
                    this_01->set_max_size((unsigned long)uVar2, 5);
                    if (uVar2 != 0) {
                        uVar6 = 0;
                        do {
                            uVar3 = packetJ.gVarInt();
                            puVar5 = (uint32_t*)(*this_01)[uVar6];
                            *puVar5 = uVar3;
                            uVar6 = uVar6 + 1;
                        } while (uVar2 != uVar6);
                    }
                    uVar2 = (int)local_58 - 1;
                    uVar4 = (unsigned long)uVar2;
                    uVar6 = local_58;
                }
                local_38 = local_38 + 1;
                local_58 = uVar6;
            } while (local_38 != local_40);
        }
        return local_38;
    }

    // 0x10023b070
    uint8_t* DBTableIndex::GetDBRowsForValue(const game::VarValue& varValue, int arg2) const {
        if (GetDBRowsForValue(game::VarValue const&, int)::emptyList == '\0') {
            if (___cxa_guard_acquire(&GetDBRowsForValue(game::VarValue const&, int)::emptyList) != 0) {
                new ((Array<int>*)&GetDBRowsForValue(game::VarValue const&, int)::emptyList) Array<int>();
                ___cxa_atexit(PTR__Array_100ee6800, &GetDBRowsForValue(game::VarValue const&, int)::emptyList,
                              4294967296);
                ___cxa_guard_release(&GetDBRowsForValue(game::VarValue const&, int)::emptyList);
            }
        }
        unsigned long arg1 = 0;
        if (-1 < arg2) {
            arg1 = (unsigned long)(unsigned int)arg2;
        }
        long lVar2 = ((vector_map<game::VarValue, Array<int>>*)(*this)[arg1])->find(varValue);
        long lVar3 = ((vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[arg1])->end();
        uint8_t* puVar4 = &GetDBRowsForValue(game::VarValue const&, int)::emptyList;
        if (lVar2 != lVar3) {
            puVar4 = (uint8_t*)(lVar2 + 32);
        }
        return puVar4;
    }

} // namespace jag::oldscape
