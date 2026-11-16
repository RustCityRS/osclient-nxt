// projects/osclient/ScriptRunnerImpl_3100To3199.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10015b700
    uint64_t ScriptRunnerImpl::ExecuteCommand3100To3199(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        uint8_t* puVar1;
        PublishingPlatformType publishingPlatformType;
        uint32_t uVar2;
        Minimenu* pMVar3;
        bool bVar4;
        uint8_t bVar5;
        bool cVar6;
        int iVar7;
        int iVar8;
        uint32_t uVar9;
        unsigned int uVar10;
        ClientPlayer* clientPlayer;
        shared_ptr<configdecoder::ObjType>* objType;
        GameOptions* pGVar12;
        PublishingPlatformType* pPVar13;
        ServerConnection* pSVar14;
        Isaac* pIVar15;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* pPVar16;
        shared_ptr<ApplicationContext>* psVar17;
        uint64_t uVar18;
        uint32_t* puVar19;
        DeviceOptions* pDVar20;
        long* plVar21;
        world* pwVar22;
        DiscordMain* pDVar23;
        unique_ptr<DiscordRichPresence, std::default_delete<DiscordRichPresence> _>* puVar24;
        int* piVar25;
        AnimationParameters* this_01;
        AuthLibWrapper* this_02;
        unsigned int* puVar26;
        eastl::string* pbVar27;
        ResultType* pRVar28;
        eastl::string* pbVar29;
        eastl::string* str2;
        Logger* this_04;
        unsigned long uVar30;
        char* str2_00;
        long lVar32;
        SuperShuffledPacketFactory local_1e0;
        unsigned int local_1d0[2];
        unsigned int local_1c8[2];
        unsigned int local_1c0[2];
        unsigned int local_1b8[2];
        unsigned int local_1b0[9];
        ResultType local_18c;
        eastl::string local_188;
        ResultType local_164;
        uint8_t local_160[8];

        uint64_t uVar31 = 2;
        auto pCVar11 = Client::Instance();
        switch (scriptOp) {
        case 3100:
            uVar30 = (long)field_136096 - 1;
            field_136096 = (int)uVar30;
            pbVar29 = &field_104096[uVar30];
            new (local_160) eastl::string(*pbVar29);
            new (local_1b0) eastl::allocator("EASTL basic_string");
            local_188 = eastl::string("", local_1b0);
            pCVar11->AddChat(0, local_188, *local_160);
            goto LAB_10015d5cc;
        case 3101:
            field_104092 = field_104092 - 2;
            clientPlayer = (ClientPlayer*)*pCVar11->field_52016;
            iVar7 = field_104092;
            piVar25 = &field_100092[(long)iVar7];
            iVar8 = *piVar25;
            piVar25 = &field_100092[(long)iVar7 + 1];
            pCVar11->TriggerPlayerAnim(*clientPlayer, iVar8, *piVar25);
            break;
        case 3102:
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            piVar25 = &field_100092[uVar30];
            iVar7 = *piVar25;
            uVar30 = (long)field_136096 - 1;
            field_136096 = (int)uVar30;
            pbVar29 = &field_104096[uVar30];
            new (local_160) eastl::string(*pbVar29);
            new (local_1b0) eastl::allocator("EASTL basic_string");
            local_188 = eastl::string("", local_1b0);
            pCVar11->AddChat(iVar7, local_188, *local_160);
            goto LAB_10015d5cc;
        case 3103:
            uVar31 = 1;
            if (field_140993 == '\0') {
                field_140992 = 1;
            }
            goto switchD_10015b755_caseD_c2a;
        case 3104:
            uVar30 = (long)field_136096 - 1;
            field_136096 = (int)uVar30;
            pbVar29 = &field_104096[uVar30];
            local_188 = eastl::string(*pbVar29);
            local_1b0[0] = 0;
            core::stringtools::general::StringTools::CheckedParseInt(*local_1b0, local_188, 10, true);
            pSVar14 = (ServerConnection*)pCVar11->field_19120.operator->();
            pIVar15 = pSVar14->GetOutgoingEncryption();
            *local_160 = shared::ClientMessage::MakeClientMessage(94, *pIVar15);
            ((local_160 + 8))->p4<int>((unsigned long)local_1b0[0]);
            pSVar14 = (ServerConnection*)pCVar11->field_19120.operator->();
            pSVar14->SendClientMessage(*local_160);
            goto LAB_10015bacf;
        case 3105:
            uVar30 = (long)field_136096 - 1;
            field_136096 = (int)uVar30;
            pbVar29 = &field_104096[uVar30];
            local_188 = eastl::string(*pbVar29);
            pSVar14 = (ServerConnection*)pCVar11->field_19120.operator->();
            pIVar15 = pSVar14->GetOutgoingEncryption();
            *local_160 = shared::ClientMessage::MakeClientMessage(2, *pIVar15);
            iVar7 = local_188.size();
            ((local_160 + 8))->p1<shared::LoginProt::ID>(iVar7 + 1);
            ((local_160 + 8))->pStringNoConversion<eastl::fixed_string<char, 32>>(local_188, false);
            pSVar14 = (ServerConnection*)pCVar11->field_19120.operator->();
            pSVar14->SendClientMessage(*local_160);
            goto LAB_10015bacf;
        case 3106:
            uVar30 = (long)field_136096 - 1;
            field_136096 = (int)uVar30;
            pbVar29 = &field_104096[uVar30];
            local_188 = eastl::string(*pbVar29);
            pSVar14 = (ServerConnection*)pCVar11->field_19120.operator->();
            pIVar15 = pSVar14->GetOutgoingEncryption();
            *local_160 = shared::ClientMessage::MakeClientMessage(49, *pIVar15);
            iVar7 = local_188.size();
            ((local_160 + 8))->p1<shared::LoginProt::ID>(iVar7 + 1);
            ((local_160 + 8))->pStringNoConversion<eastl::fixed_string<char, 32>>(local_188, false);
            pSVar14 = (ServerConnection*)pCVar11->field_19120.operator->();
            pSVar14->SendClientMessage(*local_160);
        LAB_10015bacf:
        LAB_10015bf96:
            pbVar27 = &local_188;
            goto LAB_10015d5df;
        case 3107:
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            piVar25 = &field_100092[uVar30];
            iVar7 = *piVar25;
            uVar30 = (long)field_136096 - 1;
            field_136096 = (int)uVar30;
            pbVar29 = &field_104096[uVar30];
            new (local_160) eastl::string(*pbVar29);
            pCVar11->OpPlayer(iVar7, *local_160);
            goto LAB_10015d5d8;
        case 3108:
            lVar32 = (long)field_104092;
            field_104092 = (int)(lVar32 - 3U);
            puVar1 = &field_100092;
            pRVar28 = (ResultType*)(*puVar1)[lVar32 - 3U];
            local_164 = *pRVar28;
            pRVar28 = (ResultType*)(*puVar1)[lVar32 - 2];
            local_18c = *pRVar28;
            piVar25 = (int*)(*puVar1)[lVar32 - 1];
            objType = (shared_ptr<configdecoder::ObjType>*)rs2lib::IfType::Get(*piVar25);
            bVar4 = *objType == nullptr;
            if (bVar4) {
            LAB_10015bc57:
                uVar31 = 0;
                field_141000->Raise(1);
                goto switchD_10015b755_caseD_c2a;
            }
            local_1d0->XPlotBlender<int>(local_164);
            local_1c8->XPlotBlender<int>(local_18c);
            pCVar11->DragTryPickup(*objType, (CoordType<UICoordSpecializer>*)(unsigned long)local_1d0[0],
                                   (CoordType<UICoordSpecializer>*)(unsigned long)local_1c8[0]);
            break;
        case 3109:
            iVar7 = field_104092;
            uVar30 = (long)iVar7 - 2;
            field_104092 = (int)uVar30;
            pRVar28 = &field_100092[uVar30];
            local_164 = *pRVar28;
            pRVar28 = &field_100092[(long)iVar7 - 1];
            local_18c = *pRVar28;
            bVar4 =
                (*((shared_ptr<configdecoder::ObjType>*)(field_140856 + (unsigned long)arg3 * 16 - 352))) == nullptr;
            if (bVar4)
                goto LAB_10015bc57;
            local_1c0->XPlotBlender<int>(local_164);
            local_1b8->XPlotBlender<int>(local_18c);
            pCVar11->DragTryPickup(*((shared_ptr<rs2lib::IfType>*)(field_140856 + (unsigned long)arg3 * 16 - 352)),
                                   (CoordType<UICoordSpecializer>*)(unsigned long)local_1c0[0],
                                   (CoordType<UICoordSpecializer>*)(unsigned long)local_1b8[0]);
            break;
        case 3110:
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            piVar25 = &field_100092[uVar30];
            pCVar11->field_19105 = *piVar25 == 1;
            break;
        case 3111:
            pGVar12 = (GameOptions*)pCVar11->field_8384.operator->();
            bVar5 = pGVar12->GetRemoveRoof();
            uVar10 = (unsigned int)bVar5;
            goto LAB_10015ce8c;
        case 3112:
            pGVar12 = (GameOptions*)pCVar11->field_8384.operator->();
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            piVar25 = &field_100092[uVar30];
            pGVar12->SetRemoveRoof(*piVar25 == 1);
            break;
        case 3113:
            uVar30 = (long)field_136096 - 1;
            field_136096 = (int)uVar30;
            pbVar29 = &field_104096[uVar30];
            new (local_160) eastl::string(*pbVar29);
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            piVar25 = &field_100092[uVar30];
            iVar7 = *piVar25;
            pCVar11 = Client::Instance();
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            (**(void (**)(...))(*plVar21 + 192))(plVar21, local_160, iVar7 == 1);
            goto LAB_10015d5d8;
        default:
            goto switchD_10015b755_caseD_c2a;
        case 3115:
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            puVar26 = &field_100092[uVar30];
            uVar10 = *puVar26;
            pSVar14 = (ServerConnection*)pCVar11->field_19120.operator->();
            pIVar15 = pSVar14->GetOutgoingEncryption();
            *local_160 = shared::ClientMessage::MakeClientMessage(91, *pIVar15);
            ((local_160 + 8))->p2<int>(uVar10);
            pSVar14 = (ServerConnection*)pCVar11->field_19120.operator->();
            pSVar14->SendClientMessage(*local_160);
            break;
        case 3116:
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            pPVar13 = &field_100092[uVar30];
            publishingPlatformType = *pPVar13;
            uVar30 = (long)field_136096 - 2;
            field_136096 = (int)uVar30;
            pbVar29 = &field_104096[uVar30];
            local_188 = eastl::string(*pbVar29);
            pbVar29 = &field_104096[(long)field_136096 + 1];
            new (local_1b0) eastl::string(*pbVar29);
            uVar30 = local_188.size();
            if ((uVar30 < 501) && (uVar30 = local_1b0->size(), uVar30 < 501)) {
                pSVar14 = (ServerConnection*)pCVar11->field_19120.operator->();
                pIVar15 = pSVar14->GetOutgoingEncryption();
                *local_160 = shared::ClientMessage::MakeClientMessage(22, *pIVar15);
                iVar7 = PacketT<Array<unsigned char>>::predictLengthPStringNoConversion<eastl::stringconst>(local_188,
                                                                                                            false);
                iVar8 = PacketT<Array<unsigned char>>::predictLengthPStringNoConversion<eastl::stringconst>(*local_1b0,
                                                                                                            false);
                ((local_160 + 8))->p2<int>(iVar7 + iVar8 + 1);
                local_1e0 = SuperShuffledPacketFactory(*((local_160 + 8)));
                pPVar16 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)ShuffledPacketFactory::p2_alt2();
                pPVar16->pStringNoConversion<eastl::fixed_string<char, 32>>(*local_1b0, false);
                pPVar16 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_1e0.HeapBeginPtr();
                pPVar16->p1<shared::LoginProt::ID>(publishingPlatformType);
                pPVar16 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)ShuffledPacketFactory::p2_alt2();
                pPVar16->pStringNoConversion<eastl::fixed_string<char, 32>>(local_188, false);
                pSVar14 = (ServerConnection*)pCVar11->field_19120.operator->();
                pSVar14->SendClientMessage(*local_160);
            }
            goto LAB_10015bf96;
        case 3117:
            pMVar3 = pCVar11->field_52344;
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            piVar25 = &field_100092[uVar30];
            pMVar3->SetShiftClickEnabled(*piVar25 == 1);
            break;
        case 3118:
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            piVar25 = &field_100092[uVar30];
            pCVar11->field_52344->field_2 = *piVar25 == 1;
            break;
        case 3119:
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            piVar25 = &field_100092[uVar30];
            pCVar11->field_52033 = *piVar25 == 1;
            break;
        case 3120:
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            piVar25 = &field_100092[uVar30];
            if (*piVar25 == 1) {
                pCVar11->field_52036 = pCVar11->field_52036 | 1;
            } else {
                pCVar11->field_52036 = pCVar11->field_52036 & 4294967294;
            }
            break;
        case 3121:
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            piVar25 = &field_100092[uVar30];
            if (*piVar25 == 1) {
                pCVar11->field_52036 = pCVar11->field_52036 | 2;
            } else {
                pCVar11->field_52036 = pCVar11->field_52036 & 4294967293;
            }
            break;
        case 3122:
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            piVar25 = &field_100092[uVar30];
            if (*piVar25 == 1) {
                pCVar11->field_52036 = pCVar11->field_52036 | 4;
            } else {
                pCVar11->field_52036 = pCVar11->field_52036 & 4294967291;
            }
            break;
        case 3123:
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            piVar25 = &field_100092[uVar30];
            if (*piVar25 == 1) {
                pCVar11->field_52036 = pCVar11->field_52036 | 8;
            } else {
                pCVar11->field_52036 = pCVar11->field_52036 & 4294967287;
            }
            break;
        case 3124:
            pCVar11->field_52036 = 0;
            break;
        case 3125:
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            piVar25 = &field_100092[uVar30];
            pCVar11->field_52416 = *piVar25 == 1;
            break;
        case 3126:
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            piVar25 = &field_100092[uVar30];
            pCVar11->field_19192 = *piVar25 == 1;
            break;
        case 3127:
            pMVar3 = pCVar11->field_52344;
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            piVar25 = &field_100092[uVar30];
            pMVar3->SetSimulatedShiftActive(*piVar25 == 1);
            break;
        case 3128:
            bVar5 = pCVar11->field_52344->GetSimulatedShiftActive();
            uVar10 = (unsigned int)bVar5;
            goto LAB_10015ce8c;
        case 3129:
            iVar7 = field_104092;
            uVar30 = (long)iVar7 - 2;
            field_104092 = (int)uVar30;
            puVar19 = &field_100092[uVar30];
            *(uint32_t*)&pCVar11->field_52408 = *puVar19;
            puVar19 = &field_100092[(long)iVar7 - 1];
            *(uint32_t*)((long)&pCVar11->field_52408 + 4) = *puVar19;
            break;
        case 3130:
            iVar7 = field_104092;
            uVar30 = (long)iVar7 - 2;
            field_104092 = (int)uVar30;
            piVar25 = &field_100092[uVar30];
            iVar8 = *piVar25;
            piVar25 = &field_100092[(long)iVar7 - 1];
            pCVar11->field_52344->SetFeedbackSprite(iVar8, *piVar25 == 1);
            break;
        case 3131:
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            piVar25 = &field_100092[uVar30];
            pCVar11->field_52344->SetFeedbackShowPopupText(*piVar25 == 1);
            break;
        case 3132:
            uVar9 = javapal::GameShell::GetCanvasWidth();
            iVar7 = field_104092;
            field_104092 = iVar7 + 1;
            puVar19 = &field_100092[(long)iVar7];
            *puVar19 = uVar9;
            uVar9 = javapal::GameShell::GetCanvasHeight();
            goto LAB_10015cf5c;
        case 3133:
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            piVar25 = &field_100092[uVar30];
            iVar7 = 0;
            if (-1 < *piVar25) {
                iVar7 = *piVar25;
            }
            pDVar20 = (DeviceOptions*)pCVar11->field_8376.operator->();
            pDVar20->SetFpsLimit(iVar7);
            break;
        case 3134:
            pCVar11 = Client::Instance();
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            plVar21 = (long*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            uVar31 = 1;
            if (plVar21 != nullptr) {
                (**(void (**)(...))(*plVar21 + 136))(plVar21);
            }
            goto switchD_10015b755_caseD_c2a;
        case 3135:
            iVar7 = field_104092;
            uVar30 = (long)iVar7 - 2;
            field_104092 = (int)uVar30;
            piVar25 = &field_100092[uVar30];
            iVar8 = *piVar25;
            piVar25 = &field_100092[(long)iVar7 - 1];
            iVar7 = *piVar25;
            pCVar11 = Client::Instance();
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            plVar21 = (long*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            uVar31 = 1;
            if (((plVar21 != nullptr) && (-2 < iVar8)) && (iVar8 < 4)) {
                (**(void (**)(...))(*plVar21 + 152))(plVar21, iVar8, iVar7 == 1);
            }
            goto switchD_10015b755_caseD_c2a;
        case 3136:
            *(uint32_t*)&pCVar11->field_54160 = 3;
            goto LAB_10015ccdb;
        case 3137:
            *(uint32_t*)&pCVar11->field_54160 = 2;
        LAB_10015ccdb:
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            puVar19 = &field_100092[uVar30];
            *(uint32_t*)((long)&pCVar11->field_54160 + 4) = *puVar19;
            break;
        case 3138:
            *(uint32_t*)&pCVar11->field_54160 = 0;
            break;
        case 3139:
            *(uint32_t*)&pCVar11->field_54160 = 1;
            break;
        case 3140:
            *(uint32_t*)&pCVar11->field_54160 = 3;
            lVar32 = (*((shared_ptr<rs2lib::IfType>*)(field_140856 + (unsigned long)arg3 * 16 - 352))).operator->();
            *(uint32_t*)((long)&pCVar11->field_54160 + 4) = *(uint32_t*)(lVar32 + 4);
            break;
        case 3141:
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            piVar25 = &field_100092[uVar30];
            iVar7 = *piVar25;
            pDVar20 = (DeviceOptions*)pCVar11->field_8376.operator->();
            pDVar20->SetHideUserName(iVar7 == 1);
            break;
        case 3142:
            pDVar20 = (DeviceOptions*)pCVar11->field_8376.operator->();
            bVar5 = pDVar20->GetHideUserName();
            uVar10 = (unsigned int)bVar5;
            goto LAB_10015ce8c;
        case 3143:
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            piVar25 = &field_100092[uVar30];
            iVar7 = *piVar25;
            pCVar11->field_19104 = iVar7 == 1;
            uVar31 = 1;
            if (iVar7 != 1) {
                pDVar20 = (DeviceOptions*)pCVar11->field_8376.operator->();
                new (local_160) eastl::fixed_string<char, 256>("");
                pDVar20->SetCachedUserName(*local_160);
            }
            goto switchD_10015b755_caseD_c2a;
        case 3144:
            uVar10 = (unsigned int)(uint8_t)pCVar11->field_19104;
            goto LAB_10015ce8c;
        case 3145:
            pCVar11 = Client::Instance();
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            ((ApplicationContext*)(*psVar17).operator->())->ShowReviewPrompt();
            break;
        case 3146:
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            piVar25 = &field_100092[uVar30];
            iVar7 = *piVar25;
            pDVar20 = (DeviceOptions*)pCVar11->field_8376.operator->();
            pDVar20->SetMuteTitleScreen(iVar7 == 1);
            break;
        case 3147:
            pDVar20 = (DeviceOptions*)pCVar11->field_8376.operator->();
            bVar5 = pDVar20->GetMuteTitleScreen();
            uVar10 = (unsigned int)(bVar5 ^ 1);
            goto LAB_10015ce8c;
        case 3148:
            pCVar11->AcceptTermsAndPrivacy();
            break;
        case 3149:
            bVar5 = pCVar11->HasAcceptedTermsAndPrivacy();
            uVar10 = (unsigned int)bVar5;
            goto LAB_10015ce8c;
        case 3150:
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            plVar21 = (long*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            if ((plVar21 == nullptr) || (cVar6 = (**(void (**)(...))(*plVar21 + 424))(plVar21), !cVar6))
                goto LAB_10015d696;
            bVar5 = (**(void (**)(...))(*plVar21 + 432))(plVar21);
            uVar10 = (unsigned int)bVar5;
            goto LAB_10015ce8c;
        case 3151:
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            plVar21 = (long*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            if ((plVar21 == nullptr) || (cVar6 = (**(void (**)(...))(*plVar21 + 424))(plVar21), !cVar6))
                goto LAB_10015d696;
            bVar5 = (**(void (**)(...))(*plVar21 + 440))(plVar21);
            uVar10 = (unsigned int)bVar5;
            goto LAB_10015ce8c;
        case 3152:
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            plVar21 = (long*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            if (plVar21 == nullptr)
                goto LAB_10015d696;
            bVar5 = (**(void (**)(...))(*plVar21 + 424))(plVar21);
            uVar10 = (unsigned int)bVar5;
            goto LAB_10015ce8c;
        case 3153:
            uVar10 = TitleScreen::m_loadPos;
            goto LAB_10015ce8c;
        case 3154:
            iVar7 = field_104092;
            field_104092 = iVar7 + 1;
            puVar19 = &field_100092[(long)iVar7];
            *puVar19 = 10000;
            break;
        case 3155:
            uVar30 = (long)field_136096 - 1;
            field_136096 = (int)uVar30;
            pbVar29 = &field_104096[uVar30];
            new (local_160) eastl::string(*pbVar29);
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            plVar21 = (long*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            if (plVar21 == nullptr) {
                uVar31 = 0;
                field_141000->Raise(1);
            } else {
                uVar31 = 1;
                (**(void (**)(...))(*plVar21 + 264))(plVar21, local_160);
            }
            goto LAB_10015d839;
        case 3156:
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            plVar21 = (long*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            if (plVar21 == nullptr)
                goto LAB_10015d696;
            (**(void (**)(...))(*plVar21 + 272))(plVar21);
            break;
        case 3157:
            iVar7 = field_104092;
            uVar30 = (long)iVar7 - 2;
            field_104092 = (int)uVar30;
            puVar19 = &field_100092[uVar30];
            uVar9 = *puVar19;
            puVar19 = &field_100092[(long)iVar7 - 1];
            uVar2 = *puVar19;
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            plVar21 = (long*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            uVar31 = 1;
            if (plVar21 != nullptr) {
                (**(void (**)(...))(*plVar21 + 160))(plVar21, uVar9, uVar2);
            }
            goto switchD_10015b755_caseD_c2a;
        case 3158:
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            this_01 = (AnimationParameters*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            if (this_01 != nullptr) {
                uVar10 = this_01->GetCurrentIndex();
                goto LAB_10015ce8a;
            }
            goto LAB_10015d696;
        case 3159:
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            this_02 = (AuthLibWrapper*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            if (this_02 != nullptr) {
                uVar10 = this_02->GetShopDataStatus();
                goto LAB_10015ce8a;
            }
            goto LAB_10015d696;
        case 3160:
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            plVar21 = (long*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            if (plVar21 != nullptr) {
                uVar10 = (**(void (**)(...))(*plVar21 + 280))(plVar21);
                goto LAB_10015ce8a;
            }
            goto LAB_10015d696;
        case 3161:
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            puVar19 = &field_100092[uVar30];
            uVar9 = *puVar19;
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            plVar21 = (long*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            if (plVar21 == nullptr)
                goto LAB_10015d696;
            uVar9 = (**(void (**)(...))(*plVar21 + 288))(plVar21, uVar9);
            goto LAB_10015cf5c;
        case 3162:
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            puVar19 = &field_100092[uVar30];
            uVar9 = *puVar19;
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            plVar21 = (long*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            if (plVar21 == nullptr)
                goto LAB_10015d696;
            uVar9 = (**(void (**)(...))(*plVar21 + 296))(plVar21, uVar9);
            goto LAB_10015cf5c;
        case 3163:
            uVar30 = (long)field_136096 - 1;
            field_136096 = (int)uVar30;
            pbVar29 = &field_104096[uVar30];
            new (local_160) eastl::string(*pbVar29);
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            plVar21 = (long*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            if (plVar21 == nullptr) {
                uVar31 = 0;
                field_141000->Raise(1);
            } else {
                uVar9 = (**(void (**)(...))(*plVar21 + 304))(plVar21, local_160);
                iVar7 = field_104092;
                field_104092 = iVar7 + 1;
                puVar19 = &field_100092[(long)iVar7];
                *puVar19 = uVar9;
                uVar31 = 1;
            }
        LAB_10015d839:
            goto switchD_10015b755_caseD_c2a;
        case 3164:
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            puVar19 = &field_100092[uVar30];
            uVar9 = *puVar19;
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            plVar21 = (long*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            if (plVar21 == nullptr)
                goto LAB_10015d696;
            (**(void (**)(...))(*plVar21 + 312))((eastl::string*)local_160, plVar21, uVar9);
            iVar7 = field_136096;
            field_136096 = iVar7 + 1;
            pbVar27 = &field_104096[(long)iVar7];
            *pbVar27 = local_160;
            goto LAB_10015d5d8;
        case 3165:
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            puVar19 = &field_100092[uVar30];
            uVar9 = *puVar19;
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            plVar21 = (long*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            if (plVar21 == nullptr)
                goto LAB_10015d696;
            uVar9 = (**(void (**)(...))(*plVar21 + 320))(plVar21, uVar9);
        LAB_10015cf5c:
            iVar7 = field_104092;
            field_104092 = iVar7 + 1;
            puVar19 = &field_100092[(long)iVar7];
            *puVar19 = uVar9;
            break;
        case 3166:
            iVar7 = field_104092;
            uVar30 = (long)iVar7 - 1;
            field_104092 = (int)uVar30;
            pRVar28 = &field_100092[uVar30];
            local_164 = *pRVar28;
            uVar30 = (long)iVar7 - 2;
            field_104092 = (int)uVar30;
            puVar19 = &field_100092[uVar30];
            uVar9 = *puVar19;
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            plVar21 = (long*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            if (plVar21 == nullptr)
                goto LAB_10015d696;
            bVar5 = (**(void (**)(...))(*plVar21 + 328))(plVar21, uVar9, local_164);
        LAB_10015d10e:
            uVar10 = (unsigned int)bVar5;
            iVar7 = field_104092;
            field_104092 = iVar7 + 1;
            goto LAB_10015cea4;
        case 3167:
            iVar7 = field_104092;
            uVar30 = (long)iVar7 - 1;
            field_104092 = (int)uVar30;
            pRVar28 = &field_100092[uVar30];
            local_164 = *pRVar28;
            uVar30 = (long)iVar7 - 2;
            field_104092 = (int)uVar30;
            puVar19 = &field_100092[uVar30];
            uVar9 = *puVar19;
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            plVar21 = (long*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            if (plVar21 != nullptr) {
                bVar5 = (**(void (**)(...))(*plVar21 + 336))(plVar21, uVar9, local_164);
                goto LAB_10015d10e;
            }
        LAB_10015d696:
            field_141000->Raise(1);
            uVar31 = 0;
            goto switchD_10015b755_caseD_c2a;
        case 3168:
            iVar7 = field_104092;
            uVar30 = (long)iVar7 - 1;
            field_104092 = (int)uVar30;
            pRVar28 = &field_100092[uVar30];
            local_164 = *pRVar28;
            uVar30 = (long)iVar7 - 2;
            field_104092 = (int)uVar30;
            puVar19 = &field_100092[uVar30];
            uVar9 = *puVar19;
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            plVar21 = (long*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            if (plVar21 == nullptr)
                goto LAB_10015d696;
            (**(void (**)(...))(*plVar21 + 352))((eastl::string*)local_160, plVar21, uVar9, local_164);
            puVar1 = &field_104096;
            iVar7 = field_136096;
            field_136096 = iVar7 + 1;
            pbVar27 = (eastl::string*)(*puVar1)[(long)iVar7];
            *pbVar27 = local_160;
            (**(void (**)(...))(*plVar21 + 344))((eastl::string*)local_160, plVar21, uVar9, local_164);
            iVar7 = field_136096;
            field_136096 = iVar7 + 1;
            pbVar27 = (eastl::string*)(*puVar1)[(long)iVar7];
            *pbVar27 = local_160;
            (**(void (**)(...))(*plVar21 + 360))((eastl::string*)local_160, plVar21, uVar9, local_164);
            iVar7 = field_136096;
            field_136096 = iVar7 + 1;
            pbVar27 = (eastl::string*)(*puVar1)[(long)iVar7];
            *pbVar27 = local_160;
            (**(void (**)(...))(*plVar21 + 384))((eastl::string*)local_160, plVar21, uVar9, local_164);
            iVar7 = field_136096;
            field_136096 = iVar7 + 1;
            pbVar27 = (eastl::string*)(*puVar1)[(long)iVar7];
            *pbVar27 = local_160;
            (**(void (**)(...))(*plVar21 + 376))((eastl::string*)local_160, plVar21, uVar9, local_164);
            iVar7 = field_136096;
            field_136096 = iVar7 + 1;
            pbVar27 = (eastl::string*)(*puVar1)[(long)iVar7];
            *pbVar27 = local_160;
            (**(void (**)(...))(*plVar21 + 392))((eastl::string*)local_160, plVar21, uVar9, local_164);
            iVar7 = field_136096;
            field_136096 = iVar7 + 1;
            pbVar27 = (eastl::string*)(*puVar1)[(long)iVar7];
            *pbVar27 = local_160;
            (**(void (**)(...))(*plVar21 + 368))((eastl::string*)local_160, plVar21, uVar9, local_164);
            iVar7 = field_136096;
            field_136096 = iVar7 + 1;
            pbVar27 = (eastl::string*)(*puVar1)[(long)iVar7];
            *pbVar27 = local_160;
            (**(void (**)(...))(*plVar21 + 400))((eastl::string*)local_160, plVar21, uVar9, local_164);
            iVar7 = field_136096;
            field_136096 = iVar7 + 1;
            pbVar27 = (eastl::string*)(*puVar1)[(long)iVar7];
            *pbVar27 = local_160;
            (**(void (**)(...))(*plVar21 + 408))((eastl::string*)local_160, plVar21, uVar9, local_164);
            iVar7 = field_136096;
            field_136096 = iVar7 + 1;
            pbVar27 = (eastl::string*)(*puVar1)[(long)iVar7];
            *pbVar27 = local_160;
            goto LAB_10015d5d8;
        case 3169:
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            plVar21 = (long*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            uVar31 = 1;
            if (plVar21 != nullptr) {
                (**(void (**)(...))(*plVar21 + 200))(plVar21);
            }
            goto switchD_10015b755_caseD_c2a;
        case 3170:
            uVar30 = (long)field_136096 - 2;
            field_136096 = (int)uVar30;
            pbVar29 = &field_104096[uVar30];
            new (local_160) eastl::string(*pbVar29);
            pbVar29 = &field_104096[(long)field_136096 + 1];
            local_188 = eastl::string(*pbVar29);
            iVar7 = field_104092;
            uVar30 = (long)iVar7 - 2;
            field_104092 = (int)uVar30;
            puVar1 = &field_100092;
            pRVar28 = (ResultType*)(*puVar1)[uVar30];
            local_164 = *pRVar28;
            puVar19 = (uint32_t*)(*puVar1)[(long)iVar7 - 1];
            uVar9 = *puVar19;
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            plVar21 = (long*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            if (plVar21 != nullptr) {
                uVar9 = (**(void (**)(...))(*plVar21 + 448))(plVar21, local_160, &local_188, local_164, uVar9);
                iVar7 = field_104092;
                field_104092 = iVar7 + 1;
                puVar19 = (uint32_t*)(*puVar1)[(long)iVar7];
                *puVar19 = uVar9;
            }
            goto LAB_10015d5cc;
        case 3171:
            uVar30 = (long)field_136096 - 3;
            field_136096 = (int)uVar30;
            puVar1 = &field_104096;
            pbVar29 = (eastl::string*)(*puVar1)[uVar30];
            new (local_160) eastl::string(*pbVar29);
            pbVar29 = (eastl::string*)(*puVar1)[(long)field_136096 + 1];
            local_188 = eastl::string(*pbVar29);
            pbVar29 = (eastl::string*)(*puVar1)[(long)field_136096 + 2];
            new (local_1b0) eastl::string(*pbVar29);
            lVar32 = (long)field_104092;
            field_104092 = (int)(lVar32 - 3U);
            puVar1 = &field_100092;
            pRVar28 = (ResultType*)(*puVar1)[lVar32 - 3U];
            local_164 = *pRVar28;
            puVar19 = (uint32_t*)(*puVar1)[lVar32 - 2];
            uVar9 = *puVar19;
            puVar19 = (uint32_t*)(*puVar1)[lVar32 - 1];
            uVar2 = *puVar19;
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            plVar21 = (long*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            if (plVar21 != nullptr) {
                uVar9 = (**(void (**)(...))(*plVar21 + 456))(plVar21, local_160, &local_188, local_164, uVar9,
                                                             local_1b0, uVar2);
                iVar7 = field_104092;
                field_104092 = iVar7 + 1;
                puVar19 = (uint32_t*)(*puVar1)[(long)iVar7];
                *puVar19 = uVar9;
            }
        LAB_10015d5cc:
        LAB_10015d5d8:
            pbVar27 = (eastl::string*)local_160;
        LAB_10015d5df:
            pbVar27->~basic_string();
            break;
        case 3172:
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            puVar19 = &field_100092[uVar30];
            uVar9 = *puVar19;
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            plVar21 = (long*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            uVar31 = 1;
            if (plVar21 != nullptr) {
                (**(void (**)(...))(*plVar21 + 464))(plVar21, uVar9);
            }
            goto switchD_10015b755_caseD_c2a;
        case 3173:
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            puVar19 = &field_100092[uVar30];
            uVar9 = *puVar19;
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            plVar21 = (long*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            uVar31 = 1;
            if (plVar21 != nullptr) {
                uVar9 = (**(void (**)(...))(*plVar21 + 480))(plVar21, uVar9);
                iVar7 = field_104092;
                field_104092 = iVar7 + 1;
                puVar19 = &field_100092[(long)iVar7];
                *puVar19 = uVar9;
            }
            goto switchD_10015b755_caseD_c2a;
        case 3174:
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            puVar19 = &field_100092[uVar30];
            uVar9 = *puVar19;
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            plVar21 = (long*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            uVar31 = 1;
            if (plVar21 != nullptr) {
                (**(void (**)(...))(*plVar21 + 472))(plVar21, uVar9);
            }
            goto switchD_10015b755_caseD_c2a;
        case 3175:
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            plVar21 = (long*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            uVar31 = 1;
            if (plVar21 != nullptr) {
                uVar9 = (**(void (**)(...))(*plVar21 + 496))(plVar21);
                iVar7 = field_104092;
                field_104092 = iVar7 + 1;
                puVar19 = &field_100092[(long)iVar7];
                *puVar19 = uVar9;
            }
            goto switchD_10015b755_caseD_c2a;
        case 3176:
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            plVar21 = (long*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            uVar31 = 1;
            if (plVar21 != nullptr) {
                (**(void (**)(...))(*plVar21 + 488))(plVar21);
            }
            goto switchD_10015b755_caseD_c2a;
        case 3177:
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            plVar21 = (long*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            if (plVar21 == nullptr)
                goto LAB_10015d696;
            (**(void (**)(...))(*plVar21 + 168))(plVar21);
            break;
        case 3178:
            field_136096 = field_136096 - 1;
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            plVar21 = (long*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            uVar31 = 1;
            if (plVar21 != nullptr) {
                uVar18 = field_104096[(long)field_136096];
                (**(void (**)(...))(*plVar21 + 224))(plVar21, uVar18);
            }
            goto switchD_10015b755_caseD_c2a;
        case 3179:
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            plVar21 = (long*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            uVar31 = 1;
            if (plVar21 != nullptr) {
                (**(void (**)(...))(*plVar21 + 176))(plVar21);
            }
            goto switchD_10015b755_caseD_c2a;
        case 3180:
            field_136096 = field_136096 - 1;
            psVar17 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar11)(pCVar11);
            plVar21 = (long*)(*psVar17).operator->();
            plVar21 = (long*)(**(void (**)(...))(*plVar21 + 72))(plVar21);
            uVar31 = 1;
            if (plVar21 != nullptr) {
                uVar18 = field_104096[(long)field_136096];
                (**(void (**)(...))(*plVar21 + 232))(plVar21, uVar18);
            }
            goto switchD_10015b755_caseD_c2a;
        case 3181:
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            puVar19 = &field_100092[uVar30];
            uVar9 = *puVar19;
            pDVar20 = (DeviceOptions*)pCVar11->field_8376.operator->();
            plVar21 = pDVar20->GetScriptOption(6);
            uVar31 = 1;
            if (plVar21 != nullptr) {
                (**(void (**)(...))(*plVar21 + 16))(plVar21, uVar9);
            }
            goto switchD_10015b755_caseD_c2a;
        case 3182:
            pDVar20 = (DeviceOptions*)pCVar11->field_8376.operator->();
            plVar21 = pDVar20->GetScriptOption(6);
            if (plVar21 != nullptr) {
                uVar10 = (**(void (**)(...))(*plVar21 + 24))(plVar21);
                goto LAB_10015ce8a;
            }
            uVar10 = 0;
            goto LAB_10015ce8c;
        case 3183:
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            piVar25 = &field_100092[uVar30];
            pCVar11->field_54384 = *piVar25 != 0;
            break;
        case 3184:
            uVar10 = (unsigned int)pCVar11->field_54384;
            goto LAB_10015ce8c;
        case 3185:
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            piVar25 = &field_100092[uVar30];
            iVar7 = *piVar25;
            pwVar22 = (world*)pCVar11->field_19184.operator->();
            pwVar22->SetDrawDistance(iVar7);
            break;
        case 3186:
            pwVar22 = (world*)pCVar11->field_19184.operator->();
            uVar10 = pwVar22->GetDrawDistance();
        LAB_10015ce8a:
        LAB_10015ce8c:
            iVar7 = field_104092;
            field_104092 = iVar7 + 1;
        LAB_10015cea4:
            puVar26 = &field_100092[(long)iVar7];
            *puVar26 = uVar10;
            break;
        case 3187:
            field_136096 = field_136096 - 2;
            pCVar11->field_8400.operator->();
            cVar6 = DiscordMain::GetIsDiscordInitialized();
            if (!cVar6) {
                this_04 = logger::default_logger();
                str2_00 = "Discord is not initialized, activity can\'t be set.";
                iVar7 = 881;
            LAB_10015d7f6:
                this_04->Log(false, 8,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "ScriptRunnerImpl_3100To3199.cpp",
                             iVar7, str2_00);
            } else {
                iVar7 = field_136096;
                pbVar29 = &field_104096[(long)iVar7];
                str2 = &field_104096[(long)iVar7 + 1];
                pDVar23 = (DiscordMain*)pCVar11->field_8400.operator->();
                puVar24 = pDVar23->GetDiscordRichPresenceModule();
                ((DiscordRichPresence*)(*puVar24).operator->())->SetDiscordActivityDetails(*pbVar29, *str2);
            }
            break;
        case 3188:
            pCVar11->field_8400.operator->();
            cVar6 = DiscordMain::GetIsDiscordInitialized();
            if (!cVar6) {
                this_04 = logger::default_logger();
                str2_00 = "Discord is not initialized, activity can\'t be unset.";
                iVar7 = 894;
                goto LAB_10015d7f6;
            }
            pDVar23 = (DiscordMain*)pCVar11->field_8400.operator->();
            puVar24 = pDVar23->GetDiscordRichPresenceModule();
            (*puVar24).operator->();
            DiscordRichPresence::UnsetDiscordActivityDetails();
            break;
        case 3189:
            uVar30 = (long)field_104092 - 1;
            field_104092 = (int)uVar30;
            piVar25 = &field_100092[uVar30];
            pCVar11->PreloadKeyFrameSet(*piVar25);
        }
        uVar31 = 1;
    switchD_10015b755_caseD_c2a:
        return uVar31;
    }

} // namespace jag::oldscape
