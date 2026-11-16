// libs/game/runetek5/network/ServerConnection.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ServerConnection.h"

namespace jag::game {
    // 0x100d42dd8, 4 bytes, __const
    ServerConnection::SOCKET_RCV_BUFFER_SIZE = 131072;

    // 0x100d42ddc, 4 bytes, __const
    ServerConnection::SOCKET_SND_BUFFER_SIZE = 8192;

    // 0x100d42de0, 4 bytes, __const
    ServerConnection::CIRCULAR_RCV_BUFFER_SIZE = 1048576;

    // 0x100d42de4, 28 bytes, __const
    ServerConnection::CIRCULAR_SND_BUFFER_SIZE = {1.43493e-41f, -60.0f, 0, 0, 1.0f, 1.0f, 1.0f};

    // 0x1039b55c0, 16 bytes, __common; set at startup by ___cxx_global_var_init.8
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ServerConnection::NullConnection;

    // 0x1004a2000, 272 bytes, base-object constructor, placed by class name
    // ServerConnection::ServerConnection()
    void ServerConnection::ServerConnection() {
        _func_decltype_nullptr* in_RSI;

        field_0 = 0;
        new (field_8, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_24, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_48 = 0;
        field_40 = 0;
        *(undefined8*)&field_52 = 18446744073709551615;
        field_60 = 1;
        field_64 = 0;
        field_68 = 0;
        std::unique_ptr<Isaac, std::default_delete<Isaac>>::unique_ptr<true, void>(
            (unique_ptr<Isaac, std::default_delete<Isaac>>*)&field_72);
        new (&field_80) eastl::fixed_list<shared_ptr<TcpConnectionMessageBase>, 16ul, true, eastl::allocator>();
        field_704 = 0;
        std::unique_ptr<Isaac, std::default_delete<Isaac>>::unique_ptr<true, void>(
            (unique_ptr<Isaac, std::default_delete<Isaac>>*)&field_712);
        new (&field_720, 50000) PacketT<Array<unsigned char, BucketAllocatorEASTL>>();
        *(undefined8*)&field_752 = 4294967295;
        field_760 = 0;
        std::function<void(ServerConnection::MessageType)>::function(
            (function<void(ServerConnection::MessageType)>*)&field_768);
    }

    // 0x1004a2160, 16 bytes, complete-object constructor, placed by class name
    // ServerConnection::ServerConnection(): jumps straight to the base-object constructor

    // 0x1004a2170, 576 bytes, placed by class name
    // ServerConnection::OpenConnection(eastl::string const&, unsigned short, bool)
    void ServerConnection::OpenConnection(basic_string* param_1, ushort param_2, bool param_3) {
        undefined1* this_00;
        undefined8 uVar4;
        undefined8 uVar5;
        CoordMapSquare* this_01;
        ClientStream* this_02;
        WaterNormalParamsTarget* this_03;
        undefined8 uVar6;
        undefined8 in_stack_ffffffffffffff70;
        undefined4 uVar7;
        unique_ptr local_88[32];
        char* local_68;
        shared_ptr local_60[2];
        bool local_31;

        uVar7 = (undefined4)((ulong)in_stack_ffffffffffffff70 >> 32);
        this_00 = field_8;
        if (this_00->operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_clientStream",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/network/"
                      "ServerConnection.cpp",
                      37, "ServerConnection: Tried to open an already open connection");
        }
        std::unique_ptr<Isaac, std::default_delete<Isaac>>::unique_ptr<true, void>((_func_decltype_nullptr*)local_88);
        std::unique_ptr<Isaac, std::default_delete<Isaac>>::unique_ptr<true, void>((_func_decltype_nullptr*)local_60);
        SetIsaacStreams((ServerConnection*)this, local_88, (unique_ptr*)local_60);
        local_60->~unique_ptr();
        local_88->~unique_ptr();
        uVar4 = logger::default_logger();
        uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(uVar4, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "network/ServerConnection.cpp",
                            42, "ServerConnection: Opening connection to: %s:%u", uVar5,
                            CONCAT44(uVar7, (uint)param_2));
        new (local_88) eastl::string();
        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::string::sprintf((char*)local_88, "%s:%u", uVar4, param_2);
        local_68 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_31 = true;
        make_shared<ClientStream, char const*, int const&, int const&, int const&, int const&, bool>(
            (jag*)local_60, &local_68, &CIRCULAR_RCV_BUFFER_SIZE, (int*)&CIRCULAR_SND_BUFFER_SIZE,
            &SOCKET_RCV_BUFFER_SIZE, &SOCKET_SND_BUFFER_SIZE, &local_31);
        shared_ptr<ClientStream>::operator=((shared_ptr<ClientStream>*)this_00, local_60);
        local_60->~shared_ptr();
        this_01 = (CoordMapSquare*)shared_ptr<ClientStream>::operator->((shared_ptr<ClientStream>*)this_00);
        if (this_01->GetX() != 2) {
            this_02 = (ClientStream*)shared_ptr<ClientStream>::operator->((shared_ptr<ClientStream>*)this_00);
            this_03 = (WaterNormalParamsTarget*)this_02->GetError();
            if (this_03->IsValid() != '\0') {
                uVar4 = logger::default_logger();
                uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_60->GetErrorString();
                uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(uVar4, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/network/ServerConnection.cpp",
                                    55, "Error connecting to %s (%s)", uVar5, uVar6);
                local_60->~basic_string();
                CloseConnection((ServerConnection*)this);
            }
        }
        local_88->~basic_string();
    }

