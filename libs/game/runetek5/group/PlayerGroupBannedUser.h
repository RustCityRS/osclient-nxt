// libs/game/runetek5/group/PlayerGroupBannedUser.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class PlayerGroupBannedUser {
    public:
        ~PlayerGroupBannedUser();
        PlayerGroupBannedUser();
        PlayerGroupBannedUser(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&);
        PlayerGroupBannedUser* operator=(PlayerGroupBannedUser const&);
        PlayerGroupBannedUser(PlayerGroupBannedUser const&);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1004babf0, 32 bytes, inline, placed by class name and debug map
    // PlayerGroupBannedUser::operator=(PlayerGroupBannedUser const&)
    /* PlayerGroupBannedUser::TEMPNAMEPLACEHOLDERVALUE(PlayerGroupBannedUser
   const&) */

    PlayerGroupBannedUser* PlayerGroupBannedUser::operator=(PlayerGroupBannedUser* param_1) {
        eastl::string::operator=((eastl::string*)this, (basic_string*)param_1);
        return this;
    }

    // 0x1004be9b0, 16 bytes, complete-object constructor, inline, placed by class name
    // PlayerGroupBannedUser::PlayerGroupBannedUser(PlayerGroupBannedUser const&): jumps straight to the base-object constructor

    // 0x1004be9c0, 16 bytes, base-object constructor, inline, placed by class name
    // PlayerGroupBannedUser::PlayerGroupBannedUser(PlayerGroupBannedUser const&)
    void PlayerGroupBannedUser::PlayerGroupBannedUser(PlayerGroupBannedUser* param_1) {
        new (this) eastl::string(param_1);
    }

} // namespace jag::game
