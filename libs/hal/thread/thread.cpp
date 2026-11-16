// libs/hal/thread/thread.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.thread

#include "thread.h"

namespace jag::this_thread {
    // 0x100c95b80
    void GetThreadID() {
        uint64_t uVar2;
        uint64_t* puVar3;

        long* plVar1 = (long*)(*(void (*)(...))GetThreadID()::threadID)();
        if (*plVar1 == 0) {
            uVar2 = internal::GetThreadIDInternal();
            puVar3 = (uint64_t*)(*(void (*)(...))GetThreadID()::threadID)();
            *puVar3 = uVar2;
        }
        puVar3 = (uint64_t*)(*(void (*)(...))GetThreadID()::threadID)();
        return *puVar3;
    }

    // 0x100c95bf0
    bool IsMainThread() {
        long lVar2 = internal::g_MainThreadID;
        long lVar1 = GetThreadID();
        return lVar2 == lVar1;
    }

    // 0x100c95c10
    void SetMainThread(bool arg1) {
        uint64_t in_register_00000039;

        if (((int)(((uint64_t)in_register_00000039 << 8) | (uint8_t)arg1) != 0) ||
            (SetMainThread(bool)::haveSetMainThread == '\0')) {
            SetMainThread(bool)::haveSetMainThread = '\x01';
            internal::g_MainThreadID = GetThreadID();
            SetThreadName("Main");
            RegisterSystemThread();
        }
    }

    // 0x100c95c60
    void SleepPrecise(std::chrono::duration<long long, std::ratio<1l, 1000000l>> duration) {
        bool bVar1;
        uint64_t local_20;

        uint64_t local_28 = std::chrono::steady_clock::now() + duration;
        do {
            std::this_thread::yield();
            local_20 = std::chrono::steady_clock::now();
            bVar1 = std::chrono::operator<(
                (time_point<std::chrono::steady_clock,
                            std::chrono::duration<long long, std::ratio<1l, _1000000000l> _> _>*)&local_20,
                (time_point<std::chrono::steady_clock,
                            std::chrono::duration<long long, std::ratio<1l, _1000000000l> _> _>*)&local_28);
        } while (bVar1);
    }

} // namespace jag::this_thread

namespace jag::this_thread::internal {
    // 0x100c95bc0
    __uint64_t GetThreadIDInternal() {
        __uint64_t local_10;

        _pthread_threadid_np(_pthread_self(), &local_10);
        return local_10;
    }

} // namespace jag::this_thread::internal

namespace jag {
    // 0x100c95c50
    void RegisterSystemThread() {
        internal::CreateSignalHandlerStack();
    }

} // namespace jag
