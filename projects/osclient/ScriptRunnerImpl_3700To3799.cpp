// projects/osclient/ScriptRunnerImpl_3700To3799.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x100162140
    uint64_t ScriptRunnerImpl::ExecuteCommand3700To3799(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        unsigned long uVar1;
        int iVar2;
        int iVar3;
        uint8_t bVar4;
        int* piVar5;
        Client* pCVar6;
        Steam* pSVar7;
        unique_ptr<SteamAchievements, std::default_delete<SteamAchievements> _>* puVar8;
        SteamAchievements* pSVar9;
        char* pcVar10;
        unsigned int uVar12;
        unsigned long uVar13;

        if (scriptOp == 3702) {
            pCVar6 = Client::Instance();
            pSVar7 = pCVar6->GetSteamSDK();
            if (pSVar7 == nullptr) {
                uVar12 = 0;
            } else {
                puVar8 = pSVar7->GetSteamAchievementsModule();
                pSVar9 = (SteamAchievements*)(*puVar8).operator->();
                bVar4 = pSVar9->UploadAchivements();
                uVar12 = (unsigned int)bVar4;
            }
        } else if (scriptOp == 3701) {
            uVar13 = (long)field_136096 - 1;
            field_136096 = (int)uVar13;
            iVar2 = field_104092;
            uVar1 = (long)iVar2 - 2;
            field_104092 = (int)uVar1;
            piVar5 = &field_100092[uVar1];
            iVar3 = *piVar5;
            piVar5 = &field_100092[(long)iVar2 - 1];
            iVar2 = *piVar5;
            pCVar6 = Client::Instance();
            pSVar7 = pCVar6->GetSteamSDK();
            if (pSVar7 == nullptr) {
                uVar12 = 0;
            } else {
                field_104096[uVar13];
                puVar8 = pSVar7->GetSteamAchievementsModule();
                pSVar9 = (SteamAchievements*)(*puVar8).operator->();
                pcVar10 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                bVar4 = pSVar9->SetAchievementStatProgress(pcVar10, iVar3, iVar2 == 1);
                uVar12 = (unsigned int)bVar4;
            }
        } else {
            if (scriptOp != 3700) {
                return 2;
            }
            uVar13 = (long)field_136096 - 1;
            field_136096 = (int)uVar13;
            iVar2 = field_104092;
            uVar1 = (long)iVar2 - 2;
            field_104092 = (int)uVar1;
            piVar5 = &field_100092[uVar1];
            iVar3 = *piVar5;
            piVar5 = &field_100092[(long)iVar2 - 1];
            iVar2 = *piVar5;
            pCVar6 = Client::Instance();
            pSVar7 = pCVar6->GetSteamSDK();
            if (pSVar7 == nullptr) {
                uVar12 = 0;
            } else {
                field_104096[uVar13];
                puVar8 = pSVar7->GetSteamAchievementsModule();
                pSVar9 = (SteamAchievements*)(*puVar8).operator->();
                pcVar10 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                bVar4 = pSVar9->SetAchievementLockState(pcVar10, iVar3 == 1, iVar2 == 1);
                uVar12 = (unsigned int)bVar4;
            }
        }
        iVar2 = field_104092;
        field_104092 = iVar2 + 1;
        unsigned int* puVar11 = &field_100092[(long)iVar2];
        *puVar11 = uVar12;
        return 1;
    }

} // namespace jag::oldscape
