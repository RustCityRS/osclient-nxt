// projects/osclient/client_network.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "client.h"

namespace jag::oldscape {
    // 0x1000ccf80, 5568 bytes, placed by class name and debug map
    // Client::LoginPoll()
    void Client::LoginPoll() {
        undefined1* this_00;
        undefined8* this_01;
        undefined1* this_02;
        undefined1* this_03;
        SuperPacket* this_04;
        bool bVar1;
        char cVar2;
        short sVar3;
        int iVar4;
        undefined4 uVar5;
        uint uVar6;
        long lVar7;
        SecureRandom* pSVar8;
        ServerConnection* pSVar9;
        _func_decltype_nullptr* p_Var10;
        LoginManager* pLVar11;
        int* piVar12;
        long* plVar13;
        undefined4* puVar14;
        GameToken* this_05;
        basic_string* pbVar15;
        basic_string* pbVar16;
        basic_string* pbVar17;
        TotpPassCodes* pTVar18;
        DeviceOptions* this_06;
        char* pcVar19;
        uchar* puVar20;
        ulong uVar21;
        vector<unsigned int, eastl::allocator>* this_07;
        undefined8 uVar22;
        int* piVar23;
        ShuffledPacket2* pSVar24;
        ShuffledPacket4* pSVar25;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* pPVar26;
        ShuffledPacket3* pSVar27;
        undefined8 extraout_RDX;
        array<eastl::string, 3ul>* this_08;
        unique_ptr* in_RSI;
        longlong lVar28;
        unique_ptr<LoginState, std::default_delete<LoginState>>* this_09;
        undefined1 auVar29[16];
        eastl::string local_1e8[32];
        undefined1 local_1c8[80];
        SuperShuffledPacketFactory local_178;
        unique_ptr<LoginState, std::default_delete<LoginState>> local_168[8];
        undefined1 local_160[8];
        SuperPacket local_158[6];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = &field_19120;
        bVar1 = std::operator==((unique_ptr*)this_00, (_func_decltype_nullptr*)in_RSI);
        if (bVar1) {
            std::make_unique<ServerConnection>();
            in_RSI = (unique_ptr*)local_160;
            std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator=(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)this_00, (unique_ptr*)local_160);
            local_160->~unique_ptr();
            lVar7 = Singleton<SecureRandom>::InstancePtr();
            if (lVar7 == 0) {
                pSVar8 = operator_new(320);
                SecureRandom::SecureRandom(pSVar8);
                lVar7 = Singleton<SecureRandom>::InstancePtr();
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("SecureRandom::InstancePtr() != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                              "client_network.cpp",
                              84, (char*)0);
                }
            }
        }
        pSVar9 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)this_00);
        iVar4 = pSVar9->GetConnectionState();
        if (iVar4 == 1) {
            p_Var10 = (_func_decltype_nullptr*)
                          std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                              (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)this_00);
            pSVar9 = (ServerConnection*)local_168;
            pSVar9->ConsumeUpdatedLoginState();
            bVar1 = std::operator!=((unique_ptr*)pSVar9, p_Var10);
            if (bVar1) {
                (&field_1104120)->MarkServerDataSeen();
                this_09 = local_168;
                puVar14 =
                    (undefined4*)std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator->(this_09);
                switch (*puVar14) {
                case 1:
                    pSVar9 = (ServerConnection*)
                                 std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                     (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)this_00);
                    iVar4 = pSVar9->GetConnectionState();
                    if (iVar4 != 2) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("m_gameCon->GetConnectionState() == ConnectionState::CONNECTING_IDLE",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "client_network.cpp",
                                  181, (char*)0);
                    }
                    pSVar8 = (SecureRandom*)pSVar9->Instance();
                    ((local_1c8 + 48))->PacketT(500);
                    uVar5 = pSVar8->GetInt();
                    lVar7 = std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator->(local_168);
                    puVar14 = (undefined4*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)(lVar7 + 432), 0);
                    *puVar14 = uVar5;
                    uVar5 = pSVar8->GetInt();
                    lVar7 = std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator->(local_168);
                    puVar14 = (undefined4*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)(lVar7 + 432), 1);
                    *puVar14 = uVar5;
                    uVar5 = pSVar8->GetInt();
                    lVar7 = std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator->(local_168);
                    puVar14 = (undefined4*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)(lVar7 + 432), 2);
                    *puVar14 = uVar5;
                    uVar5 = pSVar8->GetInt();
                    lVar7 = std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator->(local_168);
                    puVar14 = (undefined4*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)(lVar7 + 432), 3);
                    *puVar14 = uVar5;
                    PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                        (PacketT<Array<unsigned char, eastl::allocator>>*)(local_1c8 + 48), 1);
                    lVar7 = std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator->(local_168);
                    piVar12 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)(lVar7 + 432), 0);
                    PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
                        (PacketT<Array<unsigned char, eastl::allocator>>*)(local_1c8 + 48), *piVar12);
                    lVar7 = std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator->(local_168);
                    piVar12 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)(lVar7 + 432), 1);
                    PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
                        (PacketT<Array<unsigned char, eastl::allocator>>*)(local_1c8 + 48), *piVar12);
                    lVar7 = std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator->(local_168);
                    piVar12 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)(lVar7 + 432), 2);
                    PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
                        (PacketT<Array<unsigned char, eastl::allocator>>*)(local_1c8 + 48), *piVar12);
                    lVar7 = std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator->(local_168);
                    piVar12 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)(lVar7 + 432), 3);
                    PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
                        (PacketT<Array<unsigned char, eastl::allocator>>*)(local_1c8 + 48), *piVar12);
                    lVar7 = std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator->(local_168);
                    lVar28 = 3203386110;
                    if (field_54712 == 0) {
                        lVar28 = *(longlong*)(lVar7 + 112);
                    }
                    PacketT<Array<unsigned char, eastl::allocator>>::p8<long long>(
                        (PacketT<Array<unsigned char, eastl::allocator>>*)(local_1c8 + 48), lVar28);
                    if (field_8448 == 40) {
                        this_01 = &field_55200;
                        piVar12 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)this_01, 0);
                        PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
                            (PacketT<Array<unsigned char, eastl::allocator>>*)(local_1c8 + 48), *piVar12);
                        piVar12 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)this_01, 1);
                        PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
                            (PacketT<Array<unsigned char, eastl::allocator>>*)(local_1c8 + 48), *piVar12);
                        piVar12 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)this_01, 2);
                        PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
                            (PacketT<Array<unsigned char, eastl::allocator>>*)(local_1c8 + 48), *piVar12);
                        piVar12 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)this_01, 3);
                        PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
                            (PacketT<Array<unsigned char, eastl::allocator>>*)(local_1c8 + 48), *piVar12);
                    } else {
                        if (TitleScreen::m_dobSubmitted == '\0') {
                            PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                (PacketT<Array<unsigned char, eastl::allocator>>*)(local_1c8 + 48),
                                (ulong)(byte)field_55056);
                            switch (field_55056) {
                            case 0:
                                pTVar18 =
                                    (TotpPassCodes*)
                                        std::unique_ptr<TotpPassCodes, std::default_delete<TotpPassCodes>>::operator->((
                                            unique_ptr<TotpPassCodes, std::default_delete<TotpPassCodes>>*)&field_8392);
                                pLVar11 =
                                    (LoginManager*)
                                        std::unique_ptr<LoginManager, std::default_delete<LoginManager>>::operator->(
                                            (unique_ptr<LoginManager,
                                                        std::default_delete<LoginManager>>*)&field_2506376);
                                iVar4 = pLVar11->GetAuthenticatorUserHash();
                                iVar4 = pTVar18->GetTotpPassCode(iVar4);
                                PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
                                    (PacketT<Array<unsigned char, eastl::allocator>>*)(local_1c8 + 48), iVar4);
                                break;
                            case 1:
                            case 3:
                                PacketT<Array<unsigned char, eastl::allocator>>::p3<int>(
                                    (PacketT<Array<unsigned char, eastl::allocator>>*)(local_1c8 + 48),
                                    TitleScreen::m_loginTotpPin);
                                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                    (PacketT<Array<unsigned char, eastl::allocator>>*)(local_1c8 + 48), 0);
                                break;
                            case 2:
                            case 4:
                                PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
                                    (PacketT<Array<unsigned char, eastl::allocator>>*)(local_1c8 + 48), 0);
                            }
                        } else {
                            TitleScreen::m_dobSubmitted = '\0';
                            PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                (PacketT<Array<unsigned char, eastl::allocator>>*)(local_1c8 + 48), 4);
                            PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
                                (PacketT<Array<unsigned char, eastl::allocator>>*)(local_1c8 + 48),
                                TitleScreen::m_dobInput);
                        }
                        pLVar11 =
                            (LoginManager*)std::unique_ptr<LoginManager, std::default_delete<LoginManager>>::operator->(
                                (unique_ptr<LoginManager, std::default_delete<LoginManager>>*)&field_2506376);
                        pLVar11->PackLoginRSAData((PacketJ*)(local_1c8 + 48));
                    }
                    ((local_1c8 + 48))
                        ->rsaEncrypt((BigInteger*)&ClientKeys::login_rsae, (BigInteger*)&ClientKeys::login_rsan);
                    lVar7 = std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator->(local_168);
                    uVar22 = *(undefined8*)(lVar7 + 440);
                    field_55200 = *(undefined8*)(lVar7 + 432);
                    field_55208 = uVar22;
                    local_160->MakeClientMessage();
                    if (field_8448 == 40) {
                        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_160 + 8));
                    } else {
                        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_160 + 8));
                    }
                    this_04 = (SuperPacket*)(local_160 + 8);
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
                        (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this_04, 0);
                    local_1c8._32_8_ = this_04->size();
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
                        (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this_04, 216);
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
                        (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this_04, 1);
                    uVar5 = rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2::GetID();
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                        (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this_04, uVar5);
                    uVar5 = GetPublishingPlatformType();
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                        (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this_04, uVar5);
                    pLVar11 = (LoginManager*)GetLoginManager(this);
                    auVar29 = pLVar11->GetAuthWrapper();
                    uVar22 = auVar29._8_8_;
                    plVar13 = auVar29._0_8_;
                    if (plVar13 == (long*)0) {
                        uVar6 = 0;
                    } else {
                        uVar6 = (**(code**)(*plVar13 + 536))(plVar13);
                        uVar22 = extraout_RDX;
                    }
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<signed char>(this_04, uVar6 & 255, uVar22,
                                                                                         uVar6);
                    puVar20 = (uchar*)((local_1c8 + 48))->GetDataPtr();
                    uVar21 = ((local_1c8 + 48))->size();
                    this_04->pArrayBuffer(puVar20, 0, uVar21);
                    local_1c8._40_8_ = this_04->size();
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(
                        (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this_04,
                        (basic_string*)&TitleScreen::m_loginUser, false);
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                        (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this_04,
                        (uint)m_lowMem | (uint)field_52456 * 2);
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
                        (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this_04, javapal::GameShell::m_sWid);
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
                        (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this_04, javapal::GameShell::m_sHei);
                    SerialiseCurrentPackedUIDToPacket(this, this_04);
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(
                        (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this_04, (basic_string*)&field_54792,
                        false);
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
                        (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this_04, field_54824);
                    iVar4 = GetServerMajorVersion(this);
                    if (213 < iVar4) {
                        this_07 = (vector<unsigned int, eastl::allocator>*)GetDeepLinkingIDs(this);
                        uVar22 = eastl::vector<unsigned int, eastl::allocator>::size(this_07);
                        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this_04, uVar22);
                        piVar12 = (int*)this_07->HeapBeginPtr();
                        piVar23 = (int*)this_07->end();
                        for (; piVar12 != piVar23; piVar12 = piVar12 + 1) {
                            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
                                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this_04, *piVar12);
                        }
                    }
                    local_1c8->Serialise();
                    puVar20 = (uchar*)local_1c8->GetDataPtr();
                    uVar21 = local_1c8->GetTextureAtlas();
                    this_04->pArrayBuffer(puVar20, 0, uVar21);
                    uVar5 = rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2::GetID();
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                        (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this_04, uVar5);
                    iVar4 = 1662957473;
                    if (field_8425 == false) {
                        iVar4 = 596936697;
                    }
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
                        (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this_04, iVar4);
                    new (&local_178) SuperShuffledPacketFactory(this_04);
                    pSVar24 = (ShuffledPacket2*)local_178.p2_alt2();
                    uVar6 = field_54432->GetCompletedGold();
                    ShuffledPacket2::p4<unsigned int>(pSVar24, uVar6);
                    pSVar24 = (ShuffledPacket2*)local_178.p2_alt2();
                    uVar6 = field_54512->GetCompletedGold();
                    ShuffledPacket2::p4<unsigned int>(pSVar24, uVar6);
                    pSVar24 = (ShuffledPacket2*)local_178.p2_alt2();
                    uVar6 = field_54504->GetCompletedGold();
                    ShuffledPacket2::p4<unsigned int>(pSVar24, uVar6);
                    pSVar24 = (ShuffledPacket2*)local_178.p2_alt2();
                    uVar6 = field_54464->GetCompletedGold();
                    ShuffledPacket2::p4<unsigned int>(pSVar24, uVar6);
                    pSVar24 = (ShuffledPacket2*)local_178.p2_alt2();
                    uVar6 = field_54480->GetCompletedGold();
                    ShuffledPacket2::p4<unsigned int>(pSVar24, uVar6);
                    pSVar25 = (ShuffledPacket4*)local_178.p2_alt2();
                    uVar6 = field_54416->GetCompletedGold();
                    ShuffledPacket4::p4<unsigned int>(pSVar25, uVar6);
                    pPVar26 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_178.p2_alt2();
                    iVar4 = field_54536->GetCompletedGold();
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(pPVar26, iVar4);
                    pSVar27 = (ShuffledPacket3*)local_178.p2_alt2();
                    uVar6 = m_pJagFx->GetCompletedGold();
                    ShuffledPacket3::p4<unsigned int>(pSVar27, uVar6);
                    pPVar26 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_178.p2_alt2();
                    iVar4 = field_54392->GetCompletedGold();
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(pPVar26, iVar4);
                    pSVar24 = (ShuffledPacket2*)local_178.p2_alt2();
                    uVar6 = field_54544->GetCompletedGold();
                    ShuffledPacket2::p4<unsigned int>(pSVar24, uVar6);
                    pSVar24 = (ShuffledPacket2*)local_178.p2_alt2();
                    ShuffledPacket2::p4<unsigned int>(pSVar24, 0);
                    pSVar25 = (ShuffledPacket4*)local_178.p2_alt2();
                    uVar6 = field_54520->GetCompletedGold();
                    ShuffledPacket4::p4<unsigned int>(pSVar25, uVar6);
                    pSVar24 = (ShuffledPacket2*)local_178.p2_alt2();
                    uVar6 = field_54496->GetCompletedGold();
                    ShuffledPacket2::p4<unsigned int>(pSVar24, uVar6);
                    pSVar27 = (ShuffledPacket3*)local_178.p2_alt2();
                    uVar6 = field_54472->GetCompletedGold();
                    ShuffledPacket3::p4<unsigned int>(pSVar27, uVar6);
                    pSVar24 = (ShuffledPacket2*)local_178.p2_alt2();
                    uVar6 = field_54408->GetCompletedGold();
                    ShuffledPacket2::p4<unsigned int>(pSVar24, uVar6);
                    pSVar25 = (ShuffledPacket4*)local_178.p2_alt2();
                    uVar6 = field_54400->GetCompletedGold();
                    ShuffledPacket4::p4<unsigned int>(pSVar25, uVar6);
                    pSVar27 = (ShuffledPacket3*)local_178.p2_alt2();
                    uVar6 = m_pMidi->GetCompletedGold();
                    ShuffledPacket3::p4<unsigned int>(pSVar27, uVar6);
                    pPVar26 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_178.p2_alt2();
                    iVar4 = field_54528->GetCompletedGold();
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(pPVar26, iVar4);
                    pSVar27 = (ShuffledPacket3*)local_178.p2_alt2();
                    uVar6 = field_54448->GetCompletedGold();
                    ShuffledPacket3::p4<unsigned int>(pSVar27, uVar6);
                    pSVar25 = (ShuffledPacket4*)local_178.p2_alt2();
                    uVar6 = m_pSprites->GetCompletedGold();
                    ShuffledPacket4::p4<unsigned int>(pSVar25, uVar6);
                    pPVar26 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_178.p2_alt2();
                    iVar4 = m_pClientScripts->GetCompletedGold();
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(pPVar26, iVar4);
                    lVar7 = std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator->(local_168);
                    uVar21 = this_04->size();
                    this_04->tinyKeyEncrypt((array*)(lVar7 + 432), local_1c8._40_8_, uVar21);
                    sVar3 = this_04->size();
                    this_04->pSize2(sVar3 - local_1c8._32_2_);
                    lVar7 = std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator->(local_168);
                    shared::ClientMessage::operator=((ClientMessage*)(lVar7 + 48), (ClientMessage*)local_160);
                    pSVar9 = (ServerConnection*)
                                 std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                     (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)this_00);
                    pSVar9->BeginAsyncConnectionWork(local_168);
                    local_1c8->~PacketT();
                    local_160->~ClientMessage();
                    ((local_1c8 + 48))->~WindowSavedPosition();
                    break;
                default:
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    546, "Unexpected login state (%d)");
                case 5:
                    pSVar9 = (ServerConnection*)
                                 std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                     (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)this_00);
                    iVar4 = pSVar9->GetConnectionState();
                    if (iVar4 != 2) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("m_gameCon->GetConnectionState() == ConnectionState::CONNECTING_IDLE",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "client_network.cpp",
                                  524, (char*)0);
                    }
                    pLVar11 = (LoginManager*)GetLoginManager(this);
                    plVar13 = (long*)pLVar11->GetAuthWrapper();
                    lVar7 = std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator->(local_168);
                    if (*(char*)(lVar7 + 41) != '\0') {
                        pLVar11 =
                            (LoginManager*)std::unique_ptr<LoginManager, std::default_delete<LoginManager>>::operator->(
                                (unique_ptr<LoginManager, std::default_delete<LoginManager>>*)&field_2506376);
                        cVar2 = pLVar11->IsOneTimeLoginTokenRequested();
                        if (cVar2 == '\0') {
                            /* WARNING: Subroutine does not return */
                            LogAssert("m_loginManager->IsOneTimeLoginTokenRequested()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                      "osclient/client_network.cpp",
                                      529, (char*)0);
                        }
                        if (plVar13 == (long*)0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("authLibWrapper != nullptr",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                      "osclient/client_network.cpp",
                                      530, (char*)0);
                        }
                        lVar7 = std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator->(local_168);
                        (**(code**)(*plVar13 + 32))(plVar13, lVar7 + 136, lVar7 + 168, lVar7 + 200, lVar7 + 232);
                    }
                    pLVar11 =
                        (LoginManager*)std::unique_ptr<LoginManager, std::default_delete<LoginManager>>::operator->(
                            (unique_ptr<LoginManager, std::default_delete<LoginManager>>*)&field_2506376);
                    uVar5 = pLVar11->GetAuthenticatorUserHash();
                    lVar7 = std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator->(local_168);
                    eastl::string::basic_string(local_1e8, (basic_string*)(lVar7 + 264));
                    TitleScreen::SetLoginCredentials(uVar5, local_1e8);
                    eastl::string::~basic_string(local_1e8);
                    if (plVar13 != (long*)0) {
                        lVar7 = std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator->(local_168);
                        (**(code**)(*plVar13 + 216))(plVar13, *(undefined8*)(lVar7 + 424));
                    }
                    pSVar9 = (ServerConnection*)
                                 std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                     (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)this_00);
                    pSVar9->BeginAsyncConnectionWork(local_168);
                    break;
                case 7:
                    field_55040 = puVar14[33];
                    lVar7 = this_09->CurrentTimeMillis();
                    field_55032 = lVar7;
                    ((local_1c8 + 48))->to_string(field_55040 / 60);
                    eastl::operator+((eastl*)local_160, (basic_string*)(local_1c8 + 48),
                                     (basic_string*)&constants::text::loginhop_c);
                    TitleScreen::LoginMes((basic_string*)&constants::text::loginhop_a,
                                          (basic_string*)&constants::text::loginhop_b, (basic_string*)local_160);
                    local_160->~basic_string();
                    ((local_1c8 + 48))->~basic_string();
                    pSVar9 = (ServerConnection*)
                                 std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                     (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)this_00);
                    iVar4 = pSVar9->GetConnectionState();
                    if (iVar4 != 0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("m_gameCon->GetConnectionState() == ConnectionState::DISCONNECTED",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "client_network.cpp",
                                  401, (char*)0);
                    }
                    break;
                case 12:
                    pSVar9 = (ServerConnection*)
                                 std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                     (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)this_00);
                    iVar4 = pSVar9->GetConnectionState();
                    if (iVar4 != 0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("m_gameCon->GetConnectionState() == ConnectionState::DISCONNECTED",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "client_network.cpp",
                                  480, (char*)0);
                    }
                    lVar7 = std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator->(local_168);
                    this_08 = (array<eastl::string, 3ul>*)(lVar7 + 296);
                    pbVar15 = (basic_string*)std::array<eastl::string, 3ul>::operator[](this_08, 0);
                    pbVar16 = (basic_string*)std::array<eastl::string, 3ul>::operator[](this_08, 1);
                    pbVar17 = (basic_string*)std::array<eastl::string, 3ul>::operator[](this_08, 2);
                    TitleScreen::LoginMes(pbVar15, pbVar16, pbVar17);
                    SetMainState(this, 10);
                    pLVar11 =
                        (LoginManager*)std::unique_ptr<LoginManager, std::default_delete<LoginManager>>::operator->(
                            (unique_ptr<LoginManager, std::default_delete<LoginManager>>*)&field_2506376);
                    cVar2 = pLVar11->IsRefreshTokenAvailable();
                    if (cVar2 != '\0') {
                        cVar2 = TitleScreen::HasLoginMessage();
                        if (cVar2 == '\0') {
                            pLVar11 = (LoginManager*)GetLoginManager(this);
                            pLVar11->ResetLoginCredentials();
                            pLVar11 = (LoginManager*)GetLoginManager(this);
                            pLVar11->InvalidateRefreshToken();
                            TitleScreen::MoveToInitialScreen(true, true);
                        } else {
                            TitleScreen::m_loginscreen = 9;
                        }
                    }
                    break;
                case 16:
                    pSVar9 = (ServerConnection*)
                                 std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                     (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)this_00);
                    iVar4 = pSVar9->GetConnectionState();
                    if (iVar4 != 3) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("m_gameCon->GetConnectionState() == ConnectionState::CONNECTED",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "client_network.cpp",
                                  407, (char*)0);
                    }
                    lVar7 = std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator->(local_168);
                    if (*(char*)(lVar7 + 392) != '\0') {
                        pLVar11 =
                            (LoginManager*)std::unique_ptr<LoginManager, std::default_delete<LoginManager>>::operator->(
                                (unique_ptr<LoginManager, std::default_delete<LoginManager>>*)&field_2506376);
                        iVar4 = pLVar11->GetAuthenticatorUserHash();
                        if (iVar4 != 0) {
                            pTVar18 =
                                (TotpPassCodes*)
                                    std::unique_ptr<TotpPassCodes, std::default_delete<TotpPassCodes>>::operator->(
                                        (unique_ptr<TotpPassCodes, std::default_delete<TotpPassCodes>>*)&field_8392);
                            lVar7 = std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator->(local_168);
                            pTVar18->PutTotpPassCode(iVar4, *(int*)(lVar7 + 396));
                        }
                    }
                    cVar2 = field_19104;
                    this_06 =
                        (DeviceOptions*)std::unique_ptr<option::DeviceOptions,
                                                        std::default_delete<option::DeviceOptions>>::
                        operator->((
                            unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
                    if (cVar2 == '\0') {
                        new (local_160) eastl::fixed_string<char, 256, true, eastl::allocator>("");
                        this_06->SetCachedUserName(local_160);
                    } else {
                        pcVar19 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        new (local_160) eastl::fixed_string<char, 256, true, eastl::allocator>(pcVar19);
                        this_06->SetCachedUserName(local_160);
                    }
                    /* WARNING: Subroutine does not return */
                    local_160->~fixed_string();
                case 17:
                    pSVar9 = (ServerConnection*)
                                 std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                     (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)this_00);
                    iVar4 = pSVar9->GetConnectionState();
                    if (iVar4 != 3) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("m_gameCon->GetConnectionState() == ConnectionState::CONNECTED",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "client_network.cpp",
                                  470, (char*)0);
                    }
                    (&field_1104120)->MarkReconnectComplete();
                    ReconnectDone(this);
                    lVar7 = std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator->(local_168);
                    ReceivePlayerPositions::GetAbsolutePlayerPositions((SuperPacket*)(lVar7 + 456));
                    break;
                case 18:
                    pSVar9 = (ServerConnection*)
                                 std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                     (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)this_00);
                    iVar4 = pSVar9->GetConnectionState();
                    if (iVar4 != 0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("m_gameCon->GetConnectionState() == ConnectionState::DISCONNECTED",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "client_network.cpp",
                                  517, (char*)0);
                    }
                    lVar7 = std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator->(local_168);
                    LoginError(this, *(int*)(lVar7 + 128));
                    break;
                case 19:
                    pSVar9 = (ServerConnection*)
                                 std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                     (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)this_00);
                    iVar4 = pSVar9->GetConnectionState();
                    if (iVar4 != 2) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("m_gameCon->GetConnectionState() == ConnectionState::CONNECTING_IDLE",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "client_network.cpp",
                                  507, (char*)0);
                    }
                    SetMainState(this, 10);
                    SwitchToPendingTransactions();
                }
            } else {
                lVar7 = pSVar9->CurrentTimeMillis();
                if (40000 < lVar7 - field_55032) {
                    field_55032 = lVar7;
                }
            }
            std::unique_ptr<LoginState, std::default_delete<LoginState>>::~unique_ptr(local_168);
            goto LAB_1000cd4f6;
        }
        if (iVar4 != 0)
            goto LAB_1000cd4f6;
        if (0 < field_55040) {
            field_55040 = field_55040 + -1;
            goto LAB_1000cd4f6;
        }
        this_02 = &field_2506376;
        pLVar11 = (LoginManager*)std::unique_ptr<LoginManager, std::default_delete<LoginManager>>::operator->(
            (unique_ptr<LoginManager, std::default_delete<LoginManager>>*)this_02);
        local_1c8[0] = (PacketT<Array<unsigned char, eastl::allocator>>)pLVar11->IsOneTimeLoginTokenRequested();
        this_03 = &field_54272;
        bVar1 = std::operator==((unique_ptr*)this_03, (_func_decltype_nullptr*)in_RSI);
        if (bVar1) {
            new (local_160) eastl::string((basic_string*)&field_54224);
            eastl::string::append_sprintf((char*)local_160, ":%d", (ulong)field_54256);
            local_178.field_0._0_1_ = field_8448 == 40;
            std::make_unique<LoginState, eastl::string&, bool, bool const&>((basic_string*)(local_1c8 + 48),
                                                                            (bool*)local_160, (bool*)&local_178);
            std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator=(
                (unique_ptr<LoginState, std::default_delete<LoginState>>*)this_03, (unique_ptr*)(local_1c8 + 48));
            ((local_1c8 + 48))->~unique_ptr();
            local_160->~basic_string();
        }
        pLVar11 = (LoginManager*)std::unique_ptr<LoginManager, std::default_delete<LoginManager>>::operator->(
            (unique_ptr<LoginManager, std::default_delete<LoginManager>>*)this_02);
        cVar2 = pLVar11->IsGameTokenLogin();
        if (cVar2 == '\0') {
        LAB_1000cd4e3:
            pSVar9 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)this_00);
            pSVar9->BeginAsyncConnectionWork(this_03);
        } else {
            pLVar11 = (LoginManager*)std::unique_ptr<LoginManager, std::default_delete<LoginManager>>::operator->(
                (unique_ptr<LoginManager, std::default_delete<LoginManager>>*)this_02);
            lVar7 = pLVar11->GetAuthWrapper();
            piVar12 = (int*)std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator->(
                (unique_ptr<LoginState, std::default_delete<LoginState>>*)this_03);
            if (*piVar12 != 14) {
                if (*piVar12 != 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    162, "Unhandled login step pre-connection: %d ");
                }
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("authWrapper != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                              "client_network.cpp",
                              121, (char*)0);
                }
                pLVar11 = (LoginManager*)std::unique_ptr<LoginManager, std::default_delete<LoginManager>>::operator->(
                    (unique_ptr<LoginManager, std::default_delete<LoginManager>>*)this_02);
                plVar13 = (long*)pLVar11->GetAuthWrapper();
                (**(code**)(*plVar13 + 40))(plVar13);
                puVar14 = (undefined4*)std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator->(
                    (unique_ptr<LoginState, std::default_delete<LoginState>>*)this_03);
                *puVar14 = 14;
                goto LAB_1000cd4f6;
            }
            pLVar11 = (LoginManager*)std::unique_ptr<LoginManager, std::default_delete<LoginManager>>::operator->(
                (unique_ptr<LoginManager, std::default_delete<LoginManager>>*)this_02);
            plVar13 = (long*)pLVar11->GetAuthWrapper();
            this_05 = (GameToken*)(**(code**)(*plVar13 + 48))(plVar13);
            iVar4 = this_05->GetStatus();
            if (iVar4 < 1401) {
                if (iVar4 == -3)
                    goto LAB_1000cd4f6;
                if (iVar4 == 0) {
                    puVar14 = (undefined4*)std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator->(
                        (unique_ptr<LoginState, std::default_delete<LoginState>>*)this_03);
                    *puVar14 = 0;
                    goto LAB_1000cd4e3;
                }
            } else {
                if ((iVar4 == 1401) || (iVar4 == 1404)) {
                    LoginError(this, 63);
                    goto LAB_1000cd4f6;
                }
                if (iVar4 == 1407) {
                    this_05->SwitchToPendingTransactions();
                    goto LAB_1000cd4f6;
                }
            }
            LoginError(this, 65);
        }
    LAB_1000cd4f6:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1000d1ec0, 1680 bytes, placed by class name and debug map
    // Client::MainRedraw(bool, float)
    void Client::MainRedraw(bool param_1, float param_2) {
        uint uVar1;
        undefined4 uVar2;
        NXTPixToolkit* pNVar3;
        bool bVar4;
        long* plVar6;
        shared_ptr* this_00;
        shared_ptr* psVar7;
        shared_ptr* this_01;
        shared_ptr<ApplicationContext>* this_02;
        ShareLightBuffer* this_03;
        long lVar8;
        undefined1* puVar9;
        Pix2D* pPVar10;
        eastl::string* pbVar11;
        DeviceOptions* this_04;
        OSClientConsole* this_05;
        char* pcVar12;
        float* pfVar13;
        undefined4* puVar14;
        ulong uVar15;
        basic_string* pbVar16;
        eastl::string local_80[32];
        array<bool, 100ul>* local_60;
        array<int, 100ul>* local_58;
        array<int, 100ul>* local_50;
        array<int, 100ul>* local_48;
        array<int, 100ul>* local_40;
        undefined4 local_38;
        float local_34;

        local_34 = param_2;
        plVar6 = (long*)OSRenderCore_AudioThread::Instance();
        (((long)plVar6 + *(long*)(*plVar6 + -24)))->SetUsingRSeven(m_usingRSeven);
        if (field_54785 != false) {
            this_thread::Sleep(100);
            pNVar3 = field_144;
            bVar4 = (bool)pNVar3->GetUIVisible();
            pNVar3->ShowUI(false);
            (*(code*)pNVar3->field_0[5])(pNVar3);
            (*(code*)pNVar3->field_0[4])(pNVar3, 0, 0);
            pNVar3->ShowUI(bVar4);
            return;
        }
        DrawDebugUI(this);
        if (param_1) {
            field_128 = 0;
        }
        field_2508656 = local_34;
        javapal::GameShell::m_lastGameLoopTimeMillis = ((Client*)this)->CurrentTimeMillis();
        CheckToQueueMutedAudio(this);
        this_01 = (shared_ptr*)&field_2508688;
        this_00 = (shared_ptr*)this_01->begin();
        psVar7 = (shared_ptr*)this_01->end();
        for (; this_00 != psVar7; this_00 = this_00 + 1) {
            this_01 = this_00;
            bVar4 = operator!=(this_00, (_func_decltype_nullptr*)0);
            if (bVar4) {
                this_01 = (shared_ptr*)shared_ptr<midi2::MidiPlayerMainThread>::operator->(
                    (shared_ptr<midi2::MidiPlayerMainThread>*)this_00);
                this_02 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
                this_03 = (ShareLightBuffer*)shared_ptr<ApplicationContext>::operator->(this_02);
                this_03->IsPrepared();
                (**(code**)(*(long*)this_01 + 72))();
            }
        }
        uVar1 = field_8448;
        if (((((int)uVar1 < 11) || (uVar1 == 20)) || (uVar1 == 30)) &&
            ((field_52448 != 0 && (lVar8 = this_01->CurrentTimeMillis(), field_52448 < lVar8)))) {
            OnWindowModeChanged(this);
        }
        if (param_1) {
            uVar15 = 0;
            do {
                puVar9 = (undefined1*)std::array<bool, 100ul>::operator[]((array<bool, 100ul>*)&field_2506576, uVar15);
                *puVar9 = 1;
                uVar15 = uVar15 + 1;
            } while (uVar15 != 100);
        }
        pPVar10 = (Pix2D*)(*(code*)*field_144->field_0)();
        uVar1 = field_8448;
        if (((int)uVar1 < 21) || (uVar1 == 1000)) {
            TitleScreen::Draw((shared_ptr*)field_1104240, (shared_ptr*)field_1104208, (shared_ptr*)field_1104224, false,
                              pPVar10);
            goto switchD_1000d20aa_caseD_1a;
        }
        switch (uVar1) {
        case 25:
            (*(code*)field_144->field_0[5])();
            eastl::string::basic_string(local_80);
            if (field_53252 == 2) {
                if (field_53248 < field_53244) {
                    field_53248 = field_53244;
                }
                pbVar11 = (eastl::string*)local_80->append();
                pbVar11 = (eastl::string*)eastl::string::append(pbVar11, StringConstants::TAG_BREAK);
                pcVar12 = (char*)eastl::string::append(pbVar11, StringConstants::OPEN_BRACKET);
                pbVar11 = (eastl::string*)eastl::string::append_sprintf(
                    pcVar12, "%i%%", (ulong)(((field_53248 - field_53244) * 50) / field_53248 + 50));
                pbVar16 = (basic_string*)eastl::string::append(pbVar11, StringConstants::CLOSE_BRACKET);
                MessageBox(this, pbVar16, false);
            } else if (field_53252 == 1) {
                if (field_53240 < (int)field_53236) {
                    field_53240 = field_53236;
                }
                pbVar11 = (eastl::string*)local_80->append();
                pbVar11 = (eastl::string*)eastl::string::append(pbVar11, StringConstants::TAG_BREAK);
                pcVar12 = (char*)eastl::string::append(pbVar11, StringConstants::OPEN_BRACKET);
                pbVar11 = (eastl::string*)eastl::string::append_sprintf(
                    pcVar12, "%i%%", (long)((field_53240 - field_53236) * 50) / (long)field_53240 & 4294967295);
                pbVar16 = (basic_string*)eastl::string::append(pbVar11, StringConstants::CLOSE_BRACKET);
                MessageBox(this, pbVar16, false);
            } else {
                MessageBox(this, (basic_string*)&constants::text::loading, false);
            }
            break;
        default:
            goto switchD_1000d20aa_caseD_1a;
        case 30:
            GameDraw(this);
            goto switchD_1000d20aa_caseD_1a;
        case 40:
            (*(code*)field_144->field_0[5])();
            eastl::string::basic_string(local_80);
            pbVar11 = (eastl::string*)local_80->append();
            pbVar16 = (basic_string*)eastl::string::append(pbVar11, StringConstants::TAG_BREAK);
            pbVar16 = (basic_string*)eastl::string::append(pbVar16);
            MessageBox(this, pbVar16, false);
            break;
        case 45:
            (*(code*)field_144->field_0[5])();
            pbVar16 = (basic_string*)&constants::text::pleasewait;
            goto LAB_1000d221d;
        case 50:
            (*(code*)field_144->field_0[5])();
            pbVar16 = (basic_string*)&constants::text::world_transfer_pending;
        LAB_1000d221d:
            MessageBox(this, pbVar16, false);
            goto switchD_1000d20aa_caseD_1a;
        }
        eastl::string::~basic_string(local_80);
    switchD_1000d20aa_caseD_1a:
        this_04 = (DeviceOptions*)
                      std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                          (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
        if (this_04->GetDisplayBuildInfo() != '\0') {
            DrawBuildInfo(this);
        }
        this_05 = (OSClientConsole*)std::unique_ptr<OSClientConsole, std::default_delete<OSClientConsole>>::operator->(
            (unique_ptr<OSClientConsole, std::default_delete<OSClientConsole>>*)&field_7306800);
        this_05->Draw();
        if ((((field_8448 == 30) && (field_2508476 == 0)) && (!param_1)) &&
            ((field_52456 == 0 && (0 < (int)field_2506568)))) {
            local_60 = (array<bool, 100ul>*)&field_2506676;
            local_58 = (array<int, 100ul>*)&field_2506876;
            local_50 = (array<int, 100ul>*)&field_2507276;
            local_48 = (array<int, 100ul>*)&field_2507676;
            local_40 = (array<int, 100ul>*)&field_2508076;
            uVar15 = 0;
            do {
                pcVar12 = (char*)std::array<bool, 100ul>::operator[](local_60, uVar15);
                if (*pcVar12 != '\0') {
                    pNVar3 = field_144;
                    pfVar13 = (float*)std::array<int, 100ul>::operator[](local_58, uVar15);
                    local_34 = *pfVar13;
                    puVar14 = (undefined4*)std::array<int, 100ul>::operator[](local_50, uVar15);
                    local_38 = *puVar14;
                    puVar14 = (undefined4*)std::array<int, 100ul>::operator[](local_48, uVar15);
                    uVar2 = *puVar14;
                    puVar14 = (undefined4*)std::array<int, 100ul>::operator[](local_40, uVar15);
                    (*(code*)pNVar3->field_0[3])(pNVar3, local_34, local_38, uVar2, *puVar14);
                    *pcVar12 = '\0';
                }
                uVar15 = uVar15 + 1;
            } while ((long)uVar15 < (long)(int)field_2506568);
        }
        if (field_8448 == 1000) {
            ShowError();
            uVar1 = field_2506568;
            if (0 < (int)uVar1) {
                uVar15 = 0;
                do {
                    puVar9 =
                        (undefined1*)std::array<bool, 100ul>::operator[]((array<bool, 100ul>*)&field_2506676, uVar15);
                    *puVar9 = 0;
                    uVar15 = uVar15 + 1;
                } while (uVar1 != uVar15);
            }
        } else {
            (*(code*)field_144->field_0[4])(field_144, 0, 0);
            uVar1 = field_2506568;
            if (0 < (int)uVar1) {
                uVar15 = 0;
                do {
                    puVar9 =
                        (undefined1*)std::array<bool, 100ul>::operator[]((array<bool, 100ul>*)&field_2506676, uVar15);
                    *puVar9 = 0;
                    uVar15 = uVar15 + 1;
                } while (uVar1 != uVar15);
            }
        }
        if (m_pWorldmap != (Worldmap*)0) {
            m_pWorldmap->Service();
        }
        if (field_53257 != '\0') {
            RebuildMap(this);
        }
    }

    // 0x1000d2560, 208 bytes, placed by class name and debug map
    // Client::DrawDebugUI()
    void Client::DrawDebugUI() {
        int iVar1;
        int iVar2;
        RenderContext* this_00;
        DebugUIManager* pDVar3;
        float* pfVar4;
        GraphicsApp* this_01;
        undefined1 local_48[20];
        float local_34;
        float local_30;
        float local_2c;

        this_01 = field_152;
        this_00 = (RenderContext*)this_01->GetDefaultRenderContext();
        pDVar3 = (DebugUIManager*)this_01->Instance();
        iVar1 = this_00->GetBackBufferWidth();
        iVar2 = this_00->GetBackBufferHeight();
        pDVar3->MainDraw(0, iVar1, iVar2);
        pDVar3 = (DebugUIManager*)pDVar3->Instance();
        local_34 = (float)FrameTime::GetFrameDelta();
        local_30 = 1.1754944e-38;
        pfVar4 = std::max<float>(&local_34, &local_30);
        local_2c = *pfVar4;
        iVar1 = this_00->GetBackBufferWidth();
        iVar2 = this_00->GetBackBufferHeight();
        (*(code*)field_152->field_0[12])();
        local_48->GetSafeAreaInsets();
        pDVar3->NotifyFrameStart(local_2c, iVar1, iVar2, local_48);
    }

    // 0x1000d2630, 160 bytes, placed by class name and debug map
    // Client::CheckToQueueMutedAudio()
    void Client::CheckToQueueMutedAudio() {
        bool bVar1;
        byte bVar2;
        undefined1 uVar3;
        long* plVar4;
        shared_ptr<ApplicationContext>* psVar5;
        ShareLightBuffer* pSVar6;
        _func_decltype_nullptr* in_RSI;

        bVar1 = std::operator!=((unique_ptr*)&field_2508736, in_RSI);
        if (bVar1) {
            plVar4 =
                (long*)std::unique_ptr<sound::PCMPlayerMainThread, std::default_delete<sound::PCMPlayerMainThread>>::
                operator->((unique_ptr<sound::PCMPlayerMainThread,
                                       std::default_delete<sound::PCMPlayerMainThread>>*)&field_2508736);
            psVar5 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
            pSVar6 = (ShareLightBuffer*)shared_ptr<ApplicationContext>::operator->(psVar5);
            bVar2 = pSVar6->IsPrepared();
            in_RSI = (_func_decltype_nullptr*)(ulong)bVar2;
            (**(code**)(*plVar4 + 16))(plVar4);
        }
        bVar1 = std::operator!=((unique_ptr*)&field_2508744, in_RSI);
        if (bVar1) {
            plVar4 =
                (long*)std::unique_ptr<sound::PCMPlayerMainThread, std::default_delete<sound::PCMPlayerMainThread>>::
                operator->((unique_ptr<sound::PCMPlayerMainThread,
                                       std::default_delete<sound::PCMPlayerMainThread>>*)&field_2508744);
            psVar5 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
            pSVar6 = (ShareLightBuffer*)shared_ptr<ApplicationContext>::operator->(psVar5);
            uVar3 = pSVar6->IsPrepared();
            (**(code**)(*plVar4 + 16))(plVar4, uVar3);
        }
    }

    // 0x1000d6b30, 432 bytes, placed by class name and debug map
    // Client::MessageBox(eastl::string const&, bool)
    void Client::MessageBox(basic_string* param_1, bool param_2) {
        undefined1* this_00;
        uint uVar1;
        int iVar2;
        vector* pvVar3;
        uint* puVar4;
        PixfontGeneric* pPVar5;
        Pix2D* this_01;
        undefined7 in_register_00000011;
        int iVar6;
        Client* pCVar7;
        int iVar8;
        int iVar9;
        undefined1 local_80[16];
        shared_ptr<jstring::PixfontGeneric>* local_68;
        ulong local_60;
        ulong local_50;
        ulong local_48;
        char local_40;
        int local_3c;
        int local_38;
        int local_34;

        if (field_19192 != '\0') {
            _local_40 = (undefined4)CONCAT71(in_register_00000011, param_2);
            pCVar7 = this;
            local_80->GetUISafeArea();
            pvVar3 = local_80->SSOBeginPtr(pCVar7);
            local_50 = (ulong) * (uint*)pvVar3;
            local_38 = *(uint*)pvVar3 + 4;
            puVar4 = (uint*)local_80->y();
            local_60 = (ulong)*puVar4;
            local_3c = *puVar4 + 4;
            this_00 = field_1104224;
            local_68 = (shared_ptr<jstring::PixfontGeneric>*)this_00;
            pPVar5 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(
                (shared_ptr<jstring::PixfontGeneric>*)this_00);
            uVar1 = pPVar5->PredictWidthMultiline(param_1, 250);
            local_48 = (ulong)uVar1;
            pPVar5 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(
                (shared_ptr<jstring::PixfontGeneric>*)this_00);
            iVar2 = pPVar5->PredictLinesMultiline(param_1, 250);
            local_34 = iVar2 * 13;
            this_01 = (Pix2D*)(*(code*)*field_144->field_0)();
            iVar9 = uVar1 + 8;
            iVar2 = iVar2 * 13 + 8;
            iVar6 = (int)local_50;
            iVar8 = (int)local_60;
            (**(code**)(this_01->field_0 + 32))(this_01, local_50 & 4294967295, local_60 & 4294967295, iVar9, iVar2, 0);
            this_01->DrawRect(iVar6, iVar8, iVar9, iVar2, 16777215);
            pPVar5 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(local_68);
            pCVar7 = (Client*)this;
            pPVar5->DrawStringMultiline(param_1, local_38, local_3c, (int)local_48, local_34, 16777215, -1, 1, 1, 0,
                                        this_01);
            DirtyArea(pCVar7, (int)local_50, iVar8, iVar9, iVar2);
            if (local_40 == '\0') {
                BlitArea(pCVar7, local_38, local_3c, (int)local_48, local_34);
            } else {
                (*(code*)pCVar7->field_144->field_0[5])();
                (*(code*)pCVar7->field_144->field_0[4])(pCVar7->field_144, 0, 0);
                DrawDebugUI(pCVar7);
            }
        }
    }

    // 0x1000d6ce0, 560 bytes, placed by class name and debug map
    // Client::GameDraw()
    void Client::GameDraw() {
        uint uVar1;
        Minimenu* this_00;
        char cVar2;
        int iVar3;
        int iVar4;
        Pix2D* this_01;
        char* pcVar5;
        char* pcVar6;
        undefined1* puVar7;
        ulonglong uVar8;
        WorldmapAreaMetadata* this_02;
        NXTPixScreen* this_03;
        ulonglong uVar9;
        Pix2D* pPVar10;
        long lVar11;
        Client* pCVar12;
        ulong uVar13;
        CoordMapSquare local_40;

        field_144->PrepareRender();
        this_01 = (Pix2D*)(*(code*)*field_144->field_0)();
        (**(code**)(this_01->field_0 + 8))();
        pCVar12 = this;
        SetupInterfaceRenderer(this);
        if (field_53216 != -1) {
            pCVar12 = this;
            AnimateInterface(this, field_53216);
        }
        uVar1 = field_2506568;
        if (0 < (int)uVar1) {
            uVar13 = 0;
            do {
                pcVar6 = (char*)std::array<bool, 100ul>::operator[]((array<bool, 100ul>*)&field_2506576, uVar13);
                if (*pcVar6 != '\0') {
                    puVar7 =
                        (undefined1*)std::array<bool, 100ul>::operator[]((array<bool, 100ul>*)&field_2506676, uVar13);
                    *puVar7 = 1;
                }
                cVar2 = *pcVar6;
                pCVar12 = (Client*)&field_2506776;
                pcVar5 = (char*)std::array<bool, 100ul>::operator[]((array<bool, 100ul>*)&field_2506776, uVar13);
                *pcVar5 = cVar2;
                *pcVar6 = '\0';
                uVar13 = uVar13 + 1;
            } while (uVar1 != uVar13);
        }
        field_2506572 = field_8488;
        field_2505044 = 18446744073709551615;
        if (field_53216 != -1) {
            field_2506568 = 0;
            uVar8 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)pCVar12);
            this_02 = (WorldmapAreaMetadata*)field_144->GetScreen();
            local_40.m_x = this_02->GetMinMapX();
            iVar3 = local_40.GetX();
            this_03 = (NXTPixScreen*)field_144->GetScreen();
            local_40._8_4_ = this_03->GetUIHeight();
            iVar4 = local_40.field_8.GetX();
            pCVar12 = this;
            DrawInterface(this, field_53216, 0, 0, iVar3, iVar4, 0, 0, -1);
            uVar9 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)pCVar12);
            (field_52936, uVar9 - uVar8)->AddSample();
        }
        this_01->ResetClipping();
        this_00 = field_52344;
        pPVar10 = (Pix2D*)(*(code*)*field_144->field_0)();
        this_00->DrawFeedback(pPVar10);
        cVar2 = field_52344->IsOpen();
        if (cVar2 != '\0') {
            (field_52344, this_01)->Draw();
        }
        iVar3 = m_playerLevel;
        lVar11 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)field_52016);
        iVar4 = *(int*)(lVar11 + 24);
        lVar11 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)field_52016);
        bgsound::DoMix(iVar3, iVar4, *(int*)(lVar11 + 28), field_1115692);
        field_1115692 = 0;
    }

    // 0x1000e8350, 35536 bytes, placed by __FILE__ string
    // Client::TcpIn(ServerConnection&)
    ulong Client::TcpIn(ServerConnection* param_1) {
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_00;
        TextureAtlasReference* this_01;
        char cVar1;
        bool bVar2;
        char cVar3;
        bool bVar4;
        byte bVar5;
        undefined1 uVar6;
        byte bVar7;
        ushort uVar8;
        short sVar9;
        short sVar10;
        undefined2 uVar11;
        int iVar12;
        uint uVar13;
        undefined4 uVar14;
        uint uVar15;
        int iVar16;
        uint uVar17;
        uint uVar18;
        int iVar19;
        undefined8 uVar20;
        ServerConnection* pSVar21;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* pPVar22;
        undefined4* puVar23;
        ulong uVar24;
        undefined1* puVar25;
        ShuffledPacket3* pSVar26;
        ShuffledPacket4* pSVar27;
        long lVar28;
        array<int, 32ul>* paVar29;
        IfType* pIVar30;
        int* piVar31;
        ClientVarValues* this_02;
        undefined8 uVar32;
        ClientNpc* this_03;
        ActiveOffersReply* this_04;
        shared_ptr<rs2lib::IfType>* this_05;
        undefined1* puVar33;
        OldscapeVarTypeList* this_06;
        VarContainerSparse* this_07;
        PlayerModel* this_08;
        ClientProj* this_09;
        Minimap* this_10;
        unique_ptr<rs2lib::StockPlayerOffer, eastl::default_delete<rs2lib::StockPlayerOffer>>* puVar34;
        StockPlayerOffer* pSVar35;
        HookArg* pHVar36;
        shared_ptr<rs2lib::social::ClanSettings>* psVar37;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* pPVar38;
        ShuffledPacket2* pSVar39;
        ClientPlayer* pCVar40;
        shared_ptr* psVar41;
        shared_ptr<ApplicationContext>* this_11;
        long* plVar42;
        int* piVar43;
        Client* pCVar44;
        shared_ptr<rs2lib::social::ClanChannel>* psVar45;
        char* pcVar46;
        shared_ptr* psVar47;
        Array<int, eastl::allocator>* pAVar48;
        long lVar49;
        ClientEntity* pCVar50;
        SuperShuffledPacketFactory* pSVar51;
        ulong* puVar52;
        FriendSystem* pFVar53;
        WordPack* pWVar54;
        ClanChannelDelta* this_12;
        Client* pCVar55;
        ClanSettingsDelta* this_13;
        ClanSettings* pCVar56;
        longlong* plVar57;
        undefined8 uVar58;
        ClanChannel* pCVar59;
        Array* pAVar60;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        hashtable_iterator_base* extraout_RDX_03;
        hashtable_iterator_base* extraout_RDX_04;
        hashtable_iterator_base* extraout_RDX_05;
        hashtable_iterator_base* extraout_RDX_06;
        hashtable_iterator_base* extraout_RDX_07;
        hashtable_iterator_base* extraout_RDX_08;
        hashtable_iterator_base* extraout_RDX_09;
        uint* puVar61;
        array<int, 32ul>* paVar62;
        ulong uVar63;
        uint uVar64;
        ClientMessage* this_14;
        Client* pCVar65;
        shared_ptr<RSevenDebugPresetProvider>* this_15;
        undefined* puVar66;
        int iVar67;
        NXTPixToolkit* pNVar68;
        int iVar69;
        ulong unaff_R15;
        undefined7 uVar72;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar70;
        hashtable_iterator_base* phVar71;
        double dVar73;
        shared_ptr asStackY_d18[128];
        ulong in_stack_fffffffffffffae8;
        ulong in_stack_fffffffffffffaf0;
        undefined4 uVar74;
        undefined4 uVar75;
        undefined4 uVar76;
        ulong in_stack_fffffffffffffaf8;
        undefined4 uVar77;
        undefined8 in_stack_fffffffffffffb00;
        undefined4 uVar78;
        undefined8 in_stack_fffffffffffffb08;
        undefined8 in_stack_fffffffffffffb10;
        undefined1 local_4c0[8];
        TextureAtlasReference local_4b8;
        int local_484;
        undefined1 local_480[8];
        undefined1 local_478[80];
        eastl::string local_428[760];
        Array<int, eastl::allocator>* local_130;
        shared_ptr local_128;
        shared_ptr local_110[2];
        SuperShuffledPacketFactory local_f0[2];
        undefined1 local_cc[4];
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_c8;
        array<int, 32ul>* local_c0;
        undefined1 local_b8[56];
        HookArg local_80;
        long local_38;

        uVar14 = (undefined4)((ulong)in_stack_fffffffffffffb08 >> 32);
        uVar76 = (undefined4)((ulong)in_stack_fffffffffffffb10 >> 32);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_14 = (ClientMessage*)local_4c0;
        local_b8._48_8_ = this;
        shared::ClientMessage::ClientMessage(this_14);
        cVar3 = param_1->GetNextServerMessage(this_14);
        if (cVar3 == '\0') {
            iVar12 = param_1->GetConnectionState();
            if (iVar12 != 3) {
                LostCon((Client*)local_b8._48_8_);
            }
            goto LAB_1000e84af;
        }
        ((local_b8._48_8_ + 1104120))->MarkServerDataSeen();
        uVar74 = (undefined4)(in_stack_fffffffffffffaf0 >> 32);
        if (*(char*)(local_b8._48_8_ + 54760) != '\0') {
            uVar20 = logger::default_logger();
            uVar75 = local_4c0._0_4_;
            unaff_R15 = *(ulong*)(PTR_NAMES_100ee6b80 + (ulong)(uint)local_4c0._0_4_ * 8);
            in_stack_fffffffffffffaf8 = ((local_4c0 + 8))->GetTextureAtlas();
            in_stack_fffffffffffffaf0 = CONCAT44(uVar74, uVar75);
            this_14 = (ClientMessage*)0;
            in_stack_fffffffffffffae8 = unaff_R15;
            logger::Logger::Log(
                uVar20, 0, 5,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_network.cpp",
                1159, "Got ptype: %s(%d), %zu", unaff_R15, in_stack_fffffffffffffaf0, in_stack_fffffffffffffaf8);
        }
        uVar20 = local_b8._48_8_;
        uVar77 = (undefined4)(in_stack_fffffffffffffaf8 >> 32);
        uVar78 = (undefined4)((ulong)in_stack_fffffffffffffb00 >> 32);
        uVar75 = (undefined4)(in_stack_fffffffffffffaf0 >> 32);
        uVar74 = (undefined4)(in_stack_fffffffffffffae8 >> 32);
        if (121 < (uint)local_4c0._0_4_) {
            uVar20 = logger::default_logger();
            logger::Logger::Log(
                uVar20, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_network.cpp",
                4290, "Unrecognized packet type: %d", CONCAT44(uVar74, local_4c0._0_4_));
            eastl::string::basic_string(local_480, "Unrecognized packet type: %d", local_4c0._0_4_);
            pcVar46 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            OldscapeClientError::ReportError(pcVar46, (Callstack*)0);
            local_480->~basic_string();
            psVar41 = (shared_ptr*)CONCAT71((int7)(unaff_R15 >> 8), 1);
            Logout((Client*)local_b8._48_8_);
            goto LAB_1000e84b2;
        }
        pCVar55 = (Client*)(local_b8._48_8_ + 54760);
        pCVar44 = (Client*)(local_4c0 + 8);
        uVar72 = (undefined7)((ulong)pCVar55 >> 8);
        bVar4 = SUB81(pCVar44, 0);
        pHVar36 = (HookArg*)pCVar55;
        switch (local_4c0._0_4_) {
        case (BADTYPE)0:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            uVar8 = pSVar27->g2();
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            iVar12 = pSVar27->g3();
            uVar15 = 4294967295;
            if (uVar8 != 65535) {
                uVar15 = (uint)uVar8;
            }
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            PlayJingle((Client*)local_b8._48_8_, uVar15, iVar12);
            break;
        case (BADTYPE)1:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            iVar12 = pSVar27->g4s();
            pSVar26 = (ShuffledPacket3*)local_480->p2_alt2();
            sVar9 = pSVar26->g2s();
            psVar47 = (shared_ptr*)rs2lib::IfType::Get(iVar12);
            lVar28 = shared_ptr<rs2lib::IfType>::operator*((shared_ptr<rs2lib::IfType>*)psVar47);
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            if ((sVar9 == -1) || (*(int*)(lVar28 + 244) != (int)sVar9)) {
                *(int*)(lVar28 + 244) = (int)sVar9;
                *(undefined8*)(lVar28 + 1992) = 0;
                ComponentUpdated((Client*)local_b8._48_8_, psVar47);
            }
            break;
        case (BADTYPE)2:
            bVar5 = pCVar44->g1();
            if (*(char*)pCVar55 != '\0') {
                uVar20 = logger::default_logger();
                uVar32 = shared::PlayerFacingLogoutReason::getReason((uint)bVar5);
                logger::Logger::Log(uVar20, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    1228, "logout due to %s", uVar32);
            }
            LogoutWithReason((Client*)local_b8._48_8_, bVar5);
            goto LAB_1000e84af;
        case (BADTYPE)3:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            cVar3 = pSVar39->g1s();
            pSVar26 = (ShuffledPacket3*)local_480->p2_alt2();
            bVar5 = pSVar26->g1();
            local_128._0_4_ = (uint)bVar5 << 2;
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            uVar15 = pSVar39->g1s();
            pHVar36 = (HookArg*)(ulong)uVar15;
            pSVar26 = (ShuffledPacket3*)local_480->p2_alt2();
            uVar8 = pSVar26->g2();
            local_110[0]._0_4_ = ZEXT24(uVar8);
            pPVar38 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_480->p2_alt2();
            local_f0[0].field_0._0_4_ = pPVar38->g3s();
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            uVar18 = pSVar39->g2();
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            uVar17 = pSVar39->g1();
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            uVar11 = pSVar27->g2();
            pSVar26 = (ShuffledPacket3*)local_480->p2_alt2();
            uVar13 = pSVar26->g3();
            local_80.field_0 = (uVar13 >> 4 & 7) + ((int)uVar13 >> 16);
            local_b8._0_4_ = (uVar13 & 7) + (uVar13 >> 8 & 255);
            pPVar38 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_480->p2_alt2();
            bVar5 = pPVar38->g1();
            local_b8._44_4_ = ZEXT14(bVar5);
            pCVar44 = (Client*)local_480->p2_alt2();
            bVar5 = pCVar44->g1();
            uVar20 = local_b8._48_8_;
            local_b8._36_4_ = ZEXT14(bVar5);
            if ((((int)local_80.field_0 < 104) && (-1 < (int)local_80.field_0)) &&
                ((-1 < (int)local_b8._0_4_ &&
                  (((int)local_b8._0_4_ < 104 && (iVar12 = (int)cVar3 + local_80.field_0, -1 < iVar12)))))) {
                uVar15 = (int)(char)uVar15 + local_b8._0_4_;
                pHVar36 = (HookArg*)(ulong)uVar15;
                if ((-1 < (int)uVar15) && (((iVar12 < 104 && ((int)uVar15 < 104)) && (local_110[0]._0_4_ != 65535)))) {
                    local_c0 = (array<int, 32ul>*)CONCAT62(local_c0._2_6_, uVar11);
                    uVar64 = local_80.field_0 << 7;
                    local_80._0_8_ = CONCAT44(local_80._4_4_, uVar64) | 64;
                    uVar13 = local_b8._0_4_ << 7;
                    local_b8._0_8_ = CONCAT44(local_b8._4_4_, uVar13) | 64;
                    iVar19 = GetAvH(pCVar44, uVar64 | 64, uVar13 | 64, *(int*)(local_b8._48_8_ + 51984));
                    uVar13 = (uint)(ushort)local_c0;
                    piVar43 = (int*)(uVar20 + 51984);
                    local_b8._40_4_ = iVar19 + (uVar17 & 255) * -4;
                    local_484 = *(int*)(uVar20 + 8488);
                    local_cc = (undefined1[4])(local_484 + uVar13);
                    local_484 = local_484 + (uVar18 & 65535);
                    make_shared<ClientProj, int&, int&, int&, int&, int, int, int, int&, int&, int&, int&>(
                        (jag*)local_480, (int*)local_110, piVar43, (int*)&local_80, (int*)local_b8,
                        (int*)(local_b8 + 40), (int*)local_cc, &local_484, (int*)(local_b8 + 36), (int*)(local_b8 + 44),
                        (int*)local_f0, (int*)&local_128);
                    pCVar44 = (Client*)local_480;
                    this_09 = (ClientProj*)shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)pCVar44);
                    uVar18 = iVar12 * 128 | 64;
                    uVar15 = uVar15 * 128 | 64;
                    pHVar36 = (HookArg*)(ulong)uVar15;
                    iVar12 = GetAvH(pCVar44, uVar18, uVar15, *piVar43);
                    uVar20 = local_b8._48_8_;
                    this_09->SetTarget(uVar18, uVar15, iVar12 - local_128._0_4_,
                                       uVar13 + *(int*)(local_b8._48_8_ + 8488));
                    ((uVar20 + 7164584))->push_back(local_480);
                    local_480->~shared_ptr();
                }
            }
            goto switchD_1000ea3f5_default;
        case (BADTYPE)4:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pPVar38 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_480->p2_alt2();
            bVar5 = pPVar38->g1();
            uVar20 = local_b8._48_8_;
            *(uint*)(local_b8._48_8_ + 53312) = (uint)bVar5;
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            bVar5 = pSVar39->g1();
            *(uint*)(uVar20 + 53304) = (uint)bVar5;
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            break;
        case (BADTYPE)5:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            uVar15 = pSVar27->g2();
            pPVar38 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_480->p2_alt2();
            uVar18 = pPVar38->g2();
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            iVar12 = pSVar27->g4s();
            pPVar38 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_480->p2_alt2();
            uVar17 = pPVar38->g2();
            psVar47 = (shared_ptr*)rs2lib::IfType::Get(iVar12);
            lVar28 = shared_ptr<rs2lib::IfType>::operator*((shared_ptr<rs2lib::IfType>*)psVar47);
            psVar41 = (shared_ptr*)CONCAT71((uint7)(uint3)(uVar18 >> 8), 1);
            if (((*(uint*)(lVar28 + 260) != (uVar17 & 65535)) || (*(uint*)(lVar28 + 264) != (uVar15 & 65535))) ||
                (*(uint*)(lVar28 + 272) != (uVar18 & 65535))) {
                *(uint*)(lVar28 + 260) = uVar17 & 65535;
                *(uint*)(lVar28 + 264) = uVar15 & 65535;
                *(uint*)(lVar28 + 272) = uVar18 & 65535;
                ComponentUpdated((Client*)local_b8._48_8_, psVar47);
            }
            break;
        case (BADTYPE)6:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pPVar38 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_480->p2_alt2();
            uVar15 = pPVar38->g2();
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            iVar12 = pSVar39->g4();
            psVar47 = (shared_ptr*)rs2lib::IfType::Get(iVar12);
            lVar28 = shared_ptr<rs2lib::IfType>::operator*((shared_ptr<rs2lib::IfType>*)psVar47);
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            if ((*(int*)(lVar28 + 228) != 6) || (*(uint*)(lVar28 + 232) != (uVar15 & 65535))) {
                *(undefined4*)(lVar28 + 228) = 6;
                *(uint*)(lVar28 + 232) = uVar15 & 65535;
                ComponentUpdated((Client*)local_b8._48_8_, psVar47);
            }
            break;
        case (BADTYPE)7:
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            shared_ptr<game::VarContainerSparse>::reset();
            break;
        case (BADTYPE)8:
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            ZonePacket((Client*)local_b8._48_8_, 2, pCVar44);
            break;
        case (BADTYPE)9:
            *(undefined2*)(local_b8._48_8_ + 52996) = 256;
            *(char*)(local_b8._48_8_ + 52999) = '\x01';
            sVar9 = pCVar44->g2s();
            sVar10 = pCVar44->g2s();
            uVar20 = local_b8._48_8_;
            local_80.field_0 = dash3d::world::ClampPitchAngle(*(int*)(local_b8._48_8_ + 53100) + (int)sVar10 & 2027);
            local_b8._0_4_ = *(uint*)(uVar20 + 53104) + (int)sVar9;
            uVar8 = ((local_4c0 + 8))->g2();
            local_f0[0].field_0._0_4_ = (uint)uVar8;
            bVar5 = ((local_4c0 + 8))->g1();
            local_110[0]._0_4_ = ZEXT14(bVar5);
            if (*(char*)pCVar55 != '\0') {
                uVar20 = logger::default_logger();
                logger::Logger::Log(
                    uVar20, 0, 5,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                    "client_network.cpp",
                    3088, "cam_rotateby yaw:%d (target yaw:%d) pitch:%d (target pitch:%d) cycles:%d easing:%d",
                    CONCAT44(uVar74, (int)sVar9), CONCAT44(uVar75, local_b8._0_4_), CONCAT44(uVar77, (int)sVar10),
                    CONCAT44(uVar78, local_80.field_0), CONCAT44(uVar14, (uint)local_f0[0].field_0),
                    CONCAT44(uVar76, local_110[0]._0_4_));
            }
            pCVar44 = (Client*)local_b8._48_8_;
            std::make_unique<CinemaCameraRotationTween, int&, int const&, int const&, CinemaCameraTween::Easing_const&>(
                (int*)local_480, (int*)(local_b8._48_8_ + 53100), (int*)&local_80, (Easing*)local_f0);
            pCVar55 = (Client*)local_480;
            std::unique_ptr<CinemaCameraRotationTween, std::default_delete<CinemaCameraRotationTween>>::operator=(
                (unique_ptr<CinemaCameraRotationTween, std::default_delete<CinemaCameraRotationTween>>*)((long)pCVar44 +
                                                                                                         53072),
                (unique_ptr*)pCVar55);
            pCVar55->~unique_ptr();
            std::make_unique<CinemaCameraRotationTween, int&, int const&, int const&, CinemaCameraTween::Easing_const&>(
                (int*)local_480, (int*)((long)pCVar44 + 53104), (int*)local_b8, (Easing*)local_f0);
            goto LAB_1000ecfdb;
        case (BADTYPE)10:
            new (local_480) ErrorCapture(true);
            pFVar53 = (FriendSystem*)std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)(local_b8._48_8_ + 52768));
            iVar12 = pCVar44->GetTextureAtlas();
            pFVar53->ProcessFriendListUpdate(pCVar44, iVar12, local_480);
            cVar3 = local_480->IsRaised();
            if (cVar3 != '\0') {
                local_480->second();
                pcVar46 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "client_network.cpp",
                                1335, pcVar46);
            }
            goto LAB_1000ed08d;
        case (BADTYPE)11:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar26 = (ShuffledPacket3*)local_480->p2_alt2();
            bVar5 = pSVar26->g1();
            uVar20 = local_b8._48_8_;
            *(uint*)(local_b8._48_8_ + 1115284) = (uint)bVar5;
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            bVar5 = pSVar27->g1();
            *(uint*)(uVar20 + 1115288) = (uint)bVar5;
            if (*(char*)(uVar20 + 54760) != '\0') {
                uVar20 = logger::default_logger();
                logger::Logger::Log(uVar20, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    4099, "Full update for zone: %d,%d",
                                    CONCAT44(uVar74, *(undefined4*)(local_b8._48_8_ + 1115284)),
                                    CONCAT44(uVar75, *(undefined4*)(local_b8._48_8_ + 1115288)));
            }
            uVar20 = local_b8._48_8_;
            paVar29 = (array<int, 32ul>*)((undefined1*)(local_b8._48_8_ + 1120504) +
                                          (long)*(int*)(local_b8._48_8_ + 1115284) * 3328 + 56);
            lVar28 = (long)*(int*)(local_b8._48_8_ + 1115284);
            do {
                uVar63 = (ulong) * (int*)(uVar20 + 1115288);
                lVar49 = uVar63 - 1;
                paVar62 = paVar29 + uVar63 * 32;
                local_c0 = paVar29;
                do {
                    cVar3 = ((paVar62 + (long)*(int*)(uVar20 + 51984) * 346112))->empty();
                    iVar12 = (int)uVar63;
                    if (cVar3 == '\0') {
                        ((paVar62 + (long)*(int*)(uVar20 + 51984) * 346112))->clear();
                        ShowObject((Client*)uVar20, (int)lVar28, iVar12);
                        RunUpdateObjStackTrigger((Client*)uVar20, *(int*)(uVar20 + 51984), (int)lVar28, iVar12);
                    }
                    lVar49 = lVar49 + 1;
                    uVar63 = (ulong)(iVar12 + 1);
                    paVar62 = paVar62 + 32;
                } while (lVar49 < (long)*(int*)(uVar20 + 1115288) + 7);
                paVar29 = local_c0 + 3328;
                bVar4 = lVar28 < (long)*(int*)(uVar20 + 1115284) + 7;
                lVar28 = lVar28 + 1;
            } while (bVar4);
            local_480->begin();
            pHVar36 = &local_80;
            pHVar36->end();
            bVar4 = eastl::operator!=((eastl*)local_480, (hashtable_iterator_base*)pHVar36, extraout_RDX_07);
            if (bVar4) {
                do {
                    piVar43 = (int*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)local_480);
                    if ((*(int*)(local_b8._48_8_ + 1115284) <= piVar43[1]) &&
                        (piVar43[1] < *(int*)(local_b8._48_8_ + 1115284) + 8)) {
                        if ((*(int*)(local_b8._48_8_ + 1115288) <= piVar43[2]) &&
                            ((piVar43[2] < *(int*)(local_b8._48_8_ + 1115288) + 8 &&
                              (*piVar43 == *(int*)(local_b8._48_8_ + 51984))))) {
                            piVar43[13] = 0;
                        }
                    }
                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)local_480);
                    bVar4 = eastl::operator!=((eastl*)local_480, (hashtable_iterator_base*)&local_80, extraout_RDX_08);
                } while (bVar4);
            }
            goto switchD_1000ea3f5_default;
        case (BADTYPE)12:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            uVar14 = pSVar39->g2s();
            pPVar38 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_480->p2_alt2();
            iVar12 = pPVar38->g4();
            pPVar38 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_480->p2_alt2();
            sVar9 = pPVar38->g2s();
            psVar47 = (shared_ptr*)rs2lib::IfType::Get(iVar12);
            lVar28 = shared_ptr<rs2lib::IfType>::operator*((shared_ptr<rs2lib::IfType>*)psVar47);
            psVar41 = (shared_ptr*)CONCAT71((uint7)(uint3)((uint)uVar14 >> 8), 1);
            if ((((*(int*)(lVar28 + 48) != (int)sVar9) || (*(int*)(lVar28 + 52) != (int)(short)uVar14)) ||
                 (*(int*)(lVar28 + 32) != 0)) ||
                (*(int*)(lVar28 + 36) != 0)) {
                *(int*)(lVar28 + 48) = (int)sVar9;
                *(int*)(lVar28 + 52) = (int)(short)uVar14;
                *(undefined8*)(lVar28 + 32) = 0;
                ComponentUpdated((Client*)local_b8._48_8_, psVar47);
                InterfaceCalculateSizeAndPosComponent((Client*)local_b8._48_8_, psVar47);
                if (*(int*)(lVar28 + 12) == 0) {
                    pAVar60 = (Array*)
                        Array<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>,
                                   eastl::allocator>*)&rs2lib::IfType::m_list,
                            (long)(iVar12 >> 16));
                    InterfaceCalculateSizeAndPosSubcomponents((Client*)local_b8._48_8_, pAVar60, psVar47, false);
                }
            }
            break;
        case (BADTYPE)13:
            this_10 = (Minimap*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
                (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)(local_b8._48_8_ + 8152));
            bVar5 = pCVar44->g1();
            this_10->SetToggle((uint)bVar5);
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            break;
        case (BADTYPE)14:
            PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
                (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)&local_80, bVar4);
            pvVar70 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pCVar44->g8();
            uVar11 = pCVar44->g2();
            uVar14 = pCVar44->g3();
            bVar5 = pCVar44->g1();
            paVar29 = (array<int, 32ul>*)constants::ChatCrownType::FromId((uint)bVar5);
            puVar33 = (undefined1*)(local_b8._48_8_ + 53352);
            uVar63 = 0;
            local_c8 = pvVar70;
            local_c0 = paVar29;
            do {
                puVar52 = (ulong*)std::array<unsigned long long, 100ul>::operator[](
                    (array<unsigned long long, 100ul>*)puVar33, uVar63);
                uVar20 = local_b8._48_8_;
                if (*puVar52 == (ulong)CONCAT24(uVar11, uVar14)) {
                    pCVar44 = (Client*)CONCAT71((int7)((ulong)paVar29 >> 8), 1);
                    goto LAB_1000ed60e;
                }
                uVar63 = uVar63 + 1;
            } while (uVar63 != 100);
            pCVar44 = (Client*)0;
        LAB_1000ed60e:
            pCVar55 = pCVar44;
            if (local_c0[6] != (array<int, 32ul>)0) {
                pFVar53 = (FriendSystem*)std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                    (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)(local_b8._48_8_ + 52768));
                new (local_480) rs2lib::social::DisplayName(&local_80, *(undefined4*)(uVar20 + 54172));
                cVar3 = pFVar53->IsIgnored(local_480);
                local_480->~pair();
                pCVar55 = (Client*)&DAT_00000001;
                if (cVar3 == '\0') {
                    pCVar55 = (Client*)((ulong)pCVar44 & 255);
                }
            }
            pCVar44 = (Client*)local_b8._48_8_;
            if (((char)pCVar55 == '\0') && (*(undefined4*)(local_b8._48_8_ + 52440) == 0)) {
                iVar12 = *(int*)(local_b8._48_8_ + 54152);
                puVar52 = (ulong*)std::array<unsigned long long, 100ul>::operator[](
                    (array<unsigned long long, 100ul>*)puVar33, (long)iVar12);
                *puVar52 = (ulong)CONCAT24(uVar11, uVar14);
                *(int*)((long)pCVar44 + 54152) = (iVar12 + 1) % 100;
                eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
                pWVar54 = (WordPack*)std::unique_ptr<game::WordPack, std::default_delete<game::WordPack>>::operator->(
                    (unique_ptr<game::WordPack, std::default_delete<game::WordPack>>*)((long)((long)pCVar44 + 54172) +
                                                                                       4));
                pWVar54->UnpackCP1252AsUTF8((basic_string*)&local_128, (PacketT*)(local_4c0 + 8));
                pcVar46 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar63 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                local_480->Escape(pcVar46, uVar63);
                paVar29 = local_c0;
                pvVar70 = local_c8;
                core::stringtools::general::StringTools::ForceCapitalisationOfWords((basic_string*)local_480);
                if (*(int*)paVar29 == -1) {
                    local_b8->ToScreenName((longlong)pvVar70);
                    AddChat((Client*)local_b8._48_8_, 9, (basic_string*)&local_80, (basic_string*)local_480,
                            (basic_string*)local_b8);
                    pSVar51 = (SuperShuffledPacketFactory*)local_b8;
                } else {
                    local_f0->TAG_IMG(*(int*)paVar29);
                    eastl::operator+((eastl*)local_b8, (basic_string*)local_f0, (basic_string*)&local_80);
                    local_110->ToScreenName((longlong)pvVar70);
                    AddChat((Client*)local_b8._48_8_, 9, (basic_string*)local_b8, (basic_string*)local_480,
                            (basic_string*)local_110);
                    local_110->~basic_string();
                    local_b8->~basic_string();
                    pSVar51 = local_f0;
                }
                pSVar51->~basic_string();
                local_480->~basic_string();
                psVar41 = &local_128;
            LAB_1000ef459:
                psVar41->~basic_string();
                pCVar55 = pCVar44;
            }
            goto LAB_1000ef45e;
        case (BADTYPE)15:
            local_c8 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pCVar55;
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar26 = (ShuffledPacket3*)local_480->p2_alt2();
            uVar15 = pSVar26->g2();
            pSVar26 = (ShuffledPacket3*)local_480->p2_alt2();
            iVar12 = pSVar26->g4();
            psVar47 = (shared_ptr*)rs2lib::IfType::Get(iVar12);
            lVar28 = shared_ptr<rs2lib::IfType>::operator*((shared_ptr<rs2lib::IfType>*)psVar47);
            if (local_c8->field_0 != '\0') {
                uVar20 = logger::default_logger();
                logger::Logger::Log(uVar20, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    3274, "if_setmodel - com:%i m:%i", CONCAT44(uVar74, iVar12),
                                    CONCAT44(uVar75, uVar15) & 18446744069414649855);
            }
            psVar41 = (shared_ptr*)CONCAT71((uint7)(uint3)((uint)iVar12 >> 8), 1);
            if ((*(int*)(lVar28 + 228) != 1) || (*(uint*)(lVar28 + 232) != (uVar15 & 65535))) {
                *(undefined4*)(lVar28 + 228) = 1;
                *(uint*)(lVar28 + 232) = uVar15 & 65535;
                ComponentUpdated((Client*)local_b8._48_8_, psVar47);
            }
            break;
        case (BADTYPE)16:
            pCVar65 = pCVar44;
            cVar3 = pCVar44->g1();
            if (cVar3 == '\x01') {
                lVar28 = pCVar65->CurrentTimeMillis();
                lVar49 = pCVar44->g8();
                *(long*)(local_b8._48_8_ + 52856) = lVar28 - lVar49;
                this_04 = operator_new(32);
                rs2lib::ActiveOffersReply::ActiveOffersReply(this_04, (PacketJ*)pCVar44, true);
                pCVar55 = (Client*)this_04;
            } else {
                this_04 = (ActiveOffersReply*)0;
            }
            uVar20 = local_b8._48_8_;
            ((local_b8._48_8_ + 52848))->reset(this_04);
            *(int*)((long)(uVar20 + 2506360) + 4) = *(int*)(uVar20 + 2505808);
            psVar41 = (shared_ptr*)CONCAT71((int7)((ulong)pCVar55 >> 8), 1);
            break;
        case (BADTYPE)17:
            *(int*)(local_b8._48_8_ + 2506352) = *(int*)(local_b8._48_8_ + 2505808);
            cVar3 = pCVar44->g1s();
            make_shared<rs2lib::social::ClanSettingsDelta, core::SuperPacket&>((jag*)local_b8, (SuperPacket*)pCVar44);
            new (local_f0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(pCVar44);
            if (cVar3 < '\0') {
                shared_ptr<rs2lib::social::ClanSettings>::operator=((shared_ptr<rs2lib::social::ClanSettings>*)local_f0,
                                                                    (shared_ptr*)(local_b8._48_8_ + 52552));
            } else {
                psVar41 = (shared_ptr*)std::array<shared_ptr<rs2lib::social::ClanSettings>, 4ul>::operator[](
                    (array<shared_ptr<rs2lib::social::ClanSettings>, 4ul>*)(local_b8._48_8_ + 52568), (long)cVar3);
                shared_ptr<rs2lib::social::ClanSettings>::operator=((shared_ptr<rs2lib::social::ClanSettings>*)local_f0,
                                                                    psVar41);
            }
            bVar4 = operator==((shared_ptr*)local_f0, (_func_decltype_nullptr*)0);
            if (bVar4) {
                RequestClanSettingsFull((Client*)local_b8._48_8_, (int)cVar3);
            } else {
                lVar28 = shared_ptr<rs2lib::social::ClanSettingsDelta>::operator->(
                    (shared_ptr<rs2lib::social::ClanSettingsDelta>*)local_b8);
                iVar12 = *(int*)(lVar28 + 24);
                lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                    (shared_ptr<rs2lib::social::ClanSettings>*)local_f0);
                if (*(int*)(lVar28 + 8) < iVar12) {
                    RequestClanSettingsFull((Client*)local_b8._48_8_, (int)cVar3);
                } else {
                    lVar28 = shared_ptr<rs2lib::social::ClanSettingsDelta>::operator->(
                        (shared_ptr<rs2lib::social::ClanSettingsDelta>*)local_b8);
                    iVar12 = *(int*)(lVar28 + 24);
                    lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                        (shared_ptr<rs2lib::social::ClanSettings>*)local_f0);
                    if (*(int*)(lVar28 + 8) <= iVar12) {
                        this_13 = (ClanSettingsDelta*)shared_ptr<rs2lib::social::ClanSettingsDelta>::operator->(
                            (shared_ptr<rs2lib::social::ClanSettingsDelta>*)local_b8);
                        pCVar56 = (ClanSettings*)shared_ptr<rs2lib::social::ClanSettings>::operator*(
                            (shared_ptr<rs2lib::social::ClanSettings>*)local_f0);
                        this_13->ApplyToClanSettings(pCVar56);
                        if (*(char*)pCVar55 != '\0') {
                            uVar20 = logger::default_logger();
                            logger::Logger::Log(uVar20, 0, 5,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                "projects/osclient/client_network.cpp",
                                                2797, "----------");
                            uVar20 = logger::default_logger();
                            shared_ptr<rs2lib::social::ClanSettings>::operator->(
                                (shared_ptr<rs2lib::social::ClanSettings>*)local_f0);
                            uVar32 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            logger::Logger::Log(uVar20, 0, 5,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                "projects/osclient/client_network.cpp",
                                                2798, "Clan Name: %s", uVar32);
                            uVar76 = (undefined4)((ulong)uVar32 >> 32);
                            uVar20 = logger::default_logger();
                            lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                                (shared_ptr<rs2lib::social::ClanSettings>*)local_f0);
                            uVar14 = *(undefined4*)(lVar28 + 232);
                            lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                                (shared_ptr<rs2lib::social::ClanSettings>*)local_f0);
                            uVar58 = CONCAT44(uVar75, *(undefined4*)(lVar28 + 236));
                            uVar32 = CONCAT44(uVar76, uVar14);
                            logger::Logger::Log(uVar20, 0, 5,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                "projects/osclient/client_network.cpp",
                                                2799, "currentOwnerSlot: %i  replacementOwnerSlot: %i", uVar32, uVar58);
                            uVar14 = (undefined4)((ulong)uVar32 >> 32);
                            uVar76 = (undefined4)((ulong)uVar58 >> 32);
                            uVar20 = logger::default_logger();
                            lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                                (shared_ptr<rs2lib::social::ClanSettings>*)local_f0);
                            bVar5 = *(byte*)(lVar28 + 56);
                            lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                                (shared_ptr<rs2lib::social::ClanSettings>*)local_f0);
                            cVar3 = *(char*)(lVar28 + 57);
                            lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                                (shared_ptr<rs2lib::social::ClanSettings>*)local_f0);
                            cVar1 = *(char*)(lVar28 + 58);
                            lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                                (shared_ptr<rs2lib::social::ClanSettings>*)local_f0);
                            uVar32 = CONCAT44(uVar77, (int)cVar1);
                            logger::Logger::Log(uVar20, 0, 5,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                "projects/osclient/client_network.cpp",
                                                2800,
                                                "allowNonMembers: %i  rankTalk: %i  rankKick: %i, rankLootShare: %i",
                                                CONCAT44(uVar14, (uint)bVar5), CONCAT44(uVar76, (int)cVar3), uVar32,
                                                CONCAT44(uVar78, (int)*(char*)(lVar28 + 59)));
                            uVar20 = logger::default_logger();
                            logger::Logger::Log(uVar20, 0, 5,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                "projects/osclient/client_network.cpp",
                                                2801, "Members:");
                            pCVar55 = (Client*)0;
                            while (true) {
                                uVar14 = (undefined4)((ulong)uVar32 >> 32);
                                lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                                    (shared_ptr<rs2lib::social::ClanSettings>*)local_f0);
                                if ((long)*(int*)(lVar28 + 64) <= (long)pCVar55)
                                    break;
                                uVar20 = logger::default_logger();
                                lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                                    (shared_ptr<rs2lib::social::ClanSettings>*)local_f0);
                                cVar3 = ((lVar28 + 72))->empty();
                                puVar66 = &DAT_100e3aa9a;
                                local_b8[48] = cVar3;
                                if (cVar3 == '\0') {
                                    lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                                        (shared_ptr<rs2lib::social::ClanSettings>*)local_f0);
                                    plVar57 = (longlong*)eastl::vector<long long, eastl::allocator>::operator[](
                                        (vector<long long, eastl::allocator>*)(lVar28 + 72), (ulong)pCVar55);
                                    local_480->ToRawUsername(*plVar57);
                                    puVar66 = (undefined*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                }
                                lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                                    (shared_ptr<rs2lib::social::ClanSettings>*)local_f0);
                                eastl::vector<eastl::string, eastl::allocator>::operator[](
                                    (vector<eastl::string, eastl::allocator>*)(lVar28 + 280), (ulong)pCVar55);
                                uVar58 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                                    (shared_ptr<rs2lib::social::ClanSettings>*)local_f0);
                                pcVar46 = (char*)eastl::vector<signed char, eastl::allocator>::operator[](
                                    (vector<signed char, eastl::allocator>*)(lVar28 + 104), (ulong)pCVar55);
                                uVar32 = CONCAT44(uVar14, (int)*pcVar46);
                                logger::Logger::Log(uVar20, 0, 5,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "projects/osclient/client_network.cpp",
                                                    2805, "%s - %s - rank: %i", puVar66, uVar58, uVar32);
                                if (local_b8[48] == '\0') {
                                    local_480->~basic_string();
                                }
                                pCVar55 = (Client*)((long)pCVar55 + 1);
                            }
                            uVar20 = logger::default_logger();
                            logger::Logger::Log(uVar20, 0, 5,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                "projects/osclient/client_network.cpp",
                                                2808, "Banned:");
                            for (uVar63 = 0; lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                                                 (shared_ptr<rs2lib::social::ClanSettings>*)local_f0),
                                (long)uVar63 < (long)*(int*)(lVar28 + 240);
                                 uVar63 = uVar63 + 1) {
                                uVar20 = logger::default_logger();
                                lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                                    (shared_ptr<rs2lib::social::ClanSettings>*)local_f0);
                                uVar15 = ((lVar28 + 248))->empty();
                                pCVar55 = (Client*)(ulong)uVar15;
                                puVar66 = &DAT_100e3aa9a;
                                if ((char)uVar15 == '\0') {
                                    lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                                        (shared_ptr<rs2lib::social::ClanSettings>*)local_f0);
                                    plVar57 = (longlong*)eastl::vector<long long, eastl::allocator>::operator[](
                                        (vector<long long, eastl::allocator>*)(lVar28 + 248), uVar63);
                                    local_80.ToRawUsername(*plVar57);
                                    puVar66 = (undefined*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                }
                                lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                                    (shared_ptr<rs2lib::social::ClanSettings>*)local_f0);
                                eastl::vector<eastl::string, eastl::allocator>::operator[](
                                    (vector<eastl::string, eastl::allocator>*)(lVar28 + 312), uVar63);
                                uVar32 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                logger::Logger::Log(uVar20, 0, 5,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "projects/osclient/client_network.cpp",
                                                    2811, "%s - %s", puVar66, uVar32);
                                if ((char)uVar15 == '\0') {
                                    local_80.~basic_string();
                                }
                            }
                            uVar20 = logger::default_logger();
                            logger::Logger::Log(uVar20, 0, 5,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                "projects/osclient/client_network.cpp",
                                                2813, "----------");
                        }
                    }
                }
            }
            local_f0->~shared_ptr();
            local_b8->~shared_ptr();
            psVar41 = (shared_ptr*)CONCAT71((int7)((ulong)pCVar55 >> 8), 1);
            break;
        case (BADTYPE)18:
            LegacyUpdated((Client*)local_b8._48_8_);
            uVar8 = pCVar44->g2();
            *(uint*)(local_b8._48_8_ + 53272) = (uint)uVar8;
            goto LAB_1000eb88b;
        case (BADTYPE)19:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            uVar8 = pSVar39->g2();
            uVar15 = 4294967295;
            if (uVar8 != 65535) {
                uVar15 = (uint)uVar8;
            }
            pPVar38 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_480->p2_alt2();
            iVar12 = pPVar38->g4();
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            iVar19 = pSVar27->g4s();
            if (*(char*)pCVar55 != '\0') {
                uVar20 = logger::default_logger();
                logger::Logger::Log(uVar20, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    3548, "if_setobject c:%d obj:%d zoomorcount:%d", CONCAT44(uVar74, iVar12),
                                    CONCAT44(uVar75, uVar15), CONCAT44(uVar77, iVar19));
            }
            psVar41 = (shared_ptr*)rs2lib::IfType::Get(iVar12);
            pcVar46 = (char*)shared_ptr<rs2lib::IfType>::operator*((shared_ptr<rs2lib::IfType>*)psVar41);
            uVar72 = (undefined7)((ulong)pcVar46 >> 8);
            if (*pcVar46 == '\0') {
                if (uVar8 == 65535) {
                    pcVar46[228] = '\0';
                    pcVar46[229] = '\0';
                    pcVar46[230] = '\0';
                    pcVar46[231] = '\0';
                    psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
                    break;
                }
                local_480->List(uVar15);
                local_80.GetStackSizeAlt(local_480, iVar19);
                shared_ptr<configdecoder::ObjType>::operator=((shared_ptr<configdecoder::ObjType>*)local_480,
                                                              (shared_ptr*)&local_80);
                local_80.~shared_ptr();
                pcVar46[228] = '\x04';
                pcVar46[229] = '\0';
                pcVar46[230] = '\0';
                pcVar46[231] = '\0';
                *(uint*)(pcVar46 + 232) = uVar15;
                lVar28 = shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)local_480);
                *(undefined4*)(pcVar46 + 260) = *(undefined4*)(lVar28 + 180);
                lVar28 = shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)local_480);
                *(undefined4*)(pcVar46 + 264) = *(undefined4*)(lVar28 + 184);
                lVar28 = shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)local_480);
                *(int*)(pcVar46 + 272) = (*(int*)(lVar28 + 176) * 100) / iVar19;
                ComponentUpdated((Client*)local_b8._48_8_, psVar41);
            } else {
                *(uint*)(pcVar46 + 1984) = uVar15;
                *(int*)(pcVar46 + 1988) = iVar19;
                local_480->List(uVar15);
                local_80.GetStackSizeAlt(local_480, iVar19);
                shared_ptr<configdecoder::ObjType>::operator=((shared_ptr<configdecoder::ObjType>*)local_480,
                                                              (shared_ptr*)&local_80);
                local_80.~shared_ptr();
                lVar28 = shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)local_480);
                *(undefined4*)(pcVar46 + 260) = *(undefined4*)(lVar28 + 180);
                lVar28 = shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)local_480);
                *(undefined4*)(pcVar46 + 264) = *(undefined4*)(lVar28 + 184);
                lVar28 = shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)local_480);
                *(undefined4*)(pcVar46 + 268) = *(undefined4*)(lVar28 + 188);
                lVar28 = shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)local_480);
                *(undefined4*)(pcVar46 + 252) = *(undefined4*)(lVar28 + 192);
                lVar28 = shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)local_480);
                *(undefined4*)(pcVar46 + 256) = *(undefined4*)(lVar28 + 196);
                lVar28 = shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)local_480);
                iVar12 = *(int*)(lVar28 + 176);
                *(int*)(pcVar46 + 272) = iVar12;
                iVar19 = *(int*)(pcVar46 + 276);
                if ((0 < iVar19) || (iVar19 = *(int*)(pcVar46 + 56), 0 < iVar19)) {
                    *(int*)(pcVar46 + 272) = (iVar12 << 5) / iVar19;
                }
                ComponentUpdated((Client*)local_b8._48_8_, psVar41);
            }
            local_480->~shared_ptr();
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            break;
        case (BADTYPE)20:
            pFVar53 = (FriendSystem*)std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)(local_b8._48_8_ + 52768));
            pFVar53->NotifyConnectingFriendServer();
            *(int*)(uVar20 + 2506344) = *(int*)(uVar20 + 2505808);
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            break;
        case (BADTYPE)21:
            LegacyUpdated((Client*)local_b8._48_8_);
            sVar9 = pCVar44->g2s();
            *(int*)(local_b8._48_8_ + 53276) = (int)sVar9;
        LAB_1000eb88b:
            *(int*)(local_b8._48_8_ + 2506368) = *(int*)(local_b8._48_8_ + 2505808);
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            break;
        case (BADTYPE)22:
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            ZonePacket((Client*)local_b8._48_8_, 1, pCVar44);
            break;
        case (BADTYPE)23:
            iVar12 = pCVar44->gSmarts();
            cVar3 = pCVar44->g1();
            new (local_480) eastl::allocator("EASTL basic_string");
            new (&local_80) eastl::string("", local_480);
            if (cVar3 == '\x01') {
                PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
                    eastl::string>((PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_480,
                                   bVar4);
                eastl::string::operator=((eastl::string*)&local_80, (basic_string*)local_480);
                local_480->~basic_string();
                uVar20 = local_b8._48_8_;
                pCVar55 = (Client*)std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                    (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)(local_b8._48_8_ + 52768));
                new (local_480) rs2lib::social::DisplayName(&local_80, *(undefined4*)(uVar20 + 54172));
                cVar3 = pCVar55->IsIgnored(local_480);
                local_480->~pair();
            } else {
                cVar3 = '\0';
            }
            PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
                (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_480, bVar4);
            if (cVar3 == '\0') {
                AddChat((Client*)local_b8._48_8_, iVar12, (basic_string*)&local_80, (basic_string*)local_480);
            }
            local_480->~basic_string();
            goto LAB_1000ef45e;
        case (BADTYPE)24:
            PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
                (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)&local_80, bVar4);
            uVar15 = pCVar44->g2();
            uVar18 = pCVar44->g3();
            bVar5 = pCVar44->g1();
            local_c0 = (array<int, 32ul>*)constants::ChatCrownType::FromId((uint)bVar5);
            uVar63 = (ulong)uVar18 | ((ulong)uVar15 & 65535) << 32;
            puVar33 = (undefined1*)(local_b8._48_8_ + 53352);
            puVar52 = (ulong*)std::array<unsigned long long, 100ul>::operator[](
                (array<unsigned long long, 100ul>*)puVar33, 0);
            bVar4 = true;
            if (*puVar52 != uVar63) {
                uVar24 = 1;
                do {
                    bVar4 = uVar24 - 1 < 99;
                    if (uVar24 == 100)
                        break;
                    puVar52 = (ulong*)std::array<unsigned long long, 100ul>::operator[](
                        (array<unsigned long long, 100ul>*)puVar33, uVar24);
                    uVar24 = uVar24 + 1;
                } while (*puVar52 != uVar63);
            }
            pCVar44 = (Client*)local_b8._48_8_;
            pFVar53 = (FriendSystem*)std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)(local_b8._48_8_ + 52768));
            new (local_480) rs2lib::social::DisplayName(&local_80, *(undefined4*)((long)pCVar44 + 54172));
            cVar3 = pFVar53->IsIgnored(local_480);
            local_480->~pair();
            uVar20 = local_b8._48_8_;
            pCVar55 = pCVar44;
            if ((cVar3 == '\0' && !bVar4) && (*(undefined4*)(local_b8._48_8_ + 52440) == 0)) {
                iVar12 = *(int*)(local_b8._48_8_ + 54152);
                puVar52 = (ulong*)std::array<unsigned long long, 100ul>::operator[](
                    (array<unsigned long long, 100ul>*)puVar33, (long)iVar12);
                *puVar52 = uVar63;
                *(int*)(uVar20 + 54152) = (iVar12 + 1) % 100;
                eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
                pWVar54 = (WordPack*)std::unique_ptr<game::WordPack, std::default_delete<game::WordPack>>::operator->(
                    (unique_ptr<game::WordPack, std::default_delete<game::WordPack>>*)((long)(uVar20 + 54172) + 4));
                pWVar54->UnpackCP1252AsUTF8(local_110, (PacketT*)(local_4c0 + 8));
                pcVar46 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar63 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                local_480->Escape(pcVar46, uVar63);
                core::stringtools::general::StringTools::ForceCapitalisationOfWords((basic_string*)local_480);
                iVar12 = (uint)(byte)local_c0[5] * 4 + 3;
                if (*(int*)local_c0 == -1) {
                    AddChat((Client*)local_b8._48_8_, iVar12, (basic_string*)&local_80, (basic_string*)local_480);
                } else {
                    local_f0->TAG_IMG(*(int*)local_c0);
                    eastl::operator+((eastl*)local_b8, (basic_string*)local_f0, (basic_string*)&local_80);
                    AddChat((Client*)local_b8._48_8_, iVar12, (basic_string*)local_b8, (basic_string*)local_480);
                    local_b8->~basic_string();
                    local_f0->~basic_string();
                }
                local_480->~basic_string();
                psVar41 = local_110;
                goto LAB_1000ef459;
            }
            goto LAB_1000ef45e;
        case (BADTYPE)25:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            uVar18 = pSVar39->g2();
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            iVar12 = pSVar39->g4();
            uVar63 = (ulong)(ushort)uVar18;
            uVar15 = uVar18 & 65535;
            if (*(char*)pCVar55 != '\0') {
                uVar20 = logger::default_logger();
                logger::Logger::Log(uVar20, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    1591, "Received big variable:%i value:%i",
                                    CONCAT44(uVar74, uVar18) & 18446744069414649855, CONCAT44(uVar75, iVar12));
            }
            piVar43 = (int*)Array<int, eastl::allocator>::operator[](
                (Array<int, eastl::allocator>*)&ClientVarCache::m_varServ, uVar63);
            *piVar43 = iVar12;
            piVar43 = (int*)Array<int, eastl::allocator>::operator[](
                (Array<int, eastl::allocator>*)&ClientVarCache::m_var, uVar63);
            if (*piVar43 != iVar12) {
                piVar43 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&ClientVarCache::m_var, uVar63);
                *piVar43 = iVar12;
            }
            ClientVar((Client*)local_b8._48_8_, uVar15);
            goto LAB_1000eb344;
        case (BADTYPE)26:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar26 = (ShuffledPacket3*)local_480->p2_alt2();
            local_b8._0_4_ = pSVar26->g4();
            pPVar38 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_480->p2_alt2();
            uVar8 = pPVar38->g2();
            uVar15 = 4294967295;
            if (uVar8 != 65535) {
                uVar15 = (uint)uVar8;
            }
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            uVar18 = pSVar27->g4s();
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            uVar8 = pSVar27->g2();
            pHVar36 = (HookArg*)4294967295;
            if (uVar8 != 65535) {
                pHVar36 = (HookArg*)(ulong)uVar8;
            }
            iVar12 = (int)pHVar36;
            if (*(char*)pCVar55 != '\0') {
                uVar20 = logger::default_logger();
                logger::Logger::Log(uVar20, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    3779, "if_setevents - com:%d subid1:%d subid2:%d serveractive:%d",
                                    CONCAT44(uVar74, uVar18), CONCAT44(uVar75, iVar12), CONCAT44(uVar77, uVar15),
                                    CONCAT44(uVar78, local_b8._0_4_));
            }
            if (iVar12 <= (int)uVar15) {
                pHVar36 = (HookArg*)(local_b8._48_8_ + 2506512);
                pNVar68 = (NXTPixToolkit*)(((ulong)uVar18 << 32) + (long)iVar12);
                lVar28 = (long)(int)(uVar15 + 1) - (long)iVar12;
                local_b8._48_8_ = pHVar36;
                do {
                    local_80._0_8_ = pNVar68;
                    pHVar36->erase((ulonglong*)&local_80);
                    eastl::hashtable<unsigned long long, eastl::pair<unsigned long long const, int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<unsigned long long const, int>>,
                                     eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>,
                                     eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                                     false, true, true>::emplace<unsigned long long&, int&>((ulonglong*)local_480,
                                                                                            (int*)pHVar36);
                    pNVar68 = (NXTPixToolkit*)((long)&pNVar68->field_0 + 1);
                    lVar28 = lVar28 + -1;
                } while (lVar28 != 0);
            }
            goto switchD_1000ea3f5_default;
        case (BADTYPE)27:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            sVar9 = pSVar39->g2s();
            pPVar38 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_480->p2_alt2();
            uVar15 = pPVar38->g1();
            pPVar38 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_480->p2_alt2();
            uVar8 = pPVar38->g2();
            pSVar26 = (ShuffledPacket3*)local_480->p2_alt2();
            iVar12 = pSVar26->g4();
            psVar41 = (shared_ptr*)std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                (array<shared_ptr<ClientNpc>, 65536ul>*)(local_b8._48_8_ + 55272), (ulong)uVar8);
            bVar4 = operator!=(psVar41, (_func_decltype_nullptr*)0);
            if (!bVar4) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_npc[npcid] != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "client_network.cpp",
                          2150, (char*)0);
            }
            this_03 = (ClientNpc*)shared_ptr<ClientNpc>::operator*((shared_ptr<ClientNpc>*)psVar41);
            psVar41 = (shared_ptr*)CONCAT71((uint7)(uint3)(uVar15 >> 8), 1);
            this_03->SetHeadIcon(uVar15 & 255, iVar12, (int)sVar9);
            break;
        case (BADTYPE)28:
            if (*(char*)pCVar55 != '\0') {
                uVar20 = logger::default_logger();
                logger::Logger::Log(uVar20, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    1215, "logout");
            }
            Logout((Client*)local_b8._48_8_);
            goto LAB_1000e84af;
        case (BADTYPE)29:
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            ZonePacket((Client*)local_b8._48_8_, 3, pCVar44);
            break;
        case (BADTYPE)30:
            *(undefined2*)(local_b8._48_8_ + 52996) = 256;
            *(undefined1*)(local_b8._48_8_ + 52998) = 1;
            bVar5 = pCVar44->g1();
            *(uint*)(local_b8._48_8_ + 53004) = (uint)bVar5;
            bVar5 = pCVar44->g1();
            *(uint*)(local_b8._48_8_ + 53008) = (uint)bVar5;
            uVar15 = pCVar44->g2();
            uVar8 = pCVar44->g2();
            local_80.field_0 = (uint)uVar8;
            cVar3 = pCVar44->g1();
            *(bool*)(local_b8._48_8_ + 53000) = cVar3 == '\x01';
            local_b8[0] = pCVar44->g1();
            uVar18 = uVar15 & 65535;
            local_b8._1_3_ = 0;
            if (*(char*)pCVar55 != '\0') {
                pCVar44 = (Client*)logger::default_logger();
                logger::Logger::Log(pCVar44, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    3023, "cam_moveto_cycles lx:%d lz:%d hei:%d cycles:%d ignoreTerrain:%d easing:%d",
                                    CONCAT44(uVar74, *(int*)(local_b8._48_8_ + 53004)),
                                    CONCAT44(uVar75, *(int*)(local_b8._48_8_ + 53008)),
                                    CONCAT44(uVar77, uVar15) & 18446744069414649855, CONCAT44(uVar78, local_80.field_0),
                                    CONCAT44(uVar14, (uint)(byte) * (undefined1*)(local_b8._48_8_ + 53000)),
                                    CONCAT44(uVar76, local_b8._0_4_));
            }
            uVar20 = local_b8._48_8_;
            uVar14 = local_128._4_4_;
            local_f0[0].field_0._0_4_ = *(int*)(local_b8._48_8_ + 53004) << 7 | 64;
            local_110[0]._0_4_ = *(int*)(local_b8._48_8_ + 53008) << 7 | 64;
            local_128._0_8_ = (ulong)(uint)local_128._4_4_ << 32;
            local_b8._36_4_ = 0;
            if (*(undefined1*)(local_b8._48_8_ + 53000) == '\0') {
                iVar12 = GetAvH(pCVar44, *(int*)(local_b8._48_8_ + 53088), *(int*)(local_b8._48_8_ + 53096),
                                *(int*)(local_b8._48_8_ + 51984));
                local_128._0_4_ = iVar12 - *(int*)(uVar20 + 53092);
            } else {
                local_128._0_4_ = *(int*)(local_b8._48_8_ + 53092);
                local_128._0_8_ = CONCAT44(uVar14, local_128._0_4_);
                iVar12 =
                    GetAvH(pCVar44, (uint)local_f0[0].field_0, local_110[0]._0_4_, *(int*)(local_b8._48_8_ + 51984));
                uVar18 = iVar12 - uVar18;
            }
            local_b8._36_4_ = uVar18;
            std::make_unique<LinearMovementTween, int&, int&, int&, int const&, int const&, int&, int const&,
                             CinemaCameraTween::Easing_const&>(
                (int*)local_480, (int*)(uVar20 + 53088), (int*)(uVar20 + 53096), (int*)&local_128, (int*)local_f0,
                (int*)local_110, (int*)(local_b8 + 36), (Easing*)&local_80);
            std::unique_ptr<CinemaCameraMovementTween, std::default_delete<CinemaCameraMovementTween>>::operator=(
                (unique_ptr<CinemaCameraMovementTween, std::default_delete<CinemaCameraMovementTween>>*)(uVar20 +
                                                                                                         53064),
                (unique_ptr*)local_480);
            local_480->~unique_ptr();
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            break;
        case (BADTYPE)31:
            iVar12 = pCVar44->GetTextureAtlas();
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            ReceivePlayerPositions::GetPlayerInfo((SuperPacket*)pCVar44, iVar12);
            break;
        case (BADTYPE)32:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            iVar12 = pSVar27->g4s();
            pPVar38 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_480->p2_alt2();
            uVar15 = pPVar38->g2();
            psVar47 = (shared_ptr*)rs2lib::IfType::Get(iVar12);
            lVar28 = shared_ptr<rs2lib::IfType>::operator*((shared_ptr<rs2lib::IfType>*)psVar47);
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            if ((*(int*)(lVar28 + 228) != 2) || (*(uint*)(lVar28 + 232) != (uVar15 & 65535))) {
                *(undefined4*)(lVar28 + 228) = 2;
                *(uint*)(lVar28 + 232) = uVar15 & 65535;
                ComponentUpdated((Client*)local_b8._48_8_, psVar47);
            }
            break;
        case (BADTYPE)33:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            iVar12 = pSVar27->g4s();
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            iVar19 = pSVar27->g2();
            pSVar26 = (ShuffledPacket3*)local_480->p2_alt2();
            uVar15 = pSVar26->g2();
            this_05 = (shared_ptr<rs2lib::IfType>*)rs2lib::IfType::Get(iVar12);
            lVar28 = shared_ptr<rs2lib::IfType>::operator*(this_05);
            *(uint*)(lVar28 + 284) = iVar19 << 16 | uVar15 & 65535;
            psVar41 = (shared_ptr*)CONCAT71((uint7)(uint3)((uint)iVar12 >> 8), 1);
            break;
        case (BADTYPE)34:
            uVar15 = HandleUpdateFriendChatChannelFullServerProt((Client*)local_b8._48_8_, (SuperPacket*)pCVar44, 2);
            goto LAB_1000e9a14;
        case (BADTYPE)35:
            local_c8 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pCVar55;
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            uVar15 = pSVar27->g2();
            uVar18 = 4294967295;
            if ((short)uVar15 != -1) {
                uVar18 = uVar15 & 65535;
            }
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            uVar17 = pSVar39->g1();
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            uVar8 = pSVar39->g2();
            psVar41 = (shared_ptr*)std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                (array<shared_ptr<ClientNpc>, 65536ul>*)(local_b8._48_8_ + 55272), (ulong)uVar8);
            bVar4 = operator!=(psVar41, (_func_decltype_nullptr*)0);
            if (!bVar4) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_npc[npcid] != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "client_network.cpp",
                          2096, (char*)0);
            }
            lVar28 = shared_ptr<ClientNpc>::operator*((shared_ptr<ClientNpc>*)psVar41);
            if ((uVar18 == 4294967295) || (uVar18 != *(uint*)(lVar28 + 372))) {
                local_b8._48_8_ = CONCAT44(local_b8._52_4_, uVar17) & 18446744069414584575;
                bVar4 = true;
                if (*(uint*)(lVar28 + 372) != 4294967295 && (short)uVar15 != -1) {
                    local_480->List(uVar18);
                    lVar49 =
                        shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)local_480);
                    uVar15 = *(uint*)(lVar49 + 228);
                    local_80.List(*(int*)(lVar28 + 372));
                    lVar49 =
                        shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)&local_80);
                    bVar4 = *(int*)(lVar49 + 228) <= (int)uVar15;
                    local_80.~shared_ptr();
                    local_480->~shared_ptr();
                }
                psVar41 = (shared_ptr*)CONCAT71((uint7)(uint3)(uVar15 >> 8), 1);
                if (bVar4) {
                    uVar14 = local_b8._48_4_;
                    if (local_c8->field_0 != '\0') {
                        uVar20 = logger::default_logger();
                        logger::Logger::Log(uVar20, 0, 5,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                            "osclient/client_network.cpp",
                                            2117, "Got npc anim: %d delay:%d", CONCAT44(uVar74, uVar18),
                                            CONCAT44(uVar75, uVar14));
                    }
                    *(uint*)(lVar28 + 372) = uVar18;
                    *(undefined8*)(lVar28 + 376) = 0;
                    *(undefined4*)(lVar28 + 384) = uVar14;
                    *(undefined4*)(lVar28 + 388) = 0;
                    *(undefined4*)(lVar28 + 540) = *(undefined4*)(lVar28 + 440);
                }
            } else {
                if (local_c8->field_0 != '\0') {
                    uVar20 = logger::default_logger();
                    logger::Logger::Log(uVar20, 0, 5,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/client_network.cpp",
                                        2101, "Duplicate npc anim: %d delay:%d", CONCAT44(uVar74, uVar18),
                                        CONCAT44(uVar75, uVar17) & 18446744069414584575);
                }
                local_480->List(uVar18);
                lVar49 = shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)local_480);
                iVar12 = *(int*)(lVar49 + 256);
                local_480->~shared_ptr();
                psVar41 = (shared_ptr*)CONCAT71((uint7)(uint3)(uVar15 >> 8), 1);
                if (iVar12 == 2) {
                    *(undefined4*)(lVar28 + 388) = 0;
                } else if (iVar12 == 1) {
                    *(undefined8*)(lVar28 + 376) = 0;
                    *(uint*)(lVar28 + 384) = uVar17 & 255;
                    *(undefined4*)(lVar28 + 388) = 0;
                }
            }
            break;
        case (BADTYPE)36:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            uVar8 = pSVar39->g2();
            uVar15 = (uint)uVar8;
            ClientInvCache::Delete((uint)uVar8);
            goto LAB_1000ee005;
        case (BADTYPE)37:
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            HandleUpdateFriendChatChannelSingleUserServerProt((Client*)local_b8._48_8_, (SuperPacket*)pCVar44);
            break;
        case (BADTYPE)38:
            uVar20 = logger::default_logger();
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            logger::Logger::Log(
                uVar20, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_network.cpp",
                1286, "Unimplemented Serverprot REFLECTION_CHECKER");
            break;
        case (BADTYPE)39:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            uVar15 = pSVar39->g1();
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            uVar18 = pSVar39->g1();
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            iVar12 = pSVar39->g4();
            psVar47 = (shared_ptr*)rs2lib::IfType::Get(iVar12);
            pIVar30 = (IfType*)shared_ptr<rs2lib::IfType>::operator*((shared_ptr<rs2lib::IfType>*)psVar47);
            PlayerModelUtil::SetPlayerModelColour(pIVar30, uVar18 & 255, uVar15 & 255);
            psVar41 = (shared_ptr*)CONCAT71((uint7)(uint3)(uVar18 >> 8), 1);
            ComponentUpdated((Client*)local_b8._48_8_, psVar47);
            break;
        case (BADTYPE)40:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pPVar38 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_480->p2_alt2();
            uVar8 = pPVar38->g2();
            if (*(char*)pCVar55 != '\0') {
                uVar20 = logger::default_logger();
                logger::Logger::Log(uVar20, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    3843, "if_opentop - ifid:%i", CONCAT44(uVar74, (uint)uVar8));
            }
            *(uint*)(local_b8._48_8_ + 53216) = (uint)uVar8;
            InterfaceCalculateSizeAndPosAll((Client*)local_b8._48_8_, false, false);
            IfAnimReset((Client*)local_b8._48_8_, (uint)uVar8);
            ScriptRunner::OnLoad(*(int*)(local_b8._48_8_ + 53216));
            local_b8._48_8_ = local_b8._48_8_ + 2506576;
            uVar63 = 0;
            psVar41 = (shared_ptr*)pCVar55;
            do {
                puVar33 =
                    (undefined1*)std::array<bool, 100ul>::operator[]((array<bool, 100ul>*)local_b8._48_8_, uVar63);
                *puVar33 = 1;
                uVar63 = uVar63 + 1;
                psVar41 = (shared_ptr*)CONCAT71((int7)((ulong)psVar41 >> 8), 1);
            } while (uVar63 != 100);
            break;
        case (BADTYPE)41:
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            if (*(int*)(local_b8._48_8_ + 53216) != -1) {
                RunHookImmediate((Client*)local_b8._48_8_, *(int*)(local_b8._48_8_ + 53216), 23);
            }
            break;
        case (BADTYPE)42:
            local_c8 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pCVar55;
            PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
                (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_b8, bVar4);
            eastl::vector<int, BucketAllocatorEASTL>::vector();
            local_128._0_8_ = 0;
            lVar28 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (lVar28 != 0) {
                pCVar55 = (Client*)local_110;
                do {
                    pcVar46 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    local_480._0_4_ = stringtools::GetUTF8NextChar(pcVar46, (ulong*)&local_128);
                    pCVar55->push_back(local_480);
                    uVar20 = local_128._0_8_;
                    uVar63 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                } while ((ulong)uVar20 < uVar63);
            }
            if (local_c8->field_0 != '\0') {
                uVar20 = logger::default_logger();
                uVar32 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(uVar20, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    3807, "runclientscript - params:%s", uVar32);
            }
            new (local_480) HookReq();
            lVar28 = local_110->size();
            local_480->set_max_size(lVar28 + 1, 1);
            uVar63 = local_110->size();
            if (uVar63 != 0) {
                pCVar55 = (Client*)local_f0;
                do {
                    uVar24 = uVar63 - 1;
                    piVar43 = (int*)eastl::vector<int, BucketAllocatorEASTL>::operator[](
                        (vector<int, BucketAllocatorEASTL>*)local_110, uVar24);
                    if (*piVar43 == 115) {
                        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
                            eastl::string>(
                            (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)pCVar55,
                            (bool)((char)local_4c0 + '\b'));
                        new (&local_80) HookArg(pCVar55);
                        pHVar36 = (HookArg*)Array<HookArg, eastl::allocator>::operator[](
                            (Array<HookArg, eastl::allocator>*)local_480, uVar63);
                        HookArg::operator=(pHVar36, &local_80);
                        local_80.~LanguageMessage();
                        pCVar55->~basic_string();
                    } else {
                        iVar12 = ((local_4c0 + 8))->g4();
                        new (&local_80) HookArg(iVar12);
                        pHVar36 = (HookArg*)Array<HookArg, eastl::allocator>::operator[](
                            (Array<HookArg, eastl::allocator>*)local_480, uVar63);
                        HookArg::operator=(pHVar36, &local_80);
                        local_80.~LanguageMessage();
                    }
                    uVar63 = uVar24;
                } while (uVar24 != 0);
            }
            iVar12 = ((local_4c0 + 8))->g4();
            new (&local_80) HookArg(iVar12);
            pHVar36 =
                (HookArg*)Array<HookArg, eastl::allocator>::operator[]((Array<HookArg, eastl::allocator>*)local_480, 0);
            HookArg::operator=(pHVar36, &local_80);
            local_80.~LanguageMessage();
            ScriptRunner::ExecuteScript((HookReq*)local_480, 500000);
            local_480->~HookReq();
            local_110->~vector_set();
            pHVar36 = (HookArg*)local_b8;
            goto LAB_1000ef462;
        case (BADTYPE)43:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar26 = (ShuffledPacket3*)local_480->p2_alt2();
            cVar3 = pSVar26->g1s();
            pSVar26 = (ShuffledPacket3*)local_480->p2_alt2();
            uVar8 = pSVar26->g2();
            iVar12 = (int)cVar3;
            uVar63 = (ulong)uVar8;
            uVar15 = (uint)uVar8;
            if (*(char*)pCVar55 != '\0') {
                uVar20 = logger::default_logger();
                logger::Logger::Log(uVar20, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    1562, "Received small variable:%i value:%i", CONCAT44(uVar74, uVar15),
                                    CONCAT44(uVar75, iVar12));
            }
            piVar43 = (int*)Array<int, eastl::allocator>::operator[](
                (Array<int, eastl::allocator>*)&ClientVarCache::m_varServ, uVar63);
            *piVar43 = iVar12;
            piVar43 = (int*)Array<int, eastl::allocator>::operator[](
                (Array<int, eastl::allocator>*)&ClientVarCache::m_var, uVar63);
            if (*piVar43 != iVar12) {
                piVar43 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&ClientVarCache::m_var, uVar63);
                *piVar43 = iVar12;
            }
            ClientVar((Client*)local_b8._48_8_, uVar15);
        LAB_1000eb344:
            uVar18 = *(undefined4*)(local_b8._48_8_ + 2505940);
            *(uint*)(local_b8._48_8_ + 2505940) = uVar18 + 1;
            puVar61 = (uint*)std::array<int, 32ul>::operator[]((array<int, 32ul>*)(local_b8._48_8_ + 2505812),
                                                               (ulong)(uVar18 & 31));
            *puVar61 = uVar15;
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            break;
        case (BADTYPE)44:
            *(undefined2*)(local_b8._48_8_ + 52996) = 256;
            *(char*)(local_b8._48_8_ + 52999) = '\x01';
            bVar5 = pCVar44->g1();
            *(uint*)(local_b8._48_8_ + 53024) = (uint)bVar5;
            bVar5 = pCVar44->g1();
            *(uint*)(local_b8._48_8_ + 53028) = (uint)bVar5;
            uVar8 = pCVar44->g2();
            *(uint*)(local_b8._48_8_ + 53032) = (uint)uVar8;
            uVar8 = pCVar44->g2();
            local_80.field_0 = (uint)uVar8;
            local_b8[0] = pCVar44->g1();
            uVar20 = local_b8._48_8_;
            local_b8._1_3_ = 0;
            uVar18 = *(int*)(local_b8._48_8_ + 53024) << 7 | 64;
            uVar15 = *(int*)(local_b8._48_8_ + 53028) << 7 | 64;
            iVar12 = GetAvH(pCVar44, uVar18, uVar15, *(int*)(local_b8._48_8_ + 51984));
            iVar16 = uVar18 - *(int*)(uVar20 + 53088);
            iVar19 = uVar15 - *(int*)(uVar20 + 53096);
            uVar15 = iVar12 - (*(int*)(uVar20 + 53032) + *(int*)(uVar20 + 53092));
            pCVar55 = (Client*)(ulong)uVar15;
            dVar73 = (double)sqrt<int>(iVar19 * iVar19 + iVar16 * iVar16);
            dVar73 = (double)atan2<int, double>(uVar15, dVar73);
            local_f0[0].field_0._0_4_ = dash3d::world::ClampPitchAngle((int)(dVar73 * 325.9490051269531) & 2047);
            dVar73 = (double)atan2<int, int>(iVar16, iVar19);
            local_110[0]._0_4_ = WrapYawAngle((Client*)uVar20, (int)(dVar73 * -325.9490051269531) & 2047);
            if (*(char*)(uVar20 + 54760) != '\0') {
                uVar32 = logger::default_logger();
                logger::Logger::Log(uVar32, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    3066, "cam_rotateto_coordinate lx:%d lz:%d hei:%d cycles:%d easing:%d",
                                    CONCAT44(uVar74, *(int*)(uVar20 + 53024)),
                                    CONCAT44(uVar75, *(int*)(uVar20 + 53028)),
                                    CONCAT44(uVar77, *(int*)(uVar20 + 53032)), CONCAT44(uVar78, local_80.field_0),
                                    CONCAT44(uVar14, local_b8._0_4_));
            }
            std::make_unique<CinemaCameraRotationTween, int&, int const&, int const&, CinemaCameraTween::Easing_const&>(
                (int*)local_480, (int*)(uVar20 + 53100), (int*)local_f0, (Easing*)&local_80);
            std::unique_ptr<CinemaCameraRotationTween, std::default_delete<CinemaCameraRotationTween>>::operator=(
                (unique_ptr<CinemaCameraRotationTween, std::default_delete<CinemaCameraRotationTween>>*)(uVar20 +
                                                                                                         53072),
                (unique_ptr*)local_480);
            local_480->~unique_ptr();
            std::make_unique<CinemaCameraRotationTween, int&, int const&, int const&, CinemaCameraTween::Easing_const&>(
                (int*)local_480, (int*)(uVar20 + 53104), (int*)local_110, (Easing*)&local_80);
            std::unique_ptr<CinemaCameraRotationTween, std::default_delete<CinemaCameraRotationTween>>::operator=(
                (unique_ptr<CinemaCameraRotationTween, std::default_delete<CinemaCameraRotationTween>>*)(uVar20 +
                                                                                                         53080),
                (unique_ptr*)local_480);
            goto LAB_1000ecff7;
        case (BADTYPE)45:
            uVar20 = logger::default_logger();
            logger::Logger::Log(
                uVar20, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_network.cpp",
                1238, "Unimplemented Serverprot UPDATE_REBOOT_TIMER");
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar26 = (ShuffledPacket3*)local_480->p2_alt2();
            uVar8 = pSVar26->g2();
            *(uint*)(local_b8._48_8_ + 53268) = ((uint)uVar8 * 32 - (uint)uVar8) - (uint)uVar8;
            *(int*)(local_b8._48_8_ + 2506368) = *(int*)(local_b8._48_8_ + 2505808);
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            break;
        case (BADTYPE)46:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar26 = (ShuffledPacket3*)local_480->p2_alt2();
            uVar15 = pSVar26->g2();
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            uVar13 = pSVar39->g2();
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            uVar18 = pSVar39->g2();
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            uVar8 = pSVar27->g2();
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            uVar17 = pSVar27->g2();
            local_b8._0_4_ = 4294967295;
            if (uVar8 != 65535) {
                local_b8._0_4_ = (uint)uVar8;
            }
            new (&local_80) eastl::allocator("EASTL vector");
            eastl::vector<int, eastl::allocator>::vector(local_480, local_b8, 1, &local_80);
            PlaySongs((Client*)local_b8._48_8_, (vector*)local_480, uVar17 & 65535, uVar13 & 65535, uVar18 & 65535,
                      uVar15 & 65535);
            goto LAB_1000ec795;
        case (BADTYPE)47:
            LegacyUpdated((Client*)local_b8._48_8_);
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            uVar15 = pSVar27->g1();
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            uVar18 = pSVar39->g1();
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            iVar12 = pSVar39->g4();
            uVar20 = local_b8._48_8_;
            uVar24 = (ulong)uVar18 & 255;
            piVar43 = (int*)std::array<int, 25ul>::operator[]((array<int, 25ul>*)(local_b8._48_8_ + 52240), uVar24);
            *piVar43 = iVar12;
            puVar61 = (uint*)std::array<int, 25ul>::operator[]((array<int, 25ul>*)(uVar20 + 52040), uVar24);
            *puVar61 = uVar15 & 255;
            piVar43 = (int*)std::array<int, 25ul>::operator[]((array<int, 25ul>*)(uVar20 + 52140), uVar24);
            *piVar43 = 1;
            uVar63 = 0;
            do {
                piVar31 = (int*)std::array<int, 99ul>::operator[](uVar63);
                if (*piVar31 <= iVar12) {
                    *piVar43 = (int)uVar63 + 2;
                }
                uVar63 = uVar63 + 1;
            } while (uVar63 != 98);
            uVar15 = *(undefined4*)(local_b8._48_8_ + 2506204);
            *(uint*)(local_b8._48_8_ + 2506204) = uVar15 + 1;
            puVar23 = (undefined4*)std::array<int, 32ul>::operator[]((array<int, 32ul>*)(local_b8._48_8_ + 2506076),
                                                                     (ulong)(uVar15 & 31));
            *puVar23 = (int)uVar24;
            psVar41 = (shared_ptr*)CONCAT71((int7)((ulong)piVar43 >> 8), 1);
            break;
        case (BADTYPE)48:
            EnableClanVarValues((Client*)local_b8._48_8_);
            std::pair<unsigned int, game::VarValue>::pair<true, false>((pair<unsigned int, game::VarValue>*)local_480);
            this_06 = (OldscapeVarTypeList*)shared_ptr<configdecoder::OldscapeVarTypeList>::operator->(
                (shared_ptr<configdecoder::OldscapeVarTypeList>*)(local_b8._48_8_ + 52512));
            this_06->DecodeVarValue(local_480, pCVar44);
            this_07 = (VarContainerSparse*)shared_ptr<game::VarContainerSparse>::operator->(
                (shared_ptr<game::VarContainerSparse>*)(local_b8._48_8_ + 52528));
            this_07->SetVarValueByID(local_480._0_4_, local_478);
            uVar14 = local_480._0_4_;
            uVar15 = *(uint*)(local_b8._48_8_ + 2506336);
            *(uint*)(local_b8._48_8_ + 2506336) = uVar15 + 1;
            puVar61 = (uint*)std::array<int, 32ul>::operator[]((array<int, 32ul>*)(local_b8._48_8_ + 2506208),
                                                               (ulong)(uVar15 & 31));
            *puVar61 = uVar14;
            local_480->~pair();
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            break;
        case (BADTYPE)49:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pPVar38 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_480->p2_alt2();
            uVar8 = pPVar38->g2();
            uVar15 = 4294967295;
            if (uVar8 != 65535) {
                uVar15 = (uint)uVar8;
            }
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            PlaySong((Client*)local_b8._48_8_, uVar15);
            break;
        case (BADTYPE)50:
            uVar15 = HandleUpdateFriendChatChannelFullServerProt((Client*)local_b8._48_8_, (SuperPacket*)pCVar44, 1);
        LAB_1000e9a14:
            psVar41 = (shared_ptr*)(ulong)uVar15;
            break;
        case (BADTYPE)51:
            PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
                (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_480, bVar4);
            this_11 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)local_b8._48_8_)();
            plVar42 = (long*)shared_ptr<ApplicationContext>::operator->(this_11);
            (**(code**)(*plVar42 + 192))(plVar42, local_480, 1);
            goto LAB_1000ec994;
        case (BADTYPE)52:
            *(undefined2*)(local_b8._48_8_ + 52996) = 256;
            *(undefined1*)(local_b8._48_8_ + 52998) = 1;
            bVar5 = pCVar44->g1();
            *(uint*)(local_b8._48_8_ + 53004) = (uint)bVar5;
            bVar5 = pCVar44->g1();
            *(uint*)(local_b8._48_8_ + 53008) = (uint)bVar5;
            uVar15 = pCVar44->g2();
            bVar5 = pCVar44->g1();
            local_80._0_8_ = CONCAT44(local_80._4_4_, (uint)bVar5 << 7) | 64;
            bVar5 = pCVar44->g1();
            local_b8._0_8_ = CONCAT44(local_b8._4_4_, (uint)bVar5 << 7) | 64;
            uVar8 = pCVar44->g2();
            local_f0[0].field_0._0_4_ = (uint)uVar8;
            cVar3 = pCVar44->g1();
            *(bool*)(local_b8._48_8_ + 53000) = cVar3 == '\x01';
            bVar5 = pCVar44->g1();
            uVar18 = uVar15 & 65535;
            local_110[0]._0_4_ = ZEXT14(bVar5);
            if (*(char*)pCVar55 != '\0') {
                pCVar44 = (Client*)logger::default_logger();
                logger::Logger::Log(
                    pCVar44, 0, 5,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                    "client_network.cpp",
                    3130,
                    "cam_moveto_arc lx:%d lz:%d hei:%d tertiaryx:%d tertiaryz:%d cycles:%d ignoreTerrain:%d easing:%d",
                    CONCAT44(uVar74, *(int*)(local_b8._48_8_ + 53004)),
                    CONCAT44(uVar75, *(int*)(local_b8._48_8_ + 53008)), CONCAT44(uVar77, uVar15) & 18446744069414649855,
                    CONCAT44(uVar78, local_80.field_0), CONCAT44(uVar14, local_b8._0_4_),
                    CONCAT44(uVar76, (uint)local_f0[0].field_0), *(undefined1*)(local_b8._48_8_ + 53000),
                    local_110[0]._0_4_);
            }
            uVar20 = local_b8._48_8_;
            uVar15 = *(int*)(local_b8._48_8_ + 53004) << 7;
            local_128._0_8_ = CONCAT44(local_128._4_4_, uVar15) | 64;
            local_b8._36_4_ = *(int*)(local_b8._48_8_ + 53008) << 7 | 64;
            local_b8._44_4_ = 0;
            local_b8._40_4_ = 0;
            if (*(undefined1*)(local_b8._48_8_ + 53000) == '\0') {
                iVar12 = GetAvH(pCVar44, *(int*)(local_b8._48_8_ + 53088), *(int*)(local_b8._48_8_ + 53096),
                                *(int*)(local_b8._48_8_ + 51984));
                local_b8._44_4_ = iVar12 - *(int*)(uVar20 + 53092);
            } else {
                local_b8._44_4_ = *(int*)(local_b8._48_8_ + 53092);
                iVar12 = GetAvH(pCVar44, uVar15 | 64, local_b8._36_4_, *(int*)(local_b8._48_8_ + 51984));
                uVar18 = iVar12 - uVar18;
            }
            local_b8._40_4_ = uVar18;
            std::make_unique<ArcMovementTween, int&, int&, int&, int const&, int const&, int&, int const&, int const&,
                             int const&, CinemaCameraTween::Easing_const&>(
                (int*)local_480, (int*)(uVar20 + 53088), (int*)(uVar20 + 53096), (int*)(local_b8 + 44),
                (int*)&local_128, (int*)(local_b8 + 36), (int*)(local_b8 + 40), (int*)&local_80, (int*)local_b8,
                (Easing*)local_f0);
            std::unique_ptr<CinemaCameraMovementTween, std::default_delete<CinemaCameraMovementTween>>::operator=(
                (unique_ptr<CinemaCameraMovementTween, std::default_delete<CinemaCameraMovementTween>>*)(uVar20 +
                                                                                                         53064),
                (unique_ptr*)local_480);
            local_480->~unique_ptr();
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            break;
        case (BADTYPE)53:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar26 = (ShuffledPacket3*)local_480->p2_alt2();
            uVar15 = pSVar26->g2();
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            uVar18 = pSVar27->g2();
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            uVar17 = pSVar27->g2();
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            uVar8 = pSVar39->g2();
            psVar41 = (shared_ptr*)CONCAT71((uint7)(uint3)(uVar18 >> 8), 1);
            midi2::MidiManager::SwapSongs(uVar15 & 65535, uVar18 & 65535, (uint)uVar8, uVar17 & 65535);
            break;
        case (BADTYPE)54:
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            GetNPCPos((Client*)local_b8._48_8_, false, (SuperPacket*)pCVar44);
            break;
        case (BADTYPE)55:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar26 = (ShuffledPacket3*)local_480->p2_alt2();
            cVar3 = pSVar26->g1();
            pPVar38 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_480->p2_alt2();
            iVar12 = pPVar38->g4();
            psVar47 = (shared_ptr*)rs2lib::IfType::Get(iVar12);
            lVar28 = shared_ptr<rs2lib::IfType>::operator*((shared_ptr<rs2lib::IfType>*)psVar47);
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            if ((bool)*(char*)(lVar28 + 92) != (cVar3 == '\x01')) {
                *(bool*)(lVar28 + 92) = cVar3 == '\x01';
                ComponentUpdated((Client*)local_b8._48_8_, psVar47);
            }
            break;
        case (BADTYPE)56:
            new (local_480) eastl::string();
            new (local_b8) SuperShuffledPacketFactory(pCVar44);
            bVar4 = (bool)local_b8->p2_alt2();
            PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
                (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)&local_80, bVar4);
            eastl::string::operator=((eastl::string*)local_480, (basic_string*)&local_80);
            local_80.~basic_string();
            pSVar39 = (ShuffledPacket2*)local_b8->p2_alt2();
            iVar12 = pSVar39->g4();
            psVar41 = (shared_ptr*)rs2lib::IfType::Get(iVar12);
            lVar28 = shared_ptr<rs2lib::IfType>::operator*((shared_ptr<rs2lib::IfType>*)psVar41);
            bVar4 = eastl::operator!=((basic_string*)local_480, (basic_string*)(lVar28 + 320));
            if (bVar4) {
                eastl::string::operator=((eastl::string*)(lVar28 + 320), (basic_string*)local_480);
                ComponentUpdated((Client*)local_b8._48_8_, psVar41);
            }
            goto LAB_1000ec994;
        case (BADTYPE)57:
            NotifyClanSettingsUpdate((Client*)local_b8._48_8_);
            cVar3 = pCVar44->g1s();
            lVar28 = pCVar44->GetTextureAtlas();
            if (lVar28 == 1) {
                if (cVar3 < '\0') {
                    new (local_480) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    shared_ptr<rs2lib::social::ClanSettings>::operator=(
                        (shared_ptr<rs2lib::social::ClanSettings>*)(local_b8._48_8_ + 52552), (shared_ptr*)local_480);
                } else {
                    new (local_480) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    psVar37 = (shared_ptr<rs2lib::social::ClanSettings>*)
                        std::array<shared_ptr<rs2lib::social::ClanSettings>, 4ul>::operator[](
                            (array<shared_ptr<rs2lib::social::ClanSettings>, 4ul>*)(local_b8._48_8_ + 52568),
                            (long)cVar3);
                    shared_ptr<rs2lib::social::ClanSettings>::operator=(psVar37, (shared_ptr*)local_480);
                }
                this_15 = (shared_ptr<RSevenDebugPresetProvider>*)local_480;
            } else {
                new (local_b8) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(this_14);
                if (cVar3 < '\0') {
                    make_shared<rs2lib::social::ClanSettings, core::SuperPacket&>((jag*)local_480,
                                                                                  (SuperPacket*)pCVar44);
                    psVar41 = (shared_ptr*)shared_ptr<rs2lib::social::ClanSettings>::operator=(
                        (shared_ptr<rs2lib::social::ClanSettings>*)(local_b8._48_8_ + 52552), (shared_ptr*)local_480);
                    shared_ptr<rs2lib::social::ClanSettings>::operator=(
                        (shared_ptr<rs2lib::social::ClanSettings>*)local_b8, psVar41);
                } else {
                    make_shared<rs2lib::social::ClanSettings, core::SuperPacket&>((jag*)local_480,
                                                                                  (SuperPacket*)pCVar44);
                    psVar37 = (shared_ptr<rs2lib::social::ClanSettings>*)
                        std::array<shared_ptr<rs2lib::social::ClanSettings>, 4ul>::operator[](
                            (array<shared_ptr<rs2lib::social::ClanSettings>, 4ul>*)(local_b8._48_8_ + 52568),
                            (long)cVar3);
                    psVar41 = (shared_ptr*)shared_ptr<rs2lib::social::ClanSettings>::operator=(psVar37,
                                                                                               (shared_ptr*)local_480);
                    shared_ptr<rs2lib::social::ClanSettings>::operator=(
                        (shared_ptr<rs2lib::social::ClanSettings>*)local_b8, psVar41);
                }
                local_480->~shared_ptr();
                if (*(char*)pCVar55 != '\0') {
                    uVar20 = logger::default_logger();
                    lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                        (shared_ptr<rs2lib::social::ClanSettings>*)local_b8);
                    uVar32 = CONCAT44(uVar75, *(undefined4*)(lVar28 + 8));
                    logger::Logger::Log(uVar20, 0, 5,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/client_network.cpp",
                                        2690, "ClanRecord affinitySlot %i received and set - updateNum: %i",
                                        CONCAT44(uVar74, (int)cVar3), uVar32);
                    uVar74 = (undefined4)((ulong)uVar32 >> 32);
                    uVar20 = logger::default_logger();
                    logger::Logger::Log(uVar20, 0, 5,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/client_network.cpp",
                                        2691, "----------");
                    uVar20 = logger::default_logger();
                    shared_ptr<rs2lib::social::ClanSettings>::operator->(
                        (shared_ptr<rs2lib::social::ClanSettings>*)local_b8);
                    uVar32 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    logger::Logger::Log(uVar20, 0, 5,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/client_network.cpp",
                                        2692, "Clan Name: %s", uVar32);
                    uVar76 = (undefined4)((ulong)uVar32 >> 32);
                    uVar20 = logger::default_logger();
                    lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                        (shared_ptr<rs2lib::social::ClanSettings>*)local_b8);
                    uVar14 = *(undefined4*)(lVar28 + 232);
                    lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                        (shared_ptr<rs2lib::social::ClanSettings>*)local_b8);
                    uVar58 = CONCAT44(uVar74, *(undefined4*)(lVar28 + 236));
                    uVar32 = CONCAT44(uVar76, uVar14);
                    logger::Logger::Log(uVar20, 0, 5,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/client_network.cpp",
                                        2693, "currentOwnerSlot: %i replacementOwnerSlot: %i", uVar32, uVar58);
                    uVar14 = (undefined4)((ulong)uVar32 >> 32);
                    uVar76 = (undefined4)((ulong)uVar58 >> 32);
                    uVar20 = logger::default_logger();
                    lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                        (shared_ptr<rs2lib::social::ClanSettings>*)local_b8);
                    bVar5 = *(byte*)(lVar28 + 56);
                    lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                        (shared_ptr<rs2lib::social::ClanSettings>*)local_b8);
                    cVar3 = *(char*)(lVar28 + 57);
                    lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                        (shared_ptr<rs2lib::social::ClanSettings>*)local_b8);
                    cVar1 = *(char*)(lVar28 + 58);
                    lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                        (shared_ptr<rs2lib::social::ClanSettings>*)local_b8);
                    uVar32 = CONCAT44(uVar77, (int)cVar1);
                    logger::Logger::Log(uVar20, 0, 5,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/client_network.cpp",
                                        2694, "allowNonMembers: %i rankTalk: %i rankKick: %i, rankLootShare: %i",
                                        CONCAT44(uVar14, (uint)bVar5), CONCAT44(uVar76, (int)cVar3), uVar32,
                                        CONCAT44(uVar78, (int)*(char*)(lVar28 + 59)));
                    uVar20 = logger::default_logger();
                    logger::Logger::Log(uVar20, 0, 5,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/client_network.cpp",
                                        2695, "Members:");
                    pCVar55 = (Client*)0;
                    while (true) {
                        uVar14 = (undefined4)((ulong)uVar32 >> 32);
                        lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                            (shared_ptr<rs2lib::social::ClanSettings>*)local_b8);
                        if ((long)*(int*)(lVar28 + 64) <= (long)pCVar55)
                            break;
                        uVar20 = logger::default_logger();
                        lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                            (shared_ptr<rs2lib::social::ClanSettings>*)local_b8);
                        cVar3 = ((lVar28 + 72))->empty();
                        puVar66 = &DAT_100e3aa9a;
                        local_b8[48] = cVar3;
                        if (cVar3 == '\0') {
                            lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                                (shared_ptr<rs2lib::social::ClanSettings>*)local_b8);
                            plVar57 = (longlong*)eastl::vector<long long, eastl::allocator>::operator[](
                                (vector<long long, eastl::allocator>*)(lVar28 + 72), (ulong)pCVar55);
                            local_480->ToRawUsername(*plVar57);
                            puVar66 = (undefined*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        }
                        lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                            (shared_ptr<rs2lib::social::ClanSettings>*)local_b8);
                        eastl::vector<eastl::string, eastl::allocator>::operator[](
                            (vector<eastl::string, eastl::allocator>*)(lVar28 + 280), (ulong)pCVar55);
                        uVar58 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                            (shared_ptr<rs2lib::social::ClanSettings>*)local_b8);
                        pcVar46 = (char*)eastl::vector<signed char, eastl::allocator>::operator[](
                            (vector<signed char, eastl::allocator>*)(lVar28 + 104), (ulong)pCVar55);
                        uVar32 = CONCAT44(uVar14, (int)*pcVar46);
                        logger::Logger::Log(uVar20, 0, 5,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                            "osclient/client_network.cpp",
                                            2698, "%s - %s - rank: %i", puVar66, uVar58, uVar32);
                        if (local_b8[48] == '\0') {
                            local_480->~basic_string();
                        }
                        pCVar55 = (Client*)((long)pCVar55 + 1);
                    }
                    uVar20 = logger::default_logger();
                    logger::Logger::Log(uVar20, 0, 5,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/client_network.cpp",
                                        2700, "Banned:");
                    for (uVar63 = 0; lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                                         (shared_ptr<rs2lib::social::ClanSettings>*)local_b8),
                        (long)uVar63 < (long)*(int*)(lVar28 + 240);
                         uVar63 = uVar63 + 1) {
                        uVar20 = logger::default_logger();
                        lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                            (shared_ptr<rs2lib::social::ClanSettings>*)local_b8);
                        uVar15 = ((lVar28 + 248))->empty();
                        pCVar55 = (Client*)(ulong)uVar15;
                        puVar66 = &DAT_100e3aa9a;
                        if ((char)uVar15 == '\0') {
                            lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                                (shared_ptr<rs2lib::social::ClanSettings>*)local_b8);
                            plVar57 = (longlong*)eastl::vector<long long, eastl::allocator>::operator[](
                                (vector<long long, eastl::allocator>*)(lVar28 + 248), uVar63);
                            local_80.ToRawUsername(*plVar57);
                            puVar66 = (undefined*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        }
                        lVar28 = shared_ptr<rs2lib::social::ClanSettings>::operator->(
                            (shared_ptr<rs2lib::social::ClanSettings>*)local_b8);
                        eastl::vector<eastl::string, eastl::allocator>::operator[](
                            (vector<eastl::string, eastl::allocator>*)(lVar28 + 312), uVar63);
                        uVar32 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        logger::Logger::Log(uVar20, 0, 5,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                            "osclient/client_network.cpp",
                                            2703, "%s - %s", puVar66, uVar32);
                        if ((char)uVar15 == '\0') {
                            local_80.~basic_string();
                        }
                    }
                    uVar20 = logger::default_logger();
                    logger::Logger::Log(uVar20, 0, 5,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/client_network.cpp",
                                        2705, "----------");
                }
                this_15 = (shared_ptr<RSevenDebugPresetProvider>*)local_b8;
            }
            this_15->~shared_ptr();
            psVar41 = (shared_ptr*)CONCAT71((int7)((ulong)pCVar55 >> 8), 1);
            break;
        case (BADTYPE)58:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pPVar38 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_480->p2_alt2();
            iVar12 = pPVar38->g4();
            psVar47 = (shared_ptr*)rs2lib::IfType::Get(iVar12);
            lVar28 = shared_ptr<rs2lib::IfType>::operator*((shared_ptr<rs2lib::IfType>*)psVar47);
            *(undefined4*)(lVar28 + 228) = 3;
            lVar49 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)(local_b8._48_8_ + 52016));
            this_08 = (PlayerModel*)shared_ptr<rs2lib::PlayerModel>::operator->(
                (shared_ptr<rs2lib::PlayerModel>*)(lVar49 + 1008));
            uVar14 = this_08->GetHeadModelCacheId();
            *(undefined4*)(lVar28 + 232) = uVar14;
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            ComponentUpdated((Client*)local_b8._48_8_, psVar47);
            break;
        case (BADTYPE)59:
            bVar5 = pCVar44->g1();
            *(uint*)(local_b8._48_8_ + 54888) = (uint)bVar5;
            if (bVar5 == 1) {
                uVar8 = pCVar44->g2();
                *(uint*)(local_b8._48_8_ + 54892) = (uint)uVar8;
            }
            uVar20 = local_b8._48_8_;
            if (*(int*)(local_b8._48_8_ + 54888) - 2U < 5) {
                *(undefined8*)(local_b8._48_8_ + 54912) =
                    *(undefined8*)(&DAT_100d3d770 + (long)*(int*)(local_b8._48_8_ + 54888) * 8);
                *(int*)(local_b8._48_8_ + 54888) = 2;
                uVar8 = pCVar44->g2();
                *(uint*)(uVar20 + 54900) = (uint)uVar8;
                uVar8 = pCVar44->g2();
                *(uint*)(uVar20 + 54904) = (uint)uVar8;
                bVar5 = pCVar44->g1();
                *(uint*)(uVar20 + 54908) = (uint)bVar5;
                pCVar55 = pCVar44;
            }
            psVar41 = (shared_ptr*)CONCAT71((int7)((ulong)pCVar55 >> 8), 1);
            if (*(int*)(uVar20 + 54888) == 10) {
                uVar8 = pCVar44->g2();
                *(uint*)(local_b8._48_8_ + 54896) = (uint)uVar8;
            }
            break;
        case (BADTYPE)60:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar26 = (ShuffledPacket3*)local_480->p2_alt2();
            uVar15 = pSVar26->g3();
            local_b8._0_4_ = (uVar15 >> 4 & 7) + ((int)uVar15 >> 16);
            local_f0[0].field_0._0_4_ = (uVar15 & 7) + (uVar15 >> 8 & 255);
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            bVar5 = pSVar27->g1();
            bVar7 = bVar5 >> 2;
            local_110[0]._0_4_ = ZEXT14(bVar5 & 3);
            uVar15 = constants::LocShape::ToLayer((uint)bVar7);
            pHVar36 = (HookArg*)(ulong)uVar15;
            local_c0 = (array<int, 32ul>*)CONCAT44(local_c0._4_4_, (uint)bVar7);
            pPVar38 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_480->p2_alt2();
            local_128._0_2_ = pPVar38->g2();
            uVar20 = local_b8._48_8_;
            local_128._2_2_ = 0;
            if ((((102 < (int)local_b8._0_4_) || ((int)local_b8._0_4_ < 0)) || ((int)(uint)local_f0[0].field_0 < 0)) ||
                (102 < (int)(uint)local_f0[0].field_0))
                goto switchD_1000ea3f5_default;
            switch (uVar15 & 255) {
            case 0:
                local_c8 =
                    (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)CONCAT71(local_c8._1_7_, (char)uVar15);
                iVar12 = std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                    (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)(local_b8._48_8_ + 19184));
                dash3d::world::GetWall((int)local_480, iVar12, *(int*)(uVar20 + 51984));
                bVar4 = operator!=((shared_ptr*)local_480, (_func_decltype_nullptr*)0);
                pHVar36 = (HookArg*)CONCAT71(SUB87(uVar20, 1), (char)local_c8);
                if (bVar4) {
                    lVar28 = shared_ptr<dash3d::Wall>::operator->((shared_ptr<dash3d::Wall>*)local_480);
                    local_b8._36_4_ = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(longlong*)(lVar28 + 56));
                    piVar43 = (int*)(local_b8._48_8_ + 51984);
                    if (bVar7 == 2) {
                        local_b8._44_4_ = 2;
                        local_b8._40_4_ = local_110[0]._0_4_ + 4;
                        local_cc = (undefined1[4])((uint)local_cc & 4294967040);
                        lVar28 = shared_ptr<dash3d::Wall>::operator->((shared_ptr<dash3d::Wall>*)local_480);
                        piVar31 = (int*)(local_b8._48_8_ + 8488);
                        pHVar36 = (HookArg*)local_cc;
                        make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool,
                                    shared_ptr<dash3d::ModelSource>&, int&>(
                            (jag*)&local_80, (int*)(local_b8 + 36), (int*)(local_b8 + 44), (int*)(local_b8 + 40),
                            piVar43, (int*)local_b8, (int*)local_f0, (int*)&local_128, (bool*)pHVar36,
                            (shared_ptr*)(lVar28 + 24), piVar31);
                        lVar28 = shared_ptr<dash3d::Wall>::operator->((shared_ptr<dash3d::Wall>*)local_480);
                        shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)(lVar28 + 24),
                                                                   (shared_ptr*)&local_80);
                        local_80.~shared_ptr();
                        local_b8._44_4_ = 2;
                        local_b8._40_4_ = local_110[0]._0_4_ + 1 & 3;
                        local_cc = (undefined1[4])((uint)local_cc & 4294967040);
                        lVar28 = shared_ptr<dash3d::Wall>::operator->((shared_ptr<dash3d::Wall>*)local_480);
                        make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool,
                                    shared_ptr<dash3d::ModelSource>&, int&>(
                            (jag*)&local_80, (int*)(local_b8 + 36), (int*)(local_b8 + 44), (int*)(local_b8 + 40),
                            piVar43, (int*)local_b8, (int*)local_f0, (int*)&local_128, (bool*)pHVar36,
                            (shared_ptr*)(lVar28 + 40), piVar31);
                        lVar28 = shared_ptr<dash3d::Wall>::operator->((shared_ptr<dash3d::Wall>*)local_480);
                        shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)(lVar28 + 40),
                                                                   (shared_ptr*)&local_80);
                    } else {
                        local_b8._44_4_ = (uint)local_c0;
                        local_b8._40_4_ = local_b8._40_4_ & 4294967040;
                        lVar28 = shared_ptr<dash3d::Wall>::operator->((shared_ptr<dash3d::Wall>*)local_480);
                        make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool,
                                    shared_ptr<dash3d::ModelSource>&, int&>(
                            (jag*)&local_80, (int*)(local_b8 + 36), (int*)(local_b8 + 44), (int*)local_110, piVar43,
                            (int*)local_b8, (int*)local_f0, (int*)&local_128, (bool*)(local_b8 + 40),
                            (shared_ptr*)(lVar28 + 24), (int*)(local_b8._48_8_ + 8488));
                        lVar28 = shared_ptr<dash3d::Wall>::operator->((shared_ptr<dash3d::Wall>*)local_480);
                        shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)(lVar28 + 24),
                                                                   (shared_ptr*)&local_80);
                    }
                    local_80.~shared_ptr();
                    pHVar36 = (HookArg*)CONCAT71((int7)((ulong)pHVar36 >> 8), (char)local_c8);
                }
                local_480->~shared_ptr();
                if ((char)pHVar36 == '\x01')
                    goto switchD_1000ea3f5_caseD_1;
                break;
            case 1:
            switchD_1000ea3f5_caseD_1:
                uVar20 = local_b8._48_8_;
                iVar12 = std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                    (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)(local_b8._48_8_ + 19184));
                dash3d::world::GetDecor((int)local_480, iVar12, *(int*)(uVar20 + 51984));
                bVar4 = operator!=((shared_ptr*)local_480, (_func_decltype_nullptr*)0);
                if (bVar4) {
                    lVar28 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)local_480);
                    local_b8._36_4_ = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(longlong*)(lVar28 + 64));
                    piVar43 = (int*)(local_b8._48_8_ + 51984);
                    if ((bVar5 & 248) == 16) {
                        local_b8._44_4_ = 4;
                        local_b8._40_4_ = local_b8._40_4_ & 4294967040;
                        lVar28 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)local_480);
                        make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool,
                                    shared_ptr<dash3d::ModelSource>&, int&>(
                            (jag*)&local_80, (int*)(local_b8 + 36), (int*)(local_b8 + 44), (int*)local_110, piVar43,
                            (int*)local_b8, (int*)local_f0, (int*)&local_128, (bool*)(local_b8 + 40),
                            (shared_ptr*)(lVar28 + 32), (int*)(local_b8._48_8_ + 8488));
                        lVar28 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)local_480);
                        shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)(lVar28 + 32),
                                                                   (shared_ptr*)&local_80);
                    } else if (bVar7 == 8) {
                        local_b8._44_4_ = 4;
                        local_b8._40_4_ = local_110[0]._0_4_ + 4;
                        local_cc = (undefined1[4])((uint)(uint3)local_cc._1_3_ << 8);
                        lVar28 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)local_480);
                        piVar31 = (int*)(local_b8._48_8_ + 8488);
                        make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool,
                                    shared_ptr<dash3d::ModelSource>&, int&>(
                            (jag*)&local_80, (int*)(local_b8 + 36), (int*)(local_b8 + 44), (int*)(local_b8 + 40),
                            piVar43, (int*)local_b8, (int*)local_f0, (int*)&local_128, (bool*)local_cc,
                            (shared_ptr*)(lVar28 + 32), piVar31);
                        lVar28 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)local_480);
                        shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)(lVar28 + 32),
                                                                   (shared_ptr*)&local_80);
                        local_80.~shared_ptr();
                        local_b8._44_4_ = 4;
                        local_b8._40_4_ = local_110[0]._0_4_ + 2 & 3 | 4;
                        local_cc = (undefined1[4])((uint)local_cc & 4294967040);
                        lVar28 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)local_480);
                        make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool,
                                    shared_ptr<dash3d::ModelSource>&, int&>(
                            (jag*)&local_80, (int*)(local_b8 + 36), (int*)(local_b8 + 44), (int*)(local_b8 + 40),
                            piVar43, (int*)local_b8, (int*)local_f0, (int*)&local_128, (bool*)local_cc,
                            (shared_ptr*)(lVar28 + 48), piVar31);
                        lVar28 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)local_480);
                        shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)(lVar28 + 48),
                                                                   (shared_ptr*)&local_80);
                    } else if (bVar7 == 7) {
                        local_b8._44_4_ = 4;
                        local_b8._40_4_ = local_110[0]._0_4_ + 2 & 3 | 4;
                        local_cc = (undefined1[4])((uint)(uint3)local_cc._1_3_ << 8);
                        lVar28 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)local_480);
                        make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool,
                                    shared_ptr<dash3d::ModelSource>&, int&>(
                            (jag*)&local_80, (int*)(local_b8 + 36), (int*)(local_b8 + 44), (int*)(local_b8 + 40),
                            piVar43, (int*)local_b8, (int*)local_f0, (int*)&local_128, (bool*)local_cc,
                            (shared_ptr*)(lVar28 + 32), (int*)(local_b8._48_8_ + 8488));
                        lVar28 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)local_480);
                        shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)(lVar28 + 32),
                                                                   (shared_ptr*)&local_80);
                    } else {
                        if (bVar7 != 6)
                            goto LAB_1000ef656;
                        local_b8._44_4_ = 4;
                        local_b8._40_4_ = local_110[0]._0_4_ + 4;
                        local_cc = (undefined1[4])((uint)local_cc & 4294967040);
                        lVar28 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)local_480);
                        make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool,
                                    shared_ptr<dash3d::ModelSource>&, int&>(
                            (jag*)&local_80, (int*)(local_b8 + 36), (int*)(local_b8 + 44), (int*)(local_b8 + 40),
                            piVar43, (int*)local_b8, (int*)local_f0, (int*)&local_128, (bool*)local_cc,
                            (shared_ptr*)(lVar28 + 32), (int*)(local_b8._48_8_ + 8488));
                        lVar28 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)local_480);
                        shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)(lVar28 + 32),
                                                                   (shared_ptr*)&local_80);
                    }
                    local_80.~shared_ptr();
                }
            LAB_1000ef656:
                local_480->~shared_ptr();
                break;
            case 2:
                goto switchD_1000ea3f5_caseD_2;
            case 3:
                goto switchD_1000ea3f5_caseD_3;
            default:
                goto switchD_1000ea3f5_default;
            }
            if ((char)pHVar36 == '\x02') {
            switchD_1000ea3f5_caseD_2:
                uVar20 = local_b8._48_8_;
                iVar12 = std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                    (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)(local_b8._48_8_ + 19184));
                dash3d::world::GetScene((int)local_480, iVar12, *(int*)(uVar20 + 51984));
                uVar15 = (uint)local_c0;
                if (bVar7 == 11) {
                    uVar15 = 10;
                }
                bVar4 = operator!=((shared_ptr*)local_480, (_func_decltype_nullptr*)0);
                if (bVar4) {
                    lVar28 = shared_ptr<dash3d::Sprite>::operator->((shared_ptr<dash3d::Sprite>*)local_480);
                    local_b8._36_4_ = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(longlong*)(lVar28 + 80));
                    local_b8._44_4_ = uVar15 & 255;
                    local_b8._40_4_ = local_b8._40_4_ & 4294967040;
                    lVar28 = shared_ptr<dash3d::Sprite>::operator->((shared_ptr<dash3d::Sprite>*)local_480);
                    make_shared<ClientLocAnim, int, int, int&, int&, int&, int&, int&, bool,
                                shared_ptr<dash3d::ModelSource>&, int&>(
                        (jag*)&local_80, (int*)(local_b8 + 36), (int*)(local_b8 + 44), (int*)local_110,
                        (int*)(local_b8._48_8_ + 51984), (int*)local_b8, (int*)local_f0, (int*)&local_128,
                        (bool*)(local_b8 + 40), (shared_ptr*)(lVar28 + 32), (int*)(local_b8._48_8_ + 8488));
                    lVar28 = shared_ptr<dash3d::Sprite>::operator->((shared_ptr<dash3d::Sprite>*)local_480);
                    shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)(lVar28 + 32),
                                                               (shared_ptr*)&local_80);
                    local_80.~shared_ptr();
                }
                local_480->~shared_ptr();
            }
            if ((char)pHVar36 == '\x03') {
            switchD_1000ea3f5_caseD_3:
                uVar20 = local_b8._48_8_;
                iVar12 = std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                    (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)(local_b8._48_8_ + 19184));
                dash3d::world::GetGd((int)local_480, iVar12, *(int*)(uVar20 + 51984));
                bVar4 = operator!=((shared_ptr*)local_480, (_func_decltype_nullptr*)0);
                if (bVar4) {
                    lVar28 = shared_ptr<dash3d::GroundDecor>::operator->((shared_ptr<dash3d::GroundDecor>*)local_480);
                    local_b8._36_4_ = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(longlong*)(lVar28 + 32));
                    local_b8._44_4_ = 22;
                    local_b8._40_4_ = local_b8._40_4_ & 4294967040;
                    lVar28 = shared_ptr<dash3d::GroundDecor>::operator->((shared_ptr<dash3d::GroundDecor>*)local_480);
                    make_shared<ClientLocAnim, int, int, int&, int&, int&, int&, int&, bool,
                                shared_ptr<dash3d::ModelSource>&, int&>(
                        (jag*)&local_80, (int*)(local_b8 + 36), (int*)(local_b8 + 44), (int*)local_110,
                        (int*)(local_b8._48_8_ + 51984), (int*)local_b8, (int*)local_f0, (int*)&local_128,
                        (bool*)(local_b8 + 40), (shared_ptr*)(lVar28 + 16), (int*)(local_b8._48_8_ + 8488));
                    lVar28 = shared_ptr<dash3d::GroundDecor>::operator->((shared_ptr<dash3d::GroundDecor>*)local_480);
                    shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)(lVar28 + 16),
                                                               (shared_ptr*)&local_80);
                    local_80.~shared_ptr();
                }
                local_480->~shared_ptr();
            }
            goto switchD_1000ea3f5_default;
        case (BADTYPE)61:
            bVar5 = pCVar44->g1();
            uVar14 = rs2lib::FriendPrivacyUtils::GetBySaveValue((uint)bVar5);
            *(undefined4*)((long)(local_b8._48_8_ + 53304) + 4) = uVar14;
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            break;
        case (BADTYPE)62:
            *(undefined4*)(local_b8._48_8_ + 8492) = *(undefined4*)(local_b8._48_8_ + 8492) + 1;
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            break;
        case (BADTYPE)63:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pPVar38 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_480->p2_alt2();
            uVar15 = pPVar38->g1();
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            iVar12 = pSVar27->g4s();
            psVar47 = (shared_ptr*)rs2lib::IfType::Get(iVar12);
            pIVar30 = (IfType*)shared_ptr<rs2lib::IfType>::operator*((shared_ptr<rs2lib::IfType>*)psVar47);
            PlayerModelUtil::SetPlayerModelBodyType(pIVar30, uVar15 & 255);
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            ComponentUpdated((Client*)local_b8._48_8_, psVar47);
            break;
        case (BADTYPE)64:
            if (*(char*)pCVar55 != '\0') {
                uVar20 = logger::default_logger();
                logger::Logger::Log(uVar20, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    2957, "cam_reset");
            }
            uVar20 = local_b8._48_8_;
            *(undefined4*)(local_b8._48_8_ + 52997) = 0;
            *(undefined8*)(local_b8._48_8_ + 53004) = 0;
            *(undefined8*)(local_b8._48_8_ + 53012) = 0;
            *(undefined8*)(local_b8._48_8_ + 53020) = 0;
            *(undefined8*)(local_b8._48_8_ + 53028) = 0;
            *(undefined8*)(local_b8._48_8_ + 53036) = 0;
            ((local_b8._48_8_ + 53064))->reset(0);
            ((uVar20 + 53072))->reset(0);
            ((uVar20 + 53080))->reset(0);
            *(undefined1*)(uVar20 + 52996) = 0;
            *(undefined4*)(uVar20 + 2508880) = 0;
            *(undefined1*)(uVar20 + 2508884) = 0;
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            break;
        case (BADTYPE)65:
            uVar20 = logger::default_logger();
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            logger::Logger::Log(
                uVar20, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_network.cpp",
                2374, "Unimplemented Serverprot SET_HEATMAP_ENABLED");
            break;
        case (BADTYPE)66:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            uVar15 = pSVar39->g2();
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            iVar12 = pSVar39->g4();
            psVar47 = (shared_ptr*)rs2lib::IfType::Get(iVar12);
            bVar4 = operator!=(psVar47, (_func_decltype_nullptr*)0);
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            if ((bVar4) && (lVar28 = shared_ptr<rs2lib::IfType>::operator*((shared_ptr<rs2lib::IfType>*)psVar47),
                            *(int*)(lVar28 + 12) == 0)) {
                uVar18 = *(int*)(lVar28 + 108) - *(int*)(lVar28 + 76);
                if ((int)(uVar15 & 65535) <= (int)uVar18) {
                    uVar18 = uVar15 & 65535;
                }
                uVar15 = 0;
                if (-1 < (int)uVar18) {
                    uVar15 = uVar18;
                }
                if (*(uint*)(lVar28 + 100) != uVar15) {
                    *(uint*)(lVar28 + 100) = uVar15;
                    ComponentUpdated((Client*)local_b8._48_8_, psVar47);
                }
            }
            break;
        case (BADTYPE)67:
            iVar12 = pCVar44->g4();
            uVar8 = pCVar44->g2();
            uVar15 = uVar8 + 32768;
            if (-70001 < iVar12) {
                uVar15 = (uint)uVar8;
            }
            local_c0 = (array<int, 32ul>*)CONCAT44(local_c0._4_4_, uVar15);
            if (*(char*)pCVar55 != '\0') {
                uVar20 = logger::default_logger();
                logger::Logger::Log(uVar20, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    1392, "Received inventory update for inventory: %d component: %d",
                                    CONCAT44(uVar74, (uint)local_c0), CONCAT44(uVar75, iVar12));
            }
            if (iVar12 < 0) {
                psVar41 = (shared_ptr*)&rs2lib::NULL_IFTYPE;
            } else {
                psVar41 = (shared_ptr*)rs2lib::IfType::Get(iVar12);
            }
            lVar28 = psVar41->end();
            local_c8 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(lVar28 + 1936);
            local_130 = (Array<int, eastl::allocator>*)(lVar28 + 1960);
            while (true) {
                this_01 = (TextureAtlasReference*)(local_4c0 + 8);
                pCVar55 = (Client*)this_01->size();
                pSVar51 = (SuperShuffledPacketFactory*)this_01->GetTextureAtlas();
                if (pSVar51 <= pCVar55)
                    break;
                iVar12 = this_01->gSmarts();
                uVar8 = this_01->g2();
                if (uVar8 == 0) {
                    uVar15 = 0;
                } else {
                    bVar5 = ((local_4c0 + 8))->g1();
                    if (bVar5 == 255) {
                        uVar15 = ((local_4c0 + 8))->g4();
                    } else {
                        uVar15 = (uint)bVar5;
                    }
                }
                bVar4 = operator!=(psVar41, (_func_decltype_nullptr*)0);
                if ((bVar4 && -1 < iVar12) &&
                    (iVar19 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_c8),
                     iVar12 < iVar19)) {
                    puVar61 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)local_c8,
                                                                              (long)iVar12);
                    *puVar61 = (uint)uVar8;
                    puVar61 = (uint*)Array<int, eastl::allocator>::operator[](local_130, (long)iVar12);
                    *puVar61 = uVar15;
                }
                ClientInvCache::Set((uint)local_c0, iVar12, uVar8 - 1, uVar15);
            }
            bVar4 = operator!=(psVar41, (_func_decltype_nullptr*)0);
            if (bVar4) {
                ComponentUpdated((Client*)local_b8._48_8_, psVar41);
            }
            LegacyUpdated((Client*)local_b8._48_8_);
            goto LAB_1000edfff;
        case (BADTYPE)68:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pPVar38 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_480->p2_alt2();
            bVar5 = pPVar38->g1();
            uVar20 = local_b8._48_8_;
            *(uint*)(local_b8._48_8_ + 1115284) = (uint)bVar5;
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            bVar5 = pSVar27->g1();
            *(uint*)(uVar20 + 1115288) = (uint)bVar5;
            if (*(char*)(uVar20 + 54760) != '\0') {
                uVar20 = logger::default_logger();
                logger::Logger::Log(uVar20, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    4137, "Partial update enclosed for zone: %d,%d",
                                    CONCAT44(uVar74, *(undefined4*)(local_b8._48_8_ + 1115284)),
                                    CONCAT44(uVar75, *(undefined4*)(local_b8._48_8_ + 1115288)));
            }
            while (true) {
                uVar63 = pCVar44->size();
                uVar24 = pCVar44->GetTextureAtlas();
                if (uVar24 <= uVar63)
                    break;
                uVar6 = pCVar44->g1();
                ZonePacket((Client*)local_b8._48_8_, uVar6, pCVar44);
            }
            goto switchD_1000ea3f5_default;
        case (BADTYPE)69:
            uVar6 = pCVar44->g1();
            SetCameraMode((Client*)local_b8._48_8_, uVar6);
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            break;
        case (BADTYPE)70:
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            RebuildPacket((Client*)local_b8._48_8_, false, (SuperPacket*)pCVar44);
            break;
        case (BADTYPE)71:
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            ZonePacket((Client*)local_b8._48_8_, 6, pCVar44);
            break;
        case (BADTYPE)72:
            if (*(char*)pCVar55 != '\0') {
                uVar20 = logger::default_logger();
                logger::Logger::Log(uVar20, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    2393, "Resetting variables to 0 in preperation for full transmit");
            }
            if (0 < configdecoder::VarpType::m_numDefinitions) {
                uVar63 = 0;
                pCVar55 = (Client*)&ClientVarCache::m_varServ;
                do {
                    psVar41 = (shared_ptr*)configdecoder::VarpType::List((int)uVar63);
                    new (local_480) shared_ptr<dash3d::Decor>(psVar41);
                    bVar4 = operator!=((shared_ptr*)local_480, (_func_decltype_nullptr*)0);
                    if (bVar4) {
                        puVar23 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&ClientVarCache::m_varServ, uVar63);
                        *puVar23 = 0;
                        puVar23 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&ClientVarCache::m_var, uVar63);
                        *puVar23 = 0;
                    }
                    local_480->~shared_ptr();
                    uVar63 = uVar63 + 1;
                } while ((long)uVar63 < (long)configdecoder::VarpType::m_numDefinitions);
            }
            LegacyUpdated((Client*)local_b8._48_8_);
            *(undefined4*)(local_b8._48_8_ + 2505940) = *(undefined4*)(local_b8._48_8_ + 2505940) + 32;
            psVar41 = (shared_ptr*)CONCAT71((int7)((ulong)pCVar55 >> 8), 1);
            break;
        case (BADTYPE)73:
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            ZonePacket((Client*)local_b8._48_8_, 10, pCVar44);
            break;
        case (BADTYPE)74:
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            ZonePacket((Client*)local_b8._48_8_, 4, pCVar44);
            break;
        case (BADTYPE)75:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar26 = (ShuffledPacket3*)local_480->p2_alt2();
            bVar5 = pSVar26->g1();
            uVar20 = local_b8._48_8_;
            *(uint*)(local_b8._48_8_ + 1115284) = (uint)bVar5;
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            bVar5 = pSVar27->g1();
            *(uint*)(uVar20 + 1115288) = (uint)bVar5;
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            if (*(char*)(uVar20 + 54760) != '\0') {
                uVar20 = logger::default_logger();
                logger::Logger::Log(uVar20, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    4083, "Partial update follows for zone: %i,%i ",
                                    CONCAT44(uVar74, *(undefined4*)(local_b8._48_8_ + 1115284)),
                                    CONCAT44(uVar75, *(undefined4*)(local_b8._48_8_ + 1115288)));
            }
            break;
        case (BADTYPE)76:
            *(undefined2*)(local_b8._48_8_ + 52996) = 256;
            *(undefined1*)(local_b8._48_8_ + 52998) = 0;
            bVar5 = pCVar44->g1();
            *(uint*)(local_b8._48_8_ + 53004) = (uint)bVar5;
            bVar5 = pCVar44->g1();
            *(uint*)(local_b8._48_8_ + 53008) = (uint)bVar5;
            uVar8 = pCVar44->g2();
            *(uint*)(local_b8._48_8_ + 53012) = (uint)uVar8;
            bVar5 = pCVar44->g1();
            *(uint*)(local_b8._48_8_ + 53016) = (uint)bVar5;
            bVar5 = pCVar44->g1();
            *(uint*)(local_b8._48_8_ + 53020) = (uint)bVar5;
            if (*(char*)(local_b8._48_8_ + 54760) != '\0') {
                pCVar44 = (Client*)logger::default_logger();
                logger::Logger::Log(pCVar44, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    2892, "cam_moveto lx:%d lz:%d hei:%d rate:%d rate2:%d",
                                    CONCAT44(uVar74, *(int*)(local_b8._48_8_ + 53004)),
                                    CONCAT44(uVar75, *(int*)(local_b8._48_8_ + 53008)),
                                    CONCAT44(uVar77, *(int*)(local_b8._48_8_ + 53012)),
                                    CONCAT44(uVar78, *(int*)(local_b8._48_8_ + 53016)),
                                    CONCAT44(uVar14, *(int*)(local_b8._48_8_ + 53020)));
            }
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            if (99 < *(int*)(local_b8._48_8_ + 53020)) {
                uVar18 = *(int*)(local_b8._48_8_ + 53004) << 7 | 64;
                *(uint*)(local_b8._48_8_ + 53088) = uVar18;
                uVar15 = *(int*)(local_b8._48_8_ + 53008) << 7 | 64;
                *(uint*)(local_b8._48_8_ + 53096) = uVar15;
                iVar12 = GetAvH(pCVar44, uVar18, uVar15, *(int*)(local_b8._48_8_ + 51984));
                *(int*)(local_b8._48_8_ + 53092) = iVar12 - *(int*)(local_b8._48_8_ + 53012);
            }
            break;
        case (BADTYPE)77:
            iVar12 = pCVar44->g4();
            uVar8 = pCVar44->g2();
            uVar15 = uVar8 + 32768;
            if (-70001 < iVar12) {
                uVar15 = (uint)uVar8;
            }
            local_c0 = (array<int, 32ul>*)CONCAT44(local_c0._4_4_, uVar15);
            if (*(char*)pCVar55 != '\0') {
                uVar20 = logger::default_logger();
                logger::Logger::Log(uVar20, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    1444, "Received full inventory for inventory: %d component: %d",
                                    CONCAT44(uVar74, (uint)local_c0), CONCAT44(uVar75, iVar12));
            }
            if (iVar12 < 0) {
                psVar41 = (shared_ptr*)&rs2lib::NULL_IFTYPE;
            } else {
                psVar41 = (shared_ptr*)rs2lib::IfType::Get(iVar12);
            }
            lVar28 = psVar41->end();
            bVar4 = operator!=(psVar41, (_func_decltype_nullptr*)0);
            local_c8 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)CONCAT71(local_c8._1_7_, bVar4);
            if (bVar4) {
                pCVar55 = (Client*)(lVar28 + 1936);
                lVar49 = pCVar55->end();
                if (lVar49 != 0) {
                    uVar63 = 0;
                    do {
                        puVar23 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)pCVar55, uVar63);
                        *puVar23 = 0;
                        puVar23 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)(lVar28 + 1960), uVar63);
                        *puVar23 = 0;
                        uVar63 = uVar63 + 1;
                        uVar24 = pCVar55->end();
                    } while (uVar63 < uVar24);
                }
            }
            ClientInvCache::Blank((uint)local_c0);
            uVar8 = ((local_4c0 + 8))->g2();
            if (uVar8 != 0) {
                local_130 = (Array<int, eastl::allocator>*)(ulong)uVar8;
                pAVar48 = (Array<int, eastl::allocator>*)0;
                pCVar55 = (Client*)local_480;
                do {
                    new (pCVar55) SuperShuffledPacketFactory((SuperPacket*)(local_4c0 + 8));
                    pPVar38 =
                        (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)pCVar55->p2_alt2();
                    uVar15 = pPVar38->g2();
                    pSVar27 = (ShuffledPacket4*)pCVar55->p2_alt2();
                    pSVar39 = (ShuffledPacket2*)pCVar55->p2_alt2();
                    bVar5 = pSVar27->g1();
                    if (bVar5 == 255) {
                        uVar18 = pSVar39->g4();
                    } else {
                        uVar18 = (uint)bVar5;
                    }
                    if (((char)local_c8 != '\0') && (iVar12 = ((lVar28 + 1936))->end(), (long)pAVar48 < (long)iVar12)) {
                        puVar61 = (uint*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)(lVar28 + 1936), (ulong)pAVar48);
                        *puVar61 = uVar15 & 65535;
                        puVar61 = (uint*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)(lVar28 + 1960), (ulong)pAVar48);
                        *puVar61 = uVar18;
                    }
                    ClientInvCache::Set((uint)local_c0, (int)pAVar48, (uVar15 & 65535) - 1, uVar18);
                    pAVar48 = pAVar48 + 1;
                } while (local_130 != pAVar48);
            }
            if ((char)local_c8 != '\0') {
                ComponentUpdated((Client*)local_b8._48_8_, psVar41);
            }
            LegacyUpdated((Client*)local_b8._48_8_);
        LAB_1000edfff:
            uVar15 = (uint)local_c0;
        LAB_1000ee005:
            uVar18 = *(undefined4*)(local_b8._48_8_ + 2506072);
            *(uint*)(local_b8._48_8_ + 2506072) = uVar18 + 1;
            puVar61 = (uint*)std::array<int, 32ul>::operator[]((array<int, 32ul>*)(local_b8._48_8_ + 2505944),
                                                               (ulong)(uVar18 & 31));
            *puVar61 = uVar15 & 32767;
            psVar41 = (shared_ptr*)CONCAT71((int7)((ulong)pCVar55 >> 8), 1);
            break;
        case (BADTYPE)78:
            uVar14 = pCVar44->g4();
            local_b8._0_4_ = uVar14;
            if (*(char*)pCVar55 != '\0') {
                uVar20 = logger::default_logger();
                logger::Logger::Log(uVar20, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    3893, "if_closesub - layer:%d", CONCAT44(uVar74, local_b8._0_4_));
            }
            eastl::hashtable<
                int,
                eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer,
                                                       std::default_delete<ChatHistory::HistoryBuffer>>>,
                eastl::allocator,
                eastl::use_first<
                    eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer,
                                                           std::default_delete<ChatHistory::HistoryBuffer>>>>,
                eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                eastl::prime_rehash_policy, false, true, true>::find((int*)local_480);
            eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            bVar4 = eastl::operator!=((eastl*)local_480, (hashtable_iterator_base*)&local_80, extraout_RDX_03);
            if (bVar4) {
                uVar14 = local_b8._0_4_;
                lVar28 = local_480->HeapBeginPtr();
                CloseSubinterface((Client*)local_b8._48_8_, uVar14, *(int*)(lVar28 + 4), true);
            }
            puVar33 = (undefined1*)(local_b8._48_8_ + 52424);
            bVar4 = operator!=((shared_ptr*)puVar33, (_func_decltype_nullptr*)0);
            if (bVar4) {
                ComponentUpdated((Client*)local_b8._48_8_, (shared_ptr*)puVar33);
                new (&local_80) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)puVar33, (shared_ptr*)&local_80);
                local_80.~shared_ptr();
            }
            goto switchD_1000ea3f5_default;
        case (BADTYPE)79:
            PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
                (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_480, bVar4);
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
            pWVar54 = (WordPack*)std::unique_ptr<game::WordPack, std::default_delete<game::WordPack>>::operator->((
                unique_ptr<game::WordPack, std::default_delete<game::WordPack>>*)((long)(local_b8._48_8_ + 54172) + 4));
            pWVar54->UnpackCP1252AsUTF8(local_b8, pCVar44);
            pcVar46 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar63 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            local_80.Escape(pcVar46, uVar63);
            core::stringtools::general::StringTools::ForceCapitalisationOfWords((basic_string*)&local_80);
            AddChat((Client*)local_b8._48_8_, 6, (basic_string*)local_480, (basic_string*)&local_80);
            local_80.~basic_string();
            local_b8->~basic_string();
            pHVar36 = (HookArg*)local_480;
            goto LAB_1000ef462;
        case (BADTYPE)80:
            if (*(char*)pCVar55 != '\0') {
                uVar20 = logger::default_logger();
                logger::Logger::Log(uVar20, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    1193, "logout transfer");
            }
            new (local_480) GameWorld();
            PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
                (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)&local_80, bVar4);
            eastl::string::operator=((eastl::string*)(local_478 + 8), (basic_string*)&local_80);
            local_80.~basic_string();
            uVar8 = pCVar44->g2();
            local_480._0_4_ = ZEXT24(uVar8);
            local_480._4_4_ = pCVar44->g4();
            cVar3 = local_480->IsBeta();
            if (cVar3 != '\0') {
                eastl::string::operator=(local_428, (basic_string*)&BETA_CACHE_DIR_SUFFIX);
            }
            ((local_b8._48_8_ + 2509312))->SaveToFiles();
            this_02 =
                (ClientVarValues*)std::unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>::operator->(
                    (unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>*)(local_b8._48_8_ + 52488));
            this_02->SavePermVars();
            SetMainState((Client*)local_b8._48_8_);
            puVar33 = (undefined1*)(local_b8._48_8_ + 19120);
            pSVar21 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)puVar33);
            pSVar21->Close();
            puVar33->reset(0);
            TitleScreen::SwitchToWorld((GameWorld*)local_480);
            local_480->~GameWorld();
        LAB_1000e84af:
            psVar41 = (shared_ptr*)0;
            break;
        case (BADTYPE)81:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pPVar38 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_480->p2_alt2();
            local_110[0]._0_4_ = pPVar38->g4();
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            local_f0[0].field_0._0_4_ = pSVar39->g4();
            if (*(char*)pCVar55 != '\0') {
                uVar20 = logger::default_logger();
                logger::Logger::Log(uVar20, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    4018, "if_movesub - srclayer:%i destlayer:%i",
                                    CONCAT44(uVar74, (uint)local_f0[0].field_0), CONCAT44(uVar75, local_110[0]._0_4_));
            }
            puVar33 = (undefined1*)(local_b8._48_8_ + 53160);
            eastl::hashtable<
                int,
                eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer,
                                                       std::default_delete<ChatHistory::HistoryBuffer>>>,
                eastl::allocator,
                eastl::use_first<
                    eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer,
                                                           std::default_delete<ChatHistory::HistoryBuffer>>>>,
                eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                eastl::prime_rehash_policy, false, true, true>::find((int*)local_480);
            eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            bVar4 = eastl::operator!=((eastl*)local_480, (hashtable_iterator_base*)&local_80, extraout_RDX_01);
            iVar12 = -1;
            if (bVar4) {
                lVar28 = local_480->HeapBeginPtr();
                iVar12 = *(int*)(lVar28 + 4);
            }
            eastl::hashtable<
                int,
                eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer,
                                                       std::default_delete<ChatHistory::HistoryBuffer>>>,
                eastl::allocator,
                eastl::use_first<
                    eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer,
                                                           std::default_delete<ChatHistory::HistoryBuffer>>>>,
                eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                eastl::prime_rehash_policy, false, true, true>::find((int*)&local_80);
            eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            bVar4 = eastl::operator!=((eastl*)&local_80, (hashtable_iterator_base*)local_b8, extraout_RDX_02);
            uVar14 = local_110[0]._0_4_;
            if (bVar4) {
                pCVar55 = (Client*)(ulong)(uint)local_110[0]._0_4_;
                lVar28 = local_80.HeapBeginPtr();
                iVar19 = *(int*)(lVar28 + 4);
                if (iVar12 == -1) {
                    bVar4 = true;
                } else {
                    lVar28 = local_80.HeapBeginPtr();
                    bVar4 = *(int*)(lVar28 + 4) != iVar12;
                }
                CloseSubinterface((Client*)local_b8._48_8_, uVar14, iVar19, bVar4);
            }
            eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            bVar4 = eastl::operator!=((eastl*)local_480, (hashtable_iterator_base*)local_b8, extraout_RDX_09);
            if (bVar4) {
                lVar28 = local_480->HeapBeginPtr();
                new (local_b8) game::EnvironmentOverrideParam<game::ColourGradingEnvironmentOverrides::ColourRemap>();
                local_b8._0_8_ = *(ulong*)(lVar28 + 4);
                local_b8[8] = *(undefined1*)(lVar28 + 12);
                puVar52 = (ulong*)
                    eastl::hash_map<int, SubInterface, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                                    false>::operator[]((hash_map<int, SubInterface, eastl::hash<int>,
                                                                 eastl::equal_to<int>, eastl::allocator, false>*)
                                                           puVar33,
                                                       (int*)local_110);
                *(undefined1*)(puVar52 + 1) = local_b8[8];
                *puVar52 = local_b8._0_8_;
                puVar33->erase(local_f0);
            }
            psVar41 = (shared_ptr*)rs2lib::IfType::Get((uint)local_f0[0].field_0);
            bVar4 = operator!=(psVar41, (_func_decltype_nullptr*)0);
            if (bVar4) {
                ComponentUpdated((Client*)local_b8._48_8_, psVar41);
            }
            psVar41 = (shared_ptr*)rs2lib::IfType::Get(local_110[0]._0_4_);
            bVar4 = operator!=(psVar41, (_func_decltype_nullptr*)0);
            if (bVar4) {
                lVar28 = psVar41->end();
                ComponentUpdated((Client*)local_b8._48_8_, psVar41);
                pAVar60 =
                    (Array*)Array<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>,
                               eastl::allocator>*)&rs2lib::IfType::m_list,
                        (long)(*(int*)(lVar28 + 4) >> 16));
                InterfaceCalculateSizeAndPosSubcomponents((Client*)local_b8._48_8_, pAVar60, psVar41, true);
            }
            pHVar36 = (HookArg*)pCVar55;
            if (*(int*)(local_b8._48_8_ + 53216) != -1) {
                RunHookImmediate((Client*)local_b8._48_8_, *(int*)(local_b8._48_8_ + 53216), 24);
            }
            goto switchD_1000ea3f5_default;
        case (BADTYPE)82:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar26 = (ShuffledPacket3*)local_480->p2_alt2();
            uVar15 = pSVar26->g2();
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            uVar18 = pSVar39->g1();
            pSVar26 = (ShuffledPacket3*)local_480->p2_alt2();
            uVar17 = pSVar26->g2();
            pSVar26 = (ShuffledPacket3*)local_480->p2_alt2();
            uVar13 = pSVar26->g4();
            psVar47 = (shared_ptr*)std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                (array<shared_ptr<ClientNpc>, 65536ul>*)(local_b8._48_8_ + 55272), (ulong)uVar15 & 65535);
            bVar4 = operator!=(psVar47, (_func_decltype_nullptr*)0);
            psVar41 = (shared_ptr*)CONCAT71((uint7)(uint3)(uVar15 >> 8), 1);
            if (bVar4) {
                pCVar50 = (ClientEntity*)shared_ptr<ClientNpc>::operator*((shared_ptr<ClientNpc>*)psVar47);
                pCVar50->AddSpotAnim(uVar18 & 255, uVar17 & 65535, (int)uVar13 >> 16, uVar13 & 65535,
                                     *(int*)(local_b8._48_8_ + 8488));
            }
            break;
        case (BADTYPE)83:
            lVar28 = pCVar44->size();
            pCVar44->SetPos(lVar28 + 28);
            cVar3 = pCVar44->CheckCrc();
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            if (cVar3 != '\0') {
                iVar12 = pCVar44->size();
                StoreNewPackedUID((Client*)local_b8._48_8_, (SuperPacket*)pCVar44, iVar12 + -28);
            }
            break;
        case (BADTYPE)84:
            uVar15 = pCVar44->g4();
            uVar18 = pCVar44->g4();
            puVar33 = (undefined1*)(local_b8._48_8_ + 19120);
            pSVar21 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)puVar33);
            uVar20 = pSVar21->GetOutgoingEncryption();
            local_480->MakeClientMessage(82, uVar20);
            new (&local_80) SuperShuffledPacketFactory(local_478);
            pPVar22 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_80.HeapBeginPtr();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(pPVar22,
                                                                                           javapal::GameShell::m_fps);
            pSVar39 = (ShuffledPacket2*)local_80.p2_alt2();
            pSVar27 = (ShuffledPacket4*)local_80.p2_alt2();
            ShuffledPacket2::p4<unsigned int>(pSVar39, uVar15);
            ShuffledPacket4::p4<unsigned int>(pSVar27, uVar18);
            pSVar39 = (ShuffledPacket2*)local_80.HeapBeginPtr();
            ShuffledPacket2::p1<int>(pSVar39, 0);
            pSVar21 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)puVar33);
            pSVar21->SendClientMessage(local_480);
            local_480->~ClientMessage();
            psVar41 = (shared_ptr*)CONCAT71((uint7)(uint3)(uVar15 >> 8), 1);
            break;
        case (BADTYPE)85:
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            GetNPCPos((Client*)local_b8._48_8_, true, (SuperPacket*)pCVar44);
            break;
        case (BADTYPE)86:
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            EnableClanVarValues((Client*)local_b8._48_8_);
            break;
        case (BADTYPE)87:
            if (*(char*)pCVar55 != '\0') {
                uVar20 = logger::default_logger();
                logger::Logger::Log(uVar20, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    1911, "Resetting variables to authoritative set");
            }
            lVar28 = (&ClientVarCache::m_var)->end();
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            if (lVar28 != 0) {
                local_c0 = (array<int, 32ul>*)(local_b8._48_8_ + 2505812);
                uVar63 = 0;
                do {
                    piVar43 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&ClientVarCache::m_var, uVar63);
                    iVar12 = *piVar43;
                    piVar43 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&ClientVarCache::m_varServ, uVar63);
                    if (iVar12 != *piVar43) {
                        puVar23 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&ClientVarCache::m_varServ, uVar63);
                        uVar14 = *puVar23;
                        puVar23 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&ClientVarCache::m_var, uVar63);
                        *puVar23 = uVar14;
                        ClientVar((Client*)local_b8._48_8_, (int)uVar63);
                        uVar15 = *(undefined4*)(local_b8._48_8_ + 2505940);
                        *(uint*)(local_b8._48_8_ + 2505940) = uVar15 + 1;
                        piVar43 = (int*)std::array<int, 32ul>::operator[](local_c0, (ulong)(uVar15 & 31));
                        *piVar43 = (int)uVar63;
                    }
                    uVar63 = uVar63 + 1;
                    uVar24 = (&ClientVarCache::m_var)->end();
                } while (uVar63 < uVar24);
            }
            break;
        case (BADTYPE)88:
            *(undefined2*)(local_b8._48_8_ + 52996) = 256;
            *(char*)(local_b8._48_8_ + 52999) = '\0';
            bVar5 = pCVar44->g1();
            *(uint*)(local_b8._48_8_ + 53024) = (uint)bVar5;
            bVar5 = pCVar44->g1();
            *(uint*)(local_b8._48_8_ + 53028) = (uint)bVar5;
            uVar8 = pCVar44->g2();
            *(uint*)(local_b8._48_8_ + 53032) = (uint)uVar8;
            bVar5 = pCVar44->g1();
            *(uint*)(local_b8._48_8_ + 53036) = (uint)bVar5;
            bVar5 = pCVar44->g1();
            *(uint*)(local_b8._48_8_ + 53040) = (uint)bVar5;
            if (*(char*)(local_b8._48_8_ + 54760) != '\0') {
                pCVar44 = (Client*)logger::default_logger();
                logger::Logger::Log(pCVar44, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    2917, "cam_lookat lx:%i lz:%i hei:%i rate:%i rate2:%i",
                                    CONCAT44(uVar74, *(int*)(local_b8._48_8_ + 53024)),
                                    CONCAT44(uVar75, *(int*)(local_b8._48_8_ + 53028)),
                                    CONCAT44(uVar77, *(int*)(local_b8._48_8_ + 53032)),
                                    CONCAT44(uVar78, *(int*)(local_b8._48_8_ + 53036)),
                                    CONCAT44(uVar14, *(int*)(local_b8._48_8_ + 53040)));
            }
            uVar20 = local_b8._48_8_;
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            if (99 < *(int*)(local_b8._48_8_ + 53040)) {
                uVar18 = *(int*)(local_b8._48_8_ + 53024) << 7 | 64;
                uVar15 = *(int*)(local_b8._48_8_ + 53028) << 7 | 64;
                iVar16 = GetAvH(pCVar44, uVar18, uVar15, *(int*)(local_b8._48_8_ + 51984));
                iVar12 = *(int*)(uVar20 + 53032);
                iVar69 = uVar18 - *(int*)(uVar20 + 53088);
                iVar19 = *(int*)(uVar20 + 53092);
                iVar67 = uVar15 - *(int*)(uVar20 + 53096);
                dVar73 = (double)sqrt<int>(iVar67 * iVar67 + iVar69 * iVar69);
                dVar73 = (double)atan2<int, int>(iVar16 - (iVar12 + iVar19), (int)dVar73);
                uVar15 = (int)(dVar73 * 325.9490051269531) & 2047;
                *(uint*)(uVar20 + 53100) = uVar15;
                dVar73 = (double)atan2<int, int>(iVar69, iVar67);
                *(uint*)(uVar20 + 53104) = (int)(dVar73 * -325.9490051269531) & 2047;
                iVar12 = dash3d::world::ClampPitchAngle(uVar15);
                *(int*)(uVar20 + 53100) = iVar12;
            }
            break;
        case (BADTYPE)89:
            *(undefined2*)(local_b8._48_8_ + 52996) = 256;
            *(char*)(local_b8._48_8_ + 52999) = '\x01';
            uVar15 = pCVar44->g2s();
            local_80.field_0 = WrapYawAngle((Client*)uVar20, uVar15 & 2027);
            uVar15 = pCVar44->g2s();
            local_b8._0_4_ = dash3d::world::ClampPitchAngle(uVar15 & 2027);
            uVar8 = pCVar44->g2();
            local_f0[0].field_0._0_4_ = (uint)uVar8;
            bVar5 = pCVar44->g1();
            local_110[0]._0_4_ = ZEXT14(bVar5);
            if (*(char*)pCVar55 != '\0') {
                uVar20 = logger::default_logger();
                logger::Logger::Log(uVar20, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    3107, "cam_rotateto yaw:%d pitch:%d cycles:%d easing:%d",
                                    CONCAT44(uVar74, local_80.field_0), CONCAT44(uVar75, local_b8._0_4_),
                                    CONCAT44(uVar77, (uint)local_f0[0].field_0), CONCAT44(uVar78, local_110[0]._0_4_));
            }
            pCVar44 = (Client*)local_b8._48_8_;
            std::make_unique<CinemaCameraRotationTween, int&, int const&, int const&, CinemaCameraTween::Easing_const&>(
                (int*)local_480, (int*)(local_b8._48_8_ + 53100), (int*)local_b8, (Easing*)local_f0);
            std::unique_ptr<CinemaCameraRotationTween, std::default_delete<CinemaCameraRotationTween>>::operator=(
                (unique_ptr<CinemaCameraRotationTween, std::default_delete<CinemaCameraRotationTween>>*)((long)pCVar44 +
                                                                                                         53072),
                (unique_ptr*)local_480);
            local_480->~unique_ptr();
            std::make_unique<CinemaCameraRotationTween, int&, int const&, int const&, CinemaCameraTween::Easing_const&>(
                (int*)local_480, (int*)((long)pCVar44 + 53104), (int*)&local_80, (Easing*)local_f0);
        LAB_1000ecfdb:
            std::unique_ptr<CinemaCameraRotationTween, std::default_delete<CinemaCameraRotationTween>>::operator=(
                (unique_ptr<CinemaCameraRotationTween, std::default_delete<CinemaCameraRotationTween>>*)&pCVar44
                    ->field_53080,
                (unique_ptr*)local_480);
        LAB_1000ecff7:
            local_480->~unique_ptr();
            psVar41 = (shared_ptr*)CONCAT71((int7)((ulong)pCVar55 >> 8), 1);
            break;
        case (BADTYPE)90:
            new (local_480) ErrorCapture(true);
            lVar28 = std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)(local_b8._48_8_ + 52768));
            iVar12 = pCVar44->GetTextureAtlas();
            ((lVar28 + 208))->ProcessUpdate(pCVar44, iVar12, local_480);
            cVar3 = local_480->IsRaised();
            if (cVar3 != '\0') {
                local_480->second();
                pcVar46 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "client_network.cpp",
                                1846, pcVar46);
            }
            ResetPlayerIgnoreIndicators((Client*)local_b8._48_8_);
        LAB_1000ed08d:
            *(int*)(local_b8._48_8_ + 2506344) = *(int*)(local_b8._48_8_ + 2505808);
            local_480->~LanguageMessage();
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            break;
        case (BADTYPE)91:
            NotifyClanSettingsUpdate((Client*)local_b8._48_8_);
            bVar5 = pCVar44->g1s();
            make_shared<rs2lib::social::ClanChannelDelta, core::SuperPacket&>((jag*)local_480, (SuperPacket*)pCVar44);
            new (&local_80) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(pCVar44);
            if (bVar5 < 4) {
                psVar41 = (shared_ptr*)std::array<shared_ptr<rs2lib::social::ClanChannel>, 4ul>::operator[](
                    (array<shared_ptr<rs2lib::social::ClanChannel>, 4ul>*)(local_b8._48_8_ + 52648), (long)(char)bVar5);
                shared_ptr<rs2lib::social::ClanChannel>::operator=((shared_ptr<rs2lib::social::ClanChannel>*)&local_80,
                                                                   psVar41);
            } else {
                shared_ptr<rs2lib::social::ClanChannel>::operator=((shared_ptr<rs2lib::social::ClanChannel>*)&local_80,
                                                                   (shared_ptr*)(local_b8._48_8_ + 52632));
            }
            bVar4 = operator==((shared_ptr*)&local_80, (_func_decltype_nullptr*)0);
            if (bVar4) {
                RequestClanChannelFull((Client*)local_b8._48_8_, (int)(char)bVar5);
            } else {
                lVar28 = shared_ptr<rs2lib::social::ClanChannelDelta>::operator->(
                    (shared_ptr<rs2lib::social::ClanChannelDelta>*)local_480);
                lVar28 = *(long*)(lVar28 + 24);
                lVar49 = shared_ptr<rs2lib::social::ClanChannel>::operator->(
                    (shared_ptr<rs2lib::social::ClanChannel>*)&local_80);
                if (*(long*)(lVar49 + 80) < lVar28) {
                    RequestClanChannelFull((Client*)local_b8._48_8_, (int)(char)bVar5);
                } else {
                    lVar28 = shared_ptr<rs2lib::social::ClanChannelDelta>::operator->(
                        (shared_ptr<rs2lib::social::ClanChannelDelta>*)local_480);
                    lVar28 = *(long*)(lVar28 + 24);
                    lVar49 = shared_ptr<rs2lib::social::ClanChannel>::operator->(
                        (shared_ptr<rs2lib::social::ClanChannel>*)&local_80);
                    if (*(long*)(lVar49 + 80) <= lVar28) {
                        this_12 = (ClanChannelDelta*)shared_ptr<rs2lib::social::ClanChannelDelta>::operator->(
                            (shared_ptr<rs2lib::social::ClanChannelDelta>*)local_480);
                        pCVar59 = (ClanChannel*)shared_ptr<rs2lib::social::ClanChannel>::operator*(
                            (shared_ptr<rs2lib::social::ClanChannel>*)&local_80);
                        this_12->ApplyToClanChannel(pCVar59);
                        if (*(char*)pCVar55 != '\0') {
                            uVar20 = logger::default_logger();
                            logger::Logger::Log(uVar20, 0, 5,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                "projects/osclient/client_network.cpp",
                                                2746, "----------");
                            uVar20 = logger::default_logger();
                            shared_ptr<rs2lib::social::ClanChannel>::operator->(
                                (shared_ptr<rs2lib::social::ClanChannel>*)&local_80);
                            uVar32 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            logger::Logger::Log(uVar20, 0, 5,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                "projects/osclient/client_network.cpp",
                                                2747, "Clan Name: %s", uVar32);
                            uVar14 = (undefined4)((ulong)uVar32 >> 32);
                            uVar20 = logger::default_logger();
                            lVar28 = shared_ptr<rs2lib::social::ClanChannel>::operator->(
                                (shared_ptr<rs2lib::social::ClanChannel>*)&local_80);
                            cVar3 = *(char*)(lVar28 + 122);
                            lVar28 = shared_ptr<rs2lib::social::ClanChannel>::operator->(
                                (shared_ptr<rs2lib::social::ClanChannel>*)&local_80);
                            logger::Logger::Log(uVar20, 0, 5,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                "projects/osclient/client_network.cpp",
                                                2748, "Rank Kick: %i  Talk: %i", CONCAT44(uVar14, (int)cVar3),
                                                CONCAT44(uVar75, (int)*(char*)(lVar28 + 121)));
                            uVar20 = logger::default_logger();
                            logger::Logger::Log(uVar20, 0, 5,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                "projects/osclient/client_network.cpp",
                                                2749, "Users:");
                            uVar63 = 0;
                            while (true) {
                                pCVar59 = (ClanChannel*)shared_ptr<rs2lib::social::ClanChannel>::operator->(
                                    (shared_ptr<rs2lib::social::ClanChannel>*)&local_80);
                                iVar12 = pCVar59->GetUserListSize();
                                if ((long)iVar12 <= (long)uVar63)
                                    break;
                                lVar28 = shared_ptr<rs2lib::social::ClanChannel>::operator->(
                                    (shared_ptr<rs2lib::social::ClanChannel>*)&local_80);
                                psVar41 = (shared_ptr*)eastl::
                                    vector<shared_ptr<rs2lib::social::ClanChannelUser>, eastl::allocator>::operator[](
                                        (vector<shared_ptr<rs2lib::social::ClanChannelUser>,
                                                eastl::allocator>*)(lVar28 + 48),
                                        uVar63);
                                new (local_b8) shared_ptr<dash3d::Decor>(psVar41);
                                pCVar55 = (Client*)logger::default_logger();
                                lVar28 = shared_ptr<rs2lib::social::ClanChannelUser>::operator->(
                                    (shared_ptr<rs2lib::social::ClanChannelUser>*)local_b8);
                                ((lVar28 + 16))->GetDisplayName();
                                uVar20 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                logger::Logger::Log(pCVar55, 0, 5,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "projects/osclient/client_network.cpp",
                                                    2753, &DAT_100e377c0, uVar20);
                                local_b8->~shared_ptr();
                                uVar63 = uVar63 + 1;
                            }
                            uVar20 = logger::default_logger();
                            logger::Logger::Log(uVar20, 0, 5,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                "projects/osclient/client_network.cpp",
                                                2755, "----------");
                        }
                    }
                }
            }
            local_80.~shared_ptr();
            local_480->~shared_ptr();
            psVar41 = (shared_ptr*)CONCAT71((int7)((ulong)pCVar55 >> 8), 1);
            break;
        case (BADTYPE)92:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            iVar12 = pSVar27->g4s();
            pSVar26 = (ShuffledPacket3*)local_480->p2_alt2();
            uVar15 = pSVar26->g2();
            psVar47 = (shared_ptr*)rs2lib::IfType::Get(iVar12);
            lVar28 = shared_ptr<rs2lib::IfType>::operator*((shared_ptr<rs2lib::IfType>*)psVar47);
            iVar12 = ((uVar15 & 992) << 6 | (uVar15 & 31744) << 9) + (uVar15 & 31) * 8;
            psVar41 = (shared_ptr*)CONCAT71((uint7)(uint3)(uVar15 >> 8), 1);
            if (*(int*)(lVar28 + 116) != iVar12) {
                *(int*)(lVar28 + 116) = iVar12;
                ComponentUpdated((Client*)local_b8._48_8_, psVar47);
            }
            break;
        case (BADTYPE)93:
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            ZonePacket((Client*)local_b8._48_8_, 0, pCVar44);
            break;
        case (BADTYPE)94:
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            ZonePacket((Client*)local_b8._48_8_, 7, pCVar44);
            break;
        case (BADTYPE)95:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pPVar38 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_480->p2_alt2();
            uVar15 = pPVar38->g2();
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            uVar8 = pSVar39->g2();
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            midi2::MidiManager::Stop((uint)uVar8, uVar15 & 65535);
            break;
        case (BADTYPE)96:
            uVar15 = pCVar44->g1();
            uVar18 = pCVar44->g1();
            uVar17 = pCVar44->g1();
            bVar5 = pCVar44->g1();
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            if ((byte)uVar15 < 5) {
                uVar63 = (ulong)(uVar15 & 255);
                ((undefined1*)(local_b8._48_8_ + 2508992))[uVar63 - 112] = 1;
                *(uint*)((undefined1*)(local_b8._48_8_ + 2508992) + uVar63 * 4 + -104) = uVar18 & 255;
                *(uint*)((undefined1*)(local_b8._48_8_ + 2508992) + uVar63 * 4 + -84) = uVar17 & 255;
                *(uint*)((undefined1*)(local_b8._48_8_ + 2508992) + uVar63 * 4 + -64) = (uint)bVar5;
                *(undefined4*)((undefined1*)(local_b8._48_8_ + 2508992) + uVar63 * 4 + -44) = 0;
                if (*(char*)(local_b8._48_8_ + 54760) != '\0') {
                    uVar20 = logger::default_logger();
                    logger::Logger::Log(uVar20, 0, 5,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/client_network.cpp",
                                        2947, "cam_shake axis:%d ran:%d amp:%d rate:%d",
                                        CONCAT44(uVar74, uVar15) & 18446744069414584575,
                                        CONCAT44(uVar75, uVar18) & 18446744069414584575,
                                        CONCAT44(uVar77, uVar17) & 18446744069414584575, CONCAT44(uVar78, (uint)bVar5));
                }
            }
            break;
        case (BADTYPE)97:
            *(int*)(local_b8._48_8_ + 2506356) = *(int*)(local_b8._48_8_ + 2505808);
            cVar3 = pCVar44->g1s();
            lVar28 = pCVar44->GetTextureAtlas();
            if (lVar28 == 1) {
                if (*(char*)pCVar55 != '\0') {
                    uVar20 = logger::default_logger();
                    logger::Logger::Log(uVar20, 0, 5,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/client_network.cpp",
                                        2613, "Received ClanChannel RESET - affinitySlot: %i",
                                        CONCAT44(uVar74, (int)cVar3));
                }
                if (cVar3 < '\0') {
                    new (local_480) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    shared_ptr<rs2lib::social::ClanChannel>::operator=(
                        (shared_ptr<rs2lib::social::ClanChannel>*)(local_b8._48_8_ + 52632), (shared_ptr*)local_480);
                } else {
                    new (local_480) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    psVar45 = (shared_ptr<rs2lib::social::ClanChannel>*)
                        std::array<shared_ptr<rs2lib::social::ClanChannel>, 4ul>::operator[](
                            (array<shared_ptr<rs2lib::social::ClanChannel>, 4ul>*)(local_b8._48_8_ + 52648),
                            (long)cVar3);
                    shared_ptr<rs2lib::social::ClanChannel>::operator=(psVar45, (shared_ptr*)local_480);
                }
            } else {
                new (local_480) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(this_14);
                if (cVar3 < '\0') {
                    make_shared<rs2lib::social::ClanChannel, core::SuperPacket&>((jag*)&local_80,
                                                                                 (SuperPacket*)pCVar44);
                    psVar41 = (shared_ptr*)shared_ptr<rs2lib::social::ClanChannel>::operator=(
                        (shared_ptr<rs2lib::social::ClanChannel>*)(local_b8._48_8_ + 52632), (shared_ptr*)&local_80);
                    shared_ptr<rs2lib::social::ClanChannel>::operator=(
                        (shared_ptr<rs2lib::social::ClanChannel>*)local_480, psVar41);
                } else {
                    make_shared<rs2lib::social::ClanChannel, core::SuperPacket&>((jag*)&local_80,
                                                                                 (SuperPacket*)pCVar44);
                    psVar45 = (shared_ptr<rs2lib::social::ClanChannel>*)
                        std::array<shared_ptr<rs2lib::social::ClanChannel>, 4ul>::operator[](
                            (array<shared_ptr<rs2lib::social::ClanChannel>, 4ul>*)(local_b8._48_8_ + 52648),
                            (long)cVar3);
                    psVar41 = (shared_ptr*)shared_ptr<rs2lib::social::ClanChannel>::operator=(psVar45,
                                                                                              (shared_ptr*)&local_80);
                    shared_ptr<rs2lib::social::ClanChannel>::operator=(
                        (shared_ptr<rs2lib::social::ClanChannel>*)local_480, psVar41);
                }
                local_80.~shared_ptr();
                if (*(char*)pCVar55 != '\0') {
                    uVar32 = logger::default_logger();
                    lVar28 = shared_ptr<rs2lib::social::ClanChannel>::operator->(
                        (shared_ptr<rs2lib::social::ClanChannel>*)local_480);
                    uVar20 = *(undefined8*)(lVar28 + 80);
                    logger::Logger::Log(uVar32, 0, 5,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/client_network.cpp",
                                        2640, "ClanChannel affinitySlot %i received and set - updateNum: %lld",
                                        CONCAT44(uVar74, (int)cVar3), uVar20);
                    uVar76 = (undefined4)((ulong)uVar20 >> 32);
                    uVar20 = logger::default_logger();
                    logger::Logger::Log(uVar20, 0, 5,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/client_network.cpp",
                                        2641, "----------");
                    uVar20 = logger::default_logger();
                    shared_ptr<rs2lib::social::ClanChannel>::operator->(
                        (shared_ptr<rs2lib::social::ClanChannel>*)local_480);
                    uVar32 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    logger::Logger::Log(uVar20, 0, 5,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/client_network.cpp",
                                        2642, "Clan Name: %s", uVar32);
                    uVar14 = (undefined4)((ulong)uVar32 >> 32);
                    uVar20 = logger::default_logger();
                    lVar28 = shared_ptr<rs2lib::social::ClanChannel>::operator->(
                        (shared_ptr<rs2lib::social::ClanChannel>*)local_480);
                    cVar3 = *(char*)(lVar28 + 122);
                    lVar28 = shared_ptr<rs2lib::social::ClanChannel>::operator->(
                        (shared_ptr<rs2lib::social::ClanChannel>*)local_480);
                    uVar58 = CONCAT44(uVar76, (int)*(char*)(lVar28 + 121));
                    uVar32 = CONCAT44(uVar14, (int)cVar3);
                    logger::Logger::Log(uVar20, 0, 5,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/client_network.cpp",
                                        2643, "Rank Kick: %i Talk: %i", uVar32, uVar58);
                    uVar76 = (undefined4)((ulong)uVar32 >> 32);
                    uVar20 = logger::default_logger();
                    pCVar59 = (ClanChannel*)shared_ptr<rs2lib::social::ClanChannel>::operator->(
                        (shared_ptr<rs2lib::social::ClanChannel>*)local_480);
                    uVar14 = pCVar59->GetUserListSize();
                    logger::Logger::Log(uVar20, 0, 5,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/client_network.cpp",
                                        2644, "Users: (%i)", CONCAT44(uVar76, uVar14));
                    uVar63 = 0;
                    while (true) {
                        uVar14 = (undefined4)((ulong)uVar58 >> 32);
                        pCVar59 = (ClanChannel*)shared_ptr<rs2lib::social::ClanChannel>::operator->(
                            (shared_ptr<rs2lib::social::ClanChannel>*)local_480);
                        iVar12 = pCVar59->GetUserListSize();
                        if ((long)iVar12 <= (long)uVar63)
                            break;
                        lVar28 = shared_ptr<rs2lib::social::ClanChannel>::operator->(
                            (shared_ptr<rs2lib::social::ClanChannel>*)local_480);
                        psVar41 = (shared_ptr*)
                            eastl::vector<shared_ptr<rs2lib::social::ClanChannelUser>, eastl::allocator>::operator[](
                                (vector<shared_ptr<rs2lib::social::ClanChannelUser>, eastl::allocator>*)(lVar28 + 48),
                                uVar63);
                        new (&local_80) shared_ptr<dash3d::Decor>(psVar41);
                        pCVar44 = (Client*)logger::default_logger();
                        lVar28 = shared_ptr<rs2lib::social::ClanChannelUser>::operator->(
                            (shared_ptr<rs2lib::social::ClanChannelUser>*)&local_80);
                        ((lVar28 + 16))->GetDisplayName();
                        uVar20 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        lVar28 = shared_ptr<rs2lib::social::ClanChannelUser>::operator->(
                            (shared_ptr<rs2lib::social::ClanChannelUser>*)&local_80);
                        uVar58 = CONCAT44(uVar14, (int)*(char*)(lVar28 + 8));
                        logger::Logger::Log(pCVar44, 0, 5,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                            "osclient/client_network.cpp",
                                            2648, "ChannelUser: %s rank: %i", uVar20, uVar58);
                        local_80.~shared_ptr();
                        uVar63 = uVar63 + 1;
                    }
                    uVar20 = logger::default_logger();
                    logger::Logger::Log(uVar20, 0, 5,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/client_network.cpp",
                                        2650, "----------");
                }
            }
            pSVar51 = (SuperShuffledPacketFactory*)local_480;
            goto LAB_1000ef06e;
        case (BADTYPE)98:
            uVar15 = pCVar44->g1();
            cVar3 = pCVar44->g1();
            if (cVar3 == '\0') {
                puVar34 =
                    (unique_ptr<rs2lib::StockPlayerOffer, eastl::default_delete<rs2lib::StockPlayerOffer>>*)std::array<
                        eastl::unique_ptr<rs2lib::StockPlayerOffer, eastl::default_delete<rs2lib::StockPlayerOffer>>,
                        8ul>::operator[]((array<eastl::unique_ptr<rs2lib::StockPlayerOffer,
                                                                  eastl::default_delete<rs2lib::StockPlayerOffer>>,
                                                8ul>*)(local_b8._48_8_ + 52784),
                                         (ulong)uVar15 & 255);
                pSVar35 = operator_new(32);
                rs2lib::StockPlayerOffer::StockPlayerOffer(pSVar35);
                eastl::unique_ptr<rs2lib::StockPlayerOffer, eastl::default_delete<rs2lib::StockPlayerOffer>>::reset(
                    puVar34, pSVar35);
                lVar28 = pCVar44->size();
                pCVar44->SetPos(lVar28 + 18);
            } else {
                lVar28 = pCVar44->size();
                pCVar44->SetPos(lVar28 - 1);
                new (local_480) ErrorCapture(true);
                puVar34 =
                    (unique_ptr<rs2lib::StockPlayerOffer, eastl::default_delete<rs2lib::StockPlayerOffer>>*)std::array<
                        eastl::unique_ptr<rs2lib::StockPlayerOffer, eastl::default_delete<rs2lib::StockPlayerOffer>>,
                        8ul>::operator[]((array<eastl::unique_ptr<rs2lib::StockPlayerOffer,
                                                                  eastl::default_delete<rs2lib::StockPlayerOffer>>,
                                                8ul>*)(local_b8._48_8_ + 52784),
                                         (ulong)uVar15 & 255);
                pSVar35 = operator_new(32);
                rs2lib::StockPlayerOffer::StockPlayerOffer(pSVar35, (PacketJ*)pCVar44, false, (ErrorCapture*)local_480);
                eastl::unique_ptr<rs2lib::StockPlayerOffer, eastl::default_delete<rs2lib::StockPlayerOffer>>::reset(
                    puVar34, pSVar35);
                cVar3 = local_480->IsRaised();
                if (cVar3 != '\0') {
                    local_480->second();
                    uVar20 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    3185, "Failed to update stock market offers from server data: %s", uVar20);
                }
                local_480->~LanguageMessage();
            }
            *(int*)(local_b8._48_8_ + 2506360) = *(int*)(local_b8._48_8_ + 2505808);
            psVar41 = (shared_ptr*)CONCAT71((int7)((ulong)pCVar44 >> 8), 1);
            break;
        case (BADTYPE)99:
            uVar15 = pCVar44->g4();
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            if (uVar15 != *(uint*)(local_b8._48_8_ + 7294740)) {
                *(uint*)(local_b8._48_8_ + 7294740) = uVar15;
                ForceRecentreFreecam((Client*)local_b8._48_8_);
            }
            break;
        case (BADTYPE)100:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pPVar38 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_480->p2_alt2();
            uVar8 = pPVar38->g2();
            local_f0[0].field_0._0_4_ = (uint)uVar8;
            pSVar26 = (ShuffledPacket3*)local_480->p2_alt2();
            uVar15 = pSVar26->g3();
            local_80.field_0 = (uVar15 >> 4 & 7) + ((int)uVar15 >> 16);
            local_b8._0_4_ = (uVar15 & 7) + (uVar15 >> 8 & 255);
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            uVar15 = pSVar39->g1();
            pCVar44 = (Client*)local_480->p2_alt2();
            uVar8 = pCVar44->g2();
            uVar20 = local_b8._48_8_;
            local_110[0]._0_4_ = ZEXT24(uVar8);
            if (((((int)local_80.field_0 < 104) && (-1 < (int)local_80.field_0)) && (-1 < (int)local_b8._0_4_)) &&
                ((int)local_b8._0_4_ < 104)) {
                uVar17 = local_80.field_0 << 7;
                local_80._0_8_ = CONCAT44(local_80._4_4_, uVar17) | 64;
                uVar18 = local_b8._0_4_ << 7;
                local_b8._0_8_ = CONCAT44(local_b8._4_4_, uVar18) | 64;
                iVar12 = GetAvH(pCVar44, uVar17 | 64, uVar18 | 64, *(int*)(local_b8._48_8_ + 51984));
                local_128._0_4_ = iVar12 - (uVar15 & 255);
                make_shared<MapSpotAnim, int&, int&, int&, int&, int, int&, int&>(
                    (jag*)local_480, (int*)local_f0, (int*)(uVar20 + 51984), (int*)&local_80, (int*)local_b8,
                    (int*)&local_128, (int*)local_110, (int*)(uVar20 + 8488));
                ((uVar20 + 7164616))->push_back(local_480);
                local_480->~shared_ptr();
            }
            goto switchD_1000ea3f5_default;
        case (BADTYPE)101:
            uVar15 = pCVar44->g1s();
            pCVar55 = (Client*)(ulong)uVar15;
            uVar18 = pCVar44->g2();
            uVar17 = pCVar44->g3();
            bVar5 = (byte)uVar15;
            if ((char)bVar5 < '\0') {
                psVar41 = (shared_ptr*)(local_b8._48_8_ + 52632);
            } else {
                psVar41 = (shared_ptr*)std::array<shared_ptr<rs2lib::social::ClanChannel>, 4ul>::operator[](
                    (array<shared_ptr<rs2lib::social::ClanChannel>, 4ul>*)(local_b8._48_8_ + 52648), (long)(char)bVar5);
            }
            new (local_f0) shared_ptr<dash3d::Decor>(psVar41);
            bVar4 = operator==((shared_ptr*)local_f0, (_func_decltype_nullptr*)0);
            if (!bVar4) {
                uVar24 = ((ulong)uVar18 & 65535) << 32 | (ulong)uVar17;
                puVar33 = (undefined1*)(local_b8._48_8_ + 53352);
                uVar63 = 0;
                do {
                    puVar52 = (ulong*)std::array<unsigned long long, 100ul>::operator[](
                        (array<unsigned long long, 100ul>*)puVar33, uVar63);
                    uVar20 = local_b8._48_8_;
                    if (*puVar52 == uVar24)
                        goto LAB_1000edd0c;
                    uVar63 = uVar63 + 1;
                } while (uVar63 != 100);
                iVar12 = *(int*)(local_b8._48_8_ + 54152);
                puVar52 = (ulong*)std::array<unsigned long long, 100ul>::operator[](
                    (array<unsigned long long, 100ul>*)puVar33, (long)iVar12);
                *puVar52 = uVar24;
                *(int*)(uVar20 + 54152) = (iVar12 + 1) % 100;
                eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
                pWVar54 = (WordPack*)std::unique_ptr<game::WordPack, std::default_delete<game::WordPack>>::operator->(
                    (unique_ptr<game::WordPack, std::default_delete<game::WordPack>>*)((long)(uVar20 + 54172) + 4));
                pWVar54->UnpackCP1252AsUTF8(local_b8, (PacketT*)(local_4c0 + 8));
                pcVar46 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                new (&local_80) eastl::allocator("EASTL basic_string");
                new (local_480) eastl::string(pcVar46, (allocator*)&local_80);
                new (local_110) eastl::allocator("EASTL basic_string");
                new (&local_80) eastl::string("", local_110);
                lVar28 = shared_ptr<rs2lib::social::ClanChannel>::operator->(
                    (shared_ptr<rs2lib::social::ClanChannel>*)local_f0);
                pCVar55 = (Client*)(ulong)CONCAT31((int3)(uVar15 >> 8), bVar5 >> 7);
                AddChat((Client*)local_b8._48_8_, (uint)(bVar5 >> 7) * 3 + 43, (basic_string*)&local_80,
                        (basic_string*)local_480, (basic_string*)(lVar28 + 88));
                local_80.~basic_string();
                local_480->~basic_string();
                local_b8->~basic_string();
            }
        LAB_1000edd0c:
            pSVar51 = local_f0;
            pCVar44 = pCVar55;
        LAB_1000ef06e:
            pSVar51->~shared_ptr();
            psVar41 = (shared_ptr*)CONCAT71((int7)((ulong)pCVar44 >> 8), 1);
            break;
        case (BADTYPE)102:
            uVar15 = pCVar44->g1s();
            pCVar55 = (Client*)(ulong)uVar15;
            pCVar65 = pCVar44;
            PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
                (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)&local_80, bVar4);
            uVar11 = pCVar44->g2();
            uVar14 = pCVar44->g3();
            bVar5 = pCVar44->g1();
            paVar29 = (array<int, 32ul>*)constants::ChatCrownType::FromId((uint)bVar5);
            new (&local_128) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(pCVar65);
            cVar3 = (char)uVar15;
            if (cVar3 < '\0') {
                psVar41 = (shared_ptr*)(local_b8._48_8_ + 52632);
            } else {
                psVar41 = (shared_ptr*)std::array<shared_ptr<rs2lib::social::ClanChannel>, 4ul>::operator[](
                    (array<shared_ptr<rs2lib::social::ClanChannel>, 4ul>*)(local_b8._48_8_ + 52648), (long)cVar3);
            }
            local_c0 = paVar29;
            shared_ptr<rs2lib::social::ClanChannel>::operator=((shared_ptr<rs2lib::social::ClanChannel>*)&local_128,
                                                               psVar41);
            bVar4 = operator==(&local_128, (_func_decltype_nullptr*)0);
            puVar33 = (undefined1*)(local_b8._48_8_ + 53352);
            uVar63 = 0;
            do {
                puVar52 = (ulong*)std::array<unsigned long long, 100ul>::operator[](
                    (array<unsigned long long, 100ul>*)puVar33, uVar63);
                uVar20 = local_b8._48_8_;
                if (*puVar52 == (ulong)CONCAT24(uVar11, uVar14)) {
                    bVar4 = true;
                    break;
                }
                uVar63 = uVar63 + 1;
            } while (uVar63 != 100);
            if (local_c0[6] != (array<int, 32ul>)0) {
                local_c8 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)CONCAT71(local_c8._1_7_, cVar3);
                pFVar53 = (FriendSystem*)std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                    (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)(local_b8._48_8_ + 52768));
                new (local_480) rs2lib::social::DisplayName(&local_80, *(undefined4*)(uVar20 + 54172));
                cVar3 = pFVar53->IsIgnored(local_480);
                local_480->~pair();
                bVar2 = true;
                if (cVar3 == '\0') {
                    bVar2 = bVar4;
                }
                bVar4 = bVar2;
                pCVar55 = (Client*)CONCAT71(SUB87(uVar20, 1), (char)local_c8);
            }
            uVar20 = local_b8._48_8_;
            if (bVar4 == false) {
                iVar12 = *(int*)(local_b8._48_8_ + 54152);
                puVar52 = (ulong*)std::array<unsigned long long, 100ul>::operator[](
                    (array<unsigned long long, 100ul>*)puVar33, (long)iVar12);
                *puVar52 = (ulong)CONCAT24(uVar11, uVar14);
                *(int*)(uVar20 + 54152) = (iVar12 + 1) % 100;
                eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
                pWVar54 = (WordPack*)std::unique_ptr<game::WordPack, std::default_delete<game::WordPack>>::operator->(
                    (unique_ptr<game::WordPack, std::default_delete<game::WordPack>>*)((long)(uVar20 + 54172) + 4));
                pWVar54->UnpackCP1252AsUTF8(local_110, (PacketT*)(local_4c0 + 8));
                paVar29 = local_c0;
                pcVar46 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar63 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                local_480->Escape(pcVar46, uVar63);
                bVar5 = (byte)pCVar55 >> 7;
                pCVar55 = (Client*)CONCAT71((int7)((ulong)pCVar55 >> 8), bVar5);
                iVar12 = (uint)bVar5 * 3 + 41;
                if (*(int*)paVar29 == -1) {
                    lVar28 = shared_ptr<rs2lib::social::ClanChannel>::operator->(
                        (shared_ptr<rs2lib::social::ClanChannel>*)&local_128);
                    AddChat((Client*)local_b8._48_8_, iVar12, (basic_string*)&local_80, (basic_string*)local_480,
                            (basic_string*)(lVar28 + 88));
                } else {
                    local_f0->TAG_IMG(*(int*)paVar29);
                    eastl::operator+((eastl*)local_b8, (basic_string*)local_f0, (basic_string*)&local_80);
                    lVar28 = shared_ptr<rs2lib::social::ClanChannel>::operator->(
                        (shared_ptr<rs2lib::social::ClanChannel>*)&local_128);
                    AddChat((Client*)local_b8._48_8_, iVar12, (basic_string*)local_b8, (basic_string*)local_480,
                            (basic_string*)(lVar28 + 88));
                    local_b8->~basic_string();
                    local_f0->~basic_string();
                }
                local_480->~basic_string();
                local_110->~basic_string();
            }
            local_128.~shared_ptr();
        LAB_1000ef45e:
            pHVar36 = &local_80;
        LAB_1000ef462:
            pHVar36->~basic_string();
            psVar41 = (shared_ptr*)CONCAT71((int7)((ulong)pCVar55 >> 8), 1);
            break;
        case (BADTYPE)103:
            bVar5 = pCVar44->g1();
            bVar7 = pCVar44->g1();
            uVar15 = (uint)bVar5;
            if (bVar5 == 255) {
                uVar15 = 0;
            }
            uVar18 = (uint)bVar7;
            if (bVar7 == 255) {
                uVar18 = 0;
            }
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            SetPlayerDestination((Client*)local_b8._48_8_, uVar15, uVar18);
            break;
        case (BADTYPE)104:
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            ZonePacket((Client*)local_b8._48_8_, 5, pCVar44);
            break;
        case (BADTYPE)105:
            local_c8 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pCVar55;
            local_130 = (Array<int, eastl::allocator>*)pCVar44->GetTextureAtlas();
            uVar15 = pCVar44->g2();
            uVar8 = pCVar44->g2();
            uVar14 = (undefined4)(in_stack_fffffffffffffae8 >> 32);
            if (local_c8->field_0 != '\0') {
                uVar20 = logger::default_logger();
                in_stack_fffffffffffffae8 = CONCAT44(uVar14, uVar15) & 18446744069414649855;
                logger::Logger::Log(uVar20, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    3916, "Received if resync - toplevel:%d", in_stack_fffffffffffffae8);
            }
            if (*(int*)(local_b8._48_8_ + 53216) != (uVar15 & 65535)) {
                *(uint*)(local_b8._48_8_ + 53216) = uVar15 & 65535;
                InterfaceCalculateSizeAndPosAll((Client*)local_b8._48_8_, false, false);
                IfAnimReset((Client*)local_b8._48_8_, *(int*)(local_b8._48_8_ + 53216));
                ScriptRunner::OnLoad(*(int*)(local_b8._48_8_ + 53216));
                puVar33 = (undefined1*)(local_b8._48_8_ + 2506576);
                uVar63 = 0;
                do {
                    puVar25 = (undefined1*)std::array<bool, 100ul>::operator[]((array<bool, 100ul>*)puVar33, uVar63);
                    *puVar25 = 1;
                    uVar63 = uVar63 + 1;
                } while (uVar63 != 100);
            }
            local_c0 = (array<int, 32ul>*)(local_b8._48_8_ + 53160);
            if (uVar8 != 0) {
                iVar12 = uVar8 + 1;
                do {
                    pPVar38 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)(local_4c0 + 8);
                    uVar14 = pPVar38->g4();
                    local_b8._0_4_ = uVar14;
                    uVar15 = pPVar38->g2();
                    bVar5 = pPVar38->g1();
                    uVar14 = (undefined4)(in_stack_fffffffffffffae8 >> 32);
                    uVar76 = (undefined4)(in_stack_fffffffffffffaf0 >> 32);
                    uVar74 = (undefined4)(in_stack_fffffffffffffaf8 >> 32);
                    if (local_c8->field_0 != '\0') {
                        uVar20 = logger::default_logger();
                        in_stack_fffffffffffffaf8 = CONCAT44(uVar74, (uint)bVar5);
                        in_stack_fffffffffffffaf0 = CONCAT44(uVar76, uVar15) & 18446744069414649855;
                        in_stack_fffffffffffffae8 = CONCAT44(uVar14, local_b8._0_4_);
                        logger::Logger::Log(uVar20, 0, 5,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                            "osclient/client_network.cpp",
                                            3936, "Received if resync - layer:%d ifid:%d type:%d",
                                            in_stack_fffffffffffffae8, in_stack_fffffffffffffaf0,
                                            in_stack_fffffffffffffaf8);
                    }
                    eastl::hashtable<
                        int,
                        eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer,
                                                               std::default_delete<ChatHistory::HistoryBuffer>>>,
                        eastl::allocator,
                        eastl::use_first<
                            eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer,
                                                                   std::default_delete<ChatHistory::HistoryBuffer>>>>,
                        eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                        eastl::prime_rehash_policy, false, true, true>::find((int*)local_480);
                    eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                    bVar4 = eastl::operator!=((eastl*)local_480, (hashtable_iterator_base*)&local_80, extraout_RDX);
                    if (bVar4) {
                        lVar28 = local_480->HeapBeginPtr();
                        puVar61 = (uint*)(lVar28 + 4);
                    } else {
                        puVar61 = (uint*)0;
                    }
                    uVar14 = (undefined4)(in_stack_fffffffffffffae8 >> 32);
                    uVar76 = (undefined4)(in_stack_fffffffffffffaf0 >> 32);
                    if (puVar61 == (uint*)0) {
                        if (local_c8->field_0 != '\0') {
                            uVar20 = logger::default_logger();
                            logger::Logger::Log(uVar20, 0, 5,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                "projects/osclient/client_network.cpp",
                                                3944, "if not found!");
                        }
                    LAB_1000e8c37:
                        puVar61 = (uint*)0;
                    } else if (*puVar61 != (uVar15 & 65535)) {
                        if (local_c8->field_0 != '\0') {
                            uVar20 = logger::default_logger();
                            in_stack_fffffffffffffaf0 = CONCAT44(uVar76, puVar61[1]);
                            in_stack_fffffffffffffae8 = CONCAT44(uVar14, *puVar61);
                            logger::Logger::Log(uVar20, 0, 5,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                "projects/osclient/client_network.cpp",
                                                3948, "Purging incorrect SubInterface - ifid:%d type:%d",
                                                in_stack_fffffffffffffae8, in_stack_fffffffffffffaf0);
                        }
                        CloseSubinterface((Client*)local_b8._48_8_, local_b8._0_4_, *puVar61, true);
                        goto LAB_1000e8c37;
                    }
                    if (puVar61 == (uint*)0) {
                        puVar61 = (uint*)OpenSubinterface((Client*)local_b8._48_8_, local_b8._0_4_, uVar15 & 65535,
                                                          (uint)bVar5);
                    }
                    *(undefined1*)(puVar61 + 2) = 1;
                    iVar12 = iVar12 + -1;
                } while (1 < iVar12);
            }
            helpers::GetKeysIf<int, SubInterface, (ServerConnection&)->TcpIn()::__17>(local_480);
            phVar71 = (hashtable_iterator_base*)local_480;
            local_f0->begin();
            local_110->end();
            bVar4 = eastl::operator!=((eastl*)local_f0, (hashtable_iterator_base*)local_110, extraout_RDX_04);
            if (bVar4) {
                phVar71 = (hashtable_iterator_base*)local_b8;
                do {
                    puVar23 =
                        (undefined4*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)local_f0);
                    local_128._0_4_ = *puVar23;
                    eastl::hashtable<
                        int,
                        eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer,
                                                               std::default_delete<ChatHistory::HistoryBuffer>>>,
                        eastl::allocator,
                        eastl::use_first<
                            eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer,
                                                                   std::default_delete<ChatHistory::HistoryBuffer>>>>,
                        eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                        eastl::prime_rehash_policy, false, true, true>::find((int*)&local_80);
                    eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                    bVar4 = eastl::operator!=((eastl*)&local_80, phVar71, extraout_RDX_06);
                    if (bVar4) {
                        lVar28 = local_80.HeapBeginPtr();
                        uVar14 = (undefined4)(in_stack_fffffffffffffae8 >> 32);
                        uVar76 = (undefined4)(in_stack_fffffffffffffaf0 >> 32);
                        uVar74 = (undefined4)(in_stack_fffffffffffffaf8 >> 32);
                        if (local_c8->field_0 != '\0') {
                            uVar20 = logger::default_logger();
                            in_stack_fffffffffffffaf8 = CONCAT44(uVar74, *(undefined4*)(lVar28 + 8));
                            in_stack_fffffffffffffaf0 = CONCAT44(uVar76, *(undefined4*)(lVar28 + 4));
                            in_stack_fffffffffffffae8 = CONCAT44(uVar14, local_128._0_4_);
                            logger::Logger::Log(uVar20, 0, 5,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                "projects/osclient/client_network.cpp",
                                                3979, "Purging unopen SubInterface - layer:%d ifid:%d type:%d",
                                                in_stack_fffffffffffffae8, in_stack_fffffffffffffaf0,
                                                in_stack_fffffffffffffaf8);
                        }
                        CloseSubinterface((Client*)local_b8._48_8_, local_128._0_4_, *(int*)(lVar28 + 4), true);
                    }
                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)local_f0);
                    bVar4 = eastl::operator!=((eastl*)local_f0, (hashtable_iterator_base*)local_110, extraout_RDX_05);
                } while (bVar4);
            }
            puVar33 = (undefined1*)(local_b8._48_8_ + 2506512);
            puVar33->clear();
            while (true) {
                this_00 =
                    (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                               eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                               eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                               eastl::prime_rehash_policy, false, true, true>*)(local_4c0 + 8);
                pAVar48 = (Array<int, eastl::allocator>*)eastl::hashtable<
                    long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                    eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                    eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                    eastl::prime_rehash_policy, false, true, true>::size(this_00);
                if (local_130 <= pAVar48)
                    break;
                uVar15 = this_00->g4();
                uVar11 = this_00->g2();
                local_b8._48_2_ = uVar11;
                uVar18 = this_00->g2();
                local_f0[0].field_0._0_4_ = this_00->g4();
                uVar14 = (undefined4)(in_stack_fffffffffffffae8 >> 32);
                uVar76 = (undefined4)(in_stack_fffffffffffffaf0 >> 32);
                uVar74 = (undefined4)(in_stack_fffffffffffffaf8 >> 32);
                uVar75 = (undefined4)((ulong)in_stack_fffffffffffffb00 >> 32);
                uVar11 = local_b8._48_2_;
                phVar71 = (hashtable_iterator_base*)(local_b8._48_8_ & 65535);
                if (local_c8->field_0 != '\0') {
                    uVar20 = logger::default_logger();
                    in_stack_fffffffffffffb00 = CONCAT44(uVar75, (uint)local_f0[0].field_0);
                    in_stack_fffffffffffffaf8 = CONCAT44(uVar74, uVar18) & 18446744069414649855;
                    in_stack_fffffffffffffaf0 = CONCAT44(uVar76, (uint)(ushort)uVar11);
                    in_stack_fffffffffffffae8 = CONCAT44(uVar14, uVar15);
                    logger::Logger::Log(uVar20, 0, 5,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/client_network.cpp",
                                        3993, "if_setevents resync - com:%d subid1:%d subid2:%d serveractive:%d",
                                        in_stack_fffffffffffffae8, in_stack_fffffffffffffaf0, in_stack_fffffffffffffaf8,
                                        in_stack_fffffffffffffb00);
                }
                if ((ushort)local_b8._48_2_ <= (ushort)uVar18) {
                    do {
                        local_b8._0_8_ = (ulong)uVar15 << 32 | (ulong)phVar71;
                        eastl::hashtable<unsigned long long, eastl::pair<unsigned long long const, int>,
                                         eastl::allocator, eastl::use_first<eastl::pair<unsigned long long const, int>>,
                                         eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>,
                                         eastl::mod_range_hashing, eastl::default_ranged_hash,
                                         eastl::prime_rehash_policy, false, true,
                                         true>::emplace<unsigned long long&, int&>((ulonglong*)&local_80,
                                                                                   (int*)puVar33);
                        phVar71 = phVar71 + 1;
                    } while ((hashtable_iterator_base*)(ulong)((uVar18 & 65535) + 1) != phVar71);
                }
            }
            local_480->~list();
            psVar41 = (shared_ptr*)CONCAT71((int7)((ulong)phVar71 >> 8), 1);
            break;
        case (BADTYPE)106:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            iVar12 = pSVar39->g4();
            psVar47 = (shared_ptr*)rs2lib::IfType::Get(iVar12);
            lVar28 = shared_ptr<rs2lib::IfType>::operator*((shared_ptr<rs2lib::IfType>*)psVar47);
            pvVar70 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(lVar28 + 1936);
            lVar28 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar70);
            if (lVar28 != 0) {
                uVar63 = 0;
                do {
                    puVar23 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)pvVar70, uVar63);
                    *puVar23 = 4294967295;
                    puVar23 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)pvVar70, uVar63);
                    *puVar23 = 0;
                    uVar63 = uVar63 + 1;
                    uVar24 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar70);
                } while (uVar63 < uVar24);
            }
            psVar41 = (shared_ptr*)CONCAT71((int7)((ulong)pvVar70 >> 8), 1);
            ComponentUpdated((Client*)local_b8._48_8_, psVar47);
            break;
        case (BADTYPE)107:
            PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
                (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_480, bVar4);
            uVar20 = logger::default_logger();
            uVar32 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(
                uVar20, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_network.cpp",
                3222, "unimplemented message SITE_SETTINGS. Dumped setting [%s]", uVar32);
            goto LAB_1000ec994;
        case (BADTYPE)108:
            new (local_480) eastl::string();
            new (local_b8) SuperShuffledPacketFactory(pCVar44);
            bVar4 = (bool)local_b8->p2_alt2();
            PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
                (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)&local_80, bVar4);
            eastl::string::operator=((eastl::string*)local_480, (basic_string*)&local_80);
            local_80.~basic_string();
            pSVar39 = (ShuffledPacket2*)local_b8->p2_alt2();
            uVar15 = pSVar39->g1();
            pSVar27 = (ShuffledPacket4*)local_b8->p2_alt2();
            bVar5 = pSVar27->g1();
            (*(Minimenu**)(local_b8._48_8_ + 52344))->UpdatePlayerOpChoice((uint)bVar5, local_480, uVar15 & 255);
        LAB_1000ec994:
            pHVar36 = (HookArg*)local_480;
            goto LAB_1000ef462;
        case (BADTYPE)109:
            uVar15 = pCVar44->g2();
            uVar18 = pCVar44->g1();
            uVar8 = pCVar44->g2();
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            PlaySynth((Client*)local_b8._48_8_, uVar15 & 65535, uVar18 & 255, (uint)uVar8);
            break;
        case (BADTYPE)110:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar26 = (ShuffledPacket3*)local_480->p2_alt2();
            uVar15 = pSVar26->g2();
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            uVar8 = pSVar27->g2();
            local_80._4_4_ = 4294967295;
            if (uVar8 != 65535) {
                local_80._4_4_ = (uint)uVar8;
            }
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            uVar13 = pSVar27->g2();
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            uVar18 = pSVar39->g2();
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            uVar17 = pSVar39->g2();
            pSVar26 = (ShuffledPacket3*)local_480->p2_alt2();
            uVar8 = pSVar26->g2();
            local_80.field_0 = 4294967295;
            if (uVar8 != 65535) {
                local_80.field_0 = (uint)uVar8;
            }
            new (local_b8) eastl::allocator("EASTL vector");
            eastl::vector<int, eastl::allocator>::vector(local_480, &local_80, 2, local_b8);
            PlaySongs((Client*)local_b8._48_8_, (vector*)local_480, uVar18 & 65535, uVar15 & 65535, uVar13 & 65535,
                      uVar17 & 65535);
        LAB_1000ec795:
            local_480->~vector();
            psVar41 = (shared_ptr*)CONCAT71((uint7)(uint3)(uVar13 >> 8), 1);
            break;
        case (BADTYPE)111:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            iVar12 = pSVar27->g4s();
            pSVar26 = (ShuffledPacket3*)local_480->p2_alt2();
            iVar19 = pSVar26->g4();
            psVar47 = (shared_ptr*)rs2lib::IfType::Get(iVar19);
            pIVar30 = (IfType*)shared_ptr<rs2lib::IfType>::operator*((shared_ptr<rs2lib::IfType>*)psVar47);
            PlayerModelUtil::SetPlayerModelObj(pIVar30, iVar12);
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            ComponentUpdated((Client*)local_b8._48_8_, psVar47);
            break;
        case (BADTYPE)112:
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            ZonePacket((Client*)local_b8._48_8_, 8, pCVar44);
            break;
        case (BADTYPE)113:
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            if (*(undefined1*)(local_b8._48_8_ + 52997) != '\0') {
                *(undefined1*)(local_b8._48_8_ + 52996) = 1;
                *(undefined2*)(local_b8._48_8_ + 52998) = 0;
                bVar5 = pCVar44->g1();
                *(uint*)(local_b8._48_8_ + 53016) = (uint)bVar5;
                bVar5 = pCVar44->g1();
                *(uint*)(local_b8._48_8_ + 53020) = (uint)bVar5;
                bVar5 = pCVar44->g1();
                *(uint*)(local_b8._48_8_ + 53036) = (uint)bVar5;
                bVar5 = pCVar44->g1();
                *(uint*)(local_b8._48_8_ + 53040) = (uint)bVar5;
                *(undefined4*)(local_b8._48_8_ + 2508880) = 0;
                *(undefined1*)(local_b8._48_8_ + 2508884) = 0;
            }
            break;
        case (BADTYPE)114:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            iVar12 = pSVar27->g4s();
            pPVar38 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_480->p2_alt2();
            cVar3 = pPVar38->g1();
            psVar47 = (shared_ptr*)rs2lib::IfType::Get(iVar12);
            pIVar30 = (IfType*)shared_ptr<rs2lib::IfType>::operator*((shared_ptr<rs2lib::IfType>*)psVar47);
            PlayerModelUtil::SetPlayerModel(pIVar30, cVar3 == '\x01');
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            ComponentUpdated((Client*)local_b8._48_8_, psVar47);
            break;
        case (BADTYPE)115:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            uVar15 = pSVar39->g1();
            pSVar26 = (ShuffledPacket3*)local_480->p2_alt2();
            uVar18 = pSVar26->g4();
            pPVar38 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_480->p2_alt2();
            uVar17 = pPVar38->g2();
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            uVar8 = pSVar39->g2();
            new (local_480) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            if (*(int*)(local_b8._48_8_ + 51988) == (uint)uVar8) {
                shared_ptr<ClientPlayer>::operator=((shared_ptr<ClientPlayer>*)local_480,
                                                    (shared_ptr*)(local_b8._48_8_ + 52016));
            } else {
                psVar41 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                    (array<shared_ptr<ClientPlayer>, 2048ul>*)(local_b8._48_8_ + 19216), (ulong)uVar8);
                shared_ptr<ClientPlayer>::operator=((shared_ptr<ClientPlayer>*)local_480, psVar41);
            }
            bVar4 = operator!=((shared_ptr*)local_480, (_func_decltype_nullptr*)0);
            if (bVar4) {
                pCVar50 = (ClientEntity*)shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)local_480);
                pCVar50->AddSpotAnim(uVar15 & 255, uVar17 & 65535, (int)uVar18 >> 16, uVar18 & 65535,
                                     *(int*)(local_b8._48_8_ + 8488));
            }
            local_480->~shared_ptr();
            psVar41 = (shared_ptr*)CONCAT71((uint7)(uint3)(uVar17 >> 8), 1);
            break;
        case (BADTYPE)116:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar39 = (ShuffledPacket2*)local_480->p2_alt2();
            uVar8 = pSVar39->g2();
            uVar15 = 4294967295;
            if (uVar8 != 65535) {
                uVar15 = (uint)uVar8;
            }
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            uVar18 = pSVar27->g1();
            pCVar44 = (Client*)(local_b8._48_8_ + 52016);
            pCVar40 = (ClientPlayer*)shared_ptr<ClientPlayer>::operator*((shared_ptr<ClientPlayer>*)pCVar44);
            TriggerPlayerAnim(pCVar44, pCVar40, uVar15, uVar18 & 255);
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            if (*(char*)pCVar55 != '\0') {
                uVar20 = logger::default_logger();
                logger::Logger::Log(uVar20, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    4282, "Triggered anim_specific: %d delay:%d", CONCAT44(uVar74, uVar15),
                                    CONCAT44(uVar75, uVar18) & 18446744069414584575);
            }
            break;
        case (BADTYPE)117:
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            ZonePacket((Client*)local_b8._48_8_, 9, pCVar44);
            break;
        case (BADTYPE)118:
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            UnpackHiscoresPacket((Client*)local_b8._48_8_, (SuperPacket*)pCVar44);
            break;
        case (BADTYPE)119:
            if (*(char*)pCVar55 != '\0') {
                uVar20 = logger::default_logger();
                logger::Logger::Log(uVar20, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    1857, "Resetting all animations");
            }
            puVar33 = (undefined1*)(local_b8._48_8_ + 19216);
            uVar63 = 0;
            do {
                psVar41 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                    (array<shared_ptr<ClientPlayer>, 2048ul>*)puVar33, uVar63);
                bVar4 = operator!=(psVar41, (_func_decltype_nullptr*)0);
                if (bVar4) {
                    lVar28 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)psVar41);
                    *(undefined4*)(lVar28 + 372) = 4294967295;
                }
                uVar63 = uVar63 + 1;
            } while (uVar63 != 2048);
            local_b8._48_8_ = local_b8._48_8_ + 55272;
            uVar63 = 0;
            do {
                psVar47 = (shared_ptr*)std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                    (array<shared_ptr<ClientNpc>, 65536ul>*)local_b8._48_8_, uVar63);
                bVar4 = operator!=(psVar47, (_func_decltype_nullptr*)0);
                if (bVar4) {
                    lVar28 = shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)psVar47);
                    *(undefined4*)(lVar28 + 372) = 4294967295;
                }
                uVar63 = uVar63 + 1;
                psVar41 = (shared_ptr*)CONCAT71((int7)((ulong)psVar41 >> 8), 1);
            } while (uVar63 != 65536);
            break;
        case (BADTYPE)120:
            new (local_480) SuperShuffledPacketFactory(pCVar44);
            pSVar26 = (ShuffledPacket3*)local_480->p2_alt2();
            local_b8._0_4_ = pSVar26->g4();
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            uVar15 = pSVar27->g1();
            pSVar27 = (ShuffledPacket4*)local_480->p2_alt2();
            uVar8 = pSVar27->g2();
            uVar18 = (uint)uVar8;
            if (*(char*)pCVar55 != '\0') {
                uVar20 = logger::default_logger();
                logger::Logger::Log(uVar20, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    3874, "if_opensub - layer:%d ifid:%d interfacetype:%d",
                                    CONCAT44(uVar74, local_b8._0_4_), CONCAT44(uVar75, uVar18),
                                    CONCAT44(uVar77, uVar15) & 18446744069414584575);
            }
            eastl::hashtable<
                int,
                eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer,
                                                       std::default_delete<ChatHistory::HistoryBuffer>>>,
                eastl::allocator,
                eastl::use_first<
                    eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer,
                                                           std::default_delete<ChatHistory::HistoryBuffer>>>>,
                eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                eastl::prime_rehash_policy, false, true, true>::find((int*)local_480);
            eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            bVar4 = eastl::operator!=((eastl*)local_480, (hashtable_iterator_base*)&local_80, extraout_RDX_00);
            if (bVar4) {
                lVar28 = local_480->HeapBeginPtr();
                CloseSubinterface((Client*)local_b8._48_8_, local_b8._0_4_, *(uint*)(lVar28 + 4),
                                  *(uint*)(lVar28 + 4) != uVar18);
            }
            OpenSubinterface((Client*)local_b8._48_8_, local_b8._0_4_, uVar18, uVar15 & 255);
            pHVar36 = (HookArg*)(ulong)uVar8;
        switchD_1000ea3f5_default:
            psVar41 = (shared_ptr*)CONCAT71((int7)((ulong)pHVar36 >> 8), 1);
            break;
        case (BADTYPE)121:
            psVar41 = (shared_ptr*)CONCAT71(uVar72, 1);
            RebuildPacket((Client*)local_b8._48_8_, true, (SuperPacket*)pCVar44);
        }
    LAB_1000e84b2:
        local_4c0->~ServerMessage();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (ulong)psVar41 & 4294967295;
    }

    // 0x100112a10, 384 bytes, placed by __FILE__ string
    // Client::Logout()
    void Client::Logout() {
        undefined1* this_00;
        char cVar1;
        int iVar2;
        ServerConnection* pSVar4;
        world* this_01;
        CollisionMap* this_02;
        LoginManager* this_03;
        long* plVar5;
        ulong uVar6;
        ServerMessage local_58[3];

        field_55192 = CurrentTimeMillis();
        this_00 = &field_19120;
        pSVar4 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)this_00);
        pSVar4->Close();
        new (local_58) shared::ClientMessage();
        while (true) {
            pSVar4 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)this_00);
            iVar2 = pSVar4->GetConnectionState();
            if (iVar2 != 3)
                break;
            this_thread::Sleep(10);
            do {
                pSVar4 = (ServerConnection*)
                             std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                 (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)this_00);
                cVar1 = pSVar4->GetNextServerMessage(local_58);
            } while (cVar1 != '\0');
        }
        if (iVar2 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_gameCon->GetConnectionState() == ConnectionState::DISCONNECTED",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_network.cpp",
                899, (char*)0);
        }
        SaveAndClosePerAccountData(this);
        this_01 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
            (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184);
        this_01->ResetMap();
        uVar6 = 0;
        do {
            this_02 = (CollisionMap*)eastl::vector<
                movement::CollisionMap, eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[](
                (vector<movement::CollisionMap,
                        eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)&field_6814744,
                uVar6);
            this_02->Reset();
            uVar6 = uVar6 + 1;
        } while (uVar6 != 4);
        m_entityOverlays->DestroyAllStaticOverlays();
        field_19072->ClearFocusedComponent();
        midi2::MidiManager::Stop(0, 0);
        midi2::MidiManager::ResetPreviousSongs();
        field_2508680 = 0;
        bgsound::Reset();
        SetMainState(this, 10);
        this_03 = (LoginManager*)GetLoginManager(this);
        plVar5 = (long*)this_03->GetAuthWrapper();
        if (plVar5 != (long*)0) {
            (**(code**)(*plVar5 + 416))(plVar5);
        }
        field_8492 = 0;
        local_58->~ServerMessage();
    }

    // 0x100112b90, 48 bytes, placed by class name and neighbouring functions
    // Client::LogoutWithReason(shared::PlayerFacingLogoutReason::ID)
    void Client::LogoutWithReason(int param_2) {
        Logout(this);
        if (param_2 == 1) {
            TitleScreen::ShowServerLogoffScreen();
        } else if (param_2 == 2) {
            TitleScreen::ShowServerRebootedScreen();
        }
    }

    // 0x100112c60, 176 bytes, placed by class name and neighbouring functions
    // Client::HandleUpdateFriendChatChannelFullServerProt(core::SuperPacket&, unsigned int)
    ulong Client::HandleUpdateFriendChatChannelFullServerProt(SuperPacket* param_1, uint param_2) {
        undefined1* this_00;
        uint uVar2;
        long lVar3;
        FriendChatChannel* this_01;
        ulong uVar4;
        unique_ptr local_40[8];
        Client* local_38;

        lVar3 = param_1->GetTextureAtlas();
        this_00 = &field_52544;
        if (lVar3 == 0) {
            std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::operator=(
                (unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>*)this_00,
                (_func_decltype_nullptr*)param_1);
            uVar4 = CONCAT71((int7)((ulong)this_00 >> 8), 1);
        } else {
            if (std::operator==((unique_ptr*)this_00, (_func_decltype_nullptr*)param_1)) {
                local_38 = this;
                std::make_unique<social::FriendChatChannel, rs2lib::social::NameSpace&, Client*>(
                    local_40, (Client**)&field_54172);
                std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::operator=(
                    (unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>*)this_00,
                    local_40);
                local_40->~unique_ptr();
            }
            this_01 =
                (FriendChatChannel*)std::
                    unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::operator->((
                        unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>*)this_00);
            uVar2 = this_01->ProcessFullUpdate(param_1, param_2);
            uVar4 = (ulong)uVar2;
        }
        NotifyFriendChatUpdate(this);
        return uVar4 & 4294967295;
    }

    // 0x100112fd0, 80 bytes, placed by class name and neighbouring functions
    // Client::HandleUpdateFriendChatChannelSingleUserServerProt(core::SuperPacket&)
    undefined1 Client::HandleUpdateFriendChatChannelSingleUserServerProt(SuperPacket* param_1) {
        FriendChatChannel* this_00;

        if (std::operator!=((unique_ptr*)&field_52544, (_func_decltype_nullptr*)param_1)) {
            this_00 =
                (FriendChatChannel*)std::
                    unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::operator->(
                        (unique_ptr<social::FriendChatChannel,
                                    std::default_delete<social::FriendChatChannel>>*)&field_52544);
            this_00->ProcessSingleUserUpdate(param_1);
        }
        NotifyFriendChatUpdate(this);
        return 1;
    }

    // 0x1001131b0, 192 bytes, placed by __FILE__ string
    // Client::UnpackHiscoresPacket(core::SuperPacket&)
    void Client::UnpackHiscoresPacket(SuperPacket* param_1) {
        HiscoresManager* this_00;
        char* pcVar2;
        ErrorCapture local_370[17];

        ErrorCapture::ErrorCapture(local_370, true);
        this_00 = (HiscoresManager*)std::unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>::operator->(
            (unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>*)&field_52776);
        this_00->UnpackHiscoresPacket(param_1, local_370);
        if (local_370->IsRaised() != '\0') {
            local_370->second();
            pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_network.cpp",
                1100, pcVar2);
        }
        local_370->~LanguageMessage();
    }

    // 0x100113270, 176 bytes, placed by class name and neighbouring functions
    // Client::OnMidiEnd(int)
    void Client::OnMidiEnd(int param_1) {
        undefined1* this_00;
        ServerConnection* pSVar1;
        undefined8 uVar2;
        bool bVar3;
        int iVar4;
        undefined4 in_register_00000034;
        undefined1 local_60[64];

        this_00 = &field_19120;
        bVar3 = std::operator!=((unique_ptr*)this_00, (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_1));
        if ((bVar3) && (-1 < param_1)) {
            iVar4 = GetFinalMidiVolume(this);
            if ((0 < iVar4) && (field_2508680 == '\0')) {
                pSVar1 = (ServerConnection*)
                             std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                 (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)this_00);
                uVar2 = pSVar1->GetOutgoingEncryption();
                local_60->MakeClientMessage(92, uVar2);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
                    (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_60 + 8), param_1);
                pSVar1 = (ServerConnection*)
                             std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                 (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)this_00);
                pSVar1->SendClientMessage(local_60);
                local_60->~ClientMessage();
            }
        }
    }

    // 0x100113320, 192 bytes, placed by __FILE__ string
    // Client::RequestClanChannelFull(int)
    void Client::RequestClanChannelFull(int param_1) {
        int iVar1;
        undefined8 uVar2;
        ServerConnection* pSVar3;
        undefined1 local_58[64];

        iVar1 = GetServerMajorVersion(this);
        if (215 < iVar1) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 8,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_network.cpp",
                1117, "Request full clan channel update");
            pSVar3 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            uVar2 = pSVar3->GetOutgoingEncryption();
            local_58->MakeClientMessage(96, uVar2);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_58 + 8), param_1);
            pSVar3 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            pSVar3->SendClientMessage(local_58);
            local_58->~ClientMessage();
        }
    }

    // 0x1001133e0, 192 bytes, placed by __FILE__ string
    // Client::RequestClanSettingsFull(int)
    void Client::RequestClanSettingsFull(int param_1) {
        int iVar1;
        undefined8 uVar2;
        ServerConnection* pSVar3;
        undefined1 local_58[64];

        iVar1 = GetServerMajorVersion(this);
        if (215 < iVar1) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 8,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_network.cpp",
                1128, "Request full clan settings update");
            pSVar3 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            uVar2 = pSVar3->GetOutgoingEncryption();
            local_58->MakeClientMessage(97, uVar2);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_58 + 8), param_1);
            pSVar3 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            pSVar3->SendClientMessage(local_58);
            local_58->~ClientMessage();
        }
    }

    // 0x100114680, 48 bytes, placed by class name and neighbouring functions
    // Client::WrapYawAngle(int) const
    int Client::WrapYawAngle(int param_1) {
        uint uVar1;
        int iVar2;
        uint uVar3;

        uVar1 = param_1 - field_53104;
        uVar3 = -uVar1;
        if ((int)uVar3 < 0) {
            uVar3 = uVar1;
        }
        iVar2 = 0;
        if (1024 < uVar3) {
            iVar2 = (uint)(param_1 < (int)field_53104) * 4096 + -2048;
        }
        return iVar2 + param_1;
    }

    // 0x100114a40, 9856 bytes, placed by __FILE__ string
    // Client::ZonePacket(shared::ZoneProt::ID, core::SuperPacket&)
    void Client::ZonePacket(undefined4 param_2, SuperPacket* param_3) {
        int* piVar1;
        uint uVar2;
        ushort uVar3;
        char cVar4;
        byte bVar5;
        char cVar6;
        byte bVar7;
        undefined1 uVar8;
        bool bVar9;
        ushort uVar10;
        undefined2 uVar11;
        int iVar12;
        undefined4 uVar13;
        undefined4 uVar14;
        undefined4 uVar15;
        undefined4* puVar16;
        int* piVar17;
        uint* puVar18;
        shared_ptr<sound::JagFX>* this_00;
        ShuffledPacket3* pSVar19;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* pPVar20;
        ShuffledPacket4* pSVar21;
        ShuffledPacket2* pSVar22;
        Client* pCVar23;
        ClientProj* pCVar24;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar25;
        AnimationWrapper* pAVar26;
        undefined8 uVar27;
        weak_ptr* pwVar28;
        shared_ptr* psVar29;
        byte bVar30;
        char cVar31;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        hashtable_iterator_base* extraout_RDX_03;
        undefined1* puVar32;
        char cVar33;
        Client* pCVar34;
        int iVar35;
        uint uVar36;
        int iVar37;
        uint uVar38;
        int iVar39;
        long lVar40;
        long lVar41;
        undefined8 in_stack_fffffffffffffe68;
        undefined4 uVar44;
        undefined8 uVar42;
        ulong uVar43;
        undefined8 in_stack_fffffffffffffe70;
        undefined4 uVar47;
        undefined8 uVar45;
        ulong uVar46;
        undefined8 in_stack_fffffffffffffe78;
        undefined4 uVar49;
        undefined8 uVar48;
        ulong in_stack_fffffffffffffe80;
        undefined4 uVar50;
        undefined8 in_stack_fffffffffffffe88;
        undefined8 uVar51;
        undefined8 in_stack_fffffffffffffe90;
        undefined8 in_stack_fffffffffffffe98;
        weak_ptr<dash3d::Decor> local_128[16];
        list<console::Line, eastl::allocator> local_118[8];
        list<console::Line, eastl::allocator> local_110[8];
        weak_ptr<dash3d::Decor> local_108[16];
        undefined8 local_f8;
        weak_ptr<dash3d::Decor> local_f0[16];
        long local_e0;
        long local_d8;
        int local_cc;
        int local_c8;
        int local_c4;
        ulong local_c0;
        ushort local_b8;
        ushort local_b6;
        int local_b4;
        undefined4 local_b0;
        char local_ac;
        char local_ab;
        char local_aa;
        char local_a9;
        undefined8 local_a8;
        CoordGrid local_a0;
        uint local_90[2];
        ulong local_88;
        hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                  eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                  eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* local_80;
        uint local_78;
        uint local_74;
        CoordGrid local_70;
        uint local_5c;
        uint local_58;
        uint local_54;
        Client* local_50;
        SuperShuffledPacketFactory local_48;
        uint local_38;
        uint local_34;

        uVar44 = (undefined4)((ulong)in_stack_fffffffffffffe68 >> 32);
        uVar47 = (undefined4)((ulong)in_stack_fffffffffffffe70 >> 32);
        uVar49 = (undefined4)((ulong)in_stack_fffffffffffffe78 >> 32);
        uVar50 = (undefined4)(in_stack_fffffffffffffe80 >> 32);
        uVar13 = (undefined4)((ulong)in_stack_fffffffffffffe88 >> 32);
        uVar15 = (undefined4)((ulong)in_stack_fffffffffffffe90 >> 32);
        uVar14 = (undefined4)((ulong)in_stack_fffffffffffffe98 >> 32);
        local_50 = this;
        switch (param_2) {
        case 0:
            new (&local_48) SuperShuffledPacketFactory(param_3);
            pSVar22 = (ShuffledPacket2*)local_48.p2_alt2();
            bVar5 = pSVar22->g1();
            pCVar34 = local_50;
            iVar35 = (bVar5 >> 4 & 7) + *(int*)&local_50->field_1115284;
            iVar37 = (bVar5 & 7) + *(int*)&local_50->field_1115288;
            pSVar21 = (ShuffledPacket4*)local_48.p2_alt2();
            bVar5 = pSVar21->g1();
            uVar36 = (uint)(bVar5 >> 4);
            pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_48.p2_alt2();
            uVar8 = pPVar20->g1();
            local_74 = CONCAT31(local_74._1_3_, uVar8);
            pSVar21 = (ShuffledPacket4*)local_48.p2_alt2();
            uVar10 = pSVar21->g2();
            local_80 =
                (hashtable<
                    eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                    eastl::allocator,
                    eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                    eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)CONCAT44(local_80._4_4_,
                                                                                                         (uint)uVar10);
            if (pCVar34->field_54760 != '\0') {
                local_88 = logger::default_logger();
                puVar32 = pCVar34->field_52016;
                lVar40 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)puVar32);
                puVar16 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)(lVar40 + 444), 0);
                local_a8 = CONCAT44(local_a8._4_4_, *puVar16);
                lVar40 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)puVar32);
                puVar16 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)(lVar40 + 484), 0);
                logger::Logger::Log(local_88, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    4999, "Received sound_area x:%i z:%i range:%i synth:%i loops:%i rx:%i rz:%i",
                                    CONCAT44(uVar44, iVar35), CONCAT44(uVar47, iVar37), CONCAT44(uVar49, uVar36),
                                    CONCAT44(uVar50, (int)local_80),
                                    CONCAT44(uVar13, (uint)bVar5) & 18446744069414584327,
                                    CONCAT44(uVar15, (int)local_a8), CONCAT44(uVar14, *puVar16));
            }
            local_a8 = CONCAT44(local_a8._4_4_, (uint)bVar5) & 18446744069414584327;
            if (((iVar35 < 104) && (-1 < iVar35)) && ((-1 < iVar37 && (iVar37 < 104)))) {
                iVar12 = uVar36 + 1;
                puVar32 = local_50->field_52016;
                local_88 = (ulong)uVar36;
                lVar40 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)puVar32);
                piVar17 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)(lVar40 + 444), 0);
                if (iVar35 - iVar12 <= *piVar17) {
                    lVar40 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)puVar32);
                    piVar17 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)(lVar40 + 444), 0);
                    if (*piVar17 <= iVar12 + iVar35) {
                        lVar40 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)puVar32);
                        piVar17 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)(lVar40 + 484), 0);
                        if (iVar37 - iVar12 <= *piVar17) {
                            lVar40 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)puVar32);
                            piVar17 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)(lVar40 + 484), 0);
                            if ((((*piVar17 <= iVar12 + iVar37) &&
                                  (iVar12 = GetFinalAmbientVolume(local_50), pCVar34 = local_50, uVar36 = local_74,
                                   iVar12 != 0)) &&
                                 ((int)local_a8 != 0)) &&
                                ((long)local_50->field_2508752 < 50)) {
                                puVar16 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)&local_50->field_2508760,
                                    (long)local_50->field_2508752);
                                *puVar16 = (int)local_80;
                                puVar16 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)&pCVar34->field_2508784,
                                    (long)pCVar34->field_2508752);
                                *puVar16 = (int)local_a8;
                                puVar18 = (uint*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)&pCVar34->field_2508808,
                                    (long)pCVar34->field_2508752);
                                *puVar18 = uVar36 & 255;
                                new (&local_48) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                                this_00 = (shared_ptr<sound::JagFX>*)
                                    Array<shared_ptr<sound::JagFX>, eastl::allocator>::operator[](
                                        (Array<shared_ptr<sound::JagFX>, eastl::allocator>*)&pCVar34->field_2508856,
                                        (long)pCVar34->field_2508752);
                                shared_ptr<sound::JagFX>::operator=(this_00, (shared_ptr*)&local_48);
                                local_48.~shared_ptr();
                                iVar35 = iVar37 * 256 + iVar35 * 65536 + (uint)local_88;
                                piVar17 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)&pCVar34->field_2508832,
                                    (long)pCVar34->field_2508752);
                                *piVar17 = iVar35;
                                pCVar34->field_2508752 = pCVar34->field_2508752 + 1;
                            }
                        }
                    }
                }
            }
            break;
        case 1:
            new (&local_48) SuperShuffledPacketFactory(param_3);
            pSVar22 = (ShuffledPacket2*)local_48.p2_alt2();
            uVar10 = pSVar22->g2();
            local_54 = (uint)uVar10;
            pSVar22 = (ShuffledPacket2*)local_48.p2_alt2();
            bVar5 = pSVar22->g1();
            pCVar34 = local_50;
            local_70.field_0 = (bVar5 >> 4 & 7) + *(int*)&local_50->field_1115284;
            local_a0.field_0 = (bVar5 & 7) + *(int*)&local_50->field_1115288;
            pSVar21 = (ShuffledPacket4*)local_48.p2_alt2();
            cVar4 = pSVar21->g1s();
            pSVar19 = (ShuffledPacket3*)local_48.p2_alt2();
            local_90[0] = pSVar19->g3s();
            pSVar22 = (ShuffledPacket2*)local_48.p2_alt2();
            bVar5 = pSVar22->g1();
            local_5c = (uint)bVar5;
            pSVar21 = (ShuffledPacket4*)local_48.p2_alt2();
            uVar10 = pSVar21->g2();
            local_88 = CONCAT44(local_88._4_4_, (uint)uVar10);
            pSVar22 = (ShuffledPacket2*)local_48.p2_alt2();
            cVar6 = pSVar22->g1s();
            pSVar19 = (ShuffledPacket3*)local_48.p2_alt2();
            bVar5 = pSVar19->g1();
            local_58 = (uint)bVar5 << 2;
            pSVar22 = (ShuffledPacket2*)local_48.p2_alt2();
            bVar5 = pSVar22->g1();
            local_34 = (uint)bVar5;
            pSVar22 = (ShuffledPacket2*)local_48.p2_alt2();
            bVar5 = pSVar22->g1();
            pCVar23 = (Client*)local_48.p2_alt2();
            uVar10 = pCVar23->g2();
            local_80 =
                (hashtable<
                    eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                    eastl::allocator,
                    eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                    eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)(ulong)uVar10;
            iVar35 = (int)cVar6 + local_70.field_0;
            iVar37 = (int)cVar4 + local_a0.field_0;
            if (pCVar34->field_54760 != '\0') {
                pCVar23 = (Client*)logger::default_logger();
                logger::Logger::Log(pCVar23, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    4656,
                                    "Received projanim x:%i z:%i x2:%i z2:%i targetEntity:%i spotanim:%i h1:%i h2:%i "
                                    "t1:%i t2:%i angle:%i startpos:%i",
                                    CONCAT44(uVar44, local_70.field_0), CONCAT44(uVar47, local_a0.field_0),
                                    CONCAT44(uVar49, iVar35), CONCAT44(uVar50, iVar37), CONCAT44(uVar13, local_90[0]),
                                    CONCAT44(uVar15, local_54), CONCAT44(uVar14, (uint)bVar5 * 4), local_58,
                                    (int)local_80, (uint)local_88, local_5c, local_34);
            }
            pCVar34 = local_50;
            if (103 < (int)local_70.field_0) {
                return;
            }
            if ((int)local_70.field_0 < 0) {
                return;
            }
            if ((int)local_a0.field_0 < 0) {
                return;
            }
            if (103 < (int)local_a0.field_0) {
                return;
            }
            if (iVar35 < 0) {
                return;
            }
            if (iVar37 < 0) {
                return;
            }
            if (103 < iVar35) {
                return;
            }
            if (103 < iVar37) {
                return;
            }
            if (local_54 == 65535) {
                return;
            }
            local_70.field_0 = local_70.field_0 << 7 | 64;
            local_a0.field_0 = local_a0.field_0 << 7 | 64;
            piVar17 = &local_50->m_playerLevel;
            iVar12 = GetAvH(pCVar23, local_70.field_0, local_a0.field_0, local_50->m_playerLevel);
            local_38 = iVar12 + (uint)bVar5 * -4;
            local_78 = (int)local_80 + pCVar34->field_8488;
            local_b4 = pCVar34->field_8488 + (uint)local_88;
            make_shared<ClientProj, int&, int&, int&, int&, int, int, int, int&, int&, int&, int&>(
                (jag*)&local_48, (int*)&local_54, piVar17, (int*)&local_70, (int*)&local_a0, (int*)&local_38,
                (int*)&local_78, &local_b4, (int*)&local_5c, (int*)&local_34, (int*)local_90, (int*)&local_58);
            pCVar23 = (Client*)&local_48;
            pCVar24 = (ClientProj*)shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)pCVar23);
            uVar36 = iVar35 * 128 | 64;
            uVar38 = iVar37 * 128 | 64;
            iVar35 = GetAvH(pCVar23, uVar36, uVar38, *piVar17);
            pCVar24->SetTarget(uVar36, uVar38, iVar35 - local_58, (int)local_80 + pCVar34->field_8488);
            (&pCVar34->field_7164584, (shared_ptr*)&local_48)->push_back();
            goto LAB_1001154e6;
        case 2:
            new (&local_48) SuperShuffledPacketFactory(param_3);
            pSVar19 = (ShuffledPacket3*)local_48.p2_alt2();
            bVar5 = pSVar19->g1();
            bVar7 = bVar5 >> 2;
            local_a8 = CONCAT71(local_a8._1_7_, bVar5);
            local_54 = (uint)(bVar5 & 3);
            local_88 = CONCAT44(local_88._4_4_, (uint)bVar7);
            uVar36 = constants::LocShape::ToLayer();
            pSVar22 = (ShuffledPacket2*)local_48.p2_alt2();
            uVar10 = pSVar22->g2();
            local_58 = (uint)uVar10;
            pSVar19 = (ShuffledPacket3*)local_48.p2_alt2();
            bVar5 = pSVar19->g1();
            local_a0.field_0 = (bVar5 >> 4 & 7) + *(int*)&local_50->field_1115284;
            local_90[0] = (bVar5 & 7) + *(int*)&local_50->field_1115288;
            local_80 =
                (hashtable<
                    eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                    eastl::allocator,
                    eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                    eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)((ulong)uVar36 & 255);
            if (local_50->field_54760 != '\0') {
                uVar27 = logger::default_logger();
                logger::Logger::Log(uVar27, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    4428, "Received loc_anim x:%i z:%i seq:%i layer:%u",
                                    CONCAT44(uVar44, local_a0.field_0), CONCAT44(uVar47, local_90[0]),
                                    CONCAT44(uVar49, local_58), CONCAT44(uVar50, (int)local_80));
            }
            pCVar34 = local_50;
            if (102 < (int)local_a0.field_0) {
                return;
            }
            if ((int)local_a0.field_0 < 0) {
                return;
            }
            if ((int)local_90[0] < 0) {
                return;
            }
            if (102 < (int)local_90[0]) {
                return;
            }
            switch (local_80) {
            case (hashtable<
                  eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                  eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                  eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)0:
                iVar35 = std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                    (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&local_50->field_19184);
                dash3d::world::GetWall((int)&local_48, iVar35, pCVar34->m_playerLevel);
                bVar9 = operator!=((shared_ptr*)&local_48, (_func_decltype_nullptr*)0);
                if (bVar9) {
                    lVar40 = shared_ptr<dash3d::Wall>::operator->((shared_ptr<dash3d::Wall>*)&local_48);
                    local_5c = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(longlong*)(lVar40 + 56));
                    piVar17 = &local_50->m_playerLevel;
                    if (bVar7 == 2) {
                        local_34 = 2;
                        local_38 = local_54 + 4;
                        local_78 = local_78 & 4294967040;
                        lVar40 = shared_ptr<dash3d::Wall>::operator->((shared_ptr<dash3d::Wall>*)&local_48);
                        piVar1 = &local_50->field_8488;
                        make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool,
                                    shared_ptr<dash3d::ModelSource>&, int&>(
                            (jag*)&local_70, (int*)&local_5c, (int*)&local_34, (int*)&local_38, piVar17,
                            (int*)&local_a0, (int*)local_90, (int*)&local_58, (bool*)&local_78,
                            (shared_ptr*)(lVar40 + 24), piVar1);
                        lVar40 = shared_ptr<dash3d::Wall>::operator->((shared_ptr<dash3d::Wall>*)&local_48);
                        shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)(lVar40 + 24),
                                                                   (shared_ptr*)&local_70);
                        local_70.~shared_ptr();
                        local_34 = 2;
                        local_38 = local_54 + 1 & 3;
                        local_78 = local_78 & 4294967040;
                        lVar40 = shared_ptr<dash3d::Wall>::operator->((shared_ptr<dash3d::Wall>*)&local_48);
                        make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool,
                                    shared_ptr<dash3d::ModelSource>&, int&>(
                            (jag*)&local_70, (int*)&local_5c, (int*)&local_34, (int*)&local_38, piVar17,
                            (int*)&local_a0, (int*)local_90, (int*)&local_58, (bool*)&local_78,
                            (shared_ptr*)(lVar40 + 40), piVar1);
                        lVar40 = shared_ptr<dash3d::Wall>::operator->((shared_ptr<dash3d::Wall>*)&local_48);
                        shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)(lVar40 + 40),
                                                                   (shared_ptr*)&local_70);
                    } else {
                        local_34 = (uint)local_88;
                        local_38 = local_38 & 4294967040;
                        lVar40 = shared_ptr<dash3d::Wall>::operator->((shared_ptr<dash3d::Wall>*)&local_48);
                        make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool,
                                    shared_ptr<dash3d::ModelSource>&, int&>(
                            (jag*)&local_70, (int*)&local_5c, (int*)&local_34, (int*)&local_54, piVar17,
                            (int*)&local_a0, (int*)local_90, (int*)&local_58, (bool*)&local_38,
                            (shared_ptr*)(lVar40 + 24), &local_50->field_8488);
                        lVar40 = shared_ptr<dash3d::Wall>::operator->((shared_ptr<dash3d::Wall>*)&local_48);
                        shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)(lVar40 + 24),
                                                                   (shared_ptr*)&local_70);
                    }
                    local_70.~shared_ptr();
                    local_48.~shared_ptr();
                    if (bVar9) {
                        return;
                    }
                } else {
                    local_48.~shared_ptr();
                }
                break;
            case (hashtable<
                  eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                  eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                  eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)1:
                iVar35 = std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                    (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&local_50->field_19184);
                dash3d::world::GetDecor((int)&local_48, iVar35, pCVar34->m_playerLevel);
                bVar9 = operator!=((shared_ptr*)&local_48, (_func_decltype_nullptr*)0);
                if (bVar9) {
                    lVar40 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)&local_48);
                    local_5c = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(longlong*)(lVar40 + 64));
                    piVar17 = &local_50->m_playerLevel;
                    if (((byte)local_a8 & 248) == 16) {
                        local_34 = 4;
                        local_38 = local_38 & 4294967040;
                        lVar40 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)&local_48);
                        make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool,
                                    shared_ptr<dash3d::ModelSource>&, int&>(
                            (jag*)&local_70, (int*)&local_5c, (int*)&local_34, (int*)&local_54, piVar17,
                            (int*)&local_a0, (int*)local_90, (int*)&local_58, (bool*)&local_38,
                            (shared_ptr*)(lVar40 + 32), &local_50->field_8488);
                        lVar40 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)&local_48);
                        shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)(lVar40 + 32),
                                                                   (shared_ptr*)&local_70);
                    LAB_100116e8f:
                        local_70.~shared_ptr();
                    } else {
                        if (bVar7 == 8) {
                            local_34 = 4;
                            local_38 = local_54 + 4;
                            local_78 = (uint)local_78._1_3_ << 8;
                            lVar40 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)&local_48);
                            piVar1 = &local_50->field_8488;
                            make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool,
                                        shared_ptr<dash3d::ModelSource>&, int&>(
                                (jag*)&local_70, (int*)&local_5c, (int*)&local_34, (int*)&local_38, piVar17,
                                (int*)&local_a0, (int*)local_90, (int*)&local_58, (bool*)&local_78,
                                (shared_ptr*)(lVar40 + 32), piVar1);
                            lVar40 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)&local_48);
                            shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)(lVar40 + 32),
                                                                       (shared_ptr*)&local_70);
                            local_70.~shared_ptr();
                            local_34 = 4;
                            local_38 = local_54 + 2 & 3 | 4;
                            local_78 = local_78 & 4294967040;
                            lVar40 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)&local_48);
                            make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool,
                                        shared_ptr<dash3d::ModelSource>&, int&>(
                                (jag*)&local_70, (int*)&local_5c, (int*)&local_34, (int*)&local_38, piVar17,
                                (int*)&local_a0, (int*)local_90, (int*)&local_58, (bool*)&local_78,
                                (shared_ptr*)(lVar40 + 48), piVar1);
                            lVar40 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)&local_48);
                            shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)(lVar40 + 48),
                                                                       (shared_ptr*)&local_70);
                            goto LAB_100116e8f;
                        }
                        if (bVar7 == 7) {
                            local_34 = 4;
                            local_38 = local_54 + 2 & 3 | 4;
                            local_78 = (uint)local_78._1_3_ << 8;
                            lVar40 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)&local_48);
                            make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool,
                                        shared_ptr<dash3d::ModelSource>&, int&>(
                                (jag*)&local_70, (int*)&local_5c, (int*)&local_34, (int*)&local_38, piVar17,
                                (int*)&local_a0, (int*)local_90, (int*)&local_58, (bool*)&local_78,
                                (shared_ptr*)(lVar40 + 32), &local_50->field_8488);
                            lVar40 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)&local_48);
                            shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)(lVar40 + 32),
                                                                       (shared_ptr*)&local_70);
                            goto LAB_100116e8f;
                        }
                        if (bVar7 == 6) {
                            local_34 = 4;
                            local_38 = local_54 + 4;
                            local_78 = local_78 & 4294967040;
                            lVar40 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)&local_48);
                            make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool,
                                        shared_ptr<dash3d::ModelSource>&, int&>(
                                (jag*)&local_70, (int*)&local_5c, (int*)&local_34, (int*)&local_38, piVar17,
                                (int*)&local_a0, (int*)local_90, (int*)&local_58, (bool*)&local_78,
                                (shared_ptr*)(lVar40 + 32), &local_50->field_8488);
                            lVar40 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)&local_48);
                            shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)(lVar40 + 32),
                                                                       (shared_ptr*)&local_70);
                            goto LAB_100116e8f;
                        }
                    }
                    local_48.~shared_ptr();
                    if (bVar9) {
                        return;
                    }
                } else {
                    local_48.~shared_ptr();
                }
                break;
            case (hashtable<
                  eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                  eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                  eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)2:
                iVar35 = std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                    (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&local_50->field_19184);
                dash3d::world::GetScene((int)&local_48, iVar35, pCVar34->m_playerLevel);
                uVar36 = 10;
                if ((char)local_88 != '\v') {
                    uVar36 = (uint)local_88;
                }
                bVar9 = operator!=((shared_ptr*)&local_48, (_func_decltype_nullptr*)0);
                if (bVar9) {
                    lVar40 = shared_ptr<dash3d::Sprite>::operator->((shared_ptr<dash3d::Sprite>*)&local_48);
                    local_5c = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(longlong*)(lVar40 + 80));
                    local_34 = uVar36 & 255;
                    local_38 = local_38 & 4294967040;
                    lVar40 = shared_ptr<dash3d::Sprite>::operator->((shared_ptr<dash3d::Sprite>*)&local_48);
                    make_shared<ClientLocAnim, int, int, int&, int&, int&, int&, int&, bool,
                                shared_ptr<dash3d::ModelSource>&, int&>(
                        (jag*)&local_70, (int*)&local_5c, (int*)&local_34, (int*)&local_54, &local_50->m_playerLevel,
                        (int*)&local_a0, (int*)local_90, (int*)&local_58, (bool*)&local_38, (shared_ptr*)(lVar40 + 32),
                        &local_50->field_8488);
                    lVar40 = shared_ptr<dash3d::Sprite>::operator->((shared_ptr<dash3d::Sprite>*)&local_48);
                    shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)(lVar40 + 32),
                                                               (shared_ptr*)&local_70);
                    local_70.~shared_ptr();
                    local_48.~shared_ptr();
                LAB_100116b55:
                    if (bVar9 != false) {
                        return;
                    }
                } else {
                    local_48.~shared_ptr();
                }
                break;
            case (hashtable<
                  eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                  eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                  eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)3:
                iVar35 = std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                    (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&local_50->field_19184);
                dash3d::world::GetGd((int)&local_48, iVar35, pCVar34->m_playerLevel);
                bVar9 = operator!=((shared_ptr*)&local_48, (_func_decltype_nullptr*)0);
                if (bVar9) {
                    lVar40 = shared_ptr<dash3d::GroundDecor>::operator->((shared_ptr<dash3d::GroundDecor>*)&local_48);
                    local_5c = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(longlong*)(lVar40 + 32));
                    local_34 = 22;
                    local_38 = local_38 & 4294967040;
                    lVar40 = shared_ptr<dash3d::GroundDecor>::operator->((shared_ptr<dash3d::GroundDecor>*)&local_48);
                    make_shared<ClientLocAnim, int, int, int&, int&, int&, int&, int&, bool,
                                shared_ptr<dash3d::ModelSource>&, int&>(
                        (jag*)&local_70, (int*)&local_5c, (int*)&local_34, (int*)&local_54, &pCVar34->m_playerLevel,
                        (int*)&local_a0, (int*)local_90, (int*)&local_58, (bool*)&local_38, (shared_ptr*)(lVar40 + 16),
                        &pCVar34->field_8488);
                    lVar40 = shared_ptr<dash3d::GroundDecor>::operator->((shared_ptr<dash3d::GroundDecor>*)&local_48);
                    shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)(lVar40 + 16),
                                                               (shared_ptr*)&local_70);
                    local_70.~shared_ptr();
                    local_48.~shared_ptr();
                    bVar9 = true;
                    goto LAB_100116b55;
                }
                local_48.~shared_ptr();
            }
            LocChangeAnim(local_50, local_50->m_playerLevel, local_a0.field_0, local_90[0], local_80, local_58);
            break;
        case 3:
            new (&local_48) SuperShuffledPacketFactory(param_3);
            pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_48.p2_alt2();
            bVar5 = pPVar20->g1();
            pCVar34 = local_50;
            iVar37 = (bVar5 >> 4 & 7) + *(int*)&local_50->field_1115284;
            iVar35 = (bVar5 & 7) + *(int*)&local_50->field_1115288;
            pSVar21 = (ShuffledPacket4*)local_48.p2_alt2();
            uVar13 = pSVar21->g1();
            pSVar22 = (ShuffledPacket2*)local_48.p2_alt2();
            uVar10 = pSVar22->g2();
            if (pCVar34->field_54760 != '\0') {
                uVar27 = logger::default_logger();
                logger::Logger::Log(uVar27, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    4955, "Received obj_enabled_ops x:%d z:%d type:%d enabledOpsBitMask:%u",
                                    CONCAT44(uVar44, iVar37), CONCAT44(uVar47, iVar35), CONCAT44(uVar49, (uint)uVar10),
                                    CONCAT44(uVar50, uVar13) & 18446744069414584575);
            }
            if (((iVar37 < 104) && (-1 < iVar37)) && ((-1 < iVar35 && (iVar35 < 104)))) {
                local_48.begin();
                local_70.end();
                bVar9 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_70, extraout_RDX);
                if (bVar9) {
                    do {
                        pvVar25 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                            eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)&local_48);
                        pAVar26 = (AnimationWrapper*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                            pvVar25);
                        if (*(uint*)(pAVar26->field_16 + 8) == (uVar10 & 32767)) {
                            pAVar26->SetReadyAnim(SUB41(uVar13, 0));
                            return;
                        }
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_48);
                        bVar9 =
                            eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_70, extraout_RDX_00);
                    } while (bVar9);
                }
            }
            break;
        case 4:
            new (&local_48) SuperShuffledPacketFactory(param_3);
            pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_48.p2_alt2();
            bVar5 = pPVar20->g1();
            pCVar34 = local_50;
            iVar35 = (bVar5 >> 4 & 7) + *(int*)&local_50->field_1115284;
            iVar37 = (bVar5 & 7) + *(int*)&local_50->field_1115288;
            pSVar19 = (ShuffledPacket3*)local_48.p2_alt2();
            bVar5 = pSVar19->g1();
            bVar7 = bVar5 >> 2;
            uVar8 = constants::LocShape::ToLayer(bVar7);
            uVar50 = (undefined4)(in_stack_fffffffffffffe80 >> 32);
            if (pCVar34->field_54760 != '\0') {
                uVar27 = logger::default_logger();
                in_stack_fffffffffffffe80 = CONCAT44(uVar50, (uint)bVar7);
                uVar48 = CONCAT44(uVar49, (uint)(bVar5 & 3));
                uVar45 = CONCAT44(uVar47, iVar37);
                uVar42 = CONCAT44(uVar44, iVar35);
                logger::Logger::Log(uVar27, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    4397, "Received loc_del x:%d z:%d rotate:%d shape:%u", uVar42, uVar45, uVar48,
                                    in_stack_fffffffffffffe80);
                uVar49 = (undefined4)((ulong)uVar48 >> 32);
                uVar44 = (undefined4)((ulong)uVar42 >> 32);
                uVar47 = (undefined4)((ulong)uVar45 >> 32);
            }
            if ((((iVar35 < 104) && (-1 < iVar35)) && (-1 < iVar37)) && (iVar37 < 104)) {
                LocChangeCreate(local_50, local_50->m_playerLevel, iVar35, iVar37, uVar8, 4294967295,
                                CONCAT44(uVar44, (uint)bVar7), CONCAT44(uVar47, (uint)(bVar5 & 3)),
                                CONCAT44(uVar49, 31), in_stack_fffffffffffffe80 & 18446744069414584320,
                                CONCAT44(uVar13, 4294967295));
            }
            break;
        case 5:
            new (&local_48) SuperShuffledPacketFactory(param_3);
            pSVar19 = (ShuffledPacket3*)local_48.p2_alt2();
            uVar15 = pSVar19->g4();
            local_88 = CONCAT44(local_88._4_4_, uVar15);
            pSVar21 = (ShuffledPacket4*)local_48.p2_alt2();
            uVar14 = pSVar21->g4s();
            pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_48.p2_alt2();
            bVar5 = pPVar20->g1();
            pCVar34 = local_50;
            iVar35 = (bVar5 >> 4 & 7) + *(int*)&local_50->field_1115284;
            lVar40 = (ulong)(bVar5 & 7) + (long)*(int*)&local_50->field_1115288;
            pSVar19 = (ShuffledPacket3*)local_48.p2_alt2();
            uVar10 = pSVar19->g2();
            uVar15 = (uint)local_88;
            local_74 = (uint)uVar10;
            iVar37 = (int)lVar40;
            if (pCVar34->field_54760 != '\0') {
                uVar27 = logger::default_logger();
                logger::Logger::Log(uVar27, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    4907, "Received obj_count x:%d z:%d type:%d ocount:%d count:%d",
                                    CONCAT44(uVar44, iVar35), CONCAT44(uVar47, iVar37), CONCAT44(uVar49, local_74),
                                    CONCAT44(uVar50, uVar14), CONCAT44(uVar13, uVar15));
            }
            if (103 < iVar35) {
                return;
            }
            if (iVar35 < 0) {
                return;
            }
            if (iVar37 < 0) {
                return;
            }
            if (103 < iVar37) {
                return;
            }
            local_80 =
                (hashtable<
                    eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                    eastl::allocator,
                    eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                    eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)CONCAT44(local_80._4_4_,
                                                                                                         uVar14);
            local_a8 = lVar40;
            local_a0.begin();
            local_90->end();
            bVar9 = eastl::operator!=((eastl*)&local_a0, (hashtable_iterator_base*)local_90, extraout_RDX_01);
            if (bVar9) {
                uVar36 = local_74 & 32767;
                do {
                    pvVar25 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_a0);
                    lVar40 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar25);
                    uVar38 = local_74;
                    if ((*(uint*)(lVar40 + 24) == uVar36) && (*(int*)(lVar40 + 28) == (int)local_80)) {
                        *(uint*)(lVar40 + 28) = (uint)local_88;
                        local_48.List(local_74);
                        new (&local_70) rs2lib::CoordGrid(local_50->m_playerLevel, iVar35, (int)local_a8);
                        weak_ptr<dash3d::Decor>::weak_ptr(local_f0, (weak_ptr*)pvVar25);
                        ScriptRunner::SetActiveObj(&local_70, local_f0);
                        local_f0->~weak_ptr();
                        lVar40 = shared_ptr<configdecoder::ObjType>::operator->(
                            (shared_ptr<configdecoder::ObjType>*)&local_48);
                        ScriptRunner::ExecuteScript(46, uVar38, *(undefined4*)(lVar40 + 672), 500000);
                        local_48.~shared_ptr();
                        break;
                    }
                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)&local_a0);
                    bVar9 = eastl::operator!=((eastl*)&local_a0, (hashtable_iterator_base*)local_90, extraout_RDX_02);
                } while (bVar9);
            }
            pCVar34 = local_50;
            lVar40 = local_a8;
            ShowObject(local_50, iVar35, (int)local_a8);
            iVar37 = pCVar34->m_playerLevel;
            goto LAB_100116569;
        case 6:
            new (&local_48) SuperShuffledPacketFactory(param_3);
            pSVar19 = (ShuffledPacket3*)local_48.p2_alt2();
            bVar5 = pSVar19->g1();
            pCVar34 = local_50;
            local_70.field_0 = (bVar5 >> 4 & 7) + *(int*)&local_50->field_1115284;
            local_a0.field_0 = (bVar5 & 7) + *(int*)&local_50->field_1115288;
            pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_48.p2_alt2();
            uVar10 = pPVar20->g2();
            local_54 = (uint)uVar10;
            pSVar19 = (ShuffledPacket3*)local_48.p2_alt2();
            bVar5 = pSVar19->g1();
            pCVar23 = (Client*)local_48.p2_alt2();
            uVar10 = pCVar23->g2();
            local_90[0] = (uint)uVar10;
            if (pCVar34->field_54760 != '\0') {
                pCVar23 = (Client*)logger::default_logger();
                logger::Logger::Log(pCVar23, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    4757, "Received map_anim x:%d z:%d spotanim:%d height:%d time:%d",
                                    CONCAT44(uVar44, local_70.field_0), CONCAT44(uVar47, local_a0.field_0),
                                    CONCAT44(uVar49, local_90[0]), CONCAT44(uVar50, (uint)bVar5),
                                    CONCAT44(uVar13, local_54));
            }
            if ((((int)local_70.field_0 < 104) && (-1 < (int)local_70.field_0)) &&
                ((-1 < (int)local_a0.field_0 && ((int)local_a0.field_0 < 104)))) {
                local_70.field_0 = local_70.field_0 << 7 | 64;
                local_a0.field_0 = local_a0.field_0 << 7 | 64;
                iVar35 = GetAvH(pCVar23, local_70.field_0, local_a0.field_0, pCVar34->m_playerLevel);
                local_58 = iVar35 - (uint)bVar5;
                make_shared<MapSpotAnim, int&, int&, int&, int&, int, int&, int&>(
                    (jag*)&local_48, (int*)local_90, &pCVar34->m_playerLevel, (int*)&local_70, (int*)&local_a0,
                    (int*)&local_58, (int*)&local_54, &pCVar34->field_8488);
                (&pCVar34->field_7164616, (shared_ptr*)&local_48)->push_back();
                local_48.~shared_ptr();
            }
            break;
        case 7:
            new (&local_48) SuperShuffledPacketFactory(param_3);
            pSVar22 = (ShuffledPacket2*)local_48.p2_alt2();
            bVar5 = pSVar22->g1();
            local_74 = CONCAT31(local_74._1_3_, bVar5);
            local_80 =
                (hashtable<
                    eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                    eastl::allocator,
                    eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                    eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                    CONCAT44(local_80._4_4_, (uint)(bVar5 & 3));
            local_88 = CONCAT44(local_88._4_4_, (uint)(bVar5 >> 2));
            uVar8 = constants::LocShape::ToLayer();
            local_b0 = CONCAT31(local_b0._1_3_, uVar8);
            pSVar19 = (ShuffledPacket3*)local_48.p2_alt2();
            bVar5 = pSVar19->g1();
            pCVar34 = local_50;
            iVar35 = (bVar5 >> 4 & 7) + *(int*)&local_50->field_1115284;
            uVar36 = (bVar5 & 7) + *(int*)&local_50->field_1115288;
            pSVar21 = (ShuffledPacket4*)local_48.p2_alt2();
            uVar10 = pSVar21->g2();
            local_a8 = CONCAT44(local_a8._4_4_, (uint)uVar10);
            pSVar22 = (ShuffledPacket2*)local_48.p2_alt2();
            local_ac = pSVar22->g1s();
            pSVar19 = (ShuffledPacket3*)local_48.p2_alt2();
            local_ab = pSVar19->g1s();
            pSVar22 = (ShuffledPacket2*)local_48.p2_alt2();
            local_b8 = pSVar22->g2();
            pSVar22 = (ShuffledPacket2*)local_48.p2_alt2();
            uVar10 = pSVar22->g2();
            pSVar21 = (ShuffledPacket4*)local_48.p2_alt2();
            local_a9 = pSVar21->g1s();
            pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_48.p2_alt2();
            local_aa = pPVar20->g1s();
            uVar15 = (uint)local_88;
            pSVar21 = (ShuffledPacket4*)local_48.p2_alt2();
            local_b6 = pSVar21->g2();
            uVar14 = (int)local_80;
            if (pCVar34->field_54760 != '\0') {
                uVar27 = logger::default_logger();
                uVar45 = CONCAT44(uVar47, uVar36);
                uVar42 = CONCAT44(uVar44, iVar35);
                param_3 = (SuperPacket*)0;
                logger::Logger::Log(uVar27, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    4815, "Received p_locmerge x:%d z:%d id:%d rotate:%d shape:%u", uVar42, uVar45,
                                    CONCAT44(uVar49, (uint)uVar10), CONCAT44(uVar50, uVar14), CONCAT44(uVar13, uVar15));
                uVar44 = (undefined4)((ulong)uVar42 >> 32);
                uVar47 = (undefined4)((ulong)uVar45 >> 32);
            }
            new (&local_48) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_3);
            if (local_50->field_51988 == (int)local_a8) {
                shared_ptr<ClientPlayer>::operator=((shared_ptr<ClientPlayer>*)&local_48,
                                                    (shared_ptr*)local_50->field_52016);
            } else {
                psVar29 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                    (array<shared_ptr<ClientPlayer>, 2048ul>*)&local_50->field_19216, local_a8 & 4294967295);
                shared_ptr<ClientPlayer>::operator=((shared_ptr<ClientPlayer>*)&local_48, psVar29);
            }
            bVar9 = operator!=((shared_ptr*)&local_48, (_func_decltype_nullptr*)0);
            if (bVar9) {
                local_d8 = local_48.end();
                psVar29 = (shared_ptr*)configdecoder::LocType::List((uint)uVar10);
                new (&local_70) shared_ptr<dash3d::Decor>(psVar29);
                local_e0 = local_70.end();
                pCVar34 = local_50;
                uVar38 = *(uint*)(local_e0 + 184 + (ulong)((byte)local_74 & 1) * 4);
                local_c0 = (ulong)uVar38;
                uVar2 = *(uint*)(local_e0 + 184 + (ulong)((local_74 & 1) == 0) * 4);
                local_a8 = (ulong)uVar2;
                iVar39 = ((int)uVar38 >> 1) + iVar35;
                iVar37 = ((int)uVar2 >> 1) + uVar36;
                local_74 = uVar36;
                local_c8 = ClientBuild::Read3DArray<int>((Array*)&ClientBuild::m_groundh, local_50->m_playerLevel,
                                                         iVar39, iVar37);
                iVar37 = ClientBuild::Read3DArray<int>((Array*)&ClientBuild::m_groundh, pCVar34->m_playerLevel,
                                                       ((int)local_c0 + 1 >> 1) + iVar35, iVar37);
                iVar12 = ((int)local_a8 + 1 >> 1) + local_74;
                local_c4 = ClientBuild::Read3DArray<int>((Array*)&ClientBuild::m_groundh, pCVar34->m_playerLevel,
                                                         iVar39, iVar12);
                iVar12 = ClientBuild::Read3DArray<int>((Array*)&ClientBuild::m_groundh, pCVar34->m_playerLevel, iVar39,
                                                       iVar12);
                iVar12 = iVar37 + local_c8 + local_c4 + iVar12 >> 2;
                iVar37 = (int)local_c0 * 64 + iVar35 * 128;
                uVar36 = (int)local_a8 * 64 + local_74 * 128;
                local_a8 = (ulong)uVar36;
                uVar46 = CONCAT44(uVar47, uVar36);
                uVar43 = CONCAT44(uVar44, iVar12);
                local_a0.GetModelLit((int)local_e0, (uint)local_88, (int)local_80, pCVar34->m_playerLevel, iVar37,
                                     iVar12);
                bVar9 = operator!=((shared_ptr*)&local_a0, (_func_decltype_nullptr*)0);
                uVar3 = local_b6;
                uVar10 = local_b8;
                if (bVar9) {
                    LocChangeCreate(local_50, local_50->m_playerLevel, iVar35, local_74, (undefined1)local_b0,
                                    4294967295, uVar43 & 18446744069414584320, uVar46 & 18446744069414584320, 31,
                                    local_b8 + 1, local_b6 + 1);
                    iVar39 = local_50->field_8488;
                    *(uint*)(local_d8 + 1140) = (uint)uVar10 + iVar39;
                    *(uint*)(local_d8 + 1144) = (uint)uVar3 + iVar39;
                    shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)(local_d8 + 1160),
                                                            (shared_ptr*)&local_a0);
                    *(int*)(local_d8 + 1148) = iVar37;
                    *(int*)(local_d8 + 1156) = (int)local_a8;
                    *(int*)(local_d8 + 1152) = iVar12;
                    cVar4 = local_ac;
                    if (local_ac < local_a9) {
                        cVar4 = local_a9;
                    }
                    cVar6 = local_a9;
                    if (local_ac < local_a9) {
                        cVar6 = local_ac;
                    }
                    cVar33 = local_aa;
                    if (local_aa < local_ab) {
                        cVar33 = local_ab;
                    }
                    cVar31 = local_ab;
                    if (local_aa < local_ab) {
                        cVar31 = local_aa;
                    }
                    *(int*)(local_d8 + 1176) = cVar6 + iVar35;
                    *(int*)(local_d8 + 1184) = cVar4 + iVar35;
                    *(uint*)(local_d8 + 1180) = (int)cVar31 + local_74;
                    *(uint*)(local_d8 + 1188) = (int)cVar33 + local_74;
                }
                local_a0.~shared_ptr();
                local_70.~shared_ptr();
            }
            local_48.~shared_ptr();
            break;
        case 8:
            new (&local_48) SuperShuffledPacketFactory(param_3);
            pSVar22 = (ShuffledPacket2*)local_48.p2_alt2();
            cVar4 = pSVar22->g1();
            local_88 = CONCAT71(local_88._1_7_, cVar4 == '\x01');
            pSVar22 = (ShuffledPacket2*)local_48.p2_alt2();
            bVar5 = pSVar22->g1();
            pCVar34 = local_50;
            lVar40 = (ulong)(bVar5 >> 4 & 7) + (long)*(int*)&local_50->field_1115284;
            lVar41 = (ulong)(bVar5 & 7) + (long)*(int*)&local_50->field_1115288;
            pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_48.p2_alt2();
            uVar8 = pPVar20->g1();
            local_80 =
                (hashtable<
                    eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                    eastl::allocator,
                    eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                    eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)CONCAT71(local_80._1_7_,
                                                                                                         uVar8);
            pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_48.p2_alt2();
            uVar15 = pPVar20->g4();
            pSVar21 = (ShuffledPacket4*)local_48.p2_alt2();
            uVar11 = pSVar21->g2();
            local_a8 = CONCAT62(local_a8._2_6_, uVar11);
            pSVar22 = (ShuffledPacket2*)local_48.p2_alt2();
            uVar11 = pSVar22->g2();
            local_74 = CONCAT22(local_74._2_2_, uVar11);
            pSVar22 = (ShuffledPacket2*)local_48.p2_alt2();
            uVar8 = pSVar22->g1();
            local_c0 = CONCAT71(local_c0._1_7_, uVar8);
            pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_48.p2_alt2();
            uVar10 = pPVar20->g2();
            uVar36 = (uint)uVar10;
            uVar38 = (uint)(byte)local_80;
            iVar37 = (int)lVar41;
            iVar35 = (int)lVar40;
            if (pCVar34->field_54760 != '\0') {
                uVar27 = logger::default_logger();
                logger::Logger::Log(uVar27, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    4540, "Received obj_add_v3 x:%d z:%d type:%d count:%d enabledOpsBitMask:%u",
                                    CONCAT44(uVar44, iVar35), CONCAT44(uVar47, iVar37), CONCAT44(uVar49, uVar36),
                                    CONCAT44(uVar50, uVar15), CONCAT44(uVar13, uVar38));
            }
            uVar2 = local_74;
            if (((iVar35 < 104) && (-1 < iVar35)) && ((-1 < iVar37 && (iVar37 < 104)))) {
                local_80 =
                    (hashtable<eastl::string,
                               eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                               eastl::allocator,
                               eastl::use_first<
                                   eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                               eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                               eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                        CONCAT44(local_80._4_4_, uVar38);
                uVar10 = (ushort)local_a8;
                local_a8 = CONCAT44(local_a8._4_4_, (uint)(byte)local_c0);
                local_b0 = uVar15;
                make_shared<ClientObj>((jag*)&local_48);
                pAVar26 = (AnimationWrapper*)local_48.end();
                pCVar34 = local_50;
                *(uint*)(pAVar26->field_16 + 8) = uVar36;
                *(undefined4*)(pAVar26->field_16 + 12) = local_b0;
                iVar12 = local_50->field_8492;
                pAVar26->field_32 = (uVar2 & 65535) + iVar12;
                pAVar26->field_36 = (uint)uVar10 + iVar12;
                pAVar26->field_40 = (byte)local_a8;
                pAVar26->field_41 = (bool)local_a8._1_1_;
                *(undefined2*)&pAVar26->field_42 = local_a8._2_2_;
                pAVar26->field_44 = (undefined1)local_88;
                local_74 = uVar36;
                pAVar26->SetReadyAnim(SUB81(local_80, 0));
                (pCVar34->m_highlightManager, (shared_ptr*)&local_48, pCVar34->m_playerLevel, iVar35, iVar37)
                    ->OnObjAdded();
                ((pCVar34->field_1120504 + lVar41 * 32 + lVar40 * 3328 + (long)pCVar34->m_playerLevel * 346112 + 56),
                 (shared_ptr*)&local_48)
                    ->push_back();
                ShowObject(pCVar34, iVar35, iVar37);
                uVar36 = local_74;
                local_70.List(local_74);
                new (&local_a0) rs2lib::CoordGrid(pCVar34->m_playerLevel, iVar35, iVar37);
                weak_ptr<dash3d::Decor>::weak_ptr(local_128, (weak_ptr*)&local_48);
                ScriptRunner::SetActiveObj(&local_a0, local_128);
                local_128->~weak_ptr();
                lVar40 = shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)&local_70);
                ScriptRunner::ExecuteScript(39, uVar36, *(undefined4*)(lVar40 + 672), 500000);
                RunUpdateObjStackTrigger(pCVar34, pCVar34->m_playerLevel, iVar35, iVar37);
                local_70.~shared_ptr();
                local_48.~shared_ptr();
            }
            break;
        case 9:
            new (&local_48) SuperShuffledPacketFactory(param_3);
            pSVar22 = (ShuffledPacket2*)local_48.p2_alt2();
            uVar8 = pSVar22->g1();
            local_80 =
                (hashtable<
                    eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                    eastl::allocator,
                    eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                    eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)CONCAT71(local_80._1_7_,
                                                                                                         uVar8);
            pSVar19 = (ShuffledPacket3*)local_48.p2_alt2();
            bVar5 = pSVar19->g1();
            bVar30 = bVar5 >> 2;
            uVar8 = constants::LocShape::ToLayer(bVar30);
            local_88 = CONCAT71(local_88._1_7_, uVar8);
            pSVar21 = (ShuffledPacket4*)local_48.p2_alt2();
            uVar10 = pSVar21->g2();
            pSVar21 = (ShuffledPacket4*)local_48.p2_alt2();
            bVar7 = pSVar21->g1();
            uVar50 = (undefined4)(in_stack_fffffffffffffe80 >> 32);
            iVar37 = (bVar7 >> 4 & 7) + *(int*)&local_50->field_1115284;
            iVar35 = (bVar7 & 7) + *(int*)&local_50->field_1115288;
            if (local_50->field_54760 != '\0') {
                uVar27 = logger::default_logger();
                uVar51 = CONCAT44(uVar13, (uint)bVar30);
                in_stack_fffffffffffffe80 = CONCAT44(uVar50, (uint)(bVar5 & 3));
                uVar48 = CONCAT44(uVar49, (uint)uVar10);
                uVar45 = CONCAT44(uVar47, iVar35);
                uVar42 = CONCAT44(uVar44, iVar37);
                logger::Logger::Log(uVar27, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    4366, "Received loc_add_change_v2 x:%d z:%d id:%d rotate:%d shape:%u", uVar42,
                                    uVar45, uVar48, in_stack_fffffffffffffe80, uVar51);
                uVar13 = (undefined4)((ulong)uVar51 >> 32);
                uVar44 = (undefined4)((ulong)uVar42 >> 32);
                uVar47 = (undefined4)((ulong)uVar45 >> 32);
                uVar49 = (undefined4)((ulong)uVar48 >> 32);
            }
            if ((((iVar37 < 104) && (-1 < iVar37)) && (-1 < iVar35)) && (iVar35 < 104)) {
                LocChangeCreate(local_50, local_50->m_playerLevel, iVar37, iVar35, local_88 & 255, (uint)uVar10,
                                CONCAT44(uVar44, (uint)bVar30), CONCAT44(uVar47, (uint)(bVar5 & 3)),
                                CONCAT44(uVar49, (uint)(byte)local_80),
                                in_stack_fffffffffffffe80 & 18446744069414584320, CONCAT44(uVar13, 4294967295));
            }
            break;
        case 10:
            new (&local_48) SuperShuffledPacketFactory(param_3);
            pSVar21 = (ShuffledPacket4*)local_48.p2_alt2();
            uVar10 = pSVar21->g2();
            pSVar19 = (ShuffledPacket3*)local_48.p2_alt2();
            uVar36 = pSVar19->g4();
            pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_48.p2_alt2();
            bVar5 = pPVar20->g1();
            lVar41 = (ulong)(bVar5 >> 4 & 7) + (long)*(int*)&local_50->field_1115284;
            lVar40 = (ulong)(bVar5 & 7) + (long)*(int*)&local_50->field_1115288;
            iVar37 = (int)lVar40;
            iVar35 = (int)lVar41;
            if (local_50->field_54760 != '\0') {
                uVar27 = logger::default_logger();
                logger::Logger::Log(uVar27, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    4584, "Received obj_del x:%d z:%d type:%d count:%d", CONCAT44(uVar44, iVar35),
                                    CONCAT44(uVar47, iVar37), CONCAT44(uVar49, (uint)uVar10), CONCAT44(uVar50, uVar36));
            }
            if (103 < iVar35) {
                return;
            }
            if (iVar35 < 0) {
                return;
            }
            if (iVar37 < 0) {
                return;
            }
            if (103 < iVar37) {
                return;
            }
            iVar12 = local_50->m_playerLevel;
            puVar32 = local_50->field_1120504;
            cVar4 = ((puVar32 + lVar40 * 32 + lVar41 * 3328 + (long)iVar12 * 346112 + 56))->empty();
            if (cVar4 != '\0') {
                return;
            }
            eastl::list<console::Line, eastl::allocator>::begin(local_118);
            eastl::list<console::Line, eastl::allocator>::end(local_110);
            eastl::find_if<eastl::ListIterator<shared_ptr<ClientObj>, shared_ptr<ClientObj>*, shared_ptr<ClientObj>&>,
                           (shared::ZoneProt::ID)->ZonePacket(core::SuperPacket&)::__18>(
                (eastl*)&local_a0, local_118, local_110, (ulong)uVar10 | (ulong)uVar36 << 32);
            local_80 =
                (hashtable<
                    eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                    eastl::allocator,
                    eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                    eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)(puVar32 + lVar40 * 32 +
                                                                                                 lVar41 * 3328 +
                                                                                                 (long)iVar12 * 346112 +
                                                                                                 56);
            local_48.end();
            bVar9 = eastl::operator!=((eastl*)&local_a0, (hashtable_iterator_base*)&local_48, extraout_RDX_03);
            pCVar34 = local_50;
            if (bVar9) {
                local_48.List((uint)uVar10);
                new (&local_70) rs2lib::CoordGrid(pCVar34->m_playerLevel, iVar35, iVar37);
                pwVar28 = (weak_ptr*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)&local_a0);
                weak_ptr<dash3d::Decor>::weak_ptr(local_108, pwVar28);
                ScriptRunner::SetActiveObj(&local_70, local_108);
                local_108->~weak_ptr();
                lVar41 = shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)&local_48);
                ScriptRunner::ExecuteScript(40, (ulong)uVar10, *(undefined4*)(lVar41 + 672), 500000);
                new (&local_f8)
                    eastl::ListIterator<shared_ptr<rs2lib::worldmap::MapElement>,
                                        shared_ptr<rs2lib::worldmap::MapElement> const*,
                                        shared_ptr<rs2lib::worldmap::MapElement> const&>((ListIterator*)&local_a0);
                eastl::list<shared_ptr<ClientObj>, eastl::allocator>::erase(local_90, local_80, local_f8);
                local_48.~shared_ptr();
            }
            ShowObject(pCVar34, iVar35, iVar37);
            iVar37 = pCVar34->m_playerLevel;
        LAB_100116569:
            RunUpdateObjStackTrigger(pCVar34, iVar37, iVar35, (int)lVar40);
            break;
        case 11:
            new (&local_48) SuperShuffledPacketFactory(param_3);
            pSVar19 = (ShuffledPacket3*)local_48.p2_alt2();
            uVar10 = pSVar19->g2();
            local_80 =
                (hashtable<
                    eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                    eastl::allocator,
                    eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                    eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)(ulong)uVar10;
            pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_48.p2_alt2();
            uVar10 = pPVar20->g2();
            local_88 = CONCAT44(local_88._4_4_, (uint)uVar10);
            pSVar21 = (ShuffledPacket4*)local_48.p2_alt2();
            cVar4 = pSVar21->g1s();
            pSVar19 = (ShuffledPacket3*)local_48.p2_alt2();
            bVar5 = pSVar19->g1();
            local_5c = (uint)bVar5;
            pSVar22 = (ShuffledPacket2*)local_48.p2_alt2();
            local_90[0] = pSVar22->g3s();
            pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_48.p2_alt2();
            cVar6 = pPVar20->g1s();
            pSVar22 = (ShuffledPacket2*)local_48.p2_alt2();
            bVar5 = pSVar22->g1();
            pSVar19 = (ShuffledPacket3*)local_48.p2_alt2();
            bVar7 = pSVar19->g1();
            local_34 = (uint)bVar7;
            pSVar21 = (ShuffledPacket4*)local_48.p2_alt2();
            bVar7 = pSVar21->g1();
            local_58 = (uint)bVar7 << 2;
            pSVar19 = (ShuffledPacket3*)local_48.p2_alt2();
            local_38 = pSVar19->g3s();
            pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_48.p2_alt2();
            bVar7 = pPVar20->g1();
            pCVar34 = local_50;
            local_70.field_0 = (bVar7 >> 4 & 7) + *(int*)&local_50->field_1115284;
            local_a0.field_0 = (bVar7 & 7) + *(int*)&local_50->field_1115288;
            pCVar23 = (Client*)local_48.p2_alt2();
            uVar10 = pCVar23->g2();
            local_54 = (uint)uVar10;
            iVar35 = (int)cVar4 + local_70.field_0;
            iVar37 = (int)cVar6 + local_a0.field_0;
            if (pCVar34->field_54760 != '\0') {
                pCVar23 = (Client*)logger::default_logger();
                logger::Logger::Log(pCVar23, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    4720,
                                    "Received projanim x:%i z:%i x2:%i z2:%i sourceEntity:%i targetEntity:%i "
                                    "spotanim:%i h1:%i h2:%i t1:%i t2:%i angle:%i startpos:%i",
                                    CONCAT44(uVar44, local_70.field_0), CONCAT44(uVar47, local_a0.field_0),
                                    CONCAT44(uVar49, iVar35), CONCAT44(uVar50, iVar37), CONCAT44(uVar13, local_38),
                                    CONCAT44(uVar15, local_90[0]), CONCAT44(uVar14, local_54), (uint)bVar5 * 4,
                                    local_58, (int)local_80, (uint)local_88, local_5c, local_34);
            }
            if (103 < (int)local_70.field_0) {
                return;
            }
            if ((int)local_70.field_0 < 0) {
                return;
            }
            if ((int)local_a0.field_0 < 0) {
                return;
            }
            if (103 < (int)local_a0.field_0) {
                return;
            }
            if (iVar35 < 0) {
                return;
            }
            if (iVar37 < 0) {
                return;
            }
            if (103 < iVar35) {
                return;
            }
            if (103 < iVar37) {
                return;
            }
            if (local_54 == 65535) {
                return;
            }
            local_70.field_0 = local_70.field_0 << 7 | 64;
            local_a0.field_0 = local_a0.field_0 << 7 | 64;
            iVar12 = GetAvH(pCVar23, local_70.field_0, local_a0.field_0, pCVar34->m_playerLevel);
            local_78 = iVar12 + (uint)bVar5 * -4;
            local_b4 = (int)local_80 + pCVar34->field_8488;
            local_cc = pCVar34->field_8488 + (uint)local_88;
            pCVar23 = (Client*)&local_48;
            make_shared<ClientProj, int&, int&, int&, int&, int, int, int, int&, int&, int&, int&, int&>(
                (jag*)pCVar23, (int*)&local_54, &pCVar34->m_playerLevel, (int*)&local_70, (int*)&local_a0,
                (int*)&local_78, &local_b4, &local_cc, (int*)&local_5c, (int*)&local_34, (int*)&local_38,
                (int*)local_90, (int*)&local_58);
            pCVar24 = (ClientProj*)shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)pCVar23);
            uVar36 = iVar35 * 128 | 64;
            uVar38 = iVar37 * 128 | 64;
            iVar35 = GetAvH(pCVar23, uVar36, uVar38, pCVar34->m_playerLevel);
            pCVar34 = local_50;
            pCVar24->SetTarget(uVar36, uVar38, iVar35 - local_58, (int)local_80 + local_50->field_8488);
            (&pCVar34->field_7164584, (shared_ptr*)&local_48)->push_back();
        LAB_1001154e6:
            local_48.~shared_ptr();
        }
    }

} // namespace jag::oldscape

