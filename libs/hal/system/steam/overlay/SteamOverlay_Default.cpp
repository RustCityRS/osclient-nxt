// libs/hal/system/steam/overlay/SteamOverlay_Default.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.steam

#include "SteamOverlay.h"

namespace jag {
    // 0x1003ac000
    SteamOverlay::SteamOverlay() : std::function<void(bool)>() {}

    // 0x1003ac030
    SteamOverlay::~SteamOverlay() {}

    // 0x1003ac050
    void SteamOverlay::OpenBrowser(eastl::string str) {}

    // 0x1003ac060
    bool SteamOverlay::IsOverlayEnabled() const {
        return 0;
    }

    // 0x1003ac070
    void SteamOverlay::IsOverlayActive() {
        return 0;
    }

    // 0x1003ac080
    void SteamOverlay::IsOverlayRequested() {
        return 0;
    }

    // 0x1003ac090
    void SteamOverlay::SetNotificationPosition(SteamNotificationPosition steamNotificationPosition) {}

} // namespace jag
