// libs/game/runetek5/config/db/DBUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class DBUtils {
    public:
        uint GetDBCachingKey(unsigned int);
        uint GetDBFieldTable(unsigned int);
        int GetDBTupleIndex(unsigned int);
        uint GetDBFieldColumn(unsigned int);
        void UnpackColumnVarTypes(PacketT<Array<unsigned char, eastl::allocator>>&,
                                  Array<ScriptVarType const*, eastl::allocator>&);
        void UnpackColumnDataValues(PacketT<Array<unsigned char, eastl::allocator>>&,
                                    Array<ScriptVarType const*, eastl::allocator> const&,
                                    Array<VarValue, eastl::allocator>&);
    };

    // 0x100024520, 16 bytes, inline, placed by class name and debug map
    // DBUtils::GetDBCachingKey(unsigned int)
    uint DBUtils::GetDBCachingKey(uint param_1) {
        return param_1 >> 4;
    }

    // 0x1000b96b0, 16 bytes, inline, placed by class name
    // DBUtils::GetDBFieldTable(unsigned int)
    uint DBUtils::GetDBFieldTable(uint param_1) {
        return param_1 >> 12;
    }

    // 0x1000b96c0, 16 bytes, inline, placed by class name
    // DBUtils::GetDBTupleIndex(unsigned int)
    int DBUtils::GetDBTupleIndex(uint param_1) {
        return (param_1 & 15) - 1;
    }

    // 0x1000b96e0, 16 bytes, inline, placed by class name
    // DBUtils::GetDBFieldColumn(unsigned int)
    uint DBUtils::GetDBFieldColumn(uint param_1) {
        return param_1 >> 4 & 255;
    }

    // 0x10055a6e0, 128 bytes, inline, placed by class name
    // DBUtils::UnpackColumnVarTypes(PacketT<Array<unsigned char, eastl::allocator> >&, Array<ScriptVarType const*, eastl::allocator>&)
    void DBUtils::UnpackColumnVarTypes(PacketT* param_1, Array* param_2) {
        byte bVar1;
        undefined1 uVar2;
        undefined1 extraout_AL;
        undefined1 extraout_AL_00;
        undefined1 extraout_AH;
        undefined1 extraout_AH_00;
        undefined1 extraout_AH_01;
        undefined6 extraout_var;
        undefined6 extraout_var_00;
        ulong uVar3;

        bVar1 = param_1->g1();
        param_2->set_max_size((ulong)bVar1, 0);
        if (bVar1 != 0) {
            uVar3 = 0;
            do {
                uVar2 = param_1->gSmart1or2();
                ScriptVarType::GetByID((uint)CONCAT11(extraout_AH, uVar2));
                Array<ScriptVarType_const*, eastl::allocator>::operator[](
                    (Array<ScriptVarType_const*, eastl::allocator>*)param_2, uVar3);
                *(ulong*)CONCAT62(extraout_var_00, CONCAT11(extraout_AH_01, extraout_AL_00)) =
                    CONCAT62(extraout_var, CONCAT11(extraout_AH_00, extraout_AL));
                uVar3 = uVar3 + 1;
            } while (bVar1 != uVar3);
        }
    }

    // 0x10055a7e0, 256 bytes, inline, placed by class name
    // DBUtils::UnpackColumnDataValues(PacketT<Array<unsigned char, eastl::allocator> >&, Array<ScriptVarType const*, eastl::allocator> const&, Array<VarValue, eastl::allocator>&)
    void DBUtils::UnpackColumnDataValues(PacketT* param_1, Array* param_2, Array* param_3) {
        bool bVar1;
        ushort uVar2;
        long lVar3;
        ulong uVar4;
        long* plVar5;
        undefined8 uVar6;
        ulong uVar7;
        ulong uVar8;

        uVar2 = param_1->gSmart1or2();
        lVar3 = param_2->end();
        param_3->set_max_size(lVar3 * (ulong)uVar2, 0);
        if (uVar2 != 0) {
            uVar4 = 0;
            do {
                lVar3 = param_2->end();
                if (lVar3 != 0) {
                    uVar7 = 0;
                    uVar8 = 1;
                    do {
                        plVar5 = (long*)Array<ScriptVarType_const*, eastl::allocator>::operator[](
                            (Array<ScriptVarType_const*, eastl::allocator>*)param_2, uVar7);
                        plVar5 = *(long**)(*plVar5 + 8);
                        lVar3 = param_2->end();
                        uVar6 = Array<VarValue, eastl::allocator>::operator[](
                            (Array<VarValue, eastl::allocator>*)param_3, uVar7 + lVar3 * uVar4);
                        (**(code**)(*plVar5 + 24))(plVar5, uVar6, param_1);
                        uVar7 = param_2->end();
                        bVar1 = uVar8 < uVar7;
                        uVar7 = uVar8;
                        uVar8 = (ulong)((int)uVar8 + 1);
                    } while (bVar1);
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 != uVar2);
        }
    }

} // namespace jag::game
