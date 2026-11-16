// projects/osclient/ScriptRunnerImpl_3200To3299.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10015dc80
    uint64_t ScriptRunnerImpl::ExecuteCommand3200To3299(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        DeviceOptionScriptID DVar1;
        int arg3_00;
        uint8_t bVar2;
        int iVar3;
        uint32_t uVar4;
        DeviceOptionScriptID* pDVar5;
        DeviceOptions* pDVar6;
        GameOptionScriptID* pGVar7;
        GameOptions* pGVar8;
        long* plVar9;
        unsigned int* puVar10;
        uint32_t* puVar11;
        int* piVar12;
        unsigned int uVar13;
        GameOptionScriptID GVar14;
        unsigned long uVar15;
        int iVar17;
        uint8_t* puVar18;
        long lVar19;
        uint32_t local_78[8];
        uint32_t local_58[3];
        int local_4c;
        int local_48;
        unsigned int local_44;
        unsigned int local_40;
        uint32_t local_3c;

        auto this_00 = Client::Instance();
        uint64_t uVar16 = 1;
        switch (scriptOp) {
        case 3200:
            lVar19 = (long)field_104092;
            field_104092 = (int)(lVar19 - 3U);
            puVar18 = &field_100092;
            piVar12 = (int*)(*puVar18)[lVar19 - 3U];
            iVar3 = *piVar12;
            piVar12 = (int*)(*puVar18)[lVar19 - 2];
            iVar17 = *piVar12;
            piVar12 = (int*)(*puVar18)[lVar19 - 1];
            uVar16 = 1;
            this_00->PlaySynth(iVar3, iVar17, *piVar12);
            break;
        case 3201:
            iVar3 = this_00->GetServerMajorVersion();
            if (iVar3 < 215) {
                uVar15 = (long)field_104092 - 1;
                field_104092 = (int)uVar15;
                puVar11 = (uint32_t*)field_100092[uVar15];
                iVar3 = 50;
                iVar17 = 0;
                local_44 = 50;
                local_48 = 0;
            } else {
                lVar19 = (long)field_104092;
                field_104092 = (int)(lVar19 - 5U);
                puVar18 = &field_100092;
                puVar11 = (uint32_t*)(*puVar18)[lVar19 - 5U];
                piVar12 = (int*)(*puVar18)[lVar19 - 4];
                local_48 = *piVar12;
                puVar10 = (unsigned int*)(*puVar18)[lVar19 - 3];
                local_44 = *puVar10;
                piVar12 = (int*)(*puVar18)[lVar19 - 2];
                iVar3 = *piVar12;
                piVar12 = (int*)(*puVar18)[lVar19 - 1];
                iVar17 = *piVar12;
            }
            local_58[0] = *puVar11;
            new (local_78) eastl::vector<int>(local_58, DAT_00000001);
            this_00->PlaySongs(*local_78, local_48, local_44, iVar3, iVar17);
            goto LAB_10015e50f;
        case 3202:
            iVar3 = field_104092;
            uVar15 = (long)iVar3 - 2;
            field_104092 = (int)uVar15;
            piVar12 = &field_100092[uVar15];
            iVar17 = *piVar12;
            piVar12 = &field_100092[(long)iVar3 - 1];
            this_00->PlayJingle(iVar17, *piVar12);
            break;
        case 3203:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            puVar11 = &field_100092[uVar15];
            uVar4 = *puVar11;
            pGVar8 = (GameOptions*)this_00->field_8384.operator->();
            GVar14 = 7;
            goto LAB_10015e25c;
        case 3204:
            pGVar8 = (GameOptions*)this_00->field_8384.operator->();
            GVar14 = 7;
            goto LAB_10015de7b;
        case 3205:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            puVar11 = &field_100092[uVar15];
            uVar4 = *puVar11;
            pGVar8 = (GameOptions*)this_00->field_8384.operator->();
            GVar14 = 8;
            goto LAB_10015e25c;
        case 3206:
            pGVar8 = (GameOptions*)this_00->field_8384.operator->();
            GVar14 = 8;
            goto LAB_10015de7b;
        case 3207:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            puVar11 = &field_100092[uVar15];
            uVar4 = *puVar11;
            pGVar8 = (GameOptions*)this_00->field_8384.operator->();
            GVar14 = 9;
            goto LAB_10015e25c;
        case 3208:
            pGVar8 = (GameOptions*)this_00->field_8384.operator->();
            GVar14 = 9;
        LAB_10015de7b:
            plVar9 = pGVar8->GetScriptOption(GVar14);
            if (plVar9 == nullptr) {
                uVar4 = 0;
            } else {
                uVar4 = (**(void (**)(...))(*plVar9 + 24))(plVar9);
            }
            iVar3 = field_104092;
            field_104092 = iVar3 + 1;
        LAB_10015e53d:
            uVar16 = 1;
            puVar11 = &field_100092[(long)iVar3];
            *puVar11 = uVar4;
            break;
        case 3209:
            iVar3 = field_104092;
            uVar15 = (long)iVar3 - 2;
            field_104092 = (int)uVar15;
            pDVar5 = &field_100092[uVar15];
            DVar1 = *pDVar5;
            puVar11 = &field_100092[(long)iVar3 - 1];
            uVar4 = *puVar11;
            pDVar6 = (DeviceOptions*)this_00->field_8376.operator->();
            plVar9 = pDVar6->GetScriptOption(DVar1);
            if (plVar9 == nullptr) {
                pGVar8 = (GameOptions*)this_00->field_8384.operator->();
                plVar9 = pGVar8->GetScriptOption(DVar1);
                if (plVar9 == nullptr) {
                    field_141000->Raise();
                    plVar9 = nullptr;
                }
            }
            if (plVar9 == nullptr) {
                uVar16 = 1;
            } else {
                (**(void (**)(...))(*plVar9 + 16))(plVar9, uVar4);
                uVar16 = 1;
            }
            break;
        case 3210:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            pDVar5 = &field_100092[uVar15];
            DVar1 = *pDVar5;
            pDVar6 = (DeviceOptions*)this_00->field_8376.operator->();
            plVar9 = pDVar6->GetScriptOption(DVar1);
            if (plVar9 == nullptr) {
                pGVar8 = (GameOptions*)this_00->field_8384.operator->();
                plVar9 = pGVar8->GetScriptOption(DVar1);
                if (plVar9 == nullptr) {
                    field_141000->Raise();
                    plVar9 = nullptr;
                }
            }
            if (plVar9 == nullptr) {
                uVar4 = 0;
            } else {
                uVar4 = (**(void (**)(...))(*plVar9 + 24))(plVar9);
            }
            goto LAB_10015e529;
        case 3211:
            break;
        case 3212:
            iVar3 = field_104092;
            uVar15 = (long)iVar3 - 2;
            field_104092 = (int)uVar15;
            pDVar5 = &field_100092[uVar15];
            DVar1 = *pDVar5;
            puVar11 = &field_100092[(long)iVar3 - 1];
            uVar4 = *puVar11;
            pDVar6 = (DeviceOptions*)this_00->field_8376.operator->();
            plVar9 = pDVar6->GetScriptOption(DVar1);
            goto LAB_10015e261;
        case 3213:
            iVar3 = field_104092;
            uVar15 = (long)iVar3 - 2;
            field_104092 = (int)uVar15;
            pGVar7 = &field_100092[uVar15];
            GVar14 = *pGVar7;
            puVar11 = &field_100092[(long)iVar3 - 1];
            uVar4 = *puVar11;
            pGVar8 = (GameOptions*)this_00->field_8384.operator->();
        LAB_10015e25c:
            plVar9 = pGVar8->GetScriptOption(GVar14);
        LAB_10015e261:
            if (plVar9 != nullptr) {
                (**(void (**)(...))(*plVar9 + 16))(plVar9, uVar4);
            }
            break;
        case 3214:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            pDVar5 = &field_100092[uVar15];
            DVar1 = *pDVar5;
            pDVar6 = (DeviceOptions*)this_00->field_8376.operator->();
            plVar9 = pDVar6->GetScriptOption(DVar1);
            if (plVar9 != nullptr)
                goto LAB_10015dfcf;
        LAB_10015e021:
            uVar4 = 0;
            goto LAB_10015e529;
        case 3215:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            pGVar7 = &field_100092[uVar15];
            GVar14 = *pGVar7;
            pGVar8 = (GameOptions*)this_00->field_8384.operator->();
            plVar9 = pGVar8->GetScriptOption(GVar14);
            if (plVar9 == nullptr)
                goto LAB_10015e021;
        LAB_10015dfcf:
            uVar4 = (**(void (**)(...))(*plVar9 + 24))(plVar9);
        LAB_10015e529:
            iVar3 = field_104092;
            field_104092 = iVar3 + 1;
            goto LAB_10015e53d;
        case 3216:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            pDVar5 = &field_100092[uVar15];
            DVar1 = *pDVar5;
            pDVar6 = (DeviceOptions*)this_00->field_8376.operator->();
            bVar2 = pDVar6->IsSettingExposed(DVar1);
            goto LAB_10015e2b6;
        case 3217:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            pDVar5 = &field_100092[uVar15];
            DVar1 = *pDVar5;
            pDVar6 = (DeviceOptions*)this_00->field_8376.operator->();
            plVar9 = pDVar6->GetScriptOption(DVar1);
            goto LAB_10015e2fa;
        case 3218:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            pGVar7 = &field_100092[uVar15];
            GVar14 = *pGVar7;
            pGVar8 = (GameOptions*)this_00->field_8384.operator->();
            bVar2 = pGVar8->IsSettingExposed(GVar14);
        LAB_10015e2b6:
            uVar13 = (unsigned int)bVar2;
        LAB_10015e33f:
            iVar3 = field_104092;
            field_104092 = iVar3 + 1;
            puVar10 = &field_100092[(long)iVar3];
            *puVar10 = uVar13;
            break;
        case 3219:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            pGVar7 = &field_100092[uVar15];
            GVar14 = *pGVar7;
            pGVar8 = (GameOptions*)this_00->field_8384.operator->();
            plVar9 = pGVar8->GetScriptOption(GVar14);
        LAB_10015e2fa:
            local_78[0] = 4294967295;
            local_40 = 4294967295;
            if (plVar9 != nullptr) {
                (**(void (**)(...))(*plVar9 + 32))(plVar9, local_78);
            }
            uVar4 = local_78[0];
            iVar3 = field_104092;
            field_104092 = iVar3 + 1;
            puVar11 = &field_100092[(long)iVar3];
            *puVar11 = uVar4;
            uVar13 = local_40;
            goto LAB_10015e33f;
        case 3220:
            iVar3 = field_104092;
            uVar15 = (long)iVar3 - 2;
            field_104092 = (int)uVar15;
            piVar12 = &field_100092[uVar15];
            iVar17 = *piVar12;
            piVar12 = &field_100092[(long)iVar3 - 1];
            midi2::MidiManager::Stop(iVar17, *piVar12);
            break;
        case 3221:
            lVar19 = (long)field_104092;
            field_104092 = (int)(lVar19 - 6U);
            puVar18 = &field_100092;
            puVar10 = (unsigned int*)(*puVar18)[lVar19 - 6U];
            local_44 = *puVar10;
            puVar11 = (uint32_t*)(*puVar18)[lVar19 - 5];
            uVar4 = *puVar11;
            piVar12 = (int*)(*puVar18)[lVar19 - 4];
            local_48 = *piVar12;
            piVar12 = (int*)(*puVar18)[lVar19 - 3];
            local_4c = *piVar12;
            piVar12 = (int*)(*puVar18)[lVar19 - 2];
            iVar3 = *piVar12;
            piVar12 = (int*)(*puVar18)[lVar19 - 1];
            iVar17 = *piVar12;
            local_40 = local_44;
            local_3c = uVar4;
            new (local_58) eastl::allocator("EASTL vector");
            new (local_78) eastl::vector<int>(&local_40, *2);
            this_00->PlaySongs(*local_78, local_48, local_4c, iVar3, iVar17);
        LAB_10015e50f:
            uVar16 = 1;
            break;
        case 3222:
            lVar19 = (long)field_104092;
            field_104092 = (int)(lVar19 - 4U);
            puVar18 = &field_100092;
            piVar12 = (int*)(*puVar18)[lVar19 - 4U];
            iVar3 = *piVar12;
            piVar12 = (int*)(*puVar18)[lVar19 - 3];
            iVar17 = *piVar12;
            piVar12 = (int*)(*puVar18)[lVar19 - 2];
            arg3_00 = *piVar12;
            piVar12 = (int*)(*puVar18)[lVar19 - 1];
            uVar16 = 1;
            midi2::MidiManager::SwapSongs(iVar3, iVar17, arg3_00, *piVar12);
            break;
        default:
            uVar16 = 2;
        }
        return uVar16;
    }

} // namespace jag::oldscape
