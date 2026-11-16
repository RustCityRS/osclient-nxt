// projects/osclient/ScriptRunnerImpl_5000To5099.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1001662f0
    uint8_t ScriptRunnerImpl::ExecuteCommand5000To5099(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3) {
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* pPVar1;
        uint8_t* puVar2;
        PublishingPlatformType publishingPlatformType;
        bool bVar3;
        bool cVar4;
        uint8_t bVar5;
        short sVar6;
        int iVar8;
        int iVar9;
        ChatTimestampMode CVar10;
        uint32_t uVar11;
        PublishingPlatformType* pPVar12;
        Isaac* pIVar13;
        ServerConnection* pSVar14;
        Logger* this_03;
        char* pcVar15;
        shared_ptr<dash3d::GroundDecor>* psVar16;
        ListIterator<console::Line, console::Line*, console::Line&>* pLVar17;
        long lVar18;
        int* piVar19;
        ChatLine* pCVar20;
        uint32_t* puVar21;
        eastl::string* pbVar22;
        eastl::string* pbVar23;
        unsigned long uVar24;
        ChatTimestampMode chatTimestampMode;
        uint8_t* puVar26;
        shared_ptr<dash3d::Decor> local_98;
        uint8_t local_78[64];
        eastl local_38;

        uint8_t uVar25 = 2;
        auto this_00 = Client::Instance();
        switch (scriptOp) {
        case 5000:
            uVar11 = *(uint32_t*)&this_00->field_53304;
            break;
        case 5001:
            iVar9 = field_104092;
            uVar24 = (long)iVar9 - 3;
            field_104092 = (int)uVar24;
            puVar26 = &field_100092;
            puVar21 = (uint32_t*)(*puVar26)[uVar24];
            *(uint32_t*)&this_00->field_53304 = *puVar21;
            piVar19 = (int*)(*puVar26)[(long)iVar9 - 2];
            iVar8 = rs2lib::FriendPrivacyUtils::GetBySaveValue(*piVar19);
            iVar9 = 1;
            if (iVar8 != -1) {
                iVar9 = iVar8;
            }
            *(int*)((long)&this_00->field_53304 + 4) = iVar9;
            puVar21 = (uint32_t*)(*puVar26)[(long)field_104092 + 2];
            this_00->field_53312 = *puVar21;
            pSVar14 = (ServerConnection*)this_00->field_19120.operator->();
            pIVar13 = pSVar14->GetOutgoingEncryption();
            *local_78 = shared::ClientMessage::MakeClientMessage(80, *pIVar13);
            pPVar1 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_78 + 8);
            pPVar1->p1<shared::LoginProt::ID>(*(PublishingPlatformType*)&this_00->field_53304);
            pPVar1->p1<shared::LoginProt::ID>(*(PublishingPlatformType*)((long)&this_00->field_53304 + 4));
            pPVar1->p1<shared::LoginProt::ID>(this_00->field_53312);
            pSVar14 = (ServerConnection*)this_00->field_19120.operator->();
            pSVar14->SendClientMessage(*local_78);
            goto LAB_100166850;
        case 5002:
            uVar24 = (long)field_136096 - 1;
            field_136096 = (int)uVar24;
            pbVar23 = &field_104096[uVar24];
            iVar9 = field_104092;
            uVar24 = (long)iVar9 - 2;
            field_104092 = (int)uVar24;
            piVar19 = &field_100092[uVar24];
            iVar8 = *piVar19;
            pPVar12 = &field_100092[(long)iVar9 - 1];
            publishingPlatformType = *pPVar12;
            pSVar14 = (ServerConnection*)this_00->field_19120.operator->();
            pIVar13 = pSVar14->GetOutgoingEncryption();
            *local_78 = shared::ClientMessage::MakeClientMessage(84, *pIVar13);
            iVar9 = PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252<eastl::string>(*pbVar23, false);
            pPVar1 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_78 + 8);
            pPVar1->p1<shared::LoginProt::ID>(iVar9 + 2);
            pPVar1->pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(*pbVar23, false);
            pPVar1->p1<shared::LoginProt::ID>(iVar8 - 1);
            pPVar1->p1<shared::LoginProt::ID>(publishingPlatformType);
            pSVar14 = (ServerConnection*)this_00->field_19120.operator->();
            pSVar14->SendClientMessage(*local_78);
            goto LAB_100166850;
        case 5003:
            iVar9 = field_104092;
            uVar24 = (long)iVar9 - 2;
            field_104092 = (int)uVar24;
            puVar26 = &field_100092;
            piVar19 = (int*)(*puVar26)[uVar24];
            iVar8 = *piVar19;
            piVar19 = (int*)(*puVar26)[(long)iVar9 - 1];
            psVar16 = ChatHistory::GetLine(iVar8, *piVar19);
            local_98 = shared_ptr(psVar16);
            bVar3 = local_98 != nullptr;
            if (bVar3) {
                pLVar17 = (ListIterator<console::Line, console::Line*, console::Line&>*)local_98.operator->();
                puVar21 = (uint32_t*)**pLVar17;
                uVar11 = *puVar21;
                iVar9 = field_104092;
                field_104092 = iVar9 + 1;
                puVar21 = (uint32_t*)(*puVar26)[(long)iVar9];
                *puVar21 = uVar11;
                lVar18 = local_98.operator->();
                uVar11 = *(uint32_t*)(lVar18 + 8);
                iVar9 = field_104092;
                field_104092 = iVar9 + 1;
                puVar21 = (uint32_t*)(*puVar26)[(long)iVar9];
                *puVar21 = uVar11;
                lVar18 = local_98.operator->();
                bVar3 = (*((lVar18 + 88))) != (*((value_type*)""));
                if (bVar3) {
                    lVar18 = local_98.operator->();
                    new (local_78) eastl::string(*((lVar18 + 88)));
                } else {
                    new (local_78) eastl::string("");
                }
                puVar26 = &field_104096;
                iVar9 = field_136096;
                field_136096 = iVar9 + 1;
                pbVar22 = (eastl::string*)(*puVar26)[(long)iVar9];
                *pbVar22 = local_78;
                lVar18 = local_98.operator->();
                bVar3 = (*((lVar18 + 136))) != (*((value_type*)""));
                if (bVar3) {
                    lVar18 = local_98.operator->();
                    new (local_78) eastl::string(*((lVar18 + 136)));
                } else {
                    new (local_78) eastl::string("");
                }
                iVar9 = field_136096;
                field_136096 = iVar9 + 1;
                pbVar22 = (eastl::string*)(*puVar26)[(long)iVar9];
                *pbVar22 = local_78;
                lVar18 = local_98.operator->();
                bVar3 = (*((lVar18 + 168))) != (*((value_type*)""));
                if (bVar3) {
                    lVar18 = local_98.operator->();
                    new (local_78) eastl::string(*((lVar18 + 168)));
                } else {
                    new (local_78) eastl::string("");
                }
                iVar9 = field_136096;
                field_136096 = iVar9 + 1;
                pbVar22 = (eastl::string*)(*puVar26)[(long)iVar9];
                *pbVar22 = local_78;
                pCVar20 = (ChatLine*)local_98.operator->();
                cVar4 = pCVar20->IsFriend();
                iVar9 = 1;
                if (!cVar4) {
                    pCVar20 = (ChatLine*)local_98.operator->();
                    bVar5 = pCVar20->IsIgnore();
                    iVar9 = (unsigned int)bVar5 * 2;
                }
            } else {
                iVar9 = field_104092;
                field_104092 = iVar9 + 1;
                puVar21 = (uint32_t*)(*puVar26)[(long)iVar9];
                *puVar21 = 4294967295;
                iVar9 = field_104092;
                field_104092 = iVar9 + 1;
                puVar21 = (uint32_t*)(*puVar26)[(long)iVar9];
                *puVar21 = 0;
                puVar26 = &field_104096;
                iVar9 = field_136096;
                field_136096 = iVar9 + 1;
                pbVar22 = (eastl::string*)(*puVar26)[(long)iVar9];
                eastl::string::assign(pbVar22, "");
                iVar9 = field_136096;
                field_136096 = iVar9 + 1;
                pbVar22 = (eastl::string*)(*puVar26)[(long)iVar9];
                eastl::string::assign(pbVar22, "");
                iVar9 = field_136096;
                field_136096 = iVar9 + 1;
                pbVar22 = (eastl::string*)(*puVar26)[(long)iVar9];
                iVar9 = 0;
                eastl::string::assign(pbVar22, "");
            }
            iVar8 = field_104092;
            field_104092 = iVar8 + 1;
            goto LAB_1001679be;
        case 5004:
            puVar26 = &field_100092;
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            piVar19 = (int*)(*puVar26)[uVar24];
            pCVar20 = ChatHistory::GetLineByUID(*piVar19);
            if (pCVar20 != nullptr) {
                iVar9 = pCVar20->field_80;
                iVar8 = field_104092;
                field_104092 = iVar8 + 1;
                piVar19 = (int*)(*puVar26)[(long)iVar8];
                *piVar19 = iVar9;
                uVar11 = pCVar20->field_8;
                iVar9 = field_104092;
                field_104092 = iVar9 + 1;
                puVar21 = (uint32_t*)(*puVar26)[(long)iVar9];
                *puVar21 = uVar11;
                bVar3 = pCVar20->field_88 != (*((value_type*)""));
                if (bVar3) {
                    new (local_78) eastl::string(pCVar20->field_88);
                } else {
                    new (local_78) eastl::string("");
                }
                puVar26 = &field_104096;
                iVar9 = field_136096;
                field_136096 = iVar9 + 1;
                pbVar22 = (eastl::string*)(*puVar26)[(long)iVar9];
                *pbVar22 = local_78;
                bVar3 = pCVar20->field_136 != (*((value_type*)""));
                if (bVar3) {
                    new (local_78) eastl::string(pCVar20->field_136);
                } else {
                    new (local_78) eastl::string("");
                }
                iVar9 = field_136096;
                field_136096 = iVar9 + 1;
                pbVar22 = (eastl::string*)(*puVar26)[(long)iVar9];
                *pbVar22 = local_78;
                bVar3 = pCVar20->field_168 != (*((value_type*)""));
                if (bVar3) {
                    new (local_78) eastl::string(pCVar20->field_168);
                } else {
                    new (local_78) eastl::string("");
                }
                iVar9 = field_136096;
                field_136096 = iVar9 + 1;
                pbVar22 = (eastl::string*)(*puVar26)[(long)iVar9];
                *pbVar22 = local_78;
                cVar4 = pCVar20->IsFriend();
                iVar9 = 1;
                if (!cVar4) {
                    bVar5 = pCVar20->IsIgnore();
                    iVar9 = (unsigned int)bVar5 * 2;
                }
            LAB_100167573:
                iVar8 = field_104092;
                field_104092 = iVar8 + 1;
                piVar19 = &field_100092[(long)iVar8];
                *piVar19 = iVar9;
                return true;
            }
            iVar9 = field_104092;
            field_104092 = iVar9 + 1;
            puVar21 = (uint32_t*)(*puVar26)[(long)iVar9];
            *puVar21 = 4294967295;
            iVar9 = field_104092;
            field_104092 = iVar9 + 1;
            puVar21 = (uint32_t*)(*puVar26)[(long)iVar9];
            *puVar21 = 0;
            puVar26 = &field_104096;
            iVar9 = field_136096;
            field_136096 = iVar9 + 1;
            pbVar22 = (eastl::string*)(*puVar26)[(long)iVar9];
            eastl::string::assign(pbVar22, "");
            iVar9 = field_136096;
            field_136096 = iVar9 + 1;
            pbVar22 = (eastl::string*)(*puVar26)[(long)iVar9];
            eastl::string::assign(pbVar22, "");
            iVar9 = field_136096;
            field_136096 = iVar9 + 1;
            pbVar22 = (eastl::string*)(*puVar26)[(long)iVar9];
            eastl::string::assign(pbVar22, "");
            iVar9 = field_104092;
            field_104092 = iVar9 + 1;
            goto LAB_1001671a7;
        case 5005:
            uVar11 = *(uint32_t*)((long)&this_00->field_53304 + 4);
            break;
        default:
            goto switchD_100166331_caseD_138e;
        case 5008:
            uVar24 = (long)field_136096 - 1;
            field_136096 = (int)uVar24;
            pbVar23 = &field_104096[uVar24];
            local_98 = eastl::string(*pbVar23);
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            piVar19 = &field_100092[uVar24];
            *local_78 = ChatHelper::BuildChatClientMessage(*piVar19, local_98, this_00->field_8432, -1);
            pSVar14 = (ServerConnection*)this_00->field_19120.operator->();
            pSVar14->SendClientMessage(*local_78);
            goto LAB_1001668f5;
        case 5009:
            iVar9 = field_136096;
            uVar24 = (long)iVar9 - 2;
            field_136096 = (int)uVar24;
            field_104096[(long)iVar9 - 1];
            pSVar14 = (ServerConnection*)this_00->field_19120.operator->();
            pIVar13 = pSVar14->GetOutgoingEncryption();
            *local_78 = shared::ClientMessage::MakeClientMessage(85, *pIVar13);
            pPVar1 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_78 + 8);
            pPVar1->p2<int>(0);
            pbVar23 = &field_104096[uVar24];
            sVar6 = pPVar1->size();
            pPVar1->pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(*pbVar23, false);
            pcVar15 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::destruct<highlight::NpcUID*>(&local_38);
            local_98 = eastl::basic_string<char, BucketAllocatorEASTL>(pcVar15);
            ((WordPack*)this_00->field_54176.operator->())->PackUTF8AsCP1252(*pPVar1, local_98);
            pPVar1->pSize2(pPVar1->size() - sVar6);
            pSVar14 = (ServerConnection*)this_00->field_19120.operator->();
            pSVar14->SendClientMessage(*local_78);
        LAB_100166850:
            goto LAB_1001679d1;
        case 5010:
            uVar24 = (long)field_136096 - 1;
            field_136096 = (int)uVar24;
            pbVar23 = &field_104096[uVar24];
            local_98 = eastl::string(*pbVar23);
            iVar9 = field_104092;
            uVar24 = (long)iVar9 - 2;
            field_104092 = (int)uVar24;
            piVar19 = &field_100092[uVar24];
            iVar8 = *piVar19;
            piVar19 = &field_100092[(long)iVar9 - 1];
            *local_78 = ChatHelper::BuildChatClientMessage(iVar8, local_98, this_00->field_8432, *piVar19);
            pSVar14 = (ServerConnection*)this_00->field_19120.operator->();
            pSVar14->SendClientMessage(*local_78);
        LAB_1001668f5:
            goto LAB_1001679d1;
        case 5015:
            new (local_78) eastl::string("");
            puVar26 = &this_00->field_52016;
            bVar3 = *puVar26 != nullptr;
            if (bVar3) {
                lVar18 = (*puVar26).operator->();
                bVar3 = (*((lVar18 + 992))) != nullptr;
                if (!bVar3)
                    goto LAB_100166db1;
                lVar18 = (*puVar26).operator->();
                pbVar23 = ((DisplayName*)(*((lVar18 + 992))).operator->())->GetDisplayName();
                *local_78 = pbVar23;
            } else {
            LAB_100166db1:
                local_78->assign("");
            }
            iVar9 = field_136096;
            field_136096 = iVar9 + 1;
            pbVar22 = &field_104096[(long)iVar9];
            *pbVar22 = local_78;
            goto LAB_100166dea;
        case 5016:
            uVar11 = this_00->field_53312;
            break;
        case 5017:
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            piVar19 = &field_100092[uVar24];
            uVar11 = ChatHistory::GetHistoryLength(*piVar19);
            goto LAB_100166a28;
        case 5018:
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            piVar19 = &field_100092[uVar24];
            uVar11 = ChatHistory::GetNextActiveUID(*piVar19);
            goto LAB_100166a28;
        case 5019:
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            piVar19 = &field_100092[uVar24];
            uVar11 = ChatHistory::GetPreviousActiveUID(*piVar19);
        LAB_100166a28:
            iVar9 = field_104092;
            field_104092 = iVar9 + 1;
            puVar21 = &field_100092[(long)iVar9];
            *puVar21 = uVar11;
            goto LAB_1001679d1;
        case 5020:
            uVar24 = (long)field_136096 - 1;
            field_136096 = (int)uVar24;
            pbVar23 = &field_104096[uVar24];
            new (local_78) eastl::string(*pbVar23);
            iVar9 = local_78->comparei("errortest");
            if (iVar9 == 0) {
                field_141000->Raise("errorTest");
            } else {
                this_00->DoCheat(*local_78);
            }
            return iVar9 != 0;
        case 5021:
            uVar24 = (long)field_136096 - 1;
            field_136096 = (int)uVar24;
            pbVar23 = &field_104096[uVar24];
            new (local_78) eastl::string(*pbVar23);
            local_78->make_lower();
            local_78->trim();
            this_00->field_53320 = local_78;
            goto LAB_100166dea;
        case 5022:
            iVar9 = field_136096;
            field_136096 = iVar9 + 1;
            pbVar22 = &field_104096[(long)iVar9];
            *pbVar22 = &this_00->field_53320;
            goto LAB_1001679d1;
        case 5023:
            uVar24 = (long)field_136096 - 1;
            field_136096 = (int)uVar24;
            pbVar23 = &field_104096[uVar24];
            new (local_78) eastl::string(*pbVar23);
            this_03 = logger::default_logger();
            pcVar15 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            this_03->Log(false, 5,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                         "ScriptRunnerImpl_5000To5099.cpp",
                         302, pcVar15);
        LAB_100166dea:
            goto LAB_1001679d1;
        case 5024:
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            piVar19 = &field_100092[uVar24];
            iVar9 = *piVar19;
            CVar10 = ChatHistory::GetTimestampMode();
            chatTimestampMode = 2 - (iVar9 == 1);
            if (iVar9 == 0) {
                chatTimestampMode = 0;
            }
            if (CVar10 == chatTimestampMode) {
                return true;
            }
            ChatHistory::SetTimestampMode(chatTimestampMode);
            return true;
        case 5025:
            uVar11 = ChatHistory::GetTimestampMode();
            break;
        case 5030:
            iVar9 = field_104092;
            uVar24 = (long)iVar9 - 2;
            field_104092 = (int)uVar24;
            puVar26 = &field_100092;
            piVar19 = (int*)(*puVar26)[uVar24];
            iVar8 = *piVar19;
            piVar19 = (int*)(*puVar26)[(long)iVar9 - 1];
            psVar16 = ChatHistory::GetLine(iVar8, *piVar19);
            local_98 = shared_ptr(psVar16);
            bVar3 = local_98 != nullptr;
            if (bVar3) {
                pLVar17 = (ListIterator<console::Line, console::Line*, console::Line&>*)local_98.operator->();
                puVar21 = (uint32_t*)**pLVar17;
                uVar11 = *puVar21;
                iVar9 = field_104092;
                field_104092 = iVar9 + 1;
                puVar21 = (uint32_t*)(*puVar26)[(long)iVar9];
                *puVar21 = uVar11;
                lVar18 = local_98.operator->();
                uVar11 = *(uint32_t*)(lVar18 + 8);
                iVar9 = field_104092;
                field_104092 = iVar9 + 1;
                puVar21 = (uint32_t*)(*puVar26)[(long)iVar9];
                *puVar21 = uVar11;
                lVar18 = local_98.operator->();
                bVar3 = (*((lVar18 + 88))) != (*((value_type*)""));
                if (bVar3) {
                    lVar18 = local_98.operator->();
                    new (local_78) eastl::string(*((lVar18 + 88)));
                } else {
                    new (local_78) eastl::string("");
                }
                puVar2 = &field_104096;
                iVar9 = field_136096;
                field_136096 = iVar9 + 1;
                pbVar22 = (eastl::string*)(*puVar2)[(long)iVar9];
                *pbVar22 = local_78;
                lVar18 = local_98.operator->();
                bVar3 = (*((lVar18 + 136))) != (*((value_type*)""));
                if (bVar3) {
                    lVar18 = local_98.operator->();
                    new (local_78) eastl::string(*((lVar18 + 136)));
                } else {
                    new (local_78) eastl::string("");
                }
                iVar9 = field_136096;
                field_136096 = iVar9 + 1;
                pbVar22 = (eastl::string*)(*puVar2)[(long)iVar9];
                *pbVar22 = local_78;
                lVar18 = local_98.operator->();
                bVar3 = (*((lVar18 + 168))) != (*((value_type*)""));
                if (bVar3) {
                    lVar18 = local_98.operator->();
                    new (local_78) eastl::string(*((lVar18 + 200)));
                } else {
                    new (local_78) eastl::string("");
                }
                iVar9 = field_136096;
                field_136096 = iVar9 + 1;
                pbVar22 = (eastl::string*)(*puVar2)[(long)iVar9];
                *pbVar22 = local_78;
                pCVar20 = (ChatLine*)local_98.operator->();
                cVar4 = pCVar20->IsFriend();
                iVar9 = 1;
                if (!cVar4) {
                    pCVar20 = (ChatLine*)local_98.operator->();
                    bVar5 = pCVar20->IsIgnore();
                    iVar9 = (unsigned int)bVar5 * 2;
                }
                iVar8 = field_104092;
                field_104092 = iVar8 + 1;
                piVar19 = (int*)(*puVar26)[(long)iVar8];
                *piVar19 = iVar9;
                pCVar20 = (ChatLine*)local_98.operator->();
                pbVar23 = pCVar20->GetTimeStamp();
                iVar9 = field_136096;
                field_136096 = iVar9 + 1;
                pbVar22 = (eastl::string*)(*puVar2)[(long)iVar9];
                *pbVar22 = pbVar23;
                lVar18 = local_98.operator->();
                iVar9 = *(int*)(lVar18 + 232);
            } else {
                iVar9 = field_104092;
                field_104092 = iVar9 + 1;
                puVar21 = (uint32_t*)(*puVar26)[(long)iVar9];
                *puVar21 = 4294967295;
                iVar9 = field_104092;
                field_104092 = iVar9 + 1;
                puVar21 = (uint32_t*)(*puVar26)[(long)iVar9];
                *puVar21 = 0;
                puVar2 = &field_104096;
                iVar9 = field_136096;
                field_136096 = iVar9 + 1;
                pbVar22 = (eastl::string*)(*puVar2)[(long)iVar9];
                eastl::string::assign(pbVar22, "");
                iVar9 = field_136096;
                field_136096 = iVar9 + 1;
                pbVar22 = (eastl::string*)(*puVar2)[(long)iVar9];
                eastl::string::assign(pbVar22, "");
                iVar9 = field_136096;
                field_136096 = iVar9 + 1;
                pbVar22 = (eastl::string*)(*puVar2)[(long)iVar9];
                eastl::string::assign(pbVar22, "");
                iVar9 = field_104092;
                field_104092 = iVar9 + 1;
                puVar21 = (uint32_t*)(*puVar26)[(long)iVar9];
                *puVar21 = 0;
                iVar9 = field_136096;
                field_136096 = iVar9 + 1;
                pbVar22 = (eastl::string*)(*puVar2)[(long)iVar9];
                iVar9 = 0;
                eastl::string::assign(pbVar22, "");
            }
            iVar8 = field_104092;
            field_104092 = iVar8 + 1;
        LAB_1001679be:
            piVar19 = &field_100092[(long)iVar8];
            *piVar19 = iVar9;
            goto LAB_1001679d1;
        case 5031:
            puVar26 = &field_100092;
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            piVar19 = (int*)(*puVar26)[uVar24];
            pCVar20 = ChatHistory::GetLineByUID(*piVar19);
            if (pCVar20 != nullptr) {
                iVar9 = pCVar20->field_80;
                iVar8 = field_104092;
                field_104092 = iVar8 + 1;
                piVar19 = (int*)(*puVar26)[(long)iVar8];
                *piVar19 = iVar9;
                uVar11 = pCVar20->field_8;
                iVar9 = field_104092;
                field_104092 = iVar9 + 1;
                puVar21 = (uint32_t*)(*puVar26)[(long)iVar9];
                *puVar21 = uVar11;
                bVar3 = pCVar20->field_88 != (*((value_type*)""));
                if (bVar3) {
                    new (local_78) eastl::string(pCVar20->field_88);
                } else {
                    new (local_78) eastl::string("");
                }
                puVar2 = &field_104096;
                iVar9 = field_136096;
                field_136096 = iVar9 + 1;
                pbVar22 = (eastl::string*)(*puVar2)[(long)iVar9];
                *pbVar22 = local_78;
                bVar3 = pCVar20->field_136 != (*((value_type*)""));
                if (bVar3) {
                    new (local_78) eastl::string(pCVar20->field_136);
                } else {
                    new (local_78) eastl::string("");
                }
                iVar9 = field_136096;
                field_136096 = iVar9 + 1;
                pbVar22 = (eastl::string*)(*puVar2)[(long)iVar9];
                *pbVar22 = local_78;
                bVar3 = pCVar20->field_168 != (*((value_type*)""));
                if (bVar3) {
                    new (local_78) eastl::string(pCVar20->field_200);
                } else {
                    new (local_78) eastl::string("");
                }
                iVar9 = field_136096;
                field_136096 = iVar9 + 1;
                pbVar22 = (eastl::string*)(*puVar2)[(long)iVar9];
                *pbVar22 = local_78;
                cVar4 = pCVar20->IsFriend();
                iVar9 = 1;
                if (!cVar4) {
                    bVar5 = pCVar20->IsIgnore();
                    iVar9 = (unsigned int)bVar5 * 2;
                }
                iVar8 = field_104092;
                field_104092 = iVar8 + 1;
                piVar19 = (int*)(*puVar26)[(long)iVar8];
                *piVar19 = iVar9;
                pbVar23 = pCVar20->GetTimeStamp();
                iVar9 = field_136096;
                field_136096 = iVar9 + 1;
                pbVar22 = (eastl::string*)(*puVar2)[(long)iVar9];
                *pbVar22 = pbVar23;
                iVar9 = pCVar20->field_232;
                goto LAB_100167573;
            }
            iVar9 = field_104092;
            field_104092 = iVar9 + 1;
            puVar21 = (uint32_t*)(*puVar26)[(long)iVar9];
            *puVar21 = 4294967295;
            iVar9 = field_104092;
            field_104092 = iVar9 + 1;
            puVar21 = (uint32_t*)(*puVar26)[(long)iVar9];
            *puVar21 = 0;
            puVar2 = &field_104096;
            iVar9 = field_136096;
            field_136096 = iVar9 + 1;
            pbVar22 = (eastl::string*)(*puVar2)[(long)iVar9];
            eastl::string::assign(pbVar22, "");
            iVar9 = field_136096;
            field_136096 = iVar9 + 1;
            pbVar22 = (eastl::string*)(*puVar2)[(long)iVar9];
            eastl::string::assign(pbVar22, "");
            iVar9 = field_136096;
            field_136096 = iVar9 + 1;
            pbVar22 = (eastl::string*)(*puVar2)[(long)iVar9];
            eastl::string::assign(pbVar22, "");
            iVar9 = field_104092;
            field_104092 = iVar9 + 1;
            puVar21 = (uint32_t*)(*puVar26)[(long)iVar9];
            *puVar21 = 0;
            iVar9 = field_136096;
            field_136096 = iVar9 + 1;
            pbVar22 = (eastl::string*)(*puVar2)[(long)iVar9];
            eastl::string::assign(pbVar22, "");
            iVar9 = field_104092;
            field_104092 = iVar9 + 1;
        LAB_1001671a7:
            puVar21 = &field_100092[(long)iVar9];
            *puVar21 = 0;
            goto LAB_1001679d1;
        }
        iVar9 = field_104092;
        field_104092 = iVar9 + 1;
        puVar21 = &field_100092[(long)iVar9];
        *puVar21 = uVar11;
    LAB_1001679d1:
        uVar25 = 1;
    switchD_100166331_caseD_138e:
        return uVar25;
    }

} // namespace jag::oldscape
