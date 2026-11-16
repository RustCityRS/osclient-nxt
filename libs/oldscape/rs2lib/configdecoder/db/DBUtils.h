// libs/oldscape/rs2lib/configdecoder/db/DBUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class DBUtils {
    public:
        GetColumnDataValues(configdecoder::DBTableType const&, configdecoder::DBRowType const&, unsigned int);
        void UnpackColumnVarTypes(PacketJ<Array<unsigned char, eastl::allocator>>&,
                                  Array<ScriptVarType const*, eastl::allocator>&);
        void UnpackColumnDataValues(PacketJ<Array<unsigned char, eastl::allocator>>&,
                                    Array<ScriptVarType const*, eastl::allocator> const&,
                                    Array<game::VarValue, eastl::allocator>&);
    };

    // 0x1000b9780, 208 bytes, inline, placed by class name and debug map
    // DBUtils::GetColumnDataValues(configdecoder::DBTableType const&, configdecoder::DBRowType const&, unsigned int)
    undefined* DBUtils::GetColumnDataValues(DBTableType* param_1, DBRowType* param_2, uint param_3) {
        char cVar1;
        undefined* puVar3;

        if (*PTR_emptyList_100ee50f0 == '\0') {
            if (___cxa_guard_acquire(PTR_emptyList_100ee50f0) != 0) {
                new (PTR_emptyList_100ee9d60) Array<game::VarValue, eastl::allocator>();
                ___cxa_atexit(PTR__Array_100ee6750, PTR_emptyList_100ee9d60, 4294967296);
                ___cxa_guard_release(PTR_emptyList_100ee50f0);
            }
        }
        cVar1 = param_2->HasColumnVarValues(param_3);
        if (cVar1 == '\0') {
            cVar1 = param_1->HasColumnDefaultValues(param_3);
            if (cVar1 == '\0') {
                puVar3 = PTR_emptyList_100ee9d60;
            } else {
                puVar3 = (undefined*)param_1->GetColumnDefaultValues(param_3);
            }
        } else {
            puVar3 = (undefined*)param_2->GetColumnVarValues(param_3);
        }
        return puVar3;
    }

    // 0x10023a750, 128 bytes, inline, placed by class name
    // DBUtils::UnpackColumnVarTypes(PacketJ<Array<unsigned char, eastl::allocator> >&, Array<ScriptVarType const*, eastl::allocator>&)
    void DBUtils::UnpackColumnVarTypes(PacketJ* param_1, Array* param_2) {
        undefined8 uVar1;
        undefined8* puVar2;
        byte bVar3;
        uint uVar4;
        ulong uVar5;

        bVar3 = param_1->g1();
        param_2->set_max_size((ulong)bVar3, 3);
        if (bVar3 != 0) {
            uVar5 = 0;
            do {
                uVar4 = param_1->gSmarts();
                uVar1 = ScriptVarType::GetByID(uVar4);
                puVar2 = (undefined8*)Array<ScriptVarType_const*, eastl::allocator>::operator[](
                    (Array<ScriptVarType_const*, eastl::allocator>*)param_2, uVar5);
                *puVar2 = uVar1;
                uVar5 = uVar5 + 1;
            } while (bVar3 != uVar5);
        }
    }

    // 0x10023a850, 256 bytes, inline, placed by class name
    // DBUtils::UnpackColumnDataValues(PacketJ<Array<unsigned char, eastl::allocator> >&, Array<ScriptVarType const*, eastl::allocator> const&, Array<game::VarValue, eastl::allocator>&)
    void DBUtils::UnpackColumnDataValues(PacketJ* param_1, Array* param_2, Array* param_3) {
        bool bVar1;
        uint uVar2;
        long lVar3;
        ulong uVar4;
        undefined8* puVar5;
        long* plVar6;
        undefined8 uVar7;
        ulong uVar8;
        ulong uVar9;

        uVar2 = param_1->gSmarts();
        lVar3 = param_2->end();
        param_3->set_max_size(lVar3 * (ulong)uVar2, 3);
        if (uVar2 != 0) {
            uVar4 = 0;
            do {
                lVar3 = param_2->end();
                if (lVar3 != 0) {
                    uVar8 = 0;
                    uVar9 = 1;
                    do {
                        puVar5 = (undefined8*)Array<ScriptVarType_const*, eastl::allocator>::operator[](
                            (Array<ScriptVarType_const*, eastl::allocator>*)param_2, uVar8);
                        plVar6 = (long*)(*puVar5)->end();
                        lVar3 = param_2->end();
                        uVar7 = Array<game::VarValue, eastl::allocator>::operator[](
                            (Array<game::VarValue, eastl::allocator>*)param_3, uVar8 + lVar3 * uVar4);
                        (**(code**)(*plVar6 + 24))(plVar6, uVar7, param_1);
                        uVar8 = param_2->end();
                        bVar1 = uVar9 < uVar8;
                        uVar8 = uVar9;
                        uVar9 = (ulong)((int)uVar9 + 1);
                    } while (bVar1);
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 != uVar2);
        }
    }

} // namespace jag::oldscape
