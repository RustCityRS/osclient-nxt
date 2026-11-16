// libs/hal/system/steam/overlay/SteamOverlay.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class SteamOverlay {
    public:
        void SetOnChanged(std::function<void(bool)>&);
        SteamOverlay();
        ~SteamOverlay();
        void OpenBrowser(eastl::string);
        IsOverlayEnabled() const;
        IsOverlayActive();
        IsOverlayRequested();
        void SetNotificationPosition(SteamNotificationPosition);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1001897d0, 16 bytes, inline, placed by class name and debug map
    // SteamOverlay::SetOnChanged(std::function<void (bool)>&)
    /* SteamOverlay::SetOnChanged(std::function<void (bool)>&) */

    void SteamOverlay::SetOnChanged(function* param_1) {
        std::function<void(bool)>::operator=((function<void(bool)>*)this, param_1);
    }

} // namespace jag
