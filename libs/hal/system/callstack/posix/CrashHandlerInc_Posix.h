// libs/hal/system/callstack/posix/CrashHandlerInc_Posix.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.system.callstack

namespace jag::callstack {
    // 0x100caf9e0
    SignalState::~SignalState() {
        uint64_t uVar2 = field_0;
        uint64_t* puVar1 = (uint64_t*)(*(void (*)(...))CrashHandler::m_signalState)();
        *puVar1 = uVar2;
    }

} // namespace jag::callstack
