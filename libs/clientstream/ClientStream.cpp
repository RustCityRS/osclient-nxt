// libs/clientstream/ClientStream.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.clientstream

#include "ClientStream.h"

namespace jag {
    // 0x100f460f8, 64 bytes, __data
    ClientStream::m_connectionPingMutex = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x103bc2228, 8 bytes, __common; zero-initialised
    ClientStream::m_ReadsFromClient;

    // 0x103bc2230, 8 bytes, __common; zero-initialised
    ClientStream::m_WritesFromClient;

    // 0x103bc2238, 8 bytes, __common; zero-initialised
    ClientStream::m_TotalBytesRead;

    // 0x103bc2240, 8 bytes, __common; zero-initialised
    ClientStream::m_TotalBytesWritten;

    // 0x103bc2248, 8 bytes, __common; zero-initialised
    ClientStream::m_LastAvailable;

    // 0x103bc2250, 8 bytes, __common; zero-initialised
    ClientStream::m_SendTime;

    // 0x103bc2258, 16 bytes, __common; set at startup by ___cxx_global_var_init.1
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ClientStream::m_connectionPing;

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    uint ClientStream::GetConnectionStatus();

    // 0x1004ab500: the linker folded this into game::EnvironmentOverride::GetScatteringOverrides() const, which has identical code
    WaterNormalParamsTarget ClientStream::GetError() const;

