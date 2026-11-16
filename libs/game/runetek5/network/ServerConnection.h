// libs/game/runetek5/network/ServerConnection.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class ServerConnection {
    public:
        ServerConnection();
        void OpenConnection(const eastl::string& str, unsigned short arg2, bool arg3);
        void SetIsaacStreams(std::unique_ptr<Isaac>&& isaac1, std::unique_ptr<Isaac>&& isaac2);
        void CloseConnection();
        bool IsConnected() const;
        bool IsConnecting() const;
        bool CheckBytesAvailable(unsigned long arg1) const;
        uint8_t* ReadBytes(unsigned long arg1);
        void FinishPacket();
        void PacketStillLoading();
        unsigned long FlushClientMessages();
        void DropConnection();
        void SendClientMessage(const shared_ptr<TcpConnectionMessageBase>& tcpConnectionMessageBase,
                               MessageType messageType);
        static int32_t SOCKET_RCV_BUFFER_SIZE;    // = 131072
        static int32_t SOCKET_SND_BUFFER_SIZE;    // = 8192
        static int32_t CIRCULAR_RCV_BUFFER_SIZE;  // = 1048576
        static float CIRCULAR_SND_BUFFER_SIZE[7]; // = { 1.43493e-41f, -60.0f, 0, 0, 1.0f, 1.0f, 1.0f }
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullConnection; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()

    private:
        uint64_t field_0;
        shared_ptr field_8;
        uint8_t _unknown_24[16];
        uint64_t field_40;
        uint8_t field_48;
        uint8_t _unknown_49[3];
        unsigned int field_52;
        uint8_t _unknown_56[4];
        uint16_t field_60;
        uint8_t _unknown_62[2];
        unsigned int field_64;
        uint8_t field_68;
        uint8_t _unknown_69[635];
        int field_704;
        uint8_t _unknown_708[44];
        int field_752;
        uint8_t _unknown_756[4];
        uint32_t field_760;
        uint8_t _unknown_764[12];
    };

    // 0x1004a23b0
    void ServerConnection::SetIsaacStreams(std::unique_ptr<Isaac>&& isaac1, std::unique_ptr<Isaac>&& isaac2) {
        field_72 = isaac1;
        field_712 = isaac2;
    }

} // namespace jag::game

namespace jag::oldscape {
    class ServerConnectionWorkItem {
    public:
        ServerConnectionWorkItem(WorkType arg1);

    private:
        uint8_t _unknown_0[8];
        int field_8;
        uint8_t _unknown_12[4];
    };

} // namespace jag::oldscape

namespace jag {
    // 0x1004a23f0
    shared_ptr_if_not_array<ClientStream>::type
    make_shared<ClientStream, char const*, int const&, int const&, int const&, int const&, bool>(
        const char*&& arg1, const int& arg2, const int& arg3, const int& arg4, const int& arg5, bool&& arg6) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        bool* in_stack_00000008;
        int local_44;
        ClientStream* local_40[2];

        auto arg1_00 = aligned_alloc(304, 8);
        if (arg1_00 == nullptr) {
            new (arg1) shared_ptr();
        } else {
            local_40[0] =
                placement_new<ClientStream, char const*, int const&, int const&, int const&, int const&, bool>(
                    (void*)((long)arg1_00 + 32), (char**)arg2, arg3, arg4, arg5, (int*)arg6, in_stack_00000008);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<ClientStream>, int, ClientStream*&>(arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (arg1) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return arg1;
    }

} // namespace jag
