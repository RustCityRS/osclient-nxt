// libs/game/runetek5/network/ServerConnection.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ServerConnection.h"

namespace jag::game {
    // 0x100d42dd8
    int32_t ServerConnection::SOCKET_RCV_BUFFER_SIZE = 131072;

    // 0x100d42ddc
    int32_t ServerConnection::SOCKET_SND_BUFFER_SIZE = 8192;

    // 0x100d42de0
    int32_t ServerConnection::CIRCULAR_RCV_BUFFER_SIZE = 1048576;

    // 0x100d42de4
    float ServerConnection::CIRCULAR_SND_BUFFER_SIZE[7] = {1.43493e-41f, -60.0f, 0, 0, 1.0f, 1.0f, 1.0f};

    // 0x1039b55c0, set at startup by ___cxx_global_var_init.8
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ServerConnection::NullConnection =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x1004a2000
    ServerConnection::ServerConnection() : field_0(0) {
        new (&field_24) shared_ptr();
        field_48 = 0;
        field_40 = 0;
        *(uint64_t*)&field_52 = 18446744073709551615;
        field_60 = 1;
        field_64 = 0;
        field_68 = 0;
        field_72.unique_ptr<true, void>();
        new (&field_80) eastl::fixed_list<shared_ptr<TcpConnectionMessageBase>, 16ul>();
        field_704 = 0;
        field_712.unique_ptr<true, void>();
        new (&field_720) PacketT(50000);
        *(uint64_t*)&field_752 = 4294967295;
        field_760 = 0;
        new (&field_768) std::function<void(ServerConnection::MessageType)>();
    }

    // 0x1004a2170
    void ServerConnection::OpenConnection(const eastl::string& str, unsigned short arg2, bool arg3) {
        shared_ptr* shared_ptr;
        ClientStream* this_01;
        WaterNormalParamsTarget* this_02;
        uint64_t uVar5;
        uint64_t in_register_00000011;
        uint64_t in_register_00000032;
        uint64_t in_stack_ffffffffffffff70;
        ReturnValue local_60;

        uint32_t uVar7 = (uint32_t)((unsigned long)in_stack_ffffffffffffff70 >> 32);
        void* arg1 = (void*)(((uint64_t)in_register_00000032 << 16) | (uint16_t)arg2);
        shared_ptr = (shared_ptr*)(str + 8);
        if (shared_ptr::operator_cast_to_bool(shared_ptr)) {
            LogAssert("!m_clientStream",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/network/"
                      "ServerConnection.cpp",
                      37, "ServerConnection: Tried to open an already open connection");
        }
        local_88.unique_ptr<true, void>(arg1);
        local_60.unique_ptr<true, void>(arg1);
        SetIsaacStreams((ServerConnection*)str, &local_88, &local_60);
        auto pLVar3 = logger::default_logger();
        uint64_t uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long uVar6 = (((uint64_t)in_register_00000011 << 8) | (uint8_t)arg3) & 65535;
        pLVar3->Log(false, 8,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/network/"
                    "ServerConnection.cpp",
                    42, "ServerConnection: Opening connection to: %s:%u", uVar4,
                    (((uint64_t)uVar7 << 32) | (uint32_t)((int)uVar6)));
        unique_ptr<Isaac> local_88;
        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_88.sprintf("%s:%u", uVar4, uVar6);
        uint64_t local_68 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uint8_t local_31 = 1;
        make_shared<ClientStream, char const*, int const&, int const&, int const&, int const&, bool>(
            (char**)&local_60, (int*)&local_68, &CIRCULAR_RCV_BUFFER_SIZE, (int*)&CIRCULAR_SND_BUFFER_SIZE,
            &SOCKET_RCV_BUFFER_SIZE, (bool*)&SOCKET_SND_BUFFER_SIZE);
        *shared_ptr = local_60;
        if (((CoordMapSquare*)(*shared_ptr).operator->())->GetX() != 2) {
            this_01 = (ClientStream*)(*shared_ptr).operator->();
            this_02 = (WaterNormalParamsTarget*)this_01->GetError();
            if (this_02->IsValid()) {
                pLVar3 = logger::default_logger();
                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_60 = this_02->GetErrorString();
                uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pLVar3->Log(false, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "network/ServerConnection.cpp",
                            55, "Error connecting to %s (%s)", uVar4, uVar5);
                CloseConnection((ServerConnection*)str);
            }
        }
    }

