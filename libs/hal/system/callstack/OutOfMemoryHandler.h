// libs/hal/system/callstack/OutOfMemoryHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::callstack {
    class OutOfMemoryHandler {
    public:
        void Set(OutOfMemoryHandlerInterface const*);
        void OutOfMemoryTrap(unsigned long);
        static /* 16 bytes */ m_outOfMemoryHandler; // = { 0, 0, 0, 0 }
    };

    class OutOfMemoryHandlerInterface {
    public:
        OutOfMemoryHandlerInterface();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x100f37370, 16 bytes, __data
    OutOfMemoryHandler::m_outOfMemoryHandler = {0, 0, 0, 0};

    // 0x100187900, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // OutOfMemoryHandlerInterface::OutOfMemoryHandlerInterface()
    void OutOfMemoryHandlerInterface::OutOfMemoryHandlerInterface() {
        field_0 = PTR_vtable_100ee8c80 + 16;
    }

    // 0x100187990, 16 bytes, inline, placed by class name
    // OutOfMemoryHandler::Set(OutOfMemoryHandlerInterface const*)
    void OutOfMemoryHandler::Set(OutOfMemoryHandlerInterface* param_1) {
        *(OutOfMemoryHandlerInterface**)PTR_m_outOfMemoryHandler_100ee6c68 = param_1;
    }

    // 0x100c92b10, 32 bytes, inline, placed by class name
    // OutOfMemoryHandler::OutOfMemoryTrap(unsigned long)
    void OutOfMemoryHandler::OutOfMemoryTrap(ulong param_1) {
        OptionStore* this;

        this = *(OptionStore**)PTR_m_outOfMemoryHandler_100ee6c68;
        if (this != (OptionStore*)0) {
            (*(code*)*field_0)(this, param_1);
        }
        /* WARNING: Subroutine does not return */
        ~OptionStore();
    }

} // namespace jag::callstack
