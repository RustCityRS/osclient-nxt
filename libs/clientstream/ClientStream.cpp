// libs/clientstream/ClientStream.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.clientstream

#include "ClientStream.h"

namespace jag {
    // 0x100f460f8
    int32_t ClientStream::m_connectionPingMutex[16] = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x103bc2228
    int64_t ClientStream::m_ReadsFromClient;

    // 0x103bc2230
    int64_t ClientStream::m_WritesFromClient;

    // 0x103bc2238
    int64_t ClientStream::m_TotalBytesRead;

    // 0x103bc2240
    int64_t ClientStream::m_TotalBytesWritten;

    // 0x103bc2248
    int64_t ClientStream::m_LastAvailable;

    // 0x103bc2250
    int64_t ClientStream::m_SendTime;

    // 0x103bc2258, set at startup by ___cxx_global_var_init.1
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ClientStream::m_connectionPing =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x1000b9960: ClientStream::GetConnectionStatus() has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x1004ab500: ClientStream::GetError() const has the same machine code as game::EnvironmentOverride::GetScatteringOverrides() const

    // 0x100b0b4b0
    ClientStream::ClientStream(const char* str, int arg2, int arg3, int arg4, int arg5, bool arg6)
        : m_connectionStatus(1) {
        scoped_lock<std::mutex> local_a0;
        ReturnValue local_80;
        uint8_t local_58[40];

        ClientSocket* local_88 = (ClientSocket*)&field_8;
        new (local_88) ClientSocket(arg2);
        new (&field_144) eastl::ring_buffer<unsigned char, eastl::vector<unsigned char>>((long)arg2);
        field_200 = 4294967295;
        new (&field_208) Array<unsigned char>();
        vector<unsigned char>* local_98 = (vector<unsigned char>*)&field_232;
        new (local_98) eastl::vector<unsigned char>();
        field_264 = arg6;
        new (m_error) callstack::Callstack();
        local_98->set_capacity((long)arg3);
        m_connectionStatus = 1;
        if (!(local_88->Connect(str, m_error, arg4, arg5))) {
            Close();
        } else {
            if (local_88->IsOpen()) {
                m_connectionStatus = 2;
            }
        }
        if (local_88->IsOpen()) {
            local_a0 = std::scoped_lock(m_connectionPingMutex);
            if (!(m_connectionPing.operator_cast_to_bool())) {
                local_58._0_4_ = 1000;
                make_shared<network::Ping, int>(&local_80, (int*)local_58);
                m_connectionPing = local_80;
            }
            *local_58 = local_88->GetIPAddress();
            local_80 = network::PingResult();
            ((Ping*)m_connectionPing.operator->())->Get(local_80, *local_58);
        }
    }

