// libs/game/runetek5/config/db/DBUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class DBUtils {
    public:
        unsigned int GetDBCachingKey(unsigned int arg1);
        unsigned int GetDBFieldTable(unsigned int arg1);
        int GetDBTupleIndex(unsigned int arg1);
        unsigned int GetDBFieldColumn(unsigned int arg1);
        void UnpackColumnVarTypes(PacketT<Array<unsigned char>>& arg1, Array<ScriptVarType const*>& scriptVarTypes);
        void UnpackColumnDataValues(PacketT<Array<unsigned char>>& arg1,
                                    Array<ScriptVarType const*> const& scriptVarTypes, Array<VarValue>& varValues);
    };

    // 0x100024520
    unsigned int DBUtils::GetDBCachingKey(unsigned int arg1) {
        return arg1 >> 4;
    }

    // 0x1000b96b0
    unsigned int DBUtils::GetDBFieldTable(unsigned int arg1) {
        return arg1 >> 12;
    }

    // 0x1000b96c0
    int DBUtils::GetDBTupleIndex(unsigned int arg1) {
        return (arg1 & 15) - 1;
    }

    // 0x1000b96e0
    unsigned int DBUtils::GetDBFieldColumn(unsigned int arg1) {
        return arg1 >> 4 & 255;
    }

    // 0x10055a6e0
    void DBUtils::UnpackColumnVarTypes(PacketT<Array<unsigned char>>& arg1,
                                       Array<ScriptVarType const*>& scriptVarTypes) {
        uint8_t uVar2;
        uint8_t extraout_AL;
        uint8_t extraout_AL_00;
        uint8_t extraout_AH;
        uint8_t extraout_AH_00;
        uint8_t extraout_AH_01;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        unsigned long arg1_00;

        uint8_t bVar1 = arg1.g1();
        scriptVarTypes.set_max_size((unsigned long)bVar1, 0);
        if (bVar1 != 0) {
            arg1_00 = 0;
            do {
                uVar2 = arg1.gSmart1or2();
                ScriptVarType::GetByID((unsigned int)(((uint16_t)extraout_AH << 8) | (uint8_t)uVar2));
                scriptVarTypes[arg1_00];
                *(unsigned long*)(((uint64_t)extraout_var_00 << 16) |
                                  (uint16_t)((((uint16_t)extraout_AH_01 << 8) | (uint8_t)extraout_AL_00))) =
                    (((uint64_t)extraout_var << 16) |
                     (uint16_t)((((uint16_t)extraout_AH_00 << 8) | (uint8_t)extraout_AL)));
                arg1_00 = arg1_00 + 1;
            } while (bVar1 != arg1_00);
        }
    }

    // 0x10055a7e0
    void DBUtils::UnpackColumnDataValues(PacketT<Array<unsigned char>>& arg1,
                                         Array<ScriptVarType const*> const& scriptVarTypes,
                                         Array<VarValue>& varValues) {
        bool bVar1;
        unsigned long uVar4;
        long* plVar5;
        uint64_t uVar6;
        unsigned long uVar7;
        unsigned long uVar8;

        unsigned short uVar2 = arg1.gSmart1or2();
        long lVar3 = scriptVarTypes.end();
        varValues.set_max_size(lVar3 * (unsigned long)uVar2, 0);
        if (uVar2 != 0) {
            uVar4 = 0;
            do {
                lVar3 = scriptVarTypes.end();
                if (lVar3 != 0) {
                    uVar7 = 0;
                    uVar8 = 1;
                    do {
                        plVar5 = &scriptVarTypes[uVar7];
                        plVar5 = *(long**)(*plVar5 + 8);
                        lVar3 = scriptVarTypes.end();
                        uVar6 = varValues[uVar7 + lVar3 * uVar4];
                        (**(void (**)(...))(*plVar5 + 24))(plVar5, uVar6, arg1);
                        uVar7 = scriptVarTypes.end();
                        bVar1 = uVar8 < uVar7;
                        uVar7 = uVar8;
                        uVar8 = (unsigned long)((int)uVar8 + 1);
                    } while (bVar1);
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 != uVar2);
        }
    }

} // namespace jag::game
