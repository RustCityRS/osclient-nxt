// libs/hal/network/HostResolution.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.network

namespace jag::network {
    class HostResolution {
    public:
        class Result;
        class ThreadInfo;
        // virtual methods in vtable order
        virtual ~HostResolution();
        HostResolution();
        void Shutdown();
        void ShutdownThreads();
        void Get(eastl::vector<IPAddress, BucketAllocatorEASTL>&, char const*);
        void StartResolution(char const*);
        void IsRunning(char const*);
        void ResolutionThreadWrapper(ThreadInfo&);
        void ResolutionThread();
        GetNextAddress(eastl::fixed_string<char, 512, true, eastl::allocator>&);

        // data members, from how the methods use this: 480 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[272];
        char field_280; // offset 280
        char _unknown_281[199];
    };

    class HostResolution::Result {
    public:
        ~Result();
        Result(Result&&);
        Result();
        Result* operator=(Result&&);

        // data members, from how the methods use this: 16 bytes
        undefined2 field_0; // offset 0
        undefined1 field_2; // offset 2
        char _unknown_3[13];
    };

    class HostResolution::ThreadInfo {
    public:
        ThreadInfo();
        ~ThreadInfo();

        // data members, from how the methods use this: 24 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[3];
        undefined4 field_4; // offset 4
        char _unknown_8[16];
    };

    // 0x100b0da80, 256 bytes, base-object constructor, placed by class name
    // HostResolution::HostResolution()
    void HostResolution::HostResolution() {
        int in_ESI;

        new (&field_8) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        field_0 = PTR_vtable_100ee86e0 + 16;
        new (&field_24) std::array<HostResolution::ThreadInfo, 8ul>();
        field_280 = '\0';
        new (&field_296) std::mutex();
        new (&field_360) std::condition_variable();
        new (&field_408) std::mutex();
        new (&field_472) eastl::vector_map<
            eastl::fixed_string<char, 64, true, eastl::allocator>, HostResolution::Result,
            eastl::less<eastl::fixed_string<char, 64, true, eastl::allocator>>, eastl::allocator,
            eastl::vector<eastl::pair<eastl::fixed_string<char, 64, true, eastl::allocator>, HostResolution::Result>,
                          eastl::allocator>>();
        std::atomic<int>::operator=((atomic<int>*)&field_284, in_ESI);
        std::atomic<int>::operator=((atomic<int>*)&field_288, in_ESI);
        (&field_472, 256)->reserve();
    }

    // 0x100b0dc30, 16 bytes, complete-object constructor, placed by class name
    // HostResolution::HostResolution(): jumps straight to the base-object constructor

    // 0x100b0dc40, 16 bytes, placed by class name
    // HostResolution::Shutdown()
    void HostResolution::Shutdown() {
        ShutdownThreads(this);
    }

    // 0x100b0dc50, 32 bytes, placed by class name
    // HostResolution::ShutdownThreads()
    void HostResolution::ShutdownThreads() {
        field_280 = '\x01';
        std::condition_variable::notify_all();
    }

    // 0x100b0dc70, 320 bytes, placed by class name
    // HostResolution::Get(eastl::vector<IPAddress, BucketAllocatorEASTL>&, char const*)
    void HostResolution::Get(vector* param_1, char* param_2) {
        scoped_lock<std::mutex> local_a8[8];
        fixed_string<char, 64, true, eastl::allocator> local_a0[104];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        std::scoped_lock<std::mutex>::scoped_lock(local_a8, (mutex*)&field_296);
        eastl::fixed_string<char, 64, true, eastl::allocator>::fixed_string(local_a0, param_2);
        (&field_472, (basic_string*)local_a0)->find();
        /* WARNING: Subroutine does not return */
        local_a0->~fixed_string();
    }