    // 0x100b0b880
    shared_ptr_if_not_array<network::Ping>::type make_shared<network::Ping, int>(int&& arg1) {
        ref_counter_base* ref_counter_base;
        int local_34;
        Ping* local_30[2];

        auto arg1_00 = aligned_alloc(7152, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<network::Ping>::type result;
        } else {
            local_30[0] = placement_new<network::Ping, int>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            ref_counter_base =
                (ref_counter_base*)placement_new<ref_counter_shared<network::Ping>, int, network::Ping*&>(
                    arg1_00, &local_34, local_30);
            shared_ptr_do_enable_shared_from_this<network::Ping>(ref_counter_base, local_30[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x100b0b9c0
    ClientStream::~ClientStream() {

        scoped_lock<std::mutex> local_20(m_connectionPingMutex);
        if (m_connectionPing.operator_cast_to_bool() != '\0') {
            ((Ping*)m_connectionPing.operator->())->Shutdown();
            m_connectionPing.reset();
        }
        field_232.~vector();
        field_144.~ring_buffer();
        field_8.~ClientSocket();
    }

    // 0x100b0bac0
    uint32_t ClientStream::GetPing() {
        uint32_t uVar2;
        ReturnValue local_68;
        uint32_t local_48;
        uint8_t local_40[40];

        scoped_lock<std::mutex> local_70(m_connectionPingMutex);
        bool cVar1 = field_8.IsOpen();
        if (cVar1) {
            cVar1 = m_connectionPing.operator_cast_to_bool();
            if (!cVar1) {
                local_40._0_4_ = 1000;
                make_shared<network::Ping, int>(&local_68, (int*)local_40);
                m_connectionPing = local_68;
            }
            *local_40 = field_8.GetIPAddress();
            local_68 = network::PingResult();
            cVar1 = ((Ping*)m_connectionPing.operator->())->Get(local_68, *local_40);
            uVar2 = 4294967295;
            if (cVar1) {
                uVar2 = local_48;
            }
            field_200 = uVar2;
        }
        uVar2 = field_200;
        return uVar2;
    }

    // 0x100b0bc10
    unsigned long ClientStream::Read(unsigned char* arg1, unsigned long arg2) {
        bool cVar1;
        unsigned char* puVar6;

        m_ReadsFromClient = m_ReadsFromClient + 1;
        uint8_t* this_00 = &field_144;
        long lVar2 = this_00->capacity();
        unsigned long uVar4 = arg2;
        if (lVar2 == 0) {
            return 0;
        }
        unsigned long uVar3 = this_00->GetAuthWrapper();
        if (uVar4 <= uVar3) {
            uVar4 = this_00->remaining_capacity();
            uVar3 = this_00->capacity();
            if (uVar4 <= uVar3 / 10)
                goto LAB_100b0bc8d;
        }
        Service();
    LAB_100b0bc8d:
        unsigned long local_40 = this_00->GetAuthWrapper();
        auto puVar5 = std::min<unsigned long>(local_40, arg2);
        uVar4 = *puVar5;
        if (uVar4 != 0) {
            uVar3 = 0;
            do {
                puVar6 = (unsigned char*)this_00->capacity();
                arg1[uVar3] = *puVar6;
                this_00->pop_front();
                uVar3 = uVar3 + 1;
            } while (uVar4 != uVar3);
        }
        if ((m_connectionStatus == 0) && (cVar1 = this_00->empty(), cVar1)) {
            this_00->clear();
        }
        m_TotalBytesRead = m_TotalBytesRead + uVar4;
        return uVar4;
    }

    // 0x100b0bd80
    void ClientStream::Service() {
        uint8_t* this_00;
        unsigned long* puVar1;
        unsigned char* puVar2;
        long lVar3;
        long lVar4;
        back_insert_iterator<eastl::ring_buffer<unsigned char, eastl::vector<unsigned char>> _>* back_insert_iterator;
        Logger* this_01;
        uint64_t uVar5;
        ReturnValue local_60;
        rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>, eastl::allocator,
               eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>* local_40;
        unsigned long local_38;

        m_LastAvailable = field_8.Available(nullptr);
        if (m_LastAvailable != 0) {
            local_40 = (rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                               eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                               true>*)&field_144;
            local_38 = m_LastAvailable;
            local_60[0] = (ReturnValue)local_40->remaining_capacity();
            puVar1 = std::min<unsigned long>(local_38, local_60);
            local_38 = *puVar1;
            this_00 = &field_208;
            this_00->set_min_size(local_38, 5);
            puVar2 = (unsigned char*)this_00->data();
            lVar3 = field_8.Read(puVar2, local_38, m_error);
            if (lVar3 == 0) {
                this_01 = logger::default_logger();
                local_60 = m_error->GetErrorString();
                uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                this_01->Log(false, 8,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/clientstream/"
                             "ClientStream.cpp",
                             134, "ClientStream socket error: %s", uVar5);
                Close();
            } else {
                puVar2 = (unsigned char*)this_00->data();
                lVar4 = this_00->data();
                back_insert_iterator =
                    (back_insert_iterator<eastl::ring_buffer<unsigned char, eastl::vector<unsigned char>> _>*)
                        local_40->end();
                eastl::copy<unsigned char*, eastl::back_insert_iterator<
                                                eastl::ring_buffer<unsigned char, eastl::vector<unsigned char>>>>(
                    puVar2, (lVar3 + lVar4), back_insert_iterator);
            }
        }
    }

    // 0x100b0bf70
    unsigned long ClientStream::Write(const unsigned char* arg1, unsigned long arg2) {
        long lVar1;
        long lVar2;
        unsigned long uVar3;
        Logger* this_00;
        uint64_t uVar4;
        back_insert_iterator<eastl::vector<unsigned char> _>* back_insert_iterator;
        uint8_t* this_01;
        ReturnValue local_50;

        if (m_connectionStatus != 0) {
            if (field_264 == false) {
                uVar3 = field_8.Write(arg1, arg2, m_error);
                m_TotalBytesWritten = m_TotalBytesWritten + uVar3;
                if (uVar3 != arg2) {
                    this_00 = logger::default_logger();
                    local_50 = m_error->GetErrorString();
                    uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    this_00->Log(false, 2,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/clientstream/"
                                 "ClientStream.cpp",
                                 173, "Error writing to ClientStream: %s", uVar4);
                    Close();
                }
                return uVar3;
            }
            this_01 = &field_232;
            lVar1 = this_01->capacity();
            lVar2 = this_01->size();
            if (arg2 <= (unsigned long)(lVar1 - lVar2)) {
                back_insert_iterator = (back_insert_iterator<eastl::vector<unsigned char> _>*)this_01->end();
                eastl::copy<unsigned char const*, eastl::back_insert_iterator<eastl::vector<unsigned char>>>(
                    arg1, arg1 + arg2, back_insert_iterator);
                return arg2;
            }
        }
        return 0;
    }

    // 0x100b0c0d0
    void ClientStream::Flush() {
        uint8_t* this_00;
        uint8_t* this_01;
        bool cVar1;
        unsigned long long uVar2;
        unsigned char* arg1;
        unsigned long arg2;
        long lVar3;
        Logger* this_02;
        uint64_t uVar4;
        unsigned long long uVar5;
        uint32_t uVar6;
        scoped_lock<std::mutex> local_88;
        uint8_t local_80[32];
        uint32_t local_40;

        if (m_connectionStatus != 0) {
            this_00 = &field_232;
            cVar1 = this_00->empty();
            if (!cVar1) {
                uVar2 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
                arg1 = (unsigned char*)this_00->HeapBeginPtr();
                arg2 = this_00->size();
                this_01 = m_error;
                lVar3 = field_8.Write(arg1, arg2, this_01);
                this_00->clear();
                if (lVar3 == 0) {
                    cVar1 = this_01->IsValid();
                    if (cVar1) {
                        this_02 = logger::default_logger();
                        *((local_80 + 32)) = this_01->GetErrorString();
                        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        this_02->Log(false, 2,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                     "clientstream/ClientStream.cpp",
                                     203, "Error flushing ClientStream: %s", uVar4);
                        ((local_80 + 32))->~basic_string();
                        Close();
                    }
                }
                m_WritesFromClient = m_WritesFromClient + 1;
                m_TotalBytesWritten = m_TotalBytesWritten + lVar3;
                uVar5 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
                m_SendTime = m_SendTime + (uVar5 - uVar2);
            }
            cVar1 = field_8.IsOpen();
            if (cVar1) {
                new ((local_80 + 32)) network::PingResult();
                *local_80 = field_8.GetIPAddress();
                local_88 = std::scoped_lock(m_connectionPingMutex);
                cVar1 = m_connectionPing.operator_cast_to_bool();
                uVar6 = 4294967295;
                if (cVar1) {
                    cVar1 = ((Ping*)m_connectionPing.operator->())->Get(*((local_80 + 32)), *local_80);
                    if (cVar1) {
                        uVar6 = local_40;
                    }
                }
                field_200 = uVar6;
                ((local_80 + 32))->~PingResult();
            }
        }
    }

    // 0x100b0c2f0
    void ClientStream::GetProfiling(unsigned int* arg1, unsigned int* arg2, unsigned int* arg3,
                                    unsigned long long* arg4, unsigned long long* arg5, unsigned int* arg6,
                                    unsigned int* arg7, unsigned int* arg8) {
        unsigned long uVar1;

        if (arg1 != nullptr) {
            *arg1 = m_LastAvailable;
        }
        if (arg2 != nullptr) {
            *arg2 = m_ReadsFromClient;
        }
        if (arg3 != nullptr) {
            *arg3 = (unsigned int)m_WritesFromClient;
        }
        if (arg4 != nullptr) {
            *arg4 = m_SendTime;
        }
        if (arg5 != nullptr) {
            if ((((uint64_t)m_WritesFromClient._4_4_ << 32) | (uint32_t)((unsigned int)m_WritesFromClient)) == 0) {
                uVar1 = 0;
            } else {
                uVar1 = m_SendTime /
                        (((uint64_t)m_WritesFromClient._4_4_ << 32) | (uint32_t)((unsigned int)m_WritesFromClient));
            }
            *arg5 = uVar1;
        }
        if (arg6 != nullptr) {
            *arg6 = 0;
        }
        if (arg7 != nullptr) {
            *arg7 = m_TotalBytesRead;
        }
        if (arg8 != nullptr) {
            *arg8 = m_TotalBytesWritten;
        }
    }

} // namespace jag
