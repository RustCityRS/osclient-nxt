// libs/hal/system/steam/overlay/SteamOverlay.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class SteamOverlay {
    public:
        void SetOnChanged(std::function<void(bool)>& callback);
        SteamOverlay();
        ~SteamOverlay();
        void OpenBrowser(eastl::string str);
        bool IsOverlayEnabled() const;
        void IsOverlayActive();
        void IsOverlayRequested();
        void SetNotificationPosition(SteamNotificationPosition steamNotificationPosition);

        uint8_t _unknown_0[1];
    };

    // 0x1001897d0
    void SteamOverlay::SetOnChanged(std::function<void(bool)>& callback) {
        *this = callback;
    }

} // namespace jag
