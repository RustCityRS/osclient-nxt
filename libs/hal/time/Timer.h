// libs/hal/time/Timer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.system.osclient

namespace jag {
    template <typename...> // 1 instantiations, e.g. <std::chrono::steady_clock>
    class TimerT {
    public:
        TimerT();
        void Update();
        void GetTimeDelta() const;
    };

    // 0x1000096c0
    void TimerT<std::chrono::steady_clock>::Update() {
        *(uint64_t*)(this + 8) = *(uint64_t*)this;
        uint64_t uVar1 = SystemTimer::GetTimePoint<std::chrono::steady_clock,
                                                   std::chrono::duration<long long, std::ratio<1l, 1000000000l>>>();
        *(uint64_t*)this = uVar1;
    }

    // 0x1000096e0
    void TimerT<std::chrono::steady_clock>::GetTimeDelta() const {
        uint32_t local_10[2];

        uint64_t local_18 = *this - (*((this + 8)));
        local_10[0] = std::chrono::duration_cast<std::chrono::duration<float, std::ratio<1l, 1l>>, long long,
                                                 std::ratio<1l, 1000000000l>>(local_18);
        local_10->count();
    }

    // 0x10000b5e0
    TimerT<std::chrono::steady_clock>::TimerT() {
        uint64_t uVar1 = SystemTimer::GetTimePoint<std::chrono::steady_clock,
                                                   std::chrono::duration<long long, std::ratio<1l, 1000000000l>>>();
        *(uint64_t*)this = uVar1;
        *(uint64_t*)(this + 8) = uVar1;
    }

} // namespace jag

// 0x100009730
void ____Z8MainLoopv_block_invoke(void) {
    (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(*(uint64_t*)PTR__NSApp_100ee4008, "terminate:", 0);
}
