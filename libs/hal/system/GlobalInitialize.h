// libs/hal/system/GlobalInitialize.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.system.osclient

namespace jag {
    // 0x1000093e0, 16 bytes, placed by debug map only (low confidence)
    // NxtGlobalInitialize()
    void NxtGlobalInitialize() {
        CRTHeapCreate();
        callstack::CrashHandler::SetTopLevelExceptionHandler();
    }

    // 0x1000093f0, 16 bytes, placed by debug map only (low confidence)
    // NxtGlobalDestroy()
    void NxtGlobalDestroy() {
        callstack::CrashHandler::RemoveTopLevelExceptionHandler();
    }

} // namespace jag

// 0x100009400, 32 bytes, placed by debug map only (low confidence)
// HelperNxtGlobalInitialize()
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HelperNxtGlobalInitialize() */

void HelperNxtGlobalInitialize() {
    jag::NxtGlobalInitialize();
    _atexit(jag::NxtGlobalDestroy);
}
