// projects/osclient/ScriptRunnerImpl_3800To3899.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1001623a0, 2704 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand3800To3899(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand3800To3899(long param_1, undefined4 param_2) {
        uint uVar1;
        uint uVar2;
        int iVar3;
        int iVar4;
        bool bVar5;
        undefined4 uVar6;
        Client* this;
        char* pcVar7;
        ClanSettings* pCVar8;
        shared_ptr* psVar9;
        eastl::string* this_00;
        long lVar10;
        shared_ptr<rs2lib::social::ClanChannelUser>* psVar11;
        int* piVar12;
        undefined4* puVar13;
        uint* puVar14;
        ClanChannel* pCVar15;
        basic_string* pbVar16;
        uint uVar17;
        ulong uVar18;
        vector<eastl::string, eastl::allocator>* this_01;
        undefined8 uVar19;
        array<int, 1000ul>* paVar20;
        eastl::string local_88[32];
        eastl::string local_68[32];
        Array<int, eastl::allocator> local_48[24];

        uVar19 = 2;
        this = (Client*)Client::Instance();
        switch (param_2) {
        case 3800:
            lVar10 = Client::Instance();
            bVar5 = operator!=((shared_ptr*)(lVar10 + 52552), (_func_decltype_nullptr*)0);
            iVar4 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar4 + 1;
            puVar13 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar4);
            if (bVar5) {
                *puVar13 = 1;
                lVar10 = Client::Instance();
                shared_ptr<rs2lib::social::ClanSettings>::operator=(
                    (shared_ptr<rs2lib::social::ClanSettings>*)(param_1 + 140536), (shared_ptr*)(lVar10 + 52552));
                *(undefined4*)(param_1 + 140552) = 4294967295;
            } else {
            LAB_1001629a9:
                *puVar13 = 0;
            }
            goto LAB_100162bfd;
        case 3801:
            uVar18 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar18;
            piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            iVar4 = *piVar12;
            lVar10 = Client::Instance();
            psVar9 = (shared_ptr*)std::array<shared_ptr<rs2lib::social::ClanSettings>, 4ul>::operator[](
                (array<shared_ptr<rs2lib::social::ClanSettings>, 4ul>*)(lVar10 + 52568), (long)iVar4);
            bVar5 = operator!=(psVar9, (_func_decltype_nullptr*)0);
            iVar3 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar3 + 1;
            puVar13 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar3);
            if (!bVar5)
                goto LAB_1001629a9;
            *puVar13 = 1;
            psVar9 = (shared_ptr*)std::array<shared_ptr<rs2lib::social::ClanSettings>, 4ul>::operator[](
                (array<shared_ptr<rs2lib::social::ClanSettings>, 4ul>*)&field_52568, (long)iVar4);
            shared_ptr<rs2lib::social::ClanSettings>::operator=(
                (shared_ptr<rs2lib::social::ClanSettings>*)(param_1 + 140536), psVar9);
            *(int*)(param_1 + 140552) = iVar4;
            goto LAB_100162bfd;
        case 3802:
            lVar10 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                (shared_ptr<rs2lib::social::ClanSettings>*)(param_1 + 140536));
            pbVar16 = (basic_string*)(lVar10 + 16);
            goto LAB_100162a5b;
        case 3803:
            lVar10 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                (shared_ptr<rs2lib::social::ClanSettings>*)(param_1 + 140536));
            uVar17 = (uint) * (byte*)(lVar10 + 56);
            break;
        case 3804:
            lVar10 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                (shared_ptr<rs2lib::social::ClanSettings>*)(param_1 + 140536));
            uVar17 = (uint) * (char*)(lVar10 + 57);
            break;
        case 3805:
            lVar10 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                (shared_ptr<rs2lib::social::ClanSettings>*)(param_1 + 140536));
            uVar17 = (uint) * (char*)(lVar10 + 58);
            break;
        case 3806:
            lVar10 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                (shared_ptr<rs2lib::social::ClanSettings>*)(param_1 + 140536));
            uVar17 = (uint) * (char*)(lVar10 + 59);
            break;
        case 3807:
            lVar10 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                (shared_ptr<rs2lib::social::ClanSettings>*)(param_1 + 140536));
            uVar17 = (uint) * (char*)(lVar10 + 60);
            break;
        default:
            goto switchD_1001623e1_caseD_ee0;
        case 3809:
            lVar10 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                (shared_ptr<rs2lib::social::ClanSettings>*)(param_1 + 140536));
            uVar17 = *(uint*)(lVar10 + 64);
            break;
        case 3810:
            uVar18 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar18;
            piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            iVar4 = *piVar12;
            lVar10 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                (shared_ptr<rs2lib::social::ClanSettings>*)(param_1 + 140536));
            this_01 = (vector<eastl::string, eastl::allocator>*)(lVar10 + 280);
            goto LAB_10016263f;
        case 3811:
            uVar18 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar18;
            piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            iVar4 = *piVar12;
            lVar10 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                (shared_ptr<rs2lib::social::ClanSettings>*)(param_1 + 140536));
            pcVar7 = (char*)eastl::vector<signed char, eastl::allocator>::operator[](
                (vector<signed char, eastl::allocator>*)(lVar10 + 104), (long)iVar4);
            uVar17 = (uint)*pcVar7;
            goto LAB_100162b19;
        case 3812:
            lVar10 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                (shared_ptr<rs2lib::social::ClanSettings>*)(param_1 + 140536));
            uVar17 = *(uint*)(lVar10 + 240);
            break;
        case 3813:
            uVar18 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar18;
            piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            iVar4 = *piVar12;
            lVar10 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                (shared_ptr<rs2lib::social::ClanSettings>*)(param_1 + 140536));
            this_01 = (vector<eastl::string, eastl::allocator>*)(lVar10 + 312);
        LAB_10016263f:
            pbVar16 = (basic_string*)eastl::vector<eastl::string, eastl::allocator>::operator[](this_01, (long)iVar4);
            goto LAB_100162a5b;
        case 3814:
            lVar10 = (long)*(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)(lVar10 - 3U);
            paVar20 = (array<int, 1000ul>*)(param_1 + 100092);
            puVar14 = (uint*)std::array<int, 1000ul>::operator[](paVar20, lVar10 - 3U);
            uVar17 = *puVar14;
            puVar14 = (uint*)std::array<int, 1000ul>::operator[](paVar20, lVar10 - 2);
            uVar1 = *puVar14;
            puVar14 = (uint*)std::array<int, 1000ul>::operator[](paVar20, lVar10 - 1);
            uVar2 = *puVar14;
            pCVar8 = (ClanSettings*)shared_ptr<rs2lib::social::ClanSettings>::operator->(
                (shared_ptr<rs2lib::social::ClanSettings>*)(param_1 + 140536));
            uVar17 = pCVar8->GetMemberExtraInfoBySlot(uVar17, uVar1, uVar2);
            goto LAB_100162b19;
        case 3815:
            lVar10 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                (shared_ptr<rs2lib::social::ClanSettings>*)(param_1 + 140536));
            uVar17 = *(uint*)(lVar10 + 232);
            break;
        case 3816:
            lVar10 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                (shared_ptr<rs2lib::social::ClanSettings>*)(param_1 + 140536));
            uVar17 = *(uint*)(lVar10 + 236);
            break;
        case 3817:
            pCVar8 = (ClanSettings*)shared_ptr<rs2lib::social::ClanSettings>::operator->(
                (shared_ptr<rs2lib::social::ClanSettings>*)(param_1 + 140536));
            uVar18 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar18;
            pbVar16 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar18);
            eastl::string::basic_string(local_88, pbVar16);
            uVar6 = pCVar8->FindMember(local_88);
            iVar4 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar4 + 1;
            puVar13 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar4);
            *puVar13 = uVar6;
            eastl::string::~basic_string(local_88);
            goto LAB_100162bfd;
        case 3818:
            shared_ptr<rs2lib::social::ClanSettings>::operator->(
                (shared_ptr<rs2lib::social::ClanSettings>*)(param_1 + 140536));
            local_48->GetMemberSortedIndex();
            piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092),
                                                                (long)*(int*)(param_1 + 104092) - 1);
            puVar13 = (undefined4*)Array<int, eastl::allocator>::operator[](local_48, (long)*piVar12);
            goto LAB_100162ba6;
        case 3819:
            iVar4 = *(int*)(param_1 + 104092);
            uVar18 = (long)iVar4 - 2;
            *(int*)(param_1 + 104092) = (int)uVar18;
            piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            iVar3 = *piVar12;
            piVar12 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar4 - 1);
            AffinedClanSettingsAddBannedFromChannel(*piVar12, iVar3);
            goto LAB_100162bfd;
        case 3820:
            uVar18 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar18;
            piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            iVar4 = *piVar12;
            lVar10 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                (shared_ptr<rs2lib::social::ClanSettings>*)(param_1 + 140536));
            puVar14 = (uint*)eastl::vector<int, eastl::allocator>::operator[](
                (vector<int, eastl::allocator>*)(lVar10 + 168), (long)iVar4);
            uVar17 = *puVar14;
            goto LAB_100162b19;
        case 3821:
            lVar10 = (long)*(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)(lVar10 - 3U);
            paVar20 = (array<int, 1000ul>*)(param_1 + 100092);
            piVar12 = (int*)std::array<int, 1000ul>::operator[](paVar20, lVar10 - 3U);
            iVar4 = *piVar12;
            piVar12 = (int*)std::array<int, 1000ul>::operator[](paVar20, lVar10 - 2);
            iVar3 = *piVar12;
            piVar12 = (int*)std::array<int, 1000ul>::operator[](paVar20, lVar10 - 1);
            AffinedClanSettingsSetMutedFromChannel(*piVar12, iVar4, iVar3 == 1);
            goto LAB_100162bfd;
        case 3822:
            uVar18 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar18;
            piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            iVar4 = *piVar12;
            lVar10 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                (shared_ptr<rs2lib::social::ClanSettings>*)(param_1 + 140536));
            piVar12 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                (vector<int, eastl::allocator>*)(lVar10 + 200), (long)iVar4);
            uVar17 = (uint)(*piVar12 != 0);
            goto LAB_100162b19;
        case 3850:
            bVar5 = operator!=((shared_ptr*)field_52632, (_func_decltype_nullptr*)0);
            iVar4 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar4 + 1;
            puVar13 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar4);
            if (!bVar5)
                goto LAB_1001629a9;
            *puVar13 = 1;
            shared_ptr<rs2lib::social::ClanChannel>::operator=(
                (shared_ptr<rs2lib::social::ClanChannel>*)(param_1 + 140560), (shared_ptr*)field_52632);
            goto LAB_100162bfd;
        case 3851:
            uVar18 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar18;
            piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            iVar4 = *piVar12;
            psVar9 = (shared_ptr*)std::array<shared_ptr<rs2lib::social::ClanChannel>, 4ul>::operator[](
                (array<shared_ptr<rs2lib::social::ClanChannel>, 4ul>*)&field_52648, (long)iVar4);
            bVar5 = operator!=(psVar9, (_func_decltype_nullptr*)0);
            iVar3 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar3 + 1;
            puVar13 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar3);
            if (!bVar5)
                goto LAB_1001629a9;
            *puVar13 = 1;
            shared_ptr<rs2lib::social::ClanChannel>::operator=(
                (shared_ptr<rs2lib::social::ClanChannel>*)(param_1 + 140560), psVar9);
            *(int*)(param_1 + 140576) = iVar4;
            goto LAB_100162bfd;
        case 3852:
            lVar10 = shared_ptr<rs2lib::social::ClanChannel>::operator->(
                (shared_ptr<rs2lib::social::ClanChannel>*)(param_1 + 140560));
            pbVar16 = (basic_string*)(lVar10 + 88);
            goto LAB_100162a5b;
        case 3853:
            lVar10 = shared_ptr<rs2lib::social::ClanChannel>::operator->(
                (shared_ptr<rs2lib::social::ClanChannel>*)(param_1 + 140560));
            uVar17 = (uint) * (char*)(lVar10 + 122);
            break;
        case 3854:
            lVar10 = shared_ptr<rs2lib::social::ClanChannel>::operator->(
                (shared_ptr<rs2lib::social::ClanChannel>*)(param_1 + 140560));
            uVar17 = (uint) * (char*)(lVar10 + 121);
            break;
        case 3855:
            pCVar15 = (ClanChannel*)shared_ptr<rs2lib::social::ClanChannel>::operator->(
                (shared_ptr<rs2lib::social::ClanChannel>*)(param_1 + 140560));
            uVar17 = pCVar15->GetUserListSize();
            break;
        case 3856:
            uVar18 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar18;
            piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            iVar4 = *piVar12;
            lVar10 = shared_ptr<rs2lib::social::ClanChannel>::operator->(
                (shared_ptr<rs2lib::social::ClanChannel>*)(param_1 + 140560));
            psVar11 = (shared_ptr<rs2lib::social::ClanChannelUser>*)
                eastl::vector<shared_ptr<rs2lib::social::ClanChannelUser>, eastl::allocator>::operator[](
                    (vector<shared_ptr<rs2lib::social::ClanChannelUser>, eastl::allocator>*)(lVar10 + 48), (long)iVar4);
            lVar10 = shared_ptr<rs2lib::social::ClanChannelUser>::operator->(psVar11);
            pbVar16 = (basic_string*)((lVar10 + 16))->GetDisplayName();
        LAB_100162a5b:
            iVar4 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar4 + 1;
            this_00 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar4);
            eastl::string::operator=(this_00, pbVar16);
            goto LAB_100162bfd;
        case 3857:
            uVar18 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar18;
            piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            iVar4 = *piVar12;
            lVar10 = shared_ptr<rs2lib::social::ClanChannel>::operator->(
                (shared_ptr<rs2lib::social::ClanChannel>*)(param_1 + 140560));
            psVar11 = (shared_ptr<rs2lib::social::ClanChannelUser>*)
                eastl::vector<shared_ptr<rs2lib::social::ClanChannelUser>, eastl::allocator>::operator[](
                    (vector<shared_ptr<rs2lib::social::ClanChannelUser>, eastl::allocator>*)(lVar10 + 48), (long)iVar4);
            lVar10 = shared_ptr<rs2lib::social::ClanChannelUser>::operator->(psVar11);
            uVar17 = (uint) * (char*)(lVar10 + 8);
            goto LAB_100162b19;
        case 3858:
            uVar18 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar18;
            piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            iVar4 = *piVar12;
            lVar10 = shared_ptr<rs2lib::social::ClanChannel>::operator->(
                (shared_ptr<rs2lib::social::ClanChannel>*)(param_1 + 140560));
            psVar11 = (shared_ptr<rs2lib::social::ClanChannelUser>*)
                eastl::vector<shared_ptr<rs2lib::social::ClanChannelUser>, eastl::allocator>::operator[](
                    (vector<shared_ptr<rs2lib::social::ClanChannelUser>, eastl::allocator>*)(lVar10 + 48), (long)iVar4);
            lVar10 = shared_ptr<rs2lib::social::ClanChannelUser>::operator->(psVar11);
            uVar17 = *(uint*)(lVar10 + 12);
        LAB_100162b19:
            iVar4 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar4 + 1;
            goto LAB_100162bf6;
        case 3859:
            uVar18 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar18;
            piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            ClanChannelKickUser(*(int*)(param_1 + 140576), *piVar12);
            goto LAB_100162bfd;
        case 3860:
            pCVar15 = (ClanChannel*)shared_ptr<rs2lib::social::ClanChannel>::operator->(
                (shared_ptr<rs2lib::social::ClanChannel>*)(param_1 + 140560));
            uVar18 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar18;
            pbVar16 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar18);
            eastl::string::basic_string(local_68, pbVar16);
            uVar6 = pCVar15->FindUserPos(local_68);
            iVar4 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar4 + 1;
            puVar13 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar4);
            *puVar13 = uVar6;
            eastl::string::~basic_string(local_68);
            goto LAB_100162bfd;
        case 3861:
            shared_ptr<rs2lib::social::ClanChannel>::operator->(
                (shared_ptr<rs2lib::social::ClanChannel>*)(param_1 + 140560));
            local_48->GetUserSortedIndex();
            piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092),
                                                                (long)*(int*)(param_1 + 104092) - 1);
            puVar13 = (undefined4*)Array<int, eastl::allocator>::operator[](local_48, (long)*piVar12);
        LAB_100162ba6:
            uVar6 = *puVar13;
            puVar13 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092),
                                                                       (long)*(int*)(param_1 + 104092) - 1);
            *puVar13 = uVar6;
            local_48->~Array();
            goto LAB_100162bfd;
        case 3890:
            bVar5 = operator!=((shared_ptr*)field_52528, (_func_decltype_nullptr*)0);
            uVar17 = (uint)bVar5;
        }
        iVar4 = *(int*)(param_1 + 104092);
        *(int*)(param_1 + 104092) = iVar4 + 1;
    LAB_100162bf6:
        puVar14 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar4);
        *puVar14 = uVar17;
    LAB_100162bfd:
        uVar19 = 1;
    switchD_1001623e1_caseD_ee0:
        return uVar19;
    }

} // namespace jag::oldscape
