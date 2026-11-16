// projects/osclient/ScriptRunnerImpl_3100To3199.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10015b700, 9168 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand3100To3199(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand3100To3199(undefined4 param_2, undefined8 param_3, uint param_4) {
        undefined1* puVar1;
        undefined4 uVar2;
        Minimenu* pMVar3;
        bool bVar4;
        byte bVar5;
        char cVar6;
        int iVar7;
        undefined4 uVar8;
        int iVar9;
        uint uVar10;
        Client* this_00;
        ClientPlayer* pCVar11;
        shared_ptr* psVar12;
        GameOptions* pGVar13;
        ServerConnection* pSVar14;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* pPVar15;
        undefined8* puVar16;
        ApplicationContext* this_01;
        shared_ptr<ApplicationContext>* psVar17;
        undefined4* puVar18;
        DeviceOptions* pDVar19;
        long* plVar20;
        DiscordMain* pDVar21;
        unique_ptr<DiscordRichPresence, std::default_delete<DiscordRichPresence>>* puVar22;
        int* piVar23;
        AnimationParameters* this_02;
        AuthLibWrapper* this_03;
        uint* puVar24;
        eastl::string* pbVar25;
        basic_string* pbVar26;
        basic_string* pbVar27;
        ulong uVar28;
        undefined8 uVar29;
        char* pcVar30;
        undefined8 uVar31;
        long lVar32;
        SuperShuffledPacketFactory local_1e0;
        undefined4 local_1d0[2];
        undefined4 local_1c8[2];
        undefined4 local_1c0[2];
        undefined4 local_1b8[2];
        int local_1b0[9];
        int local_18c;
        eastl::string local_188[36];
        int local_164;
        undefined1 local_160[8];
        SuperPacket local_158[6];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar31 = 2;
        this_00 = (Client*)Client::Instance();
        switch (param_2) {
        case 3100:
            uVar28 = (long)(int)field_136096 - 1;
            field_136096 = (uint)uVar28;
            pbVar26 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&field_104096, uVar28);
            new (local_160) eastl::string(pbVar26);
            new (local_1b0) eastl::allocator("EASTL basic_string");
            eastl::string::basic_string(local_188, "", (allocator*)local_1b0);
            this_00->AddChat(0, local_188, local_160);
            goto LAB_10015d5cc;
        case 3101:
            field_104092 = field_104092 + -2;
            pCVar11 =
                (ClientPlayer*)shared_ptr<ClientPlayer>::operator*((shared_ptr<ClientPlayer>*)this_00->field_52016);
            iVar9 = field_104092;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar9);
            iVar7 = *piVar23;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar9 + 1);
            this_00->TriggerPlayerAnim(pCVar11, iVar7, *piVar23);
            break;
        case 3102:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            iVar9 = *piVar23;
            uVar28 = (long)(int)field_136096 - 1;
            field_136096 = (uint)uVar28;
            pbVar26 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&field_104096, uVar28);
            new (local_160) eastl::string(pbVar26);
            new (local_1b0) eastl::allocator("EASTL basic_string");
            eastl::string::basic_string(local_188, "", (allocator*)local_1b0);
            this_00->AddChat(iVar9, local_188, local_160);
            goto LAB_10015d5cc;
        case 3103:
            uVar31 = 1;
            if (field_140993 == '\0') {
                field_140992 = 1;
            }
            goto switchD_10015b755_caseD_c2a;
        case 3104:
            uVar28 = (long)(int)field_136096 - 1;
            field_136096 = (uint)uVar28;
            pbVar26 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&field_104096, uVar28);
            eastl::string::basic_string(local_188, pbVar26);
            local_1b0[0] = 0;
            core::stringtools::general::StringTools::CheckedParseInt(local_1b0, (basic_string*)local_188, 10, true);
            pSVar14 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&this_00->field_19120);
            uVar31 = pSVar14->GetOutgoingEncryption();
            local_160->MakeClientMessage(94, uVar31);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_160 + 8), local_1b0[0]);
            pSVar14 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&this_00->field_19120);
            pSVar14->SendClientMessage(local_160);
            goto LAB_10015bacf;
        case 3105:
            uVar28 = (long)(int)field_136096 - 1;
            field_136096 = (uint)uVar28;
            pbVar26 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&field_104096, uVar28);
            eastl::string::basic_string(local_188, pbVar26);
            pSVar14 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&this_00->field_19120);
            uVar31 = pSVar14->GetOutgoingEncryption();
            local_160->MakeClientMessage(2, uVar31);
            lVar32 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_160 + 8), lVar32 + 1);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringNoConversion<
                eastl::fixed_string<char, 32, true, eastl::allocator>>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_160 + 8), (fixed_string*)local_188, false);
            pSVar14 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&this_00->field_19120);
            pSVar14->SendClientMessage(local_160);
            goto LAB_10015bacf;
        case 3106:
            uVar28 = (long)(int)field_136096 - 1;
            field_136096 = (uint)uVar28;
            pbVar26 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&field_104096, uVar28);
            eastl::string::basic_string(local_188, pbVar26);
            pSVar14 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&this_00->field_19120);
            uVar31 = pSVar14->GetOutgoingEncryption();
            local_160->MakeClientMessage(49, uVar31);
            lVar32 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_160 + 8), lVar32 + 1);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringNoConversion<
                eastl::fixed_string<char, 32, true, eastl::allocator>>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_160 + 8), (fixed_string*)local_188, false);
            pSVar14 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&this_00->field_19120);
            pSVar14->SendClientMessage(local_160);
        LAB_10015bacf:
            local_160->~ClientMessage();
        LAB_10015bf96:
            pbVar25 = local_188;
            goto LAB_10015d5df;
        case 3107:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            iVar9 = *piVar23;
            uVar28 = (long)(int)field_136096 - 1;
            field_136096 = (uint)uVar28;
            pbVar26 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&field_104096, uVar28);
            new (local_160) eastl::string(pbVar26);
            this_00->OpPlayer(iVar9, local_160);
            goto LAB_10015d5d8;
        case 3108:
            lVar32 = (long)field_104092;
            field_104092 = (int)(lVar32 - 3U);
            puVar1 = &field_100092;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, lVar32 - 3U);
            local_164 = *piVar23;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, lVar32 - 2);
            local_18c = *piVar23;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, lVar32 - 1);
            psVar12 = (shared_ptr*)rs2lib::IfType::Get(*piVar23);
            bVar4 = operator==(psVar12, (_func_decltype_nullptr*)0);
            if (bVar4) {
            LAB_10015bc57:
                uVar31 = 0;
                (&field_141000, 1)->Raise();
                goto switchD_10015b755_caseD_c2a;
            }
            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_1d0, local_164);
            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_1c8, local_18c);
            this_00->DragTryPickup(psVar12, local_1d0[0], local_1c8[0]);
            break;
        case 3109:
            iVar9 = field_104092;
            uVar28 = (long)iVar9 - 2;
            field_104092 = (int)uVar28;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            local_164 = *piVar23;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar9 - 1);
            local_18c = *piVar23;
            bVar4 = operator==((shared_ptr*)(field_140504 + ((ulong)param_4 & 255) * 16), (_func_decltype_nullptr*)0);
            if (bVar4)
                goto LAB_10015bc57;
            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_1c0, local_164);
            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_1b8, local_18c);
            this_00->DragTryPickup((shared_ptr*)(field_140504 + ((ulong)param_4 & 255) * 16), local_1c0[0],
                                   local_1b8[0]);
            break;
        case 3110:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            this_00->field_19105 = *piVar23 == 1;
            break;
        case 3111:
            pGVar13 = (GameOptions*)
                          std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                              (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&this_00
                                  ->field_8384);
            bVar5 = pGVar13->GetRemoveRoof();
            uVar10 = (uint)bVar5;
            goto LAB_10015ce8c;
        case 3112:
            pGVar13 = (GameOptions*)
                          std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                              (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&this_00
                                  ->field_8384);
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            pGVar13->SetRemoveRoof(*piVar23 == 1);
            break;
        case 3113:
            uVar28 = (long)(int)field_136096 - 1;
            field_136096 = (uint)uVar28;
            pbVar26 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&field_104096, uVar28);
            new (local_160) eastl::string(pbVar26);
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            iVar9 = *piVar23;
            puVar16 = (undefined8*)Client::Instance();
            psVar17 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar16)(puVar16);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            (**(code**)(*plVar20 + 192))(plVar20, local_160, iVar9 == 1);
            goto LAB_10015d5d8;
        default:
            goto switchD_10015b755_caseD_c2a;
        case 3115:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            iVar9 = *piVar23;
            pSVar14 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&this_00->field_19120);
            uVar31 = pSVar14->GetOutgoingEncryption();
            local_160->MakeClientMessage(91, uVar31);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_160 + 8), iVar9);
            pSVar14 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&this_00->field_19120);
            pSVar14->SendClientMessage(local_160);
            local_160->~ClientMessage();
            break;
        case 3116:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            puVar18 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            uVar8 = *puVar18;
            uVar28 = (long)(int)field_136096 - 2;
            field_136096 = (uint)uVar28;
            pbVar26 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&field_104096, uVar28);
            eastl::string::basic_string(local_188, pbVar26);
            pbVar26 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&field_104096, (long)(int)field_136096 + 1);
            new (local_1b0) eastl::string(pbVar26);
            uVar28 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if ((uVar28 < 501) &&
                (uVar28 = eastl::basic_string<
                     char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size(),
                 uVar28 < 501)) {
                pSVar14 = (ServerConnection*)
                              std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                  (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&this_00
                                      ->field_19120);
                uVar31 = pSVar14->GetOutgoingEncryption();
                local_160->MakeClientMessage(22, uVar31);
                iVar9 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringNoConversion<
                    eastl::stringconst>((basic_string*)local_188, false);
                iVar7 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringNoConversion<
                    eastl::stringconst>((basic_string*)local_1b0, false);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
                    (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_160 + 8), iVar9 + iVar7 + 1);
                new (&local_1e0) SuperShuffledPacketFactory((SuperPacket*)(local_160 + 8));
                pPVar15 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_1e0.p2_alt2();
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringNoConversion<
                    eastl::fixed_string<char, 32, true, eastl::allocator>>(pPVar15, (fixed_string*)local_1b0, false);
                pPVar15 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_1e0.HeapBeginPtr();
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(pPVar15, uVar8);
                pPVar15 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_1e0.p2_alt2();
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringNoConversion<
                    eastl::fixed_string<char, 32, true, eastl::allocator>>(pPVar15, (fixed_string*)local_188, false);
                pSVar14 = (ServerConnection*)
                              std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                  (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&this_00
                                      ->field_19120);
                pSVar14->SendClientMessage(local_160);
                local_160->~ClientMessage();
            }
            local_1b0->~basic_string();
            goto LAB_10015bf96;
        case 3117:
            pMVar3 = this_00->field_52344;
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            pMVar3->SetShiftClickEnabled(*piVar23 == 1);
            break;
        case 3118:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            this_00->field_52344->field_2 = *piVar23 == 1;
            break;
        case 3119:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            this_00->field_52033 = *piVar23 == 1;
            break;
        case 3120:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            if (*piVar23 == 1) {
                this_00->field_52036 = this_00->field_52036 | 1;
            } else {
                this_00->field_52036 = this_00->field_52036 & 4294967294;
            }
            break;
        case 3121:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            if (*piVar23 == 1) {
                this_00->field_52036 = this_00->field_52036 | 2;
            } else {
                this_00->field_52036 = this_00->field_52036 & 4294967293;
            }
            break;
        case 3122:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            if (*piVar23 == 1) {
                this_00->field_52036 = this_00->field_52036 | 4;
            } else {
                this_00->field_52036 = this_00->field_52036 & 4294967291;
            }
            break;
        case 3123:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            if (*piVar23 == 1) {
                this_00->field_52036 = this_00->field_52036 | 8;
            } else {
                this_00->field_52036 = this_00->field_52036 & 4294967287;
            }
            break;
        case 3124:
            this_00->field_52036 = 0;
            break;
        case 3125:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            this_00->field_52416 = *piVar23 == 1;
            break;
        case 3126:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            this_00->field_19192 = *piVar23 == 1;
            break;
        case 3127:
            pMVar3 = this_00->field_52344;
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            pMVar3->SetSimulatedShiftActive(*piVar23 == 1);
            break;
        case 3128:
            bVar5 = this_00->field_52344->GetSimulatedShiftActive();
            uVar10 = (uint)bVar5;
            goto LAB_10015ce8c;
        case 3129:
            iVar9 = field_104092;
            uVar28 = (long)iVar9 - 2;
            field_104092 = (int)uVar28;
            puVar18 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            *(undefined4*)&this_00->field_52408 = *puVar18;
            puVar18 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar9 - 1);
            *(undefined4*)((long)&this_00->field_52408 + 4) = *puVar18;
            break;
        case 3130:
            iVar9 = field_104092;
            uVar28 = (long)iVar9 - 2;
            field_104092 = (int)uVar28;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            iVar7 = *piVar23;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar9 - 1);
            (this_00->field_52344, iVar7, *piVar23 == 1)->SetFeedbackSprite();
            break;
        case 3131:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            (this_00->field_52344, *piVar23 == 1)->SetFeedbackShowPopupText();
            break;
        case 3132:
            uVar8 = javapal::GameShell::GetCanvasWidth();
            iVar9 = field_104092;
            field_104092 = iVar9 + 1;
            puVar18 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar9);
            *puVar18 = uVar8;
            uVar8 = javapal::GameShell::GetCanvasHeight();
            goto LAB_10015cf5c;
        case 3133:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            iVar9 = 0;
            if (-1 < *piVar23) {
                iVar9 = *piVar23;
            }
            pDVar19 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&this_00
                            ->field_8376);
            pDVar19->SetFpsLimit(iVar9);
            break;
        case 3134:
            puVar16 = (undefined8*)Client::Instance();
            psVar17 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar16)(puVar16);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            plVar20 = (long*)(**(code**)(*plVar20 + 72))(plVar20);
            uVar31 = 1;
            if (plVar20 != (long*)0) {
                (**(code**)(*plVar20 + 136))(plVar20);
            }
            goto switchD_10015b755_caseD_c2a;
        case 3135:
            iVar9 = field_104092;
            uVar28 = (long)iVar9 - 2;
            field_104092 = (int)uVar28;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            iVar7 = *piVar23;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar9 - 1);
            iVar9 = *piVar23;
            puVar16 = (undefined8*)Client::Instance();
            psVar17 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar16)(puVar16);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            plVar20 = (long*)(**(code**)(*plVar20 + 72))(plVar20);
            uVar31 = 1;
            if (((plVar20 != (long*)0) && (-2 < iVar7)) && (iVar7 < 4)) {
                (**(code**)(*plVar20 + 152))(plVar20, iVar7, iVar9 == 1);
            }
            goto switchD_10015b755_caseD_c2a;
        case 3136:
            *(undefined4*)&this_00->field_54160 = 3;
            goto LAB_10015ccdb;
        case 3137:
            *(undefined4*)&this_00->field_54160 = 2;
        LAB_10015ccdb:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            puVar18 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            *(undefined4*)((long)&this_00->field_54160 + 4) = *puVar18;
            break;
        case 3138:
            *(undefined4*)&this_00->field_54160 = 0;
            break;
        case 3139:
            *(undefined4*)&this_00->field_54160 = 1;
            break;
        case 3140:
            *(undefined4*)&this_00->field_54160 = 3;
            lVar32 = shared_ptr<rs2lib::IfType>::operator->(
                (shared_ptr<rs2lib::IfType>*)(field_140504 + ((ulong)param_4 & 255) * 16));
            *(undefined4*)((long)&this_00->field_54160 + 4) = *(undefined4*)(lVar32 + 4);
            break;
        case 3141:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            iVar9 = *piVar23;
            pDVar19 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&this_00
                            ->field_8376);
            pDVar19->SetHideUserName(iVar9 == 1);
            break;
        case 3142:
            pDVar19 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&this_00
                            ->field_8376);
            bVar5 = pDVar19->GetHideUserName();
            uVar10 = (uint)bVar5;
            goto LAB_10015ce8c;
        case 3143:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            iVar9 = *piVar23;
            this_00->field_19104 = iVar9 == 1;
            uVar31 = 1;
            if (iVar9 != 1) {
                pDVar19 =
                    (DeviceOptions*)
                        std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                            (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&this_00
                                ->field_8376);
                new (local_160) eastl::fixed_string<char, 256, true, eastl::allocator>("");
                pDVar19->SetCachedUserName(local_160);
                /* WARNING: Subroutine does not return */
                local_160->~fixed_string();
            }
            goto switchD_10015b755_caseD_c2a;
        case 3144:
            uVar10 = (uint)(byte)this_00->field_19104;
            goto LAB_10015ce8c;
        case 3145:
            puVar16 = (undefined8*)Client::Instance();
            psVar17 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar16)(puVar16);
            this_01 = (ApplicationContext*)shared_ptr<ApplicationContext>::operator->(psVar17);
            this_01->ShowReviewPrompt();
            break;
        case 3146:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            iVar9 = *piVar23;
            pDVar19 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&this_00
                            ->field_8376);
            pDVar19->SetMuteTitleScreen(iVar9 == 1);
            break;
        case 3147:
            pDVar19 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&this_00
                            ->field_8376);
            bVar5 = pDVar19->GetMuteTitleScreen();
            uVar10 = (uint)(bVar5 ^ 1);
            goto LAB_10015ce8c;
        case 3148:
            this_00->AcceptTermsAndPrivacy();
            break;
        case 3149:
            bVar5 = this_00->HasAcceptedTermsAndPrivacy();
            uVar10 = (uint)bVar5;
            goto LAB_10015ce8c;
        case 3150:
            psVar17 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            plVar20 = (long*)(**(code**)(*plVar20 + 72))(plVar20);
            if ((plVar20 == (long*)0) || (cVar6 = (**(code**)(*plVar20 + 424))(plVar20), cVar6 == '\0'))
                goto LAB_10015d696;
            bVar5 = (**(code**)(*plVar20 + 432))(plVar20);
            uVar10 = (uint)bVar5;
            goto LAB_10015ce8c;
        case 3151:
            psVar17 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            plVar20 = (long*)(**(code**)(*plVar20 + 72))(plVar20);
            if ((plVar20 == (long*)0) || (cVar6 = (**(code**)(*plVar20 + 424))(plVar20), cVar6 == '\0'))
                goto LAB_10015d696;
            bVar5 = (**(code**)(*plVar20 + 440))(plVar20);
            uVar10 = (uint)bVar5;
            goto LAB_10015ce8c;
        case 3152:
            psVar17 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            plVar20 = (long*)(**(code**)(*plVar20 + 72))(plVar20);
            if (plVar20 == (long*)0)
                goto LAB_10015d696;
            bVar5 = (**(code**)(*plVar20 + 424))(plVar20);
            uVar10 = (uint)bVar5;
            goto LAB_10015ce8c;
        case 3153:
            uVar10 = TitleScreen::m_loadPos;
            goto LAB_10015ce8c;
        case 3154:
            iVar9 = field_104092;
            field_104092 = iVar9 + 1;
            puVar18 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar9);
            *puVar18 = 10000;
            break;
        case 3155:
            uVar28 = (long)(int)field_136096 - 1;
            field_136096 = (uint)uVar28;
            pbVar26 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&field_104096, uVar28);
            new (local_160) eastl::string(pbVar26);
            psVar17 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            plVar20 = (long*)(**(code**)(*plVar20 + 72))(plVar20);
            if (plVar20 == (long*)0) {
                uVar31 = 0;
                (&field_141000, 1)->Raise();
            } else {
                uVar31 = 1;
                (**(code**)(*plVar20 + 264))(plVar20, local_160);
            }
            goto LAB_10015d839;
        case 3156:
            psVar17 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            plVar20 = (long*)(**(code**)(*plVar20 + 72))(plVar20);
            if (plVar20 == (long*)0)
                goto LAB_10015d696;
            (**(code**)(*plVar20 + 272))(plVar20);
            break;
        case 3157:
            iVar9 = field_104092;
            uVar28 = (long)iVar9 - 2;
            field_104092 = (int)uVar28;
            puVar18 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            uVar8 = *puVar18;
            puVar18 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar9 - 1);
            uVar2 = *puVar18;
            psVar17 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            plVar20 = (long*)(**(code**)(*plVar20 + 72))(plVar20);
            uVar31 = 1;
            if (plVar20 != (long*)0) {
                (**(code**)(*plVar20 + 160))(plVar20, uVar8, uVar2);
            }
            goto switchD_10015b755_caseD_c2a;
        case 3158:
            psVar17 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            this_02 = (AnimationParameters*)(**(code**)(*plVar20 + 72))(plVar20);
            if (this_02 != (AnimationParameters*)0) {
                uVar10 = this_02->GetCurrentIndex();
                goto LAB_10015ce8a;
            }
            goto LAB_10015d696;
        case 3159:
            psVar17 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            this_03 = (AuthLibWrapper*)(**(code**)(*plVar20 + 72))(plVar20);
            if (this_03 != (AuthLibWrapper*)0) {
                uVar10 = this_03->GetShopDataStatus();
                goto LAB_10015ce8a;
            }
            goto LAB_10015d696;
        case 3160:
            psVar17 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            plVar20 = (long*)(**(code**)(*plVar20 + 72))(plVar20);
            if (plVar20 != (long*)0) {
                uVar10 = (**(code**)(*plVar20 + 280))(plVar20);
                goto LAB_10015ce8a;
            }
            goto LAB_10015d696;
        case 3161:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            puVar18 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            uVar8 = *puVar18;
            psVar17 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            plVar20 = (long*)(**(code**)(*plVar20 + 72))(plVar20);
            if (plVar20 == (long*)0)
                goto LAB_10015d696;
            uVar8 = (**(code**)(*plVar20 + 288))(plVar20, uVar8);
            goto LAB_10015cf5c;
        case 3162:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            puVar18 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            uVar8 = *puVar18;
            psVar17 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            plVar20 = (long*)(**(code**)(*plVar20 + 72))(plVar20);
            if (plVar20 == (long*)0)
                goto LAB_10015d696;
            uVar8 = (**(code**)(*plVar20 + 296))(plVar20, uVar8);
            goto LAB_10015cf5c;
        case 3163:
            uVar28 = (long)(int)field_136096 - 1;
            field_136096 = (uint)uVar28;
            pbVar26 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&field_104096, uVar28);
            new (local_160) eastl::string(pbVar26);
            psVar17 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            plVar20 = (long*)(**(code**)(*plVar20 + 72))(plVar20);
            if (plVar20 == (long*)0) {
                uVar31 = 0;
                (&field_141000, 1)->Raise();
            } else {
                uVar8 = (**(code**)(*plVar20 + 304))(plVar20, local_160);
                iVar9 = field_104092;
                field_104092 = iVar9 + 1;
                puVar18 =
                    (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar9);
                *puVar18 = uVar8;
                uVar31 = 1;
            }
        LAB_10015d839:
            local_160->~basic_string();
            goto switchD_10015b755_caseD_c2a;
        case 3164:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            puVar18 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            uVar8 = *puVar18;
            psVar17 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            plVar20 = (long*)(**(code**)(*plVar20 + 72))(plVar20);
            if (plVar20 == (long*)0)
                goto LAB_10015d696;
            (**(code**)(*plVar20 + 312))((basic_string*)local_160, plVar20, uVar8);
            uVar10 = field_136096;
            field_136096 = uVar10 + 1;
            pbVar25 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&field_104096, (long)(int)uVar10);
            eastl::string::operator=(pbVar25, (basic_string*)local_160);
            goto LAB_10015d5d8;
        case 3165:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            puVar18 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            uVar8 = *puVar18;
            psVar17 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            plVar20 = (long*)(**(code**)(*plVar20 + 72))(plVar20);
            if (plVar20 == (long*)0)
                goto LAB_10015d696;
            uVar8 = (**(code**)(*plVar20 + 320))(plVar20, uVar8);
        LAB_10015cf5c:
            iVar9 = field_104092;
            field_104092 = iVar9 + 1;
            puVar18 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar9);
            *puVar18 = uVar8;
            break;
        case 3166:
            iVar9 = field_104092;
            uVar28 = (long)iVar9 - 1;
            field_104092 = (int)uVar28;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            local_164 = *piVar23;
            uVar28 = (long)iVar9 - 2;
            field_104092 = (int)uVar28;
            puVar18 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            uVar8 = *puVar18;
            psVar17 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            plVar20 = (long*)(**(code**)(*plVar20 + 72))(plVar20);
            if (plVar20 == (long*)0)
                goto LAB_10015d696;
            bVar5 = (**(code**)(*plVar20 + 328))(plVar20, uVar8, local_164);
        LAB_10015d10e:
            uVar10 = (uint)bVar5;
            iVar9 = field_104092;
            field_104092 = iVar9 + 1;
            goto LAB_10015cea4;
        case 3167:
            iVar9 = field_104092;
            uVar28 = (long)iVar9 - 1;
            field_104092 = (int)uVar28;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            local_164 = *piVar23;
            uVar28 = (long)iVar9 - 2;
            field_104092 = (int)uVar28;
            puVar18 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            uVar8 = *puVar18;
            psVar17 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            plVar20 = (long*)(**(code**)(*plVar20 + 72))(plVar20);
            if (plVar20 != (long*)0) {
                bVar5 = (**(code**)(*plVar20 + 336))(plVar20, uVar8, local_164);
                goto LAB_10015d10e;
            }
        LAB_10015d696:
            (&field_141000, 1)->Raise();
            uVar31 = 0;
            goto switchD_10015b755_caseD_c2a;
        case 3168:
            iVar9 = field_104092;
            uVar28 = (long)iVar9 - 1;
            field_104092 = (int)uVar28;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            local_164 = *piVar23;
            uVar28 = (long)iVar9 - 2;
            field_104092 = (int)uVar28;
            puVar18 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            uVar8 = *puVar18;
            psVar17 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            plVar20 = (long*)(**(code**)(*plVar20 + 72))(plVar20);
            if (plVar20 == (long*)0)
                goto LAB_10015d696;
            (**(code**)(*plVar20 + 352))((basic_string*)local_160, plVar20, uVar8, local_164);
            puVar1 = &field_104096;
            uVar10 = field_136096;
            field_136096 = uVar10 + 1;
            pbVar25 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)puVar1, (long)(int)uVar10);
            eastl::string::operator=(pbVar25, (basic_string*)local_160);
            local_160->~basic_string();
            (**(code**)(*plVar20 + 344))((basic_string*)local_160, plVar20, uVar8, local_164);
            uVar10 = field_136096;
            field_136096 = uVar10 + 1;
            pbVar25 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)puVar1, (long)(int)uVar10);
            eastl::string::operator=(pbVar25, (basic_string*)local_160);
            local_160->~basic_string();
            (**(code**)(*plVar20 + 360))((basic_string*)local_160, plVar20, uVar8, local_164);
            uVar10 = field_136096;
            field_136096 = uVar10 + 1;
            pbVar25 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)puVar1, (long)(int)uVar10);
            eastl::string::operator=(pbVar25, (basic_string*)local_160);
            local_160->~basic_string();
            (**(code**)(*plVar20 + 384))((basic_string*)local_160, plVar20, uVar8, local_164);
            uVar10 = field_136096;
            field_136096 = uVar10 + 1;
            pbVar25 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)puVar1, (long)(int)uVar10);
            eastl::string::operator=(pbVar25, (basic_string*)local_160);
            local_160->~basic_string();
            (**(code**)(*plVar20 + 376))((basic_string*)local_160, plVar20, uVar8, local_164);
            uVar10 = field_136096;
            field_136096 = uVar10 + 1;
            pbVar25 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)puVar1, (long)(int)uVar10);
            eastl::string::operator=(pbVar25, (basic_string*)local_160);
            local_160->~basic_string();
            (**(code**)(*plVar20 + 392))((basic_string*)local_160, plVar20, uVar8, local_164);
            uVar10 = field_136096;
            field_136096 = uVar10 + 1;
            pbVar25 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)puVar1, (long)(int)uVar10);
            eastl::string::operator=(pbVar25, (basic_string*)local_160);
            local_160->~basic_string();
            (**(code**)(*plVar20 + 368))((basic_string*)local_160, plVar20, uVar8, local_164);
            uVar10 = field_136096;
            field_136096 = uVar10 + 1;
            pbVar25 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)puVar1, (long)(int)uVar10);
            eastl::string::operator=(pbVar25, (basic_string*)local_160);
            local_160->~basic_string();
            (**(code**)(*plVar20 + 400))((basic_string*)local_160, plVar20, uVar8, local_164);
            uVar10 = field_136096;
            field_136096 = uVar10 + 1;
            pbVar25 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)puVar1, (long)(int)uVar10);
            eastl::string::operator=(pbVar25, (basic_string*)local_160);
            local_160->~basic_string();
            (**(code**)(*plVar20 + 408))((basic_string*)local_160, plVar20, uVar8, local_164);
            uVar10 = field_136096;
            field_136096 = uVar10 + 1;
            pbVar25 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)puVar1, (long)(int)uVar10);
            eastl::string::operator=(pbVar25, (basic_string*)local_160);
            goto LAB_10015d5d8;
        case 3169:
            psVar17 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            plVar20 = (long*)(**(code**)(*plVar20 + 72))(plVar20);
            uVar31 = 1;
            if (plVar20 != (long*)0) {
                (**(code**)(*plVar20 + 200))(plVar20);
            }
            goto switchD_10015b755_caseD_c2a;
        case 3170:
            uVar28 = (long)(int)field_136096 - 2;
            field_136096 = (uint)uVar28;
            pbVar26 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&field_104096, uVar28);
            new (local_160) eastl::string(pbVar26);
            pbVar26 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&field_104096, (long)(int)field_136096 + 1);
            eastl::string::basic_string(local_188, pbVar26);
            iVar9 = field_104092;
            uVar28 = (long)iVar9 - 2;
            field_104092 = (int)uVar28;
            puVar1 = &field_100092;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, uVar28);
            local_164 = *piVar23;
            puVar18 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, (long)iVar9 - 1);
            uVar8 = *puVar18;
            psVar17 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            plVar20 = (long*)(**(code**)(*plVar20 + 72))(plVar20);
            if (plVar20 != (long*)0) {
                uVar8 = (**(code**)(*plVar20 + 448))(plVar20, local_160, local_188, local_164, uVar8);
                iVar9 = field_104092;
                field_104092 = iVar9 + 1;
                puVar18 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, (long)iVar9);
                *puVar18 = uVar8;
            }
            goto LAB_10015d5cc;
        case 3171:
            uVar28 = (long)(int)field_136096 - 3;
            field_136096 = (uint)uVar28;
            puVar1 = &field_104096;
            pbVar26 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)puVar1, uVar28);
            new (local_160) eastl::string(pbVar26);
            pbVar26 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)puVar1, (long)(int)field_136096 + 1);
            eastl::string::basic_string(local_188, pbVar26);
            pbVar26 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)puVar1, (long)(int)field_136096 + 2);
            new (local_1b0) eastl::string(pbVar26);
            lVar32 = (long)field_104092;
            field_104092 = (int)(lVar32 - 3U);
            puVar1 = &field_100092;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, lVar32 - 3U);
            local_164 = *piVar23;
            puVar18 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, lVar32 - 2);
            uVar8 = *puVar18;
            puVar18 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, lVar32 - 1);
            uVar2 = *puVar18;
            psVar17 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            plVar20 = (long*)(**(code**)(*plVar20 + 72))(plVar20);
            if (plVar20 != (long*)0) {
                uVar8 = (**(code**)(*plVar20 + 456))(plVar20, local_160, local_188, local_164, uVar8, local_1b0, uVar2);
                iVar9 = field_104092;
                field_104092 = iVar9 + 1;
                puVar18 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, (long)iVar9);
                *puVar18 = uVar8;
            }
            local_1b0->~basic_string();
        LAB_10015d5cc:
            eastl::string::~basic_string(local_188);
        LAB_10015d5d8:
            pbVar25 = (eastl::string*)local_160;
        LAB_10015d5df:
            eastl::string::~basic_string(pbVar25);
            break;
        case 3172:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            puVar18 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            uVar8 = *puVar18;
            psVar17 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            plVar20 = (long*)(**(code**)(*plVar20 + 72))(plVar20);
            uVar31 = 1;
            if (plVar20 != (long*)0) {
                (**(code**)(*plVar20 + 464))(plVar20, uVar8);
            }
            goto switchD_10015b755_caseD_c2a;
        case 3173:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            puVar18 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            uVar8 = *puVar18;
            psVar17 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            plVar20 = (long*)(**(code**)(*plVar20 + 72))(plVar20);
            uVar31 = 1;
            if (plVar20 != (long*)0) {
                uVar8 = (**(code**)(*plVar20 + 480))(plVar20, uVar8);
                iVar9 = field_104092;
                field_104092 = iVar9 + 1;
                puVar18 =
                    (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar9);
                *puVar18 = uVar8;
            }
            goto switchD_10015b755_caseD_c2a;
        case 3174:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            puVar18 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            uVar8 = *puVar18;
            psVar17 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            plVar20 = (long*)(**(code**)(*plVar20 + 72))(plVar20);
            uVar31 = 1;
            if (plVar20 != (long*)0) {
                (**(code**)(*plVar20 + 472))(plVar20, uVar8);
            }
            goto switchD_10015b755_caseD_c2a;
        case 3175:
            psVar17 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            plVar20 = (long*)(**(code**)(*plVar20 + 72))(plVar20);
            uVar31 = 1;
            if (plVar20 != (long*)0) {
                uVar8 = (**(code**)(*plVar20 + 496))(plVar20);
                iVar9 = field_104092;
                field_104092 = iVar9 + 1;
                puVar18 =
                    (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar9);
                *puVar18 = uVar8;
            }
            goto switchD_10015b755_caseD_c2a;
        case 3176:
            psVar17 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            plVar20 = (long*)(**(code**)(*plVar20 + 72))(plVar20);
            uVar31 = 1;
            if (plVar20 != (long*)0) {
                (**(code**)(*plVar20 + 488))(plVar20);
            }
            goto switchD_10015b755_caseD_c2a;
        case 3177:
            psVar17 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            plVar20 = (long*)(**(code**)(*plVar20 + 72))(plVar20);
            if (plVar20 == (long*)0)
                goto LAB_10015d696;
            (**(code**)(*plVar20 + 168))(plVar20);
            break;
        case 3178:
            field_136096 = field_136096 - 1;
            psVar17 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            plVar20 = (long*)(**(code**)(*plVar20 + 72))(plVar20);
            uVar31 = 1;
            if (plVar20 != (long*)0) {
                uVar29 = std::array<eastl::string, 1000ul>::operator[]((array<eastl::string, 1000ul>*)&field_104096,
                                                                       (long)(int)field_136096);
                (**(code**)(*plVar20 + 224))(plVar20, uVar29);
            }
            goto switchD_10015b755_caseD_c2a;
        case 3179:
            psVar17 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            plVar20 = (long*)(**(code**)(*plVar20 + 72))(plVar20);
            uVar31 = 1;
            if (plVar20 != (long*)0) {
                (**(code**)(*plVar20 + 176))(plVar20);
            }
            goto switchD_10015b755_caseD_c2a;
        case 3180:
            field_136096 = field_136096 - 1;
            psVar17 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
            plVar20 = (long*)shared_ptr<ApplicationContext>::operator->(psVar17);
            plVar20 = (long*)(**(code**)(*plVar20 + 72))(plVar20);
            uVar31 = 1;
            if (plVar20 != (long*)0) {
                uVar29 = std::array<eastl::string, 1000ul>::operator[]((array<eastl::string, 1000ul>*)&field_104096,
                                                                       (long)(int)field_136096);
                (**(code**)(*plVar20 + 232))(plVar20, uVar29);
            }
            goto switchD_10015b755_caseD_c2a;
        case 3181:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            puVar18 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            uVar8 = *puVar18;
            pDVar19 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&this_00
                            ->field_8376);
            plVar20 = (long*)pDVar19->GetScriptOption(6);
            uVar31 = 1;
            if (plVar20 != (long*)0) {
                (**(code**)(*plVar20 + 16))(plVar20, uVar8);
            }
            goto switchD_10015b755_caseD_c2a;
        case 3182:
            pDVar19 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&this_00
                            ->field_8376);
            plVar20 = (long*)pDVar19->GetScriptOption(6);
            if (plVar20 != (long*)0) {
                uVar10 = (**(code**)(*plVar20 + 24))(plVar20);
                goto LAB_10015ce8a;
            }
            uVar10 = 0;
            goto LAB_10015ce8c;
        case 3183:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            this_00->field_54384 = *piVar23 != 0;
            break;
        case 3184:
            uVar10 = (uint)this_00->field_54384;
            goto LAB_10015ce8c;
        case 3185:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            iVar9 = std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&this_00->field_19184);
            dash3d::world::SetDrawDistance(iVar9);
            break;
        case 3186:
            std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&this_00->field_19184);
            uVar10 = dash3d::world::GetDrawDistance();
        LAB_10015ce8a:
        LAB_10015ce8c:
            iVar9 = field_104092;
            field_104092 = iVar9 + 1;
        LAB_10015cea4:
            puVar24 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar9);
            *puVar24 = uVar10;
            break;
        case 3187:
            field_136096 = field_136096 - 2;
            std::unique_ptr<DiscordMain, std::default_delete<DiscordMain>>::operator->(
                (unique_ptr<DiscordMain, std::default_delete<DiscordMain>>*)&this_00->field_8400);
            cVar6 = DiscordMain::GetIsDiscordInitialized();
            if (cVar6 == '\0') {
                uVar31 = logger::default_logger();
                pcVar30 = "Discord is not initialized, activity can\'t be set.";
                uVar29 = 881;
            LAB_10015d7f6:
                logger::Logger::Log(uVar31, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/ScriptRunnerImpl_3100To3199.cpp",
                                    uVar29, pcVar30);
            } else {
                uVar10 = field_136096;
                pbVar26 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                    (array<eastl::string, 1000ul>*)&field_104096, (long)(int)uVar10);
                std::array<eastl::string, 1000ul>::operator[]((array<eastl::string, 1000ul>*)&field_104096,
                                                              (long)(int)uVar10 + 1);
                pDVar21 = (DiscordMain*)std::unique_ptr<DiscordMain, std::default_delete<DiscordMain>>::operator->(
                    (unique_ptr<DiscordMain, std::default_delete<DiscordMain>>*)&this_00->field_8400);
                puVar22 = (unique_ptr<DiscordRichPresence, std::default_delete<DiscordRichPresence>>*)
                              pDVar21->GetDiscordRichPresenceModule();
                pbVar27 =
                    (basic_string*)
                        std::unique_ptr<DiscordRichPresence, std::default_delete<DiscordRichPresence>>::operator->(
                            puVar22);
                DiscordRichPresence::SetDiscordActivityDetails(pbVar27, pbVar26);
            }
            break;
        case 3188:
            std::unique_ptr<DiscordMain, std::default_delete<DiscordMain>>::operator->(
                (unique_ptr<DiscordMain, std::default_delete<DiscordMain>>*)&this_00->field_8400);
            cVar6 = DiscordMain::GetIsDiscordInitialized();
            if (cVar6 == '\0') {
                uVar31 = logger::default_logger();
                pcVar30 = "Discord is not initialized, activity can\'t be unset.";
                uVar29 = 894;
                goto LAB_10015d7f6;
            }
            pDVar21 = (DiscordMain*)std::unique_ptr<DiscordMain, std::default_delete<DiscordMain>>::operator->(
                (unique_ptr<DiscordMain, std::default_delete<DiscordMain>>*)&this_00->field_8400);
            puVar22 = (unique_ptr<DiscordRichPresence, std::default_delete<DiscordRichPresence>>*)
                          pDVar21->GetDiscordRichPresenceModule();
            std::unique_ptr<DiscordRichPresence, std::default_delete<DiscordRichPresence>>::operator->(puVar22);
            DiscordRichPresence::UnsetDiscordActivityDetails();
            break;
        case 3189:
            uVar28 = (long)field_104092 - 1;
            field_104092 = (int)uVar28;
            piVar23 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar28);
            this_00->PreloadKeyFrameSet(*piVar23);
        }
        uVar31 = 1;
    switchD_10015b755_caseD_c2a:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar31;
    }

} // namespace jag::oldscape
