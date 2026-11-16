// libs/oldscape/rs2lib/configdecoder/db/DBUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class DBUtils {
    public:
        void GetColumnDataValues(const configdecoder::DBTableType& dbTableType,
                                 const configdecoder::DBRowType& dbRowType, unsigned int arg3);
        void UnpackColumnVarTypes(PacketJ<Array<unsigned char>>& packetJ, Array<ScriptVarType const*>& scriptVarTypes);
        void UnpackColumnDataValues(PacketJ<Array<unsigned char>>& packetJ,
                                    Array<ScriptVarType const*> const& scriptVarTypes,
                                    Array<game::VarValue>& varValues);
    };

    // 0x1000b9780
    void DBUtils::GetColumnDataValues(const configdecoder::DBTableType& dbTableType,
                                      const configdecoder::DBRowType& dbRowType, unsigned int arg3) {
        uint8_t* puVar3;

        if (*PTR_emptyList_100ee50f0 == '\0') {
            if (___cxa_guard_acquire(PTR_emptyList_100ee50f0) != 0) {
                new (PTR_emptyList_100ee9d60) Array<game::VarValue>();
                ___cxa_atexit(PTR__Array_100ee6750, PTR_emptyList_100ee9d60, 4294967296);
                ___cxa_guard_release(PTR_emptyList_100ee50f0);
            }
        }
        if (!(dbRowType.HasColumnVarValues(arg3))) {
            if (!(dbTableType.HasColumnDefaultValues(arg3))) {
                puVar3 = PTR_emptyList_100ee9d60;
            } else {
                puVar3 = (uint8_t*)dbTableType.GetColumnDefaultValues(arg3);
            }
        } else {
            puVar3 = (uint8_t*)dbRowType.GetColumnVarValues(arg3);
        }
        return puVar3;
    }

    // 0x10023a750
    void DBUtils::UnpackColumnVarTypes(PacketJ<Array<unsigned char>>& packetJ,
                                       Array<ScriptVarType const*>& scriptVarTypes) {
        uint64_t uVar1;
        uint64_t* puVar2;
        unsigned long arg1_00;

        uint8_t bVar3 = packetJ.g1();
        scriptVarTypes.set_max_size((unsigned long)bVar3, 3);
        if (bVar3 != 0) {
            arg1_00 = 0;
            do {
                uVar1 = ScriptVarType::GetByID(packetJ.gSmarts());
                puVar2 = &scriptVarTypes[arg1_00];
                *puVar2 = uVar1;
                arg1_00 = arg1_00 + 1;
            } while (bVar3 != arg1_00);
        }
    }

    // 0x10023a850
    void DBUtils::UnpackColumnDataValues(PacketJ<Array<unsigned char>>& packetJ,
                                         Array<ScriptVarType const*> const& scriptVarTypes,
                                         Array<game::VarValue>& varValues) {
        bool bVar1;
        unsigned long uVar4;
        uint64_t* puVar5;
        long* plVar6;
        uint64_t uVar7;
        unsigned long uVar8;
        unsigned long uVar9;

        unsigned int uVar2 = packetJ.gSmarts();
        long lVar3 = scriptVarTypes.end();
        varValues.set_max_size(lVar3 * (unsigned long)uVar2, 3);
        if (uVar2 != 0) {
            uVar4 = 0;
            do {
                lVar3 = scriptVarTypes.end();
                if (lVar3 != 0) {
                    uVar8 = 0;
                    uVar9 = 1;
                    do {
                        puVar5 = &scriptVarTypes[uVar8];
                        plVar6 = (long*)(*puVar5)->end();
                        lVar3 = scriptVarTypes.end();
                        uVar7 = varValues[uVar8 + lVar3 * uVar4];
                        (**(void (**)(...))(*plVar6 + 24))(plVar6, uVar7, packetJ);
                        uVar8 = scriptVarTypes.end();
                        bVar1 = uVar9 < uVar8;
                        uVar8 = uVar9;
                        uVar9 = (unsigned long)((int)uVar9 + 1);
                    } while (bVar1);
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 != uVar2);
        }
    }

} // namespace jag::oldscape
