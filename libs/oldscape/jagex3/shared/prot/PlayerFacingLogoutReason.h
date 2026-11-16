// libs/oldscape/jagex3/shared/prot/PlayerFacingLogoutReason.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::shared {
    class PlayerFacingLogoutReason {
    public:
        char* getReason(int arg1);
    };

    // 0x100113500
    char* PlayerFacingLogoutReason::getReason(int arg1) {
        if ((unsigned int)arg1 < 3) {
            return (&PTR_s_player_request_100ef5368)[arg1];
        }
        return "";
    }

} // namespace jag::oldscape::shared

namespace jag {
    // 0x100113530
    void ShuffledPacket2::g4() {
        g4_alt1();
    }

} // namespace jag
