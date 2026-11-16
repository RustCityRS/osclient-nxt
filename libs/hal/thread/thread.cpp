// libs/hal/thread/thread.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.thread

#include "thread.h"

namespace jag::this_thread {
    // 0x100c95b80, 64 bytes, placed by debug map only (low confidence)
    // GetThreadID()
    undefined8 GetThreadID() {
        long* plVar1;
        undefined8 uVar2;
        undefined8* puVar3;

        plVar1 = (long*)(*(code*)GetThreadID()::threadID)();
        if (*plVar1 == 0) {
            uVar2 = internal::GetThreadIDInternal();
            puVar3 = (undefined8*)(*(code*)GetThreadID()::threadID)();
            *puVar3 = uVar2;
        }
        puVar3 = (undefined8*)(*(code*)GetThreadID()::threadID)();
        return *puVar3;
    }

    // 0x100c95bf0, 32 bytes, placed by debug map only (low confidence)
    // IsMainThread()
    bool IsMainThread() {
        long lVar1;
        long lVar2;

        lVar2 = internal::g_MainThreadID;
        lVar1 = GetThreadID();
        return lVar2 == lVar1;
    }

    // 0x100c95c10, 64 bytes, placed by debug map only (low confidence)
    // SetMainThread(bool)
    void SetMainThread(bool param_1) {
        undefined7 in_register_00000039;

        if (((int)CONCAT71(in_register_00000039, param_1) != 0) || (SetMainThread(bool)::haveSetMainThread == '\0')) {
            SetMainThread(bool)::haveSetMainThread = '\x01';
            internal::g_MainThreadID = GetThreadID();
            SetThreadName("Main");
            RegisterSystemThread();
        }
    }

    // 0x100c95c60, 112 bytes, placed by debug map only (low confidence)
    // SleepPrecise(std::chrono::duration<long long, std::ratio<1l, 1000000l> >)
    /* SleepPrecise(std::chrono::duration<long long, std::ratio<1l, 1000000l> >) */

    void SleepPrecise(undefined8 param_1) {
        bool bVar1;
        undefined8 local_38;
        undefined8 local_30;
        undefined8 local_28;
        undefined8 local_20;

        local_38 = param_1;
        local_30 = std::chrono::steady_clock::now();
        local_28 = std::chrono::operator+((time_point*)&local_30, (duration*)&local_38);
        do {
            std::this_thread::yield();
            local_20 = std::chrono::steady_clock::now();
            bVar1 = std::chrono::operator<((time_point*)&local_20, (time_point*)&local_28);
        } while (bVar1);
    }

} // namespace jag::this_thread

namespace jag::this_thread::internal {
    // 0x100c95bc0, 48 bytes, placed by debug map only (low confidence)
    // GetThreadIDInternal()
    __uint64_t GetThreadIDInternal() {
        pthread_t p_Var1;
        __uint64_t local_10;

        p_Var1 = _pthread_self();
        _pthread_threadid_np(p_Var1, &local_10);
        return local_10;
    }

} // namespace jag::this_thread::internal

namespace jag {
    // 0x100c95c50, 16 bytes, placed by debug map only (low confidence)
    // RegisterSystemThread()
    void RegisterSystemThread() {
        internal::CreateSignalHandlerStack();
    }

} // namespace jag
