// libs/hal/system/callstack/posix/CrashHandlerInc_Posix.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.system.callstack

namespace jag::callstack {
    // 0x100caf9d0, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // SignalState::SignalState(bool (*)(JagException const&, void*, void*), void*, void*): jumps straight to the base-object constructor

    // 0x100caf9e0, 32 bytes, base-object destructor, placed by debug map only (low confidence)
    // SignalState::~SignalState()
    void SignalState::~SignalState() {
        undefined8* puVar1;
        undefined8 uVar2;

        uVar2 = field_0;
        puVar1 = (undefined8*)(*(code*)CrashHandler::m_signalState)();
        *puVar1 = uVar2;
    }

    // 0x100cafa00, 16 bytes, complete-object destructor, placed by debug map only (low confidence)
    // SignalState::~SignalState(): jumps straight to the base-object destructor

} // namespace jag::callstack
