// projects/osclient/ServerConnection.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ServerConnection.h"

namespace jag::oldscape {
    // 0x100029ea0: ServerConnection::GetAverageBytesReceived() has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x1000bb1f0
    ServerConnection::ServerConnection()
        : std::thread(), field_24(nullptr), field_40(false), m_connectionState(0), field_168(4096) {
        field_416->PacketT(256);
        new (field_448) PacketJ();
        new (&field_480) Isaac(g_zeroKey);
        new (&field_2544) Isaac(g_zeroKey);
        field_4608 = 1;
        m_bytesSent = 0;
        m_bytesReceived = 0;
        m_ticksSinceNoTimeOutPacket = 0;
        field_448->Reserve(5000);
        field_168.SetSocketConnectTimeOut(3000);
    }

    // 0x1000bb410
    void ServerConnection::BeginAsyncConnectionWork(std::unique_ptr<LoginState>&& loginState) {
        unsigned int* puVar2;
        int* piVar3;
        __thread_id* thread_id1;
        thread local_38;
        __thread_id* local_30;
        ServerConnection* local_28;

        if ((m_connectionState & 4294967293) == 0) {
            m_connectionState = 1;
            puVar2 = (unsigned int*)loginState.operator->();
            if ((5 < *puVar2) || ((35U >> (*puVar2 & 31) & 1) == 0)) {
                LogAssert("state->m_loginProgress == LoginStep::LOGIN_STEP_PREPARE || state->m_loginProgress == "
                          "LoginStep::LOGIN_STEP_GET_ONE_TIME_LOGIN_TOKEN || state->m_loginProgress == "
                          "LoginStep::LOGIN_STEP_SEND_LOGIN_PACKET",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ServerConnection.cpp",
                          39, nullptr);
            }
            piVar3 = (int*)loginState.operator->();
            if (*piVar3 == 5) {
                *piVar3 = 2;
            }
            field_392 = loginState;
            field_32.PushHead(field_376);
            field_40->RaiseSignal();
            thread_id1 = (__thread_id*)field_8.get_id();
            new (&local_30) std::__thread_id();
            if (thread_id1 == local_30 != '\0') {
                local_28 = this;
                std::thread::thread<ServerConnection::BeginAsyncConnectionWork(std::unique_ptr<LoginState>&&)::__0, ,
                                    void>(&local_38, (__0*)&local_28);
                field_8 = local_38;
                std::thread::~thread(&local_38);
            }
        }
    }

    // 0x1000bb690
    void ServerConnection::Close() {
        bool bVar1;
        ReturnValue local_28;

        if (m_connectionState == 1) {
            do {
                ConsumeUpdatedLoginState(&local_28, this);
                bVar1 = &local_28 != this;
                if (bVar1) {
                    m_connectionState = 2;
                } else {
                    this_thread::Sleep(100);
                }
            } while (!bVar1);
        }
        if (m_connectionState - 2 < 2) {
            if (field_168.IsOpen() != '\0') {
                field_168.Close();
            }
        } else if (m_connectionState != 0) {
            LogAssert("m_connectionState == ConnectionState::CONNECTING_IDLE || m_connectionState == "
                      "ConnectionState::CONNECTED",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                      "ServerConnection.cpp",
                      85, nullptr);
        }
    }

    // 0x1000bb760
    auto ServerConnection::ConsumeUpdatedLoginState() {
        if ((m_connectionState == 1) && (AdvanceWorkerQueueToPacket(), m_connectionState != 1)) {
            return auto(field_392);
        }
        result.unique_ptr<true, void>(this);
        return result;
    }

