// libs/hal/system/callstack/posix/CrashHandler_Posix.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.callstack

#include "libs/hal/system/callstack/CrashHandler.h"

namespace jag::callstack {
    class SignalState {
    public:
        void GetJumpBuffer();
        void RunCallback(const JagException& jagException);
        SignalState(bool (*arg1)(JagException const&, void*, void*), void* arg2, void* arg3);
        ~SignalState();

    private:
        uint64_t field_0;
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint64_t field_40;
        uint64_t field_48;
        uint64_t field_56;
        uint64_t field_64;
        uint64_t field_72;
        uint64_t field_80;
        uint64_t field_88;
        uint64_t field_96;
        uint64_t field_104;
        uint64_t field_112;
        uint64_t field_120;
        uint64_t field_128;
        uint64_t field_136;
        uint64_t field_144;
        uint32_t field_152;
        uint8_t _unknown_156[4];
        void* field_160;
        long field_168;
        void* field_176;
    };

    // 0x100f48aa0
    int32_t CrashHandler::m_mutex[16] = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x100f4e458
    int32_t CrashHandler::m_signalState[6] = {0, 0, 0, 0, 165664, 0};

    // 0x103be2610
    int64_t CrashHandler::m_crashHandler;

    // 0x103be2618
    sigaction CrashHandler::m_act;

    // 0x100caf5f0
    void CrashHandler::SetTopLevelExceptionHandler() {
        m_act = SignalHandler;
        reinterpret_cast<const uint64_t*>(&m_act)[1] = 73014444032;
        _sigaction(8, (sigaction*)&m_act, nullptr);
        _sigaction(4, (sigaction*)&m_act, nullptr);
        _sigaction(11, (sigaction*)&m_act, nullptr);
        _sigaction(10, (sigaction*)&m_act, nullptr);
        _sigaction(1, (sigaction*)&m_act, nullptr);
        _sigaction(12, (sigaction*)&m_act, nullptr);
    }

    // 0x100caf680
    void CrashHandler::SignalHandler(int arg1) {
        char* pcVar3;
        uint64_t uVar4;
        uint32_t in_register_00000034;

        unique_lock<std::mutex> local_d8(*((mutex*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1)));
        fixed_string<char, 128> local_c8;
        if (this_thread::GetThreadName() == 0) {
            uVar4 = this_thread::GetThreadID();
            local_c8.sprintf("Thread-%i", uVar4);
        } else {
            pcVar3 = (char*)this_thread::GetThreadName();
            local_c8 = pcVar3;
        }
        Callstack local_770;
        local_770.Capture(2);
        pcVar3 = _strsignal((int)this);
        uVar4 = GetSignalErrorName((int)this);
        JagException local_448(&local_770, "Signal %s (%s)", pcVar3, uVar4);
        uint64_t* puVar5 = (uint64_t*)(*(void (*)(...))m_signalState)();
        if ((SignalState*)*puVar5 == nullptr) {
            (**(void (**)(...))*m_crashHandler)(m_crashHandler, &local_448);
        } else {
            if ((*puVar5)->RunCallback(local_448) != '\0') {
                local_d8.unlock();
                puVar5 = (uint64_t*)(*(void (*)(...))m_signalState)();
                _longjmp((int*)(*puVar5)->second(), 1);
            }
        }
        RemoveTopLevelExceptionHandler();
        _raise((int)this);
    }

    // 0x100caf840
    void CrashHandler::RemoveTopLevelExceptionHandler() {
        m_act = 0;
        reinterpret_cast<const uint64_t*>(&m_act)[1] = 0;
        _sigaction(8, (sigaction*)&m_act, nullptr);
        _sigaction(4, (sigaction*)&m_act, nullptr);
        _sigaction(11, (sigaction*)&m_act, nullptr);
        _sigaction(10, (sigaction*)&m_act, nullptr);
        _sigaction(1, (sigaction*)&m_act, nullptr);
        _sigaction(12, (sigaction*)&m_act, nullptr);
    }

    // 0x100caf8d0
    void SignalState::RunCallback(const JagException& jagException) {
        (*field_160)(jagException, field_168, field_176);
    }

    // 0x100caf910
    SignalState::SignalState(bool (*arg1)(JagException const&, void*, void*), void* arg2, void* arg3) {
        uint8_t auVar1[16];
        stack_t local_28;

        auVar1 = (*(void (*)(...))CrashHandler::m_signalState)();
        field_0 = *auVar1._0_8_;
        field_8 = 0;
        field_16 = 0;
        field_24 = 0;
        field_32 = 0;
        field_40 = 0;
        field_48 = 0;
        field_56 = 0;
        field_64 = 0;
        field_72 = 0;
        field_80 = 0;
        field_88 = 0;
        field_96 = 0;
        field_104 = 0;
        field_112 = 0;
        field_120 = 0;
        field_128 = 0;
        field_136 = 0;
        field_144 = 0;
        field_152 = 0;
        field_160 = arg1;
        field_168 = auVar1._8_8_;
        field_176 = arg3;
        *auVar1._0_8_ = this;
        local_28.ss_sp = nullptr;
        local_28.ss_size = 0;
        local_28.ss_flags = 0;
        local_28._20_4_ = 0;
        _sigaltstack(nullptr, &local_28);
        if ((long)local_28.ss_sp + 1U < 2) {
            LogAssert("ss.ss_sp && ss.ss_sp != (void*)-1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/callstack/"
                      "posix/CrashHandler_Posix.cpp",
                      131, nullptr);
        }
    }

} // namespace jag::callstack
