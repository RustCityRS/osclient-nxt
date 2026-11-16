// libs/debug/DebugUIElement.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::debug {
    class DebugUIElement : public oldscape::option::OptionStore // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~DebugUIElement();
        virtual LogicDebug(bool);
        virtual void __pure_slot_3() = 0;
        virtual void NotifyDebugRegistration(bool);
        DrawDebugMainMenu();
        void RegisterDebug();
        void UnregisterDebug();
        DebugUIElement();

        // data members, from how the methods use this: 9 bytes
        undefined* field_0; // offset 0, vtable pointer
        bool field_8;       // offset 8
    };

    // 0x1007232c0, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // DebugUIElement::DebugUIElement()
    void DebugUIElement::DebugUIElement() {
        field_0 = PTR_vtable_100ee8618 + 16;
        field_8 = false;
        RegisterDebug(this);
    }

    // 0x100723990, 32 bytes, base-object destructor, inline, placed by class name and debug map
    // DebugUIElement::~DebugUIElement()
    void DebugUIElement::~DebugUIElement() {
        field_0 = PTR_vtable_100ee8618 + 16;
        UnregisterDebug(this);
    }

} // namespace jag::debug

namespace jag {
    // 0x100724270, 32 bytes, inline, placed by debug map only (low confidence)
    // render::Texture2D* placement_new<render::Texture2D, char const (&) [11]>(void*, char const (&) [11])
    /* render::Texture2D* placement_new<render::Texture2D, char const (&) [31]>(void*,
   char const (&) [31]) */

    Texture2D* placement_new<render::Texture2D, char const (&)[31]>(void* param_1, char* param_2) {
        render::Texture2D::Texture2D(param_1, param_2);
        return param_1;
    }

} // namespace jag
