// libs/game/runetek5/network/ServerConnection.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class ServerConnection {
    public:
        ServerConnection();
        void OpenConnection(eastl::string const&, unsigned short, bool);
        void SetIsaacStreams(std::unique_ptr<Isaac, std::default_delete<Isaac>>&&,
                             std::unique_ptr<Isaac, std::default_delete<Isaac>>&&);
        void CloseConnection();
        bool IsConnected() const;
        bool IsConnecting() const;
        bool CheckBytesAvailable(unsigned long) const;
        ReadBytes(unsigned long);
        void FinishPacket();
        void PacketStillLoading();
        ulong FlushClientMessages();
        void DropConnection();
        void SendClientMessage(shared_ptr<TcpConnectionMessageBase> const&, MessageType);
        static /* 4 bytes */ SOCKET_RCV_BUFFER_SIZE;    // = 131072
        static /* 4 bytes */ SOCKET_SND_BUFFER_SIZE;    // = 8192
        static /* 4 bytes */ CIRCULAR_RCV_BUFFER_SIZE;  // = 1048576
        static /* 28 bytes */ CIRCULAR_SND_BUFFER_SIZE; // = { 1.43493e-41f, -60.0f, 0, 0, 1.0f, 1.0f, 1.0f }
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConnection;

        // data members, from how the methods use this: 776 bytes
        undefined8 field_0; // offset 0
        shared_ptr field_8; // offset 8
        char _unknown_24[16];
        undefined8 field_40; // offset 40
        undefined1 field_48; // offset 48
        char _unknown_49[3];
        int field_52; // offset 52
        char _unknown_56[4];
        undefined2 field_60; // offset 60
        char _unknown_62[2];
        uint field_64;       // offset 64
        undefined1 field_68; // offset 68
        char _unknown_69[635];
        int field_704; // offset 704
        char _unknown_708[44];
        int field_752; // offset 752
        char _unknown_756[4];
        undefined4 field_760; // offset 760
        char _unknown_764[12];
    };

    // 0x1004a23b0, 48 bytes, inline, placed by class name and debug map
    // ServerConnection::SetIsaacStreams(std::unique_ptr<Isaac, std::default_delete<Isaac> >&&, std::unique_ptr<Isaac, std::default_delete<Isaac> >&&)
    /* ServerConnection::SetIsaacStreams(std::unique_ptr<Isaac,
   std::default_delete<Isaac> >&&, std::unique_ptr<Isaac, std::default_delete<Isaac>
   >&&) */

    void ServerConnection::SetIsaacStreams(unique_ptr* param_1, unique_ptr* param_2) {
        std::unique_ptr<Isaac, std::default_delete<Isaac>>::operator=(
            (unique_ptr<Isaac, std::default_delete<Isaac>>*)&field_72, param_1);
        std::unique_ptr<Isaac, std::default_delete<Isaac>>::operator=(
            (unique_ptr<Isaac, std::default_delete<Isaac>>*)&field_712, param_2);
    }

} // namespace jag::game

namespace jag::oldscape {
    class ServerConnectionWorkItem {
    public:
        ServerConnectionWorkItem(WorkType);

        // data members, from how the methods use this: 16 bytes
        char _unknown_0[8];
        undefined4 field_8; // offset 8
        char _unknown_12[4];
    };

} // namespace jag::oldscape

namespace jag {
    // 0x1004a23f0, 208 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<ClientStream>::type make_shared<ClientStream, char const*, int const&, int const&, int const&, int const&, bool>(char const*&&, int const&, int const&, int const&, int const&, bool&&)
    jag* make_shared<ClientStream, char const*, int const&, int const&, int const&, int const&, bool>(
        char** param_1, int* param_2, int* param_3, int* param_4, int* param_5, bool* param_6) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        ClientStream* local_40[2];

        pvVar1 = (void*)aligned_alloc(304, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] =
                placement_new<ClientStream, char const*, int const&, int const&, int const&, int const&, bool>(
                    (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5, param_6);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<ClientStream>, int, ClientStream*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

} // namespace jag
