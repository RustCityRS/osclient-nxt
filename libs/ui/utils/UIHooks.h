// libs/ui/utils/UIHooks.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class UIHookProperties {
    public:
        // virtual methods in vtable order
        virtual ~UIHookProperties();
        UIHookProperties();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x10054d350, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // UIHookProperties::UIHookProperties()
    void UIHookProperties::UIHookProperties() {
        field_0 = PTR_vtable_100ee7d88 + 16;
    }

} // namespace jag::ui