    // 0x1000bb7e0
    void ServerConnection::EndAndJoin() {
        Close();
        field_4608 = 0;
        field_40->RaiseSignal();
        if (joinable()) {
            std::thread::join();
        }
        if (field_8.joinable()) {
            std::thread::join();
        }
        if (field_32.TakeStack() != 0) {
            LogAssert("pNext == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                      "ServerConnection.cpp",
                      114, nullptr);
        }
        MessageToServerWorkItem* pMVar3 = (MessageToServerWorkItem*)field_24;
    joined_r0x0001000bb864:
        MessageToServerWorkItem* this_00 = pMVar3;
        if (this_00 == nullptr) {
            return;
        }
        pMVar3 = (MessageToServerWorkItem*)this_00->HeapBeginPtr();
        if (pMVar3 == nullptr) {
            pMVar3 = (MessageToServerWorkItem*)field_32.TakeStack();
        }
        if (this_00->field_8 != 2)
            goto code_r0x0001000bb8bb;
        this_00->~MessageToServerWorkItem();
        goto LAB_1000bb888;
    code_r0x0001000bb8bb:
        if (this_00->field_8 == 3) {
            this_00->~MessageFromServerWorkItem();
        LAB_1000bb888:
            operator delete(this_00);
        }
        goto joined_r0x0001000bb864;
    }

    // 0x1000bb930
    uint32_t ServerConnection::GetConnectionState() const {
        return m_connectionState;
    }

    // 0x1000bb940
    void ServerConnection::SendClientMessage(shared::ClientMessage&& clientMessage) {
        MessageToServerWorkItem* this_00;

        if (m_connectionState == 3) {
            this_00 = (MessageToServerWorkItem*)operator new(80);
            new (this_00) MessageToServerWorkItem(clientMessage);
            field_32.PushHead(this_00);
            field_40->RaiseSignal();
        }
    }

    // 0x1000bb9c0
    unsigned long ServerConnection::AdvanceWorkerQueueToPacket() {
        unsigned int uVar1;
        MessageToServerWorkItem* this_00;
        bool bVar2;
        ReturnValue* pRVar4;
        unsigned int* puVar5;
        uint32_t* puVar6;
        unsigned long in_RCX;
        unsigned long unaff_R13;
        thread local_50;

        LockFreeStack<ServerConnectionWorkItem>* local_48 = (LockFreeStack<ServerConnectionWorkItem>*)&field_16;
        MessageToServerWorkItem* local_40 = (MessageToServerWorkItem*)field_376;
        unique_ptr<LoginState>* local_38 = (unique_ptr<LoginState>*)&field_392;
        do {
            if (field_24 == nullptr) {
                pRVar4 = (ReturnValue*)local_48->TakeStack();
                if (pRVar4 == nullptr) {
                    unaff_R13 = 0;
                    break;
                }
                pRVar4 = *pRVar4 = jagex3::LockFreeStackData<sound::Mixer::QueuedOp>::Reverse();
                field_24 = pRVar4;
            }
            this_00 = (MessageToServerWorkItem*)field_24;
            pRVar4 = (ReturnValue*)this_00->HeapBeginPtr();
            if (3 < this_00->field_8 - 1U)
                goto LAB_1000bba2d;
            in_RCX = (((uint64_t)((int64_t)(in_RCX >> 8)) << 8) | (uint8_t)1);
            bVar2 = false;
            switch (this_00->field_8) {
            case 1:
                if (this_00 != local_40) {
                    LogAssert("pItem == &m_connectionRequest",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                              "ServerConnection.cpp",
                              209, nullptr);
                }
                if (m_connectionState == 1) {
                    puVar5 = (unsigned int*)(*local_38).operator->();
                    uVar1 = *puVar5;
                    if (uVar1 < 20) {
                        if ((524322U >> (uVar1 & 31) & 1) == 0) {
                            if ((196608U >> (uVar1 & 31) & 1) == 0) {
                                if (uVar1 != 12)
                                    goto LAB_1000bbb4b;
                                m_connectionState = 0;
                            } else {
                                m_connectionState = 3;
                            }
                        } else {
                            m_connectionState = 2;
                        }
                    } else {
                    LAB_1000bbb4b:
                        if (((puVar5 + 31))->IsValid() == '\0') {
                            LogAssert("m_connectionRequest.m_state->m_error.IsError()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                      "osclient/ServerConnection.cpp",
                                      228, nullptr);
                        }
                        puVar6 = (uint32_t*)(*local_38).operator->();
                        *puVar6 = 18;
                        m_connectionState = 0;
                    }
                }
                break;
            case 2:
                if (this_00 != nullptr) {
                    this_00->~MessageToServerWorkItem();
                    operator delete(this_00);
                }
                break;
            case 3:
                goto switchD_1000bbaa0_caseD_3;
            case 4:
                m_connectionState = 0;
                std::thread::join();
                local_50 = std::thread();
                swap(local_50);
                std::thread::~thread(&local_50);
            }
        LAB_1000bba2d:
            field_24 = pRVar4;
            bVar2 = true;
            in_RCX = unaff_R13 & 4294967295;
        switchD_1000bbaa0_caseD_3:
            unaff_R13 = in_RCX & 4294967295;
        } while (bVar2);
        return unaff_R13 & 4294967041;
    }

