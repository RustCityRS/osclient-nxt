// projects/osclient/ScriptRunnerImpl_3700To3799.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x100162140, 592 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand3700To3799(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand3700To3799(long param_1, int param_2) {
        ulong uVar1;
        int iVar2;
        int iVar3;
        byte bVar4;
        int* piVar5;
        Client* pCVar6;
        Steam* pSVar7;
        unique_ptr<SteamAchievements, std::default_delete<SteamAchievements>>* puVar8;
        SteamAchievements* pSVar9;
        char* pcVar10;
        uint* puVar11;
        uint uVar12;
        ulong uVar13;

        if (param_2 == 3702) {
            pCVar6 = (Client*)Client::Instance();
            pSVar7 = (Steam*)pCVar6->GetSteamSDK();
            if (pSVar7 == (Steam*)0) {
                uVar12 = 0;
            } else {
                puVar8 = (unique_ptr<SteamAchievements, std::default_delete<SteamAchievements>>*)
                             pSVar7->GetSteamAchievementsModule();
                pSVar9 =
                    (SteamAchievements*)
                        std::unique_ptr<SteamAchievements, std::default_delete<SteamAchievements>>::operator->(puVar8);
                bVar4 = pSVar9->UploadAchivements();
                uVar12 = (uint)bVar4;
            }
        } else if (param_2 == 3701) {
            uVar13 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar13;
            iVar2 = *(int*)(param_1 + 104092);
            uVar1 = (long)iVar2 - 2;
            *(int*)(param_1 + 104092) = (int)uVar1;
            piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar1);
            iVar3 = *piVar5;
            piVar5 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar2 - 1);
            iVar2 = *piVar5;
            pCVar6 = (Client*)Client::Instance();
            pSVar7 = (Steam*)pCVar6->GetSteamSDK();
            if (pSVar7 == (Steam*)0) {
                uVar12 = 0;
            } else {
                std::array<eastl::string, 1000ul>::operator[]((array<eastl::string, 1000ul>*)(param_1 + 104096),
                                                              uVar13);
                puVar8 = (unique_ptr<SteamAchievements, std::default_delete<SteamAchievements>>*)
                             pSVar7->GetSteamAchievementsModule();
                pSVar9 =
                    (SteamAchievements*)
                        std::unique_ptr<SteamAchievements, std::default_delete<SteamAchievements>>::operator->(puVar8);
                pcVar10 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                bVar4 = pSVar9->SetAchievementStatProgress(pcVar10, iVar3, iVar2 == 1);
                uVar12 = (uint)bVar4;
            }
        } else {
            if (param_2 != 3700) {
                return 2;
            }
            uVar13 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar13;
            iVar2 = *(int*)(param_1 + 104092);
            uVar1 = (long)iVar2 - 2;
            *(int*)(param_1 + 104092) = (int)uVar1;
            piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar1);
            iVar3 = *piVar5;
            piVar5 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar2 - 1);
            iVar2 = *piVar5;
            pCVar6 = (Client*)Client::Instance();
            pSVar7 = (Steam*)pCVar6->GetSteamSDK();
            if (pSVar7 == (Steam*)0) {
                uVar12 = 0;
            } else {
                std::array<eastl::string, 1000ul>::operator[]((array<eastl::string, 1000ul>*)(param_1 + 104096),
                                                              uVar13);
                puVar8 = (unique_ptr<SteamAchievements, std::default_delete<SteamAchievements>>*)
                             pSVar7->GetSteamAchievementsModule();
                pSVar9 =
                    (SteamAchievements*)
                        std::unique_ptr<SteamAchievements, std::default_delete<SteamAchievements>>::operator->(puVar8);
                pcVar10 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                bVar4 = pSVar9->SetAchievementLockState(pcVar10, iVar3 == 1, iVar2 == 1);
                uVar12 = (uint)bVar4;
            }
        }
        iVar2 = *(int*)(param_1 + 104092);
        *(int*)(param_1 + 104092) = iVar2 + 1;
        puVar11 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar2);
        *puVar11 = uVar12;
        return 1;
    }

} // namespace jag::oldscape
