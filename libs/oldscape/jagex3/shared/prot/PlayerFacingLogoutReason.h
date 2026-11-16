// libs/oldscape/jagex3/shared/prot/PlayerFacingLogoutReason.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::shared {
    class PlayerFacingLogoutReason {
    public:
        char* getReason(int);
    };

    // 0x100113500, 48 bytes, inline, placed by class name and debug map
    // PlayerFacingLogoutReason::getReason(int)
    char* PlayerFacingLogoutReason::getReason(int param_1) {
        if ((uint)param_1 < 3) {
            return (&PTR_s_player_request_100ef5368)[param_1];
        }
        return "";
    }

} // namespace jag::oldscape::shared

namespace jag {
    // 0x100113530, 16 bytes, inline, placed by debug map only (low confidence)
    // ShuffledPacket2::g4()
    void ShuffledPacket2::g4() {
        g4_alt1();
    }

} // namespace jag