    // 0x100b0ddf0, 448 bytes, placed by class name
    // HostResolution::StartResolution(char const*)
    void HostResolution::StartResolution(char* param_1) {
        int iVar2;
        ThreadInfo* pTVar3;
        ulong uVar4;
        scoped_lock<std::mutex> local_a0[8];
        __0 local_98[6];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (IsRunning(this, param_1) == '\0') {
            std::scoped_lock<std::mutex>::scoped_lock(local_a0, (mutex*)&field_296);
            new (local_98) eastl::fixed_string<char, 64, true, eastl::allocator>(param_1);
            eastl::vector_map<eastl::fixed_string<char, 64, true, eastl::allocator>, HostResolution::Result,
                              eastl::less<eastl::fixed_string<char, 64, true, eastl::allocator>>, eastl::allocator,
                              eastl::vector<eastl::pair<eastl::fixed_string<char, 64, true, eastl::allocator>,
                                                        HostResolution::Result>,
                                            eastl::allocator>>::
            operator[]((vector_map<eastl::fixed_string<char, 64, true, eastl::allocator>, HostResolution::Result,
                                   eastl::less<eastl::fixed_string<char, 64, true, eastl::allocator>>, eastl::allocator,
                                   eastl::vector<eastl::pair<eastl::fixed_string<char, 64, true, eastl::allocator>,
                                                             HostResolution::Result>,
                                                 eastl::allocator>>*)&field_472,
                       (fixed_string*)local_98);
            /* WARNING: Subroutine does not return */
            local_98->~fixed_string();
        }
        iVar2 = (&field_284)->operator_cast_to_int();
        if (((iVar2 < 8) && (iVar2 = (&field_288)->operator_cast_to_int(), iVar2 == 0)) && (field_280 == '\0')) {
            uVar4 = 0;
            do {
                pTVar3 = (ThreadInfo*)std::array<HostResolution::ThreadInfo, 8ul>::operator[](
                    (array<HostResolution::ThreadInfo, 8ul>*)&field_24, uVar4);
                if (pTVar3->field_0 == '\0') {
                    pTVar3->field_0 = 1;
                    pTVar3->field_4 = (int)uVar4;
                    local_98->shared_from_this();
                    shared_ptr<HostResolution>::operator=((shared_ptr<HostResolution>*)&pTVar3->field_16,
                                                          (shared_ptr*)local_98);
                    local_98->~shared_ptr();
                    local_98[0].field_0 = pTVar3;
                    local_98[0].field_8 = this;
                    std::thread::thread<HostResolution::StartResolution(char const*)::__0, , void>((thread*)local_a0,
                                                                                                   local_98);
                    std::thread::operator=((thread*)&pTVar3->field_8, (thread*)local_a0);
                    local_a0->~thread();
                    break;
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 != 8);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b0dfb0, 208 bytes, placed by class name
    // HostResolution::IsRunning(char const*)
    void HostResolution::IsRunning(char* param_1) {
        scoped_lock<std::mutex> local_90[8];
        fixed_string<char, 64, true, eastl::allocator> local_88[104];
        undefined8 local_20;

        local_20 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        std::scoped_lock<std::mutex>::scoped_lock(local_90, (mutex*)&field_296);
        eastl::fixed_string<char, 64, true, eastl::allocator>::fixed_string(local_88, param_1);
        (&field_472, (basic_string*)local_88)->find();
        /* WARNING: Subroutine does not return */
        local_88->~fixed_string();
    }

    // 0x100b0e250, 112 bytes, placed by class name
    // HostResolution::ResolutionThreadWrapper(HostResolution::ThreadInfo&)
    void HostResolution::ResolutionThreadWrapper(ThreadInfo* param_1) {
        char cVar1;

        std::__atomic_base<int, true>::operator++((__atomic_base<int, true>*)&field_284);
        cVar1 = field_280;
        while (cVar1 == '\0') {
            ResolutionThread(this);
            cVar1 = field_280;
        }
        param_1->field_0 = 0;
        std::thread::detach();
        std::__atomic_base<int, true>::operator--((__atomic_base<int, true>*)&field_284);
        shared_ptr<HostResolution>::reset();
    }

    // 0x100b0e2d0, 848 bytes, placed by class name
    // HostResolution::ResolutionThread()
    void HostResolution::ResolutionThread() {
        AddressBase* this_00;
        char cVar1;
        AddressBase* this_01;
        long lVar2;
        long lVar3;
        char* pcVar4;
        clock_t cVar5;
        Error* in_RCX;
        undefined4 local_350[8];
        vector<sock::AddressBase, eastl::allocator> local_330[32];
        clock_t local_310;
        mutex* local_308;
        vector_map<
            eastl::fixed_string<char, 64, true, eastl::allocator>, HostResolution::Result,
            eastl::less<eastl::fixed_string<char, 64, true, eastl::allocator>>, eastl::allocator,
            eastl::vector<eastl::pair<eastl::fixed_string<char, 64, true, eastl::allocator>, HostResolution::Result>,
                          eastl::allocator>>* local_300;
        HostResolution* local_2f8;
        mutex* local_2f0;
        condition_variable* local_2e8;
        scoped_lock<std::mutex> local_2e0[8];
        __atomic_base<int, true>* local_2d8;
        undefined1 local_2d0[112];
        fixed_string<char, 512, true, eastl::allocator> local_260[552];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_310 = _clock();
        if (field_280 != '\0') {
            if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                /* WARNING: Subroutine does not return */
                ___stack_chk_fail();
            }
            return;
        }
        local_2d8 = (__atomic_base<int, true>*)&field_288;
        local_2f0 = (mutex*)&field_408;
        local_2e8 = (condition_variable*)&field_360;
        local_308 = (mutex*)&field_296;
        local_300 =
            (vector_map<eastl::fixed_string<char, 64, true, eastl::allocator>, HostResolution::Result,
                        eastl::less<eastl::fixed_string<char, 64, true, eastl::allocator>>, eastl::allocator,
                        eastl::vector<
                            eastl::pair<eastl::fixed_string<char, 64, true, eastl::allocator>, HostResolution::Result>,
                            eastl::allocator>>*)&field_472;
        this_00 = (AddressBase*)(local_2d0 + 8);
        local_2f8 = this;
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(local_260);
        cVar1 = GetNextAddress(this, (fixed_string*)local_260);
        if (cVar1 == '\0') {
            cVar5 = _clock();
            if (local_310 < cVar5 - 5000000) {
                /* WARNING: Subroutine does not return */
                local_260->~fixed_string();
            }
            std::__atomic_base<int, true>::operator++(local_2d8);
            new (this_00) std::unique_lock<std::mutex>(local_2f0);
            local_350[0] = 5;
            std::chrono::duration<long long, std::ratio<1l, 1l>>::duration<int>((int*)local_330, (type*)local_350);
            std::condition_variable::wait_for<long long, std::ratio<1l, 1l>>(local_2e8, (unique_lock*)this_00,
                                                                             (duration*)local_330);
            std::__atomic_base<int, true>::operator--(local_2d8);
            this_00->~unique_lock();
            /* WARNING: Subroutine does not return */
            local_260->~fixed_string();
        }
        eastl::vector<sock::AddressBase, eastl::allocator>::vector(local_330);
        new (local_2d0) callstack::Callstack();
        this_01 = (AddressBase*)eastl::basic_string<
            char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        this_01->Resolve(local_330, local_2d0, in_RCX);
        new (local_350) eastl::vector<IPAddress, eastl::allocator>();
        lVar2 = local_330->HeapBeginPtr();
        lVar3 = local_330->end();
        for (; lVar2 != lVar3; lVar2 = lVar2 + 80) {
            this_00->GetIPAddress();
            eastl::vector<IPAddress, eastl::allocator>::emplace_back<IPAddress>(
                (vector<IPAddress, eastl::allocator>*)local_350, (IPAddress*)this_00);
        }
        std::scoped_lock<std::mutex>::scoped_lock(local_2e0, local_308);
        pcVar4 = (char*)eastl::basic_string<
            char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        new (this_00) eastl::fixed_string<char, 64, true, eastl::allocator>(pcVar4);
        eastl::vector_map<
            eastl::fixed_string<char, 64, true, eastl::allocator>, HostResolution::Result,
            eastl::less<eastl::fixed_string<char, 64, true, eastl::allocator>>, eastl::allocator,
            eastl::vector<eastl::pair<eastl::fixed_string<char, 64, true, eastl::allocator>, HostResolution::Result>,
                          eastl::allocator>>::operator[](local_300, (fixed_string*)this_00);
        /* WARNING: Subroutine does not return */
        this_00->~fixed_string();
    }

    // 0x100b0e680, 176 bytes, placed by class name
    // HostResolution::GetNextAddress(eastl::fixed_string<char, 512, true, eastl::allocator>&)
    undefined8 HostResolution::GetNextAddress(fixed_string* param_1) {
        undefined1* this_00;
        char cVar1;
        long lVar2;
        long lVar3;
        char* pcVar4;
        scoped_lock<std::mutex> local_28[8];

        this_00 = &field_472;
        cVar1 = this_00->empty();
        if (cVar1 == '\0') {
            std::scoped_lock<std::mutex>::scoped_lock(local_28, (mutex*)&field_296);
            lVar2 = this_00->HeapBeginPtr();
            lVar3 = this_00->end();
            for (; lVar2 != lVar3; lVar2 = lVar2 + 144) {
                if (*(char*)(lVar2 + 104) == '\0') {
                    *(undefined1*)(lVar2 + 104) = 1;
                    pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    eastl::fixed_string<char, 16, true, eastl::allocator>::operator=(
                        (fixed_string<char, 16, true, eastl::allocator>*)param_1, pcVar4);
                    std::scoped_lock<std::mutex>::~scoped_lock(local_28);
                    return 1;
                }
            }
            std::scoped_lock<std::mutex>::~scoped_lock(local_28);
        }
        return 0;
    }

    // 0x100b10db0, 16 bytes, complete-object destructor, inline, placed by class name
    // HostResolution::~HostResolution(): jumps straight to the base-object destructor

    // 0x100b10dc0, 32 bytes, deleting destructor, inline, placed by class name
    // HostResolution::~HostResolution()
    void HostResolution::~HostResolution() {
        ~HostResolution(this);
        operator_delete(this);
    }

    // 0x100b10ea0, 16 bytes, complete-object constructor, inline, placed by class name
    // HostResolution::ThreadInfo::ThreadInfo(): jumps straight to the base-object constructor

    // 0x100b10eb0, 16 bytes, complete-object destructor, inline, placed by class name
    // HostResolution::ThreadInfo::~ThreadInfo(): jumps straight to the base-object destructor

    // 0x100b10ec0, 80 bytes, base-object constructor, inline, placed by class name
    // HostResolution::ThreadInfo::ThreadInfo()
    void HostResolution::ThreadInfo::ThreadInfo() {
        _func_decltype_nullptr* in_RSI;

        field_0 = 0;
        field_4 = 4294967295;
        new (&field_8) std::thread();
        new (&field_16, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x100b10f10, 48 bytes, base-object destructor, inline, placed by class name
    // HostResolution::ThreadInfo::~ThreadInfo()
    /* Ping::ThreadInfo::~ThreadInfo() */

    void Ping::ThreadInfo::~ThreadInfo() {
        (&field_16)->~shared_ptr();
        (&field_8)->~thread();
    }

    // 0x100b11070, 16 bytes, complete-object destructor, inline, placed by class name
    // HostResolution::Result::~Result(): jumps straight to the base-object destructor

    // 0x100b11080, 16 bytes, base-object destructor, inline, placed by class name
    // HostResolution::Result::~Result()
    void HostResolution::Result::~Result() {
        (&field_8)->~vector();
    }

    // 0x100b123e0, 16 bytes, complete-object constructor, inline, placed by class name
    // HostResolution::Result::Result(HostResolution::Result&&): jumps straight to the base-object constructor

    // 0x100b123f0, 32 bytes, base-object constructor, inline, placed by class name
    // HostResolution::Result::Result(HostResolution::Result&&)
    void HostResolution::Result::Result(Result* param_1) {
        field_2 = param_1->field_2;
        field_0 = param_1->field_0;
        new (&field_8, (vector*)&param_1->field_8) eastl::vector<IPAddress, eastl::allocator>();
    }

    // 0x100b129c0, 16 bytes, complete-object constructor, inline, placed by class name
    // HostResolution::Result::Result(): jumps straight to the base-object constructor

    // 0x100b12f60, 48 bytes, inline, placed by class name
    // HostResolution::Result::operator=(HostResolution::Result&&)
    /* HostResolution::Result::TEMPNAMEPLACEHOLDERVALUE(HostResolution::Result&&)
    */

    Result* HostResolution::Result::operator=(Result* param_1) {
        field_2 = param_1->field_2;
        field_0 = param_1->field_0;
        eastl::vector<IPAddress, eastl::allocator>::operator=((vector<IPAddress, eastl::allocator>*)&field_8,
                                                              (vector*)&param_1->field_8);
        return this;
    }

    // 0x100b13050, 32 bytes, base-object constructor, inline, placed by class name
    // HostResolution::Result::Result()
    void HostResolution::Result::Result() {
        field_0 = 0;
        field_2 = 0;
        new (&field_8) eastl::vector<IPAddress, eastl::allocator>();
    }

    // 0x100b135e0, 112 bytes, placed by class name
    // HostResolution::StartResolution(char const*)::$_0::operator()() const
    /* HostResolution::StartResolution(char const*)::$_0::TEMPNAMEPLACEHOLDERVALUE() const
    */

    void HostResolution::StartResolution(char const*)::$_0::operator()() {
        HostResolution* this_00;
        basic_string local_40[32];

        this_00 = field_8;
        eastl::string::basic_string(local_40, "Host Resolver %d", field_0->field_4);
        this_thread::SetThreadName(local_40);
        local_40->~basic_string();
        ResolutionThreadWrapper(this_00, field_0);
    }

    // 0x100b16100, 99 bytes, base-object destructor, inline, placed by class name
    // HostResolution::~HostResolution()
    void HostResolution::~HostResolution() {
        field_0 = PTR_vtable_100ee86e0 + 16;
        (&field_472)->~vector_map();
        (&field_408)->~mutex();
        (&field_360)->~condition_variable();
        (&field_296)->~mutex();
        (&field_24)->~array();
        (&field_8)->~enable_shared_from_this();
    }

} // namespace jag::network
