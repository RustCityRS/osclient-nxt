// projects/osclient/social/DisplayNameQueryable.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::social {
    class DisplayNameQueryable {
    public:
        DisplayNameQueryable();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x1000c4120, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // DisplayNameQueryable::DisplayNameQueryable()
    void DisplayNameQueryable::DisplayNameQueryable() {
        field_0 = PTR_vtable_100ee8b50 + 16;
    }

} // namespace jag::oldscape::social