    // 0x1004a24c0, 144 bytes, placed by class name
    // ServerConnection::CloseConnection()
    void ServerConnection::CloseConnection() {
        undefined8 uVar2;
        ClientStream* this_00;

        if (field_8->operator_cast_to_bool()) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "network/ServerConnection.cpp",
                                124, "Server connection: Close requested");
            FlushClientMessages(this);
            FinishPacket(this);
            this_00 = (ClientStream*)shared_ptr<ClientStream>::operator->((shared_ptr<ClientStream>*)field_8);
            this_00->Close();
            shared_ptr<ClientStream>::reset();
            (&field_80)->clear();
        }
        *(undefined8*)&field_756 = 0;
    }

    // 0x1004a2550, 64 bytes, placed by class name
    // ServerConnection::IsConnected() const
    bool ServerConnection::IsConnected() {
        bool bVar1;
        CoordMapSquare* this_00;

        bVar1 = field_8->operator_cast_to_bool();
        if (bVar1) {
            this_00 = (CoordMapSquare*)shared_ptr<ClientStream>::operator->((shared_ptr<ClientStream>*)field_8);
            bVar1 = this_00->GetX() == 2;
        } else {
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x1004a2590, 64 bytes, placed by class name
    // ServerConnection::IsConnecting() const
    bool ServerConnection::IsConnecting() {
        bool bVar1;
        CoordMapSquare* this_00;

        bVar1 = field_8->operator_cast_to_bool();
        if (bVar1) {
            this_00 = (CoordMapSquare*)shared_ptr<ClientStream>::operator->((shared_ptr<ClientStream>*)field_8);
            bVar1 = this_00->GetX() == 1;
        } else {
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x1004a25d0, 96 bytes, placed by class name
    // ServerConnection::CheckBytesAvailable(unsigned long) const
    bool ServerConnection::CheckBytesAvailable(ulong param_1) {
        ClientStream* pCVar2;
        ulong uVar3;
        bool bVar4;

        pCVar2 = (ClientStream*)shared_ptr<ClientStream>::operator->((shared_ptr<ClientStream>*)field_8);
        uVar3 = pCVar2->GetInBufferSize();
        bVar4 = true;
        if (uVar3 < param_1) {
            if (IsConnected(this) == '\0') {
                bVar4 = false;
            } else {
                pCVar2 = (ClientStream*)shared_ptr<ClientStream>::operator->((shared_ptr<ClientStream>*)field_8);
                uVar3 = pCVar2->GetAvailable();
                bVar4 = param_1 <= uVar3;
            }
        }
        return bVar4;
    }

    // 0x1004a2650, 128 bytes, placed by class name
    // ServerConnection::ReadBytes(unsigned long)
    undefined1* ServerConnection::ReadBytes(ulong param_1) {
        undefined1* this_00;
        ClientStream* this_01;
        ulong uVar1;

        this_00 = &field_720;
        this_00->SetPos(0);
        this_01 = (ClientStream*)shared_ptr<ClientStream>::operator->((shared_ptr<ClientStream>*)field_8);
        uVar1 = ClientStream::Read<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>(this_01, (PacketT*)this_00,
                                                                                        param_1);
        if (uVar1 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "network/ServerConnection.cpp",
                            88,
                            "ServerConnection: Read bytes read less than requested - make sure you check availability "
                            "before reading");
        }
        this_00->SetPos(0);
        return this_00;
    }

    // 0x1004a2740, 48 bytes, placed by class name
    // ServerConnection::FinishPacket()
    void ServerConnection::FinishPacket() {
        if (field_52 != -1) {
            field_752 = field_52;
        }
        field_52 = -1;
        *(undefined1*)((long)&field_60 + 1) = 0;
        field_48 = 0;
        field_64 = 0;
        field_68 = 0;
    }

    // 0x1004a2770, 112 bytes, placed by class name
    // ServerConnection::PacketStillLoading()
    void ServerConnection::PacketStillLoading() {
        uint uVar1;
        undefined8 uVar2;

        uVar1 = field_64 + 1;
        field_64 = uVar1;
        if ((field_68 == '\0') && (499 < uVar1)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "network/ServerConnection.cpp",
                                115, "Still loading packet type %d after %u cycles!", field_52, field_64);
            field_68 = 1;
        }
    }

    // 0x1004a27e0, 416 bytes, placed by class name
    // ServerConnection::FlushClientMessages()
    ulong ServerConnection::FlushClientMessages() {
        undefined1* this_00;
        undefined1* this_01;
        ServerConnection* pSVar1;
        bool bVar2;
        char cVar3;
        int iVar4;
        CoordMapSquare* this_02;
        shared_ptr* psVar5;
        TcpConnectionMessageBase* this_03;
        ClientStream* pCVar6;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_04;
        PacketT<Array<unsigned char, eastl::allocator>>* this_05;
        uchar* puVar7;
        long lVar8;
        undefined8 in_RCX;
        ulong uVar9;
        shared_ptr<oldscape::dash3d::Decor> local_50[16];
        ServerConnection* local_40;
        shared_ptr<ClientStream>* local_38;

        this_00 = field_8;
        bVar2 = this_00->operator_cast_to_bool();
        if (bVar2) {
            this_01 = &field_80;
            local_40 = this;
            cVar3 = this_01->empty();
            uVar9 = CONCAT71((int7)((ulong)in_RCX >> 8), 1);
            if (cVar3 != '\0')
                goto LAB_1004a292a;
            this_02 = (CoordMapSquare*)shared_ptr<ClientStream>::operator->((shared_ptr<ClientStream>*)this_00);
            iVar4 = this_02->GetX();
            if (iVar4 == 2) {
                local_38 = (shared_ptr<ClientStream>*)this_00;
                cVar3 = this_01->empty();
                if (cVar3 == '\0') {
                    do {
                        psVar5 = (shared_ptr*)eastl::list<
                            shared_ptr<TcpConnectionMessageBase>,
                            eastl::fixed_node_allocator<32ul, 16ul, 8ul, 0ul, true, eastl::allocator>>::front();
                        shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_50, psVar5);
                        this_03 = (TcpConnectionMessageBase*)shared_ptr<TcpConnectionMessageBase>::operator->(
                            (shared_ptr<TcpConnectionMessageBase>*)local_50);
                        pSVar1 = local_40;
                        iVar4 = this_03->GetEndPosition();
                        if (0 < iVar4) {
                            pCVar6 = (ClientStream*)shared_ptr<ClientStream>::operator->(local_38);
                            this_04 = (compressed_pair_imp<
                                       std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)
                                          shared_ptr<TcpConnectionMessageBase>::operator->(
                                              (shared_ptr<TcpConnectionMessageBase>*)local_50);
                            this_05 = (PacketT<Array<unsigned char, eastl::allocator>>*)eastl::compressed_pair_imp<
                                std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                eastl::allocator, 0>::second(this_04);
                            puVar7 = (uchar*)this_05->GetDataPtr();
                            lVar8 = pCVar6->Write(puVar7, (long)iVar4);
                            if (lVar8 == 0) {
                                local_50->~shared_ptr();
                                break;
                            }
                        }
                        *(int*)&pSVar1->field_756 = *(int*)&pSVar1->field_756 + iVar4;
                        if (pSVar1->field_704 < iVar4) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("packetSize <= m_clientMessagesTotalData",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/network/ServerConnection.cpp",
                                      186, (char*)0);
                        }
                        pSVar1->field_704 = pSVar1->field_704 - iVar4;
                        this_01->pop_front();
                        local_50->~shared_ptr();
                        cVar3 = this_01->empty();
                    } while (cVar3 == '\0');
                }
                pCVar6 = (ClientStream*)shared_ptr<ClientStream>::operator->(local_38);
                pCVar6->Flush();
                *(undefined4*)((long)&local_40->field_40 + 4) = 0;
                uVar9 = CONCAT71((int7)(uVar9 >> 8), 1);
                goto LAB_1004a292a;
            }
        }
        uVar9 = 0;
    LAB_1004a292a:
        return uVar9 & 4294967295;
    }

    // 0x1004a29b0, 64 bytes, placed by class name
    // ServerConnection::DropConnection()
    void ServerConnection::DropConnection() {
        if (field_8->operator_cast_to_bool()) {
            shared_ptr<ClientStream>::operator=((shared_ptr<ClientStream>*)&field_24, (shared_ptr*)field_8);
            shared_ptr<ClientStream>::reset();
        }
    }

    // 0x1004a29f0, 160 bytes, placed by class name
    // ServerConnection::SendClientMessage(shared_ptr<TcpConnectionMessageBase> const&, ServerConnection::MessageType)
    void ServerConnection::SendClientMessage(shared_ptr* param_1, undefined4 param_3) {
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar1;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_00;
        int iVar2;
        TcpConnectionMessageBase* this_01;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this_02;
        bool bVar3;

        bVar3 = (&field_768)->operator_cast_to_bool();
        if (bVar3) {
            std::function<void(ServerConnection::MessageType)>::operator()(
                (function<void(ServerConnection::MessageType)>*)&field_768, param_3);
        }
        (&field_80, param_1)->push_back();
        pcVar1 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                      eastl::allocator, 0>*)
                     shared_ptr<TcpConnectionMessageBase>::operator->((shared_ptr<TcpConnectionMessageBase>*)param_1);
        this_00 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)
            eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>::second(pcVar1);
        iVar2 =
            eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::size(this_00);
        this_01 = (TcpConnectionMessageBase*)shared_ptr<TcpConnectionMessageBase>::operator->(
            (shared_ptr<TcpConnectionMessageBase>*)param_1);
        this_01->SetEndPosition(iVar2);
        pcVar1 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                      eastl::allocator, 0>*)
                     shared_ptr<TcpConnectionMessageBase>::operator->((shared_ptr<TcpConnectionMessageBase>*)param_1);
        this_02 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)
            eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>::second(pcVar1);
        this_02->SetPos(0);
        field_704 = field_704 + iVar2;
    }

    // 0x1004a4a60, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.8
    void ___cxx_global_var_init_8(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&ServerConnection::NullConnection) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5218, &ServerConnection::NullConnection, 4294967296);
    }

} // namespace jag::game