    // 0x1000bbbe0
    unsigned long ServerConnection::GetNextServerMessage(shared::ServerMessage& serverMessage) {
        MessageFromServerWorkItem* this_00;
        unsigned long uVar3;

        if (m_connectionState == 3) {
            if (AdvanceWorkerQueueToPacket() != '\0') {
                this_00 = (MessageFromServerWorkItem*)field_24;
                field_24 = (ReturnValue*)this_00->HeapBeginPtr();
                serverMessage = this_00->field_16;
                uVar3 = (((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)1);
                if (this_00 != nullptr) {
                    this_00->~MessageFromServerWorkItem();
                    operator delete(this_00);
                }
                goto LAB_1000bbc39;
            }
        }
        uVar3 = 0;
    LAB_1000bbc39:
        return uVar3 & 4294967295;
    }

    // 0x1000bbcc0
    void ServerConnection::Reader_Run() {
        TextureAtlasReference* this_00;
        bool cVar1;
        unsigned short uVar2;
        unsigned short uVar3;
        unsigned char* puVar4;
        long lVar5;
        MessageFromServerWorkItem* this_03;
        unsigned int arg2;
        int iVar7;
        unsigned long arg1;
        uint8_t local_90[8];
        long local_58;
        Error local_38;

        this_thread::SetThreadName("ServerConnection Reader");
        uint8_t* this_01 = &field_168;
        uint8_t* this_02 = field_448;
        Isaac* local_48 = (Isaac*)&field_480;
        LockFreeStack<ServerConnectionWorkItem>* local_50 = (LockFreeStack<ServerConnectionWorkItem>*)&field_16;
        do {
            if (field_4608 == '\0')
                break;
            local_38 = callstack::Callstack();
            puVar4 = (unsigned char*)this_02->GetDataPtr();
            cVar1 = this_01->Read(puVar4, 1, &local_38);
            iVar7 = 3;
            if (cVar1) {
                this_02->SetPos(0);
                cVar1 = this_02->gSmart1or2EncTest(*local_48);
                if (cVar1) {
                    lVar5 = this_02->GetDataPtr();
                    cVar1 = this_01->Read((lVar5 + 1), 1, &local_38);
                    if (!cVar1)
                        goto LAB_1000bbd10;
                }
                uVar2 = this_02->gSmart1or2Enc(*local_48);
                if (122 < uVar2) {
                    LogAssert("packetType < ServerProt::NUM_PROT_IDS",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                              "ServerConnection.cpp",
                              292, nullptr);
                }
                if (uVar2 < 123) {
                    arg2 = *(unsigned int*)(PTR_SIZES_100ee6b88 + (unsigned long)(unsigned int)uVar2 * 4);
                    if (arg2 == 4294967294) {
                        puVar4 = (unsigned char*)this_02->GetDataPtr();
                        cVar1 = this_01->Read(puVar4, 2, &local_38);
                        this = this;
                        if (cVar1) {
                            this_02->SetPos(0);
                            uVar3 = this_02->g2();
                            arg2 = (unsigned int)uVar3;
                            goto LAB_1000bbe68;
                        }
                    } else {
                        if (arg2 == 4294967295) {
                            cVar1 = this_01->Read(local_90, 1, &local_38);
                            arg2 = (unsigned int)(uint8_t)local_90[0];
                            if (cVar1)
                                goto LAB_1000bbe68;
                            iVar7 = 3;
                        } else {
                        LAB_1000bbe68:
                            new (local_90) shared::ClientMessage();
                            arg1 = (unsigned long)(int)arg2;
                            local_90._0_4_ = (unsigned int)uVar2;
                            ((local_90 + 8))->Reserve(arg1);
                            puVar4 = (unsigned char*)((local_90 + 8))->GetDataPtr();
                            cVar1 = this_01->Read(puVar4, arg2, &local_38);
                            iVar7 = 3;
                            if (cVar1) {
                                this_00 = (TextureAtlasReference*)(local_90 + 8);
                                if (local_90._0_4_ == 51) {
                                    local_58 = this_00->size();
                                    if (local_58 != 0) {
                                        LogAssert("pos == 0",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "projects/osclient/ServerConnection.cpp",
                                                  331, nullptr);
                                    }
                                    puVar4 = (unsigned char*)this_00->GetDataPtr();
                                    this_00->gArrayBufferEncrypted(puVar4, (int)local_58, arg2, *local_48);
                                    this_00->SetPos(0);
                                }
                                if (this_00->GetTextureAtlas() != arg1) {
                                    LogAssert("msg.p.GetSize() == static_cast<size_t>(packetSize)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                              "projects/osclient/ServerConnection.cpp",
                                              338, nullptr);
                                }
                                this_03 = (MessageFromServerWorkItem*)operator new(72);
                                new (this_03) MessageFromServerWorkItem(*local_90);
                                local_50->PushHead(this_03);
                                m_bytesReceived = m_bytesReceived + arg1;
                                iVar7 = 0;
                            }
                        }
                        this = this;
                    }
                } else {
                    this_01->Close();
                }
            }
        LAB_1000bbd10:
        } while (iVar7 == 0);
        local_50->PushHead(field_400);
    }

    // 0x1000bc130
    int ServerConnection::Writer_Login_GetLoginPackets() {
        uint8_t* this_02;
        uint8_t* isaac;
        uint8_t bVar2;
        uint8_t uVar3;
        uint8_t uVar4;
        unsigned short uVar5;
        unsigned short uVar6;
        int iVar8;
        unsigned int uVar9;
        unsigned char* puVar11;
        uint64_t uVar12;
        uint8_t local_31;

        long lVar10 = *field_392;
        uint8_t* this_01 = &field_168;
        __cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>* this_00 =
            (__cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>*)(lVar10 + 124);
        char cVar1 = this_01->Read(&local_31, 1, this_00);
        int iVar7 = 18;
        if (cVar1) {
            this_02 = field_416;
            puVar11 = (unsigned char*)this_02->GetDataPtr();
            cVar1 = this_01->Read(puVar11, (unsigned int)local_31, this_00);
            if (!cVar1) {
                iVar7 = 18;
            } else {
                this_02->SetPos(0);
                cVar1 = this_02->g1();
                *(bool*)(lVar10 + 392) = cVar1 == '\x01';
                if (cVar1 == '\x01') {
                    isaac = &field_480;
                    iVar7 = this_02->g1Enc(*isaac);
                    iVar8 = this_02->g1Enc(*isaac);
                    uVar5 = this_02->g1Enc(*isaac);
                    uVar6 = this_02->g1Enc(*isaac);
                    uVar9 = (unsigned int)uVar6 | (unsigned int)uVar5 << 8 | iVar8 << 16 | iVar7 << 24;
                } else {
                    uVar9 = this_02->g4();
                }
                *(unsigned int*)(lVar10 + 396) = uVar9;
                bVar2 = this_02->g1();
                *(unsigned int*)(lVar10 + 400) = (unsigned int)bVar2;
                cVar1 = this_02->g1();
                *(bool*)(lVar10 + 404) = cVar1 == '\x01';
                uVar3 = this_02->g1();
                uVar4 = this_02->g1();
                *(unsigned int*)(lVar10 + 408) = (unsigned int)(((uint16_t)uVar3 << 8) | (uint8_t)uVar4);
                bVar2 = this_02->g1();
                *(unsigned int*)(lVar10 + 412) = (unsigned int)bVar2;
                uVar12 = this_02->g8();
                *(uint64_t*)(lVar10 + 416) = uVar12;
                uVar12 = this_02->g8();
                *(uint64_t*)(lVar10 + 424) = uVar12;
                if (36 < local_31) {
                    notifications::SetNotificationUserID(this_02->g8());
                }
                uVar5 = this_02->gSmart1or2Enc(field_480);
                if (uVar5 < 123) {
                    *(unsigned int*)(lVar10 + 448) = (unsigned int)uVar5;
                    uVar5 = this_02->g2();
                    ((lVar10 + 456))->Reserve((unsigned long)uVar5);
                    puVar11 = (unsigned char*)((lVar10 + 456))->GetDataPtr();
                    bVar2 = this_01->Read(puVar11, (unsigned int)uVar5, this_00);
                    iVar7 = (unsigned int)(bVar2 ^ 1) * 2 + 16;
                } else {
                    new (this_00) std::__cxx_atomic_base_impl(34);
                    *(uint32_t*)(lVar10 + 128) = 4294967292;
                    iVar7 = 18;
                }
            }
        }
        return iVar7;
    }

    // 0x1000bc3f0
    unsigned int ServerConnection::Writer_Login_GetSecondResponse() {
        PacketT<Array<unsigned char>>* pPVar1;
        uint8_t bVar3;
        unsigned short uVar4;
        eastl::string* this_02;
        uint64_t uVar7;
        unsigned char* puVar8;
        uint8_t* this_03;
        unsigned long arg1;
        bool arg1_00;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_60;
        PacketT<Array<unsigned char>>* local_40;
        uint8_t local_32;
        uint8_t local_31;

        long lVar5 = *field_392;
        uint8_t* this_01 = &field_168;
        __cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>* this_00 =
            (__cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>*)(lVar5 + 124);
        bool cVar2 = this_01->Read(&local_31, 1, this_00);
        unsigned int uVar9 = 18;
        if (cVar2) {
            switch ((int)(char)local_31) {
            case 2:
                uVar9 = Writer_Login_GetLoginPackets();
                break;
            default:
                *(int*)(lVar5 + 128) = (int)(char)local_31;
                break;
            case 15:
                this_03 = field_416;
                puVar8 = (unsigned char*)this_03->GetDataPtr();
                cVar2 = this_01->Read(puVar8, 2, this_00);
                if (cVar2) {
                    this_03->SetPos(0);
                    uVar4 = this_03->g2();
                    *(uint32_t*)(lVar5 + 448) = 70;
                    ((lVar5 + 456))->Reserve((unsigned long)uVar4);
                    puVar8 = (unsigned char*)((lVar5 + 456))->GetDataPtr();
                    bVar3 = this_01->Read(puVar8, (unsigned int)uVar4, this_00);
                    uVar9 = 18 - bVar3;
                }
                break;
            case 21:
                cVar2 = this_01->Read(&local_31, 1, this_00);
                if (cVar2) {
                    *(unsigned int*)(lVar5 + 132) = (unsigned int)local_31 * 60 + 180;
                    *(uint32_t*)(lVar5 + 128) = 21;
                    uVar9 = 7;
                }
                break;
            case 23:
                if (*(int*)(lVar5 + 120) == 0) {
                    *(uint32_t*)(lVar5 + 120) = 1;
                    uVar9 = 0;
                } else {
                    new (this_00) std::__cxx_atomic_base_impl(101);
                    *(uint32_t*)(lVar5 + 128) = 23;
                }
                break;
            case 29:
                local_40 = (PacketT<Array<unsigned char>>*)field_416;
                puVar8 = (unsigned char*)local_40->GetDataPtr();
                cVar2 = this_01->Read(puVar8, 2, this_00);
                if (cVar2) {
                    local_40->SetPos(0);
                    uVar4 = local_40->g2();
                    Writer_EnsureLoginPacketSize((unsigned long)uVar4);
                    puVar8 = (unsigned char*)local_40->GetDataPtr();
                    cVar2 = this_01->Read(puVar8, (unsigned int)uVar4, this_00);
                    pPVar1 = local_40;
                    if (cVar2) {
                        arg1 = 0;
                        local_40->SetPos(0);
                        do {
                            PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(
                                &local_60, (uint8_t)pPVar1);
                            this_02 = (eastl::string*)(*((lVar5 + 296)))[arg1];
                            *this_02 = &local_60;
                            arg1 = arg1 + 1;
                        } while (arg1 != 3);
                        *(uint32_t*)(lVar5 + 128) = 29;
                        uVar9 = 12;
                    }
                }
                break;
            case 61:
                bVar3 = this_01->Read(&local_31, 1, this_00);
                Client::Instance()->field_52032 = local_31 == 1 & bVar3;
                *(uint32_t*)(lVar5 + 128) = 61;
                break;
            case 64:
                local_40 = (PacketT<Array<unsigned char>>*)field_416;
                local_40->SetPos(0);
                cVar2 = this_01->Read(&local_32, 1, this_00);
                uVar9 = 18;
                if (cVar2) {
                    puVar8 = (unsigned char*)local_40->GetDataPtr();
                    cVar2 = this_01->Read(puVar8, (unsigned int)local_32, this_00);
                    pPVar1 = local_40;
                    if (cVar2) {
                        puVar8 = (unsigned char*)local_40->GetDataPtr();
                        pPVar1->gArrayBufferEncrypted(puVar8, 0, (unsigned int)local_32, field_480);
                        pPVar1->SetPos(0);
                        arg1_00 = (uint8_t)pPVar1;
                        if (*(char*)(lVar5 + 41) != '\0') {
                            PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(
                                &local_60, arg1_00);
                            (*((lVar5 + 136))) = &local_60;
                            PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(
                                &local_60, arg1_00);
                            (*((lVar5 + 168))) = &local_60;
                            PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(
                                &local_60, arg1_00);
                            (*((lVar5 + 200))) = &local_60;
                            PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(
                                &local_60, arg1_00);
                            (*((lVar5 + 232))) = &local_60;
                        }
                        PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_60,
                                                                                                             arg1_00);
                        (*((lVar5 + 264))) = &local_60;
                        uVar7 = pPVar1->g8();
                        *(uint64_t*)(lVar5 + 424) = uVar7;
                        *(uint32_t*)(lVar5 + 128) = 64;
                        uVar9 = 5;
                    }
                }
                break;
            case 66:
                *(uint32_t*)(lVar5 + 128) = 66;
                uVar9 = 19;
                break;
            case 69:
                local_40 = (PacketT<Array<unsigned char>>*)field_416;
                puVar8 = (unsigned char*)local_40->GetDataPtr();
                cVar2 = this_01->Read(puVar8, 2, this_00);
                if (cVar2) {
                    local_40->SetPos(0);
                    uVar4 = local_40->g2();
                    Writer_EnsureLoginPacketSize((unsigned long)uVar4);
                    puVar8 = (unsigned char*)local_40->GetDataPtr();
                    cVar2 = this_01->Read(puVar8, (unsigned int)uVar4, this_00);
                    if (cVar2) {
                        bVar3 = Writer_DoProofOfWork(*local_40);
                        *(uint32_t*)(lVar5 + 128) = 69;
                        uVar9 = (unsigned int)(bVar3 ^ 1) << 4 | 2;
                    }
                }
            }
        }
        return uVar9;
    }

