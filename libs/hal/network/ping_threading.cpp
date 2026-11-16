// libs/hal/network/ping_threading.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.network

#include "Ping.h"

namespace jag::network {
    // 0x100b0f240, 48 bytes, placed by class name and debug map
    // Ping::InitialiseThreads()
    void Ping::InitialiseThreads() {
        int in_ESI;

        std::atomic<int>::operator=((atomic<int>*)&field_544, in_ESI);
        std::atomic<int>::operator=((atomic<int>*)&field_548, in_ESI);
    }

    // 0x100b0f2a0, 16 bytes, complete-object constructor, placed by class name and debug map
    // Ping::Ping(int): jumps straight to the base-object constructor

    // 0x100b0f2b0, 240 bytes, base-object destructor, placed by class name and debug map
    // Ping::~Ping()
    void Ping::~Ping() {
        field_0 = &PTR__Ping_100f25348;
        ShutdownThreads(this);
        ShutdownLibrary();
        (&field_840)->~fixed_list();
        (&field_776)->~mutex();
        (&field_736)->~vector_map();
        (&field_672)->~mutex();
        (&field_616)->~condition_variable();
        (&field_552)->~mutex();
        (&field_32)->~array();
        (&field_8)->~enable_shared_from_this();
    }

    // 0x100b0f3a0, 96 bytes, placed by class name and debug map
    // Ping::ShutdownThreads()
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

    // 0x100b0f400, 16 bytes, complete-object destructor, placed by class name and debug map
    // Ping::~Ping(): jumps straight to the base-object destructor

    // 0x100b0f410, 32 bytes, deleting destructor, placed by class name and debug map
    // Ping::~Ping()
    void Ping::~Ping() {
        ~Ping(this);
        operator_delete(this);
    }