    // 0x100b0b4b0, 608 bytes, base-object constructor, placed by class name and debug map
    // ClientStream::ClientStream(char const*, int, int, int, int, bool)
    void ClientStream::ClientStream(char* param_1, int param_2, int param_3, int param_4, int param_5, bool param_6) {
        char cVar1;
        Ping* this_00;
        scoped_lock<std::mutex> local_a0[8];
        vector<unsigned char, eastl::allocator>* local_98;
        ClientSocket* local_88;
        shared_ptr local_80[2];
        undefined1 local_58[40];

        local_58._32_8_ = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        m_connectionStatus = 1;
        local_88 = (ClientSocket*)&field_8;
        ClientSocket::ClientSocket(local_88, param_2);
        eastl::ring_buffer<unsigned char, eastl::vector<unsigned char, eastl::allocator>,
                           eastl::allocator>::ring_buffer((ulong)&field_144);
        *(undefined4*)field_200 = 4294967295;
        new (&field_208) Array<unsigned char, eastl::allocator>();
        local_98 = (vector<unsigned char, eastl::allocator>*)&field_232;
        eastl::vector<unsigned char, eastl::allocator>::vector(local_98);
        field_264 = param_6;
        new (m_error) callstack::Callstack();
        eastl::vector<unsigned char, eastl::allocator>::set_capacity(local_98, (long)param_3);
        m_connectionStatus = 1;
        cVar1 = local_88->Connect(param_1, (Error*)m_error, param_4, param_5);
        if (cVar1 == '\0') {
            Close(this);
        } else {
            cVar1 = local_88->IsOpen();
            if (cVar1 != '\0') {
                m_connectionStatus = 2;
            }
        }
        cVar1 = local_88->IsOpen();
        if (cVar1 != '\0') {
            std::scoped_lock<std::mutex>::scoped_lock(local_a0, (mutex*)&m_connectionPingMutex);
            if (!m_connectionPing.operator_cast_to_bool()) {
                local_58._0_4_ = 1000;
                make_shared<network::Ping, int>((jag*)local_80, (int*)local_58);
                shared_ptr<network::Ping>::operator=((shared_ptr<network::Ping>*)&m_connectionPing, local_80);
                local_80->~shared_ptr();
            }
            local_58->GetIPAddress();
            new (local_80) network::PingResult();
            this_00 = (Ping*)shared_ptr<network::Ping>::operator->((shared_ptr<network::Ping>*)&m_connectionPing);
            this_00->Get(local_80, local_58);
            local_80->~PingResult();
            local_58->~IPAddress();
            std::scoped_lock<std::mutex>::~scoped_lock(local_a0);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_58._32_8_) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b0b880, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<network::Ping>::type make_shared<network::Ping, int>(int&&)
    jag* make_shared<network::Ping, int>(int* param_1) {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_34;
        Ping* local_30[2];

        pvVar1 = (void*)aligned_alloc(7152, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<network::Ping, int>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = (ref_counter_base*)placement_new<ref_counter_shared<network::Ping>, int, network::Ping*&>(
                pvVar1, &local_34, local_30);
            shared_ptr_do_enable_shared_from_this<network::Ping>(prVar2, local_30[0], (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x100b0b9a0, 32 bytes, complete-object constructor, placed by class name
    // ClientStream::ClientStream(char const*, int, int, int, int, bool)
    void ClientStream::ClientStream(char* param_1, int param_2, int param_3, int param_4, int param_5, bool param_6) {
        ClientStream(this, param_1, param_2, param_3, param_4, param_5, param_6);
    }

    // 0x100b0b9c0, 224 bytes, base-object destructor, placed by class name
    // ClientStream::~ClientStream()
    void ClientStream::~ClientStream() {
        Ping* this_00;
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)&m_connectionPingMutex);
        if (m_connectionPing.operator_cast_to_bool()) {
            this_00 = (Ping*)shared_ptr<network::Ping>::operator->((shared_ptr<network::Ping>*)&m_connectionPing);
            this_00->Shutdown();
            shared_ptr<network::Ping>::reset();
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
        (&field_232)->~vector();
        (&field_208)->~Array();
        (&field_144)->~ring_buffer();
        (&field_8)->~ClientSocket();
    }

    // 0x100b0bab0, 16 bytes, complete-object destructor, placed by class name
    // ClientStream::~ClientStream(): jumps straight to the base-object destructor

    // 0x100b0bac0, 336 bytes, placed by class name
    // ClientStream::GetPing()
    undefined4 ClientStream::GetPing() {
        char cVar1;
        Ping* this_00;
        undefined4 uVar3;
        scoped_lock<std::mutex> local_70[8];
        shared_ptr local_68[2];
        undefined4 local_48;
        undefined1 local_40[40];

        local_40._32_8_ = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        std::scoped_lock<std::mutex>::scoped_lock(local_70, (mutex*)&m_connectionPingMutex);
        cVar1 = (&field_8)->IsOpen();
        if (cVar1 != '\0') {
            if (!m_connectionPing.operator_cast_to_bool()) {
                local_40._0_4_ = 1000;
                make_shared<network::Ping, int>((jag*)local_68, (int*)local_40);
                shared_ptr<network::Ping>::operator=((shared_ptr<network::Ping>*)&m_connectionPing, local_68);
                local_68->~shared_ptr();
            }
            local_40->GetIPAddress();
            new (local_68) network::PingResult();
            this_00 = (Ping*)shared_ptr<network::Ping>::operator->((shared_ptr<network::Ping>*)&m_connectionPing);
            cVar1 = this_00->Get(local_68, local_40);
            uVar3 = 4294967295;
            if (cVar1 != '\0') {
                uVar3 = local_48;
            }
            *(undefined4*)field_200 = uVar3;
            local_68->~PingResult();
            local_40->~IPAddress();
        }
        uVar3 = *(undefined4*)field_200;
        std::scoped_lock<std::mutex>::~scoped_lock(local_70);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_40._32_8_) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar3;
    }

    // 0x100b0bc10, 256 bytes, placed by class name
    // ClientStream::Read(unsigned char*, unsigned long)
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* ClientStream::Read(unsigned char*, unsigned long) */

    ulong ClientStream::Read(uchar* param_1, ulong param_2) {
        undefined1* this_00;
        char cVar1;
        long lVar2;
        ulong uVar3;
        ulong uVar4;
        ulong* puVar5;
        uchar* puVar6;
        ulong local_40;
        ulong local_38;

        _m_ReadsFromClient = _m_ReadsFromClient + 1;
        this_00 = &field_144;
        local_38 = param_2;
        lVar2 = this_00->capacity();
        uVar4 = local_38;
        if (lVar2 == 0) {
            return 0;
        }
        uVar3 = this_00->GetAuthWrapper();
        if (uVar4 <= uVar3) {
            uVar4 = this_00->remaining_capacity();
            uVar3 = this_00->capacity();
            if (uVar4 <= uVar3 / 10)
                goto LAB_100b0bc8d;
        }
        Service(this);
    LAB_100b0bc8d:
        local_40 = this_00->GetAuthWrapper();
        puVar5 = std::min<unsigned long>(&local_40, &local_38);
        uVar4 = *puVar5;
        if (uVar4 != 0) {
            uVar3 = 0;
            do {
                puVar6 = (uchar*)this_00->capacity();
                param_1[uVar3] = *puVar6;
                this_00->pop_front();
                uVar3 = uVar3 + 1;
            } while (uVar4 != uVar3);
        }
        if ((m_connectionStatus == 0) && (cVar1 = this_00->empty(), cVar1 != '\0')) {
            this_00->clear();
        }
        _m_TotalBytesRead = _m_TotalBytesRead + uVar4;
        return uVar4;
    }

    // 0x100b0bd80, 336 bytes, placed by class name
    // ClientStream::Service()
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* ClientStream::Service() */

    void ClientStream::Service() {
        undefined1* this_00;
        ulong* puVar1;
        uchar* puVar2;
        long lVar3;
        undefined8 uVar4;
        long lVar5;
        undefined8 uVar6;
        ulong local_60[4];
        undefined1* local_40;
        ulong local_38;

        _m_LastAvailable = (&field_8, (Error*)0)->Available();
        if (_m_LastAvailable != 0) {
            local_40 = &field_144;
            local_38 = _m_LastAvailable;
            local_60[0] = local_40->remaining_capacity();
            puVar1 = std::min<unsigned long>(&local_38, local_60);
            local_38 = *puVar1;
            this_00 = &field_208;
            this_00->set_min_size(local_38, 5);
            puVar2 = (uchar*)this_00->data();
            lVar3 = (&field_8, puVar2, local_38, (Error*)m_error)->Read();
            if (lVar3 == 0) {
                uVar4 = logger::default_logger();
                local_60->GetErrorString();
                uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(uVar4, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                    "clientstream/ClientStream.cpp",
                                    134, "ClientStream socket error: %s", uVar6);
                local_60->~basic_string();
                Close(this);
            } else {
                uVar4 = this_00->data();
                lVar5 = this_00->data();
                uVar6 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                      eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                      true>::end();
                eastl::copy<unsigned char*,
                            eastl::back_insert_iterator<eastl::ring_buffer<
                                unsigned char, eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>>(
                    uVar4, lVar3 + lVar5, uVar6);
            }
        }
    }

    // 0x100b0bf70, 288 bytes, placed by class name
    // ClientStream::Write(unsigned char const*, unsigned long)
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* ClientStream::Write(unsigned char const*, unsigned long) */

    ulong ClientStream::Write(uchar* param_1, ulong param_2) {
        long lVar1;
        long lVar2;
        ulong uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        Error local_50[8];

        if (m_connectionStatus != 0) {
            if (field_264 == false) {
                uVar3 = (&field_8, param_1, param_2, (Error*)m_error)->Write();
                _m_TotalBytesWritten = _m_TotalBytesWritten + uVar3;
                if (uVar3 != param_2) {
                    uVar5 = logger::default_logger();
                    local_50->GetErrorString();
                    uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    logger::Logger::Log(uVar5, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "clientstream/ClientStream.cpp",
                                        173, "Error writing to ClientStream: %s", uVar4);
                    local_50->~basic_string();
                    Close(this);
                }
                return uVar3;
            }
            lVar1 = (&field_232)->capacity();
            lVar2 = (&field_232)->size();
            if (param_2 <= (ulong)(lVar1 - lVar2)) {
                uVar5 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                      eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                      true>::end();
                eastl::copy<unsigned char const*,
                            eastl::back_insert_iterator<eastl::vector<unsigned char, eastl::allocator>>>(
                    param_1, param_1 + param_2, uVar5);
                return param_2;
            }
        }
        return 0;
    }

    // 0x100b0c0d0, 544 bytes, placed by class name
    // ClientStream::Flush()
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* ClientStream::Flush() */

    void ClientStream::Flush() {
        char cVar1;
        bool bVar2;
        ulonglong uVar3;
        uchar* puVar4;
        ulong uVar5;
        long lVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        ulonglong uVar9;
        Ping* this_00;
        Error EVar10;
        SystemTimer* this_01;
        ClientStream* this_02;
        ClientStream* this_03;
        scoped_lock<std::mutex> local_88[8];
        undefined1 local_80[32];
        Error local_60[10];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (m_connectionStatus != 0) {
            this_02 = (ClientStream*)&field_232;
            this_01 = (SystemTimer*)this_02;
            cVar1 = this_02->empty();
            if (cVar1 == '\0') {
                uVar3 = SystemTimer::GetTimeMS<std::chrono::steady_clock>(this_01);
                puVar4 = (uchar*)this_02->HeapBeginPtr();
                uVar5 = this_02->size();
                this_03 = (ClientStream*)m_error;
                lVar6 = (&field_8, puVar4, uVar5, (Error*)this_03)->Write();
                eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                if (lVar6 == 0) {
                    cVar1 = this_03->IsValid();
                    this_02 = this_03;
                    if (cVar1 != '\0') {
                        uVar7 = logger::default_logger();
                        local_60->GetErrorString();
                        uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        logger::Logger::Log(uVar7, 0, 2,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "clientstream/ClientStream.cpp",
                                            203, "Error flushing ClientStream: %s", uVar8);
                        local_60->~basic_string();
                        this_02 = this;
                        Close(this);
                    }
                }
                m_WritesFromClient = m_WritesFromClient + 1;
                _m_TotalBytesWritten = _m_TotalBytesWritten + lVar6;
                uVar9 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this_02);
                m_SendTime = m_SendTime + (uVar9 - uVar3);
            }
            cVar1 = (&field_8)->IsOpen();
            if (cVar1 != '\0') {
                new (local_60) network::PingResult();
                local_80->GetIPAddress();
                std::scoped_lock<std::mutex>::scoped_lock(local_88, (mutex*)&m_connectionPingMutex);
                bVar2 = m_connectionPing.operator_cast_to_bool();
                EVar10.m_code = 4294967295;
                if (bVar2) {
                    this_00 =
                        (Ping*)shared_ptr<network::Ping>::operator->((shared_ptr<network::Ping>*)&m_connectionPing);
                    cVar1 = this_00->Get(local_60, local_80);
                    if (cVar1 != '\0') {
                        EVar10.m_code = local_60[8].m_code;
                    }
                }
                *(int*)field_200 = EVar10.m_code;
                std::scoped_lock<std::mutex>::~scoped_lock(local_88);
                local_80->~IPAddress();
                local_60->~PingResult();
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b0c2f0, 160 bytes, placed by class name
    // ClientStream::GetProfiling(unsigned int*, unsigned int*, unsigned int*, unsigned long long*, unsigned long long*, unsigned int*, unsigned int*, unsigned int*)
    void ClientStream::GetProfiling(uint* param_1, uint* param_2, uint* param_3, ulonglong* param_4, ulonglong* param_5,
                                    uint* param_6, uint* param_7, uint* param_8) {
        ulong uVar1;

        if (param_1 != (uint*)0) {
            *param_1 = m_LastAvailable;
        }
        if (param_2 != (uint*)0) {
            *param_2 = m_ReadsFromClient;
        }
        if (param_3 != (uint*)0) {
            *param_3 = (uint)m_WritesFromClient;
        }
        if (param_4 != (ulonglong*)0) {
            *param_4 = m_SendTime;
        }
        if (param_5 != (ulonglong*)0) {
            if (CONCAT44(m_WritesFromClient._4_4_, (uint)m_WritesFromClient) == 0) {
                uVar1 = 0;
            } else {
                uVar1 = m_SendTime / CONCAT44(m_WritesFromClient._4_4_, (uint)m_WritesFromClient);
            }
            *param_5 = uVar1;
        }
        if (param_6 != (uint*)0) {
            *param_6 = 0;
        }
        if (param_7 != (uint*)0) {
            *param_7 = m_TotalBytesRead;
        }
        if (param_8 != (uint*)0) {
            *param_8 = m_TotalBytesWritten;
        }
    }

    // 0x100b0d360, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.1
    void ___cxx_global_var_init_1(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&ClientStream::m_connectionPing) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5330, &ClientStream::m_connectionPing, 4294967296);
    }

} // namespace jag
