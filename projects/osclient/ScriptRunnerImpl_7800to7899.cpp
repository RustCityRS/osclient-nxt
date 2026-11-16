// projects/osclient/ScriptRunnerImpl_7800to7899.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1000ba740
    uint64_t ScriptRunnerImpl::ExecuteCommand7800To7899(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        HiscoresDataSource hiscoresDataSource;
        HiscoresInstance hiscoresInstance;
        long lVar1;
        int iVar2;
        int* piVar4;
        HiscoresManager* pHVar5;
        HiscoresDataSource* pHVar6;
        HiscoresInstance* pHVar7;
        eastl::string* pbVar8;
        uint32_t* puVar9;
        int iVar10;
        unsigned long uVar11;
        eastl::string local_48;

        auto pCVar3 = Client::Instance();
        switch (scriptOp) {
        case 7800:
            uVar11 = (long)field_136096 - 1;
            field_136096 = (int)uVar11;
            pbVar8 = &field_104096[uVar11];
            local_48 = eastl::string(*pbVar8);
            uVar11 = (long)field_104092 - 1;
            field_104092 = (int)uVar11;
            pHVar7 = &field_100092[uVar11];
            hiscoresInstance = *pHVar7;
            pHVar5 = (HiscoresManager*)pCVar3->field_52776.operator->();
            pHVar5->RequestHiscoresData(local_48, hiscoresInstance);
            goto LAB_1000bab0f;
        case 7801:
            uVar11 = (long)field_136096 - 1;
            field_136096 = (int)uVar11;
            pbVar8 = &field_104096[uVar11];
            local_48 = eastl::string(*pbVar8);
            pHVar5 = (HiscoresManager*)pCVar3->field_52776.operator->();
            piVar4 = &field_141848;
            pHVar5->GetSkillEntry(piVar4, &local_48);
            if ((*piVar4 == -1) && (*(long*)(this + 1) == -1)) {
                pHVar5 = (HiscoresManager*)pCVar3->field_52776.operator->();
                pHVar5->GetActivityEntry(piVar4, &local_48);
            }
            iVar2 = field_141848;
            goto LAB_1000baaf0;
        case 7802:
            uVar11 = (long)field_136096 - 1;
            field_136096 = (int)uVar11;
            pbVar8 = &field_104096[uVar11];
            local_48 = eastl::string(*pbVar8);
            pHVar5 = (HiscoresManager*)pCVar3->field_52776.operator->();
            piVar4 = &field_141848;
            pHVar5->GetSkillEntry(piVar4, &local_48);
            if ((*piVar4 == -1) && (*(long*)(this + 1) == -1)) {
                pHVar5 = (HiscoresManager*)pCVar3->field_52776.operator->();
                pHVar5->GetActivityEntry(piVar4, &local_48);
            }
            iVar2 = *(int*)(this + 1);
        LAB_1000baaf0:
            iVar10 = field_104092;
            field_104092 = iVar10 + 1;
            piVar4 = &field_100092[(long)iVar10];
            *piVar4 = iVar2;
        LAB_1000bab0f:
            break;
        case 7803:
            uVar11 = (long)field_104092 - 1;
            field_104092 = (int)uVar11;
            piVar4 = &field_100092[uVar11];
            iVar2 = *piVar4;
            pHVar5 = (HiscoresManager*)pCVar3->field_52776.operator->();
            pHVar5->GetSkillEntry(&field_141848, iVar2);
            goto LAB_1000ba8d2;
        case 7804:
        case 7813:
            uVar11 = (long)field_104092 - 1;
            field_104092 = (int)uVar11;
            piVar4 = &field_100092[uVar11];
            iVar2 = *piVar4;
            pHVar5 = (HiscoresManager*)pCVar3->field_52776.operator->();
            pHVar5->GetActivityEntry(&field_141848, iVar2);
        LAB_1000ba8d2:
            iVar2 = field_141848;
        LAB_1000ba925:
            iVar10 = field_104092;
            field_104092 = iVar10 + 1;
        LAB_1000ba993:
            piVar4 = &field_100092[(long)iVar10];
            *piVar4 = iVar2;
            break;
        case 7805:
            uVar11 = (long)field_104092 - 1;
            field_104092 = (int)uVar11;
            piVar4 = &field_100092[uVar11];
            iVar2 = *piVar4;
            pHVar5 = (HiscoresManager*)pCVar3->field_52776.operator->();
            pHVar5->GetSkillEntry(&field_141848, iVar2);
            goto LAB_1000ba91e;
        case 7806:
        case 7814:
            uVar11 = (long)field_104092 - 1;
            field_104092 = (int)uVar11;
            piVar4 = &field_100092[uVar11];
            iVar2 = *piVar4;
            pHVar5 = (HiscoresManager*)pCVar3->field_52776.operator->();
            pHVar5->GetActivityEntry(&field_141848, iVar2);
        LAB_1000ba91e:
            iVar2 = *(int*)(this + 1);
            goto LAB_1000ba925;
        case 7807:
            pHVar5 = (HiscoresManager*)pCVar3->field_52776.operator->();
            pHVar5->GetOverallRank(field_141848);
            iVar2 = field_141848;
            goto LAB_1000ba97b;
        case 7808:
            pHVar5 = (HiscoresManager*)pCVar3->field_52776.operator->();
            pHVar5->GetOverallRank(field_141848);
            lVar1 = *(long*)(this + 1);
            if (lVar1 == -1) {
                iVar2 = field_104092;
                field_104092 = iVar2 + 1;
                puVar9 = &field_100092[(long)iVar2];
                *puVar9 = 4294967295;
                iVar2 = field_104092;
                field_104092 = iVar2 + 1;
                puVar9 = &field_100092[(long)iVar2];
                *puVar9 = 4294967295;
            } else {
                iVar10 = (int)((uint64_t)(((__int128)lVar1 * (__int128)1237940039285380275) >> 64) >> 26) -
                         ((uint64_t)(((__int128)lVar1 * (__int128)1237940039285380275) >> 96) >> 31);
                iVar2 = field_104092;
                field_104092 = iVar2 + 1;
                piVar4 = &field_100092[(long)iVar2];
                *piVar4 = iVar10;
                iVar2 = field_104092;
                field_104092 = iVar2 + 1;
                piVar4 = &field_100092[(long)iVar2];
                *piVar4 = (int)lVar1 + iVar10 * -1000000000;
            }
            break;
        case 7809:
            pHVar5 = (HiscoresManager*)pCVar3->field_52776.operator->();
            iVar2 = pHVar5->GetStatus();
        LAB_1000ba97b:
            iVar10 = field_104092;
            field_104092 = iVar10 + 1;
            goto LAB_1000ba993;
        case 7810:
            pHVar5 = (HiscoresManager*)pCVar3->field_52776.operator->();
            pHVar5->Reset();
            break;
        case 7811:
            pHVar5 = (HiscoresManager*)pCVar3->field_52776.operator->();
            iVar2 = field_136096;
            field_136096 = iVar2 + 1;
            pbVar8 = &field_104096[(long)iVar2];
            pHVar5->GetErrorString(*pbVar8);
            break;
        case 7812:
            uVar11 = (long)field_104092 - 1;
            field_104092 = (int)uVar11;
            pHVar6 = &field_100092[uVar11];
            hiscoresDataSource = *pHVar6;
            ((PlayerModel*)pCVar3->field_52776.operator->())->SetBodytype(hiscoresDataSource);
            break;
        default:
            return 2;
        }
        return 1;
    }

} // namespace jag::oldscape
