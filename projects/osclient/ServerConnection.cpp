// projects/osclient/ServerConnection.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ServerConnection.h"

namespace jag::oldscape {
    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ServerConnection::GetAverageBytesReceived();

    // 0x1000bb1f0, 384 bytes, base-object constructor, placed by class name
    // ServerConnection::ServerConnection()
    void ServerConnection::ServerConnection() {
        new (this) std::thread();
        new (&field_8) std::thread();
        new (&field_16) jagex3::LockFreeStack<ServerConnectionWorkItem>();
        field_24 = (MessageToServerWorkItem*)0;
        new (&field_32) jagex3::LockFreeStack<ServerConnectionWorkItem>();
        new (field_40, false) jagex3::ThreadSignal();
        m_connectionState = 0;
        new (&field_168, 4096) jagex3::BufferedSocket();
        new (field_376) LoginWorkItem();
        new (field_400) DisconnectedWorkItem();
        (field_416, 256)->PacketT();
        new (field_448) PacketJ<Array<unsigned char, eastl::allocator>>();
        new (&field_480, (array*)&g_zeroKey) Isaac();
        new (&field_2544, (array*)&g_zeroKey) Isaac();
        field_4608 = 1;
        m_bytesSent = 0;
        m_bytesReceived = 0;
        m_ticksSinceNoTimeOutPacket = 0;
        (field_448, 5000)->Reserve();
        (&field_168, 3000)->SetSocketConnectTimeOut();
    }

    // 0x1000bb400, 16 bytes, complete-object constructor, placed by class name
    // ServerConnection::ServerConnection(): jumps straight to the base-object constructor

    // 0x1000bb410, 256 bytes, placed by class name
    // ServerConnection::BeginAsyncConnectionWork(std::unique_ptr<LoginState, std::default_delete<LoginState> >&&)
    /* ServerConnection::BeginAsyncConnectionWork(std::unique_ptr<LoginState,
   std::default_delete<LoginState> >&&) */

    void ServerConnection::BeginAsyncConnectionWork(unique_ptr* param_1) {
        uint* puVar2;
        int* piVar3;
        undefined8 uVar4;
        thread local_38[8];
        undefined8 local_30;
        ServerConnection* local_28;

        if ((m_connectionState & 4294967293) == 0) {
            m_connectionState = 1;
            puVar2 = (uint*)std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator->(
                (unique_ptr<LoginState, std::default_delete<LoginState>>*)param_1);
            if ((5 < *puVar2) || ((35U >> (*puVar2 & 31) & 1) == 0)) {
                /* WARNING: Subroutine does not return */
                LogAssert("state->m_loginProgress == LoginStep::LOGIN_STEP_PREPARE || state->m_loginProgress == "
                          "LoginStep::LOGIN_STEP_GET_ONE_TIME_LOGIN_TOKEN || state->m_loginProgress == "
                          "LoginStep::LOGIN_STEP_SEND_LOGIN_PACKET",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ServerConnection.cpp",
                          39, (char*)0);
            }
            piVar3 = (int*)std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator->(
                (unique_ptr<LoginState, std::default_delete<LoginState>>*)param_1);
            if (*piVar3 == 5) {
                *piVar3 = 2;
            }
            std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator=(
                (unique_ptr<LoginState, std::default_delete<LoginState>>*)&field_392, param_1);
            (&field_32, (ServerConnectionWorkItem*)field_376)->PushHead();
            field_40->RaiseSignal();
            uVar4 = (&field_8)->get_id();
            new (&local_30) std::__thread_id();
            if (std::operator==(uVar4, local_30) != '\0') {
                local_28 = this;
                std::thread::thread<ServerConnection::BeginAsyncConnectionWork(
                                        std::unique_ptr<LoginState, std::default_delete<LoginState>>&&)::__0,
                                    , void>(local_38, (__0*)&local_28);
                std::thread::operator=((thread*)&field_8, local_38);
                std::thread::~thread(local_38);
            }
        }
    }

