// libs/hal/system/callstack/OutOfMemoryHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::callstack {
    class OutOfMemoryHandler {
    public:
        void Set(const OutOfMemoryHandlerInterface* outOfMemoryHandlerInterface);
        void OutOfMemoryTrap(unsigned long arg1);
        static float m_outOfMemoryHandler[4]; // = { 0, 0, 0, 0 }
    };

    class OutOfMemoryHandlerInterface {
    public:
        OutOfMemoryHandlerInterface();
    };

    // 0x100f37370
    float OutOfMemoryHandler::m_outOfMemoryHandler[4] = {0, 0, 0, 0};

    // 0x100187900
    OutOfMemoryHandlerInterface::OutOfMemoryHandlerInterface() {
        field_0 = PTR_vtable_100ee8c80 + 16;
    }

    // 0x100187990
    void OutOfMemoryHandler::Set(const OutOfMemoryHandlerInterface* outOfMemoryHandlerInterface) {
        *(OutOfMemoryHandlerInterface**)PTR_m_outOfMemoryHandler_100ee6c68 = outOfMemoryHandlerInterface;
    }

    // 0x100c92b10
    void OutOfMemoryHandler::OutOfMemoryTrap(unsigned long arg1) {
        uint64_t* puVar1 = *(uint64_t**)PTR_m_outOfMemoryHandler_100ee6c68;
        if (puVar1 == nullptr) {
            nullptr->~OptionStore();
        }
        (**(void (**)(...))*puVar1)(puVar1, arg1);
    }

} // namespace jag::callstack
