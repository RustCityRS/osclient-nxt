// libs/oldscape/rs2lib/movement/RouteDestination.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::movement {
    class RouteDestination {
    public:
        RouteDestination();
        RouteDestination(const RouteDestination& routeDestination);

    private:
        uint64_t field_8;
        uint64_t field_16;
    };

    // 0x100128860
    RouteDestination::RouteDestination() {
        field_0 = PTR_vtable_100ee8c60 + 16;
    }

    // 0x10012d5d0
    RouteDestination::RouteDestination(const RouteDestination& routeDestination) {
        field_0 = PTR_vtable_100ee8c60 + 16;
        uint64_t uVar1 = routeDestination.field_16;
        field_8 = routeDestination.field_8;
        field_16 = uVar1;
    }

} // namespace jag::oldscape::movement
