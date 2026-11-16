// libs/hal/system/callstack/posix/CrashHandler_Posix.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.callstack

#include "libs/hal/system/callstack/CrashHandler.h"

namespace jag::callstack {
    class SignalState {
    public:
        GetJumpBuffer();
        void RunCallback(JagException const&);
        SignalState(bool (*)(JagException const&, void*, void*), void*, void*);
        ~SignalState();

        // data members, from how the methods use this: 184 bytes
        undefined8 field_0;   // offset 0
        undefined8 field_8;   // offset 8
        undefined8 field_16;  // offset 16
        undefined8 field_24;  // offset 24
        undefined8 field_32;  // offset 32
        undefined8 field_40;  // offset 40
        undefined8 field_48;  // offset 48
        undefined8 field_56;  // offset 56
        undefined8 field_64;  // offset 64
        undefined8 field_72;  // offset 72
        undefined8 field_80;  // offset 80
        undefined8 field_88;  // offset 88
        undefined8 field_96;  // offset 96
        undefined8 field_104; // offset 104
        undefined8 field_112; // offset 112
        undefined8 field_120; // offset 120
        undefined8 field_128; // offset 128
        undefined8 field_136; // offset 136
        undefined8 field_144; // offset 144
        undefined4 field_152; // offset 152
        char _unknown_156[4];
        _func_bool_JagException_ptr_void_ptr_void_ptr* field_160; // offset 160
        void* field_168;                                          // offset 168
        void* field_176;                                          // offset 176
    };

    // 0x100f48aa0, 64 bytes, __data
    CrashHandler::m_mutex = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x100f4e458, 24 bytes, __thread_vars
    CrashHandler::m_signalState = {0, 0, 0, 0, 165664, 0};

    // 0x103be2610, 8 bytes, __common; zero-initialised
    CrashHandler::m_crashHandler;

    // 0x103be2618, 16 bytes, __common; zero-initialised
    CrashHandler::m_act;

    // 0x100caf5f0, 144 bytes, placed by class name and debug map
    // CrashHandler::SetTopLevelExceptionHandler()
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* CrashHandler::SetTopLevelExceptionHandler() */

    void CrashHandler::SetTopLevelExceptionHandler() {
        _m_act = SignalHandler;
        uRam0000000103be2620 = 73014444032;
        _sigaction(8, (sigaction*)&m_act, (sigaction*)0);
        _sigaction(4, (sigaction*)&m_act, (sigaction*)0);
        _sigaction(11, (sigaction*)&m_act, (sigaction*)0);
        _sigaction(10, (sigaction*)&m_act, (sigaction*)0);
        _sigaction(1, (sigaction*)&m_act, (sigaction*)0);
        _sigaction(12, (sigaction*)&m_act, (sigaction*)0);
    }

    // 0x100caf680, 448 bytes, placed by class name and debug map
    // CrashHandler::SignalHandler(int)
    void CrashHandler::SignalHandler(int param_1) {
        char* pcVar3;
        undefined8 uVar4;
        undefined8* puVar5;
        int* piVar6;
        Callstack local_770[50];
        JagException local_448[10];
        mutex local_d8[16];
        fixed_string<char, 128, true, eastl::allocator> local_c8[168];
        undefined8 local_20;

        local_20 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        std::unique_lock<std::mutex>::unique_lock(local_d8);
        eastl::fixed_string<char, 128, true, eastl::allocator>::fixed_string(local_c8);
        if (this_thread::GetThreadName() == 0) {
            uVar4 = this_thread::GetThreadID();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf((char*)local_c8, "Thread-%i", uVar4);
        } else {
            pcVar3 = (char*)this_thread::GetThreadName();
            eastl::fixed_string<char, 16, true, eastl::allocator>::operator=(
                (fixed_string<char, 16, true, eastl::allocator>*)local_c8, pcVar3);
        }
        Callstack::Callstack(local_770);
        local_770->Capture(2);
        pcVar3 = _strsignal(param_1);
        uVar4 = GetSignalErrorName(param_1);
        JagException::JagException(local_448, local_770, "Signal %s (%s)", pcVar3, uVar4);
        puVar5 = (undefined8*)(*(code*)m_signalState)();
        if ((SignalState*)*puVar5 == (SignalState*)0) {
            (**(code**)*m_crashHandler)(m_crashHandler, local_448);
        } else {
            if ((*puVar5)->RunCallback(local_448) != '\0') {
                local_d8->unlock();
                puVar5 = (undefined8*)(*(code*)m_signalState)();
                piVar6 = (int*)(*puVar5)->second();
                /* WARNING: Subroutine does not return */
                _longjmp(piVar6, 1);
            }
        }
        RemoveTopLevelExceptionHandler();
        _raise(param_1);
        local_448->~JagException();
        /* WARNING: Subroutine does not return */
        local_c8->~fixed_string();
    }

    // 0x100caf840, 128 bytes, placed by class name and debug map
    // CrashHandler::RemoveTopLevelExceptionHandler()
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* CrashHandler::RemoveTopLevelExceptionHandler() */

    void CrashHandler::RemoveTopLevelExceptionHandler() {
        _m_act = 0;
        uRam0000000103be2620 = 0;
        _sigaction(8, (sigaction*)&m_act, (sigaction*)0);
        _sigaction(4, (sigaction*)&m_act, (sigaction*)0);
        _sigaction(11, (sigaction*)&m_act, (sigaction*)0);
        _sigaction(10, (sigaction*)&m_act, (sigaction*)0);
        _sigaction(1, (sigaction*)&m_act, (sigaction*)0);
        _sigaction(12, (sigaction*)&m_act, (sigaction*)0);
    }

    // 0x100caf8d0, 48 bytes, placed by neighbouring functions
    // SignalState::RunCallback(JagException const&)
    void SignalState::RunCallback(JagException* param_1) {
        (*field_160)(param_1, field_168, field_176);
    }

    // 0x100caf910, 192 bytes, base-object constructor, placed by __FILE__ string
    // SignalState::SignalState(bool (*)(JagException const&, void*, void*), void*, void*)
    void SignalState::SignalState(_func_bool_JagException_ptr_void_ptr_void_ptr* param_1, void* param_2,
                                  void* param_3) {
        undefined1 auVar1[16];
        stack_t local_28;

        auVar1 = (*(code*)CrashHandler::m_signalState)();
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
        field_160 = param_1;
        field_168 = auVar1._8_8_;
        field_176 = param_3;
        *auVar1._0_8_ = this;
        local_28.ss_sp = (void*)0;
        local_28.ss_size = 0;
        local_28.ss_flags = 0;
        local_28._20_4_ = 0;
        _sigaltstack((stack_t*)0, &local_28);
        if ((long)local_28.ss_sp + 1U < 2) {
            /* WARNING: Subroutine does not return */
            LogAssert("ss.ss_sp && ss.ss_sp != (void*)-1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/callstack/"
                      "posix/CrashHandler_Posix.cpp",
                      131, (char*)0);
        }
    }

} // namespace jag::callstack
