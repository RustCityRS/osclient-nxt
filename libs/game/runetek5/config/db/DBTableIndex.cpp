// libs/game/runetek5/config/db/DBTableIndex.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "libs/oldscape/rs2lib/configdecoder/db/DBTableIndex.h"

namespace jag::game {
    // 0x100255430: DBTableIndex::~DBTableIndex() has the same machine code as oldscape::DBTableIndex::~DBTableIndex()

    // 0x10055a1a0
    DBTableIndex::DBTableIndex(PacketT<Array<unsigned char>>& arg1)
        : MakeSharedPool<DBTableIndex, 64>(), eastl::vector<eastl::vector_map<VarValue, Array<int>>>() {
        Deserialise(arg1);
    }

    // 0x10055a240
    unsigned long DBTableIndex::Deserialise(PacketT<Array<unsigned char>>& arg1) {
        uint8_t bVar1;
        uint32_t uVar3;
        unsigned long uVar4;
        vector_map<VarValue, Array<int>>* this_00;
        Array<int>* this_01;
        uint32_t* puVar5;
        unsigned long uVar6;
        VarValue local_78;
        unsigned long local_58;
        long* local_50;

        arg1.SetPos(0);
        unsigned int uVar2 = arg1.gVarInt();
        unsigned long local_40 = (unsigned long)uVar2;
        return local_38 = resize(local_40);
        if (uVar2 != 0) {
            local_38 = 0;
            do {
                bVar1 = arg1.g1();
                local_50 = (long*)BaseVarType::GetByID((unsigned int)bVar1);
                uVar4 = arg1.gVarInt();
                uVar2 = (unsigned int)uVar4;
                uVar6 = local_58;
                while (local_58 = uVar4, uVar2 != 0) {
                    local_78 = VarValue();
                    (**(void (**)(...))(*local_50 + 24))(local_50, &local_78, arg1);
                    uVar2 = arg1.gVarInt();
                    this_00 = (vector_map<VarValue, Array<int>>*)(*this)[local_38];
                    this_01 = (Array<int>*)(*this_00)[local_78];
                    this_01->set_max_size((unsigned long)uVar2, 0);
                    if (uVar2 != 0) {
                        uVar6 = 0;
                        do {
                            uVar3 = arg1.gVarInt();
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

    // 0x10055a3b0
    uint8_t* DBTableIndex::GetDBRowsForValue(const VarValue& varValue, unsigned int arg2) const {
        if (GetDBRowsForValue(VarValue const&, unsigned int)::emptyList == '\0') {
            if (___cxa_guard_acquire(&GetDBRowsForValue(VarValue const&, unsigned int)::emptyList) != 0) {
                new ((Array<int>*)&GetDBRowsForValue(VarValue const&, unsigned int)::emptyList) Array<int>();
                ___cxa_atexit(PTR__Array_100ee6800, &GetDBRowsForValue(VarValue const&, unsigned int)::emptyList,
                              4294967296);
                ___cxa_guard_release(&GetDBRowsForValue(VarValue const&, unsigned int)::emptyList);
            }
        }
        long lVar2 = ((vector_map<VarValue, Array<int>>*)(*this)[(unsigned long)arg2])->find(varValue);
        long lVar3 =
            ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[(unsigned long)arg2])->end();
        uint8_t* puVar4 = &GetDBRowsForValue(VarValue const&, unsigned int)::emptyList;
        if (lVar2 != lVar3) {
            puVar4 = (uint8_t*)(lVar2 + 32);
        }
        return puVar4;
    }

} // namespace jag::game
