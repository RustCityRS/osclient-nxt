// projects/osclient/ServerConnection.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class ServerConnection {
    public:
        class DisconnectedWorkItem;
        class LoginWorkItem;
        class MessageFromServerWorkItem;
        class MessageToServerWorkItem;
        GetAverageBytesReceived();
        ServerConnection();
        void BeginAsyncConnectionWork(std::unique_ptr<LoginState, std::default_delete<LoginState>>&&);
        void Close();
        ConsumeUpdatedLoginState();
        void EndAndJoin();
        GetConnectionState() const;
        void SendClientMessage(shared::ClientMessage&&);
        ulong AdvanceWorkerQueueToPacket();
        ulong GetNextServerMessage(shared::ServerMessage&);
        void Reader_Run();
        int Writer_Login_GetLoginPackets();
        uint Writer_Login_GetSecondResponse();
        void Writer_EnsureLoginPacketSize(unsigned long);
        uint Writer_DoProofOfWork(PacketT<Array<unsigned char, eastl::allocator>>&);
        void Writer_ConnectAndLogin();
        int Writer_SendClientMessage(shared::ClientMessage&);
        void Writer_Run();
        void IncrementNoTimeOutTickCounter();
        long GetTicksSinceNoTimeOutPacket() const;
        void ResetNoTimeOutTickCounter();
        GetBytesReceived();
        long GetBytesSent();
        ~ServerConnection();
        GetOutgoingEncryption();

        // data members, from how the methods use this: 4640 bytes
        undefined8 field_0; // offset 0
        char _unknown_8[16];
        MessageToServerWorkItem* field_24; // offset 24
        char _unknown_32[8];
        Fence field_40; // offset 40
        char _unknown_153[7];
        undefined4 m_connectionState; // offset 160
        char _unknown_164[212];
        ServerConnectionWorkItem field_376; // offset 376
        char _unknown_392[8];
        ServerConnectionWorkItem field_400; // offset 400
        WindowSavedPosition field_416;      // offset 416
        WindowSavedPosition field_448;      // offset 448
        char _unknown_480[4128];
        undefined1 field_4608; // offset 4608
        char _unknown_4609[7];
        long m_bytesSent;                 // offset 4616
        undefined8 m_bytesReceived;       // offset 4624
        long m_ticksSinceNoTimeOutPacket; // offset 4632
    };

    class ServerConnection::DisconnectedWorkItem {
    public:
        DisconnectedWorkItem();

        // data members, from how the methods use this: 12 bytes
        char _unknown_0[8];
        undefined4 field_8; // offset 8
    };

    class ServerConnection::LoginWorkItem {
    public:
        LoginWorkItem();
        ~LoginWorkItem();

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[8];
        undefined4 field_8; // offset 8
        char _unknown_12[12];
    };

    class ServerConnection::MessageFromServerWorkItem {
    public:
        ~MessageFromServerWorkItem();
        MessageFromServerWorkItem(shared::ServerMessage&&);

        // data members, from how the methods use this: 72 bytes
        char _unknown_0[8];
        undefined4 field_8; // offset 8
        char _unknown_12[60];
    };

    class ServerConnection::MessageToServerWorkItem {
    public:
        ~MessageToServerWorkItem();
        MessageToServerWorkItem(shared::ClientMessage&&);

        // data members, from how the methods use this: 80 bytes
        char _unknown_0[8];
        undefined4 field_8; // offset 8
        char _unknown_12[68];
    };

    // 0x1000bb3a0, 16 bytes, complete-object constructor, inline, placed by class name
    // ServerConnection::LoginWorkItem::LoginWorkItem(): jumps straight to the base-object constructor

    // 0x1000bb3b0, 16 bytes, complete-object constructor, inline, placed by class name
    // ServerConnection::DisconnectedWorkItem::DisconnectedWorkItem(): jumps straight to the base-object constructor

    // 0x1000bb3d0, 16 bytes, complete-object destructor, inline, placed by class name
    // ServerConnection::LoginWorkItem::~LoginWorkItem(): jumps straight to the base-object destructor

    // 0x1000bb910, 16 bytes, complete-object destructor, inline, placed by class name
    // ServerConnection::MessageFromServerWorkItem::~MessageFromServerWorkItem(): jumps straight to the base-object destructor

    // 0x1000bb920, 16 bytes, complete-object destructor, inline, placed by class name
    // ServerConnection::MessageToServerWorkItem::~MessageToServerWorkItem(): jumps straight to the base-object destructor

    // 0x1000bb9b0, 16 bytes, complete-object constructor, inline, placed by class name
    // ServerConnection::MessageToServerWorkItem::MessageToServerWorkItem(shared::ClientMessage&&): jumps straight to the base-object constructor

    // 0x1000bc110, 16 bytes, complete-object constructor, inline, placed by class name
    // ServerConnection::MessageFromServerWorkItem::MessageFromServerWorkItem(shared::ServerMessage&&): jumps straight to the base-object constructor

    // 0x1000e6080, 16 bytes, inline, placed by class name
    // ServerConnection::IncrementNoTimeOutTickCounter()
    void ServerConnection::IncrementNoTimeOutTickCounter() {
        m_ticksSinceNoTimeOutPacket = m_ticksSinceNoTimeOutPacket + 1;
    }

    // 0x1000e6090, 16 bytes, inline, placed by class name
    // ServerConnection::GetTicksSinceNoTimeOutPacket() const
    long ServerConnection::GetTicksSinceNoTimeOutPacket() {
        return m_ticksSinceNoTimeOutPacket;
    }

    // 0x1000e60a0, 32 bytes, inline, placed by class name
    // ServerConnection::ResetNoTimeOutTickCounter()
    void ServerConnection::ResetNoTimeOutTickCounter() {
        m_ticksSinceNoTimeOutPacket = 0;
    }

    // 0x100101850, 16 bytes, inline, placed by class name
    // ServerConnection::GetBytesReceived()
    undefined8 ServerConnection::GetBytesReceived() {
        return m_bytesReceived;
    }

    // 0x100101860, 16 bytes, inline, placed by class name
    // ServerConnection::GetBytesSent()
    long ServerConnection::GetBytesSent() {
        return m_bytesSent;
    }

    // 0x100126010, 48 bytes, base-object constructor, inline, placed by class name
    // ServerConnection::LoginWorkItem::LoginWorkItem()
    void ServerConnection::LoginWorkItem::LoginWorkItem() {
        new (this) ServerConnectionWorkItem(1);
        std::unique_ptr<LoginState, std::default_delete<LoginState>>::unique_ptr<true, void>(
            (unique_ptr<LoginState, std::default_delete<LoginState>>*)&field_16);
    }

    // 0x100126040, 16 bytes, base-object constructor, inline, placed by class name
    // ServerConnection::DisconnectedWorkItem::DisconnectedWorkItem()
    void ServerConnection::DisconnectedWorkItem::DisconnectedWorkItem() {
        new (this) ServerConnectionWorkItem(4);
    }

    // 0x100126060, 16 bytes, base-object destructor, inline, placed by class name
    // ServerConnection::LoginWorkItem::~LoginWorkItem()
    void ServerConnection::LoginWorkItem::~LoginWorkItem() {
        (&field_16)->~unique_ptr();
    }

    // 0x1001261a0, 16 bytes, base-object destructor, inline, placed by class name
    // ServerConnection::MessageFromServerWorkItem::~MessageFromServerWorkItem()
    void ServerConnection::MessageFromServerWorkItem::~MessageFromServerWorkItem() {
        (&field_16)->~ServerMessage();
    }

    // 0x1001261b0, 16 bytes, base-object destructor, inline, placed by class name
    // ServerConnection::MessageToServerWorkItem::~MessageToServerWorkItem()
    void ServerConnection::MessageToServerWorkItem::~MessageToServerWorkItem() {
        (&field_16)->~ClientMessage();
    }

    // 0x1001261c0, 48 bytes, base-object constructor, inline, placed by class name
    // ServerConnection::MessageToServerWorkItem::MessageToServerWorkItem(shared::ClientMessage&&)
    void ServerConnection::MessageToServerWorkItem::MessageToServerWorkItem(ClientMessage* param_1) {
        new (this) ServerConnectionWorkItem(2);
        new (&field_16, param_1) shared::ClientMessage();
    }

    // 0x1001265b0, 48 bytes, base-object constructor, inline, placed by class name
    // ServerConnection::MessageFromServerWorkItem::MessageFromServerWorkItem(shared::ServerMessage&&)
    void ServerConnection::MessageFromServerWorkItem::MessageFromServerWorkItem(ServerMessage* param_1) {
        new (this) ServerConnectionWorkItem(3);
        new (&field_16, param_1) shared::ServerMessage();
    }

    // 0x100135c00, 16 bytes, inline, placed by class name
    // ServerConnection::BeginAsyncConnectionWork(std::unique_ptr<LoginState, std::default_delete<LoginState> >&&)::$_0::operator()() const
    /* ServerConnection::BeginAsyncConnectionWork(std::unique_ptr<LoginState,
   std::default_delete<LoginState> >&&)::$_0::TEMPNAMEPLACEHOLDERVALUE() const */

    void ServerConnection::BeginAsyncConnectionWork(
        std::unique_ptr<LoginState, std::default_delete<LoginState>>&&)::$_0::operator()() {
        Writer_Run(*(ServerConnection**)this);
    }

    // 0x1001514e0, 16 bytes, complete-object destructor, inline, placed by class name
    // ServerConnection::~ServerConnection(): jumps straight to the base-object destructor

    // 0x1001514f0, 192 bytes, base-object destructor, inline, placed by class name
    // ServerConnection::~ServerConnection()
    void ServerConnection::~ServerConnection() {
        EndAndJoin(this);
        field_448->~WindowSavedPosition();
        field_416->~WindowSavedPosition();
        field_376->~LoginWorkItem();
        (&field_168)->~BufferedSocket();
        field_40->~Fence();
        (&field_8)->~thread();
        ~thread();
    }

    // 0x10017ca60, 16 bytes, inline, placed by class name
    // ServerConnection::GetOutgoingEncryption()
    undefined1* ServerConnection::GetOutgoingEncryption() {
        return &field_2544;
    }

} // namespace jag::oldscape
