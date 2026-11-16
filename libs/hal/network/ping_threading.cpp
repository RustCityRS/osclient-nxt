// libs/hal/network/ping_threading.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.network

#include "Ping.h"

namespace jag::network {
    // 0x100b0f240
    void Ping::InitialiseThreads() {
        int in_ESI;

        field_544 = in_ESI;
        field_548 = in_ESI;
    }

    // 0x100b0f2b0
    Ping::~Ping() {
        ShutdownThreads();
        ShutdownLibrary();
        field_840.~fixed_list();
        (&field_776)->~mutex();
        field_736->~vector_map();
        (&field_672)->~mutex();
        (&field_616)->~condition_variable();
        (&field_552)->~mutex();
        field_32.~array();
        field_8.~enable_shared_from_this();
    }

    // 0x100b0f3a0
    void Ping::ShutdownThreads() {
        this[8].field_328 = 1;
        std::condition_variable::notify_all();
        while (true) {
            if ((&field_544)->operator_cast_to_int() < 1)
                break;
            std::condition_variable::notify_all();
            this_thread::Sleep(1);
        }
    }

    // 0x100b0f570
    uint64_t Ping::Get(PingResult& pingResult, const IPAddress& ipAddress) {
        PingResult PVar1;
        uint32_t uVar3;
        IPAddress* ipAddress1;
        IPAddress* pIVar4;
        uint64_t uVar5;
        scoped_lock<std::mutex> local_60;
        uint8_t local_58[40];

        if (this[8].field_328 == '\0') {
            local_60 = std::scoped_lock(field_672);
            ipAddress1 = (IPAddress*)eastl::vector_map<IPAddress, Ping::Result>::find(*field_736);
            pIVar4 = (IPAddress*)field_736->end();
            if (ipAddress1 != pIVar4) {
                if (*ipAddress1 == ipAddress == '\0') {
                    LogAssert("found->first == ipAddress",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/"
                              "ping_threading.cpp",
                              22, nullptr);
                }
                if (ipAddress1->field_33 != '\0') {
                    pingResult = ipAddress;
                    PVar1 = (PingResult)ipAddress1->field_34;
                    pingResult[36] = PVar1;
                    uVar3 = 4294967295;
                    if (PVar1 == (PingResult)0) {
                        uVar3 = *(uint32_t*)&ipAddress1[1]._vptr;
                    }
                    *(uint32_t*)(pingResult + 32) = uVar3;
                    uVar5 = 1;
                    goto LAB_100b0f664;
                }
            }
            new (local_58) IPAddress(ipAddress);
            StartPing(local_58);
        }
        uVar5 = 0;
    LAB_100b0f664:
        return uVar5;
    }

    // 0x100b0f790
    void Ping::StartPing(IPAddress ipAddress) {
        scoped_lock<std::mutex> local_70;
        uint8_t local_68[64];

        new ((local_68 + 32)) IPAddress(*ipAddress);
        if (!(IsQueued((local_68 + 32)))) {
            new (local_68) IPAddress(*ipAddress);
            if (!(IsRunning(local_68))) {
                local_70 = std::scoped_lock(field_776);
                field_840.push_back(*ipAddress);
                if ((&field_548)->operator_cast_to_int() < 1) {
                    NeedThreads(1);
                } else {
                    std::condition_variable::notify_one();
                }
            }
        }
    }

    // 0x100b0f890
    unsigned long Ping::AllFinished() {
        char* pcVar1;

        scoped_lock<std::mutex> local_20(field_672);
        uint8_t* this_00 = field_736;
        long lVar2 = this_00->HeapBeginPtr();
        long lVar3 = this_00->end();
        bool bVar4 = lVar2 == lVar3;
        if ((!bVar4) && (*(char*)(lVar2 + 32) != '\0')) {
            while (*(char*)(lVar2 + 33) != '\0') {
                bVar4 = lVar2 + 40 == lVar3;
                if ((bVar4) || (pcVar1 = (char*)(lVar2 + 72), lVar2 = lVar2 + 40, *pcVar1 == '\0'))
                    break;
            }
        }
        return bVar4 & 4294967295;
    }

