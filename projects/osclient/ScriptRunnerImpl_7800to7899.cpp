// projects/osclient/ScriptRunnerImpl_7800to7899.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1000ba740, 1376 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand7800To7899(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand7800To7899(long param_1, undefined4 param_2) {
        HiscoresEntry* pHVar1;
        int iVar2;
        undefined4 uVar3;
        long lVar4;
        int* piVar5;
        HiscoresManager* pHVar6;
        undefined4* puVar7;
        PlayerModel* this;
        basic_string* pbVar8;
        int iVar9;
        ulong uVar10;
        eastl::string local_48[32];

        lVar4 = Client::Instance();
        switch (param_2) {
        case 7800:
            uVar10 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar10;
            pbVar8 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar10);
            eastl::string::basic_string(local_48, pbVar8);
            uVar10 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar10;
            puVar7 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar10);
            uVar3 = *puVar7;
            pHVar6 =
                (HiscoresManager*)std::unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>::operator->(
                    (unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>*)(lVar4 + 52776));
            pHVar6->RequestHiscoresData(local_48, uVar3);
            goto LAB_1000bab0f;
        case 7801:
            uVar10 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar10;
            pbVar8 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar10);
            eastl::string::basic_string(local_48, pbVar8);
            pHVar6 =
                (HiscoresManager*)std::unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>::operator->(
                    (unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>*)(lVar4 + 52776));
            pHVar1 = (HiscoresEntry*)(param_1 + 141848);
            pHVar6->GetSkillEntry(pHVar1, local_48);
            if ((pHVar1->field_0 == -1) && (*(long*)(param_1 + 141856) == -1)) {
                pHVar6 = (HiscoresManager*)
                             std::unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>::operator->(
                                 (unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>*)(lVar4 + 52776));
                pHVar6->GetActivityEntry(pHVar1, local_48);
            }
            uVar3 = *(undefined4*)(param_1 + 141848);
            goto LAB_1000baaf0;
        case 7802:
            uVar10 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar10;
            pbVar8 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar10);
            eastl::string::basic_string(local_48, pbVar8);
            pHVar6 =
                (HiscoresManager*)std::unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>::operator->(
                    (unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>*)(lVar4 + 52776));
            pHVar1 = (HiscoresEntry*)(param_1 + 141848);
            pHVar6->GetSkillEntry(pHVar1, local_48);
            if ((pHVar1->field_0 == -1) && (*(long*)(param_1 + 141856) == -1)) {
                pHVar6 = (HiscoresManager*)
                             std::unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>::operator->(
                                 (unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>*)(lVar4 + 52776));
                pHVar6->GetActivityEntry(pHVar1, local_48);
            }
            uVar3 = *(undefined4*)(param_1 + 141856);
        LAB_1000baaf0:
            iVar2 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar2 + 1;
            puVar7 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar2);
            *puVar7 = uVar3;
        LAB_1000bab0f:
            eastl::string::~basic_string(local_48);
            break;
        case 7803:
            uVar10 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar10;
            piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar10);
            iVar2 = *piVar5;
            pHVar6 =
                (HiscoresManager*)std::unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>::operator->(
                    (unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>*)(lVar4 + 52776));
            pHVar6->GetSkillEntry((HiscoresEntry*)(param_1 + 141848), iVar2);
            goto LAB_1000ba8d2;
        case 7804:
        case 7813:
            uVar10 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar10;
            piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar10);
            iVar2 = *piVar5;
            pHVar6 =
                (HiscoresManager*)std::unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>::operator->(
                    (unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>*)(lVar4 + 52776));
            pHVar6->GetActivityEntry((HiscoresEntry*)(param_1 + 141848), iVar2);
        LAB_1000ba8d2:
            uVar3 = *(undefined4*)(param_1 + 141848);
        LAB_1000ba925:
            iVar2 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar2 + 1;
        LAB_1000ba993:
            puVar7 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar2);
            *puVar7 = uVar3;
            break;
        case 7805:
            uVar10 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar10;
            piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar10);
            iVar2 = *piVar5;
            pHVar6 =
                (HiscoresManager*)std::unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>::operator->(
                    (unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>*)(lVar4 + 52776));
            pHVar6->GetSkillEntry((HiscoresEntry*)(param_1 + 141848), iVar2);
            goto LAB_1000ba91e;
        case 7806:
        case 7814:
            uVar10 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar10;
            piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar10);
            iVar2 = *piVar5;
            pHVar6 =
                (HiscoresManager*)std::unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>::operator->(
                    (unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>*)(lVar4 + 52776));
            pHVar6->GetActivityEntry((HiscoresEntry*)(param_1 + 141848), iVar2);
        LAB_1000ba91e:
            uVar3 = *(undefined4*)(param_1 + 141856);
            goto LAB_1000ba925;
        case 7807:
            pHVar6 =
                (HiscoresManager*)std::unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>::operator->(
                    (unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>*)(lVar4 + 52776));
            pHVar6->GetOverallRank((HiscoresEntry*)(param_1 + 141848));
            uVar3 = *(undefined4*)(param_1 + 141848);
            goto LAB_1000ba97b;
        case 7808:
            pHVar6 =
                (HiscoresManager*)std::unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>::operator->(
                    (unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>*)(lVar4 + 52776));
            pHVar6->GetOverallRank((HiscoresEntry*)(param_1 + 141848));
            lVar4 = *(long*)(param_1 + 141856);
            if (lVar4 == -1) {
                iVar2 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar2 + 1;
                puVar7 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092),
                                                                          (long)iVar2);
                *puVar7 = 4294967295;
                iVar2 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar2 + 1;
                puVar7 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092),
                                                                          (long)iVar2);
                *puVar7 = 4294967295;
            } else {
                iVar9 = (int)(SUB168(SEXT816(lVar4) * SEXT816(1237940039285380275), 8) >> 26) -
                        (SUB164(SEXT816(lVar4) * SEXT816(1237940039285380275), 12) >> 31);
                iVar2 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar2 + 1;
                piVar5 =
                    (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar2);
                *piVar5 = iVar9;
                iVar2 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar2 + 1;
                piVar5 =
                    (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar2);
                *piVar5 = (int)lVar4 + iVar9 * -1000000000;
            }
            break;
        case 7809:
            pHVar6 =
                (HiscoresManager*)std::unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>::operator->(
                    (unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>*)(lVar4 + 52776));
            uVar3 = pHVar6->GetStatus();
        LAB_1000ba97b:
            iVar2 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar2 + 1;
            goto LAB_1000ba993;
        case 7810:
            pHVar6 =
                (HiscoresManager*)std::unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>::operator->(
                    (unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>*)(lVar4 + 52776));
            pHVar6->Reset();
            break;
        case 7811:
            pHVar6 =
                (HiscoresManager*)std::unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>::operator->(
                    (unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>*)(lVar4 + 52776));
            iVar2 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar2 + 1;
            pbVar8 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar2);
            pHVar6->GetErrorString(pbVar8);
            break;
        case 7812:
            uVar10 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar10;
            piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar10);
            iVar2 = *piVar5;
            this = (PlayerModel*)std::unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>::operator->(
                (unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>*)(lVar4 + 52776));
            SetBodytype(iVar2);
            break;
        default:
            return 2;
        }
        return 1;
    }

} // namespace jag::oldscape
