// libs/debug/DebugUIElement.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::debug {
    class DebugUIElement : public oldscape::option::OptionStore // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~DebugUIElement();
        virtual void LogicDebug(bool arg1);
        virtual void __pure_slot_3() = 0;
        virtual void NotifyDebugRegistration(bool arg1);
        void DrawDebugMainMenu();
        void RegisterDebug();
        void UnregisterDebug();
        DebugUIElement();

    private:
        bool field_8;
    };

    // 0x1007232c0
    DebugUIElement::DebugUIElement() : field_8(false) {
        RegisterDebug();
    }

    // 0x100723990
    DebugUIElement::~DebugUIElement() {
        UnregisterDebug();
    }

} // namespace jag::debug

namespace jag {
    // 0x100724270
    render::Texture2D* placement_new<render::Texture2D, char const (&)[11]>(void* arg1, char const (&arg2)[11]) {
        new (arg1) render::Texture2D(arg2);
        return arg1;
    }

} // namespace jag
