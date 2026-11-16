// libs/hal/network/HostResolution.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

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
        void Get(eastl::vector<IPAddress>& ipAddresss, const char* str);
        void StartResolution(const char* str);
        void IsRunning(const char* str);
        void ResolutionThreadWrapper(ThreadInfo& threadInfo);
        void ResolutionThread();
        uint64_t GetNextAddress(eastl::fixed_string<char, 512>& str);

    private:
        uint8_t _unknown_8[272];
        char field_280;
        uint8_t _unknown_281[199];
    };

    class HostResolution::Result {
    public:
        ~Result();
        Result(Result&& result);
        Result();
        Result* operator=(Result&& result);

    private:
        uint16_t field_0;
        uint8_t field_2;
        uint8_t _unknown_3[13];
    };

    class HostResolution::ThreadInfo {
    public:
        ThreadInfo();
        ~ThreadInfo();

    private:
        uint8_t field_0;
        uint8_t _unknown_1[3];
        uint32_t field_4;
        uint8_t _unknown_8[16];
    };

    // 0x100b0da80
    HostResolution::HostResolution() {
        new (&field_8) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new (&field_24) std::array<HostResolution::ThreadInfo, 8ul>();
        field_280 = '\0';
        new (&field_296) std::mutex();
        new (&field_360) std::condition_variable();
        new (&field_408) std::mutex();
        new (&field_472) eastl::vector_map<eastl::fixed_string<char, 64>, HostResolution::Result>();
        field_472.reserve(256);
    }

    // 0x100b0dc40
    void HostResolution::Shutdown() {
        ShutdownThreads();
    }

    // 0x100b0dc50
    void HostResolution::ShutdownThreads() {
        field_280 = '\x01';
        std::condition_variable::notify_all();
    }

    // 0x100b0dc70
    void HostResolution::Get(eastl::vector<IPAddress, BucketAllocatorEASTL>& ipAddresss, const char* str) {

        scoped_lock<std::mutex> local_a8(field_296);
        fixed_string<char, 64> local_a0(str);
        eastl::vector_map<eastl::string, std::variant<int, unsigned int, bool, float, eastl::string,
                                                      console::VarAny>>::find(field_472);
    }

    // 0x100b0ddf0
    void HostResolution::StartResolution(const char* str) {
        char* pcVar3;
        unsigned long arg1;
        scoped_lock<std::mutex> local_a0;
        char* local_98;
        HostResolution* local_90;

        if (IsRunning(str) == '\0') {
            local_a0 = std::scoped_lock(field_296);
            new (&local_98) eastl::fixed_string<char, 64>(str);
            field_472[local_98];
        }
        int iVar2 = (&field_284)->operator_cast_to_int();
        if (((iVar2 < 8) && (iVar2 = (&field_288)->operator_cast_to_int(), iVar2 == 0)) && (field_280 == '\0')) {
            arg1 = 0;
            do {
                pcVar3 = &field_24[arg1];
                if (*pcVar3 == '\0') {
                    *pcVar3 = '\x01';
                    *(int*)(pcVar3 + 4) = (int)arg1;
                    local_98.shared_from_this();
                    (*((pcVar3 + 16))) = local_98;
                    local_98 = pcVar3;
                    local_90 = this;
                    std::thread::thread<HostResolution::StartResolution(char const*)::__0, , void>(&local_a0,
                                                                                                   (__0*)&local_98);
                    (*((pcVar3 + 8))) = local_a0;
                    std::thread::~thread(&local_a0);
                    break;
                }
                arg1 = arg1 + 1;
            } while (arg1 != 8);
        }
    }

    // 0x100b0dfb0
    void HostResolution::IsRunning(const char* str) {

        scoped_lock<std::mutex> local_90(field_296);
        fixed_string<char, 64> local_88(str);
        eastl::vector_map<eastl::string, std::variant<int, unsigned int, bool, float, eastl::string,
                                                      console::VarAny>>::find(field_472);
    }

    // 0x100b0e250
    void HostResolution::ResolutionThreadWrapper(HostResolution::ThreadInfo& threadInfo) {
        std::__atomic_base<int, true>::operator++();
        bool cVar1 = field_280;
        while (!cVar1) {
            ResolutionThread();
            cVar1 = field_280;
        }
        threadInfo.field_0 = 0;
        std::thread::detach();
        std::__atomic_base<int, true>::operator--();
        threadInfo.field_16.reset();
    }

    // 0x100b0e2d0
    void HostResolution::ResolutionThread() {
        IPAddress result;
        clock_t cVar4;
        type* arg2;
        uint32_t local_350[8];
        uint8_t local_2d0[112];

        clock_t local_310 = _clock();
        if (field_280 != '\0') {
            return;
        }
        uint8_t* local_2d8 = &field_288;
        mutex* local_2f0 = (mutex*)&field_408;
        condition_variable* local_2e8 = (condition_variable*)&field_360;
        mutex* local_308 = (mutex*)&field_296;
        vector_map<eastl::fixed_string<char, 64>, HostResolution::Result>* local_300 =
            (vector_map<eastl::fixed_string<char, 64>, HostResolution::Result>*)&field_472;
        &result = (IPAddress*)(local_2d0 + 8);
        HostResolution* local_2f8 = this;
        fixed_string<char, 512> local_260;
        if (GetNextAddress(local_260) == '\0') {
            cVar4 = _clock();
            if (local_310 < cVar4 - 5000000) {
            }
            std::__atomic_base<int, true>::operator++();
            void result(*local_2f0);
            local_350[0] = 5;
            local_330.duration<int>(*local_350, arg2);
            local_2e8->wait_for<long long, std::ratio<1l, 1l>>(result, local_330);
            std::__atomic_base<int, true>::operator--();
            result.~unique_lock();
        }
        vector<sock::AddressBase> local_330;
        new (local_2d0) callstack::Callstack();
        auto pcVar2 = local_260.begin();
        sock::AddressBase::Resolve(pcVar2, local_330, local_2d0);
        new (local_350) eastl::vector<IPAddress>();
        auto this_00 = local_330.HeapBeginPtr();
        auto pAVar3 = local_330.end();
        for (; this_00 != pAVar3; this_00 = this_00 + 1) {
            result = this_00->GetIPAddress();
            local_350->emplace_back<IPAddress>(result);
        }
        scoped_lock<std::mutex> local_2e0(*local_308);
        pcVar2 = (char*)local_260.begin();
        new (&result) eastl::fixed_string<char, 64>(pcVar2);
        (*local_300)[result];
        result.~fixed_string();
    }

    // 0x100b0e680
    uint64_t HostResolution::GetNextAddress(eastl::fixed_string<char, 512>& str) {
        long lVar2;
        long lVar3;
        scoped_lock<std::mutex> local_28;

        uint8_t* this_00 = &field_472;
        if (this_00->empty() == '\0') {
            local_28 = std::scoped_lock(field_296);
            lVar2 = this_00->HeapBeginPtr();
            lVar3 = this_00->end();
            for (; lVar2 != lVar3; lVar2 = lVar2 + 144) {
                if (*(char*)(lVar2 + 104) == '\0') {
                    *(uint8_t*)(lVar2 + 104) = 1;
                    str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    return 1;
                }
            }
        }
        return 0;
    }

    // 0x100b10ec0
    HostResolution::ThreadInfo::ThreadInfo() : field_0(0), field_4(4294967295) {
        new (&field_16) shared_ptr();
    }

    // 0x100b10f10
    HostResolution::ThreadInfo::~ThreadInfo() {
        field_16.~shared_ptr();
        (&field_8)->~thread();
    }

    // 0x100b11080
    HostResolution::Result::~Result() {
        field_8.~vector();
    }

    // 0x100b123f0
    HostResolution::Result::Result(HostResolution::Result&& result)
        : field_2(result.field_2), field_0(result.field_0), field_8(result.field_8) {}

    // 0x100b12f60
    Result* HostResolution::Result::operator=(HostResolution::Result&& result) {
        field_2 = result.field_2;
        field_0 = result.field_0;
        field_8 = result.field_8;
        return this;
    }

    // 0x100b13050
    HostResolution::Result::Result() : field_0(0), field_2(0) {}

    // 0x100b135e0
    void HostResolution::StartResolution(char const*)::$_0::operator()() const {
        HostResolution* this_00 = field_8;
        eastl::string local_40((CtorSprintf*)"Host Resolver %d", (char*)(unsigned long)(unsigned int)field_0->field_4);
        this_thread::SetThreadName(&local_40);
        ResolutionThreadWrapper(this_00, field_0);
    }

    // 0x100b16100
    HostResolution::~HostResolution() {
        field_472.~vector_map();
        (&field_408)->~mutex();
        (&field_360)->~condition_variable();
        (&field_296)->~mutex();
        field_24.~array();
        field_8.~enable_shared_from_this();
    }

} // namespace jag::network
