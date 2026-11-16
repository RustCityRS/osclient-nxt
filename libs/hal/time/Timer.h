// libs/hal/time/Timer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

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

    // 0x1000096b0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // TimerT<std::chrono::steady_clock>::TimerT(): jumps straight to the base-object constructor

    // 0x1000096c0, 32 bytes, inline, placed by debug map only (low confidence)
    // TimerT<std::chrono::steady_clock>::Update()
    /* TimerT<std::chrono::steady_clock>::Update() */

    void TimerT<std::chrono::steady_clock>::Update() {
        undefined8 uVar1;

        *(undefined8*)(this + 8) = *(undefined8*)this;
        uVar1 = SystemTimer::GetTimePoint<std::chrono::steady_clock,
                                          std::chrono::duration<long long, std::ratio<1l, 1000000000l>>>(
            (SystemTimer*)this);
        *(undefined8*)this = uVar1;
    }

    // 0x1000096e0, 64 bytes, inline, placed by debug map only (low confidence)
    // TimerT<std::chrono::steady_clock>::GetTimeDelta() const
    /* TimerT<std::chrono::steady_clock>::GetTimeDelta() const */

    void TimerT<std::chrono::steady_clock>::GetTimeDelta() {
        duration* pdVar1;
        undefined8 local_18;
        undefined4 local_10[2];

        pdVar1 = (duration*)(this + 8);
        local_18 = std::chrono::operator-(this, pdVar1);
        local_10[0] = std::chrono::duration_cast<std::chrono::duration<float, std::ratio<1l, 1l>>, long long,
                                                 std::ratio<1l, 1000000000l>>((chrono*)&local_18, pdVar1);
        local_10->count();
    }

    // 0x10000b5e0, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // TimerT<std::chrono::steady_clock>::TimerT()
    /* TimerT<std::chrono::steady_clock>::TimerT() */

    void TimerT<std::chrono::steady_clock>::TimerT() {
        undefined8 uVar1;

        uVar1 = SystemTimer::GetTimePoint<std::chrono::steady_clock,
                                          std::chrono::duration<long long, std::ratio<1l, 1000000000l>>>(
            (SystemTimer*)this);
        *(undefined8*)this = uVar1;
        *(undefined8*)(this + 8) = uVar1;
    }

} // namespace jag

// 0x100009730, 32 bytes, placed by debug map only (low confidence)
// ___Z8MainLoopv_block_invoke
void ____Z8MainLoopv_block_invoke() {
    (*(code*)PTR__objc_msgSend_100ee9e50)(*(undefined8*)PTR__NSApp_100ee4008, "terminate:", 0);
}
