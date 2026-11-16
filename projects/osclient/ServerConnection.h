// projects/osclient/ServerConnection.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class ServerConnection {
    public:
        class DisconnectedWorkItem;
        class LoginWorkItem;
        class MessageFromServerWorkItem;
        class MessageToServerWorkItem;
        uint64_t GetAverageBytesReceived();
        ServerConnection();
        void BeginAsyncConnectionWork(std::unique_ptr<LoginState>&& loginState);
        void Close();
        auto ConsumeUpdatedLoginState();
        void EndAndJoin();
        uint32_t GetConnectionState() const;
        void SendClientMessage(shared::ClientMessage&& clientMessage);
        unsigned long AdvanceWorkerQueueToPacket();
        unsigned long GetNextServerMessage(shared::ServerMessage& serverMessage);
        void Reader_Run();
        int Writer_Login_GetLoginPackets();
        unsigned int Writer_Login_GetSecondResponse();
        void Writer_EnsureLoginPacketSize(unsigned long arg1);
        unsigned int Writer_DoProofOfWork(PacketT<Array<unsigned char>>& arg1);
        void Writer_ConnectAndLogin();
        int Writer_SendClientMessage(shared::ClientMessage& clientMessage);
        void Writer_Run();
        void IncrementNoTimeOutTickCounter();
        long GetTicksSinceNoTimeOutPacket() const;
        void ResetNoTimeOutTickCounter();
        uint64_t GetBytesReceived();
        long GetBytesSent();
        ~ServerConnection();
        Isaac* GetOutgoingEncryption();

    private:
        uint64_t field_0;
        uint8_t _unknown_8[16];
        ReturnValue* field_24;
        uint8_t _unknown_32[8];
        Fence field_40;
        uint8_t _unknown_153[7];
        uint32_t m_connectionState;
        uint8_t _unknown_164[4];
        uint8_t field_168;
        uint8_t _unknown_169[207];
        ServerConnectionWorkItem field_376;
        uint8_t _unknown_392[8];
        ServerConnectionWorkItem field_400;
        WindowSavedPosition field_416;
        WindowSavedPosition field_448;
        uint8_t _unknown_480[4128];
        uint8_t field_4608;
        uint8_t _unknown_4609[7];
        long m_bytesSent;
        uint64_t m_bytesReceived;
        long m_ticksSinceNoTimeOutPacket;
    };

    class ServerConnection::DisconnectedWorkItem {
    public:
        DisconnectedWorkItem();

    private:
        uint8_t _unknown_0[8];
        int field_8;
    };

    class ServerConnection::LoginWorkItem {
    public:
        LoginWorkItem();
        ~LoginWorkItem();

    private:
        uint8_t _unknown_0[8];
        int field_8;
        uint8_t _unknown_12[12];
    };

    class ServerConnection::MessageFromServerWorkItem {
    public:
        ~MessageFromServerWorkItem();
        MessageFromServerWorkItem(shared::ServerMessage&& serverMessage);

    private:
        uint8_t _unknown_0[8];
        int field_8;
        uint8_t _unknown_12[60];
    };

    class ServerConnection::MessageToServerWorkItem {
    public:
        ~MessageToServerWorkItem();
        MessageToServerWorkItem(shared::ClientMessage&& clientMessage);

    private:
        uint8_t _unknown_0[8];
        int field_8;
        uint8_t _unknown_12[68];
    };

    // 0x1000e6080
    void ServerConnection::IncrementNoTimeOutTickCounter() {
        m_ticksSinceNoTimeOutPacket = m_ticksSinceNoTimeOutPacket + 1;
    }

    // 0x1000e6090
    long ServerConnection::GetTicksSinceNoTimeOutPacket() const {
        return m_ticksSinceNoTimeOutPacket;
    }

    // 0x1000e60a0
    void ServerConnection::ResetNoTimeOutTickCounter() {
        m_ticksSinceNoTimeOutPacket = 0;
    }

    // 0x100101850
    uint64_t ServerConnection::GetBytesReceived() {
        return m_bytesReceived;
    }

    // 0x100101860
    long ServerConnection::GetBytesSent() {
        return m_bytesSent;
    }

    // 0x100126010
    ServerConnection::LoginWorkItem::LoginWorkItem() : ServerConnectionWorkItem(1) {
        field_16.unique_ptr<true, void>();
    }

    // 0x100126040
    ServerConnection::DisconnectedWorkItem::DisconnectedWorkItem() : ServerConnectionWorkItem(4) {}

    // 0x100126060
    ServerConnection::LoginWorkItem::~LoginWorkItem() {
        field_16.~unique_ptr();
    }

    // 0x1001261a0
    ServerConnection::MessageFromServerWorkItem::~MessageFromServerWorkItem() {
        field_16.~ServerMessage();
    }

    // 0x1001261b0
    ServerConnection::MessageToServerWorkItem::~MessageToServerWorkItem() {
        field_16.~ClientMessage();
    }

    // 0x1001261c0
    ServerConnection::MessageToServerWorkItem::MessageToServerWorkItem(shared::ClientMessage&& clientMessage)
        : ServerConnectionWorkItem(2), field_16(clientMessage) {}

    // 0x1001265b0
    ServerConnection::MessageFromServerWorkItem::MessageFromServerWorkItem(shared::ServerMessage&& serverMessage)
        : ServerConnectionWorkItem(3), field_16(serverMessage) {}

    // 0x100135c00
    void ServerConnection::BeginAsyncConnectionWork(std::unique_ptr<LoginState>&&)::$_0::operator()() const {
        Writer_Run(*(ServerConnection**)this);
    }

    // 0x1001514f0
    ServerConnection::~ServerConnection() {
        EndAndJoin();
        field_448->~WindowSavedPosition();
        field_416->~WindowSavedPosition();
        field_376->~LoginWorkItem();
        field_40->~Fence();
        (&field_8)->~thread();
    }

    // 0x10017ca60
    Isaac* ServerConnection::GetOutgoingEncryption() {
        return (Isaac*)&field_2544;
    }

} // namespace jag::oldscape
