// libs/debug/DebugUIDemo.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

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

        // data members, from how the methods use this: 17 bytes
        undefined** field_0; // offset 0, vtable pointer
        bool field_8;        // offset 8
        bool field_9;        // offset 9
        char _unknown_10[7];
    };

    // 0x100720670, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // DebugUIDemo::DebugUIDemo(): jumps straight to the base-object constructor

    // 0x100723210, 16 bytes, complete-object destructor, inline, placed by class name
    // DebugUIDemo::~DebugUIDemo(): jumps straight to the base-object destructor

    // 0x100723220, 32 bytes, deleting destructor, inline, placed by class name
    // DebugUIDemo::~DebugUIDemo()
    void DebugUIDemo::~DebugUIDemo() {
        ~DebugUIDemo(this);
        operator_delete(this);
    }

    // 0x100723290, 48 bytes, base-object constructor, inline, placed by class name
    // DebugUIDemo::DebugUIDemo()
    void DebugUIDemo::DebugUIDemo() {
        new (this) DebugUIElement();
        field_0 = &PTR__DebugUIDemo_100f12ac8;
        field_9 = true;
    }

    // 0x100723980, 16 bytes, base-object destructor, inline, placed by class name
    // DebugUIDemo::~DebugUIDemo()
    void DebugUIDemo::~DebugUIDemo() {
        ~DebugUIElement();
    }

} // namespace jag::debug
