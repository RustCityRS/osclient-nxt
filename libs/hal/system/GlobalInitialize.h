// libs/hal/system/GlobalInitialize.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.system.osclient

namespace jag {
    // 0x1000093e0
    void NxtGlobalInitialize() {
        CRTHeapCreate();
        callstack::CrashHandler::SetTopLevelExceptionHandler();
    }

    // 0x1000093f0
    void NxtGlobalDestroy() {
        callstack::CrashHandler::RemoveTopLevelExceptionHandler();
    }

} // namespace jag

// 0x100009400
void HelperNxtGlobalInitialize() {
    jag::NxtGlobalInitialize();
    _atexit(jag::NxtGlobalDestroy);
}