    // 0x1004a24c0
    void ServerConnection::CloseConnection() {
        uint8_t* this_00 = field_8;
        if (this_00->operator_cast_to_bool() != '\0') {
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/network/"
                      "ServerConnection.cpp",
                      124, "Server connection: Close requested");
            FlushClientMessages();
            FinishPacket();
            ((ClientStream*)(*this_00).operator->())->Close();
            this_00->reset();
            field_80.clear();
        }
        *(uint64_t*)&field_756 = 0;
    }

    // 0x1004a2550
    bool ServerConnection::IsConnected() const {
        bool bVar3;

        if (field_8->operator_cast_to_bool() == '\0') {
            bVar3 = false;
        } else {
            bVar3 = ((CoordMapSquare*)(*field_8).operator->())->GetX() == 2;
        }
        return bVar3;
    }

    // 0x1004a2590
    bool ServerConnection::IsConnecting() const {
        bool bVar3;

        if (field_8->operator_cast_to_bool() == '\0') {
            bVar3 = false;
        } else {
            bVar3 = ((CoordMapSquare*)(*field_8).operator->())->GetX() == 1;
        }
        return bVar3;
    }

    // 0x1004a25d0
    bool ServerConnection::CheckBytesAvailable(unsigned long arg1) const {
        ClientStream* pCVar2 = (ClientStream*)(*field_8).operator->();
        unsigned long uVar3 = pCVar2->GetInBufferSize();
        bool bVar4 = true;
        if (uVar3 < arg1) {
            if (IsConnected() == '\0') {
                bVar4 = false;
            } else {
                pCVar2 = (ClientStream*)(*field_8).operator->();
                uVar3 = pCVar2->GetAvailable();
                bVar4 = arg1 <= uVar3;
            }
        }
        return bVar4;
    }

    // 0x1004a2650
    uint8_t* ServerConnection::ReadBytes(unsigned long arg1) {
        uint8_t* this_00 = &field_720;
        this_00->SetPos(0);
        if (((ClientStream*)(*field_8).operator->())
                ->Read<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>(*this_00, arg1) < arg1) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "network/ServerConnection.cpp",
                            88,
                            "ServerConnection: Read bytes read less than requested - make sure you check availability "
                            "before reading");
        }
        this_00->SetPos(0);
        return this_00;
    }

    // 0x1004a2740
    void ServerConnection::FinishPacket() {
        if (field_52 != 4294967295) {
            field_752 = field_52;
        }
        field_52 = 4294967295;
        *(uint8_t*)((long)&field_60 + 1) = 0;
        field_48 = 0;
        field_64 = 0;
        field_68 = 0;
    }

    // 0x1004a2770
    void ServerConnection::PacketStillLoading() {
        unsigned int uVar1 = field_64 + 1;
        field_64 = uVar1;
        if ((field_68 == '\0') && (499 < uVar1)) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/network/"
                      "ServerConnection.cpp",
                      115, "Still loading packet type %d after %u cycles!", (unsigned long)field_52,
                      (unsigned long)field_64);
            field_68 = 1;
        }
    }

    // 0x1004a27e0
    unsigned long ServerConnection::FlushClientMessages() {
        uint8_t* this_01;
        ServerConnection* pSVar1;
        int iVar3;
        shared_ptr<oldscape::dash3d::GroundDecor>* groundDecor;
        TcpConnectionMessageBase* this_03;
        ClientStream* pCVar4;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_04;
        PacketT<Array<unsigned char>>* this_05;
        unsigned char* arg1;
        uint64_t in_RCX;
        unsigned long uVar6;
        shared_ptr<oldscape::dash3d::Decor> local_50;
        ServerConnection* local_40;
        shared_ptr<ClientStream>* local_38;

        uint8_t* this_00 = field_8;
        bool cVar2 = this_00->operator_cast_to_bool();
        if (cVar2) {
            this_01 = &field_80;
            local_40 = this;
            cVar2 = this_01->empty();
            uVar6 = (((uint64_t)((int64_t)((unsigned long)in_RCX >> 8)) << 8) | (uint8_t)1);
            if (cVar2)
                goto LAB_1004a292a;
            iVar3 = ((CoordMapSquare*)(*this_00).operator->())->GetX();
            if (iVar3 == 2) {
                local_38 = (shared_ptr<ClientStream>*)this_00;
                cVar2 = this_01->empty();
                if (!cVar2) {
                    do {
                        groundDecor = (shared_ptr<oldscape::dash3d::GroundDecor>*)this_01->front();
                        local_50 = shared_ptr(groundDecor);
                        this_03 = (TcpConnectionMessageBase*)local_50.operator->();
                        pSVar1 = local_40;
                        iVar3 = this_03->GetEndPosition();
                        if (0 < iVar3) {
                            pCVar4 = (ClientStream*)(*local_38).operator->();
                            this_04 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)
                                          local_50.operator->();
                            this_05 = (PacketT<Array<unsigned char>>*)this_04->second();
                            arg1 = (unsigned char*)this_05->GetDataPtr();
                            if (pCVar4->Write(arg1, (long)iVar3) == 0) {
                                break;
                            }
                        }
                        *(int*)&pSVar1->field_756 = *(int*)&pSVar1->field_756 + iVar3;
                        if (pSVar1->field_704 < iVar3) {
                            LogAssert("packetSize <= m_clientMessagesTotalData",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/network/ServerConnection.cpp",
                                      186, nullptr);
                        }
                        pSVar1->field_704 = pSVar1->field_704 - iVar3;
                        this_01->pop_front();
                        cVar2 = this_01->empty();
                    } while (!cVar2);
                }
                pCVar4 = (ClientStream*)(*local_38).operator->();
                pCVar4->Flush();
                *(uint32_t*)((long)&local_40->field_40 + 4) = 0;
                uVar6 = (((uint64_t)((int64_t)(uVar6 >> 8)) << 8) | (uint8_t)1);
                goto LAB_1004a292a;
            }
        }
        uVar6 = 0;
    LAB_1004a292a:
        return uVar6 & 4294967295;
    }

    // 0x1004a29b0
    void ServerConnection::DropConnection() {
        uint8_t* this_00 = field_8;
        if (this_00->operator_cast_to_bool() != '\0') {
            field_24 = *this_00;
            this_00->reset();
        }
    }

    // 0x1004a29f0
    void ServerConnection::SendClientMessage(const shared_ptr<TcpConnectionMessageBase>& tcpConnectionMessageBase,
                                             ServerConnection::MessageType messageType) {
        if ((&field_768)->operator_cast_to_bool() != '\0') {
            std::function<void(ServerConnection::MessageType)>::operator()(
                (function<void(ServerConnection::MessageType)>*)&field_768, messageType);
        }
        field_80.push_back(tcpConnectionMessageBase);
        auto pcVar1 = tcpConnectionMessageBase.operator->();
        int arg1 = ((hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                               eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                               eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                               eastl::prime_rehash_policy, false, true, true>*)pcVar1->second())
                       ->size();
        ((TcpConnectionMessageBase*)tcpConnectionMessageBase.operator->())->SetEndPosition(arg1);
        pcVar1 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)
                     tcpConnectionMessageBase.operator->();
        ((PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)pcVar1->second())->SetPos(0);
        field_704 = field_704 + arg1;
    }

} // namespace jag::game
