// projects/osclient/ScriptRunnerImpl_3800To3899.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1001623a0
    uint64_t ScriptRunnerImpl::ExecuteCommand3800To3899(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        unsigned int arg2;
        unsigned int arg3_00;
        int iVar1;
        int iVar2;
        bool bVar3;
        uint32_t uVar4;
        Client* pCVar6;
        shared_ptr<rs2lib::social::ClanSettings>* clanSettings;
        char* pcVar7;
        ClanSettings* pCVar8;
        shared_ptr<midi2::MidiPlayerMainThread>* psVar9;
        eastl::string* this_00;
        long lVar10;
        shared_ptr<rs2lib::social::ClanChannelUser>* psVar11;
        ClanChannel* pCVar12;
        int* piVar13;
        uint32_t* puVar14;
        unsigned int* puVar15;
        eastl::string* pbVar16;
        unsigned int uVar17;
        unsigned long uVar18;
        vector<eastl::string>* this_01;
        uint8_t* puVar20;
        eastl::string local_88;
        eastl::string local_68;
        ReturnValue local_48;

        uint64_t uVar19 = 2;
        auto pCVar5 = Client::Instance();
        switch (scriptOp) {
        case 3800:
            pCVar5 = Client::Instance();
            bVar3 = pCVar5->field_52552 != nullptr;
            iVar2 = field_104092;
            field_104092 = iVar2 + 1;
            puVar14 = &field_100092[(long)iVar2];
            if (bVar3) {
                *puVar14 = 1;
                pCVar5 = Client::Instance();
                field_140536 = pCVar5->field_52552;
                field_140552 = -1;
            } else {
            LAB_1001629a9:
                *puVar14 = 0;
            }
            goto LAB_100162bfd;
        case 3801:
            uVar18 = (long)field_104092 - 1;
            field_104092 = (int)uVar18;
            piVar13 = &field_100092[uVar18];
            iVar2 = *piVar13;
            pCVar6 = Client::Instance();
            psVar9 = &pCVar6->field_52568[(long)iVar2];
            bVar3 = *psVar9 != nullptr;
            iVar1 = field_104092;
            field_104092 = iVar1 + 1;
            puVar14 = &field_100092[(long)iVar1];
            if (!bVar3)
                goto LAB_1001629a9;
            *puVar14 = 1;
            clanSettings = &pCVar5->field_52568[(long)iVar2];
            field_140536 = *clanSettings;
            field_140552 = iVar2;
            goto LAB_100162bfd;
        case 3802:
            lVar10 = field_140536.operator->();
            pbVar16 = (eastl::string*)(lVar10 + 16);
            goto LAB_100162a5b;
        case 3803:
            lVar10 = field_140536.operator->();
            uVar17 = (unsigned int)*(uint8_t*)(lVar10 + 56);
            break;
        case 3804:
            lVar10 = field_140536.operator->();
            uVar17 = (unsigned int)*(char*)(lVar10 + 57);
            break;
        case 3805:
            lVar10 = field_140536.operator->();
            uVar17 = (unsigned int)*(char*)(lVar10 + 58);
            break;
        case 3806:
            lVar10 = field_140536.operator->();
            uVar17 = (unsigned int)*(char*)(lVar10 + 59);
            break;
        case 3807:
            lVar10 = field_140536.operator->();
            uVar17 = (unsigned int)*(char*)(lVar10 + 60);
            break;
        default:
            goto switchD_1001623e1_caseD_ee0;
        case 3809:
            lVar10 = field_140536.operator->();
            uVar17 = *(unsigned int*)(lVar10 + 64);
            break;
        case 3810:
            uVar18 = (long)field_104092 - 1;
            field_104092 = (int)uVar18;
            piVar13 = &field_100092[uVar18];
            iVar2 = *piVar13;
            lVar10 = field_140536.operator->();
            this_01 = (vector<eastl::string>*)(lVar10 + 280);
            goto LAB_10016263f;
        case 3811:
            uVar18 = (long)field_104092 - 1;
            field_104092 = (int)uVar18;
            piVar13 = &field_100092[uVar18];
            iVar2 = *piVar13;
            lVar10 = field_140536.operator->();
            pcVar7 = (char*)(*((lVar10 + 104)))[(long)iVar2];
            uVar17 = (unsigned int)*pcVar7;
            goto LAB_100162b19;
        case 3812:
            lVar10 = field_140536.operator->();
            uVar17 = *(unsigned int*)(lVar10 + 240);
            break;
        case 3813:
            uVar18 = (long)field_104092 - 1;
            field_104092 = (int)uVar18;
            piVar13 = &field_100092[uVar18];
            iVar2 = *piVar13;
            lVar10 = field_140536.operator->();
            this_01 = (vector<eastl::string>*)(lVar10 + 312);
        LAB_10016263f:
            pbVar16 = (eastl::string*)(*this_01)[(long)iVar2];
            goto LAB_100162a5b;
        case 3814:
            lVar10 = (long)field_104092;
            field_104092 = (int)(lVar10 - 3U);
            puVar20 = &field_100092;
            puVar15 = (unsigned int*)(*puVar20)[lVar10 - 3U];
            uVar17 = *puVar15;
            puVar15 = (unsigned int*)(*puVar20)[lVar10 - 2];
            arg2 = *puVar15;
            puVar15 = (unsigned int*)(*puVar20)[lVar10 - 1];
            arg3_00 = *puVar15;
            pCVar8 = (ClanSettings*)field_140536.operator->();
            uVar17 = pCVar8->GetMemberExtraInfoBySlot(uVar17, arg2, arg3_00);
            goto LAB_100162b19;
        case 3815:
            lVar10 = field_140536.operator->();
            uVar17 = *(unsigned int*)(lVar10 + 232);
            break;
        case 3816:
            lVar10 = field_140536.operator->();
            uVar17 = *(unsigned int*)(lVar10 + 236);
            break;
        case 3817:
            pCVar8 = (ClanSettings*)field_140536.operator->();
            uVar18 = (long)field_136096 - 1;
            field_136096 = (int)uVar18;
            pbVar16 = &field_104096[uVar18];
            local_88 = eastl::string(*pbVar16);
            uVar4 = pCVar8->FindMember(&local_88);
            iVar2 = field_104092;
            field_104092 = iVar2 + 1;
            puVar14 = &field_100092[(long)iVar2];
            *puVar14 = uVar4;
            goto LAB_100162bfd;
        case 3818:
            pCVar8 = (ClanSettings*)field_140536.operator->();
            local_48 = pCVar8->GetMemberSortedIndex();
            piVar13 = &field_100092[(long)field_104092 - 1];
            puVar14 = &local_48[(long)*piVar13];
            goto LAB_100162ba6;
        case 3819:
            iVar2 = field_104092;
            uVar18 = (long)iVar2 - 2;
            field_104092 = (int)uVar18;
            piVar13 = &field_100092[uVar18];
            iVar1 = *piVar13;
            piVar13 = &field_100092[(long)iVar2 - 1];
            pCVar5->AffinedClanSettingsAddBannedFromChannel(*piVar13, iVar1);
            goto LAB_100162bfd;
        case 3820:
            uVar18 = (long)field_104092 - 1;
            field_104092 = (int)uVar18;
            piVar13 = &field_100092[uVar18];
            iVar2 = *piVar13;
            lVar10 = field_140536.operator->();
            puVar15 = (unsigned int*)(*((lVar10 + 168)))[(long)iVar2];
            uVar17 = *puVar15;
            goto LAB_100162b19;
        case 3821:
            lVar10 = (long)field_104092;
            field_104092 = (int)(lVar10 - 3U);
            puVar20 = &field_100092;
            piVar13 = (int*)(*puVar20)[lVar10 - 3U];
            iVar2 = *piVar13;
            piVar13 = (int*)(*puVar20)[lVar10 - 2];
            iVar1 = *piVar13;
            piVar13 = (int*)(*puVar20)[lVar10 - 1];
            pCVar5->AffinedClanSettingsSetMutedFromChannel(*piVar13, iVar2, iVar1 == 1);
            goto LAB_100162bfd;
        case 3822:
            uVar18 = (long)field_104092 - 1;
            field_104092 = (int)uVar18;
            piVar13 = &field_100092[uVar18];
            iVar2 = *piVar13;
            lVar10 = field_140536.operator->();
            piVar13 = (int*)(*((lVar10 + 200)))[(long)iVar2];
            uVar17 = (unsigned int)(*piVar13 != 0);
            goto LAB_100162b19;
        case 3850:
            bVar3 = pCVar5->field_52632 != nullptr;
            iVar2 = field_104092;
            field_104092 = iVar2 + 1;
            puVar14 = &field_100092[(long)iVar2];
            if (!bVar3)
                goto LAB_1001629a9;
            *puVar14 = 1;
            field_140560 = pCVar5->field_52632;
            goto LAB_100162bfd;
        case 3851:
            uVar18 = (long)field_104092 - 1;
            field_104092 = (int)uVar18;
            piVar13 = &field_100092[uVar18];
            iVar2 = *piVar13;
            psVar9 = &pCVar5->field_52648[(long)iVar2];
            bVar3 = *psVar9 != nullptr;
            iVar1 = field_104092;
            field_104092 = iVar1 + 1;
            puVar14 = &field_100092[(long)iVar1];
            if (!bVar3)
                goto LAB_1001629a9;
            *puVar14 = 1;
            field_140560 = *psVar9;
            field_140576 = iVar2;
            goto LAB_100162bfd;
        case 3852:
            lVar10 = field_140560.operator->();
            pbVar16 = (eastl::string*)(lVar10 + 88);
            goto LAB_100162a5b;
        case 3853:
            lVar10 = field_140560.operator->();
            uVar17 = (unsigned int)*(char*)(lVar10 + 122);
            break;
        case 3854:
            lVar10 = field_140560.operator->();
            uVar17 = (unsigned int)*(char*)(lVar10 + 121);
            break;
        case 3855:
            pCVar12 = (ClanChannel*)field_140560.operator->();
            uVar17 = pCVar12->GetUserListSize();
            break;
        case 3856:
            uVar18 = (long)field_104092 - 1;
            field_104092 = (int)uVar18;
            piVar13 = &field_100092[uVar18];
            iVar2 = *piVar13;
            lVar10 = field_140560.operator->();
            psVar11 = (shared_ptr<rs2lib::social::ClanChannelUser>*)(*((lVar10 + 48)))[(long)iVar2];
            lVar10 = (*psVar11).operator->();
            pbVar16 = ((lVar10 + 16))->GetDisplayName();
        LAB_100162a5b:
            iVar2 = field_136096;
            field_136096 = iVar2 + 1;
            this_00 = &field_104096[(long)iVar2];
            *this_00 = pbVar16;
            goto LAB_100162bfd;
        case 3857:
            uVar18 = (long)field_104092 - 1;
            field_104092 = (int)uVar18;
            piVar13 = &field_100092[uVar18];
            iVar2 = *piVar13;
            lVar10 = field_140560.operator->();
            psVar11 = (shared_ptr<rs2lib::social::ClanChannelUser>*)(*((lVar10 + 48)))[(long)iVar2];
            lVar10 = (*psVar11).operator->();
            uVar17 = (unsigned int)*(char*)(lVar10 + 8);
            goto LAB_100162b19;
        case 3858:
            uVar18 = (long)field_104092 - 1;
            field_104092 = (int)uVar18;
            piVar13 = &field_100092[uVar18];
            iVar2 = *piVar13;
            lVar10 = field_140560.operator->();
            psVar11 = (shared_ptr<rs2lib::social::ClanChannelUser>*)(*((lVar10 + 48)))[(long)iVar2];
            lVar10 = (*psVar11).operator->();
            uVar17 = *(unsigned int*)(lVar10 + 12);
        LAB_100162b19:
            iVar2 = field_104092;
            field_104092 = iVar2 + 1;
            goto LAB_100162bf6;
        case 3859:
            uVar18 = (long)field_104092 - 1;
            field_104092 = (int)uVar18;
            piVar13 = &field_100092[uVar18];
            pCVar5->ClanChannelKickUser(field_140576, *piVar13);
            goto LAB_100162bfd;
        case 3860:
            pCVar12 = (ClanChannel*)field_140560.operator->();
            uVar18 = (long)field_136096 - 1;
            field_136096 = (int)uVar18;
            pbVar16 = &field_104096[uVar18];
            local_68 = eastl::string(*pbVar16);
            uVar4 = pCVar12->FindUserPos(&local_68);
            iVar2 = field_104092;
            field_104092 = iVar2 + 1;
            puVar14 = &field_100092[(long)iVar2];
            *puVar14 = uVar4;
            goto LAB_100162bfd;
        case 3861:
            pCVar12 = (ClanChannel*)field_140560.operator->();
            local_48 = pCVar12->GetUserSortedIndex();
            piVar13 = &field_100092[(long)field_104092 - 1];
            puVar14 = &local_48[(long)*piVar13];
        LAB_100162ba6:
            uVar4 = *puVar14;
            puVar14 = &field_100092[(long)field_104092 - 1];
            *puVar14 = uVar4;
            goto LAB_100162bfd;
        case 3890:
            bVar3 = pCVar5->field_52528 != nullptr;
            uVar17 = (unsigned int)bVar3;
        }
        iVar2 = field_104092;
        field_104092 = iVar2 + 1;
    LAB_100162bf6:
        puVar15 = &field_100092[(long)iVar2];
        *puVar15 = uVar17;
    LAB_100162bfd:
        uVar19 = 1;
    switchD_1001623e1_caseD_ee0:
        return uVar19;
    }

} // namespace jag::oldscape
