// libs/hal/system/callstack/CrashHandlerInterface.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::callstack {
    class CrashHandlerInterface {
    public:
        CrashHandlerInterface();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x1001878e0, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // CrashHandlerInterface::CrashHandlerInterface()
    void CrashHandlerInterface::CrashHandlerInterface() {
        field_0 = PTR_vtable_100ee8c78 + 16;
    }

} // namespace jag::callstack
