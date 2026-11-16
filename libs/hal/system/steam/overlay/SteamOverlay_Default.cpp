// libs/hal/system/steam/overlay/SteamOverlay_Default.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.steam

#include "SteamOverlay.h"

namespace jag {
    // 0x1003ac000, 16 bytes, base-object constructor, placed by class name and debug map
    // SteamOverlay::SteamOverlay()
    void SteamOverlay::SteamOverlay() {
        std::function<void(bool)>::function((function<void(bool)>*)this);
    }

    // 0x1003ac020, 16 bytes, complete-object constructor, placed by class name and debug map
    // SteamOverlay::SteamOverlay(): jumps straight to the base-object constructor

    // 0x1003ac030, 16 bytes, base-object destructor, placed by class name and debug map
    // SteamOverlay::~SteamOverlay()
    void SteamOverlay::~SteamOverlay() {
        std::function<void(bool)>::~function((function<void(bool)>*)this);
    }

    // 0x1003ac040, 16 bytes, complete-object destructor, placed by class name and debug map
    // SteamOverlay::~SteamOverlay(): jumps straight to the base-object destructor

    // 0x1003ac050, 16 bytes, placed by class name and debug map
    // SteamOverlay::OpenBrowser(eastl::string)
    void SteamOverlay::OpenBrowser() {}

    // 0x1003ac060, 16 bytes, placed by class name and debug map
    // SteamOverlay::IsOverlayEnabled() const
    undefined8 SteamOverlay::IsOverlayEnabled() {
        return 0;
    }

    // 0x1003ac070, 16 bytes, placed by class name and debug map
    // SteamOverlay::IsOverlayActive()
    undefined8 SteamOverlay::IsOverlayActive() {
        return 0;
    }

    // 0x1003ac080, 16 bytes, placed by class name and debug map
    // SteamOverlay::IsOverlayRequested()
    undefined8 SteamOverlay::IsOverlayRequested() {
        return 0;
    }

    // 0x1003ac090, 16 bytes, placed by class name and debug map
    // SteamOverlay::SetNotificationPosition(SteamNotificationPosition)
    void SteamOverlay::SetNotificationPosition() {}

} // namespace jag