    // 0x100b0f920
    void Ping::Refresh() {
        scoped_lock<std::mutex> local_28(field_672);
        long lVar1 = field_736->HeapBeginPtr();
        long lVar2 = field_736->end();
        int arg1 = 0;
        for (; lVar1 != lVar2; lVar1 = lVar1 + 40) {
            arg1 = arg1 + 1;
            *(uint8_t*)(lVar1 + 32) = 0;
        }
        if (arg1 != 0) {
            NeedThreads(arg1);
        }
    }

    // 0x100b0f9a0
    void Ping::NeedThreads(int arg1) {
        int iVar1;
        __1 _Var2;
        unsigned long arg1_00;
        int iVar3;
        thread local_68;
        uint8_t* local_60;
        __1 local_58;
        Ping* local_50;
        __atomic_base* local_48;

        if (0 < arg1) {
            local_48 = (__atomic_base*)&field_548;
            local_60 = &field_8;
            iVar3 = 0;
            do {
                iVar1 = (&field_544)->operator_cast_to_int();
                if (((iVar1 < 16) && (iVar1 = std::__atomic_base::operator_cast_to_int(local_48), iVar1 == 0)) &&
                    (this[8].field_328 == '\0')) {
                    arg1_00 = 0;
                    do {
                        _Var2.field_0 = field_32[arg1_00];
                        if (*(char*)_Var2.field_0 == '\0') {
                            std::__atomic_base<int, true>::operator++();
                            std::__atomic_base<int, true>::operator++();
                            *(char*)_Var2.field_0 = '\x01';
                            *(int*)(_Var2.field_0 + 4) = (int)arg1_00;
                            local_50 = this;
                            local_58.field_0 = _Var2.field_0;
                            std::thread::thread<Ping::NeedThreads(int)::__1, , void>(&local_68, &local_58);
                            (*((_Var2.field_0 + 8))) = local_68;
                            std::thread::~thread(&local_68);
                            local_58.shared_from_this();
                            (*((_Var2.field_0 + 16))) = local_58;
                            break;
                        }
                        arg1_00 = arg1_00 + 1;
                    } while (arg1_00 != 16);
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 != arg1);
        }
    }

    // 0x100b0faf0
    bool Ping::IsQueued(IPAddress ipAddress) {
        uint8_t local_48[8];
        ListIterator<IPAddress, IPAddress*, IPAddress&> local_38[8];

        scoped_lock<std::mutex> local_30(field_776);
        uint8_t* this_00 = &field_840;
        auto local_50 = this_00->begin();
        *local_48 = this_00->end();
        eastl::find<eastl::ListIterator<IPAddress, IPAddress*, IPAddress&>, IPAddress>(
            local_38, (ListIterator<IPAddress, IPAddress*, IPAddress&>*)&local_50, (IPAddress*)local_48);
        auto local_40 = this_00->end();
        uint32_t uVar1 = *local_38 != local_40;
        return uVar1;
    }

    // 0x100b0fba0
    unsigned long Ping::IsRunning(IPAddress ipAddress) {
        scoped_lock<std::mutex> local_20(field_672);
        uint8_t* ipAddress_00 = field_736;
        long lVar1 = eastl::vector_map<IPAddress, Ping::Result>::find(*ipAddress_00);
        long lVar2 = ipAddress_00->end();
        return lVar1 != lVar2 & 4294967295;
    }

    // 0x100b0fd10
    void Ping::PingThreadWrapper(Ping::ThreadInfo& threadInfo) {

        std::__atomic_base<int, true>::operator--();
        PingThread();
        threadInfo.field_0 = 0;
        if (threadInfo.field_8.joinable() != '\0') {
            std::thread::detach();
        }
        thread local_30;
        threadInfo.field_8 = local_30;
        std::thread::~thread(&local_30);
        std::__atomic_base<int, true>::operator--();
        threadInfo.field_16.reset();
    }

    // 0x100b0fda0
    void Ping::PingThread() {
        bool bVar1;
        int iVar3;
        uint8_t* puVar5;
        long lVar6;
        clock_t cVar7;
        scoped_lock<std::mutex> local_80;
        uint8_t local_78[64];

        auto cVar4 = _clock();
        unique_lock<std::mutex> local_a0(field_552);
        mutex* local_90 = (mutex*)&field_672;
        vector_map<IPAddress, Ping::Result>* local_88 = (vector_map<IPAddress, Ping::Result>*)field_736;
        IPAddress* this_00 = (IPAddress*)(local_78 + 32);
        do {
            if (this[8].field_328 != '\0')
                break;
            new (this_00) IPAddress();
            if (GetNextIPAddress(*this_00) == '\0') {
                cVar7 = _clock();
                bVar1 = true;
                if (cVar7 - 5000000 <= cVar4) {
                    std::__atomic_base<int, true>::operator++();
                    std::condition_variable::wait((unique_lock*)&field_616);
                    std::__atomic_base<int, true>::operator--();
                    goto LAB_100b0fe20;
                }
            } else {
                local_a0.unlock();
                local_80 = std::scoped_lock(*local_90);
                puVar5 = (uint8_t*)(*local_88)[*this_00];
                *(uint32_t*)(puVar5 + 4) = 0;
                *puVar5 = 1;
                new (local_78) IPAddress(*this_00);
                iVar3 = DoPing(local_78);
                cVar4 = _clock();
                local_80 = std::scoped_lock(*local_90);
                lVar6 = (*local_88)[*this_00];
                *(int*)(lVar6 + 4) = iVar3;
                *(bool*)(lVar6 + 2) = iVar3 == -1;
                *(uint8_t*)(lVar6 + 1) = 1;
                local_a0.lock();
            LAB_100b0fe20:
                bVar1 = false;
            }
        } while (!bVar1);
    }

    // 0x100b10010
    unsigned long Ping::GetNextIPAddress(IPAddress& ipAddress) {
        IPAddress* pIVar2;
        IPAddress* pIVar3;
        unsigned long uVar4;

        scoped_lock<std::mutex> local_38(field_776);
        uint8_t* puVar6 = &field_840;
        bool cVar1 = puVar6->empty();
        uint64_t uVar5 = (uint64_t)((unsigned long)puVar6 >> 8);
        if (!cVar1) {
            pIVar2 = (IPAddress*)puVar6->front();
            ipAddress = *pIVar2;
            puVar6->pop_front();
            uVar4 = (((uint64_t)uVar5 << 8) | (uint8_t)1);
        } else {
            local_38 = std::scoped_lock(field_672);
            puVar6 = field_736;
            cVar1 = puVar6->empty();
            if (!cVar1) {
                pIVar2 = (IPAddress*)puVar6->HeapBeginPtr();
                pIVar3 = (IPAddress*)puVar6->end();
                for (; pIVar2 != pIVar3; pIVar2 = (IPAddress*)((long)&pIVar2[1]._vptr + 4)) {
                    if (pIVar2->field_32 == '\0') {
                        pIVar2->field_32 = 1;
                        ipAddress = *pIVar2;
                        uVar4 = (((uint64_t)uVar5 << 8) | (uint8_t)1);
                        goto LAB_100b100a7;
                    }
                }
            }
            uVar4 = 0;
        LAB_100b100a7:
        }
        return uVar4 & 4294967295;
    }

} // namespace jag::network

namespace jag::threading {
    // 0x100c28b30
    unsigned int GetMaxHardwareThreads() {
        unsigned int local_c = std::thread::hardware_concurrency();
        auto puVar1 = std::min<unsigned int>(MAX_HARDWARE_THREAD_LIMIT, local_c);
        return *puVar1;
    }

} // namespace jag::threading