    // 0x1000bca70
    void ServerConnection::Writer_EnsureLoginPacketSize(unsigned long arg1) {
        if (field_416->GetTextureAtlas() < arg1) {
            field_416->Reserve(arg1);
        }
    }

    // 0x1000bcac0
    unsigned int ServerConnection::Writer_DoProofOfWork(PacketT<Array<unsigned char>>& arg1) {
        uint8_t* this_00;
        unsigned short arg1_00;
        unsigned int uVar3;
        long lVar4;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar5;
        PacketT<Array<unsigned char>>* this_01;
        unsigned char* puVar6;
        unsigned long arg3;
        Callstack local_30;

        arg1.SetPos(0);
        uint8_t bVar1 = arg1.g1();
        auto local_38 = game::ProofOfWorkFactory::GetProofOfWorkSolver((unsigned int)bVar1);
        auto arg2 = local_38.operator->();
        (**(void (**)(...))(*arg2 + 8))(&local_30.field_8, arg2, arg1);
        if (&local_30.field_8 == arg2) {
            lVar4 = field_392.operator->();
            new ((lVar4 + 124)) std::__cxx_atomic_base_impl(22);
            uVar3 = 0;
        } else {
            phVar5 =
                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                           eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                           eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)local_30.field_8.operator->();
            lVar4 = phVar5->size();
            Writer_EnsureLoginPacketSize(lVar4 + 3);
            this_00 = field_416;
            this_00->SetPos(0);
            this_00->p1<unsigned long>(19);
            phVar5 =
                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                           eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                           eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)local_30.field_8.operator->();
            arg1_00 = phVar5->size();
            this_00->p2<unsigned long>(arg1_00);
            this_01 = (PacketT<Array<unsigned char>>*)local_30.field_8.operator->();
            puVar6 = (unsigned char*)this_01->GetDataPtr();
            phVar5 =
                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                           eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                           eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)local_30.field_8.operator->();
            arg3 = phVar5->size();
            this_00->pArrayBuffer(puVar6, 0, arg3);
            local_30 = callstack::Callstack();
            puVar6 = (unsigned char*)this_00->GetDataPtr();
            uVar3 = this_00->size();
            field_168.Write(puVar6, uVar3, &local_30);
            uVar3 = local_30.IsValid();
            uVar3 = uVar3 ^ 1;
        }
        local_30.field_8.~unique_ptr();
        return uVar3;
    }

    // 0x1000bccb0
    void ServerConnection::Writer_ConnectAndLogin() {
        uint8_t* this_00;
        uint8_t* this_01;
        uint8_t bVar1;
        bool cVar2;
        unsigned int uVar3;
        int* piVar5;
        uint64_t uVar6;
        int iVar7;
        unsigned long arg1_01;
        uint8_t local_888[2064];
        __1 local_78;
        __1 local_58;

        ServerConnectionWorkItem* local_38 = (ServerConnectionWorkItem*)field_376;
        unsigned int* puVar4 = (unsigned int*)*field_392;
        new (local_888) callstack::Callstack();
        WaterNormalParamsTarget* this_02 = (WaterNormalParamsTarget*)(puVar4 + 31);
        puVar4[31] = local_888._0_4_;
        array<int, _4ul>* arg1 = (array<int, _4ul>*)(puVar4 + 108);
        void* local_50 = &field_2544;
        void* local_48 = &field_480;
        ClientMessage* local_40 = (ClientMessage*)(puVar4 + 12);
        unsigned int* local_68 = puVar4;
        WaterNormalParamsTarget* local_60 = this_02;
        local_58.field_0 = this;
    LAB_1000bcd4a:
        do {
            if (*puVar4 == 1) {
                new (local_888) Isaac(*arg1);
                _memcpy(local_50, (Isaac*)local_888, 2064);
                arg1_01 = 0;
                do {
                    piVar5 = (int*)(*arg1)[arg1_01];
                    iVar7 = *piVar5;
                    piVar5 = &local_78[arg1_01];
                    *piVar5 = iVar7 + 50;
                    arg1_01 = arg1_01 + 1;
                } while (arg1_01 != 4);
                new (local_888) Isaac(local_78);
                _memcpy(local_48, (Isaac*)local_888, 2064);
                this = local_58.field_0;
                uVar3 = Writer_SendClientMessage(local_58.field_0, local_40);
                this_02 = local_60;
                puVar4 = local_68;
                local_68[31] = uVar3;
                bVar1 = local_60->IsValid();
                *puVar4 = (unsigned int)bVar1 << 4 | 2;
                uVar3 = *puVar4;
            } else {
                if (*puVar4 == 0) {
                    this_00 = &field_168;
                    this_00->Close();
                    this_00->Initialize();
                    cVar2 = this_00->Connect((char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin(), this_02);
                    if (!cVar2) {
                        cVar2 = this_02->IsValid();
                        if (cVar2)
                            goto LAB_1000bcf76;
                    } else {
                        this_00->SetSocketRecvTimeOut(15000);
                        local_888[0] = (thread)14;
                        cVar2 = this_00->Write(local_888, 1, this_02);
                        if (!cVar2) {
                            cVar2 = this_02->IsValid();
                            if (!cVar2) {
                                new (this_02) std::__cxx_atomic_base_impl(22);
                            }
                            goto LAB_1000bcf76;
                        }
                        cVar2 = this_00->Read(local_888, 1, this_02);
                        if (!cVar2) {
                            cVar2 = this_02->IsValid();
                            if (!cVar2) {
                                new (this_02) std::__cxx_atomic_base_impl(22);
                                puVar4[32] = 23;
                            }
                            goto LAB_1000bcf76;
                        }
                        if (local_888[0] == (thread)0) {
                            this_01 = field_416;
                            cVar2 = this_00->Read((unsigned char*)this_01->GetDataPtr(), 8, this_02);
                            if (cVar2) {
                                this_01->SetPos(0);
                                uVar6 = this_01->g8();
                                *(uint64_t*)(puVar4 + 28) = uVar6;
                                *puVar4 = 1;
                                goto LAB_1000bcf76;
                            }
                        }
                    }
                    iVar7 = 22;
                    goto LAB_1000bcf71;
                }
                uVar3 = *puVar4;
            }
            if (uVar3 == 2) {
                uVar3 = Writer_Login_GetSecondResponse();
                *puVar4 = uVar3;
                if (uVar3 == 2)
                    goto LAB_1000bcd4a;
            }
            if (*puVar4 != 0) {
                if ((*puVar4 == 18) && (cVar2 = this_02->IsValid(), !cVar2)) {
                    iVar7 = 13;
                LAB_1000bcf71:
                    new (this_02) std::__cxx_atomic_base_impl(iVar7);
                }
            LAB_1000bcf76:
                cVar2 = this_02->IsValid();
                if (cVar2) {
                    field_168.Close();
                }
                field_16.PushHead(local_38);
                if ((*puVar4 & 4294967294) == 16) {
                    local_78[0].field_0 = this;
                    local_888->thread<ServerConnection::Writer_ConnectAndLogin()::__1, , void>(&local_78);
                    *this = *local_888;
                }
                return;
            }
        } while (true);
    }

    // 0x1000bd030
    int ServerConnection::Writer_SendClientMessage(shared::ClientMessage& clientMessage) {
        return local_30;
        auto arg1 = clientMessage.field_8.GetDataPtr();
        unsigned int arg2 = clientMessage.field_8.size();
        field_168.Write(arg1, arg2, &local_30);
        return local_30[0];
    }

    // 0x1000bd0a0
    void ServerConnection::Writer_Run() {
        void result;
        ReturnValue result;
        ServerConnectionWorkItem* serverConnectionWorkItem;
        long lVar1;
        ServerConnectionWorkItem* pSVar2;

        this_thread::SetThreadName("ServerConnection Writer");
        if (field_4608 != '\0') {
            do {
                &result = (ReturnValue*)field_32.TakeStack();
                serverConnectionWorkItem = (ServerConnectionWorkItem*)result =
                    jagex3::LockFreeStackData<sound::Mixer::QueuedOp>::Reverse();
                if (serverConnectionWorkItem != nullptr) {
                    do {
                        pSVar2 = (ServerConnectionWorkItem*)serverConnectionWorkItem->HeapBeginPtr();
                        if (serverConnectionWorkItem->field_8 == 2) {
                            Writer_SendClientMessage(*((serverConnectionWorkItem + 1)));
                            field_16.PushHead(serverConnectionWorkItem);
                            lVar1 = serverConnectionWorkItem[1].field_8.GetTextureAtlas();
                            m_bytesSent = m_bytesSent + lVar1;
                        } else if (serverConnectionWorkItem->field_8 == 1) {
                            if (serverConnectionWorkItem != (ServerConnectionWorkItem*)field_376) {
                                LogAssert("pCur == &m_connectionRequest",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                          "osclient/ServerConnection.cpp",
                                          797, nullptr);
                            }
                            Writer_ConnectAndLogin();
                        }
                        serverConnectionWorkItem = pSVar2;
                    } while (pSVar2 != nullptr);
                }
                field_40->WaitForAndLowerSignal();
            } while (field_4608 != '\0');
        }
    }

    // 0x1001362c0
    void ServerConnection::Writer_ConnectAndLogin()::$_1::operator()() const {
        Reader_Run(field_0);
    }

} // namespace jag::oldscape
