// projects/osclient/ScriptRunnerImpl_5000To5099.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1001662f0, 6224 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand5000To5099(ScriptOp, ClientScript const&, bool)
    undefined1 ScriptRunnerImpl::ExecuteCommand5000To5099(ChatHistory* param_1, undefined4 param_2) {
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* pPVar1;
        ulong uVar2;
        array<eastl::string, 1000ul>* paVar3;
        bool bVar4;
        char cVar5;
        byte bVar6;
        short sVar7;
        short sVar8;
        int iVar9;
        int iVar10;
        undefined4 uVar11;
        basic_string* pbVar12;
        WordPack* this;
        ServerConnection* pSVar13;
        DisplayName* this_00;
        basic_string* pbVar14;
        undefined8 uVar15;
        undefined8 uVar16;
        shared_ptr* psVar17;
        ListIterator<console::Line, console::Line*, console::Line&>* pLVar18;
        long lVar19;
        int* piVar20;
        ChatLine* pCVar21;
        undefined4* puVar22;
        eastl::string* pbVar23;
        int iVar24;
        array<int, 1000ul>* paVar25;
        undefined1 uVar26;
        undefined1 auVar27[16];
        shared_ptr local_98[2];
        undefined1 local_78[64];
        eastl local_38[8];

        uVar26 = 2;
        pbVar12 = (basic_string*)Client::Instance();
        switch (param_2) {
        case 5000:
            uVar11 = *(undefined4*)(pbVar12 + 53304);
            break;
        case 5001:
            iVar9 = *(int*)(param_1 + 104092);
            uVar2 = (long)iVar9 - 3;
            *(int*)(param_1 + 104092) = (int)uVar2;
            paVar25 = (array<int, 1000ul>*)(param_1 + 100092);
            puVar22 = (undefined4*)std::array<int, 1000ul>::operator[](paVar25, uVar2);
            *(undefined4*)(pbVar12 + 53304) = *puVar22;
            piVar20 = (int*)std::array<int, 1000ul>::operator[](paVar25, (long)iVar9 - 2);
            iVar24 = rs2lib::FriendPrivacyUtils::GetBySaveValue(*piVar20);
            iVar9 = 1;
            if (iVar24 != -1) {
                iVar9 = iVar24;
            }
            *(int*)(pbVar12 + 53308) = iVar9;
            puVar22 = (undefined4*)std::array<int, 1000ul>::operator[](paVar25, (long)*(int*)(param_1 + 104092) + 2);
            *(undefined4*)(pbVar12 + 53312) = *puVar22;
            pSVar13 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)(pbVar12 + 19120));
            uVar15 = pSVar13->GetOutgoingEncryption();
            local_78->MakeClientMessage(80, uVar15);
            pPVar1 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_78 + 8);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                pPVar1, *(undefined4*)(pbVar12 + 53304));
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                pPVar1, *(undefined4*)(pbVar12 + 53308));
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                pPVar1, *(undefined4*)(pbVar12 + 53312));
            pSVar13 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)(pbVar12 + 19120));
            pSVar13->SendClientMessage(local_78);
            goto LAB_100166850;
        case 5002:
            iVar9 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = (int)((long)iVar9 - 1U);
            pbVar14 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar9 - 1U);
            iVar9 = *(int*)(param_1 + 104092);
            uVar2 = (long)iVar9 - 2;
            *(int*)(param_1 + 104092) = (int)uVar2;
            piVar20 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar2);
            iVar24 = *piVar20;
            puVar22 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092),
                                                                       (long)iVar9 - 1);
            uVar11 = *puVar22;
            pSVar13 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)(pbVar12 + 19120));
            uVar15 = pSVar13->GetOutgoingEncryption();
            local_78->MakeClientMessage(84, uVar15);
            iVar9 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252<eastl::string>(
                pbVar14, false);
            pPVar1 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_78 + 8);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(pPVar1, iVar9 + 2);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
                eastl::basic_string<char, BucketAllocatorEASTL>>(pPVar1, pbVar14, false);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(pPVar1, iVar24 + -1);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(pPVar1, uVar11);
            pSVar13 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)(pbVar12 + 19120));
            pSVar13->SendClientMessage(local_78);
            goto LAB_100166850;
        case 5003:
            iVar9 = *(int*)(param_1 + 104092);
            uVar2 = (long)iVar9 - 2;
            *(int*)(param_1 + 104092) = (int)uVar2;
            paVar25 = (array<int, 1000ul>*)(param_1 + 100092);
            piVar20 = (int*)std::array<int, 1000ul>::operator[](paVar25, uVar2);
            iVar24 = *piVar20;
            piVar20 = (int*)std::array<int, 1000ul>::operator[](paVar25, (long)iVar9 - 1);
            psVar17 = (shared_ptr*)ChatHistory::GetLine(iVar24, *piVar20);
            new (local_98) shared_ptr<dash3d::Decor>(psVar17);
            bVar4 = operator!=(local_98, (_func_decltype_nullptr*)0);
            if (bVar4) {
                pLVar18 =
                    (ListIterator<console::Line, console::Line*, console::Line&>*)shared_ptr<ChatLine>::operator->(
                        (shared_ptr<ChatLine>*)local_98);
                puVar22 =
                    (undefined4*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(pLVar18);
                uVar11 = *puVar22;
                iVar9 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar9 + 1;
                puVar22 = (undefined4*)std::array<int, 1000ul>::operator[](paVar25, (long)iVar9);
                *puVar22 = uVar11;
                lVar19 = shared_ptr<ChatLine>::operator->((shared_ptr<ChatLine>*)local_98);
                uVar11 = *(undefined4*)(lVar19 + 8);
                iVar9 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar9 + 1;
                puVar22 = (undefined4*)std::array<int, 1000ul>::operator[](paVar25, (long)iVar9);
                *puVar22 = uVar11;
                lVar19 = shared_ptr<ChatLine>::operator->((shared_ptr<ChatLine>*)local_98);
                bVar4 = eastl::operator!=((basic_string*)(lVar19 + 88), (value_type*)"");
                if (bVar4) {
                    lVar19 = shared_ptr<ChatLine>::operator->((shared_ptr<ChatLine>*)local_98);
                    new (local_78) eastl::string((basic_string*)(lVar19 + 88));
                } else {
                    new (local_38) eastl::allocator("EASTL basic_string");
                    new (local_78) eastl::string("", local_38);
                }
                paVar3 = (array<eastl::string, 1000ul>*)(param_1 + 104096);
                iVar9 = *(int*)(param_1 + 136096);
                *(int*)(param_1 + 136096) = iVar9 + 1;
                pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](paVar3, (long)iVar9);
                eastl::string::operator=(pbVar23, (basic_string*)local_78);
                local_78->~basic_string();
                lVar19 = shared_ptr<ChatLine>::operator->((shared_ptr<ChatLine>*)local_98);
                bVar4 = eastl::operator!=((basic_string*)(lVar19 + 136), (value_type*)"");
                if (bVar4) {
                    lVar19 = shared_ptr<ChatLine>::operator->((shared_ptr<ChatLine>*)local_98);
                    new (local_78) eastl::string((basic_string*)(lVar19 + 136));
                } else {
                    new (local_38) eastl::allocator("EASTL basic_string");
                    new (local_78) eastl::string("", local_38);
                }
                iVar9 = *(int*)(param_1 + 136096);
                *(int*)(param_1 + 136096) = iVar9 + 1;
                pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](paVar3, (long)iVar9);
                eastl::string::operator=(pbVar23, (basic_string*)local_78);
                local_78->~basic_string();
                lVar19 = shared_ptr<ChatLine>::operator->((shared_ptr<ChatLine>*)local_98);
                bVar4 = eastl::operator!=((basic_string*)(lVar19 + 168), (value_type*)"");
                if (bVar4) {
                    lVar19 = shared_ptr<ChatLine>::operator->((shared_ptr<ChatLine>*)local_98);
                    new (local_78) eastl::string((basic_string*)(lVar19 + 168));
                } else {
                    new (local_38) eastl::allocator("EASTL basic_string");
                    new (local_78) eastl::string("", local_38);
                }
                iVar9 = *(int*)(param_1 + 136096);
                *(int*)(param_1 + 136096) = iVar9 + 1;
                pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](paVar3, (long)iVar9);
                eastl::string::operator=(pbVar23, (basic_string*)local_78);
                local_78->~basic_string();
                pCVar21 = (ChatLine*)shared_ptr<ChatLine>::operator->((shared_ptr<ChatLine>*)local_98);
                cVar5 = pCVar21->IsFriend();
                iVar9 = 1;
                if (cVar5 == '\0') {
                    pCVar21 = (ChatLine*)shared_ptr<ChatLine>::operator->((shared_ptr<ChatLine>*)local_98);
                    bVar6 = pCVar21->IsIgnore();
                    iVar9 = (uint)bVar6 * 2;
                }
            } else {
                iVar9 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar9 + 1;
                puVar22 = (undefined4*)std::array<int, 1000ul>::operator[](paVar25, (long)iVar9);
                *puVar22 = 4294967295;
                iVar9 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar9 + 1;
                puVar22 = (undefined4*)std::array<int, 1000ul>::operator[](paVar25, (long)iVar9);
                *puVar22 = 0;
                paVar3 = (array<eastl::string, 1000ul>*)(param_1 + 104096);
                iVar9 = *(int*)(param_1 + 136096);
                *(int*)(param_1 + 136096) = iVar9 + 1;
                pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](paVar3, (long)iVar9);
                eastl::string::assign(pbVar23, "");
                iVar9 = *(int*)(param_1 + 136096);
                *(int*)(param_1 + 136096) = iVar9 + 1;
                pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](paVar3, (long)iVar9);
                eastl::string::assign(pbVar23, "");
                iVar9 = *(int*)(param_1 + 136096);
                *(int*)(param_1 + 136096) = iVar9 + 1;
                pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](paVar3, (long)iVar9);
                iVar9 = 0;
                eastl::string::assign(pbVar23, "");
            }
            iVar24 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar24 + 1;
            goto LAB_1001679be;
        case 5004:
            paVar25 = (array<int, 1000ul>*)(param_1 + 100092);
            iVar9 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)((long)iVar9 - 1U);
            piVar20 = (int*)std::array<int, 1000ul>::operator[](paVar25, (long)iVar9 - 1U);
            pCVar21 = (ChatLine*)ChatHistory::GetLineByUID(*piVar20);
            if (pCVar21 != (ChatLine*)0) {
                iVar9 = pCVar21->field_80;
                iVar24 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar24 + 1;
                piVar20 = (int*)std::array<int, 1000ul>::operator[](paVar25, (long)iVar24);
                *piVar20 = iVar9;
                uVar11 = pCVar21->field_8;
                iVar9 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar9 + 1;
                puVar22 = (undefined4*)std::array<int, 1000ul>::operator[](paVar25, (long)iVar9);
                *puVar22 = uVar11;
                bVar4 = eastl::operator!=((basic_string*)&pCVar21->field_88, (value_type*)"");
                if (bVar4) {
                    new (local_78) eastl::string((basic_string*)&pCVar21->field_88);
                } else {
                    new (local_98) eastl::allocator("EASTL basic_string");
                    new (local_78) eastl::string("", local_98);
                }
                paVar3 = (array<eastl::string, 1000ul>*)(param_1 + 104096);
                iVar9 = *(int*)(param_1 + 136096);
                *(int*)(param_1 + 136096) = iVar9 + 1;
                pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](paVar3, (long)iVar9);
                eastl::string::operator=(pbVar23, (basic_string*)local_78);
                local_78->~basic_string();
                bVar4 = eastl::operator!=((basic_string*)&pCVar21->field_136, (value_type*)"");
                if (bVar4) {
                    new (local_78) eastl::string((basic_string*)&pCVar21->field_136);
                } else {
                    new (local_98) eastl::allocator("EASTL basic_string");
                    new (local_78) eastl::string("", local_98);
                }
                iVar9 = *(int*)(param_1 + 136096);
                *(int*)(param_1 + 136096) = iVar9 + 1;
                pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](paVar3, (long)iVar9);
                eastl::string::operator=(pbVar23, (basic_string*)local_78);
                local_78->~basic_string();
                bVar4 = eastl::operator!=((basic_string*)&pCVar21->field_168, (value_type*)"");
                if (bVar4) {
                    new (local_78) eastl::string((basic_string*)&pCVar21->field_168);
                } else {
                    new (local_98) eastl::allocator("EASTL basic_string");
                    new (local_78) eastl::string("", local_98);
                }
                iVar9 = *(int*)(param_1 + 136096);
                *(int*)(param_1 + 136096) = iVar9 + 1;
                pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](paVar3, (long)iVar9);
                eastl::string::operator=(pbVar23, (basic_string*)local_78);
                local_78->~basic_string();
                cVar5 = pCVar21->IsFriend();
                iVar9 = 1;
                if (cVar5 == '\0') {
                    bVar6 = pCVar21->IsIgnore();
                    iVar9 = (uint)bVar6 * 2;
                }
            LAB_100167573:
                iVar24 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar24 + 1;
                piVar20 =
                    (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar24);
                *piVar20 = iVar9;
                return true;
            }
            iVar9 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar9 + 1;
            puVar22 = (undefined4*)std::array<int, 1000ul>::operator[](paVar25, (long)iVar9);
            *puVar22 = 4294967295;
            iVar9 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar9 + 1;
            puVar22 = (undefined4*)std::array<int, 1000ul>::operator[](paVar25, (long)iVar9);
            *puVar22 = 0;
            paVar3 = (array<eastl::string, 1000ul>*)(param_1 + 104096);
            iVar9 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar9 + 1;
            pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](paVar3, (long)iVar9);
            eastl::string::assign(pbVar23, "");
            iVar9 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar9 + 1;
            pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](paVar3, (long)iVar9);
            eastl::string::assign(pbVar23, "");
            iVar9 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar9 + 1;
            pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](paVar3, (long)iVar9);
            eastl::string::assign(pbVar23, "");
            iVar9 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar9 + 1;
            goto LAB_1001671a7;
        case 5005:
            uVar11 = *(undefined4*)(pbVar12 + 53308);
            break;
        default:
            goto switchD_100166331_caseD_138e;
        case 5008:
            iVar9 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = (int)((long)iVar9 - 1U);
            pbVar14 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar9 - 1U);
            new (local_98) eastl::string(pbVar14);
            iVar9 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)((long)iVar9 - 1U);
            piVar20 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar9 - 1U);
            local_78->BuildChatClientMessage(*piVar20, local_98, *(Language**)(pbVar12 + 8432), -1);
            pSVar13 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)(pbVar12 + 19120));
            pSVar13->SendClientMessage(local_78);
            goto LAB_1001668f5;
        case 5009:
            iVar9 = *(int*)(param_1 + 136096);
            uVar2 = (long)iVar9 - 2;
            *(int*)(param_1 + 136096) = (int)uVar2;
            std::array<eastl::string, 1000ul>::operator[]((array<eastl::string, 1000ul>*)(param_1 + 104096),
                                                          (long)iVar9 - 1);
            pSVar13 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)(pbVar12 + 19120));
            uVar15 = pSVar13->GetOutgoingEncryption();
            local_78->MakeClientMessage(85, uVar15);
            pPVar1 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_78 + 8);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar1, 0);
            pbVar14 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar2);
            sVar7 = pPVar1->size();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
                eastl::basic_string<char, BucketAllocatorEASTL>>(pPVar1, pbVar14, false);
            auVar27 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::destruct<highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", auVar27._8_8_);
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_98, auVar27._0_8_);
            this = (WordPack*)std::unique_ptr<game::WordPack, std::default_delete<game::WordPack>>::operator->(
                (unique_ptr<game::WordPack, std::default_delete<game::WordPack>>*)(pbVar12 + 54176));
            PackUTF8AsCP1252(pPVar1, local_98);
            sVar8 = pPVar1->size();
            pPVar1->pSize2(sVar8 - sVar7);
            pSVar13 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)(pbVar12 + 19120));
            pSVar13->SendClientMessage(local_78);
            local_98->~basic_string();
        LAB_100166850:
            local_78->~ClientMessage();
            goto LAB_1001679d1;
        case 5010:
            iVar9 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = (int)((long)iVar9 - 1U);
            pbVar14 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar9 - 1U);
            new (local_98) eastl::string(pbVar14);
            iVar9 = *(int*)(param_1 + 104092);
            uVar2 = (long)iVar9 - 2;
            *(int*)(param_1 + 104092) = (int)uVar2;
            piVar20 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar2);
            iVar24 = *piVar20;
            piVar20 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar9 - 1);
            local_78->BuildChatClientMessage(iVar24, local_98, *(Language**)(pbVar12 + 8432), *piVar20);
            pSVar13 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)(pbVar12 + 19120));
            pSVar13->SendClientMessage(local_78);
        LAB_1001668f5:
            local_78->~ClientMessage();
            local_98->~basic_string();
            goto LAB_1001679d1;
        case 5015:
            new (local_98) eastl::allocator("EASTL basic_string");
            new (local_78) eastl::string("", local_98);
            psVar17 = (shared_ptr*)(pbVar12 + 52016);
            bVar4 = operator!=(psVar17, (_func_decltype_nullptr*)0);
            if (bVar4) {
                lVar19 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)psVar17);
                bVar4 = operator!=((shared_ptr*)(lVar19 + 992), (_func_decltype_nullptr*)0);
                if (!bVar4)
                    goto LAB_100166db1;
                lVar19 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)psVar17);
                this_00 = (DisplayName*)shared_ptr<rs2lib::social::DisplayName>::operator->(
                    (shared_ptr<rs2lib::social::DisplayName>*)(lVar19 + 992));
                pbVar12 = (basic_string*)this_00->GetDisplayName();
                eastl::string::operator=((eastl::string*)local_78, pbVar12);
            } else {
            LAB_100166db1:
                local_78->assign("");
            }
            iVar9 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar9 + 1;
            pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar9);
            eastl::string::operator=(pbVar23, (basic_string*)local_78);
            goto LAB_100166dea;
        case 5016:
            uVar11 = *(undefined4*)(pbVar12 + 53312);
            break;
        case 5017:
            iVar9 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)((long)iVar9 - 1U);
            piVar20 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar9 - 1U);
            uVar11 = ChatHistory::GetHistoryLength(*piVar20);
            goto LAB_100166a28;
        case 5018:
            iVar9 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)((long)iVar9 - 1U);
            piVar20 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar9 - 1U);
            uVar11 = ChatHistory::GetNextActiveUID(*piVar20);
            goto LAB_100166a28;
        case 5019:
            iVar9 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)((long)iVar9 - 1U);
            piVar20 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar9 - 1U);
            uVar11 = ChatHistory::GetPreviousActiveUID(*piVar20);
        LAB_100166a28:
            iVar9 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar9 + 1;
            puVar22 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar9);
            *puVar22 = uVar11;
            goto LAB_1001679d1;
        case 5020:
            iVar9 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = (int)((long)iVar9 - 1U);
            pbVar14 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar9 - 1U);
            new (local_78) eastl::string(pbVar14);
            iVar9 = local_78->comparei("errortest");
            if (iVar9 == 0) {
                ((param_1 + 141000))->Raise("errorTest");
            } else {
                Client::DoCheat(pbVar12);
            }
            local_78->~basic_string();
            return iVar9 != 0;
        case 5021:
            iVar9 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = (int)((long)iVar9 - 1U);
            pbVar14 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar9 - 1U);
            new (local_78) eastl::string(pbVar14);
            eastl::string::make_lower();
            local_78->trim();
            eastl::string::operator=((eastl::string*)(pbVar12 + 53320), (basic_string*)local_78);
            goto LAB_100166dea;
        case 5022:
            iVar9 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar9 + 1;
            pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar9);
            eastl::string::operator=(pbVar23, pbVar12 + 53320);
            goto LAB_1001679d1;
        case 5023:
            iVar9 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = (int)((long)iVar9 - 1U);
            pbVar12 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar9 - 1U);
            new (local_78) eastl::string(pbVar12);
            uVar15 = logger::default_logger();
            uVar16 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar15, 0, 5,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_5000To5099.cpp",
                                302, uVar16);
        LAB_100166dea:
            local_78->~basic_string();
            goto LAB_1001679d1;
        case 5024:
            paVar25 = (array<int, 1000ul>*)(param_1 + 100092);
            iVar9 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)((long)iVar9 - 1U);
            piVar20 = (int*)std::array<int, 1000ul>::operator[](paVar25, (long)iVar9 - 1U);
            iVar9 = *piVar20;
            iVar10 = paVar25->GetTimestampMode();
            iVar24 = 2 - (uint)(iVar9 == 1);
            if (iVar9 == 0) {
                iVar24 = 0;
            }
            if (iVar10 == iVar24) {
                return true;
            }
            ChatHistory::SetTimestampMode();
            return true;
        case 5025:
            uVar11 = param_1->GetTimestampMode();
            break;
        case 5030:
            iVar9 = *(int*)(param_1 + 104092);
            uVar2 = (long)iVar9 - 2;
            *(int*)(param_1 + 104092) = (int)uVar2;
            paVar25 = (array<int, 1000ul>*)(param_1 + 100092);
            piVar20 = (int*)std::array<int, 1000ul>::operator[](paVar25, uVar2);
            iVar24 = *piVar20;
            piVar20 = (int*)std::array<int, 1000ul>::operator[](paVar25, (long)iVar9 - 1);
            psVar17 = (shared_ptr*)ChatHistory::GetLine(iVar24, *piVar20);
            new (local_98) shared_ptr<dash3d::Decor>(psVar17);
            bVar4 = operator!=(local_98, (_func_decltype_nullptr*)0);
            if (bVar4) {
                pLVar18 =
                    (ListIterator<console::Line, console::Line*, console::Line&>*)shared_ptr<ChatLine>::operator->(
                        (shared_ptr<ChatLine>*)local_98);
                puVar22 =
                    (undefined4*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(pLVar18);
                uVar11 = *puVar22;
                iVar9 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar9 + 1;
                puVar22 = (undefined4*)std::array<int, 1000ul>::operator[](paVar25, (long)iVar9);
                *puVar22 = uVar11;
                lVar19 = shared_ptr<ChatLine>::operator->((shared_ptr<ChatLine>*)local_98);
                uVar11 = *(undefined4*)(lVar19 + 8);
                iVar9 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar9 + 1;
                puVar22 = (undefined4*)std::array<int, 1000ul>::operator[](paVar25, (long)iVar9);
                *puVar22 = uVar11;
                lVar19 = shared_ptr<ChatLine>::operator->((shared_ptr<ChatLine>*)local_98);
                bVar4 = eastl::operator!=((basic_string*)(lVar19 + 88), (value_type*)"");
                if (bVar4) {
                    lVar19 = shared_ptr<ChatLine>::operator->((shared_ptr<ChatLine>*)local_98);
                    new (local_78) eastl::string((basic_string*)(lVar19 + 88));
                } else {
                    new (local_38) eastl::allocator("EASTL basic_string");
                    new (local_78) eastl::string("", local_38);
                }
                paVar3 = (array<eastl::string, 1000ul>*)(param_1 + 104096);
                iVar9 = *(int*)(param_1 + 136096);
                *(int*)(param_1 + 136096) = iVar9 + 1;
                pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](paVar3, (long)iVar9);
                eastl::string::operator=(pbVar23, (basic_string*)local_78);
                local_78->~basic_string();
                lVar19 = shared_ptr<ChatLine>::operator->((shared_ptr<ChatLine>*)local_98);
                bVar4 = eastl::operator!=((basic_string*)(lVar19 + 136), (value_type*)"");
                if (bVar4) {
                    lVar19 = shared_ptr<ChatLine>::operator->((shared_ptr<ChatLine>*)local_98);
                    new (local_78) eastl::string((basic_string*)(lVar19 + 136));
                } else {
                    new (local_38) eastl::allocator("EASTL basic_string");
                    new (local_78) eastl::string("", local_38);
                }
                iVar9 = *(int*)(param_1 + 136096);
                *(int*)(param_1 + 136096) = iVar9 + 1;
                pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](paVar3, (long)iVar9);
                eastl::string::operator=(pbVar23, (basic_string*)local_78);
                local_78->~basic_string();
                lVar19 = shared_ptr<ChatLine>::operator->((shared_ptr<ChatLine>*)local_98);
                bVar4 = eastl::operator!=((basic_string*)(lVar19 + 168), (value_type*)"");
                if (bVar4) {
                    lVar19 = shared_ptr<ChatLine>::operator->((shared_ptr<ChatLine>*)local_98);
                    new (local_78) eastl::string((basic_string*)(lVar19 + 200));
                } else {
                    new (local_38) eastl::allocator("EASTL basic_string");
                    new (local_78) eastl::string("", local_38);
                }
                iVar9 = *(int*)(param_1 + 136096);
                *(int*)(param_1 + 136096) = iVar9 + 1;
                pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](paVar3, (long)iVar9);
                eastl::string::operator=(pbVar23, (basic_string*)local_78);
                local_78->~basic_string();
                pCVar21 = (ChatLine*)shared_ptr<ChatLine>::operator->((shared_ptr<ChatLine>*)local_98);
                cVar5 = pCVar21->IsFriend();
                iVar9 = 1;
                if (cVar5 == '\0') {
                    pCVar21 = (ChatLine*)shared_ptr<ChatLine>::operator->((shared_ptr<ChatLine>*)local_98);
                    bVar6 = pCVar21->IsIgnore();
                    iVar9 = (uint)bVar6 * 2;
                }
                iVar24 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar24 + 1;
                piVar20 = (int*)std::array<int, 1000ul>::operator[](paVar25, (long)iVar24);
                *piVar20 = iVar9;
                pCVar21 = (ChatLine*)shared_ptr<ChatLine>::operator->((shared_ptr<ChatLine>*)local_98);
                pbVar12 = (basic_string*)pCVar21->GetTimeStamp();
                iVar9 = *(int*)(param_1 + 136096);
                *(int*)(param_1 + 136096) = iVar9 + 1;
                pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](paVar3, (long)iVar9);
                eastl::string::operator=(pbVar23, pbVar12);
                lVar19 = shared_ptr<ChatLine>::operator->((shared_ptr<ChatLine>*)local_98);
                iVar9 = *(int*)(lVar19 + 232);
            } else {
                iVar9 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar9 + 1;
                puVar22 = (undefined4*)std::array<int, 1000ul>::operator[](paVar25, (long)iVar9);
                *puVar22 = 4294967295;
                iVar9 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar9 + 1;
                puVar22 = (undefined4*)std::array<int, 1000ul>::operator[](paVar25, (long)iVar9);
                *puVar22 = 0;
                paVar3 = (array<eastl::string, 1000ul>*)(param_1 + 104096);
                iVar9 = *(int*)(param_1 + 136096);
                *(int*)(param_1 + 136096) = iVar9 + 1;
                pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](paVar3, (long)iVar9);
                eastl::string::assign(pbVar23, "");
                iVar9 = *(int*)(param_1 + 136096);
                *(int*)(param_1 + 136096) = iVar9 + 1;
                pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](paVar3, (long)iVar9);
                eastl::string::assign(pbVar23, "");
                iVar9 = *(int*)(param_1 + 136096);
                *(int*)(param_1 + 136096) = iVar9 + 1;
                pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](paVar3, (long)iVar9);
                eastl::string::assign(pbVar23, "");
                iVar9 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar9 + 1;
                puVar22 = (undefined4*)std::array<int, 1000ul>::operator[](paVar25, (long)iVar9);
                *puVar22 = 0;
                iVar9 = *(int*)(param_1 + 136096);
                *(int*)(param_1 + 136096) = iVar9 + 1;
                pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](paVar3, (long)iVar9);
                iVar9 = 0;
                eastl::string::assign(pbVar23, "");
            }
            iVar24 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar24 + 1;
        LAB_1001679be:
            piVar20 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar24);
            *piVar20 = iVar9;
            local_98->~shared_ptr();
            goto LAB_1001679d1;
        case 5031:
            paVar25 = (array<int, 1000ul>*)(param_1 + 100092);
            iVar9 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)((long)iVar9 - 1U);
            piVar20 = (int*)std::array<int, 1000ul>::operator[](paVar25, (long)iVar9 - 1U);
            pCVar21 = (ChatLine*)ChatHistory::GetLineByUID(*piVar20);
            if (pCVar21 != (ChatLine*)0) {
                iVar9 = pCVar21->field_80;
                iVar24 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar24 + 1;
                piVar20 = (int*)std::array<int, 1000ul>::operator[](paVar25, (long)iVar24);
                *piVar20 = iVar9;
                uVar11 = pCVar21->field_8;
                iVar9 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar9 + 1;
                puVar22 = (undefined4*)std::array<int, 1000ul>::operator[](paVar25, (long)iVar9);
                *puVar22 = uVar11;
                bVar4 = eastl::operator!=((basic_string*)&pCVar21->field_88, (value_type*)"");
                if (bVar4) {
                    new (local_78) eastl::string((basic_string*)&pCVar21->field_88);
                } else {
                    new (local_98) eastl::allocator("EASTL basic_string");
                    new (local_78) eastl::string("", local_98);
                }
                paVar3 = (array<eastl::string, 1000ul>*)(param_1 + 104096);
                iVar9 = *(int*)(param_1 + 136096);
                *(int*)(param_1 + 136096) = iVar9 + 1;
                pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](paVar3, (long)iVar9);
                eastl::string::operator=(pbVar23, (basic_string*)local_78);
                local_78->~basic_string();
                bVar4 = eastl::operator!=((basic_string*)&pCVar21->field_136, (value_type*)"");
                if (bVar4) {
                    new (local_78) eastl::string((basic_string*)&pCVar21->field_136);
                } else {
                    new (local_98) eastl::allocator("EASTL basic_string");
                    new (local_78) eastl::string("", local_98);
                }
                iVar9 = *(int*)(param_1 + 136096);
                *(int*)(param_1 + 136096) = iVar9 + 1;
                pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](paVar3, (long)iVar9);
                eastl::string::operator=(pbVar23, (basic_string*)local_78);
                local_78->~basic_string();
                bVar4 = eastl::operator!=((basic_string*)&pCVar21->field_168, (value_type*)"");
                if (bVar4) {
                    new (local_78) eastl::string((basic_string*)&pCVar21->field_200);
                } else {
                    new (local_98) eastl::allocator("EASTL basic_string");
                    new (local_78) eastl::string("", local_98);
                }
                iVar9 = *(int*)(param_1 + 136096);
                *(int*)(param_1 + 136096) = iVar9 + 1;
                pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](paVar3, (long)iVar9);
                eastl::string::operator=(pbVar23, (basic_string*)local_78);
                local_78->~basic_string();
                cVar5 = pCVar21->IsFriend();
                iVar9 = 1;
                if (cVar5 == '\0') {
                    bVar6 = pCVar21->IsIgnore();
                    iVar9 = (uint)bVar6 * 2;
                }
                iVar24 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar24 + 1;
                piVar20 = (int*)std::array<int, 1000ul>::operator[](paVar25, (long)iVar24);
                *piVar20 = iVar9;
                pbVar12 = (basic_string*)pCVar21->GetTimeStamp();
                iVar9 = *(int*)(param_1 + 136096);
                *(int*)(param_1 + 136096) = iVar9 + 1;
                pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](paVar3, (long)iVar9);
                eastl::string::operator=(pbVar23, pbVar12);
                iVar9 = pCVar21->field_232;
                goto LAB_100167573;
            }
            iVar9 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar9 + 1;
            puVar22 = (undefined4*)std::array<int, 1000ul>::operator[](paVar25, (long)iVar9);
            *puVar22 = 4294967295;
            iVar9 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar9 + 1;
            puVar22 = (undefined4*)std::array<int, 1000ul>::operator[](paVar25, (long)iVar9);
            *puVar22 = 0;
            paVar3 = (array<eastl::string, 1000ul>*)(param_1 + 104096);
            iVar9 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar9 + 1;
            pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](paVar3, (long)iVar9);
            eastl::string::assign(pbVar23, "");
            iVar9 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar9 + 1;
            pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](paVar3, (long)iVar9);
            eastl::string::assign(pbVar23, "");
            iVar9 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar9 + 1;
            pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](paVar3, (long)iVar9);
            eastl::string::assign(pbVar23, "");
            iVar9 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar9 + 1;
            puVar22 = (undefined4*)std::array<int, 1000ul>::operator[](paVar25, (long)iVar9);
            *puVar22 = 0;
            iVar9 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar9 + 1;
            pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](paVar3, (long)iVar9);
            eastl::string::assign(pbVar23, "");
            iVar9 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar9 + 1;
        LAB_1001671a7:
            puVar22 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar9);
            *puVar22 = 0;
            goto LAB_1001679d1;
        }
        iVar9 = *(int*)(param_1 + 104092);
        *(int*)(param_1 + 104092) = iVar9 + 1;
        puVar22 =
            (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar9);
        *puVar22 = uVar11;
    LAB_1001679d1:
        uVar26 = 1;
    switchD_100166331_caseD_138e:
        return uVar26;
    }

} // namespace jag::oldscape