    // 0x100b0f570, 304 bytes, placed by __FILE__ string
    // Ping::Get(PingResult&, IPAddress const&)
    undefined8 Ping::Get(PingResult* param_1, IPAddress* param_2) {
        PingResult PVar1;
        long lVar2;
        undefined4 uVar4;
        IPAddress* pIVar5;
        IPAddress* pIVar6;
        undefined8 uVar7;
        IPAddress aIStackY_127c[128];
        IPAddress in_stack_ffffffffffffff98;

        lVar2 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (this[8].field_328 == '\0') {
            new (&aIStackY_127c[128].field_28) std::scoped_lock<std::mutex>((mutex*)&field_672);
            pIVar5 = (IPAddress*)(&field_736, param_2)->find();
            pIVar6 = (IPAddress*)(&field_736)->end();
            if (pIVar5 != pIVar6) {
                if (network::operator==(pIVar5, param_2) == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("found->first == ipAddress",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/"
                              "ping_threading.cpp",
                              22, (char*)0);
                }
                if (pIVar5->field_33 != '\0') {
                    IPAddress::operator=((IPAddress*)param_1, param_2);
                    PVar1 = (PingResult)pIVar5->field_34;
                    param_1[36] = PVar1;
                    uVar4 = 4294967295;
                    if (PVar1 == (PingResult)0) {
                        uVar4 = *(undefined4*)&pIVar5[1].field_0;
                    }
                    *(undefined4*)(param_1 + 32) = uVar4;
                    aIStackY_127c[128].field_28.~scoped_lock();
                    uVar7 = 1;
                    goto LAB_100b0f664;
                }
            }
            aIStackY_127c[128].field_28.~scoped_lock();
            IPAddress::IPAddress(aIStackY_127c + 129, param_2);
            StartPing(this, in_stack_ffffffffffffff98);
        }
        uVar7 = 0;
    LAB_100b0f664:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != lVar2) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar7;
    }

    // 0x100b0f790, 240 bytes, placed by class name and neighbouring functions
    // Ping::StartPing(IPAddress)
    void Ping::StartPing(IPAddress param_1) {
        char cVar1;
        IPAddress* in_RSI;
        IPAddress aIStackY_128c[128];
        IPAddress in_stack_ffffffffffffff88;
        undefined1 local_48[40];

        local_48._32_8_ = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        new (local_48) IPAddress(in_RSI);
        cVar1 = IsQueued(this, in_stack_ffffffffffffff88);
        if (cVar1 == '\0') {
            new ((local_48 + -32)) IPAddress(in_RSI);
            cVar1 = IsRunning(this, in_stack_ffffffffffffff88);
            if (cVar1 == '\0') {
                new (&aIStackY_128c[128].field_28) std::scoped_lock<std::mutex>((mutex*)&field_776);
                (&field_840, in_RSI)->push_back();
                aIStackY_128c[128].field_28.~scoped_lock();
                if ((&field_548)->operator_cast_to_int() < 1) {
                    NeedThreads(this, 1);
                } else {
                    std::condition_variable::notify_one();
                }
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_48._32_8_) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b0f890, 144 bytes, placed by class name and neighbouring functions
    // Ping::AllFinished()
    ulong Ping::AllFinished() {
        char* pcVar1;
        long lVar2;
        long lVar3;
        undefined1* this_00;
        bool bVar4;
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)&field_672);
        this_00 = &field_736;
        lVar2 = this_00->HeapBeginPtr();
        lVar3 = this_00->end();
        bVar4 = lVar2 == lVar3;
        if ((!bVar4) && (*(char*)(lVar2 + 32) != '\0')) {
            while (*(char*)(lVar2 + 33) != '\0') {
                bVar4 = lVar2 + 40 == lVar3;
                if ((bVar4) || (pcVar1 = (char*)(lVar2 + 72), lVar2 = lVar2 + 40, *pcVar1 == '\0'))
                    break;
            }
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
        return CONCAT71((int7)((ulong)this_00 >> 8), bVar4) & 4294967295;
    }

    // 0x100b0f920, 128 bytes, placed by class name and neighbouring functions
    // Ping::Refresh()
    void Ping::Refresh() {
        long lVar1;
        long lVar2;
        int iVar3;
        scoped_lock<std::mutex> local_28[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_28, (mutex*)&field_672);
        lVar1 = (&field_736)->HeapBeginPtr();
        lVar2 = (&field_736)->end();
        iVar3 = 0;
        for (; lVar1 != lVar2; lVar1 = lVar1 + 40) {
            iVar3 = iVar3 + 1;
            *(undefined1*)(lVar1 + 32) = 0;
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_28);
        if (iVar3 != 0) {
            NeedThreads(this, iVar3);
        }
    }

    // 0x100b0f9a0, 336 bytes, placed by class name and neighbouring functions
    // Ping::NeedThreads(int)
    /* WARNING: Type propagation algorithm not settling */
    /* Ping::NeedThreads(int) */

    void Ping::NeedThreads(int param_1) {
        int iVar1;
        __1 _Var2;
        ulong uVar3;
        int iVar4;
        thread local_68[8];
        undefined1* local_60;
        shared_ptr local_58;
        __atomic_base<int, true>* local_48;

        if (0 < param_1) {
            local_48 = (__atomic_base<int, true>*)&field_548;
            local_60 = &field_8;
            iVar4 = 0;
            do {
                iVar1 = (&field_544)->operator_cast_to_int();
                if (((iVar1 < 16) && (iVar1 = local_48->operator_cast_to_int(), iVar1 == 0)) &&
                    ((Ping*)this[8].field_328 == '\0')) {
                    uVar3 = 0;
                    do {
                        _Var2.field_0 = std::array<Ping::ThreadInfo, 16ul>::operator[](
                            (array<Ping::ThreadInfo, 16ul>*)&field_32, uVar3);
                        if (*(char*)_Var2.field_0 == '\0') {
                            std::__atomic_base<int, true>::operator++((__atomic_base<int, true>*)&field_544);
                            std::__atomic_base<int, true>::operator++(local_48);
                            *(char*)_Var2.field_0 = '\x01';
                            *(int*)(_Var2.field_0 + 4) = (int)uVar3;
                            local_58.field_8 = (long)(Ping*)this;
                            local_58._0_8_ = _Var2.field_0;
                            std::thread::thread<Ping::NeedThreads(int)::__1, , void>(local_68, (__1*)&local_58);
                            std::thread::operator=((thread*)(_Var2.field_0 + 8), local_68);
                            std::thread::~thread(local_68);
                            local_58.shared_from_this();
                            shared_ptr<Ping>::operator=((shared_ptr<Ping>*)(_Var2.field_0 + 16), &local_58);
                            local_58.~shared_ptr();
                            break;
                        }
                        uVar3 = uVar3 + 1;
                    } while (uVar3 != 16);
                }
                iVar4 = iVar4 + 1;
            } while (iVar4 != param_1);
        }
    }

    // 0x100b0faf0, 176 bytes, placed by class name and neighbouring functions
    // Ping::IsQueued(IPAddress)
    ulong Ping::IsQueued(IPAddress param_1) {
        bool bVar1;
        undefined7 extraout_var;
        hashtable_iterator_base* extraout_RDX;
        list<console::Line, eastl::allocator> local_50[8];
        list<console::Line, eastl::allocator> local_48[8];
        list<console::Line, eastl::allocator> local_40[8];
        eastl local_38[8];
        scoped_lock<std::mutex> local_30[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)&field_776);
        eastl::list<console::Line, eastl::allocator>::begin(local_50);
        eastl::list<console::Line, eastl::allocator>::end(local_48);
        eastl::find<eastl::ListIterator<IPAddress, IPAddress*, IPAddress&>, IPAddress>(local_38, local_50, local_48);
        eastl::list<console::Line, eastl::allocator>::end(local_40);
        bVar1 = eastl::operator!=(local_38, (hashtable_iterator_base*)local_40, extraout_RDX);
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        return CONCAT71(extraout_var, bVar1) & 4294967295;
    }

    // 0x100b0fba0, 112 bytes, placed by class name and neighbouring functions
    // Ping::IsRunning(IPAddress)
    ulong Ping::IsRunning(IPAddress param_1) {
        long lVar1;
        long lVar2;
        undefined1* this_00;
        IPAddress* in_RSI;
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)&field_672);
        this_00 = &field_736;
        lVar1 = this_00->find(in_RSI);
        lVar2 = this_00->end();
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
        return CONCAT71((int7)((ulong)this_00 >> 8), lVar1 != lVar2) & 4294967295;
    }

    // 0x100b0fd10, 144 bytes, placed by class name and neighbouring functions
    // Ping::PingThreadWrapper(Ping::ThreadInfo&)
    void Ping::PingThreadWrapper(ThreadInfo* param_1) {
        thread local_30[8];

        std::__atomic_base<int, true>::operator--((__atomic_base<int, true>*)&field_548);
        PingThread(this);
        param_1->field_0 = 0;
        if ((&param_1->field_8)->joinable() != '\0') {
            std::thread::detach();
        }
        std::thread::thread(local_30);
        std::thread::operator=((thread*)&param_1->field_8, local_30);
        std::thread::~thread(local_30);
        std::__atomic_base<int, true>::operator--((__atomic_base<int, true>*)&field_544);
        shared_ptr<Ping>::reset();
    }

    // 0x100b0fda0, 528 bytes, placed by class name and neighbouring functions
    // Ping::PingThread()
    void Ping::PingThread() {
        IPAddress* this_00;
        IPAddress IVar1;
        bool bVar2;
        int iVar4;
        clock_t cVar5;
        undefined1* puVar6;
        long lVar7;
        clock_t cVar8;
        undefined8 in_stack_ffffffffffffff48;
        __atomic_base<int, true>* this_01;
        __atomic_base<int, true>* p_Var9;
        unique_lock* puVar10;
        undefined1 in_stack_ffffffffffffff60[12];
        unique_lock<std::mutex> auStack_92[18];
        scoped_lock<std::mutex> local_80[8];
        undefined1 local_78[64];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar5 = _clock();
        std::unique_lock<std::mutex>::unique_lock(auStack_92 + -14, (mutex*)&field_552);
        this_01 = (__atomic_base<int, true>*)&field_548;
        puVar10 = (unique_lock*)&field_616;
        this_00 = (IPAddress*)(local_78 + 32);
        do {
            if (this[8].field_328 != '\0')
                break;
            IPAddress::IPAddress(this_00);
            if (GetNextIPAddress(this, this_00) == '\0') {
                cVar8 = _clock();
                bVar2 = true;
                if (cVar8 - 5000000 <= cVar5) {
                    p_Var9 = this_01;
                    std::__atomic_base<int, true>::operator++(this_01);
                    std::condition_variable::wait(puVar10);
                    std::__atomic_base<int, true>::operator--(this_01);
                    goto LAB_100b0fe20;
                }
            } else {
                std::unique_lock<std::mutex>::unlock(auStack_92 + -14);
                std::scoped_lock<std::mutex>::scoped_lock(local_80, (mutex*)&field_672);
                puVar6 = (undefined1*)
                    eastl::vector_map<IPAddress, Ping::Result, eastl::less<IPAddress>, eastl::allocator,
                                      eastl::vector<eastl::pair<IPAddress, Ping::Result>, eastl::allocator>>::
                    operator[](
                        (vector_map<IPAddress, Ping::Result, eastl::less<IPAddress>, eastl::allocator,
                                    eastl::vector<eastl::pair<IPAddress, Ping::Result>, eastl::allocator>>*)&field_736,
                        this_00);
                *(undefined4*)(puVar6 + 4) = 0;
                *puVar6 = 1;
                std::scoped_lock<std::mutex>::~scoped_lock(local_80);
                new (local_78) IPAddress(this_00);
                IVar1._8_8_ = this_01;
                IVar1.field_0 = (undefined**)in_stack_ffffffffffffff48;
                IVar1._16_8_ = puVar10;
                IVar1.field_24 = in_stack_ffffffffffffff60._0_2_;
                IVar1.field_26 = in_stack_ffffffffffffff60._2_2_;
                IVar1.field_28 = in_stack_ffffffffffffff60._4_2_;
                IVar1._30_6_ = in_stack_ffffffffffffff60._6_6_;
                iVar4 = DoPing(this, IVar1);
                cVar5 = _clock();
                std::scoped_lock<std::mutex>::scoped_lock(local_80, (mutex*)&field_672);
                lVar7 = eastl::vector_map<IPAddress, Ping::Result, eastl::less<IPAddress>, eastl::allocator,
                                          eastl::vector<eastl::pair<IPAddress, Ping::Result>, eastl::allocator>>::
                operator[](
                    (vector_map<IPAddress, Ping::Result, eastl::less<IPAddress>, eastl::allocator,
                                eastl::vector<eastl::pair<IPAddress, Ping::Result>, eastl::allocator>>*)&field_736,
                    this_00);
                *(int*)(lVar7 + 4) = iVar4;
                *(bool*)(lVar7 + 2) = iVar4 == -1;
                *(undefined1*)(lVar7 + 1) = 1;
                std::scoped_lock<std::mutex>::~scoped_lock(local_80);
                std::unique_lock<std::mutex>::lock(auStack_92 + -14);
                p_Var9 = this_01;
            LAB_100b0fe20:
                bVar2 = false;
                this_01 = p_Var9;
            }
        } while (!bVar2);
        std::unique_lock<std::mutex>::~unique_lock(auStack_92 + -14);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b10010, 272 bytes, placed by class name and neighbouring functions
    // Ping::GetNextIPAddress(IPAddress&)
    ulong Ping::GetNextIPAddress(IPAddress* param_1) {
        char cVar1;
        IPAddress* pIVar2;
        IPAddress* pIVar3;
        undefined7 uVar5;
        ulong uVar4;
        undefined1* puVar6;
        scoped_lock<std::mutex> local_38[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)&field_776);
        puVar6 = &field_840;
        cVar1 = puVar6->empty();
        uVar5 = (undefined7)((ulong)puVar6 >> 8);
        if (cVar1 == '\0') {
            pIVar2 = (IPAddress*)eastl::list<
                IPAddress, eastl::fixed_node_allocator<48ul, 128ul, 8ul, 0ul, true, eastl::allocator>>::front();
            IPAddress::operator=(param_1, pIVar2);
            puVar6->pop_front();
            std::scoped_lock<std::mutex>::~scoped_lock(local_38);
            uVar4 = CONCAT71(uVar5, 1);
        } else {
            std::scoped_lock<std::mutex>::~scoped_lock(local_38);
            std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)&field_672);
            puVar6 = &field_736;
            cVar1 = puVar6->empty();
            if (cVar1 == '\0') {
                pIVar2 = (IPAddress*)puVar6->HeapBeginPtr();
                pIVar3 = (IPAddress*)puVar6->end();
                for (; pIVar2 != pIVar3; pIVar2 = (IPAddress*)((long)&pIVar2[1].field_0 + 4)) {
                    if (pIVar2->field_32 == '\0') {
                        pIVar2->field_32 = 1;
                        IPAddress::operator=(param_1, pIVar2);
                        uVar4 = CONCAT71(uVar5, 1);
                        goto LAB_100b100a7;
                    }
                }
            }
            uVar4 = 0;
        LAB_100b100a7:
            std::scoped_lock<std::mutex>::~scoped_lock(local_38);
        }
        return uVar4 & 4294967295;
    }

} // namespace jag::network

namespace jag::threading {
    // 0x100c28b30, 48 bytes, inline, placed by class name
    // GetMaxHardwareThreads()
    uint GetMaxHardwareThreads() {
        uint* puVar1;
        uint local_c;

        local_c = std::thread::hardware_concurrency();
        puVar1 = std::min<unsigned int>((uint*)&MAX_HARDWARE_THREAD_LIMIT, &local_c);
        return *puVar1;
    }

} // namespace jag::threading
