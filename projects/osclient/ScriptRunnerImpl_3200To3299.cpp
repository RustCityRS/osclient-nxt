// projects/osclient/ScriptRunnerImpl_3200To3299.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10015dc80, 2416 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand3200To3299(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand3200To3299(long param_1, undefined4 param_2) {
        int iVar1;
        byte bVar2;
        int iVar3;
        undefined4 uVar4;
        Client* this;
        DeviceOptions* pDVar5;
        undefined8 uVar6;
        GameOptions* pGVar7;
        long* plVar8;
        uint* puVar9;
        undefined4* puVar10;
        int* piVar11;
        undefined4 uVar12;
        uint uVar13;
        ulong uVar14;
        undefined8 uVar15;
        int iVar16;
        array<int, 1000ul>* paVar17;
        long lVar18;
        undefined4 local_78[8];
        undefined4 local_58[3];
        int local_4c;
        int local_48;
        uint local_44;
        uint local_40;
        undefined4 local_3c;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this = (Client*)Client::Instance();
        uVar15 = 1;
        switch (param_2) {
        case 3200:
            lVar18 = (long)*(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)(lVar18 - 3U);
            paVar17 = (array<int, 1000ul>*)(param_1 + 100092);
            piVar11 = (int*)std::array<int, 1000ul>::operator[](paVar17, lVar18 - 3U);
            iVar3 = *piVar11;
            piVar11 = (int*)std::array<int, 1000ul>::operator[](paVar17, lVar18 - 2);
            iVar16 = *piVar11;
            piVar11 = (int*)std::array<int, 1000ul>::operator[](paVar17, lVar18 - 1);
            uVar15 = 1;
            PlaySynth(iVar3, iVar16, *piVar11);
            break;
        case 3201:
            iVar3 = GetServerMajorVersion();
            if (iVar3 < 215) {
                uVar14 = (long)*(int*)(param_1 + 104092) - 1;
                *(int*)(param_1 + 104092) = (int)uVar14;
                puVar10 =
                    (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar14);
                iVar3 = 50;
                iVar16 = 0;
                local_44 = 50;
                local_48 = 0;
            } else {
                lVar18 = (long)*(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = (int)(lVar18 - 5U);
                paVar17 = (array<int, 1000ul>*)(param_1 + 100092);
                puVar10 = (undefined4*)std::array<int, 1000ul>::operator[](paVar17, lVar18 - 5U);
                piVar11 = (int*)std::array<int, 1000ul>::operator[](paVar17, lVar18 - 4);
                local_48 = *piVar11;
                puVar9 = (uint*)std::array<int, 1000ul>::operator[](paVar17, lVar18 - 3);
                local_44 = *puVar9;
                piVar11 = (int*)std::array<int, 1000ul>::operator[](paVar17, lVar18 - 2);
                iVar3 = *piVar11;
                piVar11 = (int*)std::array<int, 1000ul>::operator[](paVar17, lVar18 - 1);
                iVar16 = *piVar11;
            }
            local_58[0] = *puVar10;
            new (&local_40) eastl::allocator("EASTL vector");
            new (local_78) eastl::vector<int, eastl::allocator>(local_58, 1, (allocator*)&local_40);
            PlaySongs(local_78, local_48, local_44, iVar3, iVar16);
            goto LAB_10015e50f;
        case 3202:
            iVar3 = *(int*)(param_1 + 104092);
            uVar14 = (long)iVar3 - 2;
            *(int*)(param_1 + 104092) = (int)uVar14;
            piVar11 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar14);
            iVar16 = *piVar11;
            piVar11 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar3 - 1);
            PlayJingle(iVar16, *piVar11);
            break;
        case 3203:
            uVar14 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar14;
            puVar10 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar14);
            uVar12 = *puVar10;
            pGVar7 = (GameOptions*)
                         std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                             (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&field_8384);
            uVar4 = 7;
            goto LAB_10015e25c;
        case 3204:
            pGVar7 = (GameOptions*)
                         std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                             (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&field_8384);
            uVar15 = 7;
            goto LAB_10015de7b;
        case 3205:
            uVar14 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar14;
            puVar10 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar14);
            uVar12 = *puVar10;
            pGVar7 = (GameOptions*)
                         std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                             (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&field_8384);
            uVar4 = 8;
            goto LAB_10015e25c;
        case 3206:
            pGVar7 = (GameOptions*)
                         std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                             (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&field_8384);
            uVar15 = 8;
            goto LAB_10015de7b;
        case 3207:
            uVar14 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar14;
            puVar10 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar14);
            uVar12 = *puVar10;
            pGVar7 = (GameOptions*)
                         std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                             (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&field_8384);
            uVar4 = 9;
            goto LAB_10015e25c;
        case 3208:
            pGVar7 = (GameOptions*)
                         std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                             (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&field_8384);
            uVar15 = 9;
        LAB_10015de7b:
            plVar8 = (long*)pGVar7->GetScriptOption(uVar15);
            if (plVar8 == (long*)0) {
                uVar4 = 0;
            } else {
                uVar4 = (**(code**)(*plVar8 + 24))(plVar8);
            }
            iVar3 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar3 + 1;
        LAB_10015e53d:
            uVar15 = 1;
            puVar10 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar3);
            *puVar10 = uVar4;
            break;
        case 3209:
            iVar3 = *(int*)(param_1 + 104092);
            uVar14 = (long)iVar3 - 2;
            *(int*)(param_1 + 104092) = (int)uVar14;
            puVar10 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar14);
            uVar4 = *puVar10;
            puVar10 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092),
                                                                       (long)iVar3 - 1);
            uVar12 = *puVar10;
            pDVar5 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
            plVar8 = (long*)pDVar5->GetScriptOption(uVar4);
            if (plVar8 == (long*)0) {
                pGVar7 =
                    (GameOptions*)
                        std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                            (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&field_8384);
                plVar8 = (long*)pGVar7->GetScriptOption(uVar4);
                if (plVar8 == (long*)0) {
                    ((param_1 + 141000))->Raise();
                    plVar8 = (long*)0;
                }
            }
            if (plVar8 == (long*)0) {
                uVar15 = 1;
            } else {
                (**(code**)(*plVar8 + 16))(plVar8, uVar12);
                uVar15 = 1;
            }
            break;
        case 3210:
            uVar14 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar14;
            puVar10 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar14);
            uVar4 = *puVar10;
            pDVar5 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
            plVar8 = (long*)pDVar5->GetScriptOption(uVar4);
            if (plVar8 == (long*)0) {
                pGVar7 =
                    (GameOptions*)
                        std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                            (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&field_8384);
                plVar8 = (long*)pGVar7->GetScriptOption(uVar4);
                if (plVar8 == (long*)0) {
                    ((param_1 + 141000))->Raise();
                    plVar8 = (long*)0;
                }
            }
            if (plVar8 == (long*)0) {
                uVar4 = 0;
            } else {
                uVar4 = (**(code**)(*plVar8 + 24))(plVar8);
            }
            goto LAB_10015e529;
        case 3211:
            break;
        case 3212:
            iVar3 = *(int*)(param_1 + 104092);
            uVar14 = (long)iVar3 - 2;
            *(int*)(param_1 + 104092) = (int)uVar14;
            puVar10 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar14);
            uVar4 = *puVar10;
            puVar10 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092),
                                                                       (long)iVar3 - 1);
            uVar12 = *puVar10;
            pDVar5 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
            plVar8 = (long*)pDVar5->GetScriptOption(uVar4);
            goto LAB_10015e261;
        case 3213:
            iVar3 = *(int*)(param_1 + 104092);
            uVar14 = (long)iVar3 - 2;
            *(int*)(param_1 + 104092) = (int)uVar14;
            puVar10 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar14);
            uVar4 = *puVar10;
            puVar10 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092),
                                                                       (long)iVar3 - 1);
            uVar12 = *puVar10;
            pGVar7 = (GameOptions*)
                         std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                             (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&field_8384);
        LAB_10015e25c:
            plVar8 = (long*)pGVar7->GetScriptOption(uVar4);
        LAB_10015e261:
            if (plVar8 != (long*)0) {
                (**(code**)(*plVar8 + 16))(plVar8, uVar12);
            }
            break;
        case 3214:
            uVar14 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar14;
            puVar10 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar14);
            uVar4 = *puVar10;
            pDVar5 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
            plVar8 = (long*)pDVar5->GetScriptOption(uVar4);
            if (plVar8 != (long*)0)
                goto LAB_10015dfcf;
        LAB_10015e021:
            uVar4 = 0;
            goto LAB_10015e529;
        case 3215:
            uVar14 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar14;
            puVar10 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar14);
            uVar4 = *puVar10;
            pGVar7 = (GameOptions*)
                         std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                             (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&field_8384);
            plVar8 = (long*)pGVar7->GetScriptOption(uVar4);
            if (plVar8 == (long*)0)
                goto LAB_10015e021;
        LAB_10015dfcf:
            uVar4 = (**(code**)(*plVar8 + 24))(plVar8);
        LAB_10015e529:
            iVar3 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar3 + 1;
            goto LAB_10015e53d;
        case 3216:
            uVar14 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar14;
            puVar10 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar14);
            uVar4 = *puVar10;
            uVar6 = std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
            bVar2 = option::DeviceOptions::IsSettingExposed(uVar6, uVar4);
            goto LAB_10015e2b6;
        case 3217:
            uVar14 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar14;
            puVar10 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar14);
            uVar4 = *puVar10;
            pDVar5 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
            plVar8 = (long*)pDVar5->GetScriptOption(uVar4);
            goto LAB_10015e2fa;
        case 3218:
            uVar14 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar14;
            puVar10 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar14);
            uVar4 = *puVar10;
            uVar6 = std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&field_8384);
            bVar2 = option::GameOptions::IsSettingExposed(uVar6, uVar4);
        LAB_10015e2b6:
            uVar13 = (uint)bVar2;
        LAB_10015e33f:
            iVar3 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar3 + 1;
            puVar9 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar3);
            *puVar9 = uVar13;
            break;
        case 3219:
            uVar14 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar14;
            puVar10 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar14);
            uVar4 = *puVar10;
            pGVar7 = (GameOptions*)
                         std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                             (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&field_8384);
            plVar8 = (long*)pGVar7->GetScriptOption(uVar4);
        LAB_10015e2fa:
            local_78[0] = 4294967295;
            local_40 = 4294967295;
            if (plVar8 != (long*)0) {
                (**(code**)(*plVar8 + 32))(plVar8, local_78, &local_40);
            }
            uVar4 = local_78[0];
            iVar3 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar3 + 1;
            puVar10 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar3);
            *puVar10 = uVar4;
            uVar13 = local_40;
            goto LAB_10015e33f;
        case 3220:
            iVar3 = *(int*)(param_1 + 104092);
            uVar14 = (long)iVar3 - 2;
            *(int*)(param_1 + 104092) = (int)uVar14;
            piVar11 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar14);
            iVar16 = *piVar11;
            piVar11 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar3 - 1);
            midi2::MidiManager::Stop(iVar16, *piVar11);
            break;
        case 3221:
            lVar18 = (long)*(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)(lVar18 - 6U);
            paVar17 = (array<int, 1000ul>*)(param_1 + 100092);
            puVar9 = (uint*)std::array<int, 1000ul>::operator[](paVar17, lVar18 - 6U);
            local_44 = *puVar9;
            puVar10 = (undefined4*)std::array<int, 1000ul>::operator[](paVar17, lVar18 - 5);
            uVar4 = *puVar10;
            piVar11 = (int*)std::array<int, 1000ul>::operator[](paVar17, lVar18 - 4);
            local_48 = *piVar11;
            piVar11 = (int*)std::array<int, 1000ul>::operator[](paVar17, lVar18 - 3);
            local_4c = *piVar11;
            piVar11 = (int*)std::array<int, 1000ul>::operator[](paVar17, lVar18 - 2);
            iVar3 = *piVar11;
            piVar11 = (int*)std::array<int, 1000ul>::operator[](paVar17, lVar18 - 1);
            iVar16 = *piVar11;
            local_40 = local_44;
            local_3c = uVar4;
            new (local_58) eastl::allocator("EASTL vector");
            new (local_78) eastl::vector<int, eastl::allocator>(&local_40, 2, local_58);
            PlaySongs(local_78, local_48, local_4c, iVar3, iVar16);
        LAB_10015e50f:
            local_78->~vector();
            uVar15 = 1;
            break;
        case 3222:
            lVar18 = (long)*(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)(lVar18 - 4U);
            paVar17 = (array<int, 1000ul>*)(param_1 + 100092);
            piVar11 = (int*)std::array<int, 1000ul>::operator[](paVar17, lVar18 - 4U);
            iVar3 = *piVar11;
            piVar11 = (int*)std::array<int, 1000ul>::operator[](paVar17, lVar18 - 3);
            iVar16 = *piVar11;
            piVar11 = (int*)std::array<int, 1000ul>::operator[](paVar17, lVar18 - 2);
            iVar1 = *piVar11;
            piVar11 = (int*)std::array<int, 1000ul>::operator[](paVar17, lVar18 - 1);
            uVar15 = 1;
            midi2::MidiManager::SwapSongs(iVar3, iVar16, iVar1, *piVar11);
            break;
        default:
            uVar15 = 2;
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar15;
    }

} // namespace jag::oldscape
