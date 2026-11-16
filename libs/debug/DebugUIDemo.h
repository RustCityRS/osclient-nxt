// libs/debug/DebugUIDemo.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::debug {
    class DebugUIDemo : public DebugPrimitiveRendererBasic // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~DebugUIDemo();
        virtual void DrawDebugMainMenu();
        virtual void DrawDebug();
        void Show();
        DebugUIDemo();

    private:
        bool field_8;
        bool field_9;
        uint8_t _unknown_10[7];
    };

    // 0x100723290
    DebugUIDemo::DebugUIDemo() : DebugUIElement(), field_9(true) {}

    // 0x100723980
    DebugUIDemo::~DebugUIDemo() {}

} // namespace jag::debug