    // 0x1000bb690, 208 bytes, placed by class name
    // ServerConnection::Close()
    void ServerConnection::Close() {
        bool bVar1;
        undefined1 local_28[8];

        if (m_connectionState == 1) {
            do {
                ConsumeUpdatedLoginState((ServerConnection*)local_28);
                bVar1 = std::operator!=((unique_ptr*)local_28, (_func_decltype_nullptr*)(ServerConnection*)this);
                if (bVar1) {
                    m_connectionState = 2;
                } else {
                    this_thread::Sleep(100);
                }
                local_28->~unique_ptr();
            } while (!bVar1);
        }
        if (m_connectionState - 2 < 2) {
            if ((&field_168)->IsOpen() != '\0') {
                (&field_168)->Close();
            }
        } else if (m_connectionState != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_connectionState == ConnectionState::CONNECTING_IDLE || m_connectionState == "
                      "ConnectionState::CONNECTED",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                      "ServerConnection.cpp",
                      85, (char*)0);
        }
    }

    // 0x1000bb760, 80 bytes, placed by class name
    // ServerConnection::ConsumeUpdatedLoginState()
    ServerConnection* ServerConnection::ConsumeUpdatedLoginState() {
        ServerConnection* in_RSI;

        if ((in_RSI->m_connectionState == 1) && (AdvanceWorkerQueueToPacket(in_RSI), in_RSI->m_connectionState != 1)) {
            new (this) std::unique_ptr<LoginState, std::default_delete<LoginState>>((unique_ptr*)&in_RSI->field_392);
            return this;
        }
        std::unique_ptr<LoginState, std::default_delete<LoginState>>::unique_ptr<true, void>(
            (_func_decltype_nullptr*)this);
        return this;
    }

    // 0x1000bb7e0, 240 bytes, placed by class name
    // ServerConnection::EndAndJoin()
    void ServerConnection::EndAndJoin() {
        MessageToServerWorkItem* this_00;
        char cVar1;
        long lVar2;
        MessageToServerWorkItem* pMVar3;

        Close(this);
        field_4608 = 0;
        field_40->RaiseSignal();
        cVar1 = joinable();
        if (cVar1 != '\0') {
            std::thread::join();
        }
        cVar1 = (&field_8)->joinable();
        if (cVar1 != '\0') {
            std::thread::join();
        }
        lVar2 = (&field_32)->TakeStack();
        if (lVar2 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pNext == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                      "ServerConnection.cpp",
                      114, (char*)0);
        }
        pMVar3 = field_24;
    joined_r0x0001000bb864:
        this_00 = pMVar3;
        if (this_00 == (MessageToServerWorkItem*)0) {
            return;
        }
        pMVar3 = (MessageToServerWorkItem*)this_00->HeapBeginPtr();
        if (pMVar3 == (MessageToServerWorkItem*)0) {
            pMVar3 = (MessageToServerWorkItem*)(&field_32)->TakeStack();
        }
        if (this_00->field_8 != 2)
            goto code_r0x0001000bb8bb;
        this_00->~MessageToServerWorkItem();
        goto LAB_1000bb888;
    code_r0x0001000bb8bb:
        if (this_00->field_8 == 3) {
            this_00->~MessageFromServerWorkItem();
        LAB_1000bb888:
            operator_delete(this_00);
        }
        goto joined_r0x0001000bb864;
    }

    // 0x1000bb930, 16 bytes, placed by class name
    // ServerConnection::GetConnectionState() const
    undefined4 ServerConnection::GetConnectionState() {
        return m_connectionState;
    }

    // 0x1000bb940, 112 bytes, placed by class name
    // ServerConnection::SendClientMessage(shared::ClientMessage&&)
    void ServerConnection::SendClientMessage(ClientMessage* param_1) {
        MessageToServerWorkItem* this_00;

        if (m_connectionState == 3) {
            this_00 = operator_new(80);
            MessageToServerWorkItem::MessageToServerWorkItem(this_00, param_1);
            (&field_32, (ServerConnectionWorkItem*)this_00)->PushHead();
            field_40->RaiseSignal();
        }
    }

    // 0x1000bb9c0, 512 bytes, placed by class name
    // ServerConnection::AdvanceWorkerQueueToPacket()
    ulong ServerConnection::AdvanceWorkerQueueToPacket() {
        uint uVar1;
        bool bVar2;
        char cVar3;
        LockFreeStackData<sound::Mixer::QueuedOp>* this_00;
        MessageToServerWorkItem* pMVar4;
        MessageToServerWorkItem* pMVar5;
        uint* puVar6;
        undefined4* puVar7;
        ulong in_RCX;
        ulong unaff_R13;
        thread local_50[8];
        LockFreeStack<ServerConnectionWorkItem>* local_48;
        MessageToServerWorkItem* local_40;
        unique_ptr<LoginState, std::default_delete<LoginState>>* local_38;

        local_48 = (LockFreeStack<ServerConnectionWorkItem>*)&field_16;
        local_40 = (MessageToServerWorkItem*)field_376;
        local_38 = (unique_ptr<LoginState, std::default_delete<LoginState>>*)&field_392;
        do {
            if (field_24 == (MessageToServerWorkItem*)0) {
                this_00 = (LockFreeStackData<sound::Mixer::QueuedOp>*)local_48->TakeStack();
                if (this_00 == (LockFreeStackData<sound::Mixer::QueuedOp>*)0) {
                    unaff_R13 = 0;
                    break;
                }
                pMVar4 = (MessageToServerWorkItem*)this_00->Reverse();
                field_24 = pMVar4;
            }
            pMVar4 = field_24;
            pMVar5 = (MessageToServerWorkItem*)pMVar4->HeapBeginPtr();
            if (3 < pMVar4->field_8 - 1)
                goto LAB_1000bba2d;
            in_RCX = CONCAT71((int7)(in_RCX >> 8), 1);
            bVar2 = false;
            switch (pMVar4->field_8) {
            case 1:
                if (pMVar4 != local_40) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("pItem == &m_connectionRequest",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                              "ServerConnection.cpp",
                              209, (char*)0);
                }
                if (m_connectionState == 1) {
                    puVar6 = (uint*)std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator->(local_38);
                    uVar1 = *puVar6;
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
                        cVar3 = ((puVar6 + 31))->IsValid();
                        if (cVar3 == '\0') {
                            /* WARNING: Subroutine does not return */
                            LogAssert("m_connectionRequest.m_state->m_error.IsError()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                      "osclient/ServerConnection.cpp",
                                      228, (char*)0);
                        }
                        puVar7 = (undefined4*)std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator->(
                            local_38);
                        *puVar7 = 18;
                        m_connectionState = 0;
                    }
                }
                break;
            case 2:
                if (pMVar4 != (MessageToServerWorkItem*)0) {
                    pMVar4->~MessageToServerWorkItem();
                    operator_delete(pMVar4);
                }
                break;
            case 3:
                goto switchD_1000bbaa0_caseD_3;
            case 4:
                m_connectionState = 0;
                std::thread::join();
                std::thread::thread(local_50);
                swap(local_50);
                std::thread::~thread(local_50);
            }
        LAB_1000bba2d:
            field_24 = pMVar5;
            bVar2 = true;
            in_RCX = unaff_R13 & 4294967295;
        switchD_1000bbaa0_caseD_3:
            unaff_R13 = in_RCX & 4294967295;
        } while (bVar2);
        return unaff_R13 & 4294967041;
    }

    // 0x1000bbbe0, 112 bytes, placed by class name
    // ServerConnection::GetNextServerMessage(shared::ServerMessage&)
    ulong ServerConnection::GetNextServerMessage(ServerMessage* param_1) {
        MessageToServerWorkItem* this_00;
        MessageToServerWorkItem* pMVar2;
        ulong uVar3;

        if (m_connectionState == 3) {
            if (AdvanceWorkerQueueToPacket(this) != '\0') {
                this_00 = field_24;
                pMVar2 = (MessageToServerWorkItem*)this_00->HeapBeginPtr();
                field_24 = pMVar2;
                shared::ServerMessage::operator=(param_1, (ServerMessage*)&this_00->field_16);
                uVar3 = CONCAT71((int7)((ulong)this >> 8), 1);
                if (this_00 != (MessageToServerWorkItem*)0) {
                    this_00->~MessageFromServerWorkItem();
                    operator_delete(this_00);
                }
                goto LAB_1000bbc39;
            }
        }
        uVar3 = 0;
    LAB_1000bbc39:
        return uVar3 & 4294967295;
    }

    // 0x1000bbcc0, 800 bytes, placed by class name
    // ServerConnection::Reader_Run()
    void ServerConnection::Reader_Run() {
        TextureAtlasReference* this_00;
        undefined1* this_01;
        undefined1* this_02;
        char cVar1;
        ushort uVar2;
        ushort uVar3;
        uchar* puVar4;
        long lVar5;
        MessageFromServerWorkItem* this_03;
        uint uVar7;
        int iVar8;
        ulong uVar9;
        undefined1 local_90[8];
        long local_58;
        LockFreeStack<ServerConnectionWorkItem>* local_50;
        Isaac* local_48;
        Error local_38[2];

        this_thread::SetThreadName("ServerConnection Reader");
        this_01 = &field_168;
        this_02 = field_448;
        local_48 = (Isaac*)&field_480;
        local_50 = (LockFreeStack<ServerConnectionWorkItem>*)&field_16;
        do {
            if (field_4608 == '\0')
                break;
            new (local_38) callstack::Callstack();
            puVar4 = (uchar*)this_02->GetDataPtr();
            cVar1 = this_01->Read(puVar4, 1, local_38);
            iVar8 = 3;
            if (cVar1 != '\0') {
                this_02->SetPos(0);
                cVar1 = this_02->gSmart1or2EncTest(local_48);
                if (cVar1 != '\0') {
                    lVar5 = this_02->GetDataPtr();
                    cVar1 = this_01->Read((uchar*)(lVar5 + 1), 1, local_38);
                    if (cVar1 == '\0')
                        goto LAB_1000bbd10;
                }
                uVar2 = this_02->gSmart1or2Enc(local_48);
                if (122 < uVar2) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("packetType < ServerProt::NUM_PROT_IDS",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                              "ServerConnection.cpp",
                              292, (char*)0);
                }
                if (uVar2 < 123) {
                    uVar7 = *(uint*)(PTR_SIZES_100ee6b88 + (ulong)(uint)uVar2 * 4);
                    if (uVar7 == 4294967294) {
                        puVar4 = (uchar*)this_02->GetDataPtr();
                        cVar1 = this_01->Read(puVar4, 2, local_38);
                        this = (ServerConnection*)this;
                        if (cVar1 != '\0') {
                            this_02->SetPos(0);
                            uVar3 = this_02->g2();
                            uVar7 = (uint)uVar3;
                            goto LAB_1000bbe68;
                        }
                    } else {
                        if (uVar7 == 4294967295) {
                            cVar1 = this_01->Read(local_90, 1, local_38);
                            uVar7 = (uint)(byte)local_90[0];
                            if (cVar1 != '\0')
                                goto LAB_1000bbe68;
                            iVar8 = 3;
                        } else {
                        LAB_1000bbe68:
                            new (local_90) shared::ClientMessage();
                            uVar9 = (ulong)(int)uVar7;
                            local_90._0_4_ = (uint)uVar2;
                            ((local_90 + 8))->Reserve(uVar9);
                            puVar4 = (uchar*)((local_90 + 8))->GetDataPtr();
                            cVar1 = this_01->Read(puVar4, uVar7, local_38);
                            iVar8 = 3;
                            if (cVar1 != '\0') {
                                this_00 = (TextureAtlasReference*)(local_90 + 8);
                                if (local_90._0_4_ == 51) {
                                    local_58 = this_00->size();
                                    if (local_58 != 0) {
                                        /* WARNING: Subroutine does not return */
                                        LogAssert("pos == 0",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "projects/osclient/ServerConnection.cpp",
                                                  331, (char*)0);
                                    }
                                    puVar4 = (uchar*)this_00->GetDataPtr();
                                    this_00->gArrayBufferEncrypted(puVar4, (int)local_58, uVar7, local_48);
                                    this_00->SetPos(0);
                                }
                                if (this_00->GetTextureAtlas() != uVar9) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("msg.p.GetSize() == static_cast<size_t>(packetSize)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                              "projects/osclient/ServerConnection.cpp",
                                              338, (char*)0);
                                }
                                this_03 = operator_new(72);
                                MessageFromServerWorkItem::MessageFromServerWorkItem(this_03, (ServerMessage*)local_90);
                                local_50->PushHead(this_03);
                                ((ServerConnection*)this)->m_bytesReceived =
                                    ((ServerConnection*)this)->m_bytesReceived + uVar9;
                                iVar8 = 0;
                            }
                            local_90->~ServerMessage();
                        }
                        this = (ServerConnection*)this;
                    }
                } else {
                    this_01->Close();
                }
            }
        LAB_1000bbd10:
        } while (iVar8 == 0);
        local_50->PushHead(field_400);
    }

    // 0x1000bc130, 576 bytes, placed by class name
    // ServerConnection::Writer_Login_GetLoginPackets()
    int ServerConnection::Writer_Login_GetLoginPackets() {
        __cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>* p_Var1;
        undefined1* this_00;
        undefined1* this_01;
        undefined1* puVar2;
        char cVar3;
        byte bVar4;
        undefined1 uVar5;
        undefined1 uVar6;
        ushort uVar7;
        ushort uVar8;
        int iVar9;
        int iVar10;
        uint uVar11;
        long lVar12;
        uchar* puVar13;
        undefined8 uVar14;
        ulonglong uVar15;
        byte local_31;

        lVar12 = std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator*(
            (unique_ptr<LoginState, std::default_delete<LoginState>>*)&field_392);
        this_00 = &field_168;
        p_Var1 = (__cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>*)(lVar12 + 124);
        cVar3 = this_00->Read(&local_31, 1, p_Var1);
        iVar9 = 18;
        if (cVar3 != '\0') {
            this_01 = field_416;
            puVar13 = (uchar*)this_01->GetDataPtr();
            cVar3 = this_00->Read(puVar13, (uint)local_31, p_Var1);
            if (cVar3 == '\0') {
                iVar9 = 18;
            } else {
                this_01->SetPos(0);
                cVar3 = this_01->g1();
                *(bool*)(lVar12 + 392) = cVar3 == '\x01';
                if (cVar3 == '\x01') {
                    puVar2 = &field_480;
                    iVar9 = this_01->g1Enc(puVar2);
                    iVar10 = this_01->g1Enc(puVar2);
                    uVar7 = this_01->g1Enc(puVar2);
                    uVar8 = this_01->g1Enc(puVar2);
                    uVar11 = (uint)uVar8 | (uint)uVar7 << 8 | iVar10 << 16 | iVar9 << 24;
                } else {
                    uVar11 = this_01->g4();
                }
                *(uint*)(lVar12 + 396) = uVar11;
                bVar4 = this_01->g1();
                *(uint*)(lVar12 + 400) = (uint)bVar4;
                cVar3 = this_01->g1();
                *(bool*)(lVar12 + 404) = cVar3 == '\x01';
                uVar5 = this_01->g1();
                uVar6 = this_01->g1();
                *(uint*)(lVar12 + 408) = (uint)CONCAT11(uVar5, uVar6);
                bVar4 = this_01->g1();
                *(uint*)(lVar12 + 412) = (uint)bVar4;
                uVar14 = this_01->g8();
                *(undefined8*)(lVar12 + 416) = uVar14;
                uVar14 = this_01->g8();
                *(undefined8*)(lVar12 + 424) = uVar14;
                if (36 < local_31) {
                    uVar15 = this_01->g8();
                    notifications::SetNotificationUserID(uVar15);
                }
                uVar7 = this_01->gSmart1or2Enc((Isaac*)&field_480);
                if (uVar7 < 123) {
                    *(uint*)(lVar12 + 448) = (uint)uVar7;
                    uVar7 = this_01->g2();
                    ((lVar12 + 456))->Reserve((ulong)uVar7);
                    puVar13 = (uchar*)((lVar12 + 456))->GetDataPtr();
                    bVar4 = this_00->Read(puVar13, (uint)uVar7, p_Var1);
                    iVar9 = (uint)(bVar4 ^ 1) * 2 + 16;
                } else {
                    std::__cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>::__cxx_atomic_base_impl(
                        p_Var1, 34);
                    *(undefined4*)(lVar12 + 128) = 4294967292;
                    iVar9 = 18;
                }
            }
        }
        return iVar9;
    }

    // 0x1000bc3f0, 1552 bytes, placed by class name
    // ServerConnection::Writer_Login_GetSecondResponse()
    uint ServerConnection::Writer_Login_GetSecondResponse() {
        __cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>* p_Var1;
        undefined1* this_00;
        PacketT<Array<unsigned char, eastl::allocator>>* pPVar2;
        char cVar3;
        byte bVar4;
        ushort uVar5;
        long lVar6;
        eastl::string* this_01;
        long lVar7;
        undefined8 uVar8;
        uchar* puVar9;
        undefined1* this_02;
        ulong uVar10;
        bool bVar11;
        uint uVar12;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_60[32];
        PacketT<Array<unsigned char, eastl::allocator>>* local_40;
        byte local_32;
        byte local_31;

        lVar6 = std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator*(
            (unique_ptr<LoginState, std::default_delete<LoginState>>*)&field_392);
        this_00 = &field_168;
        p_Var1 = (__cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>*)(lVar6 + 124);
        cVar3 = this_00->Read(&local_31, 1, p_Var1);
        uVar12 = 18;
        if (cVar3 != '\0') {
            switch ((int)(char)local_31) {
            case 2:
                uVar12 = Writer_Login_GetLoginPackets(this);
                break;
            default:
                *(int*)(lVar6 + 128) = (int)(char)local_31;
                break;
            case 15:
                this_02 = field_416;
                puVar9 = (uchar*)this_02->GetDataPtr();
                cVar3 = this_00->Read(puVar9, 2, p_Var1);
                if (cVar3 != '\0') {
                    this_02->SetPos(0);
                    uVar5 = this_02->g2();
                    *(undefined4*)(lVar6 + 448) = 70;
                    ((lVar6 + 456))->Reserve((ulong)uVar5);
                    puVar9 = (uchar*)((lVar6 + 456))->GetDataPtr();
                    bVar4 = this_00->Read(puVar9, (uint)uVar5, p_Var1);
                    uVar12 = 18 - bVar4;
                }
                break;
            case 21:
                cVar3 = this_00->Read(&local_31, 1, p_Var1);
                if (cVar3 != '\0') {
                    *(uint*)(lVar6 + 132) = (uint)local_31 * 60 + 180;
                    *(undefined4*)(lVar6 + 128) = 21;
                    uVar12 = 7;
                }
                break;
            case 23:
                if (*(int*)(lVar6 + 120) == 0) {
                    *(undefined4*)(lVar6 + 120) = 1;
                    uVar12 = 0;
                } else {
                    std::__cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>::__cxx_atomic_base_impl(
                        p_Var1, 101);
                    *(undefined4*)(lVar6 + 128) = 23;
                }
                break;
            case 29:
                local_40 = (PacketT<Array<unsigned char, eastl::allocator>>*)field_416;
                puVar9 = (uchar*)local_40->GetDataPtr();
                cVar3 = this_00->Read(puVar9, 2, p_Var1);
                if (cVar3 != '\0') {
                    local_40->SetPos(0);
                    uVar5 = local_40->g2();
                    Writer_EnsureLoginPacketSize(this, (ulong)uVar5);
                    puVar9 = (uchar*)local_40->GetDataPtr();
                    cVar3 = this_00->Read(puVar9, (uint)uVar5, p_Var1);
                    pPVar2 = local_40;
                    if (cVar3 != '\0') {
                        uVar10 = 0;
                        local_40->SetPos(0);
                        do {
                            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                                eastl::string>(local_60, SUB81(pPVar2, 0));
                            this_01 = (eastl::string*)std::array<eastl::string, 3ul>::operator[](
                                (array<eastl::string, 3ul>*)(lVar6 + 296), uVar10);
                            eastl::string::operator=(this_01, (basic_string*)local_60);
                            local_60->~basic_string();
                            uVar10 = uVar10 + 1;
                        } while (uVar10 != 3);
                        *(undefined4*)(lVar6 + 128) = 29;
                        uVar12 = 12;
                    }
                }
                break;
            case 61:
                bVar4 = this_00->Read(&local_31, 1, p_Var1);
                lVar7 = Client::Instance();
                *(byte*)(lVar7 + 52032) = local_31 == 1 & bVar4;
                *(undefined4*)(lVar6 + 128) = 61;
                break;
            case 64:
                local_40 = (PacketT<Array<unsigned char, eastl::allocator>>*)field_416;
                local_40->SetPos(0);
                cVar3 = this_00->Read(&local_32, 1, p_Var1);
                uVar12 = 18;
                if (cVar3 != '\0') {
                    puVar9 = (uchar*)local_40->GetDataPtr();
                    cVar3 = this_00->Read(puVar9, (uint)local_32, p_Var1);
                    pPVar2 = local_40;
                    if (cVar3 != '\0') {
                        puVar9 = (uchar*)local_40->GetDataPtr();
                        pPVar2->gArrayBufferEncrypted(puVar9, 0, (uint)local_32, (Isaac*)&field_480);
                        pPVar2->SetPos(0);
                        bVar11 = SUB81(pPVar2, 0);
                        if (*(char*)(lVar6 + 41) != '\0') {
                            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                                eastl::string>(local_60, bVar11);
                            eastl::string::operator=((eastl::string*)(lVar6 + 136), (basic_string*)local_60);
                            local_60->~basic_string();
                            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                                eastl::string>(local_60, bVar11);
                            eastl::string::operator=((eastl::string*)(lVar6 + 168), (basic_string*)local_60);
                            local_60->~basic_string();
                            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                                eastl::string>(local_60, bVar11);
                            eastl::string::operator=((eastl::string*)(lVar6 + 200), (basic_string*)local_60);
                            local_60->~basic_string();
                            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                                eastl::string>(local_60, bVar11);
                            eastl::string::operator=((eastl::string*)(lVar6 + 232), (basic_string*)local_60);
                            local_60->~basic_string();
                        }
                        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                            eastl::string>(local_60, bVar11);
                        eastl::string::operator=((eastl::string*)(lVar6 + 264), (basic_string*)local_60);
                        local_60->~basic_string();
                        uVar8 = pPVar2->g8();
                        *(undefined8*)(lVar6 + 424) = uVar8;
                        *(undefined4*)(lVar6 + 128) = 64;
                        uVar12 = 5;
                    }
                }
                break;
            case 66:
                *(undefined4*)(lVar6 + 128) = 66;
                uVar12 = 19;
                break;
            case 69:
                local_40 = (PacketT<Array<unsigned char, eastl::allocator>>*)field_416;
                puVar9 = (uchar*)local_40->GetDataPtr();
                cVar3 = this_00->Read(puVar9, 2, p_Var1);
                if (cVar3 != '\0') {
                    local_40->SetPos(0);
                    uVar5 = local_40->g2();
                    Writer_EnsureLoginPacketSize(this, (ulong)uVar5);
                    puVar9 = (uchar*)local_40->GetDataPtr();
                    cVar3 = this_00->Read(puVar9, (uint)uVar5, p_Var1);
                    if (cVar3 != '\0') {
                        bVar4 = Writer_DoProofOfWork(this, (PacketT*)local_40);
                        *(undefined4*)(lVar6 + 128) = 69;
                        uVar12 = (uint)(bVar4 ^ 1) << 4 | 2;
                    }
                }
            }
        }
        return uVar12;
    }

    // 0x1000bca70, 64 bytes, placed by class name
    // ServerConnection::Writer_EnsureLoginPacketSize(unsigned long)
    void ServerConnection::Writer_EnsureLoginPacketSize(ulong param_1) {
        ulong uVar1;

        uVar1 = field_416->GetTextureAtlas();
        if (uVar1 < param_1) {
            (field_416, param_1)->Reserve();
        }
    }

    // 0x1000bcac0, 400 bytes, placed by class name
    // ServerConnection::Writer_DoProofOfWork(PacketT<Array<unsigned char, eastl::allocator> >&)
    uint ServerConnection::Writer_DoProofOfWork(PacketT* param_1) {
        undefined1* this_00;
        undefined1 uVar1;
        bool bVar2;
        uint uVar3;
        _func_decltype_nullptr* p_Var4;
        long lVar5;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar6;
        ulong uVar7;
        PacketT<Array<unsigned char, eastl::allocator>>* this_01;
        uchar* puVar8;
        unique_ptr<game::ProofOfWorkSolver, std::default_delete<game::ProofOfWorkSolver>> local_38[8];
        Callstack local_30;

        param_1->SetPos(0);
        uVar1 = param_1->g1();
        local_38->GetProofOfWorkSolver(uVar1);
        p_Var4 = (_func_decltype_nullptr*)
                     std::unique_ptr<game::ProofOfWorkSolver, std::default_delete<game::ProofOfWorkSolver>>::operator->(
                         local_38);
        (**(code**)(*(long*)p_Var4 + 8))(&local_30.field_8, p_Var4, param_1);
        bVar2 = std::operator==((unique_ptr*)&local_30.field_8, p_Var4);
        if (bVar2) {
            lVar5 = std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator->(
                (unique_ptr<LoginState, std::default_delete<LoginState>>*)&field_392);
            new ((lVar5 + 124)) std::__cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>(22);
            uVar3 = 0;
        } else {
            phVar6 =
                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                           eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                           eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)
                    std::unique_ptr<PacketT<Array<unsigned char, eastl::allocator>>,
                                    std::default_delete<PacketT<Array<unsigned char, eastl::allocator>>>>::
                    operator->(
                        (unique_ptr<PacketT<Array<unsigned char, eastl::allocator>>,
                                    std::default_delete<PacketT<Array<unsigned char, eastl::allocator>>>>*)&local_30
                            .field_8);
            lVar5 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(phVar6);
            Writer_EnsureLoginPacketSize(this, lVar5 + 3);
            this_00 = field_416;
            this_00->SetPos(0);
            PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)this_00, 19);
            phVar6 =
                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                           eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                           eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)
                    std::unique_ptr<PacketT<Array<unsigned char, eastl::allocator>>,
                                    std::default_delete<PacketT<Array<unsigned char, eastl::allocator>>>>::
                    operator->(
                        (unique_ptr<PacketT<Array<unsigned char, eastl::allocator>>,
                                    std::default_delete<PacketT<Array<unsigned char, eastl::allocator>>>>*)&local_30
                            .field_8);
            uVar7 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(phVar6);
            PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)this_00, uVar7);
            this_01 =
                (PacketT<Array<unsigned char, eastl::allocator>>*)
                    std::unique_ptr<PacketT<Array<unsigned char, eastl::allocator>>,
                                    std::default_delete<PacketT<Array<unsigned char, eastl::allocator>>>>::
                    operator->(
                        (unique_ptr<PacketT<Array<unsigned char, eastl::allocator>>,
                                    std::default_delete<PacketT<Array<unsigned char, eastl::allocator>>>>*)&local_30
                            .field_8);
            puVar8 = (uchar*)this_01->GetDataPtr();
            phVar6 =
                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                           eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                           eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)
                    std::unique_ptr<PacketT<Array<unsigned char, eastl::allocator>>,
                                    std::default_delete<PacketT<Array<unsigned char, eastl::allocator>>>>::
                    operator->(
                        (unique_ptr<PacketT<Array<unsigned char, eastl::allocator>>,
                                    std::default_delete<PacketT<Array<unsigned char, eastl::allocator>>>>*)&local_30
                            .field_8);
            uVar7 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(phVar6);
            this_00->pArrayBuffer(puVar8, 0, uVar7);
            new (&local_30) callstack::Callstack();
            puVar8 = (uchar*)this_00->GetDataPtr();
            uVar3 = this_00->size();
            (&field_168, puVar8, uVar3, (Error*)&local_30)->Write();
            uVar3 = local_30.IsValid();
            uVar3 = uVar3 ^ 1;
        }
        local_30.field_8.~unique_ptr();
        std::unique_ptr<game::ProofOfWorkSolver, std::default_delete<game::ProofOfWorkSolver>>::~unique_ptr(local_38);
        return uVar3;
    }

    // 0x1000bccb0, 864 bytes, placed by class name
    // ServerConnection::Writer_ConnectAndLogin()
    void ServerConnection::Writer_ConnectAndLogin() {
        array* this_00;
        undefined1* this_01;
        undefined1* this_02;
        int iVar1;
        byte bVar2;
        char cVar3;
        uint uVar4;
        uint* puVar5;
        int* piVar6;
        char* pcVar7;
        uchar* puVar8;
        undefined8 uVar9;
        ulong uVar10;
        WaterNormalParamsTarget* this_03;
        undefined1 local_888[2064];
        __1 local_78[2];
        uint* local_68;
        WaterNormalParamsTarget* local_60;
        __1 local_58;
        void* local_50;
        void* local_48;
        ClientMessage* local_40;
        ServerConnectionWorkItem* local_38;

        local_38 = (ServerConnectionWorkItem*)field_376;
        puVar5 = (uint*)std::unique_ptr<LoginState, std::default_delete<LoginState>>::operator*(
            (unique_ptr<LoginState, std::default_delete<LoginState>>*)&field_392);
        new (local_888) callstack::Callstack();
        this_03 = (WaterNormalParamsTarget*)(puVar5 + 31);
        puVar5[31] = local_888._0_4_;
        this_00 = (array*)(puVar5 + 108);
        local_50 = &field_2544;
        local_48 = &field_480;
        local_40 = (ClientMessage*)(puVar5 + 12);
        local_68 = puVar5;
        local_60 = this_03;
        local_58.field_0 = this;
    LAB_1000bcd4a:
        do {
            if (*puVar5 == 1) {
                new (local_888) Isaac(this_00);
                _memcpy(local_50, (Isaac*)local_888, 2064);
                uVar10 = 0;
                do {
                    piVar6 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)this_00, uVar10);
                    iVar1 = *piVar6;
                    piVar6 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)local_78, uVar10);
                    *piVar6 = iVar1 + 50;
                    uVar10 = uVar10 + 1;
                } while (uVar10 != 4);
                new (local_888) Isaac(local_78);
                _memcpy(local_48, (Isaac*)local_888, 2064);
                this = local_58.field_0;
                uVar4 = Writer_SendClientMessage(local_58.field_0, local_40);
                this_03 = local_60;
                puVar5 = local_68;
                local_68[31] = uVar4;
                bVar2 = local_60->IsValid();
                *puVar5 = (uint)bVar2 << 4 | 2;
                uVar4 = *puVar5;
            } else {
                if (*puVar5 == 0) {
                    this_01 = &field_168;
                    this_01->Close();
                    this_01->Initialize();
                    pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    cVar3 = this_01->Connect(pcVar7, this_03);
                    if (cVar3 == '\0') {
                        cVar3 = this_03->IsValid();
                        if (cVar3 != '\0')
                            goto LAB_1000bcf76;
                    } else {
                        this_01->SetSocketRecvTimeOut(15000);
                        local_888[0] = (thread)14;
                        cVar3 = this_01->Write(local_888, 1, this_03);
                        if (cVar3 == '\0') {
                            cVar3 = this_03->IsValid();
                            if (cVar3 == '\0') {
                                new (this_03) std::__cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>(22);
                            }
                            goto LAB_1000bcf76;
                        }
                        cVar3 = this_01->Read(local_888, 1, this_03);
                        if (cVar3 == '\0') {
                            cVar3 = this_03->IsValid();
                            if (cVar3 == '\0') {
                                new (this_03) std::__cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>(22);
                                puVar5[32] = 23;
                            }
                            goto LAB_1000bcf76;
                        }
                        if (local_888[0] == (thread)0) {
                            this_02 = field_416;
                            puVar8 = (uchar*)this_02->GetDataPtr();
                            cVar3 = this_01->Read(puVar8, 8, this_03);
                            if (cVar3 != '\0') {
                                this_02->SetPos(0);
                                uVar9 = this_02->g8();
                                *(undefined8*)(puVar5 + 28) = uVar9;
                                *puVar5 = 1;
                                goto LAB_1000bcf76;
                            }
                        }
                    }
                    uVar9 = 22;
                    goto LAB_1000bcf71;
                }
                uVar4 = *puVar5;
            }
            if (uVar4 == 2) {
                uVar4 = Writer_Login_GetSecondResponse(this);
                *puVar5 = uVar4;
                if (uVar4 == 2)
                    goto LAB_1000bcd4a;
            }
            if (*puVar5 != 0) {
                if ((*puVar5 == 18) && (cVar3 = this_03->IsValid(), cVar3 == '\0')) {
                    uVar9 = 13;
                LAB_1000bcf71:
                    new (this_03) std::__cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>(uVar9);
                }
            LAB_1000bcf76:
                cVar3 = this_03->IsValid();
                if (cVar3 != '\0') {
                    (&field_168)->Close();
                }
                (&field_16, local_38)->PushHead();
                if ((*puVar5 & 4294967294) == 16) {
                    local_78[0].field_0 = this;
                    std::thread::thread<ServerConnection::Writer_ConnectAndLogin()::__1, , void>((thread*)local_888,
                                                                                                 local_78);
                    std::thread::operator=((thread*)this, (thread*)local_888);
                    local_888->~thread();
                }
                return;
            }
        } while (true);
    }

    // 0x1000bd030, 96 bytes, placed by class name
    // ServerConnection::Writer_SendClientMessage(shared::ClientMessage&)
    int ServerConnection::Writer_SendClientMessage(ClientMessage* param_1) {
        uint uVar1;
        uchar* puVar2;
        int local_30[2];

        new (local_30) callstack::Callstack();
        puVar2 = (uchar*)(&param_1->field_8)->GetDataPtr();
        uVar1 = (&param_1->field_8)->size();
        (&field_168, puVar2, uVar1, (Error*)local_30)->Write();
        return local_30[0];
    }

    // 0x1000bd0a0, 288 bytes, placed by class name
    // ServerConnection::Writer_Run()
    void ServerConnection::Writer_Run() {
        LockFreeStackData<sound::Mixer::QueuedOp>* this_00;
        ServerConnectionWorkItem* this_01;
        long lVar1;
        ServerConnectionWorkItem* pSVar2;

        this_thread::SetThreadName("ServerConnection Writer");
        if (field_4608 != '\0') {
            do {
                this_00 = (LockFreeStackData<sound::Mixer::QueuedOp>*)(&field_32)->TakeStack();
                this_01 = (ServerConnectionWorkItem*)this_00->Reverse();
                if (this_01 != (ServerConnectionWorkItem*)0) {
                    do {
                        pSVar2 = (ServerConnectionWorkItem*)this_01->HeapBeginPtr();
                        if (this_01->field_8 == 2) {
                            Writer_SendClientMessage(this, (ClientMessage*)(this_01 + 1));
                            (&field_16, this_01)->PushHead();
                            lVar1 = this_01[1].field_8.GetTextureAtlas();
                            m_bytesSent = m_bytesSent + lVar1;
                        } else if (this_01->field_8 == 1) {
                            if (this_01 != (ServerConnectionWorkItem*)field_376) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("pCur == &m_connectionRequest",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                          "osclient/ServerConnection.cpp",
                                          797, (char*)0);
                            }
                            Writer_ConnectAndLogin(this);
                        }
                        this_01 = pSVar2;
                    } while (pSVar2 != (ServerConnectionWorkItem*)0);
                }
                field_40->WaitForAndLowerSignal();
            } while (field_4608 != '\0');
        }
    }

    // 0x1001362c0, 16 bytes, placed by class name
    // ServerConnection::Writer_ConnectAndLogin()::$_1::operator()() const
    /* ServerConnection::Writer_ConnectAndLogin()::$_1::TEMPNAMEPLACEHOLDERVALUE() const
    */

    void ServerConnection::Writer_ConnectAndLogin()::$_1::operator()() {
        Reader_Run(field_0);
    }

} // namespace jag::oldscape
