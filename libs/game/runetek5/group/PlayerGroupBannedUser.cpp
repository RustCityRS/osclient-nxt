// libs/game/runetek5/group/PlayerGroupBannedUser.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "PlayerGroupBannedUser.h"
#include "projects/osclient/loottracker/LootTrackerUtils.h"

namespace jag::game {
    // 0x100024070: PlayerGroupBannedUser::~PlayerGroupBannedUser() has the same machine code as eastl::pair<eastl::string, oldscape::option::IOption*>::~pair()

    // 0x10002dfe0: PlayerGroupBannedUser::~PlayerGroupBannedUser() has the same machine code as eastl::hash_node<eastl::string, false>::~hash_node()

    // 0x1000b25f0: PlayerGroupBannedUser::PlayerGroupBannedUser() has the same machine code as oldscape::minimenu::MinimenuGlobalEntryData::MinimenuGlobalEntryData()

    // 0x1004ba350
    PlayerGroupBannedUser::PlayerGroupBannedUser(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1)
        : eastl::string() {
        arg1.gStringCP1252ToUTF8<eastl::string>(this, false);
    }

} // namespace jag::game

namespace jag::oldscape::loottracker {
    // 0x1000b1ee0: SourceItem::SourceItem() has the same machine code as minimenu::MinimenuGlobalEntryData::MinimenuGlobalEntryData()

} // namespace jag::oldscape::loottracker
