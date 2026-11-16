// projects/osclient/client_network.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "client.h"

namespace jag::oldscape {
    // 0x1000ccf80
    void Client::LoginPoll() {
        void result;
        uint64_t* this_00;
        UpdateUserDetailsV2* superPacket;
        uint64_t uVar1;
        bool cVar3;
        uint8_t arg1;
        uint32_t uVar6;
        PublishingPlatformType PVar7;
        unsigned int uVar8;
        long lVar9;
        SecureRandom* pSVar10;
        unsigned int* puVar12;
        LoginManager* pLVar13;
        int* piVar14;
        long* plVar15;
        uint32_t* puVar16;
        eastl::string* str1;
        eastl::string* str2;
        eastl::string* str3;
        TotpPassCodes* pTVar17;
        DeviceOptions* this_03;
        char* str;
        unsigned char* puVar18;
        unsigned long uVar19;
        vector<unsigned int>* this_04;
        unsigned int* puVar20;
        ShuffledPacket2* pSVar21;
        ShuffledPacket4* pSVar22;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* pPVar23;
        ShuffledPacket3* pSVar24;
        array<eastl::string, 3ul>* this_05;
        ReturnValue* in_RSI;
        unsigned long long arg1_00;
        ReturnValue result;
        UpdateUserDetailsV2* pUVar25;
        eastl::string local_1e8;
        TextureAtlasReference local_1c8;
        WindowSavedPosition local_198;
        SuperShuffledPacketFactory local_178;
        ReturnValue local_168;
        uint8_t local_160[8];

        uint8_t* serverConnection = &field_19120;
        if (serverConnection == in_RSI) {
            &result = (ReturnValue*)local_160;
            result = std::make_unique<ServerConnection>();
            in_RSI = &result;
            *serverConnection = result;
            result.~unique_ptr();
            lVar9 = result.InstancePtr();
            if (lVar9 == 0) {
                pSVar10 = (SecureRandom*)operator new(320);
                new (pSVar10) SecureRandom();
                lVar9 = pSVar10->InstancePtr();
                if (lVar9 == 0) {
                    LogAssert("SecureRandom::InstancePtr() != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                              "client_network.cpp",
                              84, nullptr);
                }
            }
        }
        ServerConnection* pSVar11 = (ServerConnection*)(*serverConnection).operator->();
        int iVar5 = pSVar11->GetConnectionState();
        if (iVar5 == 1) {
            pSVar11 = (ServerConnection*)(*serverConnection).operator->();
            local_168 = pSVar11->ConsumeUpdatedLoginState();
            if (&local_168 != pSVar11) {
                field_1104120.MarkServerDataSeen();
                puVar16 = (uint32_t*)local_168.operator->();
                switch (*puVar16) {
                case 1:
                    pSVar11 = (ServerConnection*)(*serverConnection).operator->();
                    iVar5 = pSVar11->GetConnectionState();
                    if (iVar5 != 2) {
                        LogAssert("m_gameCon->GetConnectionState() == ConnectionState::CONNECTING_IDLE",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "client_network.cpp",
                                  181, nullptr);
                    }
                    pSVar10 = pSVar11->Instance();
                    local_198.PacketT(500);
                    uVar6 = pSVar10->GetInt();
                    lVar9 = local_168.operator->();
                    puVar16 = (uint32_t*)(*((lVar9 + 432)))[0];
                    *puVar16 = uVar6;
                    uVar6 = pSVar10->GetInt();
                    lVar9 = local_168.operator->();
                    puVar16 = (uint32_t*)(*((lVar9 + 432)))[1];
                    *puVar16 = uVar6;
                    uVar6 = pSVar10->GetInt();
                    lVar9 = local_168.operator->();
                    puVar16 = (uint32_t*)(*((lVar9 + 432)))[2];
                    *puVar16 = uVar6;
                    uVar6 = pSVar10->GetInt();
                    lVar9 = local_168.operator->();
                    puVar16 = (uint32_t*)(*((lVar9 + 432)))[3];
                    *puVar16 = uVar6;
                    local_198.p1<unsigned long>(1);
                    lVar9 = local_168.operator->();
                    puVar12 = (unsigned int*)(*((lVar9 + 432)))[0];
                    local_198.p4<int>(*puVar12);
                    lVar9 = local_168.operator->();
                    puVar12 = (unsigned int*)(*((lVar9 + 432)))[1];
                    local_198.p4<int>(*puVar12);
                    lVar9 = local_168.operator->();
                    puVar12 = (unsigned int*)(*((lVar9 + 432)))[2];
                    local_198.p4<int>(*puVar12);
                    lVar9 = local_168.operator->();
                    puVar12 = (unsigned int*)(*((lVar9 + 432)))[3];
                    local_198.p4<int>(*puVar12);
                    lVar9 = local_168.operator->();
                    arg1_00 = 3203386110;
                    if (field_54712 == 0) {
                        arg1_00 = *(unsigned long long*)(lVar9 + 112);
                    }
                    local_198.p8<long long>(arg1_00);
                    if (field_8448 == 40) {
                        this_00 = &field_55200;
                        puVar12 = (unsigned int*)(*this_00)[0];
                        local_198.p4<int>(*puVar12);
                        puVar12 = (unsigned int*)(*this_00)[1];
                        local_198.p4<int>(*puVar12);
                        puVar12 = (unsigned int*)(*this_00)[2];
                        local_198.p4<int>(*puVar12);
                        puVar12 = (unsigned int*)(*this_00)[3];
                        local_198.p4<int>(*puVar12);
                    } else {
                        if (TitleScreen::m_dobSubmitted == '\0') {
                            local_198.p1<unsigned long>((unsigned int)(uint8_t)field_55056);
                            switch (field_55056) {
                            case 0:
                                pTVar17 = (TotpPassCodes*)field_8392.operator->();
                                pLVar13 = (LoginManager*)field_2506376.operator->();
                                iVar5 = pLVar13->GetAuthenticatorUserHash();
                                uVar8 = pTVar17->GetTotpPassCode(iVar5);
                                local_198.p4<int>(uVar8);
                                break;
                            case 1:
                            case 3:
                                local_198.p3<int>(TitleScreen::m_loginTotpPin);
                                local_198.p1<unsigned long>(0);
                                break;
                            case 2:
                            case 4:
                                local_198.p4<int>(0);
                            }
                        } else {
                            TitleScreen::m_dobSubmitted = '\0';
                            local_198.p1<unsigned long>(4);
                            local_198.p4<int>(TitleScreen::m_dobInput);
                        }
                        pLVar13 = (LoginManager*)field_2506376.operator->();
                        pLVar13->PackLoginRSAData(local_198);
                    }
                    local_198.rsaEncrypt(*((BigInteger*)&ClientKeys::login_rsae),
                                         *((BigInteger*)&ClientKeys::login_rsan));
                    lVar9 = local_168.operator->();
                    uVar1 = *(uint64_t*)(lVar9 + 440);
                    field_55200 = *(uint64_t*)(lVar9 + 432);
                    field_55208 = uVar1;
                    *local_160 = shared::ClientMessage::MakeClientMessage();
                    if (field_8448 == 40) {
                        ((local_160 + 8))->p1<shared::LoginProt::ID>(18);
                    } else {
                        ((local_160 + 8))->p1<shared::LoginProt::ID>(16);
                    }
                    superPacket = (UpdateUserDetailsV2*)(local_160 + 8);
                    superPacket->p2<int>(0);
                    local_1c8._32_8_ = superPacket->size();
                    superPacket->p4<int>(216);
                    pUVar25 = superPacket;
                    superPacket->p4<int>(1);
                    PVar7 = pUVar25->GetID();
                    superPacket->p1<shared::LoginProt::ID>(PVar7);
                    PVar7 = GetPublishingPlatformType();
                    superPacket->p1<shared::LoginProt::ID>(PVar7);
                    pLVar13 = GetLoginManager();
                    plVar15 = (long*)pLVar13->GetAuthWrapper();
                    if (plVar15 == nullptr) {
                        arg1 = false;
                    } else {
                        arg1 = (**(void (**)(...))(*plVar15 + 536))(plVar15);
                    }
                    superPacket->p1<signed char>((bool)arg1);
                    puVar18 = (unsigned char*)local_198.GetDataPtr();
                    uVar19 = local_198.size();
                    superPacket->pArrayBuffer(puVar18, 0, uVar19);
                    local_1c8._40_8_ = superPacket->size();
                    superPacket->pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(
                        *((eastl::string*)&TitleScreen::m_loginUser), false);
                    superPacket->p1<shared::LoginProt::ID>((unsigned int)m_lowMem | (unsigned int)field_52456 * 2);
                    superPacket->p2<int>(javapal::GameShell::m_sWid);
                    superPacket->p2<int>(javapal::GameShell::m_sHei);
                    SerialiseCurrentPackedUIDToPacket(*superPacket);
                    superPacket->pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(field_54792,
                                                                                                      false);
                    superPacket->p4<int>((unsigned long)field_54824);
                    iVar5 = GetServerMajorVersion();
                    if (213 < iVar5) {
                        this_04 = (vector<unsigned int>*)GetDeepLinkingIDs();
                        PVar7 = this_04->size();
                        superPacket->p1<shared::LoginProt::ID>(PVar7);
                        puVar12 = (unsigned int*)this_04->HeapBeginPtr();
                        puVar20 = (unsigned int*)this_04->end();
                        for (; puVar12 != puVar20; puVar12 = puVar12 + 1) {
                            superPacket->p4<int>((unsigned long)*puVar12);
                        }
                    }
                    local_1c8 = field_2508992->Serialise();
                    puVar18 = (unsigned char*)local_1c8.GetDataPtr();
                    uVar19 = local_1c8.GetTextureAtlas();
                    pUVar25 = superPacket;
                    superPacket->pArrayBuffer(puVar18, 0, uVar19);
                    PVar7 = pUVar25->GetID();
                    superPacket->p1<shared::LoginProt::ID>(PVar7);
                    uVar19 = 1662957473;
                    if (field_8425 == false) {
                        uVar19 = 596936697;
                    }
                    superPacket->p4<int>(uVar19);
                    local_178 = SuperShuffledPacketFactory(*superPacket);
                    pSVar21 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                    iVar5 = field_54432->GetCompletedGold();
                    pSVar21->p4<unsigned int>(iVar5);
                    pSVar21 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                    iVar5 = field_54512->GetCompletedGold();
                    pSVar21->p4<unsigned int>(iVar5);
                    pSVar21 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                    iVar5 = field_54504->GetCompletedGold();
                    pSVar21->p4<unsigned int>(iVar5);
                    pSVar21 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                    iVar5 = field_54464->GetCompletedGold();
                    pSVar21->p4<unsigned int>(iVar5);
                    pSVar21 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                    iVar5 = field_54480->GetCompletedGold();
                    pSVar21->p4<unsigned int>(iVar5);
                    pSVar22 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                    iVar5 = field_54416->GetCompletedGold();
                    pSVar22->p4<unsigned int>(iVar5);
                    pPVar23 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)ShuffledPacketFactory::p2_alt2();
                    uVar8 = field_54536->GetCompletedGold();
                    pPVar23->p4<int>((unsigned long)uVar8);
                    pSVar24 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                    iVar5 = m_pJagFx->GetCompletedGold();
                    pSVar24->p4<unsigned int>(iVar5);
                    pPVar23 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)ShuffledPacketFactory::p2_alt2();
                    uVar8 = field_54392->GetCompletedGold();
                    pPVar23->p4<int>((unsigned long)uVar8);
                    pSVar21 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                    iVar5 = field_54544->GetCompletedGold();
                    pSVar21->p4<unsigned int>(iVar5);
                    pSVar21 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                    pSVar21->p4<unsigned int>(0);
                    pSVar22 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                    iVar5 = field_54520->GetCompletedGold();
                    pSVar22->p4<unsigned int>(iVar5);
                    pSVar21 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                    iVar5 = field_54496->GetCompletedGold();
                    pSVar21->p4<unsigned int>(iVar5);
                    pSVar24 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                    iVar5 = field_54472->GetCompletedGold();
                    pSVar24->p4<unsigned int>(iVar5);
                    pSVar21 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                    iVar5 = field_54408->GetCompletedGold();
                    pSVar21->p4<unsigned int>(iVar5);
                    pSVar22 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                    iVar5 = field_54400->GetCompletedGold();
                    pSVar22->p4<unsigned int>(iVar5);
                    pSVar24 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                    iVar5 = m_pMidi->GetCompletedGold();
                    pSVar24->p4<unsigned int>(iVar5);
                    pPVar23 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)ShuffledPacketFactory::p2_alt2();
                    uVar8 = field_54528->GetCompletedGold();
                    pPVar23->p4<int>((unsigned long)uVar8);
                    pSVar24 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                    iVar5 = field_54448->GetCompletedGold();
                    pSVar24->p4<unsigned int>(iVar5);
                    pSVar22 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                    iVar5 = m_pSprites->GetCompletedGold();
                    pSVar22->p4<unsigned int>(iVar5);
                    pPVar23 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)ShuffledPacketFactory::p2_alt2();
                    uVar8 = m_pClientScripts->GetCompletedGold();
                    pPVar23->p4<int>((unsigned long)uVar8);
                    lVar9 = local_168.operator->();
                    uVar19 = superPacket->size();
                    superPacket->tinyKeyEncrypt(*((lVar9 + 432)), local_1c8._40_8_, uVar19);
                    superPacket->pSize2(superPacket->size() - local_1c8._32_2_);
                    lVar9 = local_168.operator->();
                    (*((lVar9 + 48))) = *local_160;
                    pSVar11 = (ServerConnection*)(*serverConnection).operator->();
                    pSVar11->BeginAsyncConnectionWork(local_168);
                    break;
                default:
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    546, "Unexpected login state (%d)");
                case 5:
                    pSVar11 = (ServerConnection*)(*serverConnection).operator->();
                    iVar5 = pSVar11->GetConnectionState();
                    if (iVar5 != 2) {
                        LogAssert("m_gameCon->GetConnectionState() == ConnectionState::CONNECTING_IDLE",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "client_network.cpp",
                                  524, nullptr);
                    }
                    pLVar13 = GetLoginManager();
                    plVar15 = (long*)pLVar13->GetAuthWrapper();
                    lVar9 = local_168.operator->();
                    if (*(char*)(lVar9 + 41) != '\0') {
                        pLVar13 = (LoginManager*)field_2506376.operator->();
                        cVar3 = pLVar13->IsOneTimeLoginTokenRequested();
                        if (!cVar3) {
                            LogAssert("m_loginManager->IsOneTimeLoginTokenRequested()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                      "osclient/client_network.cpp",
                                      529, nullptr);
                        }
                        if (plVar15 == nullptr) {
                            LogAssert("authLibWrapper != nullptr",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                      "osclient/client_network.cpp",
                                      530, nullptr);
                        }
                        lVar9 = local_168.operator->();
                        (**(void (**)(...))(*plVar15 + 32))(plVar15, lVar9 + 136, lVar9 + 168, lVar9 + 200,
                                                            lVar9 + 232);
                    }
                    pLVar13 = (LoginManager*)field_2506376.operator->();
                    iVar5 = pLVar13->GetAuthenticatorUserHash();
                    lVar9 = local_168.operator->();
                    local_1e8 = eastl::string(*((lVar9 + 264)));
                    TitleScreen::SetLoginCredentials(iVar5, &local_1e8);
                    if (plVar15 != nullptr) {
                        lVar9 = local_168.operator->();
                        (**(void (**)(...))(*plVar15 + 216))(plVar15, *(uint64_t*)(lVar9 + 424));
                    }
                    pSVar11 = (ServerConnection*)(*serverConnection).operator->();
                    pSVar11->BeginAsyncConnectionWork(local_168);
                    break;
                case 7:
                    field_55040 = puVar16[33];
                    lVar9 = core::SafeTime::CurrentTimeMillis();
                    field_55032 = lVar9;
                    local_198 = eastl::to_string(field_55040 / 60);
                    *local_160 + local_198;
                    TitleScreen::LoginMes(*((eastl::string*)&constants::text::loginhop_a),
                                          *((eastl::string*)&constants::text::loginhop_b), *local_160);
                    pSVar11 = (ServerConnection*)(*serverConnection).operator->();
                    iVar5 = pSVar11->GetConnectionState();
                    if (iVar5 != 0) {
                        LogAssert("m_gameCon->GetConnectionState() == ConnectionState::DISCONNECTED",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "client_network.cpp",
                                  401, nullptr);
                    }
                    break;
                case 12:
                    pSVar11 = (ServerConnection*)(*serverConnection).operator->();
                    iVar5 = pSVar11->GetConnectionState();
                    if (iVar5 != 0) {
                        LogAssert("m_gameCon->GetConnectionState() == ConnectionState::DISCONNECTED",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "client_network.cpp",
                                  480, nullptr);
                    }
                    lVar9 = local_168.operator->();
                    this_05 = (array<eastl::string, 3ul>*)(lVar9 + 296);
                    str1 = (eastl::string*)(*this_05)[0];
                    str2 = (eastl::string*)(*this_05)[1];
                    str3 = (eastl::string*)(*this_05)[2];
                    TitleScreen::LoginMes(*str1, *str2, *str3);
                    SetMainState(10);
                    pLVar13 = (LoginManager*)field_2506376.operator->();
                    cVar3 = pLVar13->IsRefreshTokenAvailable();
                    if (cVar3) {
                        cVar3 = TitleScreen::HasLoginMessage();
                        if (!cVar3) {
                            pLVar13 = GetLoginManager();
                            pLVar13->ResetLoginCredentials();
                            pLVar13 = GetLoginManager();
                            pLVar13->InvalidateRefreshToken();
                            TitleScreen::MoveToInitialScreen(true, true);
                        } else {
                            TitleScreen::m_loginscreen = 9;
                        }
                    }
                    break;
                case 16:
                    pSVar11 = (ServerConnection*)(*serverConnection).operator->();
                    iVar5 = pSVar11->GetConnectionState();
                    if (iVar5 != 3) {
                        LogAssert("m_gameCon->GetConnectionState() == ConnectionState::CONNECTED",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "client_network.cpp",
                                  407, nullptr);
                    }
                    lVar9 = local_168.operator->();
                    if (*(char*)(lVar9 + 392) != '\0') {
                        pLVar13 = (LoginManager*)field_2506376.operator->();
                        iVar5 = pLVar13->GetAuthenticatorUserHash();
                        if (iVar5 != 0) {
                            pTVar17 = (TotpPassCodes*)field_8392.operator->();
                            lVar9 = local_168.operator->();
                            pTVar17->PutTotpPassCode(iVar5, *(int*)(lVar9 + 396));
                        }
                    }
                    cVar3 = field_19104;
                    this_03 = (DeviceOptions*)field_8376.operator->();
                    if (!cVar3) {
                        new (local_160) eastl::fixed_string<char, 256>("");
                        this_03->SetCachedUserName(*local_160);
                    } else {
                        str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        new (local_160) eastl::fixed_string<char, 256>(str);
                        this_03->SetCachedUserName(*local_160);
                    }
                case 17:
                    pSVar11 = (ServerConnection*)(*serverConnection).operator->();
                    iVar5 = pSVar11->GetConnectionState();
                    if (iVar5 != 3) {
                        LogAssert("m_gameCon->GetConnectionState() == ConnectionState::CONNECTED",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "client_network.cpp",
                                  470, nullptr);
                    }
                    field_1104120.MarkReconnectComplete();
                    ReconnectDone();
                    lVar9 = local_168.operator->();
                    ReceivePlayerPositions::GetAbsolutePlayerPositions(*((lVar9 + 456)));
                    break;
                case 18:
                    pSVar11 = (ServerConnection*)(*serverConnection).operator->();
                    iVar5 = pSVar11->GetConnectionState();
                    if (iVar5 != 0) {
                        LogAssert("m_gameCon->GetConnectionState() == ConnectionState::DISCONNECTED",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "client_network.cpp",
                                  517, nullptr);
                    }
                    lVar9 = local_168.operator->();
                    LoginError(*(int*)(lVar9 + 128));
                    break;
                case 19:
                    pSVar11 = (ServerConnection*)(*serverConnection).operator->();
                    iVar5 = pSVar11->GetConnectionState();
                    if (iVar5 != 2) {
                        LogAssert("m_gameCon->GetConnectionState() == ConnectionState::CONNECTING_IDLE",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "client_network.cpp",
                                  507, nullptr);
                    }
                    SetMainState(10);
                    TitleScreen::SwitchToPendingTransactions();
                }
            } else {
                lVar9 = core::SafeTime::CurrentTimeMillis();
                if (40000 < lVar9 - field_55032) {
                    field_55032 = lVar9;
                }
            }
            goto LAB_1000cd4f6;
        }
        if (iVar5 != 0)
            goto LAB_1000cd4f6;
        if (0 < field_55040) {
            field_55040 = field_55040 - 1;
            goto LAB_1000cd4f6;
        }
        uint8_t* this_01 = &field_2506376;
        pLVar13 = (LoginManager*)(*this_01).operator->();
        local_1c8._0_1_ = pLVar13->IsOneTimeLoginTokenRequested();
        uint8_t* loginState = &field_54272;
        if (loginState == in_RSI) {
            new (local_160) eastl::string(field_54224);
            local_160->append_sprintf(":%d", (unsigned long)field_54256);
            local_178.field_0._0_1_ = field_8448 == 40;
            local_198 =
                std::make_unique<LoginState, eastl::string&, bool, bool const&>(*local_160, local_178, local_1c8);
            *loginState = local_198;
        }
        pLVar13 = (LoginManager*)(*this_01).operator->();
        cVar3 = pLVar13->IsGameTokenLogin();
        if (!cVar3) {
        LAB_1000cd4e3:
            pSVar11 = (ServerConnection*)(*serverConnection).operator->();
            pSVar11->BeginAsyncConnectionWork(*loginState);
        } else {
            pLVar13 = (LoginManager*)(*this_01).operator->();
            lVar9 = pLVar13->GetAuthWrapper();
            piVar14 = (int*)(*loginState).operator->();
            if (*piVar14 != 14) {
                if (*piVar14 != 0) {
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    162, "Unhandled login step pre-connection: %d ");
                }
                if (lVar9 == 0) {
                    LogAssert("authWrapper != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                              "client_network.cpp",
                              121, nullptr);
                }
                pLVar13 = (LoginManager*)(*this_01).operator->();
                plVar15 = (long*)pLVar13->GetAuthWrapper();
                (**(void (**)(...))(*plVar15 + 40))(plVar15);
                puVar16 = (uint32_t*)(*loginState).operator->();
                *puVar16 = 14;
                goto LAB_1000cd4f6;
            }
            pLVar13 = (LoginManager*)(*this_01).operator->();
            plVar15 = (long*)pLVar13->GetAuthWrapper();
            iVar5 = ((GameToken*)(**(void (**)(...))(*plVar15 + 48))(plVar15))->GetStatus();
            if (iVar5 < 1401) {
                if (iVar5 == -3)
                    goto LAB_1000cd4f6;
                if (iVar5 == 0) {
                    puVar16 = (uint32_t*)(*loginState).operator->();
                    *puVar16 = 0;
                    goto LAB_1000cd4e3;
                }
            } else {
                if ((iVar5 == 1401) || (iVar5 == 1404)) {
                    LoginError(63);
                    goto LAB_1000cd4f6;
                }
                if (iVar5 == 1407) {
                    TitleScreen::SwitchToPendingTransactions();
                    goto LAB_1000cd4f6;
                }
            }
            LoginError(65);
        }
    LAB_1000cd4f6:
    }

    // 0x1000d1ec0
    void Client::MainRedraw(bool arg1, float arg2) {
        int arg4;
        NXTPixToolkit* pNVar2;
        bool bVar3;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        shared_ptr<ApplicationContext>* this_00;
        long lVar8;
        uint8_t* puVar9;
        uint64_t extraout_var;
        eastl::string* pbVar10;
        char* pcVar11;
        float* pfVar12;
        int* piVar13;
        unsigned long uVar14;
        eastl::string* pbVar15;
        eastl::string local_80;
        array<bool, 100ul>* local_60;
        array<int, 100ul>* local_58;
        array<int, 100ul>* local_50;
        array<int, 100ul>* local_48;
        array<int, 100ul>* local_40;
        int local_38;

        float local_34 = arg2;
        auto plVar6 = OSRenderCore_AudioThread::Instance();
        ((OSRenderCore_LogicThread_Common*)((long)plVar6 + *(long*)(*plVar6 - 24)))->SetUsingRSeven(m_usingRSeven);
        if (field_54785 != false) {
            this_thread::Sleep(100);
            pNVar2 = field_144;
            bVar3 = (bool)pNVar2->GetUIVisible();
            pNVar2->ShowUI(false);
            pNVar2->Set2DOnlyFrame();
            pNVar2->Render((int)pNVar2, 0);
            pNVar2->ShowUI(bVar3);
            return;
        }
        DrawDebugUI();
        if (arg1) {
            field_128 = 0;
        }
        field_2508656 = local_34;
        javapal::GameShell::m_lastGameLoopTimeMillis = core::SafeTime::CurrentTimeMillis();
        CheckToQueueMutedAudio();
        midiPlayerMainThread =
            (shared_ptr<midi2::MidiPlayerMainThread>*)std::array<shared_ptr<midi2::MidiPlayerMainThread>, 3ul>::begin();
        shared_ptr<midi2::MidiPlayerMainThread>* psVar7 =
            (shared_ptr<midi2::MidiPlayerMainThread>*)std::array<shared_ptr<midi2::MidiPlayerMainThread>, 3ul>::end();
        for (; midiPlayerMainThread != psVar7; midiPlayerMainThread = midiPlayerMainThread + 16) {
            bVar3 = *midiPlayerMainThread != nullptr;
            if (bVar3) {
                plVar6 = (long*)(*midiPlayerMainThread).operator->();
                this_00 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)this)(this);
                ((ShareLightBuffer*)(*this_00).operator->())->IsPrepared();
                (**(void (**)(...))(*plVar6 + 72))(plVar6);
            }
        }
        unsigned int uVar1 = field_8448;
        if (((((int)uVar1 < 11) || (uVar1 == 20)) || (uVar1 == 30)) &&
            ((field_52448 != 0 && (lVar8 = core::SafeTime::CurrentTimeMillis(), field_52448 < lVar8)))) {
            OnWindowModeChanged();
        }
        if (arg1) {
            uVar14 = 0;
            do {
                puVar9 = (uint8_t*)field_2506576[uVar14];
                *puVar9 = 1;
                uVar14 = uVar14 + 1;
            } while (uVar14 != 100);
        }
        uint8_t uVar4 = field_144->GetPix2D();
        uVar1 = field_8448;
        if (((int)uVar1 < 21) || (uVar1 == 1000)) {
            TitleScreen::Draw(field_1104240, field_1104208, field_1104224, false,
                              *((Pix2D*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar4)));
            goto switchD_1000d20aa_caseD_1a;
        }
        switch (uVar1) {
        case 25:
            field_144->Set2DOnlyFrame();
            local_80 = eastl::string();
            if (field_53252 == 2) {
                if (field_53248 < field_53244) {
                    field_53248 = field_53244;
                }
                pbVar10 = (eastl::string*)local_80.append((eastl::string*)&constants::text::loading);
                pbVar10 = (eastl::string*)pbVar10->append(StringConstants::TAG_BREAK);
                pbVar10 = (eastl::string*)pbVar10->append(StringConstants::OPEN_BRACKET);
                pbVar10 = (eastl::string*)pbVar10->append_sprintf(
                    "%i%%", (unsigned long)(((field_53248 - field_53244) * 50) / field_53248 + 50));
                pbVar15 = (eastl::string*)pbVar10->append(StringConstants::CLOSE_BRACKET);
                MessageBox(*pbVar15, false);
            } else if (field_53252 == 1) {
                if (field_53240 < (int)field_53236) {
                    field_53240 = field_53236;
                }
                pbVar10 = (eastl::string*)local_80.append((eastl::string*)&constants::text::loading);
                pbVar10 = (eastl::string*)pbVar10->append(StringConstants::TAG_BREAK);
                pbVar10 = (eastl::string*)pbVar10->append(StringConstants::OPEN_BRACKET);
                pbVar10 = (eastl::string*)pbVar10->append_sprintf(
                    "%i%%", (long)((field_53240 - field_53236) * 50) / (long)field_53240 & 4294967295);
                pbVar15 = (eastl::string*)pbVar10->append(StringConstants::CLOSE_BRACKET);
                MessageBox(*pbVar15, false);
            } else {
                MessageBox(*((eastl::string*)&constants::text::loading), false);
            }
            break;
        default:
            goto switchD_1000d20aa_caseD_1a;
        case 30:
            GameDraw();
            goto switchD_1000d20aa_caseD_1a;
        case 40:
            field_144->Set2DOnlyFrame();
            local_80 = eastl::string();
            pbVar10 = (eastl::string*)local_80.append((eastl::string*)&constants::text::conlost);
            pbVar10 = (eastl::string*)pbVar10->append(StringConstants::TAG_BREAK);
            pbVar15 = (eastl::string*)pbVar10->append((eastl::string*)&constants::text::attempt_to_reestablish);
            MessageBox(*pbVar15, false);
            break;
        case 45:
            field_144->Set2DOnlyFrame();
            pbVar15 = (eastl::string*)&constants::text::pleasewait;
            goto LAB_1000d221d;
        case 50:
            field_144->Set2DOnlyFrame();
            pbVar15 = (eastl::string*)&constants::text::world_transfer_pending;
        LAB_1000d221d:
            MessageBox(*pbVar15, false);
            goto switchD_1000d20aa_caseD_1a;
        }
    switchD_1000d20aa_caseD_1a:
        if (((DeviceOptions*)field_8376.operator->())->GetDisplayBuildInfo() != '\0') {
            DrawBuildInfo();
        }
        ((OSClientConsole*)field_7306800.operator->())->Draw();
        if ((((field_8448 == 30) && (field_2508476 == 0)) && (!arg1)) &&
            ((field_52456 == 0 && (0 < (int)field_2506568)))) {
            local_60 = (array<bool, 100ul>*)&field_2506676;
            local_58 = (array<int, 100ul>*)&field_2506876;
            local_50 = (array<int, 100ul>*)&field_2507276;
            local_48 = (array<int, 100ul>*)&field_2507676;
            local_40 = (array<int, 100ul>*)&field_2508076;
            uVar14 = 0;
            do {
                pcVar11 = (char*)(*local_60)[uVar14];
                if (*pcVar11 != '\0') {
                    pNVar2 = field_144;
                    pfVar12 = (float*)(*local_58)[uVar14];
                    local_34 = *pfVar12;
                    piVar13 = (int*)(*local_50)[uVar14];
                    local_38 = *piVar13;
                    piVar13 = (int*)(*local_48)[uVar14];
                    arg4 = *piVar13;
                    (*local_40)[uVar14];
                    pNVar2->Render((int)pNVar2, (int)local_34, local_38, arg4);
                    *pcVar11 = '\0';
                }
                uVar14 = uVar14 + 1;
            } while ((long)uVar14 < (long)(int)field_2506568);
        }
        if (field_8448 == 1000) {
            ShowError();
            uVar1 = field_2506568;
            if (0 < (int)uVar1) {
                uVar14 = 0;
                do {
                    puVar9 = &field_2506676[uVar14];
                    *puVar9 = 0;
                    uVar14 = uVar14 + 1;
                } while (uVar1 != uVar14);
            }
        } else {
            field_144->Render((int)field_144, 0);
            uVar1 = field_2506568;
            if (0 < (int)uVar1) {
                uVar14 = 0;
                do {
                    puVar9 = &field_2506676[uVar14];
                    *puVar9 = 0;
                    uVar14 = uVar14 + 1;
                } while (uVar1 != uVar14);
            }
        }
        if (m_pWorldmap != nullptr) {
            worldmap::Worldmap::Service();
        }
        if (field_53257 != '\0') {
            RebuildMap();
        }
    }

    // 0x1000d2560
    void Client::DrawDebugUI() {
        uint64_t extraout_var;

        GraphicsApp* this_01 = field_152;
        auto this_00 = this_01->GetDefaultRenderContext();
        auto pDVar4 = this_01->Instance();
        int iVar2 = this_00->GetBackBufferWidth();
        int iVar3 = this_00->GetBackBufferHeight();
        pDVar4->MainDraw(nullptr, iVar2, iVar3);
        pDVar4 = (DebugUIManager*)pDVar4->Instance();
        float local_34 = (float)FrameTime::GetFrameDelta();
        auto pfVar5 = std::max<float>(local_34, 1.1754944e-38);
        float local_2c = *pfVar5;
        iVar2 = this_00->GetBackBufferWidth();
        iVar3 = this_00->GetBackBufferHeight();
        uint8_t uVar1 = field_152->GetWindow();
        auto local_48 = ((Window*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1))->GetSafeAreaInsets();
        pDVar4->NotifyFrameStart(local_2c, iVar2, iVar3, local_48);
    }

    // 0x1000d2630
    void Client::CheckToQueueMutedAudio() {
        uint8_t bVar2;
        uint8_t uVar3;
        long* plVar4;
        shared_ptr<ApplicationContext>* psVar5;
        ShareLightBuffer* pSVar6;
        void* in_RSI;

        if (&field_2508736 != in_RSI) {
            plVar4 = (long*)field_2508736.operator->();
            psVar5 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)this)(this);
            pSVar6 = (ShareLightBuffer*)(*psVar5).operator->();
            bVar2 = pSVar6->IsPrepared();
            in_RSI = (void*)(unsigned long)bVar2;
            (**(void (**)(...))(*plVar4 + 16))(plVar4);
        }
        if (&field_2508744 != in_RSI) {
            plVar4 = (long*)field_2508744.operator->();
            psVar5 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)this)(this);
            pSVar6 = (ShareLightBuffer*)(*psVar5).operator->();
            uVar3 = pSVar6->IsPrepared();
            (**(void (**)(...))(*plVar4 + 16))(plVar4, uVar3);
        }
    }

    // 0x1000d6b30
    void Client::MessageBox(const eastl::string& str, bool arg2) {
        uint8_t* this_00;
        uint8_t uVar1;
        unsigned int uVar2;
        int iVar3;
        unsigned int* puVar4;
        PixfontGeneric* pPVar5;
        uint64_t extraout_var;
        Pix2D* this_02;
        uint64_t in_register_00000011;
        int arg1;
        int arg2_00;
        int arg3;
        ReturnValue local_80;
        shared_ptr<jstring::PixfontGeneric>* local_68;
        unsigned long local_60;
        unsigned long local_50;
        unsigned long local_48;
        uint32_t local_40;
        int local_3c;
        int local_38;
        int local_34;

        if (field_19192 != '\0') {
            local_40 = (uint32_t)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2);
            local_80 = GetUISafeArea();
            puVar4 = (unsigned int*)local_80.SSOBeginPtr();
            local_50 = (unsigned long)*puVar4;
            local_38 = *puVar4 + 4;
            puVar4 = (unsigned int*)local_80.y();
            local_60 = (unsigned long)*puVar4;
            local_3c = *puVar4 + 4;
            this_00 = &field_1104224;
            local_68 = (shared_ptr<jstring::PixfontGeneric>*)this_00;
            pPVar5 = (PixfontGeneric*)(*this_00).operator->();
            uVar2 = pPVar5->PredictWidthMultiline(str, 250);
            local_48 = (unsigned long)uVar2;
            pPVar5 = (PixfontGeneric*)(*this_00).operator->();
            iVar3 = pPVar5->PredictLinesMultiline(str, 250);
            local_34 = iVar3 * 13;
            uVar1 = field_144->GetPix2D();
            this_02 = (Pix2D*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1);
            arg3 = uVar2 + 8;
            iVar3 = iVar3 * 13 + 8;
            arg1 = (int)local_50;
            arg2_00 = (int)local_60;
            (**(void (**)(...))(this_02->field_0 + 32))(this_02, local_50 & 4294967295, local_60 & 4294967295, arg3,
                                                        iVar3, 0);
            this_02->DrawRect(arg1, arg2_00, arg3, iVar3, 16777215);
            pPVar5 = (PixfontGeneric*)(*local_68).operator->();
            pPVar5->DrawStringMultiline(str, local_38, local_3c, (int)local_48, local_34, 16777215, -1, 1, 1, 0,
                                        *this_02);
            DirtyArea((int)local_50, arg2_00, arg3, iVar3);
            if ((char)local_40 == '\0') {
                BlitArea(local_38, local_3c, (int)local_48, local_34);
            } else {
                field_144->Set2DOnlyFrame();
                field_144->Render((int)field_144, 0);
                DrawDebugUI();
            }
        }
    }

    // 0x1000d6ce0
    void Client::GameDraw() {
        char cVar3;
        int iVar4;
        int iVar5;
        uint64_t extraout_var;
        char* pcVar6;
        char* pcVar7;
        uint8_t* puVar8;
        unsigned long long uVar9;
        uint64_t extraout_var_00;
        unsigned long arg1;
        CoordMapSquare local_40;

        field_144->PrepareRender();
        uint8_t uVar2 = field_144->GetPix2D();
        Pix2D* this_01 = (Pix2D*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2);
        (**(void (**)(...))(this_01->field_0 + 8))();
        SetupInterfaceRenderer();
        if (field_53216 != -1) {
            AnimateInterface(field_53216);
        }
        unsigned int uVar1 = field_2506568;
        if (0 < (int)uVar1) {
            arg1 = 0;
            do {
                pcVar7 = &field_2506576[arg1];
                if (*pcVar7 != '\0') {
                    puVar8 = (uint8_t*)field_2506676[arg1];
                    *puVar8 = 1;
                }
                cVar3 = *pcVar7;
                pcVar6 = &field_2506776[arg1];
                *pcVar6 = cVar3;
                *pcVar7 = '\0';
                arg1 = arg1 + 1;
            } while (uVar1 != arg1);
        }
        field_2506572 = field_8488;
        field_2505044 = 18446744073709551615;
        if (field_53216 != -1) {
            field_2506568 = 0;
            uVar9 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
            local_40.m_x = ((WorldmapAreaMetadata*)field_144->GetScreen())->GetMinMapX();
            iVar4 = local_40.GetX();
            local_40._8_4_ = ((NXTPixScreen*)field_144->GetScreen())->GetUIHeight();
            iVar5 = local_40.field_8.GetX();
            DrawInterface(field_53216, 0, 0, iVar4, iVar5, 0, 0, -1);
            field_52936->AddSample(SystemTimer::GetTimeNS<std::chrono::steady_clock>() - uVar9);
        }
        this_01->ResetClipping();
        Minimenu* this_00 = field_52344;
        uVar2 = field_144->GetPix2D();
        this_00->DrawFeedback(*((Pix2D*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2)));
        cVar3 = field_52344->IsOpen();
        if (cVar3) {
            field_52344->Draw(*this_01);
        }
        iVar4 = field_51984;
        long lVar11 = field_52016.operator->();
        iVar5 = *(int*)(lVar11 + 24);
        lVar11 = field_52016.operator->();
        bgsound::DoMix(iVar4, iVar5, *(int*)(lVar11 + 28), field_1115692);
        field_1115692 = 0;
    }

    // 0x1000e8350
    unsigned long Client::TcpIn(ServerConnection& serverConnection) {
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_00;
        TextureAtlasReference* this_01;
        bool cVar1;
        Easing EVar2;
        bool bVar3;
        uint8_t bVar5;
        uint8_t bVar7;
        unsigned short uVar8;
        short sVar9;
        short sVar10;
        uint16_t uVar11;
        int iVar12;
        unsigned int uVar13;
        unsigned int uVar15;
        int iVar16;
        unsigned int uVar17;
        unsigned int uVar18;
        int iVar19;
        unsigned int uVar20;
        Logger* pLVar21;
        ServerConnection* pSVar22;
        Isaac* isaac;
        uint32_t* puVar23;
        unsigned long uVar24;
        uint8_t* puVar25;
        ShuffledPacket3* pSVar26;
        ShuffledPacket4* pSVar27;
        long lVar28;
        __17* p_Var29;
        shared_ptr<rs2lib::social::ClanChannel>* psVar30;
        shared_ptr<rs2lib::IfType>* psVar31;
        IfType* pIVar32;
        int* piVar33;
        uint64_t uVar34;
        ClientNpc* this_04;
        ActiveOffersReply* this_05;
        uint8_t* puVar35;
        ClientProj* this_09;
        Minimap* this_10;
        unique_ptr<rs2lib::StockPlayerOffer>* puVar36;
        StockPlayerOffer* pSVar37;
        ReturnValue RVar38;
        HookArg* pHVar39;
        shared_ptr<rs2lib::social::ClanSettings>* psVar40;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* pPVar41;
        ShuffledPacket2* pSVar42;
        ClientPlayer* clientPlayer;
        shared_ptr<midi2::MidiPlayerMainThread>* psVar43;
        shared_ptr<ApplicationContext>* this_11;
        long* plVar44;
        int* piVar45;
        shared_ptr<dash3d::GroundDecor>* psVar46;
        char* pcVar48;
        shared_ptr<midi2::MidiPlayerMainThread>* psVar49;
        Array<int>* pAVar50;
        long lVar51;
        shared_ptr<ClientPlayer>* clientPlayer_00;
        ClientEntity* pCVar52;
        SuperShuffledPacketFactory* pSVar53;
        unsigned long* puVar54;
        FriendSystem* pFVar55;
        WordPack* pWVar56;
        ClanChannelDelta* this_12;
        ClanSettingsDelta* this_14;
        ClanSettings* clanSettings;
        long long* plVar57;
        uint64_t uVar58;
        ClanChannel* pCVar59;
        Array<shared_ptr<rs2lib::IfType>>* pAVar61;
        world* pwVar62;
        unsigned int* puVar63;
        array<int, 99ul>* this_15;
        array<int, 32ul>* paVar64;
        unsigned long uVar65;
        LocShapeID locShapeID;
        shared_ptr<RSevenDebugPresetProvider>* this_16;
        eastl::string* this_17;
        uint8_t* puVar67;
        int arg2;
        ReturnValue RVar68;
        int arg1;
        unsigned long unaff_R15;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar69;
        double dVar71;
        ReturnValue aRStackY_918[128];
        unsigned long in_stack_fffffffffffffae8;
        unsigned long in_stack_fffffffffffffaf0;
        uint32_t uVar73;
        unsigned long in_stack_fffffffffffffaf8;
        uint64_t in_stack_fffffffffffffb00;
        uint64_t in_stack_fffffffffffffb08;
        uint64_t in_stack_fffffffffffffb10;
        uint8_t local_4c0[8];
        int local_484;
        uint8_t local_480[8];
        uint8_t local_478[80];
        eastl::string local_428;
        Array<int>* local_130;
        ReturnValue local_128;
        ReturnValue local_110;
        SuperShuffledPacketFactory local_f0;
        uint8_t local_cc[12];
        __17* local_c0;
        SuperShuffledPacketFactory local_b8;
        unsigned int local_94;
        unsigned int local_90;
        unsigned int local_8c;
        HookArg local_80;

        uint32_t uVar14 = (uint32_t)((unsigned long)in_stack_fffffffffffffb08 >> 32);
        uint32_t uVar74 = (uint32_t)((unsigned long)in_stack_fffffffffffffb10 >> 32);
        Client* local_88 = this;
        new (local_4c0) shared::ClientMessage();
        char cVar4 = serverConnection.GetNextServerMessage(*local_4c0);
        if (!cVar4) {
            iVar12 = serverConnection.GetConnectionState();
            if (iVar12 != 3) {
                LostCon(local_88);
            }
            goto LAB_1000e84af;
        }
        local_88->field_1104120.MarkServerDataSeen();
        uint32_t uVar72 = (uint32_t)(in_stack_fffffffffffffaf0 >> 32);
        if (local_88->field_54760 != '\0') {
            pLVar21 = logger::default_logger();
            uVar73 = local_4c0._0_4_;
            unaff_R15 = *(unsigned long*)(PTR_NAMES_100ee6b80 + (unsigned long)(unsigned int)local_4c0._0_4_ * 8);
            in_stack_fffffffffffffaf8 = ((local_4c0 + 8))->GetTextureAtlas();
            in_stack_fffffffffffffaf0 = (((uint64_t)uVar72 << 32) | (uint32_t)uVar73);
            in_stack_fffffffffffffae8 = unaff_R15;
            pLVar21->Log(
                false, 5,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_network.cpp",
                1159, "Got ptype: %s(%d), %zu", unaff_R15, in_stack_fffffffffffffaf0, in_stack_fffffffffffffaf8);
        }
        Client* pCVar66 = local_88;
        uint32_t uVar75 = (uint32_t)(in_stack_fffffffffffffaf8 >> 32);
        uint32_t uVar76 = (uint32_t)((unsigned long)in_stack_fffffffffffffb00 >> 32);
        uVar73 = (uint32_t)(in_stack_fffffffffffffaf0 >> 32);
        uVar72 = (uint32_t)(in_stack_fffffffffffffae8 >> 32);
        if (121 < (unsigned int)local_4c0._0_4_) {
            pLVar21 = logger::default_logger();
            pLVar21->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_network.cpp",
                4290, "Unrecognized packet type: %d", (((uint64_t)uVar72 << 32) | (uint32_t)local_4c0._0_4_));
            new (local_480) eastl::string((CtorSprintf*)"Unrecognized packet type: %d",
                                          (char*)(unsigned long)(unsigned int)local_4c0._0_4_);
            pcVar48 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            OldscapeClientError::ReportError(pcVar48, nullptr);
            psVar43 =
                (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((int64_t)(unaff_R15 >> 8)) << 8) | (uint8_t)1);
            Logout(local_88);
            goto LAB_1000e84b2;
        }
        Client* this_13 = (Client*)&local_88->field_54760;
        Client* pCVar47 = (Client*)(local_4c0 + 8);
        uint64_t uVar70 = (uint64_t)((unsigned long)this_13 >> 8);
        bool bVar6 = (uint8_t)pCVar47;
        ReturnValue* pRVar60 = (ReturnValue*)this_13;
        switch (local_4c0._0_4_) {
        case (BADTYPE)0:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            uVar8 = pSVar27->g2();
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            iVar12 = pSVar27->g3();
            uVar15 = 4294967295;
            if (uVar8 != 65535) {
                uVar15 = (unsigned int)uVar8;
            }
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            PlayJingle(local_88, uVar15, iVar12);
            break;
        case (BADTYPE)1:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            iVar12 = pSVar27->g4s();
            pSVar26 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            sVar9 = pSVar26->g2s();
            psVar31 = (shared_ptr<rs2lib::IfType>*)rs2lib::IfType::Get(iVar12);
            lVar28 = **psVar31;
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            if ((sVar9 == -1) || (*(int*)(lVar28 + 244) != (int)sVar9)) {
                *(int*)(lVar28 + 244) = (int)sVar9;
                *(uint64_t*)(lVar28 + 1992) = 0;
                ComponentUpdated(local_88, psVar31);
            }
            break;
        case (BADTYPE)2:
            bVar5 = pCVar47->g1();
            if (*(char*)this_13 != '\0') {
                pLVar21 = logger::default_logger();
                uVar34 = shared::PlayerFacingLogoutReason::getReason((unsigned int)bVar5);
                pLVar21->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             1228, "logout due to %s", uVar34);
            }
            LogoutWithReason(local_88, (unsigned int)bVar5);
            goto LAB_1000e84af;
        case (BADTYPE)3:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            cVar4 = pSVar42->g1s();
            pSVar26 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            bVar5 = pSVar26->g1();
            local_128[0]._0_4_ = (unsigned int)bVar5 << 2;
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar15 = pSVar42->g1s();
            pRVar60 = (ReturnValue*)(unsigned long)uVar15;
            pSVar26 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            uVar8 = pSVar26->g2();
            local_110[0]._0_4_ = (uint32_t)uVar8;
            pPVar41 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            local_f0[0].field_0._0_4_ = pPVar41->g3s();
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar18 = pSVar42->g2();
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar17 = pSVar42->g1();
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            uVar11 = pSVar27->g2();
            pSVar26 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            uVar13 = pSVar26->g3();
            local_80.m_argType = (uVar13 >> 4 & 7) + ((int)uVar13 >> 16);
            local_b8[0].field_0 = (sqlite3**)(((uint64_t)local_b8[0].field_0._4_4_ << 32) |
                                              (uint32_t)((uVar13 & 7) + (uVar13 >> 8 & 255)));
            pPVar41 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            bVar5 = pPVar41->g1();
            local_8c = (unsigned int)bVar5;
            pCVar47 = (Client*)ShuffledPacketFactory::p2_alt2();
            bVar5 = pCVar47->g1();
            pCVar66 = local_88;
            local_94 = (unsigned int)bVar5;
            if ((((int)local_80.m_argType < 104) && (-1 < (int)local_80.m_argType)) &&
                ((-1 < (int)(Easing)local_b8[0].field_0 &&
                  (((int)(Easing)local_b8[0].field_0 < 104 &&
                    (iVar12 = (int)cVar4 + local_80.m_argType, -1 < iVar12)))))) {
                uVar15 = (int)(char)uVar15 + (Easing)local_b8[0].field_0;
                pRVar60 = (ReturnValue*)(unsigned long)uVar15;
                if ((-1 < (int)uVar15) && (((iVar12 < 104 && ((int)uVar15 < 104)) && (local_110[0]._0_4_ != 65535)))) {
                    local_c0 = (__17*)(((uint64_t)local_c0._2_6_ << 16) | (uint16_t)uVar11);
                    uVar20 = local_80.m_argType << 7;
                    local_80._0_8_ = (((uint64_t)local_80._4_4_ << 32) | (uint32_t)uVar20) | 64;
                    uVar13 = (Easing)local_b8[0].field_0 << 7;
                    local_b8[0].field_0 =
                        (sqlite3**)((((uint64_t)local_b8[0].field_0._4_4_ << 32) | (uint32_t)uVar13) | 64);
                    iVar19 = GetAvH(pCVar47, uVar20 | 64, uVar13 | 64, local_88->field_51984);
                    uVar13 = (unsigned int)(unsigned short)local_c0;
                    piVar45 = &pCVar66->field_51984;
                    local_90 = iVar19 + (uVar17 & 255) * -4;
                    local_484 = pCVar66->field_8488;
                    local_cc._0_4_ = local_484 + uVar13;
                    local_484 = local_484 + (uVar18 & 65535);
                    make_shared<ClientProj, int&, int&, int&, int&, int, int, int, int&, int&, int&, int&>(
                        (int*)local_480, &local_110, piVar45, (int*)&local_80, &local_b8, (int*)((long)&local_b8 + 40),
                        (int*)local_cc, &local_484, (int*)((long)&local_b8 + 36), (int*)((long)&local_b8 + 44),
                        &local_f0);
                    pCVar66 = (Client*)local_480;
                    this_09 = (ClientProj*)(*pCVar66).operator->();
                    uVar18 = iVar12 * 128 | 64;
                    uVar15 = uVar15 * 128 | 64;
                    pRVar60 = (ReturnValue*)(unsigned long)uVar15;
                    iVar12 = GetAvH(pCVar66, uVar18, uVar15, *piVar45);
                    pCVar66 = local_88;
                    this_09->SetTarget(uVar18, uVar15, iVar12 - local_128[0]._0_4_, uVar13 + local_88->field_8488);
                    pCVar66->field_7164584.push_back(*local_480);
                }
            }
            goto switchD_1000ea3f5_default;
        case (BADTYPE)4:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pPVar41 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            bVar5 = pPVar41->g1();
            pCVar66 = local_88;
            local_88->field_53312 = (unsigned int)bVar5;
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            bVar5 = pSVar42->g1();
            *(unsigned int*)&pCVar66->field_53304 = (unsigned int)bVar5;
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            break;
        case (BADTYPE)5:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            uVar15 = pSVar27->g2();
            pPVar41 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            uVar18 = pPVar41->g2();
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            iVar12 = pSVar27->g4s();
            pPVar41 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            uVar17 = pPVar41->g2();
            psVar31 = (shared_ptr<rs2lib::IfType>*)rs2lib::IfType::Get(iVar12);
            lVar28 = **psVar31;
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((uint64_t)(uint32_t)(uVar18 >> 8)) << 8) |
                                                                 (uint8_t)1);
            if (((*(unsigned int*)(lVar28 + 260) != (uVar17 & 65535)) ||
                 (*(unsigned int*)(lVar28 + 264) != (uVar15 & 65535))) ||
                (*(unsigned int*)(lVar28 + 272) != (uVar18 & 65535))) {
                *(unsigned int*)(lVar28 + 260) = uVar17 & 65535;
                *(unsigned int*)(lVar28 + 264) = uVar15 & 65535;
                *(unsigned int*)(lVar28 + 272) = uVar18 & 65535;
                ComponentUpdated(local_88, psVar31);
            }
            break;
        case (BADTYPE)6:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pPVar41 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            uVar15 = pPVar41->g2();
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            iVar12 = pSVar42->g4();
            psVar31 = (shared_ptr<rs2lib::IfType>*)rs2lib::IfType::Get(iVar12);
            lVar28 = **psVar31;
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            if ((*(int*)(lVar28 + 228) != 6) || (*(unsigned int*)(lVar28 + 232) != (uVar15 & 65535))) {
                *(uint32_t*)(lVar28 + 228) = 6;
                *(unsigned int*)(lVar28 + 232) = uVar15 & 65535;
                ComponentUpdated(local_88, psVar31);
            }
            break;
        case (BADTYPE)7:
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            local_88->field_52528.reset();
            break;
        case (BADTYPE)8:
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            ZonePacket(local_88, 2, (SuperPacket*)pCVar47);
            break;
        case (BADTYPE)9:
            *(uint16_t*)&local_88->field_52996 = 256;
            local_88->field_52999 = '\x01';
            sVar9 = pCVar47->g2s();
            sVar10 = pCVar47->g2s();
            pCVar66 = local_88;
            local_80.m_argType = dash3d::world::ClampPitchAngle(local_88->field_53100 + (int)sVar10 & 2027);
            local_b8[0].field_0 = (sqlite3**)(((uint64_t)local_b8[0].field_0._4_4_ << 32) |
                                              (uint32_t)(pCVar66->field_53104 + (int)sVar9));
            uVar8 = ((local_4c0 + 8))->g2();
            local_f0[0].field_0._0_4_ = (unsigned int)uVar8;
            bVar5 = ((local_4c0 + 8))->g1();
            local_110[0]._0_4_ = (uint32_t)bVar5;
            if (*(char*)this_13 != '\0') {
                pLVar21 = logger::default_logger();
                pLVar21->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             3088, "cam_rotateby yaw:%d (target yaw:%d) pitch:%d (target pitch:%d) cycles:%d easing:%d",
                             (((uint64_t)uVar72 << 32) | (uint32_t)((int)sVar9)),
                             (((uint64_t)uVar73 << 32) | (uint32_t)((Easing)local_b8[0].field_0)),
                             (((uint64_t)uVar75 << 32) | (uint32_t)((int)sVar10)),
                             (((uint64_t)uVar76 << 32) | (uint32_t)local_80.m_argType),
                             (((uint64_t)uVar14 << 32) | (uint32_t)((unsigned int)local_f0[0].field_0)),
                             (((uint64_t)uVar74 << 32) | (uint32_t)local_110[0]._0_4_));
            }
            pCVar66 = local_88;
            *local_480 = std::make_unique<CinemaCameraRotationTween, int&, int const&, int const&,
                                          CinemaCameraTween::Easing const&>(local_88->field_53100, local_80, local_f0,
                                                                            local_110);
            this_13 = (Client*)local_480;
            pCVar66->field_53072 = *this_13;
            this_13->~unique_ptr();
            *local_480 =
                std::make_unique<CinemaCameraRotationTween, int&, int const&, int const&,
                                 CinemaCameraTween::Easing const&>(pCVar66->field_53104, local_b8, local_f0, local_110);
            goto LAB_1000ecfdb;
        case (BADTYPE)10:
            new (local_480) ErrorCapture(true);
            pFVar55 = (FriendSystem*)local_88->field_52768.operator->();
            iVar12 = pCVar47->GetTextureAtlas();
            pFVar55->ProcessFriendListUpdate(*pCVar47, iVar12, *local_480);
            cVar4 = local_480->IsRaised();
            if (cVar4) {
                local_480->second();
                pcVar48 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "client_network.cpp",
                                1335, pcVar48);
            }
            goto LAB_1000ed08d;
        case (BADTYPE)11:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar26 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            bVar5 = pSVar26->g1();
            pCVar66 = local_88;
            *(unsigned int*)&local_88->field_1115284 = (unsigned int)bVar5;
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            bVar5 = pSVar27->g1();
            *(unsigned int*)&pCVar66->field_1115288 = (unsigned int)bVar5;
            if (pCVar66->field_54760 != '\0') {
                pLVar21 = logger::default_logger();
                pLVar21->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             4099, "Full update for zone: %d,%d",
                             (((uint64_t)uVar72 << 32) | (uint32_t)(*(uint32_t*)&local_88->field_1115284)),
                             (((uint64_t)uVar73 << 32) | (uint32_t)(*(uint32_t*)&local_88->field_1115288)));
            }
            pCVar66 = local_88;
            p_Var29 = (__17*)(local_88->field_1120504 + (long)*(int*)&local_88->field_1115284 * 3328 + 56);
            lVar28 = (long)*(int*)&local_88->field_1115284;
            do {
                uVar65 = (unsigned long)*(int*)&pCVar66->field_1115288;
                lVar51 = uVar65 - 1;
                paVar64 = (array<int, 32ul>*)(uVar65 * 32 + (long)p_Var29);
                local_c0 = p_Var29;
                do {
                    cVar4 =
                        ((hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>,
                                    eastl::allocator,
                                    eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>>,
                                    eastl::equal_to<eastl::string>, eastl::hash<eastl::string>,
                                    eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                                    false, true, true>*)(paVar64 + (long)pCVar66->field_51984 * 346112))
                            ->empty();
                    iVar12 = (int)uVar65;
                    if (!cVar4) {
                        ((list<shared_ptr<ClientObj>>*)(paVar64 + (long)pCVar66->field_51984 * 346112))->clear();
                        ShowObject(pCVar66, (int)lVar28, iVar12);
                        RunUpdateObjStackTrigger(pCVar66, pCVar66->field_51984, (int)lVar28, iVar12);
                    }
                    lVar51 = lVar51 + 1;
                    uVar65 = (unsigned long)(iVar12 + 1);
                    paVar64 = paVar64 + 32;
                } while (lVar51 < (long)*(int*)&pCVar66->field_1115288 + 7);
                p_Var29 = local_c0 + 256;
                bVar6 = lVar28 < (long)*(int*)&pCVar66->field_1115284 + 7;
                lVar28 = lVar28 + 1;
            } while (bVar6);
            *local_480 = pCVar66->field_2505008.begin();
            pRVar60 = (ReturnValue*)&local_80;
            *pRVar60 = pCVar66->field_2505008.end();
            cVar4 = *local_480 != *pRVar60;
            if (cVar4) {
                do {
                    piVar45 = (int*)**local_480;
                    if ((*(int*)&local_88->field_1115284 <= piVar45[1]) &&
                        (piVar45[1] < *(int*)&local_88->field_1115284 + 8)) {
                        if ((*(int*)&local_88->field_1115288 <= piVar45[2]) &&
                            ((piVar45[2] < *(int*)&local_88->field_1115288 + 8 &&
                              (*piVar45 == local_88->field_51984)))) {
                            piVar45[13] = 0;
                        }
                    }
                    ++*local_480;
                    cVar4 = *local_480 != local_80;
                } while (cVar4);
            }
            goto switchD_1000ea3f5_default;
        case (BADTYPE)12:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar14 = pSVar42->g2s();
            pPVar41 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            iVar12 = pPVar41->g4();
            pPVar41 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            sVar9 = pPVar41->g2s();
            psVar31 = (shared_ptr<rs2lib::IfType>*)rs2lib::IfType::Get(iVar12);
            lVar28 = **psVar31;
            psVar43 =
                (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((uint64_t)(uint32_t)((unsigned int)uVar14 >> 8))
                                                            << 8) |
                                                           (uint8_t)1);
            if ((((*(int*)(lVar28 + 48) != (int)sVar9) || (*(int*)(lVar28 + 52) != (int)(short)uVar14)) ||
                 (*(int*)(lVar28 + 32) != 0)) ||
                (*(int*)(lVar28 + 36) != 0)) {
                *(int*)(lVar28 + 48) = (int)sVar9;
                *(int*)(lVar28 + 52) = (int)(short)uVar14;
                *(uint64_t*)(lVar28 + 32) = 0;
                ComponentUpdated(local_88, psVar31);
                InterfaceCalculateSizeAndPosComponent(local_88, psVar31);
                if (*(int*)(lVar28 + 12) == 0) {
                    pAVar61 = (Array<shared_ptr<rs2lib::IfType>>*)(*(
                        (Array<Array<shared_ptr<rs2lib::IfType>>>*)&rs2lib::IfType::m_list))[(long)(iVar12 >> 16)];
                    InterfaceCalculateSizeAndPosSubcomponents(local_88, pAVar61, psVar31, false);
                }
            }
            break;
        case (BADTYPE)13:
            this_10 = (Minimap*)local_88->field_8152.operator->();
            bVar5 = pCVar47->g1();
            this_10->SetToggle((unsigned int)bVar5);
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            break;
        case (BADTYPE)14:
            local_80.gStringCP1252ToUTF8<eastl::string>(bVar6);
            pvVar69 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pCVar47->g8();
            uVar11 = pCVar47->g2();
            uVar14 = pCVar47->g3();
            bVar5 = pCVar47->g1();
            p_Var29 = (__17*)constants::ChatCrownType::FromId((unsigned int)bVar5);
            puVar35 = &local_88->field_53352;
            uVar65 = 0;
            local_cc._4_8_ = pvVar69;
            local_c0 = p_Var29;
            do {
                puVar54 = (unsigned long*)(*puVar35)[uVar65];
                pCVar66 = local_88;
                if (*puVar54 == (unsigned long)(((uint64_t)uVar11 << 32) | (uint32_t)uVar14)) {
                    pCVar47 = (Client*)(((uint64_t)((int64_t)((unsigned long)p_Var29 >> 8)) << 8) | (uint8_t)1);
                    goto LAB_1000ed60e;
                }
                uVar65 = uVar65 + 1;
            } while (uVar65 != 100);
            pCVar47 = nullptr;
        LAB_1000ed60e:
            this_13 = pCVar47;
            if (local_c0->field_6 != '\0') {
                pFVar55 = (FriendSystem*)local_88->field_52768.operator->();
                new (local_480) rs2lib::social::DisplayName(local_80, pCVar66->field_54172);
                cVar4 = pFVar55->IsIgnored(*local_480);
                this_13 = (Client*)&DAT_00000001;
                if (!cVar4) {
                    this_13 = (Client*)((unsigned long)pCVar47 & 255);
                }
            }
            pCVar66 = local_88;
            if (((char)this_13 == '\0') && (local_88->field_52440 == 0)) {
                iVar12 = *(int*)&local_88->field_54152;
                puVar54 = (unsigned long*)(*puVar35)[(long)iVar12];
                *puVar54 = (unsigned long)(((uint64_t)uVar11 << 32) | (uint32_t)uVar14);
                *(int*)&pCVar66->field_54152 = (iVar12 + 1) % 100;
                local_128 = eastl::basic_string<char, BucketAllocatorEASTL>();
                pWVar56 = (WordPack*)pCVar66->field_54176.operator->();
                pWVar56->UnpackCP1252AsUTF8(local_128, *((local_4c0 + 8)));
                pcVar48 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar65 = local_128.size();
                *local_480 = jstring::PixfontGeneric::Escape(pcVar48, uVar65);
                p_Var29 = local_c0;
                uVar34 = local_cc._4_8_;
                core::stringtools::general::StringTools::ForceCapitalisationOfWords(*local_480);
                if (*(int*)p_Var29 == -1) {
                    local_b8 = core::stringtools::general::UserhashTools::ToScreenName(uVar34);
                    AddChat(local_88, 9, (eastl::string*)&local_80, (eastl::string*)local_480);
                    pSVar53 = &local_b8;
                } else {
                    local_f0 = StringConstants::TAG_IMG(*(int*)p_Var29);
                    local_b8 + local_f0;
                    local_110 = core::stringtools::general::UserhashTools::ToScreenName(uVar34);
                    AddChat(local_88, 9, &local_b8, (eastl::string*)local_480);
                    pSVar53 = &local_f0;
                }
                pSVar53->~basic_string();
                pRVar60 = &local_128;
            LAB_1000ef459:
                pRVar60->~basic_string();
                this_13 = pCVar66;
            }
            goto LAB_1000ef45e;
        case (BADTYPE)15:
            local_cc._4_8_ = this_13;
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar26 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            uVar15 = pSVar26->g2();
            pSVar26 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            iVar12 = pSVar26->g4();
            psVar31 = (shared_ptr<rs2lib::IfType>*)rs2lib::IfType::Get(iVar12);
            lVar28 = **psVar31;
            if (*(uint8_t*)local_cc._4_8_ != '\0') {
                pLVar21 = logger::default_logger();
                pLVar21->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             3274, "if_setmodel - com:%i m:%i", (((uint64_t)uVar72 << 32) | (uint32_t)iVar12),
                             (((uint64_t)uVar73 << 32) | (uint32_t)uVar15) & 18446744069414649855);
            }
            psVar43 =
                (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((uint64_t)(uint32_t)((unsigned int)iVar12 >> 8))
                                                            << 8) |
                                                           (uint8_t)1);
            if ((*(int*)(lVar28 + 228) != 1) || (*(unsigned int*)(lVar28 + 232) != (uVar15 & 65535))) {
                *(uint32_t*)(lVar28 + 228) = 1;
                *(unsigned int*)(lVar28 + 232) = uVar15 & 65535;
                ComponentUpdated(local_88, psVar31);
            }
            break;
        case (BADTYPE)16:
            cVar4 = pCVar47->g1();
            if (cVar4 == '\x01') {
                lVar28 = core::SafeTime::CurrentTimeMillis();
                lVar51 = pCVar47->g8();
                local_88->field_52856 = lVar28 - lVar51;
                this_05 = (ActiveOffersReply*)operator new(32);
                new (this_05) rs2lib::ActiveOffersReply(pCVar47, true);
                this_13 = (Client*)this_05;
            } else {
                this_05 = nullptr;
            }
            pCVar66 = local_88;
            local_88->field_52848.reset(this_05);
            *(int*)((long)&pCVar66->field_2506360 + 4) = pCVar66->field_2505808;
            psVar43 =
                (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((int64_t)((unsigned long)this_13 >> 8)) << 8) |
                                                           (uint8_t)1);
            break;
        case (BADTYPE)17:
            local_88->field_2506352 = local_88->field_2505808;
            cVar4 = pCVar47->g1s();
            make_shared<rs2lib::social::ClanSettingsDelta, core::SuperPacket&>(&local_b8, (SuperPacket*)pCVar47);
            local_f0 = shared_ptr();
            if (cVar4 < '\0') {
                local_f0 = local_88->field_52552;
            } else {
                psVar40 = &local_88->field_52568[(long)cVar4];
                local_f0 = *psVar40;
            }
            bVar6 = local_f0 == nullptr;
            if (bVar6) {
                RequestClanSettingsFull(local_88, (int)cVar4);
            } else {
                lVar28 = local_b8.operator->();
                iVar12 = *(int*)(lVar28 + 24);
                lVar28 = local_f0.operator->();
                if (*(int*)(lVar28 + 8) < iVar12) {
                    RequestClanSettingsFull(local_88, (int)cVar4);
                } else {
                    lVar28 = local_b8.operator->();
                    iVar12 = *(int*)(lVar28 + 24);
                    lVar28 = local_f0.operator->();
                    if (*(int*)(lVar28 + 8) <= iVar12) {
                        this_14 = (ClanSettingsDelta*)local_b8.operator->();
                        clanSettings = (ClanSettings*)*local_f0;
                        this_14->ApplyToClanSettings(*clanSettings);
                        if (*(char*)this_13 != '\0') {
                            pLVar21 = logger::default_logger();
                            pLVar21->Log(false, 5,
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                         "osclient/client_network.cpp",
                                         2797, "----------");
                            pLVar21 = logger::default_logger();
                            local_f0.operator->();
                            uVar34 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            pLVar21->Log(false, 5,
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                         "osclient/client_network.cpp",
                                         2798, "Clan Name: %s", uVar34);
                            uVar74 = (uint32_t)((unsigned long)uVar34 >> 32);
                            pLVar21 = logger::default_logger();
                            lVar28 = local_f0.operator->();
                            uVar14 = *(uint32_t*)(lVar28 + 232);
                            lVar28 = local_f0.operator->();
                            uVar58 = (((uint64_t)uVar73 << 32) | (uint32_t)(*(uint32_t*)(lVar28 + 236)));
                            uVar34 = (((uint64_t)uVar74 << 32) | (uint32_t)uVar14);
                            pLVar21->Log(false, 5,
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                         "osclient/client_network.cpp",
                                         2799, "currentOwnerSlot: %i replacementOwnerSlot: %i", uVar34, uVar58);
                            uVar14 = (uint32_t)((unsigned long)uVar34 >> 32);
                            uVar74 = (uint32_t)((unsigned long)uVar58 >> 32);
                            pLVar21 = logger::default_logger();
                            lVar28 = local_f0.operator->();
                            bVar5 = *(uint8_t*)(lVar28 + 56);
                            lVar28 = local_f0.operator->();
                            cVar4 = *(char*)(lVar28 + 57);
                            lVar28 = local_f0.operator->();
                            cVar1 = *(char*)(lVar28 + 58);
                            lVar28 = local_f0.operator->();
                            uVar34 = (((uint64_t)uVar75 << 32) | (uint32_t)((int)cVar1));
                            pLVar21->Log(false, 5,
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                         "osclient/client_network.cpp",
                                         2800, "allowNonMembers: %i rankTalk: %i rankKick: %i, rankLootShare: %i",
                                         (((uint64_t)uVar14 << 32) | (uint32_t)((unsigned int)bVar5)),
                                         (((uint64_t)uVar74 << 32) | (uint32_t)((int)cVar4)), uVar34,
                                         (((uint64_t)uVar76 << 32) | (uint32_t)((int)*(char*)(lVar28 + 59))));
                            pLVar21 = logger::default_logger();
                            pLVar21->Log(false, 5,
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                         "osclient/client_network.cpp",
                                         2801, "Members:");
                            this_13 = nullptr;
                            while (true) {
                                uVar14 = (uint32_t)((unsigned long)uVar34 >> 32);
                                lVar28 = local_f0.operator->();
                                if ((long)*(int*)(lVar28 + 64) <= (long)this_13)
                                    break;
                                pLVar21 = logger::default_logger();
                                lVar28 = local_f0.operator->();
                                cVar4 = ((lVar28 + 72))->empty();
                                puVar67 = &DAT_100e3aa9a;
                                local_88 = (Client*)(((uint64_t)local_88._1_7_ << 8) | (uint8_t)cVar4);
                                if (!cVar4) {
                                    lVar28 = local_f0.operator->();
                                    plVar57 = (long long*)(*((lVar28 + 72)))[(unsigned long)this_13];
                                    *local_480 = core::stringtools::general::UserhashTools::ToRawUsername(*plVar57);
                                    puVar67 = (uint8_t*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                }
                                lVar28 = local_f0.operator->();
                                (*((lVar28 + 280)))[(unsigned long)this_13];
                                uVar58 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                lVar28 = local_f0.operator->();
                                pcVar48 = (char*)(*((lVar28 + 104)))[(unsigned long)this_13];
                                uVar34 = (((uint64_t)uVar14 << 32) | (uint32_t)((int)*pcVar48));
                                pLVar21->Log(false, 5,
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                             "projects/osclient/client_network.cpp",
                                             2805, "%s - %s - rank: %i", puVar67, uVar58, uVar34);
                                if ((char)local_88 == '\0') {
                                }
                                this_13 = (Client*)((long)this_13 + 1);
                            }
                            pLVar21 = logger::default_logger();
                            pLVar21->Log(false, 5,
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                         "osclient/client_network.cpp",
                                         2808, "Banned:");
                            for (uVar65 = 0; lVar28 = local_f0.operator->(), (long)uVar65 < (long)*(int*)(lVar28 + 240);
                                 uVar65 = uVar65 + 1) {
                                pLVar21 = logger::default_logger();
                                lVar28 = local_f0.operator->();
                                uVar15 = ((lVar28 + 248))->empty();
                                this_13 = (Client*)(unsigned long)uVar15;
                                puVar67 = &DAT_100e3aa9a;
                                if ((char)uVar15 == '\0') {
                                    lVar28 = local_f0.operator->();
                                    plVar57 = (long long*)(*((lVar28 + 248)))[uVar65];
                                    local_80 = core::stringtools::general::UserhashTools::ToRawUsername(*plVar57);
                                    puVar67 = (uint8_t*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                }
                                lVar28 = local_f0.operator->();
                                (*((lVar28 + 312)))[uVar65];
                                uVar34 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                pLVar21->Log(false, 5,
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                             "projects/osclient/client_network.cpp",
                                             2811, "%s - %s", puVar67, uVar34);
                                if ((char)uVar15 == '\0') {
                                }
                            }
                            pLVar21 = logger::default_logger();
                            pLVar21->Log(false, 5,
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                         "osclient/client_network.cpp",
                                         2813, "----------");
                        }
                    }
                }
            }
            psVar43 =
                (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((int64_t)((unsigned long)this_13 >> 8)) << 8) |
                                                           (uint8_t)1);
            break;
        case (BADTYPE)18:
            LegacyUpdated(local_88);
            uVar8 = pCVar47->g2();
            *(unsigned int*)&local_88->field_53272 = (unsigned int)uVar8;
            goto LAB_1000eb88b;
        case (BADTYPE)19:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar8 = pSVar42->g2();
            uVar15 = 4294967295;
            if (uVar8 != 65535) {
                uVar15 = (unsigned int)uVar8;
            }
            pPVar41 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            iVar12 = pPVar41->g4();
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            iVar19 = pSVar27->g4s();
            if (*(char*)this_13 != '\0') {
                pLVar21 = logger::default_logger();
                pLVar21->Log(
                    false, 5,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                    "client_network.cpp",
                    3548, "if_setobject c:%d obj:%d zoomorcount:%d", (((uint64_t)uVar72 << 32) | (uint32_t)iVar12),
                    (((uint64_t)uVar73 << 32) | (uint32_t)uVar15), (((uint64_t)uVar75 << 32) | (uint32_t)iVar19));
            }
            psVar31 = (shared_ptr<rs2lib::IfType>*)rs2lib::IfType::Get(iVar12);
            pcVar48 = (char*)**psVar31;
            uVar70 = (uint64_t)((unsigned long)pcVar48 >> 8);
            if (*pcVar48 == '\0') {
                if (uVar8 == 65535) {
                    pcVar48[228] = '\0';
                    pcVar48[229] = '\0';
                    pcVar48[230] = '\0';
                    pcVar48[231] = '\0';
                    psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
                    break;
                }
                *local_480 = configdecoder::ObjType::List(uVar15);
                local_80 = configdecoder::ObjType::GetStackSizeAlt(*local_480, iVar19);
                *local_480 = local_80;
                pcVar48[228] = '\x04';
                pcVar48[229] = '\0';
                pcVar48[230] = '\0';
                pcVar48[231] = '\0';
                *(unsigned int*)(pcVar48 + 232) = uVar15;
                lVar28 = (*local_480).operator->();
                *(uint32_t*)(pcVar48 + 260) = *(uint32_t*)(lVar28 + 180);
                lVar28 = (*local_480).operator->();
                *(uint32_t*)(pcVar48 + 264) = *(uint32_t*)(lVar28 + 184);
                lVar28 = (*local_480).operator->();
                *(int*)(pcVar48 + 272) = (*(int*)(lVar28 + 176) * 100) / iVar19;
                ComponentUpdated(local_88, psVar31);
            } else {
                *(unsigned int*)(pcVar48 + 1984) = uVar15;
                *(int*)(pcVar48 + 1988) = iVar19;
                *local_480 = configdecoder::ObjType::List(uVar15);
                local_80 = configdecoder::ObjType::GetStackSizeAlt(*local_480, iVar19);
                *local_480 = local_80;
                lVar28 = (*local_480).operator->();
                *(uint32_t*)(pcVar48 + 260) = *(uint32_t*)(lVar28 + 180);
                lVar28 = (*local_480).operator->();
                *(uint32_t*)(pcVar48 + 264) = *(uint32_t*)(lVar28 + 184);
                lVar28 = (*local_480).operator->();
                *(uint32_t*)(pcVar48 + 268) = *(uint32_t*)(lVar28 + 188);
                lVar28 = (*local_480).operator->();
                *(uint32_t*)(pcVar48 + 252) = *(uint32_t*)(lVar28 + 192);
                lVar28 = (*local_480).operator->();
                *(uint32_t*)(pcVar48 + 256) = *(uint32_t*)(lVar28 + 196);
                lVar28 = (*local_480).operator->();
                iVar12 = *(int*)(lVar28 + 176);
                *(int*)(pcVar48 + 272) = iVar12;
                iVar19 = *(int*)(pcVar48 + 276);
                if ((0 < iVar19) || (iVar19 = *(int*)(pcVar48 + 56), 0 < iVar19)) {
                    *(int*)(pcVar48 + 272) = (iVar12 << 5) / iVar19;
                }
                ComponentUpdated(local_88, psVar31);
            }
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            break;
        case (BADTYPE)20:
            pFVar55 = (FriendSystem*)local_88->field_52768.operator->();
            pFVar55->NotifyConnectingFriendServer();
            pCVar66->field_2506344 = pCVar66->field_2505808;
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            break;
        case (BADTYPE)21:
            LegacyUpdated(local_88);
            sVar9 = pCVar47->g2s();
            local_88->field_53276 = (int)sVar9;
        LAB_1000eb88b:
            local_88->field_2506368 = local_88->field_2505808;
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            break;
        case (BADTYPE)22:
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            ZonePacket(local_88, 1, (SuperPacket*)pCVar47);
            break;
        case (BADTYPE)23:
            iVar12 = pCVar47->gSmarts();
            cVar4 = pCVar47->g1();
            new (local_480) eastl::allocator("EASTL basic_string");
            local_80 = eastl::string("", local_480);
            if (cVar4 == '\x01') {
                local_480->gStringCP1252ToUTF8<eastl::string>(bVar6);
                local_80 = local_480;
                pCVar66 = local_88;
                this_13 = (Client*)local_88->field_52768.operator->();
                new (local_480) rs2lib::social::DisplayName(local_80, pCVar66->field_54172);
                cVar4 = this_13->IsIgnored(*local_480);
            } else {
                cVar4 = '\0';
            }
            local_480->gStringCP1252ToUTF8<eastl::string>(bVar6);
            if (!cVar4) {
                AddChat(local_88, iVar12, (eastl::string*)&local_80, (eastl::string*)local_480);
            }
            goto LAB_1000ef45e;
        case (BADTYPE)24:
            local_80.gStringCP1252ToUTF8<eastl::string>(bVar6);
            uVar15 = pCVar47->g2();
            uVar18 = pCVar47->g3();
            bVar5 = pCVar47->g1();
            local_c0 = (__17*)constants::ChatCrownType::FromId((unsigned int)bVar5);
            uVar65 = (unsigned long)uVar18 | ((unsigned long)uVar15 & 65535) << 32;
            puVar35 = &local_88->field_53352;
            puVar54 = (unsigned long*)(*puVar35)[0];
            bVar6 = true;
            if (*puVar54 != uVar65) {
                uVar24 = 1;
                do {
                    bVar6 = uVar24 - 1 < 99;
                    if (uVar24 == 100)
                        break;
                    puVar54 = (unsigned long*)(*puVar35)[uVar24];
                    uVar24 = uVar24 + 1;
                } while (*puVar54 != uVar65);
            }
            pCVar66 = local_88;
            pFVar55 = (FriendSystem*)local_88->field_52768.operator->();
            new (local_480) rs2lib::social::DisplayName(local_80, pCVar66->field_54172);
            cVar4 = pFVar55->IsIgnored(*local_480);
            pCVar47 = local_88;
            this_13 = pCVar66;
            if ((!cVar4 && !bVar6) && (local_88->field_52440 == 0)) {
                iVar12 = *(int*)&local_88->field_54152;
                puVar54 = (unsigned long*)(*puVar35)[(long)iVar12];
                *puVar54 = uVar65;
                *(int*)&pCVar47->field_54152 = (iVar12 + 1) % 100;
                local_110 = eastl::basic_string<char, BucketAllocatorEASTL>();
                pWVar56 = (WordPack*)pCVar47->field_54176.operator->();
                pWVar56->UnpackCP1252AsUTF8(local_110, *((local_4c0 + 8)));
                pcVar48 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar65 = local_110.size();
                *local_480 = jstring::PixfontGeneric::Escape(pcVar48, uVar65);
                core::stringtools::general::StringTools::ForceCapitalisationOfWords(*local_480);
                iVar12 = (unsigned int)(uint8_t)local_c0->field_5 * 4 + 3;
                if (*(int*)local_c0 == -1) {
                    AddChat(local_88, iVar12, (eastl::string*)&local_80, (eastl::string*)local_480);
                } else {
                    local_f0 = StringConstants::TAG_IMG(*(int*)local_c0);
                    local_b8 + local_f0;
                    AddChat(local_88, iVar12, &local_b8, (eastl::string*)local_480);
                }
                pRVar60 = &local_110;
                goto LAB_1000ef459;
            }
            goto LAB_1000ef45e;
        case (BADTYPE)25:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar18 = pSVar42->g2();
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            iVar12 = pSVar42->g4();
            uVar65 = (unsigned long)(unsigned short)uVar18;
            uVar15 = uVar18 & 65535;
            if (*(char*)this_13 != '\0') {
                pLVar21 = logger::default_logger();
                pLVar21->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             1591, "Received big variable:%i value:%i",
                             (((uint64_t)uVar72 << 32) | (uint32_t)uVar18) & 18446744069414649855,
                             (((uint64_t)uVar73 << 32) | (uint32_t)iVar12));
            }
            piVar45 = (int*)(*((Array<int>*)&ClientVarCache::m_varServ))[uVar65];
            *piVar45 = iVar12;
            piVar45 = (int*)(*((Array<int>*)&ClientVarCache::m_var))[uVar65];
            if (*piVar45 != iVar12) {
                piVar45 = (int*)(*((Array<int>*)&ClientVarCache::m_var))[uVar65];
                *piVar45 = iVar12;
            }
            ClientVar(local_88, uVar15);
            goto LAB_1000eb344;
        case (BADTYPE)26:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar26 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            uVar14 = pSVar26->g4();
            local_b8[0].field_0 = (sqlite3**)(((uint64_t)local_b8[0].field_0._4_4_ << 32) | (uint32_t)uVar14);
            pPVar41 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            uVar8 = pPVar41->g2();
            uVar15 = 4294967295;
            if (uVar8 != 65535) {
                uVar15 = (unsigned int)uVar8;
            }
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            uVar18 = pSVar27->g4s();
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            uVar8 = pSVar27->g2();
            pRVar60 = (ReturnValue*)4294967295;
            if (uVar8 != 65535) {
                pRVar60 = (ReturnValue*)(unsigned long)uVar8;
            }
            iVar12 = (int)pRVar60;
            if (*(char*)this_13 != '\0') {
                pLVar21 = logger::default_logger();
                pLVar21->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             3779, "if_setevents - com:%d subid1:%d subid2:%d serveractive:%d",
                             (((uint64_t)uVar72 << 32) | (uint32_t)uVar18),
                             (((uint64_t)uVar73 << 32) | (uint32_t)iVar12),
                             (((uint64_t)uVar75 << 32) | (uint32_t)uVar15),
                             (((uint64_t)uVar76 << 32) | (uint32_t)((Easing)local_b8[0].field_0)));
            }
            if (iVar12 <= (int)uVar15) {
                pRVar60 = (ReturnValue*)local_88->field_2506512;
                RVar68 = (ReturnValue)(((unsigned long)uVar18 << 32) + (long)iVar12);
                lVar28 = (long)(int)(uVar15 + 1) - (long)iVar12;
                local_88 = (Client*)pRVar60;
                do {
                    local_80._0_8_ = RVar68;
                    pRVar60->erase(local_80);
                    *local_480 = pRVar60->emplace<unsigned long long&, int&>(local_80, local_b8);
                    RVar68 = (ReturnValue)((long)RVar68 + 1);
                    lVar28 = lVar28 - 1;
                } while (lVar28 != 0);
            }
            goto switchD_1000ea3f5_default;
        case (BADTYPE)27:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            sVar9 = pSVar42->g2s();
            pPVar41 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            uVar15 = pPVar41->g1();
            pPVar41 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            uVar8 = pPVar41->g2();
            pSVar26 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            iVar12 = pSVar26->g4();
            psVar43 = &local_88->field_55272[(unsigned long)uVar8];
            bVar6 = *psVar43 != nullptr;
            if (!bVar6) {
                LogAssert("m_npc[npcid] != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "client_network.cpp",
                          2150, nullptr);
            }
            this_04 = (ClientNpc*)**psVar43;
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((uint64_t)(uint32_t)(uVar15 >> 8)) << 8) |
                                                                 (uint8_t)1);
            this_04->SetHeadIcon(uVar15 & 255, iVar12, (int)sVar9);
            break;
        case (BADTYPE)28:
            if (*(char*)this_13 != '\0') {
                pLVar21 = logger::default_logger();
                pLVar21->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             1215, "logout");
            }
            Logout(local_88);
            goto LAB_1000e84af;
        case (BADTYPE)29:
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            ZonePacket(local_88, 3, (SuperPacket*)pCVar47);
            break;
        case (BADTYPE)30:
            *(uint16_t*)&local_88->field_52996 = 256;
            local_88->field_52998 = 1;
            bVar5 = pCVar47->g1();
            local_88->field_53004 = (unsigned int)bVar5;
            bVar5 = pCVar47->g1();
            local_88->field_53008 = (unsigned int)bVar5;
            uVar15 = pCVar47->g2();
            uVar8 = pCVar47->g2();
            local_80.m_argType = (unsigned int)uVar8;
            cVar4 = pCVar47->g1();
            local_88->field_53000 = cVar4 == '\x01';
            bVar5 = pCVar47->g1();
            uVar18 = uVar15 & 65535;
            local_b8[0].field_0 =
                (sqlite3**)(((uint64_t)local_b8[0].field_0._4_4_ << 32) | (uint32_t)((unsigned int)bVar5));
            if (*(char*)this_13 != '\0') {
                pCVar47 = (Client*)logger::default_logger();
                pCVar47->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             3023, "cam_moveto_cycles lx:%d lz:%d hei:%d cycles:%d ignoreTerrain:%d easing:%d",
                             (((uint64_t)uVar72 << 32) | (uint32_t)local_88->field_53004),
                             (((uint64_t)uVar73 << 32) | (uint32_t)local_88->field_53008),
                             (((uint64_t)uVar75 << 32) | (uint32_t)uVar15) & 18446744069414649855,
                             (((uint64_t)uVar76 << 32) | (uint32_t)local_80.m_argType),
                             (((uint64_t)uVar14 << 32) | (uint32_t)((unsigned int)(uint8_t)local_88->field_53000)),
                             (((uint64_t)uVar74 << 32) | (uint32_t)((Easing)local_b8[0].field_0)));
            }
            pCVar66 = local_88;
            uVar14 = local_128[0]._4_4_;
            local_f0[0].field_0._0_4_ = local_88->field_53004 << 7 | 64;
            local_110[0]._0_4_ = local_88->field_53008 << 7 | 64;
            local_128[0] = (ReturnValue)((unsigned long)(unsigned int)local_128[0]._4_4_ << 32);
            local_94 = 0;
            if (local_88->field_53000 == '\0') {
                iVar12 = GetAvH(pCVar47, local_88->field_53088, local_88->field_53096, local_88->field_51984);
                local_128[0]._0_4_ = iVar12 - pCVar66->field_53092;
            } else {
                local_128[0]._0_4_ = local_88->field_53092;
                local_128[0] = (ReturnValue)(((uint64_t)uVar14 << 32) | (uint32_t)local_128[0]._0_4_);
                iVar12 = GetAvH(pCVar47, (unsigned int)local_f0[0].field_0, local_110[0]._0_4_, local_88->field_51984);
                uVar18 = iVar12 - uVar18;
            }
            local_94 = uVar18;
            std::make_unique<LinearMovementTween, int&, int&, int&, int const&, int const&, int&, int const&,
                             CinemaCameraTween::Easing const&>(*local_480, pCVar66->field_53088, pCVar66->field_53096,
                                                               local_128, local_f0, local_110,
                                                               *((int*)((long)&local_b8 + 36)), local_80.m_argType);
            (&pCVar66->field_53064)->operator=(local_480);
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            break;
        case (BADTYPE)31:
            iVar12 = pCVar47->GetTextureAtlas();
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            ReceivePlayerPositions::GetPlayerInfo(*pCVar47, iVar12);
            break;
        case (BADTYPE)32:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            iVar12 = pSVar27->g4s();
            pPVar41 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            uVar15 = pPVar41->g2();
            psVar31 = (shared_ptr<rs2lib::IfType>*)rs2lib::IfType::Get(iVar12);
            lVar28 = **psVar31;
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            if ((*(int*)(lVar28 + 228) != 2) || (*(unsigned int*)(lVar28 + 232) != (uVar15 & 65535))) {
                *(uint32_t*)(lVar28 + 228) = 2;
                *(unsigned int*)(lVar28 + 232) = uVar15 & 65535;
                ComponentUpdated(local_88, psVar31);
            }
            break;
        case (BADTYPE)33:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            iVar12 = pSVar27->g4s();
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            iVar19 = pSVar27->g2();
            pSVar26 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            uVar15 = pSVar26->g2();
            psVar31 = (shared_ptr<rs2lib::IfType>*)rs2lib::IfType::Get(iVar12);
            lVar28 = **psVar31;
            *(unsigned int*)(lVar28 + 284) = iVar19 << 16 | uVar15 & 65535;
            psVar43 =
                (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((uint64_t)(uint32_t)((unsigned int)iVar12 >> 8))
                                                            << 8) |
                                                           (uint8_t)1);
            break;
        case (BADTYPE)34:
            uVar15 = HandleUpdateFriendChatChannelFullServerProt(local_88, (SuperPacket*)pCVar47, 2);
            goto LAB_1000e9a14;
        case (BADTYPE)35:
            local_cc._4_8_ = this_13;
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            uVar15 = pSVar27->g2();
            uVar18 = 4294967295;
            if ((short)uVar15 != -1) {
                uVar18 = uVar15 & 65535;
            }
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar17 = pSVar42->g1();
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar8 = pSVar42->g2();
            psVar43 = &local_88->field_55272[(unsigned long)uVar8];
            bVar6 = *psVar43 != nullptr;
            if (!bVar6) {
                LogAssert("m_npc[npcid] != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "client_network.cpp",
                          2096, nullptr);
            }
            lVar28 = **psVar43;
            if ((uVar18 == 4294967295) || (uVar18 != *(unsigned int*)(lVar28 + 372))) {
                local_88 = (Client*)((((uint64_t)local_88._4_4_ << 32) | (uint32_t)uVar17) & 18446744069414584575);
                bVar6 = true;
                if (*(unsigned int*)(lVar28 + 372) != 4294967295 && (short)uVar15 != -1) {
                    *local_480 = configdecoder::SeqType::List(uVar18);
                    lVar51 = (*local_480).operator->();
                    uVar15 = *(unsigned int*)(lVar51 + 228);
                    local_80 = configdecoder::SeqType::List(*(int*)(lVar28 + 372));
                    lVar51 = local_80.operator->();
                    bVar6 = *(int*)(lVar51 + 228) <= (int)uVar15;
                }
                psVar43 =
                    (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((uint64_t)(uint32_t)(uVar15 >> 8)) << 8) |
                                                               (uint8_t)1);
                if (bVar6) {
                    iVar12 = (int)local_88;
                    if (*(uint8_t*)local_cc._4_8_ != '\0') {
                        pLVar21 = logger::default_logger();
                        pLVar21->Log(false, 5,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                     "osclient/client_network.cpp",
                                     2117, "Got npc anim: %d delay:%d", (((uint64_t)uVar72 << 32) | (uint32_t)uVar18),
                                     (((uint64_t)uVar73 << 32) | (uint32_t)iVar12));
                    }
                    *(unsigned int*)(lVar28 + 372) = uVar18;
                    *(uint64_t*)(lVar28 + 376) = 0;
                    *(int*)(lVar28 + 384) = iVar12;
                    *(uint32_t*)(lVar28 + 388) = 0;
                    *(uint32_t*)(lVar28 + 540) = *(uint32_t*)(lVar28 + 440);
                }
            } else {
                if (*(uint8_t*)local_cc._4_8_ != '\0') {
                    pLVar21 = logger::default_logger();
                    pLVar21->Log(false, 5,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                 "client_network.cpp",
                                 2101, "Duplicate npc anim: %d delay:%d", (((uint64_t)uVar72 << 32) | (uint32_t)uVar18),
                                 (((uint64_t)uVar73 << 32) | (uint32_t)uVar17) & 18446744069414584575);
                }
                *local_480 = configdecoder::SeqType::List(uVar18);
                lVar51 = (*local_480).operator->();
                iVar12 = *(int*)(lVar51 + 256);
                psVar43 =
                    (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((uint64_t)(uint32_t)(uVar15 >> 8)) << 8) |
                                                               (uint8_t)1);
                if (iVar12 == 2) {
                    *(uint32_t*)(lVar28 + 388) = 0;
                } else if (iVar12 == 1) {
                    *(uint64_t*)(lVar28 + 376) = 0;
                    *(unsigned int*)(lVar28 + 384) = uVar17 & 255;
                    *(uint32_t*)(lVar28 + 388) = 0;
                }
            }
            break;
        case (BADTYPE)36:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar8 = pSVar42->g2();
            uVar15 = (unsigned int)uVar8;
            ClientInvCache::Delete((unsigned int)uVar8);
            goto LAB_1000ee005;
        case (BADTYPE)37:
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            HandleUpdateFriendChatChannelSingleUserServerProt(local_88, (SuperPacket*)pCVar47);
            break;
        case (BADTYPE)38:
            pLVar21 = logger::default_logger();
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            pLVar21->Log(
                false, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_network.cpp",
                1286, "Unimplemented Serverprot REFLECTION_CHECKER");
            break;
        case (BADTYPE)39:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar15 = pSVar42->g1();
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar18 = pSVar42->g1();
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            iVar12 = pSVar42->g4();
            psVar31 = (shared_ptr<rs2lib::IfType>*)rs2lib::IfType::Get(iVar12);
            pIVar32 = (IfType*)**psVar31;
            PlayerModelUtil::SetPlayerModelColour(*pIVar32, uVar18 & 255, uVar15 & 255);
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((uint64_t)(uint32_t)(uVar18 >> 8)) << 8) |
                                                                 (uint8_t)1);
            ComponentUpdated(local_88, psVar31);
            break;
        case (BADTYPE)40:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pPVar41 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            uVar8 = pPVar41->g2();
            if (*(char*)this_13 != '\0') {
                pLVar21 = logger::default_logger();
                pLVar21->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             3843, "if_opentop - ifid:%i",
                             (((uint64_t)uVar72 << 32) | (uint32_t)((unsigned int)uVar8)));
            }
            local_88->field_53216 = (unsigned int)uVar8;
            InterfaceCalculateSizeAndPosAll(local_88, false, false);
            IfAnimReset(local_88, (unsigned int)uVar8);
            ScriptRunner::OnLoad(local_88->field_53216);
            local_88 = (Client*)&local_88->field_2506576;
            uVar65 = 0;
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)this_13;
            do {
                puVar35 = (uint8_t*)(*local_88)[uVar65];
                *puVar35 = 1;
                uVar65 = uVar65 + 1;
                psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((int64_t)((unsigned long)psVar43 >> 8))
                                                                      << 8) |
                                                                     (uint8_t)1);
            } while (uVar65 != 100);
            break;
        case (BADTYPE)41:
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            if (local_88->field_53216 != -1) {
                RunHookImmediate(local_88, local_88->field_53216, 23);
            }
            break;
        case (BADTYPE)42:
            local_cc._4_8_ = this_13;
            PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
                &local_b8, bVar6);
            local_110 = eastl::vector<int, BucketAllocatorEASTL>();
            local_128[0] = (ReturnValue)0;
            lVar28 = local_b8.size();
            if (lVar28 != 0) {
                this_13 = &local_110;
                do {
                    pcVar48 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    local_480._0_4_ = stringtools::GetUTF8NextChar(pcVar48, local_128);
                    this_13->push_back(*local_480);
                    RVar68 = local_128[0];
                    RVar38 = (ReturnValue)local_b8.size();
                } while ((unsigned long)RVar68 < (unsigned long)RVar38);
            }
            if (*(uint8_t*)local_cc._4_8_ != '\0') {
                pLVar21 = logger::default_logger();
                uVar34 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pLVar21->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             3807, "runclientscript - params:%s", uVar34);
            }
            new (local_480) HookReq();
            lVar28 = local_110.size();
            local_480->set_max_size(lVar28 + 1, 1);
            uVar65 = local_110.size();
            if (uVar65 != 0) {
                this_13 = &local_f0;
                do {
                    uVar24 = uVar65 - 1;
                    piVar45 = &local_110[uVar24];
                    if (*piVar45 == 115) {
                        this_13->gStringCP1252ToUTF8<eastl::string>((bool)((char)local_4c0 + '\b'));
                        local_80 = HookArg(this_13);
                        pHVar39 = (HookArg*)(*local_480)[uVar65];
                        *pHVar39 = local_80;
                        this_13->~basic_string();
                    } else {
                        iVar12 = ((local_4c0 + 8))->g4();
                        local_80 = HookArg(iVar12);
                        pHVar39 = (HookArg*)(*local_480)[uVar65];
                        *pHVar39 = local_80;
                    }
                    uVar65 = uVar24;
                } while (uVar24 != 0);
            }
            iVar12 = ((local_4c0 + 8))->g4();
            local_80 = HookArg(iVar12);
            pHVar39 = (HookArg*)(*local_480)[0];
            *pHVar39 = local_80;
            ScriptRunner::ExecuteScript(*local_480, 500000);
            this_17 = &local_b8;
            goto LAB_1000ef462;
        case (BADTYPE)43:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar26 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            cVar4 = pSVar26->g1s();
            pSVar26 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            uVar8 = pSVar26->g2();
            iVar12 = (int)cVar4;
            uVar65 = (unsigned long)uVar8;
            uVar15 = (unsigned int)uVar8;
            if (*(char*)this_13 != '\0') {
                pLVar21 = logger::default_logger();
                pLVar21->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             1562, "Received small variable:%i value:%i", (((uint64_t)uVar72 << 32) | (uint32_t)uVar15),
                             (((uint64_t)uVar73 << 32) | (uint32_t)iVar12));
            }
            piVar45 = (int*)(*((Array<int>*)&ClientVarCache::m_varServ))[uVar65];
            *piVar45 = iVar12;
            piVar45 = (int*)(*((Array<int>*)&ClientVarCache::m_var))[uVar65];
            if (*piVar45 != iVar12) {
                piVar45 = (int*)(*((Array<int>*)&ClientVarCache::m_var))[uVar65];
                *piVar45 = iVar12;
            }
            ClientVar(local_88, uVar15);
        LAB_1000eb344:
            uVar18 = local_88->field_2505940;
            local_88->field_2505940 = uVar18 + 1;
            puVar63 = &local_88->field_2505812[(unsigned long)(uVar18 & 31)];
            *puVar63 = uVar15;
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            break;
        case (BADTYPE)44:
            *(uint16_t*)&local_88->field_52996 = 256;
            local_88->field_52999 = '\x01';
            bVar5 = pCVar47->g1();
            local_88->field_53024 = (unsigned int)bVar5;
            bVar5 = pCVar47->g1();
            local_88->field_53028 = (unsigned int)bVar5;
            uVar8 = pCVar47->g2();
            local_88->field_53032 = (unsigned int)uVar8;
            uVar8 = pCVar47->g2();
            local_80.m_argType = (unsigned int)uVar8;
            bVar5 = pCVar47->g1();
            pCVar66 = local_88;
            local_b8[0].field_0 =
                (sqlite3**)(((uint64_t)local_b8[0].field_0._4_4_ << 32) | (uint32_t)((unsigned int)bVar5));
            uVar18 = local_88->field_53024 << 7 | 64;
            uVar15 = local_88->field_53028 << 7 | 64;
            iVar12 = GetAvH(pCVar47, uVar18, uVar15, local_88->field_51984);
            iVar16 = uVar18 - pCVar66->field_53088;
            iVar19 = uVar15 - pCVar66->field_53096;
            uVar15 = iVar12 - (pCVar66->field_53032 + pCVar66->field_53092);
            this_13 = (Client*)(unsigned long)uVar15;
            dVar71 = (double)sqrt<int>(iVar19 * iVar19 + iVar16 * iVar16);
            dVar71 = (double)atan2<int, double>(uVar15, dVar71);
            local_f0[0].field_0._0_4_ = dash3d::world::ClampPitchAngle((int)(dVar71 * 325.949f) & 2047);
            dVar71 = (double)atan2<int, int>(iVar16, iVar19);
            local_110[0]._0_4_ = WrapYawAngle(pCVar66, (int)(dVar71 * -325.949f) & 2047);
            if (pCVar66->field_54760 != '\0') {
                pLVar21 = logger::default_logger();
                pLVar21->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             3066, "cam_rotateto_coordinate lx:%d lz:%d hei:%d cycles:%d easing:%d",
                             (((uint64_t)uVar72 << 32) | (uint32_t)pCVar66->field_53024),
                             (((uint64_t)uVar73 << 32) | (uint32_t)pCVar66->field_53028),
                             (((uint64_t)uVar75 << 32) | (uint32_t)pCVar66->field_53032),
                             (((uint64_t)uVar76 << 32) | (uint32_t)local_80.m_argType),
                             (((uint64_t)uVar14 << 32) | (uint32_t)((Easing)local_b8[0].field_0)));
            }
            *local_480 =
                std::make_unique<CinemaCameraRotationTween, int&, int const&, int const&,
                                 CinemaCameraTween::Easing const&>(pCVar66->field_53100, local_f0, local_80, local_b8);
            pCVar66->field_53072 = *local_480;
            *local_480 =
                std::make_unique<CinemaCameraRotationTween, int&, int const&, int const&,
                                 CinemaCameraTween::Easing const&>(pCVar66->field_53104, local_110, local_80, local_b8);
            pCVar66->field_53080 = *local_480;
            goto LAB_1000ecff7;
        case (BADTYPE)45:
            pLVar21 = logger::default_logger();
            pLVar21->Log(
                false, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_network.cpp",
                1238, "Unimplemented Serverprot UPDATE_REBOOT_TIMER");
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar26 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            uVar8 = pSVar26->g2();
            local_88->field_53268 = ((unsigned int)uVar8 * 32 - (unsigned int)uVar8) - (unsigned int)uVar8;
            local_88->field_2506368 = local_88->field_2505808;
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            break;
        case (BADTYPE)46:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar26 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            uVar18 = pSVar26->g2();
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar13 = pSVar42->g2();
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar17 = pSVar42->g2();
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            uVar8 = pSVar27->g2();
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            uVar20 = pSVar27->g2();
            uVar15 = 4294967295;
            if (uVar8 != 65535) {
                uVar15 = (unsigned int)uVar8;
            }
            local_b8[0].field_0 = (sqlite3**)(((uint64_t)local_b8[0].field_0._4_4_ << 32) | (uint32_t)uVar15);
            new (local_480) eastl::vector<int>(&local_b8, DAT_00000001);
            PlaySongs(local_88, (vector<int>*)local_480, uVar20 & 65535, uVar13 & 65535, uVar17 & 65535,
                      uVar18 & 65535);
            goto LAB_1000ec795;
        case (BADTYPE)47:
            LegacyUpdated(local_88);
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            uVar15 = pSVar27->g1();
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar18 = pSVar42->g1();
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            iVar12 = pSVar42->g4();
            pCVar66 = local_88;
            uVar24 = (unsigned long)uVar18 & 255;
            piVar45 = &local_88->field_52240[uVar24];
            *piVar45 = iVar12;
            puVar63 = &pCVar66->field_52040[uVar24];
            *puVar63 = uVar15 & 255;
            uVar65 = uVar24;
            piVar45 = &pCVar66->field_52140[uVar24];
            *piVar45 = 1;
            this_15 = nullptr;
            do {
                piVar33 = (int*)(*this_15)[uVar65];
                if (*piVar33 <= iVar12) {
                    *piVar45 = (int)this_15 + 2;
                }
                this_15 = this_15 + 1;
            } while (this_15 != (array<int, 99ul>*)98);
            uVar15 = local_88->field_2506204;
            local_88->field_2506204 = uVar15 + 1;
            puVar23 = &local_88->field_2506076[(unsigned long)(uVar15 & 31)];
            *puVar23 = (int)uVar24;
            psVar43 =
                (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((int64_t)((unsigned long)piVar45 >> 8)) << 8) |
                                                           (uint8_t)1);
            break;
        case (BADTYPE)48:
            EnableClanVarValues(local_88);
            local_480->pair<true, false>();
            ((OldscapeVarTypeList*)local_88->field_52512.operator->())->DecodeVarValue(*local_480, *pCVar47);
            ((VarContainerSparse*)local_88->field_52528.operator->())->SetVarValueByID(local_480._0_4_, *local_478);
            uVar14 = local_480._0_4_;
            uVar15 = *(unsigned int*)&local_88->field_2506336;
            *(unsigned int*)&local_88->field_2506336 = uVar15 + 1;
            puVar63 = &local_88->field_2506208[(unsigned long)(uVar15 & 31)];
            *puVar63 = uVar14;
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            break;
        case (BADTYPE)49:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pPVar41 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            uVar8 = pPVar41->g2();
            uVar15 = 4294967295;
            if (uVar8 != 65535) {
                uVar15 = (unsigned int)uVar8;
            }
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            PlaySong(local_88, uVar15);
            break;
        case (BADTYPE)50:
            uVar15 = HandleUpdateFriendChatChannelFullServerProt(local_88, (SuperPacket*)pCVar47, 1);
        LAB_1000e9a14:
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(unsigned long)uVar15;
            break;
        case (BADTYPE)51:
            local_480->gStringCP1252ToUTF8<eastl::string>(bVar6);
            this_11 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)local_88)();
            plVar44 = (long*)(*this_11).operator->();
            (**(void (**)(...))(*plVar44 + 192))(plVar44, local_480, 1);
            goto LAB_1000ec994;
        case (BADTYPE)52:
            *(uint16_t*)&local_88->field_52996 = 256;
            local_88->field_52998 = 1;
            bVar5 = pCVar47->g1();
            local_88->field_53004 = (unsigned int)bVar5;
            bVar5 = pCVar47->g1();
            local_88->field_53008 = (unsigned int)bVar5;
            uVar15 = pCVar47->g2();
            bVar5 = pCVar47->g1();
            local_80._0_8_ = (((uint64_t)local_80._4_4_ << 32) | (uint32_t)((unsigned int)bVar5 << 7)) | 64;
            bVar5 = pCVar47->g1();
            local_b8[0].field_0 =
                (sqlite3**)((((uint64_t)local_b8[0].field_0._4_4_ << 32) | (uint32_t)((unsigned int)bVar5 << 7)) | 64);
            uVar8 = pCVar47->g2();
            local_f0[0].field_0._0_4_ = (unsigned int)uVar8;
            cVar4 = pCVar47->g1();
            local_88->field_53000 = cVar4 == '\x01';
            bVar5 = pCVar47->g1();
            uVar18 = uVar15 & 65535;
            local_110[0]._0_4_ = (uint32_t)bVar5;
            if (*(char*)this_13 != '\0') {
                pCVar47 = (Client*)logger::default_logger();
                pCVar47->Log(
                    false, 5,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                    "client_network.cpp",
                    3130,
                    "cam_moveto_arc lx:%d lz:%d hei:%d tertiaryx:%d tertiaryz:%d cycles:%d ignoreTerrain:%d easing:%d",
                    (((uint64_t)uVar72 << 32) | (uint32_t)local_88->field_53004),
                    (((uint64_t)uVar73 << 32) | (uint32_t)local_88->field_53008),
                    (((uint64_t)uVar75 << 32) | (uint32_t)uVar15) & 18446744069414649855,
                    (((uint64_t)uVar76 << 32) | (uint32_t)local_80.m_argType),
                    (((uint64_t)uVar14 << 32) | (uint32_t)((Easing)local_b8[0].field_0)),
                    (((uint64_t)uVar74 << 32) | (uint32_t)((unsigned int)local_f0[0].field_0)),
                    (unsigned int)(uint8_t)local_88->field_53000, local_110[0]._0_4_);
            }
            pCVar66 = local_88;
            uVar15 = local_88->field_53004 << 7;
            local_128[0] = (ReturnValue)((((uint64_t)local_128[0]._4_4_ << 32) | (uint32_t)uVar15) | 64);
            local_94 = local_88->field_53008 << 7 | 64;
            local_8c = 0;
            local_90 = 0;
            if (local_88->field_53000 == '\0') {
                iVar12 = GetAvH(pCVar47, local_88->field_53088, local_88->field_53096, local_88->field_51984);
                local_8c = iVar12 - pCVar66->field_53092;
            } else {
                local_8c = local_88->field_53092;
                iVar12 = GetAvH(pCVar47, uVar15 | 64, local_94, local_88->field_51984);
                uVar18 = iVar12 - uVar18;
            }
            local_90 = uVar18;
            std::make_unique<ArcMovementTween, int&, int&, int&, int const&, int const&, int&, int const&, int const&,
                             int const&, CinemaCameraTween::Easing const&>(
                *local_480, pCVar66->field_53088, pCVar66->field_53096, *((int*)((long)&local_b8 + 44)), local_128,
                *((int*)((long)&local_b8 + 36)), *((int*)((long)&local_b8 + 40)), local_80, local_b8, local_f0);
            (&pCVar66->field_53064)->operator=(local_480);
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            break;
        case (BADTYPE)53:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar26 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            uVar15 = pSVar26->g2();
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            uVar18 = pSVar27->g2();
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            uVar17 = pSVar27->g2();
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar8 = pSVar42->g2();
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((uint64_t)(uint32_t)(uVar18 >> 8)) << 8) |
                                                                 (uint8_t)1);
            midi2::MidiManager::SwapSongs(uVar15 & 65535, uVar18 & 65535, (unsigned int)uVar8, uVar17 & 65535);
            break;
        case (BADTYPE)54:
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            GetNPCPos(local_88, false, (SuperPacket*)pCVar47);
            break;
        case (BADTYPE)55:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar26 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            cVar4 = pSVar26->g1();
            pPVar41 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            iVar12 = pPVar41->g4();
            psVar31 = (shared_ptr<rs2lib::IfType>*)rs2lib::IfType::Get(iVar12);
            lVar28 = **psVar31;
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            if (*(char*)(lVar28 + 92) != (cVar4 == '\x01')) {
                *(bool*)(lVar28 + 92) = cVar4 == '\x01';
                ComponentUpdated(local_88, psVar31);
            }
            break;
        case (BADTYPE)56:
            new (local_480) eastl::string();
            local_b8 = SuperShuffledPacketFactory(*pCVar47);
            bVar6 = (bool)ShuffledPacketFactory::p2_alt2();
            local_80.gStringCP1252ToUTF8<eastl::string>(bVar6);
            *local_480 = &local_80;
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            iVar12 = pSVar42->g4();
            psVar31 = (shared_ptr<rs2lib::IfType>*)rs2lib::IfType::Get(iVar12);
            lVar28 = **psVar31;
            bVar6 = *local_480 != (*((lVar28 + 320)));
            if (bVar6) {
                (*((lVar28 + 320))) = local_480;
                ComponentUpdated(local_88, psVar31);
            }
            goto LAB_1000ec994;
        case (BADTYPE)57:
            NotifyClanSettingsUpdate(local_88);
            cVar4 = pCVar47->g1s();
            lVar28 = pCVar47->GetTextureAtlas();
            if (lVar28 == 1) {
                if (cVar4 < '\0') {
                    new (local_480) shared_ptr();
                    local_88->field_52552 = *local_480;
                } else {
                    new (local_480) shared_ptr();
                    psVar40 = &local_88->field_52568[(long)cVar4];
                    *psVar40 = *local_480;
                }
                this_16 = (shared_ptr<RSevenDebugPresetProvider>*)local_480;
            } else {
                local_b8 = shared_ptr();
                if (cVar4 < '\0') {
                    make_shared<rs2lib::social::ClanSettings, core::SuperPacket&>((ReturnValue*)local_480,
                                                                                  (SuperPacket*)pCVar47);
                    psVar40 = (shared_ptr<rs2lib::social::ClanSettings>*)local_88->field_52552 = *local_480;
                    local_b8 = *psVar40;
                } else {
                    make_shared<rs2lib::social::ClanSettings, core::SuperPacket&>((ReturnValue*)local_480,
                                                                                  (SuperPacket*)pCVar47);
                    psVar40 = &local_88->field_52568[(long)cVar4];
                    psVar40 = (shared_ptr<rs2lib::social::ClanSettings>*)* psVar40 = *local_480;
                    local_b8 = *psVar40;
                }
                if (*(char*)this_13 != '\0') {
                    pLVar21 = logger::default_logger();
                    lVar28 = local_b8.operator->();
                    uVar34 = (((uint64_t)uVar73 << 32) | (uint32_t)(*(uint32_t*)(lVar28 + 8)));
                    pLVar21->Log(false, 5,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                 "client_network.cpp",
                                 2690, "ClanRecord affinitySlot %i received and set - updateNum: %i",
                                 (((uint64_t)uVar72 << 32) | (uint32_t)((int)cVar4)), uVar34);
                    uVar72 = (uint32_t)((unsigned long)uVar34 >> 32);
                    pLVar21 = logger::default_logger();
                    pLVar21->Log(false, 5,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                 "client_network.cpp",
                                 2691, "----------");
                    pLVar21 = logger::default_logger();
                    local_b8.operator->();
                    uVar34 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    pLVar21->Log(false, 5,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                 "client_network.cpp",
                                 2692, "Clan Name: %s", uVar34);
                    uVar74 = (uint32_t)((unsigned long)uVar34 >> 32);
                    pLVar21 = logger::default_logger();
                    lVar28 = local_b8.operator->();
                    uVar14 = *(uint32_t*)(lVar28 + 232);
                    lVar28 = local_b8.operator->();
                    uVar58 = (((uint64_t)uVar72 << 32) | (uint32_t)(*(uint32_t*)(lVar28 + 236)));
                    uVar34 = (((uint64_t)uVar74 << 32) | (uint32_t)uVar14);
                    pLVar21->Log(false, 5,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                 "client_network.cpp",
                                 2693, "currentOwnerSlot: %i replacementOwnerSlot: %i", uVar34, uVar58);
                    uVar14 = (uint32_t)((unsigned long)uVar34 >> 32);
                    uVar74 = (uint32_t)((unsigned long)uVar58 >> 32);
                    pLVar21 = logger::default_logger();
                    lVar28 = local_b8.operator->();
                    bVar5 = *(uint8_t*)(lVar28 + 56);
                    lVar28 = local_b8.operator->();
                    cVar4 = *(char*)(lVar28 + 57);
                    lVar28 = local_b8.operator->();
                    cVar1 = *(char*)(lVar28 + 58);
                    lVar28 = local_b8.operator->();
                    uVar34 = (((uint64_t)uVar75 << 32) | (uint32_t)((int)cVar1));
                    pLVar21->Log(false, 5,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                 "client_network.cpp",
                                 2694, "allowNonMembers: %i rankTalk: %i rankKick: %i, rankLootShare: %i",
                                 (((uint64_t)uVar14 << 32) | (uint32_t)((unsigned int)bVar5)),
                                 (((uint64_t)uVar74 << 32) | (uint32_t)((int)cVar4)), uVar34,
                                 (((uint64_t)uVar76 << 32) | (uint32_t)((int)*(char*)(lVar28 + 59))));
                    pLVar21 = logger::default_logger();
                    pLVar21->Log(false, 5,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                 "client_network.cpp",
                                 2695, "Members:");
                    this_13 = nullptr;
                    while (true) {
                        uVar14 = (uint32_t)((unsigned long)uVar34 >> 32);
                        lVar28 = local_b8.operator->();
                        if ((long)*(int*)(lVar28 + 64) <= (long)this_13)
                            break;
                        pLVar21 = logger::default_logger();
                        lVar28 = local_b8.operator->();
                        cVar4 = ((lVar28 + 72))->empty();
                        puVar67 = &DAT_100e3aa9a;
                        local_88 = (Client*)(((uint64_t)local_88._1_7_ << 8) | (uint8_t)cVar4);
                        if (!cVar4) {
                            lVar28 = local_b8.operator->();
                            plVar57 = (long long*)(*((lVar28 + 72)))[(unsigned long)this_13];
                            *local_480 = core::stringtools::general::UserhashTools::ToRawUsername(*plVar57);
                            puVar67 = (uint8_t*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        }
                        lVar28 = local_b8.operator->();
                        (*((lVar28 + 280)))[(unsigned long)this_13];
                        uVar58 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        lVar28 = local_b8.operator->();
                        pcVar48 = (char*)(*((lVar28 + 104)))[(unsigned long)this_13];
                        uVar34 = (((uint64_t)uVar14 << 32) | (uint32_t)((int)*pcVar48));
                        pLVar21->Log(false, 5,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                     "osclient/client_network.cpp",
                                     2698, "%s - %s - rank: %i", puVar67, uVar58, uVar34);
                        if ((char)local_88 == '\0') {
                        }
                        this_13 = (Client*)((long)this_13 + 1);
                    }
                    pLVar21 = logger::default_logger();
                    pLVar21->Log(false, 5,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                 "client_network.cpp",
                                 2700, "Banned:");
                    for (uVar65 = 0; lVar28 = local_b8.operator->(), (long)uVar65 < (long)*(int*)(lVar28 + 240);
                         uVar65 = uVar65 + 1) {
                        pLVar21 = logger::default_logger();
                        lVar28 = local_b8.operator->();
                        uVar15 = ((lVar28 + 248))->empty();
                        this_13 = (Client*)(unsigned long)uVar15;
                        puVar67 = &DAT_100e3aa9a;
                        if ((char)uVar15 == '\0') {
                            lVar28 = local_b8.operator->();
                            plVar57 = (long long*)(*((lVar28 + 248)))[uVar65];
                            local_80 = core::stringtools::general::UserhashTools::ToRawUsername(*plVar57);
                            puVar67 = (uint8_t*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        }
                        lVar28 = local_b8.operator->();
                        (*((lVar28 + 312)))[uVar65];
                        uVar34 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pLVar21->Log(false, 5,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                     "osclient/client_network.cpp",
                                     2703, "%s - %s", puVar67, uVar34);
                        if ((char)uVar15 == '\0') {
                        }
                    }
                    pLVar21 = logger::default_logger();
                    pLVar21->Log(false, 5,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                 "client_network.cpp",
                                 2705, "----------");
                }
                this_16 = &local_b8;
            }
            this_16->~shared_ptr();
            psVar43 =
                (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((int64_t)((unsigned long)this_13 >> 8)) << 8) |
                                                           (uint8_t)1);
            break;
        case (BADTYPE)58:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pPVar41 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            iVar12 = pPVar41->g4();
            psVar31 = (shared_ptr<rs2lib::IfType>*)rs2lib::IfType::Get(iVar12);
            lVar28 = **psVar31;
            *(uint32_t*)(lVar28 + 228) = 3;
            lVar51 = local_88->field_52016.operator->();
            uVar14 = ((PlayerModel*)(*((lVar51 + 1008))).operator->())->GetHeadModelCacheId();
            *(uint32_t*)(lVar28 + 232) = uVar14;
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            ComponentUpdated(local_88, psVar31);
            break;
        case (BADTYPE)59:
            bVar5 = pCVar47->g1();
            local_88->field_54888 = (unsigned int)bVar5;
            if (bVar5 == 1) {
                uVar8 = pCVar47->g2();
                *(unsigned int*)&local_88->field_54892 = (unsigned int)uVar8;
            }
            pCVar66 = local_88;
            if (local_88->field_54888 - 2U < 5) {
                uVar34 =
                    *(uint64_t*)(&reinterpret_cast<const uint64_t*>(&skillxp)[51] + (long)local_88->field_54888 * 8);
                local_88->field_54912 = (int)uVar34;
                local_88->field_54916 = (int)((unsigned long)uVar34 >> 32);
                local_88->field_54888 = 2;
                uVar8 = pCVar47->g2();
                pCVar66->field_54900 = (unsigned int)uVar8;
                uVar8 = pCVar47->g2();
                pCVar66->field_54904 = (unsigned int)uVar8;
                bVar5 = pCVar47->g1();
                pCVar66->field_54908 = (unsigned int)bVar5;
                this_13 = pCVar47;
            }
            psVar43 =
                (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((int64_t)((unsigned long)this_13 >> 8)) << 8) |
                                                           (uint8_t)1);
            if (pCVar66->field_54888 == 10) {
                uVar8 = pCVar47->g2();
                *(unsigned int*)&local_88->field_54896 = (unsigned int)uVar8;
            }
            break;
        case (BADTYPE)60:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar26 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            uVar15 = pSVar26->g3();
            locShapeID = (uVar15 >> 4 & 7) + ((int)uVar15 >> 16);
            local_b8[0].field_0 = (sqlite3**)(((uint64_t)local_b8[0].field_0._4_4_ << 32) | (uint32_t)locShapeID);
            local_f0[0].field_0._0_4_ = (uVar15 & 7) + (uVar15 >> 8 & 255);
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            bVar5 = pSVar27->g1();
            bVar7 = bVar5 >> 2;
            local_110[0]._0_4_ = (uint32_t)(bVar5 & 3);
            uVar18 = ((LocShape*)(unsigned long)(unsigned int)bVar7)->ToLayer(locShapeID);
            pRVar60 = (ReturnValue*)(unsigned long)uVar18;
            local_c0 = (__17*)(((uint64_t)local_c0._4_4_ << 32) | (uint32_t)((unsigned int)bVar7));
            pPVar41 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            local_128[0]._0_2_ = pPVar41->g2();
            pCVar66 = local_88;
            uVar15 = (unsigned int)local_f0[0].field_0;
            local_128[0]._2_2_ = 0;
            EVar2 = (Easing)local_b8[0].field_0;
            if ((((102 < (int)(Easing)local_b8[0].field_0) || ((int)(Easing)local_b8[0].field_0 < 0)) ||
                 ((int)(unsigned int)local_f0[0].field_0 < 0)) ||
                (102 < (int)(unsigned int)local_f0[0].field_0))
                goto switchD_1000ea3f5_default;
            switch (uVar18 & 255) {
            case 0:
                local_cc[4] = (char)uVar18;
                pwVar62 = (world*)local_88->field_19184.operator->();
                *local_480 = pwVar62->GetWall(pCVar66->field_51984, EVar2, uVar15);
                bVar6 = *local_480 != nullptr;
                pRVar60 =
                    (ReturnValue*)(((uint64_t)((int64_t)((unsigned long)pCVar66 >> 8)) << 8) | (uint8_t)local_cc[4]);
                if (bVar6) {
                    lVar28 = (*local_480).operator->();
                    local_94 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(long long*)(lVar28 + 56));
                    piVar45 = &local_88->field_51984;
                    if (bVar7 == 2) {
                        local_8c = 2;
                        local_90 = local_110[0]._0_4_ + 4;
                        local_cc._0_4_ = local_cc._0_4_ & 4294967040;
                        lVar28 = (*local_480).operator->();
                        pRVar60 = (ReturnValue*)local_cc;
                        make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool,
                                    shared_ptr<dash3d::ModelSource>&, int&>(
                            (int*)&local_80, (int*)((long)&local_b8 + 36), (int*)((long)&local_b8 + 44),
                            (int*)((long)&local_b8 + 40), piVar45, &local_b8, &local_f0, &local_128,
                            (shared_ptr<dash3d::ModelSource>*)pRVar60, (int*)(lVar28 + 24));
                        lVar28 = (*local_480).operator->();
                        (*((lVar28 + 24))) = local_80;
                        local_8c = 2;
                        local_90 = local_110[0]._0_4_ + 1 & 3;
                        local_cc._0_4_ = local_cc._0_4_ & 4294967040;
                        lVar28 = (*local_480).operator->();
                        make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool,
                                    shared_ptr<dash3d::ModelSource>&, int&>(
                            (int*)&local_80, (int*)((long)&local_b8 + 36), (int*)((long)&local_b8 + 44),
                            (int*)((long)&local_b8 + 40), piVar45, &local_b8, &local_f0, &local_128,
                            (shared_ptr<dash3d::ModelSource>*)pRVar60, (int*)(lVar28 + 40));
                        lVar28 = (*local_480).operator->();
                        (*((lVar28 + 40))) = local_80;
                    } else {
                        local_8c = (unsigned int)local_c0;
                        local_90 = local_90 & 4294967040;
                        lVar28 = (*local_480).operator->();
                        make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool,
                                    shared_ptr<dash3d::ModelSource>&, int&>(
                            (int*)&local_80, (int*)((long)&local_b8 + 36), (int*)((long)&local_b8 + 44), &local_110,
                            piVar45, &local_b8, &local_f0, &local_128,
                            (shared_ptr<dash3d::ModelSource>*)((long)&local_b8 + 40), (int*)(lVar28 + 24));
                        lVar28 = (*local_480).operator->();
                        (*((lVar28 + 24))) = local_80;
                    }
                    pRVar60 = (ReturnValue*)(((uint64_t)((int64_t)((unsigned long)pRVar60 >> 8)) << 8) |
                                             (uint8_t)local_cc[4]);
                }
                if ((char)pRVar60 == '\x01')
                    goto switchD_1000ea3f5_caseD_1;
                break;
            case 1:
            switchD_1000ea3f5_caseD_1:
                pCVar66 = local_88;
                pwVar62 = (world*)local_88->field_19184.operator->();
                *local_480 = pwVar62->GetDecor(pCVar66->field_51984, (Easing)local_b8[0].field_0,
                                               (unsigned int)local_f0[0].field_0);
                bVar6 = *local_480 != nullptr;
                if (bVar6) {
                    lVar28 = (*local_480).operator->();
                    local_94 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(long long*)(lVar28 + 64));
                    piVar45 = &local_88->field_51984;
                    if ((bVar5 & 248) == 16) {
                        local_8c = 4;
                        local_90 = local_90 & 4294967040;
                        lVar28 = (*local_480).operator->();
                        make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool,
                                    shared_ptr<dash3d::ModelSource>&, int&>(
                            (int*)&local_80, (int*)((long)&local_b8 + 36), (int*)((long)&local_b8 + 44), &local_110,
                            piVar45, &local_b8, &local_f0, &local_128,
                            (shared_ptr<dash3d::ModelSource>*)((long)&local_b8 + 40), (int*)(lVar28 + 32));
                        lVar28 = (*local_480).operator->();
                        (*((lVar28 + 32))) = local_80;
                    } else if (bVar7 == 8) {
                        local_8c = 4;
                        local_90 = local_110[0]._0_4_ + 4;
                        local_cc._0_4_ = (unsigned int)(uint32_t)local_cc._1_3_ << 8;
                        lVar28 = (*local_480).operator->();
                        make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool,
                                    shared_ptr<dash3d::ModelSource>&, int&>(
                            (int*)&local_80, (int*)((long)&local_b8 + 36), (int*)((long)&local_b8 + 44),
                            (int*)((long)&local_b8 + 40), piVar45, &local_b8, &local_f0, &local_128,
                            (shared_ptr<dash3d::ModelSource>*)local_cc, (int*)(lVar28 + 32));
                        lVar28 = (*local_480).operator->();
                        (*((lVar28 + 32))) = local_80;
                        local_8c = 4;
                        local_90 = local_110[0]._0_4_ + 2 & 3 | 4;
                        local_cc._0_4_ = local_cc._0_4_ & 4294967040;
                        lVar28 = (*local_480).operator->();
                        make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool,
                                    shared_ptr<dash3d::ModelSource>&, int&>(
                            (int*)&local_80, (int*)((long)&local_b8 + 36), (int*)((long)&local_b8 + 44),
                            (int*)((long)&local_b8 + 40), piVar45, &local_b8, &local_f0, &local_128,
                            (shared_ptr<dash3d::ModelSource>*)local_cc, (int*)(lVar28 + 48));
                        lVar28 = (*local_480).operator->();
                        (*((lVar28 + 48))) = local_80;
                    } else if (bVar7 == 7) {
                        local_8c = 4;
                        local_90 = local_110[0]._0_4_ + 2 & 3 | 4;
                        local_cc._0_4_ = (unsigned int)(uint32_t)local_cc._1_3_ << 8;
                        lVar28 = (*local_480).operator->();
                        make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool,
                                    shared_ptr<dash3d::ModelSource>&, int&>(
                            (int*)&local_80, (int*)((long)&local_b8 + 36), (int*)((long)&local_b8 + 44),
                            (int*)((long)&local_b8 + 40), piVar45, &local_b8, &local_f0, &local_128,
                            (shared_ptr<dash3d::ModelSource>*)local_cc, (int*)(lVar28 + 32));
                        lVar28 = (*local_480).operator->();
                        (*((lVar28 + 32))) = local_80;
                    } else {
                        if (bVar7 != 6)
                            goto LAB_1000ef656;
                        local_8c = 4;
                        local_90 = local_110[0]._0_4_ + 4;
                        local_cc._0_4_ = local_cc._0_4_ & 4294967040;
                        lVar28 = (*local_480).operator->();
                        make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool,
                                    shared_ptr<dash3d::ModelSource>&, int&>(
                            (int*)&local_80, (int*)((long)&local_b8 + 36), (int*)((long)&local_b8 + 44),
                            (int*)((long)&local_b8 + 40), piVar45, &local_b8, &local_f0, &local_128,
                            (shared_ptr<dash3d::ModelSource>*)local_cc, (int*)(lVar28 + 32));
                        lVar28 = (*local_480).operator->();
                        (*((lVar28 + 32))) = local_80;
                    }
                }
            LAB_1000ef656:
                break;
            case 2:
                goto switchD_1000ea3f5_caseD_2;
            case 3:
                goto switchD_1000ea3f5_caseD_3;
            default:
                goto switchD_1000ea3f5_default;
            }
            if ((char)pRVar60 == '\x02') {
            switchD_1000ea3f5_caseD_2:
                pCVar66 = local_88;
                pwVar62 = (world*)local_88->field_19184.operator->();
                *local_480 = pwVar62->GetScene(pCVar66->field_51984, (Easing)local_b8[0].field_0,
                                               (unsigned int)local_f0[0].field_0);
                uVar15 = (unsigned int)local_c0;
                if (bVar7 == 11) {
                    uVar15 = 10;
                }
                bVar6 = *local_480 != nullptr;
                if (bVar6) {
                    lVar28 = (*local_480).operator->();
                    local_94 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(long long*)(lVar28 + 80));
                    local_8c = uVar15 & 255;
                    local_90 = local_90 & 4294967040;
                    lVar28 = (*local_480).operator->();
                    make_shared<ClientLocAnim, int, int, int&, int&, int&, int&, int&, bool,
                                shared_ptr<dash3d::ModelSource>&, int&>(
                        (int*)&local_80, (int*)((long)&local_b8 + 36), (int*)((long)&local_b8 + 44), &local_110,
                        &local_88->field_51984, &local_b8, &local_f0, &local_128,
                        (shared_ptr<dash3d::ModelSource>*)((long)&local_b8 + 40), (int*)(lVar28 + 32));
                    lVar28 = (*local_480).operator->();
                    (*((lVar28 + 32))) = local_80;
                }
            }
            if ((char)pRVar60 == '\x03') {
            switchD_1000ea3f5_caseD_3:
                pCVar66 = local_88;
                pwVar62 = (world*)local_88->field_19184.operator->();
                *local_480 = pwVar62->GetGd(pCVar66->field_51984, (Easing)local_b8[0].field_0,
                                            (unsigned int)local_f0[0].field_0);
                bVar6 = *local_480 != nullptr;
                if (bVar6) {
                    lVar28 = (*local_480).operator->();
                    local_94 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(long long*)(lVar28 + 32));
                    local_8c = 22;
                    local_90 = local_90 & 4294967040;
                    lVar28 = (*local_480).operator->();
                    make_shared<ClientLocAnim, int, int, int&, int&, int&, int&, int&, bool,
                                shared_ptr<dash3d::ModelSource>&, int&>(
                        (int*)&local_80, (int*)((long)&local_b8 + 36), (int*)((long)&local_b8 + 44), &local_110,
                        &local_88->field_51984, &local_b8, &local_f0, &local_128,
                        (shared_ptr<dash3d::ModelSource>*)((long)&local_b8 + 40), (int*)(lVar28 + 16));
                    lVar28 = (*local_480).operator->();
                    (*((lVar28 + 16))) = local_80;
                }
            }
            goto switchD_1000ea3f5_default;
        case (BADTYPE)61:
            bVar5 = pCVar47->g1();
            uVar14 = rs2lib::FriendPrivacyUtils::GetBySaveValue((unsigned int)bVar5);
            *(uint32_t*)((long)&local_88->field_53304 + 4) = uVar14;
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            break;
        case (BADTYPE)62:
            local_88->field_8492 = local_88->field_8492 + 1;
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            break;
        case (BADTYPE)63:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pPVar41 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            uVar15 = pPVar41->g1();
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            iVar12 = pSVar27->g4s();
            psVar31 = (shared_ptr<rs2lib::IfType>*)rs2lib::IfType::Get(iVar12);
            pIVar32 = (IfType*)**psVar31;
            PlayerModelUtil::SetPlayerModelBodyType(*pIVar32, uVar15 & 255);
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            ComponentUpdated(local_88, psVar31);
            break;
        case (BADTYPE)64:
            if (*(char*)this_13 != '\0') {
                pLVar21 = logger::default_logger();
                pLVar21->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             2957, "cam_reset");
            }
            pCVar66 = local_88;
            local_88->field_52997 = 0;
            local_88->field_52998 = 0;
            local_88->field_52999 = '\0';
            local_88->field_53000 = 0;
            local_88->field_53004 = 0;
            local_88->field_53008 = 0;
            local_88->field_53012 = 0;
            local_88->field_53016 = 0;
            local_88->field_53020 = 0;
            local_88->field_53024 = 0;
            local_88->field_53028 = 0;
            local_88->field_53032 = 0;
            local_88->field_53036 = 0;
            local_88->field_53040 = 0;
            local_88->field_53064.reset(nullptr);
            pCVar66->field_53072.reset(nullptr);
            pCVar66->field_53080.reset(nullptr);
            pCVar66->field_52996 = 0;
            pCVar66->field_2508880 = 0;
            pCVar66->field_2508884 = 0;
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            break;
        case (BADTYPE)65:
            pLVar21 = logger::default_logger();
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            pLVar21->Log(
                false, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_network.cpp",
                2374, "Unimplemented Serverprot SET_HEATMAP_ENABLED");
            break;
        case (BADTYPE)66:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar15 = pSVar42->g2();
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            iVar12 = pSVar42->g4();
            psVar49 = (shared_ptr<midi2::MidiPlayerMainThread>*)rs2lib::IfType::Get(iVar12);
            bVar6 = *psVar49 != nullptr;
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            if ((bVar6) && (lVar28 = **psVar49, *(int*)(lVar28 + 12) == 0)) {
                uVar18 = *(int*)(lVar28 + 108) - *(int*)(lVar28 + 76);
                if ((int)(uVar15 & 65535) <= (int)uVar18) {
                    uVar18 = uVar15 & 65535;
                }
                uVar15 = 0;
                if (-1 < (int)uVar18) {
                    uVar15 = uVar18;
                }
                if (*(unsigned int*)(lVar28 + 100) != uVar15) {
                    *(unsigned int*)(lVar28 + 100) = uVar15;
                    ComponentUpdated(local_88, (shared_ptr<rs2lib::IfType>*)psVar49);
                }
            }
            break;
        case (BADTYPE)67:
            iVar12 = pCVar47->g4();
            uVar8 = pCVar47->g2();
            uVar15 = uVar8 + 32768;
            if (-70001 < iVar12) {
                uVar15 = (unsigned int)uVar8;
            }
            local_c0 = (__17*)(((uint64_t)local_c0._4_4_ << 32) | (uint32_t)uVar15);
            if (*(char*)this_13 != '\0') {
                pLVar21 = logger::default_logger();
                pLVar21->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             1392, "Received inventory update for inventory: %d component: %d",
                             (((uint64_t)uVar72 << 32) | (uint32_t)((unsigned int)local_c0)),
                             (((uint64_t)uVar73 << 32) | (uint32_t)iVar12));
            }
            if (iVar12 < 0) {
                pvVar69 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&rs2lib::NULL_IFTYPE;
            } else {
                pvVar69 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)rs2lib::IfType::Get(iVar12);
            }
            lVar28 = pvVar69->end();
            local_cc._4_8_ = lVar28 + 1936;
            local_130 = (Array<int>*)(lVar28 + 1960);
            while (true) {
                this_01 = (TextureAtlasReference*)(local_4c0 + 8);
                this_13 = (Client*)this_01->size();
                pSVar53 = (SuperShuffledPacketFactory*)this_01->GetTextureAtlas();
                if (pSVar53 <= this_13)
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
                        uVar15 = (unsigned int)bVar5;
                    }
                }
                bVar6 = *pvVar69 != nullptr;
                if ((bVar6 && -1 < iVar12) && (iVar19 = local_cc._4_8_->end(), iVar12 < iVar19)) {
                    puVar63 = (unsigned int*)(*local_cc._4_8_)[(long)iVar12];
                    *puVar63 = (unsigned int)uVar8;
                    puVar63 = (unsigned int*)(*local_130)[(long)iVar12];
                    *puVar63 = uVar15;
                }
                ClientInvCache::Set((unsigned int)local_c0, iVar12, uVar8 - 1, uVar15);
            }
            bVar6 = *pvVar69 != nullptr;
            if (bVar6) {
                ComponentUpdated(local_88, (shared_ptr<rs2lib::IfType>*)pvVar69);
            }
            LegacyUpdated(local_88);
            goto LAB_1000edfff;
        case (BADTYPE)68:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pPVar41 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            bVar5 = pPVar41->g1();
            pCVar66 = local_88;
            *(unsigned int*)&local_88->field_1115284 = (unsigned int)bVar5;
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            bVar5 = pSVar27->g1();
            *(unsigned int*)&pCVar66->field_1115288 = (unsigned int)bVar5;
            if (pCVar66->field_54760 != '\0') {
                pLVar21 = logger::default_logger();
                pLVar21->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             4137, "Partial update enclosed for zone: %d,%d",
                             (((uint64_t)uVar72 << 32) | (uint32_t)(*(uint32_t*)&local_88->field_1115284)),
                             (((uint64_t)uVar73 << 32) | (uint32_t)(*(uint32_t*)&local_88->field_1115288)));
            }
            while (true) {
                uVar65 = pCVar47->size();
                uVar24 = pCVar47->GetTextureAtlas();
                if (uVar24 <= uVar65)
                    break;
                bVar5 = pCVar47->g1();
                ZonePacket(local_88, (unsigned int)bVar5, (SuperPacket*)pCVar47);
            }
            goto switchD_1000ea3f5_default;
        case (BADTYPE)69:
            bVar5 = pCVar47->g1();
            SetCameraMode(local_88, (unsigned int)bVar5);
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            break;
        case (BADTYPE)70:
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            RebuildPacket(local_88, false, (SuperPacket*)pCVar47);
            break;
        case (BADTYPE)71:
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            ZonePacket(local_88, 6, (SuperPacket*)pCVar47);
            break;
        case (BADTYPE)72:
            if (*(char*)this_13 != '\0') {
                pLVar21 = logger::default_logger();
                pLVar21->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             2393, "Resetting variables to 0 in preperation for full transmit");
            }
            if (0 < configdecoder::VarpType::m_numDefinitions) {
                uVar65 = 0;
                this_13 = (Client*)&ClientVarCache::m_varServ;
                do {
                    psVar46 = (shared_ptr<dash3d::GroundDecor>*)configdecoder::VarpType::List((int)uVar65);
                    new (local_480) shared_ptr(psVar46);
                    bVar6 = *local_480 != nullptr;
                    if (bVar6) {
                        puVar23 = (uint32_t*)(*((Array<int>*)&ClientVarCache::m_varServ))[uVar65];
                        *puVar23 = 0;
                        puVar23 = (uint32_t*)(*((Array<int>*)&ClientVarCache::m_var))[uVar65];
                        *puVar23 = 0;
                    }
                    uVar65 = uVar65 + 1;
                } while ((long)uVar65 < (long)configdecoder::VarpType::m_numDefinitions);
            }
            LegacyUpdated(local_88);
            local_88->field_2505940 = local_88->field_2505940 + 32;
            psVar43 =
                (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((int64_t)((unsigned long)this_13 >> 8)) << 8) |
                                                           (uint8_t)1);
            break;
        case (BADTYPE)73:
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            ZonePacket(local_88, 10, (SuperPacket*)pCVar47);
            break;
        case (BADTYPE)74:
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            ZonePacket(local_88, 4, (SuperPacket*)pCVar47);
            break;
        case (BADTYPE)75:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar26 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            bVar5 = pSVar26->g1();
            pCVar66 = local_88;
            *(unsigned int*)&local_88->field_1115284 = (unsigned int)bVar5;
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            bVar5 = pSVar27->g1();
            *(unsigned int*)&pCVar66->field_1115288 = (unsigned int)bVar5;
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            if (pCVar66->field_54760 != '\0') {
                pLVar21 = logger::default_logger();
                pLVar21->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             4083, "Partial update follows for zone: %i,%i ",
                             (((uint64_t)uVar72 << 32) | (uint32_t)(*(uint32_t*)&local_88->field_1115284)),
                             (((uint64_t)uVar73 << 32) | (uint32_t)(*(uint32_t*)&local_88->field_1115288)));
            }
            break;
        case (BADTYPE)76:
            *(uint16_t*)&local_88->field_52996 = 256;
            local_88->field_52998 = 0;
            bVar5 = pCVar47->g1();
            local_88->field_53004 = (unsigned int)bVar5;
            bVar5 = pCVar47->g1();
            local_88->field_53008 = (unsigned int)bVar5;
            uVar8 = pCVar47->g2();
            local_88->field_53012 = (unsigned int)uVar8;
            bVar5 = pCVar47->g1();
            local_88->field_53016 = (unsigned int)bVar5;
            bVar5 = pCVar47->g1();
            local_88->field_53020 = (unsigned int)bVar5;
            if (local_88->field_54760 != '\0') {
                pCVar47 = (Client*)logger::default_logger();
                pCVar47->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             2892, "cam_moveto lx:%d lz:%d hei:%d rate:%d rate2:%d",
                             (((uint64_t)uVar72 << 32) | (uint32_t)local_88->field_53004),
                             (((uint64_t)uVar73 << 32) | (uint32_t)local_88->field_53008),
                             (((uint64_t)uVar75 << 32) | (uint32_t)local_88->field_53012),
                             (((uint64_t)uVar76 << 32) | (uint32_t)local_88->field_53016),
                             (((uint64_t)uVar14 << 32) | (uint32_t)local_88->field_53020));
            }
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            if (99 < local_88->field_53020) {
                uVar18 = local_88->field_53004 << 7 | 64;
                local_88->field_53088 = uVar18;
                uVar15 = local_88->field_53008 << 7 | 64;
                local_88->field_53096 = uVar15;
                iVar12 = GetAvH(pCVar47, uVar18, uVar15, local_88->field_51984);
                local_88->field_53092 = iVar12 - local_88->field_53012;
            }
            break;
        case (BADTYPE)77:
            iVar12 = pCVar47->g4();
            uVar8 = pCVar47->g2();
            uVar15 = uVar8 + 32768;
            if (-70001 < iVar12) {
                uVar15 = (unsigned int)uVar8;
            }
            local_c0 = (__17*)(((uint64_t)local_c0._4_4_ << 32) | (uint32_t)uVar15);
            if (*(char*)this_13 != '\0') {
                pLVar21 = logger::default_logger();
                pLVar21->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             1444, "Received full inventory for inventory: %d component: %d",
                             (((uint64_t)uVar72 << 32) | (uint32_t)((unsigned int)local_c0)),
                             (((uint64_t)uVar73 << 32) | (uint32_t)iVar12));
            }
            if (iVar12 < 0) {
                pvVar69 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&rs2lib::NULL_IFTYPE;
            } else {
                pvVar69 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)rs2lib::IfType::Get(iVar12);
            }
            lVar28 = pvVar69->end();
            bVar6 = *pvVar69 != nullptr;
            local_cc[4] = bVar6;
            if (bVar6) {
                this_13 = (Client*)(lVar28 + 1936);
                lVar51 = this_13->end();
                if (lVar51 != 0) {
                    uVar65 = 0;
                    do {
                        puVar23 = (uint32_t*)(*this_13)[uVar65];
                        *puVar23 = 0;
                        puVar23 = (uint32_t*)(*((lVar28 + 1960)))[uVar65];
                        *puVar23 = 0;
                        uVar65 = uVar65 + 1;
                        uVar24 = this_13->end();
                    } while (uVar65 < uVar24);
                }
            }
            ClientInvCache::Blank((unsigned int)local_c0);
            uVar8 = ((local_4c0 + 8))->g2();
            if (uVar8 != 0) {
                local_130 = (Array<int>*)(unsigned long)uVar8;
                pAVar50 = nullptr;
                this_13 = (Client*)local_480;
                do {
                    new (this_13) SuperShuffledPacketFactory(*((local_4c0 + 8)));
                    pPVar41 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                        ShuffledPacketFactory::p2_alt2();
                    uVar15 = pPVar41->g2();
                    pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                    pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                    bVar5 = pSVar27->g1();
                    if (bVar5 == 255) {
                        uVar18 = pSVar42->g4();
                    } else {
                        uVar18 = (unsigned int)bVar5;
                    }
                    if ((local_cc[4] != '\0') && (iVar12 = ((lVar28 + 1936))->end(), (long)pAVar50 < (long)iVar12)) {
                        puVar63 = (unsigned int*)(*((lVar28 + 1936)))[(unsigned long)pAVar50];
                        *puVar63 = uVar15 & 65535;
                        puVar63 = (unsigned int*)(*((lVar28 + 1960)))[(unsigned long)pAVar50];
                        *puVar63 = uVar18;
                    }
                    ClientInvCache::Set((unsigned int)local_c0, (int)pAVar50, (uVar15 & 65535) - 1, uVar18);
                    pAVar50 = pAVar50 + 1;
                } while (local_130 != pAVar50);
            }
            if (local_cc[4] != '\0') {
                ComponentUpdated(local_88, (shared_ptr<rs2lib::IfType>*)pvVar69);
            }
            LegacyUpdated(local_88);
        LAB_1000edfff:
            uVar15 = (unsigned int)local_c0;
        LAB_1000ee005:
            uVar18 = local_88->field_2506072;
            local_88->field_2506072 = uVar18 + 1;
            puVar63 = &local_88->field_2505944[(unsigned long)(uVar18 & 31)];
            *puVar63 = uVar15 & 32767;
            psVar43 =
                (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((int64_t)((unsigned long)this_13 >> 8)) << 8) |
                                                           (uint8_t)1);
            break;
        case (BADTYPE)78:
            uVar14 = pCVar47->g4();
            local_b8[0].field_0 = (sqlite3**)(((uint64_t)local_b8[0].field_0._4_4_ << 32) | (uint32_t)uVar14);
            if (*(char*)this_13 != '\0') {
                pLVar21 = logger::default_logger();
                pLVar21->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             3893, "if_closesub - layer:%d",
                             (((uint64_t)uVar72 << 32) | (uint32_t)((Easing)local_b8[0].field_0)));
            }
            puVar35 = local_88->field_53160;
            *local_480 = puVar35->find(local_b8);
            local_80 = puVar35->end();
            cVar4 = *local_480 != local_80;
            if (cVar4) {
                EVar2 = (Easing)local_b8[0].field_0;
                lVar28 = local_480->HeapBeginPtr();
                CloseSubinterface(local_88, EVar2, *(int*)(lVar28 + 4), true);
            }
            puVar35 = &local_88->field_52424;
            bVar6 = *puVar35 != nullptr;
            if (bVar6) {
                ComponentUpdated(local_88, (shared_ptr<rs2lib::IfType>*)puVar35);
                local_80 = shared_ptr();
                *puVar35 = local_80;
            }
            goto switchD_1000ea3f5_default;
        case (BADTYPE)79:
            local_480->gStringCP1252ToUTF8<eastl::string>(bVar6);
            local_b8 = eastl::basic_string<char, BucketAllocatorEASTL>();
            pWVar56 = (WordPack*)local_88->field_54176.operator->();
            pWVar56->UnpackCP1252AsUTF8(local_b8, *pCVar47);
            pcVar48 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar65 = local_b8.size();
            local_80 = jstring::PixfontGeneric::Escape(pcVar48, uVar65);
            core::stringtools::general::StringTools::ForceCapitalisationOfWords(local_80);
            AddChat(local_88, 6, (eastl::string*)local_480, (eastl::string*)&local_80);
            this_17 = (eastl::string*)local_480;
            goto LAB_1000ef462;
        case (BADTYPE)80:
            if (*(char*)this_13 != '\0') {
                pLVar21 = logger::default_logger();
                pLVar21->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             1193, "logout transfer");
            }
            new (local_480) GameWorld();
            local_80.gStringCP1252ToUTF8<eastl::string>(bVar6);
            (*((local_478 + 8))) = &local_80;
            uVar8 = pCVar47->g2();
            local_480._0_4_ = (uint32_t)uVar8;
            local_480._4_4_ = pCVar47->g4();
            cVar4 = local_480->IsBeta();
            if (cVar4) {
                local_428 = &BETA_CACHE_DIR_SUFFIX;
            }
            local_88->m_highlightManager->SaveToFiles();
            ((ClientVarValues*)local_88->field_52488.operator->())->SavePermVars();
            SetMainState(local_88, 45);
            puVar35 = &local_88->field_19120;
            pSVar22 = (ServerConnection*)(*puVar35).operator->();
            pSVar22->Close();
            puVar35->reset(nullptr);
            TitleScreen::SwitchToWorld(*local_480);
        LAB_1000e84af:
            psVar43 = nullptr;
            break;
        case (BADTYPE)81:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pPVar41 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            local_110[0]._0_4_ = pPVar41->g4();
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            local_f0[0].field_0._0_4_ = pSVar42->g4();
            if (*(char*)this_13 != '\0') {
                pLVar21 = logger::default_logger();
                pLVar21->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             4018, "if_movesub - srclayer:%i destlayer:%i",
                             (((uint64_t)uVar72 << 32) | (uint32_t)((unsigned int)local_f0[0].field_0)),
                             (((uint64_t)uVar73 << 32) | (uint32_t)local_110[0]._0_4_));
            }
            puVar35 = local_88->field_53160;
            *local_480 = puVar35->find(local_f0);
            local_80 = puVar35->end();
            cVar4 = *local_480 != local_80;
            iVar12 = -1;
            if (cVar4) {
                lVar28 = local_480->HeapBeginPtr();
                iVar12 = *(int*)(lVar28 + 4);
            }
            local_80 = puVar35->find(local_110);
            local_b8 = puVar35->end();
            cVar4 = local_80 != local_b8;
            uVar14 = local_110[0]._0_4_;
            if (cVar4) {
                this_13 = (Client*)(unsigned long)(unsigned int)local_110[0]._0_4_;
                lVar28 = local_80.HeapBeginPtr();
                iVar19 = *(int*)(lVar28 + 4);
                if (iVar12 == -1) {
                    bVar6 = true;
                } else {
                    lVar28 = local_80.HeapBeginPtr();
                    bVar6 = *(int*)(lVar28 + 4) != iVar12;
                }
                CloseSubinterface(local_88, uVar14, iVar19, bVar6);
            }
            local_b8 = puVar35->end();
            cVar4 = *local_480 != local_b8;
            if (cVar4) {
                lVar28 = local_480->HeapBeginPtr();
                local_b8 = game::EnvironmentOverrideParam();
                local_b8[0].field_0 = *(sqlite3***)(lVar28 + 4);
                local_b8[0].field_8._0_1_ = *(uint8_t*)(lVar28 + 12);
                pRVar60 = (ReturnValue*)(*puVar35)[local_110];
                *(uint8_t*)(pRVar60 + 1) = (uint8_t)local_b8[0].field_8;
                *pRVar60 = (ReturnValue)local_b8[0].field_0;
                puVar35->erase(local_f0);
            }
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)rs2lib::IfType::Get((unsigned int)local_f0[0].field_0);
            bVar6 = *psVar43 != nullptr;
            if (bVar6) {
                ComponentUpdated(local_88, (shared_ptr<rs2lib::IfType>*)psVar43);
            }
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)rs2lib::IfType::Get(local_110[0]._0_4_);
            bVar6 = *psVar43 != nullptr;
            if (bVar6) {
                lVar28 = psVar43->end();
                ComponentUpdated(local_88, (shared_ptr<rs2lib::IfType>*)psVar43);
                pAVar61 = (Array<shared_ptr<rs2lib::IfType>>*)(*(
                    (Array<Array<shared_ptr<rs2lib::IfType>>>*)&rs2lib::IfType::m_list))[(long)(*(int*)(lVar28 + 4) >>
                                                                                                16)];
                InterfaceCalculateSizeAndPosSubcomponents(local_88, pAVar61, (shared_ptr<rs2lib::IfType>*)psVar43,
                                                          true);
            }
            pRVar60 = (ReturnValue*)this_13;
            if (local_88->field_53216 != -1) {
                RunHookImmediate(local_88, local_88->field_53216, 24);
            }
            goto switchD_1000ea3f5_default;
        case (BADTYPE)82:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar26 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            uVar15 = pSVar26->g2();
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar18 = pSVar42->g1();
            pSVar26 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            uVar17 = pSVar26->g2();
            pSVar26 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            uVar13 = pSVar26->g4();
            psVar49 = &local_88->field_55272[(unsigned long)uVar15 & 65535];
            bVar6 = *psVar49 != nullptr;
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((uint64_t)(uint32_t)(uVar15 >> 8)) << 8) |
                                                                 (uint8_t)1);
            if (bVar6) {
                pCVar52 = (ClientEntity*)**psVar49;
                pCVar52->AddSpotAnim(uVar18 & 255, uVar17 & 65535, (int)uVar13 >> 16, uVar13 & 65535,
                                     local_88->field_8488);
            }
            break;
        case (BADTYPE)83:
            lVar28 = pCVar47->size();
            pCVar47->SetPos(lVar28 + 28);
            cVar4 = pCVar47->CheckCrc();
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            if (cVar4) {
                iVar12 = pCVar47->size();
                StoreNewPackedUID(local_88, (SuperPacket*)pCVar47, iVar12 - 28);
            }
            break;
        case (BADTYPE)84:
            iVar12 = pCVar47->g4();
            iVar19 = pCVar47->g4();
            puVar35 = &local_88->field_19120;
            pSVar22 = (ServerConnection*)(*puVar35).operator->();
            isaac = pSVar22->GetOutgoingEncryption();
            *local_480 = shared::ClientMessage::MakeClientMessage(82, *isaac);
            local_80 = SuperShuffledPacketFactory(*local_478);
            ((PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_80.HeapBeginPtr())
                ->p1<shared::LoginProt::ID>(javapal::GameShell::m_fps);
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            pSVar42->p4<unsigned int>(iVar12);
            pSVar27->p4<unsigned int>(iVar19);
            pSVar42 = (ShuffledPacket2*)local_80.HeapBeginPtr();
            pSVar42->p1<int>(0);
            pSVar22 = (ServerConnection*)(*puVar35).operator->();
            pSVar22->SendClientMessage(*local_480);
            psVar43 =
                (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((uint64_t)(uint32_t)((unsigned int)iVar12 >> 8))
                                                            << 8) |
                                                           (uint8_t)1);
            break;
        case (BADTYPE)85:
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            GetNPCPos(local_88, true, (SuperPacket*)pCVar47);
            break;
        case (BADTYPE)86:
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            EnableClanVarValues(local_88);
            break;
        case (BADTYPE)87:
            if (*(char*)this_13 != '\0') {
                pLVar21 = logger::default_logger();
                pLVar21->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             1911, "Resetting variables to authoritative set");
            }
            lVar28 = ((vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&ClientVarCache::m_var)->end();
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            if (lVar28 != 0) {
                local_c0 = (__17*)&local_88->field_2505812;
                uVar65 = 0;
                do {
                    piVar45 = (int*)(*((Array<int>*)&ClientVarCache::m_var))[uVar65];
                    iVar12 = *piVar45;
                    piVar45 = (int*)(*((Array<int>*)&ClientVarCache::m_varServ))[uVar65];
                    if (iVar12 != *piVar45) {
                        puVar23 = (uint32_t*)(*((Array<int>*)&ClientVarCache::m_varServ))[uVar65];
                        uVar14 = *puVar23;
                        puVar23 = (uint32_t*)(*((Array<int>*)&ClientVarCache::m_var))[uVar65];
                        *puVar23 = uVar14;
                        ClientVar(local_88, (int)uVar65);
                        uVar15 = local_88->field_2505940;
                        local_88->field_2505940 = uVar15 + 1;
                        piVar45 = (int*)(*local_c0)[(unsigned long)(uVar15 & 31)];
                        *piVar45 = (int)uVar65;
                    }
                    uVar65 = uVar65 + 1;
                    uVar24 = ((vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&ClientVarCache::m_var)->end();
                } while (uVar65 < uVar24);
            }
            break;
        case (BADTYPE)88:
            *(uint16_t*)&local_88->field_52996 = 256;
            local_88->field_52999 = '\0';
            bVar5 = pCVar47->g1();
            local_88->field_53024 = (unsigned int)bVar5;
            bVar5 = pCVar47->g1();
            local_88->field_53028 = (unsigned int)bVar5;
            uVar8 = pCVar47->g2();
            local_88->field_53032 = (unsigned int)uVar8;
            bVar5 = pCVar47->g1();
            local_88->field_53036 = (unsigned int)bVar5;
            bVar5 = pCVar47->g1();
            local_88->field_53040 = (unsigned int)bVar5;
            if (local_88->field_54760 != '\0') {
                pCVar47 = (Client*)logger::default_logger();
                pCVar47->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             2917, "cam_lookat lx:%i lz:%i hei:%i rate:%i rate2:%i",
                             (((uint64_t)uVar72 << 32) | (uint32_t)local_88->field_53024),
                             (((uint64_t)uVar73 << 32) | (uint32_t)local_88->field_53028),
                             (((uint64_t)uVar75 << 32) | (uint32_t)local_88->field_53032),
                             (((uint64_t)uVar76 << 32) | (uint32_t)local_88->field_53036),
                             (((uint64_t)uVar14 << 32) | (uint32_t)local_88->field_53040));
            }
            pCVar66 = local_88;
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            if (99 < local_88->field_53040) {
                uVar18 = local_88->field_53024 << 7 | 64;
                uVar15 = local_88->field_53028 << 7 | 64;
                iVar16 = GetAvH(pCVar47, uVar18, uVar15, local_88->field_51984);
                iVar12 = pCVar66->field_53032;
                arg1 = uVar18 - pCVar66->field_53088;
                iVar19 = pCVar66->field_53092;
                arg2 = uVar15 - pCVar66->field_53096;
                dVar71 = (double)sqrt<int>(arg2 * arg2 + arg1 * arg1);
                dVar71 = (double)atan2<int, int>(iVar16 - (iVar12 + iVar19), (int)dVar71);
                uVar15 = (int)(dVar71 * 325.949f) & 2047;
                pCVar66->field_53100 = uVar15;
                dVar71 = (double)atan2<int, int>(arg1, arg2);
                pCVar66->field_53104 = (int)(dVar71 * -325.949f) & 2047;
                iVar12 = dash3d::world::ClampPitchAngle(uVar15);
                pCVar66->field_53100 = iVar12;
            }
            break;
        case (BADTYPE)89:
            *(uint16_t*)&local_88->field_52996 = 256;
            local_88->field_52999 = '\x01';
            uVar15 = pCVar47->g2s();
            local_80.m_argType = WrapYawAngle(pCVar66, uVar15 & 2027);
            uVar15 = pCVar47->g2s();
            uVar14 = dash3d::world::ClampPitchAngle(uVar15 & 2027);
            local_b8[0].field_0 = (sqlite3**)(((uint64_t)local_b8[0].field_0._4_4_ << 32) | (uint32_t)uVar14);
            uVar8 = pCVar47->g2();
            local_f0[0].field_0._0_4_ = (unsigned int)uVar8;
            bVar5 = pCVar47->g1();
            local_110[0]._0_4_ = (uint32_t)bVar5;
            if (*(char*)this_13 != '\0') {
                pLVar21 = logger::default_logger();
                pLVar21->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             3107, "cam_rotateto yaw:%d pitch:%d cycles:%d easing:%d",
                             (((uint64_t)uVar72 << 32) | (uint32_t)local_80.m_argType),
                             (((uint64_t)uVar73 << 32) | (uint32_t)((Easing)local_b8[0].field_0)),
                             (((uint64_t)uVar75 << 32) | (uint32_t)((unsigned int)local_f0[0].field_0)),
                             (((uint64_t)uVar76 << 32) | (uint32_t)local_110[0]._0_4_));
            }
            pCVar66 = local_88;
            *local_480 = std::make_unique<CinemaCameraRotationTween, int&, int const&, int const&,
                                          CinemaCameraTween::Easing const&>(local_88->field_53100, local_b8, local_f0,
                                                                            local_110);
            pCVar66->field_53072 = *local_480;
            *local_480 =
                std::make_unique<CinemaCameraRotationTween, int&, int const&, int const&,
                                 CinemaCameraTween::Easing const&>(pCVar66->field_53104, local_80, local_f0, local_110);
        LAB_1000ecfdb:
            pCVar66->field_53080 = *local_480;
        LAB_1000ecff7:
            psVar43 =
                (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((int64_t)((unsigned long)this_13 >> 8)) << 8) |
                                                           (uint8_t)1);
            break;
        case (BADTYPE)90:
            new (local_480) ErrorCapture(true);
            lVar28 = local_88->field_52768.operator->();
            iVar12 = pCVar47->GetTextureAtlas();
            ((lVar28 + 208))->ProcessUpdate(*pCVar47, iVar12, *local_480);
            cVar4 = local_480->IsRaised();
            if (cVar4) {
                local_480->second();
                pcVar48 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "client_network.cpp",
                                1846, pcVar48);
            }
            ResetPlayerIgnoreIndicators(local_88);
        LAB_1000ed08d:
            local_88->field_2506344 = local_88->field_2505808;
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            break;
        case (BADTYPE)91:
            NotifyClanSettingsUpdate(local_88);
            bVar5 = pCVar47->g1s();
            make_shared<rs2lib::social::ClanChannelDelta, core::SuperPacket&>((ReturnValue*)local_480,
                                                                              (SuperPacket*)pCVar47);
            local_80 = shared_ptr();
            if (bVar5 < 4) {
                psVar30 = &local_88->field_52648[(long)(char)bVar5];
                local_80 = *psVar30;
            } else {
                local_80 = local_88->field_52632;
            }
            bVar6 = local_80 == nullptr;
            if (bVar6) {
                RequestClanChannelFull(local_88, (int)(char)bVar5);
            } else {
                lVar28 = (*local_480).operator->();
                lVar28 = *(long*)(lVar28 + 24);
                lVar51 = local_80.operator->();
                if (*(long*)(lVar51 + 80) < lVar28) {
                    RequestClanChannelFull(local_88, (int)(char)bVar5);
                } else {
                    lVar28 = (*local_480).operator->();
                    lVar28 = *(long*)(lVar28 + 24);
                    lVar51 = local_80.operator->();
                    if (*(long*)(lVar51 + 80) <= lVar28) {
                        this_12 = (ClanChannelDelta*)(*local_480).operator->();
                        pCVar59 = (ClanChannel*)*local_80;
                        this_12->ApplyToClanChannel(*pCVar59);
                        if (*(char*)this_13 != '\0') {
                            pLVar21 = logger::default_logger();
                            pLVar21->Log(false, 5,
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                         "osclient/client_network.cpp",
                                         2746, "----------");
                            pLVar21 = logger::default_logger();
                            local_80.operator->();
                            uVar34 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            pLVar21->Log(false, 5,
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                         "osclient/client_network.cpp",
                                         2747, "Clan Name: %s", uVar34);
                            uVar14 = (uint32_t)((unsigned long)uVar34 >> 32);
                            pLVar21 = logger::default_logger();
                            lVar28 = local_80.operator->();
                            cVar4 = *(char*)(lVar28 + 122);
                            lVar28 = local_80.operator->();
                            pLVar21->Log(false, 5,
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                         "osclient/client_network.cpp",
                                         2748, "Rank Kick: %i Talk: %i",
                                         (((uint64_t)uVar14 << 32) | (uint32_t)((int)cVar4)),
                                         (((uint64_t)uVar73 << 32) | (uint32_t)((int)*(char*)(lVar28 + 121))));
                            pLVar21 = logger::default_logger();
                            pLVar21->Log(false, 5,
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                         "osclient/client_network.cpp",
                                         2749, "Users:");
                            uVar65 = 0;
                            while (true) {
                                pCVar59 = (ClanChannel*)local_80.operator->();
                                iVar12 = pCVar59->GetUserListSize();
                                if ((long)iVar12 <= (long)uVar65)
                                    break;
                                lVar28 = local_80.operator->();
                                psVar46 = (shared_ptr<dash3d::GroundDecor>*)(*((lVar28 + 48)))[uVar65];
                                local_b8 = shared_ptr(psVar46);
                                this_13 = (Client*)logger::default_logger();
                                lVar28 = local_b8.operator->();
                                ((lVar28 + 16))->GetDisplayName();
                                uVar34 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                this_13->Log(false, 5,
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                             "projects/osclient/client_network.cpp",
                                             2753, "%s", uVar34);
                                uVar65 = uVar65 + 1;
                            }
                            pLVar21 = logger::default_logger();
                            pLVar21->Log(false, 5,
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                         "osclient/client_network.cpp",
                                         2755, "----------");
                        }
                    }
                }
            }
            psVar43 =
                (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((int64_t)((unsigned long)this_13 >> 8)) << 8) |
                                                           (uint8_t)1);
            break;
        case (BADTYPE)92:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            iVar12 = pSVar27->g4s();
            pSVar26 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            uVar15 = pSVar26->g2();
            psVar31 = (shared_ptr<rs2lib::IfType>*)rs2lib::IfType::Get(iVar12);
            lVar28 = **psVar31;
            iVar12 = ((uVar15 & 992) << 6 | (uVar15 & 31744) << 9) + (uVar15 & 31) * 8;
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((uint64_t)(uint32_t)(uVar15 >> 8)) << 8) |
                                                                 (uint8_t)1);
            if (*(int*)(lVar28 + 116) != iVar12) {
                *(int*)(lVar28 + 116) = iVar12;
                ComponentUpdated(local_88, psVar31);
            }
            break;
        case (BADTYPE)93:
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            ZonePacket(local_88, 0, (SuperPacket*)pCVar47);
            break;
        case (BADTYPE)94:
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            ZonePacket(local_88, 7, (SuperPacket*)pCVar47);
            break;
        case (BADTYPE)95:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pPVar41 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            uVar15 = pPVar41->g2();
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar8 = pSVar42->g2();
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            midi2::MidiManager::Stop((unsigned int)uVar8, uVar15 & 65535);
            break;
        case (BADTYPE)96:
            uVar15 = pCVar47->g1();
            uVar18 = pCVar47->g1();
            uVar17 = pCVar47->g1();
            bVar5 = pCVar47->g1();
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            if ((uint8_t)uVar15 < 5) {
                uVar65 = (unsigned long)(uVar15 & 255);
                local_88->field_2508992[uVar65 - 112] = 1;
                *(unsigned int*)(local_88->field_2508992 + uVar65 * 4 - 104) = uVar18 & 255;
                *(unsigned int*)(local_88->field_2508992 + uVar65 * 4 - 84) = uVar17 & 255;
                *(unsigned int*)(local_88->field_2508992 + uVar65 * 4 - 64) = (unsigned int)bVar5;
                *(uint32_t*)(local_88->field_2508992 + uVar65 * 4 - 44) = 0;
                if (local_88->field_54760 != '\0') {
                    pLVar21 = logger::default_logger();
                    pLVar21->Log(false, 5,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                 "client_network.cpp",
                                 2947, "cam_shake axis:%d ran:%d amp:%d rate:%d",
                                 (((uint64_t)uVar72 << 32) | (uint32_t)uVar15) & 18446744069414584575,
                                 (((uint64_t)uVar73 << 32) | (uint32_t)uVar18) & 18446744069414584575,
                                 (((uint64_t)uVar75 << 32) | (uint32_t)uVar17) & 18446744069414584575,
                                 (((uint64_t)uVar76 << 32) | (uint32_t)((unsigned int)bVar5)));
                }
            }
            break;
        case (BADTYPE)97:
            local_88->field_2506356 = local_88->field_2505808;
            cVar4 = pCVar47->g1s();
            lVar28 = pCVar47->GetTextureAtlas();
            if (lVar28 == 1) {
                if (*(char*)this_13 != '\0') {
                    pLVar21 = logger::default_logger();
                    pLVar21->Log(false, 5,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                 "client_network.cpp",
                                 2613, "Received ClanChannel RESET - affinitySlot: %i",
                                 (((uint64_t)uVar72 << 32) | (uint32_t)((int)cVar4)));
                }
                if (cVar4 < '\0') {
                    new (local_480) shared_ptr();
                    local_88->field_52632 = *local_480;
                } else {
                    new (local_480) shared_ptr();
                    psVar30 = &local_88->field_52648[(long)cVar4];
                    *psVar30 = *local_480;
                }
            } else {
                new (local_480) shared_ptr();
                if (cVar4 < '\0') {
                    make_shared<rs2lib::social::ClanChannel, core::SuperPacket&>((ReturnValue*)&local_80,
                                                                                 (SuperPacket*)pCVar47);
                    psVar30 = (shared_ptr<rs2lib::social::ClanChannel>*)local_88->field_52632 = local_80;
                    *local_480 = *psVar30;
                } else {
                    make_shared<rs2lib::social::ClanChannel, core::SuperPacket&>((ReturnValue*)&local_80,
                                                                                 (SuperPacket*)pCVar47);
                    psVar30 = &local_88->field_52648[(long)cVar4];
                    psVar30 = (shared_ptr<rs2lib::social::ClanChannel>*)* psVar30 = local_80;
                    *local_480 = *psVar30;
                }
                if (*(char*)this_13 != '\0') {
                    pLVar21 = logger::default_logger();
                    lVar28 = (*local_480).operator->();
                    uVar34 = *(uint64_t*)(lVar28 + 80);
                    pLVar21->Log(false, 5,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                 "client_network.cpp",
                                 2640, "ClanChannel affinitySlot %i received and set - updateNum: %lld",
                                 (((uint64_t)uVar72 << 32) | (uint32_t)((int)cVar4)), uVar34);
                    uVar74 = (uint32_t)((unsigned long)uVar34 >> 32);
                    pLVar21 = logger::default_logger();
                    pLVar21->Log(false, 5,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                 "client_network.cpp",
                                 2641, "----------");
                    pLVar21 = logger::default_logger();
                    (*local_480).operator->();
                    uVar34 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    pLVar21->Log(false, 5,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                 "client_network.cpp",
                                 2642, "Clan Name: %s", uVar34);
                    uVar14 = (uint32_t)((unsigned long)uVar34 >> 32);
                    pLVar21 = logger::default_logger();
                    lVar28 = (*local_480).operator->();
                    cVar4 = *(char*)(lVar28 + 122);
                    lVar28 = (*local_480).operator->();
                    uVar58 = (((uint64_t)uVar74 << 32) | (uint32_t)((int)*(char*)(lVar28 + 121)));
                    uVar34 = (((uint64_t)uVar14 << 32) | (uint32_t)((int)cVar4));
                    pLVar21->Log(false, 5,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                 "client_network.cpp",
                                 2643, "Rank Kick: %i Talk: %i", uVar34, uVar58);
                    uVar74 = (uint32_t)((unsigned long)uVar34 >> 32);
                    pLVar21 = logger::default_logger();
                    pCVar59 = (ClanChannel*)(*local_480).operator->();
                    uVar14 = pCVar59->GetUserListSize();
                    pLVar21->Log(false, 5,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                 "client_network.cpp",
                                 2644, "Users: (%i)", (((uint64_t)uVar74 << 32) | (uint32_t)uVar14));
                    uVar65 = 0;
                    while (true) {
                        uVar14 = (uint32_t)((unsigned long)uVar58 >> 32);
                        pCVar59 = (ClanChannel*)(*local_480).operator->();
                        iVar12 = pCVar59->GetUserListSize();
                        if ((long)iVar12 <= (long)uVar65)
                            break;
                        lVar28 = (*local_480).operator->();
                        psVar46 = (shared_ptr<dash3d::GroundDecor>*)(*((lVar28 + 48)))[uVar65];
                        local_80 = shared_ptr(psVar46);
                        pCVar47 = (Client*)logger::default_logger();
                        lVar28 = local_80.operator->();
                        ((lVar28 + 16))->GetDisplayName();
                        uVar34 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        lVar28 = local_80.operator->();
                        uVar58 = (((uint64_t)uVar14 << 32) | (uint32_t)((int)*(char*)(lVar28 + 8)));
                        pCVar47->Log(false, 5,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                     "osclient/client_network.cpp",
                                     2648, "ChannelUser: %s rank: %i", uVar34, uVar58);
                        uVar65 = uVar65 + 1;
                    }
                    pLVar21 = logger::default_logger();
                    pLVar21->Log(false, 5,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                 "client_network.cpp",
                                 2650, "----------");
                }
            }
            pSVar53 = (SuperShuffledPacketFactory*)local_480;
            goto LAB_1000ef06e;
        case (BADTYPE)98:
            uVar15 = pCVar47->g1();
            cVar4 = pCVar47->g1();
            if (!cVar4) {
                puVar36 = &local_88->field_52784[(unsigned long)uVar15 & 255];
                pSVar37 = (StockPlayerOffer*)operator new(32);
                new (pSVar37) rs2lib::StockPlayerOffer();
                puVar36->reset(pSVar37);
                lVar28 = pCVar47->size();
                pCVar47->SetPos(lVar28 + 18);
            } else {
                lVar28 = pCVar47->size();
                pCVar47->SetPos(lVar28 - 1);
                new (local_480) ErrorCapture(true);
                puVar36 = &local_88->field_52784[(unsigned long)uVar15 & 255];
                pSVar37 = (StockPlayerOffer*)operator new(32);
                new (pSVar37) rs2lib::StockPlayerOffer(*pCVar47, false, *local_480);
                puVar36->reset(pSVar37);
                cVar4 = local_480->IsRaised();
                if (cVar4) {
                    local_480->second();
                    uVar34 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_network.cpp",
                                    3185, "Failed to update stock market offers from server data: %s", uVar34);
                }
            }
            *(int*)&local_88->field_2506360 = local_88->field_2505808;
            psVar43 =
                (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((int64_t)((unsigned long)pCVar47 >> 8)) << 8) |
                                                           (uint8_t)1);
            break;
        case (BADTYPE)99:
            iVar12 = pCVar47->g4();
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            if (iVar12 != local_88->field_7294740) {
                local_88->field_7294740 = iVar12;
                ForceRecentreFreecam(local_88);
            }
            break;
        case (BADTYPE)100:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pPVar41 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            uVar8 = pPVar41->g2();
            local_f0[0].field_0._0_4_ = (unsigned int)uVar8;
            pSVar26 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            uVar15 = pSVar26->g3();
            local_80.m_argType = (uVar15 >> 4 & 7) + ((int)uVar15 >> 16);
            local_b8[0].field_0 = (sqlite3**)(((uint64_t)local_b8[0].field_0._4_4_ << 32) |
                                              (uint32_t)((uVar15 & 7) + (uVar15 >> 8 & 255)));
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar15 = pSVar42->g1();
            pCVar47 = (Client*)ShuffledPacketFactory::p2_alt2();
            uVar8 = pCVar47->g2();
            pCVar66 = local_88;
            local_110[0]._0_4_ = (uint32_t)uVar8;
            if (((((int)local_80.m_argType < 104) && (-1 < (int)local_80.m_argType)) &&
                 (-1 < (int)(Easing)local_b8[0].field_0)) &&
                ((int)(Easing)local_b8[0].field_0 < 104)) {
                uVar17 = local_80.m_argType << 7;
                local_80._0_8_ = (((uint64_t)local_80._4_4_ << 32) | (uint32_t)uVar17) | 64;
                uVar18 = (Easing)local_b8[0].field_0 << 7;
                local_b8[0].field_0 =
                    (sqlite3**)((((uint64_t)local_b8[0].field_0._4_4_ << 32) | (uint32_t)uVar18) | 64);
                iVar12 = GetAvH(pCVar47, uVar17 | 64, uVar18 | 64, local_88->field_51984);
                local_128[0]._0_4_ = iVar12 - (uVar15 & 255);
                make_shared<MapSpotAnim, int&, int&, int&, int&, int, int&, int&>(
                    (int*)local_480, &local_f0, &pCVar66->field_51984, (int*)&local_80, &local_b8, &local_128);
                pCVar66->field_7164616.push_back(*local_480);
            }
            goto switchD_1000ea3f5_default;
        case (BADTYPE)101:
            uVar15 = pCVar47->g1s();
            pCVar66 = (Client*)(unsigned long)uVar15;
            uVar18 = pCVar47->g2();
            uVar17 = pCVar47->g3();
            bVar5 = (uint8_t)uVar15;
            if ((char)bVar5 < '\0') {
                psVar46 = (shared_ptr<dash3d::GroundDecor>*)&local_88->field_52632;
            } else {
                psVar46 = &local_88->field_52648[(long)(char)bVar5];
            }
            local_f0 = shared_ptr(psVar46);
            bVar6 = local_f0 == nullptr;
            if (!bVar6) {
                uVar24 = ((unsigned long)uVar18 & 65535) << 32 | (unsigned long)uVar17;
                puVar35 = &local_88->field_53352;
                uVar65 = 0;
                do {
                    puVar54 = (unsigned long*)(*puVar35)[uVar65];
                    pCVar47 = local_88;
                    if (*puVar54 == uVar24)
                        goto LAB_1000edd0c;
                    uVar65 = uVar65 + 1;
                } while (uVar65 != 100);
                iVar12 = *(int*)&local_88->field_54152;
                puVar54 = (unsigned long*)(*puVar35)[(long)iVar12];
                *puVar54 = uVar24;
                *(int*)&pCVar47->field_54152 = (iVar12 + 1) % 100;
                local_b8 = eastl::basic_string<char, BucketAllocatorEASTL>();
                pWVar56 = (WordPack*)pCVar47->field_54176.operator->();
                pWVar56->UnpackCP1252AsUTF8(local_b8, *((local_4c0 + 8)));
                pcVar48 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                new (local_480) eastl::string(pcVar48);
                local_80 = eastl::string("");
                lVar28 = local_f0.operator->();
                pCVar66 = (Client*)(unsigned long)(((uint32_t)((int32_t)(uVar15 >> 8)) << 8) | (uint8_t)(bVar5 >> 7));
                AddChat(local_88, (unsigned int)(bVar5 >> 7) * 3 + 43, (eastl::string*)&local_80,
                        (eastl::string*)local_480, (eastl::string*)(lVar28 + 88));
            }
        LAB_1000edd0c:
            pSVar53 = &local_f0;
            pCVar47 = pCVar66;
        LAB_1000ef06e:
            pSVar53->~shared_ptr();
            psVar43 =
                (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((int64_t)((unsigned long)pCVar47 >> 8)) << 8) |
                                                           (uint8_t)1);
            break;
        case (BADTYPE)102:
            uVar15 = pCVar47->g1s();
            this_13 = (Client*)(unsigned long)uVar15;
            local_80.gStringCP1252ToUTF8<eastl::string>(bVar6);
            uVar11 = pCVar47->g2();
            uVar14 = pCVar47->g3();
            bVar5 = pCVar47->g1();
            p_Var29 = (__17*)constants::ChatCrownType::FromId((unsigned int)bVar5);
            local_128 = shared_ptr();
            cVar4 = (char)uVar15;
            if (cVar4 < '\0') {
                psVar30 = (shared_ptr<rs2lib::social::ClanChannel>*)&local_88->field_52632;
            } else {
                psVar30 = &local_88->field_52648[(long)cVar4];
            }
            local_c0 = p_Var29;
            local_128 = *psVar30;
            bVar6 = local_128 == nullptr;
            puVar35 = &local_88->field_53352;
            uVar65 = 0;
            do {
                puVar54 = (unsigned long*)(*puVar35)[uVar65];
                pCVar66 = local_88;
                if (*puVar54 == (unsigned long)(((uint64_t)uVar11 << 32) | (uint32_t)uVar14)) {
                    bVar6 = true;
                    break;
                }
                uVar65 = uVar65 + 1;
            } while (uVar65 != 100);
            if (local_c0->field_6 != '\0') {
                local_cc[4] = cVar4;
                pFVar55 = (FriendSystem*)local_88->field_52768.operator->();
                new (local_480) rs2lib::social::DisplayName(local_80, pCVar66->field_54172);
                cVar4 = pFVar55->IsIgnored(*local_480);
                bVar3 = true;
                if (!cVar4) {
                    bVar3 = bVar6;
                }
                bVar6 = bVar3;
                this_13 = (Client*)(((uint64_t)((int64_t)((unsigned long)pCVar66 >> 8)) << 8) | (uint8_t)local_cc[4]);
            }
            pCVar66 = local_88;
            if (bVar6 == false) {
                iVar12 = *(int*)&local_88->field_54152;
                puVar54 = (unsigned long*)(*puVar35)[(long)iVar12];
                *puVar54 = (unsigned long)(((uint64_t)uVar11 << 32) | (uint32_t)uVar14);
                *(int*)&pCVar66->field_54152 = (iVar12 + 1) % 100;
                local_110 = eastl::basic_string<char, BucketAllocatorEASTL>();
                pWVar56 = (WordPack*)pCVar66->field_54176.operator->();
                pWVar56->UnpackCP1252AsUTF8(local_110, *((local_4c0 + 8)));
                p_Var29 = local_c0;
                pcVar48 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar65 = local_110.size();
                *local_480 = jstring::PixfontGeneric::Escape(pcVar48, uVar65);
                bVar5 = (uint8_t)this_13 >> 7;
                this_13 = (Client*)(((uint64_t)((int64_t)((unsigned long)this_13 >> 8)) << 8) | (uint8_t)bVar5);
                iVar12 = (unsigned int)bVar5 * 3 + 41;
                if (*(int*)p_Var29 == -1) {
                    lVar28 = local_128.operator->();
                    AddChat(local_88, iVar12, (eastl::string*)&local_80, (eastl::string*)local_480,
                            (eastl::string*)(lVar28 + 88));
                } else {
                    local_f0 = StringConstants::TAG_IMG(*(int*)p_Var29);
                    local_b8 + local_f0;
                    lVar28 = local_128.operator->();
                    AddChat(local_88, iVar12, &local_b8, (eastl::string*)local_480, (eastl::string*)(lVar28 + 88));
                }
            }
        LAB_1000ef45e:
            this_17 = (eastl::string*)&local_80;
        LAB_1000ef462:
            this_17->~basic_string();
            psVar43 =
                (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((int64_t)((unsigned long)this_13 >> 8)) << 8) |
                                                           (uint8_t)1);
            break;
        case (BADTYPE)103:
            bVar5 = pCVar47->g1();
            bVar7 = pCVar47->g1();
            uVar15 = (unsigned int)bVar5;
            if (bVar5 == 255) {
                uVar15 = 0;
            }
            uVar18 = (unsigned int)bVar7;
            if (bVar7 == 255) {
                uVar18 = 0;
            }
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            SetPlayerDestination(local_88, uVar15, uVar18);
            break;
        case (BADTYPE)104:
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            ZonePacket(local_88, 5, (SuperPacket*)pCVar47);
            break;
        case (BADTYPE)105:
            local_cc._4_8_ = this_13;
            local_130 = (Array<int>*)pCVar47->GetTextureAtlas();
            uVar15 = pCVar47->g2();
            uVar8 = pCVar47->g2();
            uVar14 = (uint32_t)(in_stack_fffffffffffffae8 >> 32);
            if (*(uint8_t*)local_cc._4_8_ != '\0') {
                pLVar21 = logger::default_logger();
                in_stack_fffffffffffffae8 = (((uint64_t)uVar14 << 32) | (uint32_t)uVar15) & 18446744069414649855;
                pLVar21->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             3916, "Received if resync - toplevel:%d", in_stack_fffffffffffffae8);
            }
            if (local_88->field_53216 != (uVar15 & 65535)) {
                local_88->field_53216 = uVar15 & 65535;
                InterfaceCalculateSizeAndPosAll(local_88, false, false);
                IfAnimReset(local_88, local_88->field_53216);
                ScriptRunner::OnLoad(local_88->field_53216);
                puVar35 = &local_88->field_2506576;
                uVar65 = 0;
                do {
                    puVar25 = (uint8_t*)(*puVar35)[uVar65];
                    *puVar25 = 1;
                    uVar65 = uVar65 + 1;
                } while (uVar65 != 100);
            }
            local_c0 = (__17*)local_88->field_53160;
            if (uVar8 != 0) {
                iVar12 = uVar8 + 1;
                do {
                    pPVar41 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)(local_4c0 + 8);
                    uVar14 = pPVar41->g4();
                    local_b8[0].field_0 = (sqlite3**)(((uint64_t)local_b8[0].field_0._4_4_ << 32) | (uint32_t)uVar14);
                    uVar15 = pPVar41->g2();
                    bVar5 = pPVar41->g1();
                    uVar14 = (uint32_t)(in_stack_fffffffffffffae8 >> 32);
                    uVar74 = (uint32_t)(in_stack_fffffffffffffaf0 >> 32);
                    uVar72 = (uint32_t)(in_stack_fffffffffffffaf8 >> 32);
                    if (*(uint8_t*)local_cc._4_8_ != '\0') {
                        pLVar21 = logger::default_logger();
                        in_stack_fffffffffffffaf8 = (((uint64_t)uVar72 << 32) | (uint32_t)((unsigned int)bVar5));
                        in_stack_fffffffffffffaf0 =
                            (((uint64_t)uVar74 << 32) | (uint32_t)uVar15) & 18446744069414649855;
                        in_stack_fffffffffffffae8 =
                            (((uint64_t)uVar14 << 32) | (uint32_t)((Easing)local_b8[0].field_0));
                        pLVar21->Log(false, 5,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                     "osclient/client_network.cpp",
                                     3936, "Received if resync - layer:%d ifid:%d type:%d", in_stack_fffffffffffffae8,
                                     in_stack_fffffffffffffaf0, in_stack_fffffffffffffaf8);
                    }
                    *local_480 = local_c0->find(local_b8);
                    local_80 = local_c0->end();
                    cVar4 = *local_480 != local_80;
                    if (!cVar4) {
                        puVar63 = nullptr;
                    } else {
                        lVar28 = local_480->HeapBeginPtr();
                        puVar63 = (unsigned int*)(lVar28 + 4);
                    }
                    uVar14 = (uint32_t)(in_stack_fffffffffffffae8 >> 32);
                    uVar74 = (uint32_t)(in_stack_fffffffffffffaf0 >> 32);
                    if (puVar63 == nullptr) {
                        if (*(uint8_t*)local_cc._4_8_ != '\0') {
                            pLVar21 = logger::default_logger();
                            pLVar21->Log(false, 5,
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                         "osclient/client_network.cpp",
                                         3944, "if not found!");
                        }
                    LAB_1000e8c37:
                        puVar63 = nullptr;
                    } else if (*puVar63 != (uVar15 & 65535)) {
                        if (*(uint8_t*)local_cc._4_8_ != '\0') {
                            pLVar21 = logger::default_logger();
                            in_stack_fffffffffffffaf0 = (((uint64_t)uVar74 << 32) | (uint32_t)puVar63[1]);
                            in_stack_fffffffffffffae8 = (((uint64_t)uVar14 << 32) | (uint32_t)(*puVar63));
                            pLVar21->Log(false, 5,
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                         "osclient/client_network.cpp",
                                         3948, "Purging incorrect SubInterface - ifid:%d type:%d",
                                         in_stack_fffffffffffffae8, in_stack_fffffffffffffaf0);
                        }
                        CloseSubinterface(local_88, (Easing)local_b8[0].field_0, *puVar63, true);
                        goto LAB_1000e8c37;
                    }
                    if (puVar63 == nullptr) {
                        puVar63 = (unsigned int*)OpenSubinterface(local_88, (Easing)local_b8[0].field_0, uVar15 & 65535,
                                                                  (unsigned int)bVar5);
                    }
                    *(uint8_t*)(puVar63 + 2) = 1;
                    iVar12 = iVar12 - 1;
                } while (1 < iVar12);
            }
            helpers::GetKeysIf<int, SubInterface, (ServerConnection&)->TcpIn()::__17>(
                (hash_map<int, SubInterface>*)local_480, local_c0);
            pRVar60 = (ReturnValue*)local_480;
            local_f0 = pRVar60->begin();
            local_110 = pRVar60->end();
            cVar4 = local_f0 != local_110;
            if (cVar4) {
                pRVar60 = &local_b8;
                do {
                    puVar23 = (uint32_t*)*local_f0;
                    p_Var29 = local_c0;
                    local_128[0]._0_4_ = *puVar23;
                    local_80 = local_c0->find(local_128);
                    *pRVar60 = p_Var29->end();
                    cVar4 = local_80 != *pRVar60;
                    if (cVar4) {
                        lVar28 = local_80.HeapBeginPtr();
                        uVar14 = (uint32_t)(in_stack_fffffffffffffae8 >> 32);
                        uVar74 = (uint32_t)(in_stack_fffffffffffffaf0 >> 32);
                        uVar72 = (uint32_t)(in_stack_fffffffffffffaf8 >> 32);
                        if (*(uint8_t*)local_cc._4_8_ != '\0') {
                            pLVar21 = logger::default_logger();
                            in_stack_fffffffffffffaf8 =
                                (((uint64_t)uVar72 << 32) | (uint32_t)(*(uint32_t*)(lVar28 + 8)));
                            in_stack_fffffffffffffaf0 =
                                (((uint64_t)uVar74 << 32) | (uint32_t)(*(uint32_t*)(lVar28 + 4)));
                            in_stack_fffffffffffffae8 = (((uint64_t)uVar14 << 32) | (uint32_t)local_128[0]._0_4_);
                            pLVar21->Log(false, 5,
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                         "osclient/client_network.cpp",
                                         3979, "Purging unopen SubInterface - layer:%d ifid:%d type:%d",
                                         in_stack_fffffffffffffae8, in_stack_fffffffffffffaf0,
                                         in_stack_fffffffffffffaf8);
                        }
                        CloseSubinterface(local_88, local_128[0]._0_4_, *(int*)(lVar28 + 4), true);
                    }
                    ++local_f0;
                    cVar4 = local_f0 != local_110;
                } while (cVar4);
            }
            puVar35 = local_88->field_2506512;
            puVar35->clear();
            while (true) {
                this_00 =
                    (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                               eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                               eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                               eastl::prime_rehash_policy, false, true, true>*)(local_4c0 + 8);
                pAVar50 = (Array<int>*)this_00->size();
                if (local_130 <= pAVar50)
                    break;
                uVar15 = this_00->g4();
                uVar11 = this_00->g2();
                local_88 = (Client*)(((uint64_t)local_88._2_6_ << 16) | (uint16_t)uVar11);
                uVar18 = this_00->g2();
                local_f0[0].field_0._0_4_ = this_00->g4();
                uVar14 = (uint32_t)(in_stack_fffffffffffffae8 >> 32);
                uVar74 = (uint32_t)(in_stack_fffffffffffffaf0 >> 32);
                uVar72 = (uint32_t)(in_stack_fffffffffffffaf8 >> 32);
                uVar73 = (uint32_t)((unsigned long)in_stack_fffffffffffffb00 >> 32);
                uVar8 = (unsigned short)local_88;
                pRVar60 = (ReturnValue*)((unsigned long)local_88 & 65535);
                if (*(uint8_t*)local_cc._4_8_ != '\0') {
                    pLVar21 = logger::default_logger();
                    in_stack_fffffffffffffb00 =
                        (((uint64_t)uVar73 << 32) | (uint32_t)((unsigned int)local_f0[0].field_0));
                    in_stack_fffffffffffffaf8 = (((uint64_t)uVar72 << 32) | (uint32_t)uVar18) & 18446744069414649855;
                    in_stack_fffffffffffffaf0 = (((uint64_t)uVar74 << 32) | (uint32_t)((unsigned int)uVar8));
                    in_stack_fffffffffffffae8 = (((uint64_t)uVar14 << 32) | (uint32_t)uVar15);
                    pLVar21->Log(false, 5,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                 "client_network.cpp",
                                 3993, "if_setevents resync - com:%d subid1:%d subid2:%d serveractive:%d",
                                 in_stack_fffffffffffffae8, in_stack_fffffffffffffaf0, in_stack_fffffffffffffaf8,
                                 in_stack_fffffffffffffb00);
                }
                if ((unsigned short)local_88 <= (unsigned short)uVar18) {
                    do {
                        local_b8[0].field_0 = (sqlite3**)((unsigned long)uVar15 << 32 | (unsigned long)pRVar60);
                        local_80 = puVar35->emplace<unsigned long long&, int&>(local_b8, local_f0);
                        pRVar60 = (ReturnValue*)((long)&pRVar60->field_0 + 1);
                    } while ((ReturnValue*)(unsigned long)((uVar18 & 65535) + 1) != pRVar60);
                }
            }
            psVar43 =
                (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((int64_t)((unsigned long)pRVar60 >> 8)) << 8) |
                                                           (uint8_t)1);
            break;
        case (BADTYPE)106:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            iVar12 = pSVar42->g4();
            psVar31 = (shared_ptr<rs2lib::IfType>*)rs2lib::IfType::Get(iVar12);
            lVar28 = **psVar31;
            pvVar69 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(lVar28 + 1936);
            lVar28 = pvVar69->end();
            if (lVar28 != 0) {
                uVar65 = 0;
                do {
                    puVar23 = (uint32_t*)(*pvVar69)[uVar65];
                    *puVar23 = 4294967295;
                    puVar23 = (uint32_t*)(*pvVar69)[uVar65];
                    *puVar23 = 0;
                    uVar65 = uVar65 + 1;
                    uVar24 = pvVar69->end();
                } while (uVar65 < uVar24);
            }
            psVar43 =
                (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((int64_t)((unsigned long)pvVar69 >> 8)) << 8) |
                                                           (uint8_t)1);
            ComponentUpdated(local_88, psVar31);
            break;
        case (BADTYPE)107:
            local_480->gStringCP1252ToUTF8<eastl::string>(bVar6);
            pLVar21 = logger::default_logger();
            uVar34 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar21->Log(
                false, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_network.cpp",
                3222, "unimplemented message SITE_SETTINGS. Dumped setting [%s]", uVar34);
            goto LAB_1000ec994;
        case (BADTYPE)108:
            new (local_480) eastl::string();
            local_b8 = SuperShuffledPacketFactory(*pCVar47);
            bVar6 = (bool)ShuffledPacketFactory::p2_alt2();
            local_80.gStringCP1252ToUTF8<eastl::string>(bVar6);
            *local_480 = &local_80;
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar15 = pSVar42->g1();
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            bVar5 = pSVar27->g1();
            local_88->field_52344->UpdatePlayerOpChoice((unsigned int)bVar5, *local_480, uVar15 & 255);
        LAB_1000ec994:
            this_17 = (eastl::string*)local_480;
            goto LAB_1000ef462;
        case (BADTYPE)109:
            uVar15 = pCVar47->g2();
            uVar18 = pCVar47->g1();
            uVar8 = pCVar47->g2();
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            PlaySynth(local_88, uVar15 & 65535, uVar18 & 255, (unsigned int)uVar8);
            break;
        case (BADTYPE)110:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar26 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            uVar15 = pSVar26->g2();
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            uVar8 = pSVar27->g2();
            local_80._4_4_ = 4294967295;
            if (uVar8 != 65535) {
                local_80._4_4_ = (unsigned int)uVar8;
            }
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            uVar13 = pSVar27->g2();
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar18 = pSVar42->g2();
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar17 = pSVar42->g2();
            pSVar26 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            uVar8 = pSVar26->g2();
            local_80.m_argType = 4294967295;
            if (uVar8 != 65535) {
                local_80.m_argType = (unsigned int)uVar8;
            }
            new (local_480) eastl::vector<int>(&local_80, *2);
            PlaySongs(local_88, (vector<int>*)local_480, uVar18 & 65535, uVar15 & 65535, uVar13 & 65535,
                      uVar17 & 65535);
        LAB_1000ec795:
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((uint64_t)(uint32_t)(uVar13 >> 8)) << 8) |
                                                                 (uint8_t)1);
            break;
        case (BADTYPE)111:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            iVar12 = pSVar27->g4s();
            pSVar26 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            iVar19 = pSVar26->g4();
            psVar31 = (shared_ptr<rs2lib::IfType>*)rs2lib::IfType::Get(iVar19);
            pIVar32 = (IfType*)**psVar31;
            PlayerModelUtil::SetPlayerModelObj(*pIVar32, iVar12);
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            ComponentUpdated(local_88, psVar31);
            break;
        case (BADTYPE)112:
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            ZonePacket(local_88, 8, (SuperPacket*)pCVar47);
            break;
        case (BADTYPE)113:
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            if (local_88->field_52997 != '\0') {
                local_88->field_52996 = 1;
                local_88->field_52998 = 0;
                local_88->field_52999 = '\0';
                bVar5 = pCVar47->g1();
                local_88->field_53016 = (unsigned int)bVar5;
                bVar5 = pCVar47->g1();
                local_88->field_53020 = (unsigned int)bVar5;
                bVar5 = pCVar47->g1();
                local_88->field_53036 = (unsigned int)bVar5;
                bVar5 = pCVar47->g1();
                local_88->field_53040 = (unsigned int)bVar5;
                local_88->field_2508880 = 0;
                local_88->field_2508884 = 0;
            }
            break;
        case (BADTYPE)114:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            iVar12 = pSVar27->g4s();
            pPVar41 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            cVar4 = pPVar41->g1();
            psVar31 = (shared_ptr<rs2lib::IfType>*)rs2lib::IfType::Get(iVar12);
            pIVar32 = (IfType*)**psVar31;
            PlayerModelUtil::SetPlayerModel(*pIVar32, cVar4 == '\x01');
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            ComponentUpdated(local_88, psVar31);
            break;
        case (BADTYPE)115:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar15 = pSVar42->g1();
            pSVar26 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            uVar18 = pSVar26->g4();
            pPVar41 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            uVar17 = pPVar41->g2();
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar8 = pSVar42->g2();
            new (local_480) shared_ptr();
            if (local_88->field_51988 == (unsigned int)uVar8) {
                *local_480 = local_88->field_52016;
            } else {
                clientPlayer_00 = (shared_ptr<ClientPlayer>*)local_88->field_19216[(unsigned long)uVar8];
                *local_480 = *clientPlayer_00;
            }
            bVar6 = *local_480 != nullptr;
            if (bVar6) {
                pCVar52 = (ClientEntity*)(*local_480).operator->();
                pCVar52->AddSpotAnim(uVar15 & 255, uVar17 & 65535, (int)uVar18 >> 16, uVar18 & 65535,
                                     local_88->field_8488);
            }
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((uint64_t)(uint32_t)(uVar17 >> 8)) << 8) |
                                                                 (uint8_t)1);
            break;
        case (BADTYPE)116:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar42 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar8 = pSVar42->g2();
            uVar15 = 4294967295;
            if (uVar8 != 65535) {
                uVar15 = (unsigned int)uVar8;
            }
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            uVar18 = pSVar27->g1();
            pCVar66 = (Client*)&local_88->field_52016;
            clientPlayer = (ClientPlayer*)**pCVar66;
            TriggerPlayerAnim(pCVar66, clientPlayer, uVar15, uVar18 & 255);
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            if (*(char*)this_13 != '\0') {
                pLVar21 = logger::default_logger();
                pLVar21->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             4282, "Triggered anim_specific: %d delay:%d",
                             (((uint64_t)uVar72 << 32) | (uint32_t)uVar15),
                             (((uint64_t)uVar73 << 32) | (uint32_t)uVar18) & 18446744069414584575);
            }
            break;
        case (BADTYPE)117:
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            ZonePacket(local_88, 9, (SuperPacket*)pCVar47);
            break;
        case (BADTYPE)118:
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            UnpackHiscoresPacket(local_88, (SuperPacket*)pCVar47);
            break;
        case (BADTYPE)119:
            if (*(char*)this_13 != '\0') {
                pLVar21 = logger::default_logger();
                pLVar21->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             1857, "Resetting all animations");
            }
            puVar35 = &local_88->field_19216;
            uVar65 = 0;
            do {
                psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(*puVar35)[uVar65];
                bVar6 = *psVar43 != nullptr;
                if (bVar6) {
                    lVar28 = (*psVar43).operator->();
                    *(uint32_t*)(lVar28 + 372) = 4294967295;
                }
                uVar65 = uVar65 + 1;
            } while (uVar65 != 2048);
            local_88 = (Client*)&local_88->field_55272;
            uVar65 = 0;
            do {
                psVar49 = (shared_ptr<midi2::MidiPlayerMainThread>*)(*local_88)[uVar65];
                bVar6 = *psVar49 != nullptr;
                if (bVar6) {
                    lVar28 = (*psVar49).operator->();
                    *(uint32_t*)(lVar28 + 372) = 4294967295;
                }
                uVar65 = uVar65 + 1;
                psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((int64_t)((unsigned long)psVar43 >> 8))
                                                                      << 8) |
                                                                     (uint8_t)1);
            } while (uVar65 != 65536);
            break;
        case (BADTYPE)120:
            new (local_480) SuperShuffledPacketFactory(*pCVar47);
            pSVar26 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            uVar14 = pSVar26->g4();
            local_b8[0].field_0 = (sqlite3**)(((uint64_t)local_b8[0].field_0._4_4_ << 32) | (uint32_t)uVar14);
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            uVar15 = pSVar27->g1();
            pSVar27 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            uVar8 = pSVar27->g2();
            uVar18 = (unsigned int)uVar8;
            if (*(char*)this_13 != '\0') {
                pLVar21 = logger::default_logger();
                pLVar21->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             3874, "if_opensub - layer:%d ifid:%d interfacetype:%d",
                             (((uint64_t)uVar72 << 32) | (uint32_t)((Easing)local_b8[0].field_0)),
                             (((uint64_t)uVar73 << 32) | (uint32_t)uVar18),
                             (((uint64_t)uVar75 << 32) | (uint32_t)uVar15) & 18446744069414584575);
            }
            puVar35 = local_88->field_53160;
            *local_480 = puVar35->find(local_b8);
            local_80 = puVar35->end();
            cVar4 = *local_480 != local_80;
            if (cVar4) {
                lVar28 = local_480->HeapBeginPtr();
                CloseSubinterface(local_88, (Easing)local_b8[0].field_0, *(unsigned int*)(lVar28 + 4),
                                  *(unsigned int*)(lVar28 + 4) != uVar18);
            }
            OpenSubinterface(local_88, (Easing)local_b8[0].field_0, uVar18, uVar15 & 255);
            pRVar60 = (ReturnValue*)(unsigned long)uVar8;
        switchD_1000ea3f5_default:
            psVar43 =
                (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)((int64_t)((unsigned long)pRVar60 >> 8)) << 8) |
                                                           (uint8_t)1);
            break;
        case (BADTYPE)121:
            psVar43 = (shared_ptr<midi2::MidiPlayerMainThread>*)(((uint64_t)uVar70 << 8) | (uint8_t)1);
            RebuildPacket(local_88, true, (SuperPacket*)pCVar47);
        }
    LAB_1000e84b2:
        return (unsigned long)psVar43 & 4294967295;
    }

    // 0x100112a10
    void Client::Logout() {
        bool cVar1;
        int iVar2;

        field_55192 = core::SafeTime::CurrentTimeMillis();
        uint8_t* this_00 = &field_19120;
        ServerConnection* pSVar4 = (ServerConnection*)(*this_00).operator->();
        pSVar4->Close();
        ServerMessage local_58;
        while (true) {
            pSVar4 = (ServerConnection*)(*this_00).operator->();
            iVar2 = pSVar4->GetConnectionState();
            if (iVar2 != 3)
                break;
            this_thread::Sleep(10);
            do {
                pSVar4 = (ServerConnection*)(*this_00).operator->();
                cVar1 = pSVar4->GetNextServerMessage(local_58);
            } while (cVar1);
        }
        if (iVar2 != 0) {
            LogAssert(
                "m_gameCon->GetConnectionState() == ConnectionState::DISCONNECTED",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_network.cpp",
                899, nullptr);
        }
        SaveAndClosePerAccountData();
        ((world*)field_19184.operator->())->ResetMap();
        unsigned long arg1 = 0;
        do {
            ((CollisionMap*)field_6814744[arg1])->Reset();
            arg1 = arg1 + 1;
        } while (arg1 != 4);
        m_entityOverlays->DestroyAllStaticOverlays();
        field_19072->ClearFocusedComponent();
        midi2::MidiManager::Stop(0, 0);
        midi2::MidiManager::ResetPreviousSongs();
        field_2508680 = 0;
        bgsound::Reset();
        SetMainState(10);
        auto this_03 = GetLoginManager();
        auto plVar5 = this_03->GetAuthWrapper();
        if (plVar5 != nullptr) {
            (**(void (**)(...))(*plVar5 + 416))(plVar5);
        }
        field_8492 = 0;
    }

    // 0x100112b90
    void Client::LogoutWithReason(shared::PlayerFacingLogoutReason::ID id) {
        Logout();
        if (id == 1) {
            TitleScreen::ShowServerLogoffScreen();
        } else if (id == 2) {
            TitleScreen::ShowServerRebootedScreen();
        }
    }

    // 0x100112c60
    unsigned long Client::HandleUpdateFriendChatChannelFullServerProt(core::SuperPacket& superPacket,
                                                                      unsigned int arg2) {
        unsigned int uVar2;
        unsigned long uVar4;
        ReturnValue local_40;

        long lVar3 = superPacket.GetTextureAtlas();
        uint8_t* this_00 = &field_52544;
        if (lVar3 == 0) {
            *this_00 = superPacket;
            uVar4 = (((uint64_t)((int64_t)((unsigned long)this_00 >> 8)) << 8) | (uint8_t)1);
        } else {
            if (this_00 == superPacket) {
                local_40 =
                    std::make_unique<social::FriendChatChannel, rs2lib::social::NameSpace&, Client*>(field_54172, this);
                *this_00 = &local_40;
            }
            uVar2 = ((FriendChatChannel*)(*this_00).operator->())->ProcessFullUpdate(superPacket, arg2);
            uVar4 = (unsigned long)uVar2;
        }
        NotifyFriendChatUpdate();
        return uVar4 & 4294967295;
    }

    // 0x100112fd0
    uint8_t Client::HandleUpdateFriendChatChannelSingleUserServerProt(core::SuperPacket& superPacket) {
        if (&field_52544 != superPacket) {
            ((FriendChatChannel*)field_52544.operator->())->ProcessSingleUserUpdate(superPacket);
        }
        NotifyFriendChatUpdate();
        return 1;
    }

    // 0x1001131b0
    void Client::UnpackHiscoresPacket(core::SuperPacket& superPacket) {
        char* str2;

        ErrorCapture local_370(true);
        ((HiscoresManager*)field_52776.operator->())->UnpackHiscoresPacket(superPacket, local_370);
        if (local_370.IsRaised() != '\0') {
            local_370.second();
            str2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_network.cpp",
                1100, str2);
        }
    }

    // 0x100113270
    void Client::OnMidiEnd(int arg1) {
        int iVar2;
        ServerConnection* pSVar3;
        Isaac* isaac;
        uint32_t in_register_00000034;
        uint8_t local_60[64];

        uint8_t* serverConnection = &field_19120;
        if ((serverConnection != ((void*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1))) && (-1 < arg1)) {
            iVar2 = GetFinalMidiVolume();
            if ((0 < iVar2) && (field_2508680 == '\0')) {
                pSVar3 = (ServerConnection*)(*serverConnection).operator->();
                isaac = pSVar3->GetOutgoingEncryption();
                *local_60 = shared::ClientMessage::MakeClientMessage(92, *isaac);
                ((local_60 + 8))->p4<int>((unsigned long)(unsigned int)arg1);
                pSVar3 = (ServerConnection*)(*serverConnection).operator->();
                pSVar3->SendClientMessage(*local_60);
            }
        }
    }

    // 0x100113320
    void Client::RequestClanChannelFull(int arg1) {
        ServerConnection* pSVar2;
        Isaac* isaac;
        uint8_t local_58[64];

        int iVar1 = GetServerMajorVersion();
        if (215 < iVar1) {
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                      "client_network.cpp",
                      1117, "Request full clan channel update");
            pSVar2 = (ServerConnection*)field_19120.operator->();
            isaac = pSVar2->GetOutgoingEncryption();
            *local_58 = shared::ClientMessage::MakeClientMessage(96, *isaac);
            ((local_58 + 8))->p1<shared::LoginProt::ID>(arg1);
            pSVar2 = (ServerConnection*)field_19120.operator->();
            pSVar2->SendClientMessage(*local_58);
        }
    }

    // 0x1001133e0
    void Client::RequestClanSettingsFull(int arg1) {
        ServerConnection* pSVar2;
        Isaac* isaac;
        uint8_t local_58[64];

        int iVar1 = GetServerMajorVersion();
        if (215 < iVar1) {
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                      "client_network.cpp",
                      1128, "Request full clan settings update");
            pSVar2 = (ServerConnection*)field_19120.operator->();
            isaac = pSVar2->GetOutgoingEncryption();
            *local_58 = shared::ClientMessage::MakeClientMessage(97, *isaac);
            ((local_58 + 8))->p1<shared::LoginProt::ID>(arg1);
            pSVar2 = (ServerConnection*)field_19120.operator->();
            pSVar2->SendClientMessage(*local_58);
        }
    }

    // 0x100114680
    int Client::WrapYawAngle(int arg1) const {
        unsigned int uVar1 = arg1 - field_53104;
        unsigned int uVar3 = -uVar1;
        if ((int)uVar3 < 0) {
            uVar3 = uVar1;
        }
        int iVar2 = 0;
        if (1024 < uVar3) {
            iVar2 = (unsigned int)(arg1 < (int)field_53104) * 4096 - 2048;
        }
        return iVar2 + arg1;
    }

    // 0x100114a40
    void Client::ZonePacket(shared::ZoneProt::ID id, core::SuperPacket& superPacket) {
        unsigned int uVar1;
        int iVar2;
        unsigned short uVar3;
        char cVar4;
        uint8_t bVar5;
        bool cVar6;
        uint8_t bVar7;
        uint8_t uVar8;
        bool bVar9;
        unsigned short uVar10;
        uint16_t uVar11;
        int iVar12;
        uint32_t* puVar16;
        int* piVar17;
        unsigned int* puVar18;
        shared_ptr<sound::JagFX>* this_00;
        ShuffledPacket3* pSVar19;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* pPVar20;
        ShuffledPacket4* pSVar21;
        ShuffledPacket2* pSVar22;
        Client* pCVar23;
        ClientProj* pCVar24;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar25;
        AnimationWrapper* pAVar26;
        Logger* pLVar27;
        weak_ptr<dash3d::GroundDecor>* groundDecor;
        shared_ptr<ClientPlayer>* clientPlayer;
        shared_ptr<dash3d::GroundDecor>* groundDecor_00;
        world* pwVar28;
        uint8_t bVar29;
        bool cVar30;
        weak_ptr<ClientObj>* clientObj;
        weak_ptr<ClientObj>* clientObj_00;
        weak_ptr<ClientObj>* clientObj_01;
        uint8_t* puVar31;
        hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>, eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>>,
                  eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* this_01;
        LocShapeID LVar32;
        bool cVar33;
        Client* pCVar34;
        int iVar35;
        unsigned int uVar36;
        int iVar37;
        unsigned int uVar38;
        int iVar39;
        long lVar40;
        long lVar41;
        uint64_t in_stack_fffffffffffffe68;
        uint64_t in_stack_fffffffffffffe70;
        uint64_t in_stack_fffffffffffffe78;
        uint64_t in_stack_fffffffffffffe80;
        uint64_t in_stack_fffffffffffffe88;
        uint64_t in_stack_fffffffffffffe90;
        uint64_t in_stack_fffffffffffffe98;
        CoordGrid local_128;
        ReturnValue local_118;
        ReturnValue local_110;
        CoordGrid local_108;
        ListIterator<shared_ptr<rs2lib::worldmap::MapElement>, shared_ptr<rs2lib::worldmap::MapElement> const*,
                     shared_ptr<rs2lib::worldmap::MapElement> const&>* local_f8;
        CoordGrid local_f0;
        long local_e0;
        long local_d8;
        int local_cc;
        int local_c8;
        int local_c4;
        unsigned long local_c0;
        unsigned short local_b8;
        unsigned short local_b6;
        int local_b4;
        LocLayer local_b0;
        char local_ac;
        char local_ab;
        char local_aa;
        char local_a9;
        uint64_t local_a8;
        CoordGrid local_a0;
        ReturnValue local_90;
        Logger* local_88;
        hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>, eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>>,
                  eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* local_80;
        unsigned int local_78;
        unsigned int local_74;
        CoordGrid local_70;
        unsigned int local_5c;
        unsigned int local_58;
        unsigned int local_54;
        SuperShuffledPacketFactory local_48;
        unsigned int local_38;
        unsigned int local_34;

        uint32_t uVar42 = (uint32_t)((unsigned long)in_stack_fffffffffffffe68 >> 32);
        uint32_t uVar43 = (uint32_t)((unsigned long)in_stack_fffffffffffffe70 >> 32);
        uint32_t uVar44 = (uint32_t)((unsigned long)in_stack_fffffffffffffe78 >> 32);
        uint32_t uVar45 = (uint32_t)((unsigned long)in_stack_fffffffffffffe80 >> 32);
        uint32_t uVar15 = (uint32_t)((unsigned long)in_stack_fffffffffffffe88 >> 32);
        uint32_t uVar14 = (uint32_t)((unsigned long)in_stack_fffffffffffffe90 >> 32);
        uint32_t uVar13 = (uint32_t)((unsigned long)in_stack_fffffffffffffe98 >> 32);
        Client* local_50 = this;
        switch (id) {
        case 0:
            local_48 = SuperShuffledPacketFactory(superPacket);
            pSVar22 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            bVar5 = pSVar22->g1();
            pCVar34 = local_50;
            iVar35 = (bVar5 >> 4 & 7) + *(int*)&local_50->field_1115284;
            iVar37 = (bVar5 & 7) + *(int*)&local_50->field_1115288;
            pSVar21 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            bVar5 = pSVar21->g1();
            uVar36 = (unsigned int)(bVar5 >> 4);
            pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            uVar8 = pPVar20->g1();
            local_74 = (((uint32_t)local_74._1_3_ << 8) | (uint8_t)uVar8);
            pSVar21 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            uVar10 = pSVar21->g2();
            local_80 = (hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>,
                                  eastl::allocator,
                                  eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>>,
                                  eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                  true>*)(((uint64_t)local_80._4_4_ << 32) | (uint32_t)((unsigned int)uVar10));
            if (pCVar34->field_54760 != '\0') {
                local_88 = logger::default_logger();
                puVar31 = &pCVar34->field_52016;
                lVar40 = (*puVar31).operator->();
                puVar16 = (uint32_t*)(*((lVar40 + 444)))[0];
                local_a8 = (((uint64_t)local_a8._4_4_ << 32) | (uint32_t)(*puVar16));
                lVar40 = (*puVar31).operator->();
                puVar16 = (uint32_t*)(*((lVar40 + 484)))[0];
                local_88->Log(false, 5,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                              "client_network.cpp",
                              4999, "Received sound_area x:%i z:%i range:%i synth:%i loops:%i rx:%i rz:%i",
                              (((uint64_t)uVar42 << 32) | (uint32_t)iVar35),
                              (((uint64_t)uVar43 << 32) | (uint32_t)iVar37),
                              (((uint64_t)uVar44 << 32) | (uint32_t)uVar36),
                              (((uint64_t)uVar45 << 32) | (uint32_t)((int)local_80)),
                              (((uint64_t)uVar15 << 32) | (uint32_t)((unsigned int)bVar5)) & 18446744069414584327,
                              (((uint64_t)uVar14 << 32) | (uint32_t)((int)local_a8)),
                              (((uint64_t)uVar13 << 32) | (uint32_t)(*puVar16)));
            }
            local_a8 = (((uint64_t)local_a8._4_4_ << 32) | (uint32_t)((unsigned int)bVar5)) & 18446744069414584327;
            if (((iVar35 < 104) && (-1 < iVar35)) && ((-1 < iVar37 && (iVar37 < 104)))) {
                iVar12 = uVar36 + 1;
                puVar31 = &local_50->field_52016;
                local_88 = (Logger*)(unsigned long)uVar36;
                lVar40 = (*puVar31).operator->();
                piVar17 = (int*)(*((lVar40 + 444)))[0];
                if (iVar35 - iVar12 <= *piVar17) {
                    lVar40 = (*puVar31).operator->();
                    piVar17 = (int*)(*((lVar40 + 444)))[0];
                    if (*piVar17 <= iVar12 + iVar35) {
                        lVar40 = (*puVar31).operator->();
                        piVar17 = (int*)(*((lVar40 + 484)))[0];
                        if (iVar37 - iVar12 <= *piVar17) {
                            lVar40 = (*puVar31).operator->();
                            piVar17 = (int*)(*((lVar40 + 484)))[0];
                            if ((((*piVar17 <= iVar12 + iVar37) &&
                                  (iVar12 = GetFinalAmbientVolume(local_50), pCVar34 = local_50, uVar36 = local_74,
                                   iVar12 != 0)) &&
                                 ((int)local_a8 != 0)) &&
                                ((long)local_50->field_2508752 < 50)) {
                                puVar16 = &local_50->field_2508760[(long)local_50->field_2508752];
                                *puVar16 = (int)local_80;
                                puVar16 = &pCVar34->field_2508784[(long)pCVar34->field_2508752];
                                *puVar16 = (int)local_a8;
                                puVar18 = &pCVar34->field_2508808[(long)pCVar34->field_2508752];
                                *puVar18 = uVar36 & 255;
                                local_48 = shared_ptr();
                                this_00 =
                                    (shared_ptr<sound::JagFX>*)pCVar34->field_2508856[(long)pCVar34->field_2508752];
                                *this_00 = local_48;
                                iVar35 = iVar37 * 256 + iVar35 * 65536 + (unsigned int)local_88;
                                piVar17 = &pCVar34->field_2508832[(long)pCVar34->field_2508752];
                                *piVar17 = iVar35;
                                pCVar34->field_2508752 = pCVar34->field_2508752 + 1;
                            }
                        }
                    }
                }
            }
            break;
        case 1:
            local_48 = SuperShuffledPacketFactory(superPacket);
            pSVar22 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar10 = pSVar22->g2();
            local_54 = (unsigned int)uVar10;
            pSVar22 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            bVar5 = pSVar22->g1();
            pCVar34 = local_50;
            local_70.m_level = (bVar5 >> 4 & 7) + *(int*)&local_50->field_1115284;
            local_a0.m_level = (bVar5 & 7) + *(int*)&local_50->field_1115288;
            pSVar21 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            cVar4 = pSVar21->g1s();
            pSVar19 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            local_90._0_4_ = pSVar19->g3s();
            pSVar22 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            bVar5 = pSVar22->g1();
            local_5c = (unsigned int)bVar5;
            pSVar21 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            uVar10 = pSVar21->g2();
            local_88 = (Logger*)(((uint64_t)local_88._4_4_ << 32) | (uint32_t)((unsigned int)uVar10));
            pSVar22 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            cVar6 = pSVar22->g1s();
            pSVar19 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            bVar5 = pSVar19->g1();
            local_58 = (unsigned int)bVar5 << 2;
            pSVar22 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            bVar5 = pSVar22->g1();
            local_34 = (unsigned int)bVar5;
            pSVar22 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            bVar5 = pSVar22->g1();
            pCVar23 = (Client*)ShuffledPacketFactory::p2_alt2();
            uVar10 = pCVar23->g2();
            local_80 =
                (hashtable<
                    eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>, eastl::allocator,
                    eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>>,
                    eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)(unsigned long)uVar10;
            iVar35 = (int)cVar6 + local_70.m_level;
            iVar37 = (int)cVar4 + local_a0.m_level;
            if (pCVar34->field_54760 != '\0') {
                pCVar23 = (Client*)logger::default_logger();
                pCVar23->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             4656,
                             "Received projanim x:%i z:%i x2:%i z2:%i targetEntity:%i spotanim:%i h1:%i h2:%i t1:%i "
                             "t2:%i angle:%i startpos:%i",
                             (((uint64_t)uVar42 << 32) | (uint32_t)local_70.m_level),
                             (((uint64_t)uVar43 << 32) | (uint32_t)local_a0.m_level),
                             (((uint64_t)uVar44 << 32) | (uint32_t)iVar35),
                             (((uint64_t)uVar45 << 32) | (uint32_t)iVar37),
                             (((uint64_t)uVar15 << 32) | (uint32_t)local_90._0_4_),
                             (((uint64_t)uVar14 << 32) | (uint32_t)local_54),
                             (((uint64_t)uVar13 << 32) | (uint32_t)((unsigned int)bVar5 * 4)), local_58, (int)local_80,
                             (unsigned int)local_88, local_5c, local_34);
            }
            pCVar34 = local_50;
            if (103 < (int)local_70.m_level) {
                return;
            }
            if ((int)local_70.m_level < 0) {
                return;
            }
            if ((int)local_a0.m_level < 0) {
                return;
            }
            if (103 < (int)local_a0.m_level) {
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
            local_70.m_level = local_70.m_level << 7 | 64;
            local_a0.m_level = local_a0.m_level << 7 | 64;
            piVar17 = &local_50->field_51984;
            iVar12 = GetAvH(pCVar23, local_70.m_level, local_a0.m_level, local_50->field_51984);
            local_38 = iVar12 + (unsigned int)bVar5 * -4;
            local_78 = (int)local_80 + pCVar34->field_8488;
            local_b4 = pCVar34->field_8488 + (unsigned int)local_88;
            make_shared<ClientProj, int&, int&, int&, int&, int, int, int, int&, int&, int&, int&>(
                (int*)&local_48, (int*)&local_54, piVar17, (int*)&local_70, (int*)&local_a0, (int*)&local_38,
                (int*)&local_78, &local_b4, (int*)&local_5c, (int*)&local_34, (int*)&local_90);
            pCVar23 = (Client*)&local_48;
            pCVar24 = (ClientProj*)(*pCVar23).operator->();
            uVar36 = iVar35 * 128 | 64;
            uVar38 = iVar37 * 128 | 64;
            iVar35 = GetAvH(pCVar23, uVar36, uVar38, *piVar17);
            pCVar24->SetTarget(uVar36, uVar38, iVar35 - local_58, (int)local_80 + pCVar34->field_8488);
            pCVar34->field_7164584.push_back(local_48);
            goto LAB_1001154e6;
        case 2:
            local_48 = SuperShuffledPacketFactory(superPacket);
            LVar32 = (LocShapeID)superPacket;
            pSVar19 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            bVar5 = pSVar19->g1();
            bVar7 = bVar5 >> 2;
            local_a8 = (((uint64_t)local_a8._1_7_ << 8) | (uint8_t)bVar5);
            local_54 = (unsigned int)(bVar5 & 3);
            local_88 = (Logger*)(((uint64_t)local_88._4_4_ << 32) | (uint32_t)((unsigned int)bVar7));
            uVar36 = ((LocShape*)(unsigned long)bVar7)->ToLayer(LVar32);
            pSVar22 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar10 = pSVar22->g2();
            local_58 = (unsigned int)uVar10;
            pSVar19 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            bVar5 = pSVar19->g1();
            local_a0.m_level = (bVar5 >> 4 & 7) + *(int*)&local_50->field_1115284;
            local_90._0_4_ = (bVar5 & 7) + *(int*)&local_50->field_1115288;
            local_80 =
                (hashtable<
                    eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>, eastl::allocator,
                    eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>>,
                    eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)((unsigned long)uVar36 &
                                                                                                 255);
            if (local_50->field_54760 != '\0') {
                pLVar27 = logger::default_logger();
                pLVar27->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             4428, "Received loc_anim x:%i z:%i seq:%i layer:%u",
                             (((uint64_t)uVar42 << 32) | (uint32_t)local_a0.m_level),
                             (((uint64_t)uVar43 << 32) | (uint32_t)local_90._0_4_),
                             (((uint64_t)uVar44 << 32) | (uint32_t)local_58),
                             (((uint64_t)uVar45 << 32) | (uint32_t)((int)local_80)));
            }
            pCVar34 = local_50;
            uVar42 = local_90._0_4_;
            uVar36 = local_a0.m_level;
            if (102 < (int)local_a0.m_level) {
                return;
            }
            if ((int)local_a0.m_level < 0) {
                return;
            }
            if ((int)local_90._0_4_ < 0) {
                return;
            }
            if (102 < (int)local_90._0_4_) {
                return;
            }
            switch (local_80) {
            case nullptr:
                pwVar28 = (world*)local_50->field_19184.operator->();
                local_48 = pwVar28->GetWall(pCVar34->field_51984, uVar36, uVar42);
                bVar9 = local_48 != nullptr;
                if (bVar9) {
                    lVar40 = local_48.operator->();
                    local_5c = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(long long*)(lVar40 + 56));
                    piVar17 = &local_50->field_51984;
                    if (bVar7 == 2) {
                        local_34 = 2;
                        local_38 = local_54 + 4;
                        local_78 = local_78 & 4294967040;
                        lVar40 = local_48.operator->();
                        make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool,
                                    shared_ptr<dash3d::ModelSource>&, int&>(
                            (int*)&local_70, (int*)&local_5c, (int*)&local_34, (int*)&local_38, piVar17,
                            (int*)&local_a0, (int*)&local_90, (bool*)&local_58,
                            (shared_ptr<dash3d::ModelSource>*)&local_78, (int*)(lVar40 + 24));
                        lVar40 = local_48.operator->();
                        (*((lVar40 + 24))) = local_70;
                        local_34 = 2;
                        local_38 = local_54 + 1 & 3;
                        local_78 = local_78 & 4294967040;
                        lVar40 = local_48.operator->();
                        make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool,
                                    shared_ptr<dash3d::ModelSource>&, int&>(
                            (int*)&local_70, (int*)&local_5c, (int*)&local_34, (int*)&local_38, piVar17,
                            (int*)&local_a0, (int*)&local_90, (bool*)&local_58,
                            (shared_ptr<dash3d::ModelSource>*)&local_78, (int*)(lVar40 + 40));
                        lVar40 = local_48.operator->();
                        (*((lVar40 + 40))) = local_70;
                    } else {
                        local_34 = (unsigned int)local_88;
                        local_38 = local_38 & 4294967040;
                        lVar40 = local_48.operator->();
                        make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool,
                                    shared_ptr<dash3d::ModelSource>&, int&>(
                            (int*)&local_70, (int*)&local_5c, (int*)&local_34, (int*)&local_54, piVar17,
                            (int*)&local_a0, (int*)&local_90, (bool*)&local_58,
                            (shared_ptr<dash3d::ModelSource>*)&local_38, (int*)(lVar40 + 24));
                        lVar40 = local_48.operator->();
                        (*((lVar40 + 24))) = local_70;
                    }
                    if (bVar9) {
                        return;
                    }
                } else {
                }
                break;
            case (
                hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>, eastl::allocator,
                          eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>>,
                          eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                          eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)1:
                pwVar28 = (world*)local_50->field_19184.operator->();
                local_48 = pwVar28->GetDecor(pCVar34->field_51984, uVar36, uVar42);
                bVar9 = local_48 != nullptr;
                if (bVar9) {
                    lVar40 = local_48.operator->();
                    local_5c = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(long long*)(lVar40 + 64));
                    piVar17 = &local_50->field_51984;
                    if (((uint8_t)local_a8 & 248) == 16) {
                        local_34 = 4;
                        local_38 = local_38 & 4294967040;
                        lVar40 = local_48.operator->();
                        make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool,
                                    shared_ptr<dash3d::ModelSource>&, int&>(
                            (int*)&local_70, (int*)&local_5c, (int*)&local_34, (int*)&local_54, piVar17,
                            (int*)&local_a0, (int*)&local_90, (bool*)&local_58,
                            (shared_ptr<dash3d::ModelSource>*)&local_38, (int*)(lVar40 + 32));
                        lVar40 = local_48.operator->();
                        (*((lVar40 + 32))) = local_70;
                    LAB_100116e8f:
                    } else {
                        if (bVar7 == 8) {
                            local_34 = 4;
                            local_38 = local_54 + 4;
                            local_78 = (unsigned int)local_78._1_3_ << 8;
                            lVar40 = local_48.operator->();
                            make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool,
                                        shared_ptr<dash3d::ModelSource>&, int&>(
                                (int*)&local_70, (int*)&local_5c, (int*)&local_34, (int*)&local_38, piVar17,
                                (int*)&local_a0, (int*)&local_90, (bool*)&local_58,
                                (shared_ptr<dash3d::ModelSource>*)&local_78, (int*)(lVar40 + 32));
                            lVar40 = local_48.operator->();
                            (*((lVar40 + 32))) = local_70;
                            local_34 = 4;
                            local_38 = local_54 + 2 & 3 | 4;
                            local_78 = local_78 & 4294967040;
                            lVar40 = local_48.operator->();
                            make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool,
                                        shared_ptr<dash3d::ModelSource>&, int&>(
                                (int*)&local_70, (int*)&local_5c, (int*)&local_34, (int*)&local_38, piVar17,
                                (int*)&local_a0, (int*)&local_90, (bool*)&local_58,
                                (shared_ptr<dash3d::ModelSource>*)&local_78, (int*)(lVar40 + 48));
                            lVar40 = local_48.operator->();
                            (*((lVar40 + 48))) = local_70;
                            goto LAB_100116e8f;
                        }
                        if (bVar7 == 7) {
                            local_34 = 4;
                            local_38 = local_54 + 2 & 3 | 4;
                            local_78 = (unsigned int)local_78._1_3_ << 8;
                            lVar40 = local_48.operator->();
                            make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool,
                                        shared_ptr<dash3d::ModelSource>&, int&>(
                                (int*)&local_70, (int*)&local_5c, (int*)&local_34, (int*)&local_38, piVar17,
                                (int*)&local_a0, (int*)&local_90, (bool*)&local_58,
                                (shared_ptr<dash3d::ModelSource>*)&local_78, (int*)(lVar40 + 32));
                            lVar40 = local_48.operator->();
                            (*((lVar40 + 32))) = local_70;
                            goto LAB_100116e8f;
                        }
                        if (bVar7 == 6) {
                            local_34 = 4;
                            local_38 = local_54 + 4;
                            local_78 = local_78 & 4294967040;
                            lVar40 = local_48.operator->();
                            make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool,
                                        shared_ptr<dash3d::ModelSource>&, int&>(
                                (int*)&local_70, (int*)&local_5c, (int*)&local_34, (int*)&local_38, piVar17,
                                (int*)&local_a0, (int*)&local_90, (bool*)&local_58,
                                (shared_ptr<dash3d::ModelSource>*)&local_78, (int*)(lVar40 + 32));
                            lVar40 = local_48.operator->();
                            (*((lVar40 + 32))) = local_70;
                            goto LAB_100116e8f;
                        }
                    }
                    if (bVar9) {
                        return;
                    }
                } else {
                }
                break;
            case (
                hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>, eastl::allocator,
                          eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>>,
                          eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                          eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)2:
                pwVar28 = (world*)local_50->field_19184.operator->();
                local_48 = pwVar28->GetScene(pCVar34->field_51984, uVar36, uVar42);
                uVar36 = 10;
                if ((char)local_88 != '\v') {
                    uVar36 = (unsigned int)local_88;
                }
                bVar9 = local_48 != nullptr;
                if (bVar9) {
                    lVar40 = local_48.operator->();
                    local_5c = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(long long*)(lVar40 + 80));
                    local_34 = uVar36 & 255;
                    local_38 = local_38 & 4294967040;
                    lVar40 = local_48.operator->();
                    make_shared<ClientLocAnim, int, int, int&, int&, int&, int&, int&, bool,
                                shared_ptr<dash3d::ModelSource>&, int&>(
                        (int*)&local_70, (int*)&local_5c, (int*)&local_34, (int*)&local_54, &local_50->field_51984,
                        (int*)&local_a0, (int*)&local_90, (bool*)&local_58, (shared_ptr<dash3d::ModelSource>*)&local_38,
                        (int*)(lVar40 + 32));
                    lVar40 = local_48.operator->();
                    (*((lVar40 + 32))) = local_70;
                LAB_100116b55:
                    if (bVar9 != false) {
                        return;
                    }
                } else {
                }
                break;
            case (
                hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>, eastl::allocator,
                          eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>>,
                          eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                          eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)3:
                pwVar28 = (world*)local_50->field_19184.operator->();
                local_48 = pwVar28->GetGd(pCVar34->field_51984, uVar36, uVar42);
                bVar9 = local_48 != nullptr;
                if (bVar9) {
                    lVar40 = local_48.operator->();
                    local_5c = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(long long*)(lVar40 + 32));
                    local_34 = 22;
                    local_38 = local_38 & 4294967040;
                    lVar40 = local_48.operator->();
                    make_shared<ClientLocAnim, int, int, int&, int&, int&, int&, int&, bool,
                                shared_ptr<dash3d::ModelSource>&, int&>(
                        (int*)&local_70, (int*)&local_5c, (int*)&local_34, (int*)&local_54, &pCVar34->field_51984,
                        (int*)&local_a0, (int*)&local_90, (bool*)&local_58, (shared_ptr<dash3d::ModelSource>*)&local_38,
                        (int*)(lVar40 + 16));
                    lVar40 = local_48.operator->();
                    (*((lVar40 + 16))) = local_70;
                    bVar9 = true;
                    goto LAB_100116b55;
                }
            }
            LocChangeAnim(local_50, local_50->field_51984, local_a0.m_level, local_90._0_4_, (LocLayer)local_80,
                          local_58);
            break;
        case 3:
            local_48 = SuperShuffledPacketFactory(superPacket);
            pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            bVar5 = pPVar20->g1();
            pCVar34 = local_50;
            lVar41 = (unsigned long)(bVar5 >> 4 & 7) + (long)*(int*)&local_50->field_1115284;
            lVar40 = (unsigned long)(bVar5 & 7) + (long)*(int*)&local_50->field_1115288;
            pSVar21 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            uVar15 = pSVar21->g1();
            pSVar22 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar10 = pSVar22->g2();
            iVar35 = (int)lVar40;
            iVar37 = (int)lVar41;
            if (pCVar34->field_54760 != '\0') {
                pLVar27 = logger::default_logger();
                pLVar27->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             4955, "Received obj_enabled_ops x:%d z:%d type:%d enabledOpsBitMask:%u",
                             (((uint64_t)uVar42 << 32) | (uint32_t)iVar37),
                             (((uint64_t)uVar43 << 32) | (uint32_t)iVar35),
                             (((uint64_t)uVar44 << 32) | (uint32_t)((unsigned int)uVar10)),
                             (((uint64_t)uVar45 << 32) | (uint32_t)uVar15) & 18446744069414584575);
            }
            if (((iVar37 < 104) && (-1 < iVar37)) && ((-1 < iVar35 && (iVar35 < 104)))) {
                iVar35 = local_50->field_51984;
                puVar31 = local_50->field_1120504;
                local_48 = ((list<console::Line>*)(puVar31 + lVar40 * 32 + lVar41 * 3328 + (long)iVar35 * 346112 + 56))
                               ->begin();
                local_70 =
                    ((list<console::Line>*)(puVar31 + lVar40 * 32 + lVar41 * 3328 + (long)iVar35 * 346112 + 56))->end();
                cVar4 = local_48 != local_70;
                if (cVar4) {
                    do {
                        pvVar25 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)*local_48;
                        pAVar26 = (AnimationWrapper*)pvVar25->end();
                        if (*(unsigned int*)(pAVar26->m_source + 8) == (uVar10 & 32767)) {
                            pAVar26->SetReadyAnim((unsigned char)uVar15);
                            return;
                        }
                        ++local_48;
                        cVar4 = local_48 != local_70;
                    } while (cVar4);
                }
            }
            break;
        case 4:
            local_48 = SuperShuffledPacketFactory(superPacket);
            LVar32 = (LocShapeID)superPacket;
            pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            bVar5 = pPVar20->g1();
            pCVar34 = local_50;
            iVar35 = (bVar5 >> 4 & 7) + *(int*)&local_50->field_1115284;
            iVar37 = (bVar5 & 7) + *(int*)&local_50->field_1115288;
            pSVar19 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            bVar5 = pSVar19->g1();
            bVar29 = bVar5 >> 2;
            bVar7 = ((LocShape*)(unsigned long)bVar29)->ToLayer(LVar32);
            if (pCVar34->field_54760 != '\0') {
                pLVar27 = logger::default_logger();
                pLVar27->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             4397, "Received loc_del x:%d z:%d rotate:%d shape:%u",
                             (((uint64_t)uVar42 << 32) | (uint32_t)iVar35),
                             (((uint64_t)uVar43 << 32) | (uint32_t)iVar37),
                             (((uint64_t)uVar44 << 32) | (uint32_t)((unsigned int)(bVar5 & 3))),
                             (((uint64_t)uVar45 << 32) | (uint32_t)((unsigned int)bVar29)));
            }
            if ((((iVar35 < 104) && (-1 < iVar35)) && (-1 < iVar37)) && (iVar37 < 104)) {
                LocChangeCreate(local_50, local_50->field_51984, iVar35, iVar37, (unsigned int)bVar7, -1,
                                (unsigned int)bVar29, (unsigned int)(bVar5 & 3), '\x1f', 0, -1);
            }
            break;
        case 5:
            local_48 = SuperShuffledPacketFactory(superPacket);
            pSVar19 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            uVar14 = pSVar19->g4();
            local_88 = (Logger*)(((uint64_t)local_88._4_4_ << 32) | (uint32_t)uVar14);
            pSVar21 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            uVar13 = pSVar21->g4s();
            pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            bVar5 = pPVar20->g1();
            pCVar34 = local_50;
            lVar41 = (unsigned long)(bVar5 >> 4 & 7) + (long)*(int*)&local_50->field_1115284;
            lVar40 = (unsigned long)(bVar5 & 7) + (long)*(int*)&local_50->field_1115288;
            pSVar19 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            uVar10 = pSVar19->g2();
            uVar14 = (unsigned int)local_88;
            local_74 = (unsigned int)uVar10;
            iVar37 = (int)lVar40;
            iVar35 = (int)lVar41;
            if (pCVar34->field_54760 != '\0') {
                pLVar27 = logger::default_logger();
                pLVar27->Log(
                    false, 5,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                    "client_network.cpp",
                    4907, "Received obj_count x:%d z:%d type:%d ocount:%d count:%d",
                    (((uint64_t)uVar42 << 32) | (uint32_t)iVar35), (((uint64_t)uVar43 << 32) | (uint32_t)iVar37),
                    (((uint64_t)uVar44 << 32) | (uint32_t)local_74), (((uint64_t)uVar45 << 32) | (uint32_t)uVar13),
                    (((uint64_t)uVar15 << 32) | (uint32_t)uVar14));
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
            local_80 = (hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>,
                                  eastl::allocator,
                                  eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>>,
                                  eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                  true>*)(((uint64_t)local_80._4_4_ << 32) | (uint32_t)uVar13);
            iVar37 = local_50->field_51984;
            puVar31 = local_50->field_1120504;
            local_a8 = lVar40;
            local_a0 =
                ((list<console::Line>*)(puVar31 + lVar40 * 32 + lVar41 * 3328 + (long)iVar37 * 346112 + 56))->begin();
            local_90 =
                ((list<console::Line>*)(puVar31 + lVar40 * 32 + lVar41 * 3328 + (long)iVar37 * 346112 + 56))->end();
            cVar4 = local_a0 != local_90;
            if (cVar4) {
                uVar36 = local_74 & 32767;
                do {
                    pvVar25 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)*local_a0;
                    lVar40 = pvVar25->end();
                    uVar38 = local_74;
                    if ((*(unsigned int*)(lVar40 + 24) == uVar36) && (*(int*)(lVar40 + 28) == (int)local_80)) {
                        *(unsigned int*)(lVar40 + 28) = (unsigned int)local_88;
                        local_48 = configdecoder::ObjType::List(local_74);
                        local_70 = rs2lib::CoordGrid(local_50->field_51984, iVar35, (int)local_a8);
                        local_f0 = weak_ptr(*pvVar25);
                        local_70.SetActiveObj(local_f0, clientObj);
                        lVar40 = local_48.operator->();
                        ScriptRunner::ExecuteScript(46, uVar38, *(int*)(lVar40 + 672), 500000);
                        break;
                    }
                    ++local_a0;
                    cVar4 = local_a0 != local_90;
                } while (cVar4);
            }
            pCVar34 = local_50;
            lVar40 = local_a8;
            ShowObject(local_50, iVar35, (int)local_a8);
            iVar37 = pCVar34->field_51984;
            goto LAB_100116569;
        case 6:
            local_48 = SuperShuffledPacketFactory(superPacket);
            pSVar19 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            bVar5 = pSVar19->g1();
            pCVar34 = local_50;
            local_70.m_level = (bVar5 >> 4 & 7) + *(int*)&local_50->field_1115284;
            local_a0.m_level = (bVar5 & 7) + *(int*)&local_50->field_1115288;
            pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            uVar10 = pPVar20->g2();
            local_54 = (unsigned int)uVar10;
            pSVar19 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            bVar5 = pSVar19->g1();
            pCVar23 = (Client*)ShuffledPacketFactory::p2_alt2();
            uVar10 = pCVar23->g2();
            local_90._0_4_ = (uint32_t)uVar10;
            if (pCVar34->field_54760 != '\0') {
                pCVar23 = (Client*)logger::default_logger();
                pCVar23->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             4757, "Received map_anim x:%d z:%d spotanim:%d height:%d time:%d",
                             (((uint64_t)uVar42 << 32) | (uint32_t)local_70.m_level),
                             (((uint64_t)uVar43 << 32) | (uint32_t)local_a0.m_level),
                             (((uint64_t)uVar44 << 32) | (uint32_t)local_90._0_4_),
                             (((uint64_t)uVar45 << 32) | (uint32_t)((unsigned int)bVar5)),
                             (((uint64_t)uVar15 << 32) | (uint32_t)local_54));
            }
            if ((((int)local_70.m_level < 104) && (-1 < (int)local_70.m_level)) &&
                ((-1 < (int)local_a0.m_level && ((int)local_a0.m_level < 104)))) {
                local_70.m_level = local_70.m_level << 7 | 64;
                local_a0.m_level = local_a0.m_level << 7 | 64;
                iVar35 = GetAvH(pCVar23, local_70.m_level, local_a0.m_level, pCVar34->field_51984);
                local_58 = iVar35 - (unsigned int)bVar5;
                make_shared<MapSpotAnim, int&, int&, int&, int&, int, int&, int&>(
                    (int*)&local_48, (int*)&local_90, &pCVar34->field_51984, (int*)&local_70, (int*)&local_a0,
                    (int*)&local_58, (int*)&local_54);
                pCVar34->field_7164616.push_back(local_48);
            }
            break;
        case 7:
            local_48 = SuperShuffledPacketFactory(superPacket);
            LVar32 = (LocShapeID)superPacket;
            pSVar22 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            bVar5 = pSVar22->g1();
            local_74 = (((uint32_t)local_74._1_3_ << 8) | (uint8_t)bVar5);
            local_80 = (hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>,
                                  eastl::allocator,
                                  eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>>,
                                  eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                  true>*)(((uint64_t)local_80._4_4_ << 32) | (uint32_t)((unsigned int)(bVar5 & 3)));
            local_88 = (Logger*)(((uint64_t)local_88._4_4_ << 32) | (uint32_t)((unsigned int)(bVar5 >> 2)));
            uVar8 = ((LocShape*)(unsigned long)(bVar5 >> 2))->ToLayer(LVar32);
            local_b0 = (((uint32_t)local_b0._1_3_ << 8) | (uint8_t)uVar8);
            pSVar19 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            bVar5 = pSVar19->g1();
            pCVar34 = local_50;
            iVar35 = (bVar5 >> 4 & 7) + *(int*)&local_50->field_1115284;
            uVar36 = (bVar5 & 7) + *(int*)&local_50->field_1115288;
            pSVar21 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            uVar10 = pSVar21->g2();
            local_a8 = (((uint64_t)local_a8._4_4_ << 32) | (uint32_t)((unsigned int)uVar10));
            pSVar22 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            local_ac = pSVar22->g1s();
            pSVar19 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            local_ab = pSVar19->g1s();
            pSVar22 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            local_b8 = pSVar22->g2();
            pSVar22 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar10 = pSVar22->g2();
            pSVar21 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            local_a9 = pSVar21->g1s();
            pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            local_aa = pPVar20->g1s();
            uVar14 = (unsigned int)local_88;
            pSVar21 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            local_b6 = pSVar21->g2();
            uVar13 = (int)local_80;
            if (pCVar34->field_54760 != '\0') {
                pLVar27 = logger::default_logger();
                pLVar27->Log(
                    false, 5,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                    "client_network.cpp",
                    4815, "Received p_locmerge x:%d z:%d id:%d rotate:%d shape:%u",
                    (((uint64_t)uVar42 << 32) | (uint32_t)iVar35), (((uint64_t)uVar43 << 32) | (uint32_t)uVar36),
                    (((uint64_t)uVar44 << 32) | (uint32_t)((unsigned int)uVar10)),
                    (((uint64_t)uVar45 << 32) | (uint32_t)uVar13), (((uint64_t)uVar15 << 32) | (uint32_t)uVar14));
            }
            local_48 = shared_ptr();
            if (local_50->field_51988 == (int)local_a8) {
                local_48 = local_50->field_52016;
            } else {
                clientPlayer = &local_50->field_19216[local_a8 & 4294967295];
                local_48 = *clientPlayer;
            }
            bVar9 = local_48 != nullptr;
            if (bVar9) {
                local_d8 = local_48.end();
                groundDecor_00 = (shared_ptr<dash3d::GroundDecor>*)configdecoder::LocType::List((unsigned int)uVar10);
                local_70 = shared_ptr(groundDecor_00);
                local_e0 = local_70.end();
                pCVar34 = local_50;
                uVar38 = *(unsigned int*)(local_e0 + 184 + (unsigned long)((uint8_t)local_74 & 1) * 4);
                local_c0 = (unsigned long)uVar38;
                uVar1 = *(unsigned int*)(local_e0 + 184 + (unsigned long)((local_74 & 1) == 0) * 4);
                local_a8 = (unsigned long)uVar1;
                iVar39 = ((int)uVar38 >> 1) + iVar35;
                iVar37 = ((int)uVar1 >> 1) + uVar36;
                local_74 = uVar36;
                local_c8 = ClientBuild::Read3DArray<int>((Array<int>*)&ClientBuild::m_groundh, local_50->field_51984,
                                                         iVar39, iVar37);
                iVar37 = ClientBuild::Read3DArray<int>((Array<int>*)&ClientBuild::m_groundh, pCVar34->field_51984,
                                                       ((int)local_c0 + 1 >> 1) + iVar35, iVar37);
                iVar12 = ((int)local_a8 + 1 >> 1) + local_74;
                local_c4 = ClientBuild::Read3DArray<int>((Array<int>*)&ClientBuild::m_groundh, pCVar34->field_51984,
                                                         iVar39, iVar12);
                iVar12 = ClientBuild::Read3DArray<int>((Array<int>*)&ClientBuild::m_groundh, pCVar34->field_51984,
                                                       iVar39, iVar12);
                iVar39 = iVar37 + local_c8 + local_c4;
                iVar37 = (int)local_c0 * 64 + iVar35 * 128;
                local_a8 = (unsigned long)((int)local_a8 * 64 + local_74 * 128);
                configdecoder::LocType::GetModelLit((int)&local_a0, (int)local_e0, (unsigned int)local_88,
                                                    (int)local_80, pCVar34->field_51984, iVar37);
                bVar9 = local_a0 != nullptr;
                uVar3 = local_b6;
                uVar10 = local_b8;
                if (bVar9) {
                    LocChangeCreate(local_50, local_50->field_51984, iVar35, local_74, local_b0 & 255, -1, 0, 0, '\x1f',
                                    local_b8 + 1, local_b6 + 1);
                    iVar2 = local_50->field_8488;
                    *(unsigned int*)(local_d8 + 1140) = (unsigned int)uVar10 + iVar2;
                    *(unsigned int*)(local_d8 + 1144) = (unsigned int)uVar3 + iVar2;
                    (*((local_d8 + 1160))) = local_a0;
                    *(int*)(local_d8 + 1148) = iVar37;
                    *(int*)(local_d8 + 1156) = (int)local_a8;
                    *(int*)(local_d8 + 1152) = iVar39 + iVar12 >> 2;
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
                    cVar30 = local_ab;
                    if (local_aa < local_ab) {
                        cVar30 = local_aa;
                    }
                    *(int*)(local_d8 + 1176) = cVar6 + iVar35;
                    *(int*)(local_d8 + 1184) = cVar4 + iVar35;
                    *(unsigned int*)(local_d8 + 1180) = (int)cVar30 + local_74;
                    *(unsigned int*)(local_d8 + 1188) = (int)cVar33 + local_74;
                }
            }
            break;
        case 8:
            local_48 = SuperShuffledPacketFactory(superPacket);
            pSVar22 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            cVar4 = pSVar22->g1();
            local_88 = (Logger*)(((uint64_t)local_88._1_7_ << 8) | (uint8_t)(cVar4 == '\x01'));
            pSVar22 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            bVar5 = pSVar22->g1();
            pCVar34 = local_50;
            lVar40 = (unsigned long)(bVar5 >> 4 & 7) + (long)*(int*)&local_50->field_1115284;
            lVar41 = (unsigned long)(bVar5 & 7) + (long)*(int*)&local_50->field_1115288;
            pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            uVar8 = pPVar20->g1();
            local_80 = (hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>,
                                  eastl::allocator,
                                  eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>>,
                                  eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                  true>*)(((uint64_t)local_80._1_7_ << 8) | (uint8_t)uVar8);
            pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            uVar14 = pPVar20->g4();
            pSVar21 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            uVar11 = pSVar21->g2();
            local_a8 = (((uint64_t)local_a8._2_6_ << 16) | (uint16_t)uVar11);
            pSVar22 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar11 = pSVar22->g2();
            local_74 = (((uint32_t)local_74._2_2_ << 16) | (uint16_t)uVar11);
            pSVar22 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar8 = pSVar22->g1();
            local_c0 = (((uint64_t)local_c0._1_7_ << 8) | (uint8_t)uVar8);
            pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            uVar10 = pPVar20->g2();
            uVar36 = (unsigned int)uVar10;
            uVar38 = (unsigned int)(uint8_t)local_80;
            iVar37 = (int)lVar41;
            iVar35 = (int)lVar40;
            if (pCVar34->field_54760 != '\0') {
                pLVar27 = logger::default_logger();
                pLVar27->Log(
                    false, 5,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                    "client_network.cpp",
                    4540, "Received obj_add_v3 x:%d z:%d type:%d count:%d enabledOpsBitMask:%u",
                    (((uint64_t)uVar42 << 32) | (uint32_t)iVar35), (((uint64_t)uVar43 << 32) | (uint32_t)iVar37),
                    (((uint64_t)uVar44 << 32) | (uint32_t)uVar36), (((uint64_t)uVar45 << 32) | (uint32_t)uVar14),
                    (((uint64_t)uVar15 << 32) | (uint32_t)uVar38));
            }
            uVar1 = local_74;
            if (((iVar35 < 104) && (-1 < iVar35)) && ((-1 < iVar37 && (iVar37 < 104)))) {
                local_80 = (hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>,
                                      eastl::allocator,
                                      eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>>,
                                      eastl::equal_to<eastl::string>, eastl::hash<eastl::string>,
                                      eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                                      false, true, true>*)(((uint64_t)local_80._4_4_ << 32) | (uint32_t)uVar38);
                uVar10 = (unsigned short)local_a8;
                local_a8 = (((uint64_t)local_a8._4_4_ << 32) | (uint32_t)((unsigned int)(uint8_t)local_c0));
                local_b0 = uVar14;
                make_shared<ClientObj>((ReturnValue*)&local_48);
                pAVar26 = (AnimationWrapper*)local_48.end();
                pCVar34 = local_50;
                *(unsigned int*)(pAVar26->m_source + 8) = uVar36;
                *(LocLayer*)(pAVar26->m_source + 12) = local_b0;
                iVar12 = local_50->field_8492;
                pAVar26->field_32 = (uVar1 & 65535) + iVar12;
                pAVar26->field_36 = (unsigned int)uVar10 + iVar12;
                pAVar26->field_40 = (bool)(uint8_t)local_a8;
                pAVar26->field_41 = (bool)local_a8._1_1_;
                *(uint16_t*)&pAVar26->field_42 = local_a8._2_2_;
                pAVar26->field_44 = (uint8_t)local_88;
                local_74 = uVar36;
                pAVar26->SetReadyAnim((unsigned char)local_80);
                pCVar34->m_highlightManager->OnObjAdded(local_48, pCVar34->field_51984, iVar35, iVar37);
                ((list<shared_ptr<ClientObj>>*)(pCVar34->field_1120504 + lVar41 * 32 + lVar40 * 3328 +
                                                (long)pCVar34->field_51984 * 346112 + 56))
                    ->push_back(local_48);
                ShowObject(pCVar34, iVar35, iVar37);
                uVar36 = local_74;
                local_70 = configdecoder::ObjType::List(local_74);
                local_a0 = rs2lib::CoordGrid(pCVar34->field_51984, iVar35, iVar37);
                local_128 = weak_ptr(local_48);
                local_a0.SetActiveObj(local_128, clientObj_00);
                lVar40 = local_70.operator->();
                ScriptRunner::ExecuteScript(39, uVar36, *(int*)(lVar40 + 672), 500000);
                RunUpdateObjStackTrigger(pCVar34, pCVar34->field_51984, iVar35, iVar37);
            }
            break;
        case 9:
            local_48 = SuperShuffledPacketFactory(superPacket);
            LVar32 = (LocShapeID)superPacket;
            pSVar22 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            uVar8 = pSVar22->g1();
            local_80 = (hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>,
                                  eastl::allocator,
                                  eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>>,
                                  eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                  true>*)(((uint64_t)local_80._1_7_ << 8) | (uint8_t)uVar8);
            pSVar19 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            bVar5 = pSVar19->g1();
            bVar29 = bVar5 >> 2;
            uVar8 = ((LocShape*)(unsigned long)bVar29)->ToLayer(LVar32);
            local_88 = (Logger*)(((uint64_t)local_88._1_7_ << 8) | (uint8_t)uVar8);
            pSVar21 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            uVar10 = pSVar21->g2();
            pSVar21 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            bVar7 = pSVar21->g1();
            iVar37 = (bVar7 >> 4 & 7) + *(int*)&local_50->field_1115284;
            iVar35 = (bVar7 & 7) + *(int*)&local_50->field_1115288;
            if (local_50->field_54760 != '\0') {
                pLVar27 = logger::default_logger();
                pLVar27->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             4366, "Received loc_add_change_v2 x:%d z:%d id:%d rotate:%d shape:%u",
                             (((uint64_t)uVar42 << 32) | (uint32_t)iVar37),
                             (((uint64_t)uVar43 << 32) | (uint32_t)iVar35),
                             (((uint64_t)uVar44 << 32) | (uint32_t)((unsigned int)uVar10)),
                             (((uint64_t)uVar45 << 32) | (uint32_t)((unsigned int)(bVar5 & 3))),
                             (((uint64_t)uVar15 << 32) | (uint32_t)((unsigned int)bVar29)));
            }
            if ((((iVar37 < 104) && (-1 < iVar37)) && (-1 < iVar35)) && (iVar35 < 104)) {
                LocChangeCreate(local_50, local_50->field_51984, iVar37, iVar35, (unsigned int)(uint8_t)local_88,
                                (unsigned int)uVar10, (unsigned int)bVar29, (unsigned int)(bVar5 & 3),
                                (uint8_t)local_80, 0, -1);
            }
            break;
        case 10:
            local_48 = SuperShuffledPacketFactory(superPacket);
            pSVar21 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            uVar10 = pSVar21->g2();
            pSVar19 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            uVar15 = pSVar19->g4();
            pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            bVar5 = pPVar20->g1();
            lVar41 = (unsigned long)(bVar5 >> 4 & 7) + (long)*(int*)&local_50->field_1115284;
            lVar40 = (unsigned long)(bVar5 & 7) + (long)*(int*)&local_50->field_1115288;
            uVar36 = (unsigned int)uVar10;
            iVar37 = (int)lVar40;
            iVar35 = (int)lVar41;
            if (local_50->field_54760 != '\0') {
                pLVar27 = logger::default_logger();
                pLVar27->Log(
                    false, 5,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                    "client_network.cpp",
                    4584, "Received obj_del x:%d z:%d type:%d count:%d", (((uint64_t)uVar42 << 32) | (uint32_t)iVar35),
                    (((uint64_t)uVar43 << 32) | (uint32_t)iVar37), (((uint64_t)uVar44 << 32) | (uint32_t)uVar36),
                    (((uint64_t)uVar45 << 32) | (uint32_t)uVar15));
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
            this_01 = (hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>,
                                 eastl::allocator,
                                 eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>>,
                                 eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                 true>*)(local_50->field_1120504 + lVar40 * 32 + lVar41 * 3328 +
                                         (long)local_50->field_51984 * 346112 + 56);
            cVar4 = this_01->empty();
            if (cVar4) {
                return;
            }
            local_118 = this_01->begin();
            local_110 = this_01->end();
            eastl::find_if<eastl::ListIterator<shared_ptr<ClientObj>, shared_ptr<ClientObj>*, shared_ptr<ClientObj>&>,
                           (shared::ZoneProt::ID)->ZonePacket(core::SuperPacket&)::__18>(
                (ListIterator<shared_ptr<ClientObj>, shared_ptr<ClientObj>*, shared_ptr<ClientObj>&>*)&local_a0,
                (ListIterator<shared_ptr<ClientObj>, shared_ptr<ClientObj>*, shared_ptr<ClientObj>&>*)&local_118,
                (__18*)&local_110);
            local_80 = this_01;
            local_48 = this_01->end();
            cVar4 = local_a0 != local_48;
            pCVar34 = local_50;
            if (cVar4) {
                local_48 = configdecoder::ObjType::List(uVar36);
                local_70 = rs2lib::CoordGrid(pCVar34->field_51984, iVar35, iVar37);
                groundDecor = (weak_ptr<dash3d::GroundDecor>*)*local_a0;
                local_108 = weak_ptr(*groundDecor);
                local_70.SetActiveObj(local_108, clientObj_01);
                lVar41 = local_48.operator->();
                ScriptRunner::ExecuteScript(40, uVar36, *(int*)(lVar41 + 672), 500000);
                new (&local_f8) eastl::ListIterator(&local_a0);
                eastl::list<shared_ptr<ClientObj>>::erase(&local_90, (list<shared_ptr<ClientObj>>*)local_80, local_f8);
            }
            ShowObject(pCVar34, iVar35, iVar37);
            iVar37 = pCVar34->field_51984;
        LAB_100116569:
            RunUpdateObjStackTrigger(pCVar34, iVar37, iVar35, (int)lVar40);
            break;
        case 11:
            local_48 = SuperShuffledPacketFactory(superPacket);
            pSVar19 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            uVar10 = pSVar19->g2();
            local_80 =
                (hashtable<
                    eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>, eastl::allocator,
                    eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>>,
                    eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)(unsigned long)uVar10;
            pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            uVar10 = pPVar20->g2();
            local_88 = (Logger*)(((uint64_t)local_88._4_4_ << 32) | (uint32_t)((unsigned int)uVar10));
            pSVar21 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            cVar4 = pSVar21->g1s();
            pSVar19 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            bVar5 = pSVar19->g1();
            local_5c = (unsigned int)bVar5;
            pSVar22 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            local_90._0_4_ = pSVar22->g3s();
            pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            cVar6 = pPVar20->g1s();
            pSVar22 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            bVar5 = pSVar22->g1();
            pSVar19 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            bVar7 = pSVar19->g1();
            local_34 = (unsigned int)bVar7;
            pSVar21 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            bVar7 = pSVar21->g1();
            local_58 = (unsigned int)bVar7 << 2;
            pSVar19 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            local_38 = pSVar19->g3s();
            pPVar20 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            bVar7 = pPVar20->g1();
            pCVar34 = local_50;
            local_70.m_level = (bVar7 >> 4 & 7) + *(int*)&local_50->field_1115284;
            local_a0.m_level = (bVar7 & 7) + *(int*)&local_50->field_1115288;
            pCVar23 = (Client*)ShuffledPacketFactory::p2_alt2();
            uVar10 = pCVar23->g2();
            local_54 = (unsigned int)uVar10;
            iVar35 = (int)cVar4 + local_70.m_level;
            iVar37 = (int)cVar6 + local_a0.m_level;
            if (pCVar34->field_54760 != '\0') {
                pCVar23 = (Client*)logger::default_logger();
                pCVar23->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "client_network.cpp",
                             4720,
                             "Received projanim x:%i z:%i x2:%i z2:%i sourceEntity:%i targetEntity:%i spotanim:%i "
                             "h1:%i h2:%i t1:%i t2:%i angle:%i startpos:%i",
                             (((uint64_t)uVar42 << 32) | (uint32_t)local_70.m_level),
                             (((uint64_t)uVar43 << 32) | (uint32_t)local_a0.m_level),
                             (((uint64_t)uVar44 << 32) | (uint32_t)iVar35),
                             (((uint64_t)uVar45 << 32) | (uint32_t)iVar37),
                             (((uint64_t)uVar15 << 32) | (uint32_t)local_38),
                             (((uint64_t)uVar14 << 32) | (uint32_t)local_90._0_4_),
                             (((uint64_t)uVar13 << 32) | (uint32_t)local_54), (unsigned int)bVar5 * 4, local_58,
                             (int)local_80, (unsigned int)local_88, local_5c, local_34);
            }
            if (103 < (int)local_70.m_level) {
                return;
            }
            if ((int)local_70.m_level < 0) {
                return;
            }
            if ((int)local_a0.m_level < 0) {
                return;
            }
            if (103 < (int)local_a0.m_level) {
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
            local_70.m_level = local_70.m_level << 7 | 64;
            local_a0.m_level = local_a0.m_level << 7 | 64;
            iVar12 = GetAvH(pCVar23, local_70.m_level, local_a0.m_level, pCVar34->field_51984);
            local_78 = iVar12 + (unsigned int)bVar5 * -4;
            local_b4 = (int)local_80 + pCVar34->field_8488;
            local_cc = pCVar34->field_8488 + (unsigned int)local_88;
            pCVar23 = (Client*)&local_48;
            make_shared<ClientProj, int&, int&, int&, int&, int, int, int, int&, int&, int&, int&, int&>(
                (int*)pCVar23, (int*)&local_54, &pCVar34->field_51984, (int*)&local_70, (int*)&local_a0,
                (int*)&local_78, &local_b4, &local_cc, (int*)&local_5c, (int*)&local_34, (int*)&local_38,
                (int*)&local_90);
            pCVar24 = (ClientProj*)(*pCVar23).operator->();
            uVar36 = iVar35 * 128 | 64;
            uVar38 = iVar37 * 128 | 64;
            iVar35 = GetAvH(pCVar23, uVar36, uVar38, pCVar34->field_51984);
            pCVar34 = local_50;
            pCVar24->SetTarget(uVar36, uVar38, iVar35 - local_58, (int)local_80 + local_50->field_8488);
            pCVar34->field_7164584.push_back(local_48);
        LAB_1001154e6:
        }
    }

} // namespace jag::oldscape