namespace jag::network {
    // 0x100b0f6d0, 160 bytes, inline, placed by class name
    // operator==(IPAddress const&, IPAddress const&)
    /* TEMPNAMEPLACEHOLDERVALUE(IPAddress const&, IPAddress
   const&) */

    ulong operator==(IPAddress* param_1, IPAddress* param_2) {
        int iVar1;
        int iVar2;
        bool bVar3;
        ushort* puVar4;
        ushort* puVar5;
        ushort* puVar6;
        undefined7 extraout_var;
        ulong uVar7;

        iVar1 = param_1->field_8;
        if (iVar1 == param_2->field_8) {
            if (iVar1 == 1) {
                puVar4 = std::begin<unsigned short const, 8ul>((unsigned short*)&param_1->field_12);
                puVar5 = std::end<unsigned short const, 8ul>((unsigned short*)&param_1->field_12);
                puVar6 = std::begin<unsigned short const, 8ul>((unsigned short*)&param_2->field_12);
                bVar3 = eastl::equal<unsigned short const*, unsigned short const*>(puVar4, puVar5, puVar6);
                uVar7 = CONCAT71(extraout_var, bVar3) & 4294967295;
            } else {
                if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways(
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/IPAddress.h",
                        123, "Unknow IP type");
                }
                iVar2._0_2_ = param_1->field_12;
                iVar2._2_2_ = param_1->field_14;
                iVar1._0_2_ = param_2->field_12;
                iVar1._2_2_ = param_2->field_14;
                uVar7 = CONCAT71((int7)((ulong)param_1 >> 8), iVar2 == iVar1);
            }
        } else {
            uVar7 = 0;
        }
        return uVar7 & 4294967295;
    }

} // namespace jag::network
