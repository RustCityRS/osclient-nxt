// libs/oldscape/rs2lib/movement/RouteDestination.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::movement {
    class RouteDestination {
    public:
        RouteDestination();
        RouteDestination(RouteDestination const&);

        // data members, from how the methods use this: 24 bytes
        undefined* field_0;  // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
    };

    // 0x1000c4340, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ExactTileDestination::ExactTileDestination(): jumps straight to the base-object constructor

    // 0x100128860, 32 bytes, base-object constructor, inline, placed by class name
    // RouteDestination::RouteDestination()
    void RouteDestination::RouteDestination() {
        field_0 = PTR_vtable_100ee8c60 + 16;
    }

    // 0x10012d5d0, 32 bytes, base-object constructor, inline, placed by class name
    // RouteDestination::RouteDestination(RouteDestination const&)
    void RouteDestination::RouteDestination(RouteDestination* param_1) {
        undefined8 uVar1;

        field_0 = PTR_vtable_100ee8c60 + 16;
        uVar1 = param_1->field_16;
        field_8 = param_1->field_8;
        field_16 = uVar1;
    }

} // namespace jag::oldscape::movement