namespace jag::network {
    // 0x100b0f6d0
    unsigned long operator==(const IPAddress& ipAddress1, const IPAddress& ipAddress2) {
        int iVar2;
        bool bVar3;
        unsigned short* arg1;
        unsigned short* arg2;
        unsigned short* arg3;
        uint64_t extraout_var;
        unsigned long uVar4;

        int iVar1 = ipAddress1.field_8;
        if (iVar1 == ipAddress2.field_8) {
            if (iVar1 == 1) {
                arg1 = std::begin<unsigned short const, 8ul>(&ipAddress1.field_12);
                arg2 = std::end<unsigned short const, 8ul>(&ipAddress1.field_12);
                arg3 = std::begin<unsigned short const, 8ul>(&ipAddress2.field_12);
                bVar3 = eastl::equal<unsigned short const*, unsigned short const*>(arg1, arg2, arg3);
                uVar4 = (((uint64_t)extraout_var << 8) | (uint8_t)bVar3) & 4294967295;
            } else {
                if (iVar1 != 0) {
                    LogAssertAlways(
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/IPAddress.h",
                        123, "Unknow IP type");
                }
                iVar2._0_2_ = ipAddress1.field_12;
                iVar2._2_2_ = ipAddress1.field_14;
                iVar1._0_2_ = ipAddress2.field_12;
                iVar1._2_2_ = ipAddress2.field_14;
                uVar4 = (((uint64_t)((int64_t)((unsigned long)ipAddress1 >> 8)) << 8) | (uint8_t)(iVar2 == iVar1));
            }
        } else {
            uVar4 = 0;
        }
        return uVar4 & 4294967295;
    }

} // namespace jag::network
