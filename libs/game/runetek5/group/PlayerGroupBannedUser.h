// libs/game/runetek5/group/PlayerGroupBannedUser.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class PlayerGroupBannedUser {
    public:
        ~PlayerGroupBannedUser();
        PlayerGroupBannedUser();
        PlayerGroupBannedUser(PacketT<Array<unsigned char>>& arg1);
        PlayerGroupBannedUser* operator=(const PlayerGroupBannedUser& playerGroupBannedUser);
        PlayerGroupBannedUser(const PlayerGroupBannedUser& playerGroupBannedUser);

        uint8_t _unknown_0[1];
    };

    // 0x1004babf0
    PlayerGroupBannedUser* PlayerGroupBannedUser::operator=(const PlayerGroupBannedUser& playerGroupBannedUser) {
        *this = playerGroupBannedUser;
        return this;
    }

    // 0x1004be9c0
    PlayerGroupBannedUser::PlayerGroupBannedUser(const PlayerGroupBannedUser& playerGroupBannedUser)
        : eastl::string(playerGroupBannedUser) {}

} // namespace jag::game
