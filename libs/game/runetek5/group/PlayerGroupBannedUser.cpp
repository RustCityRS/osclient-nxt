// libs/game/runetek5/group/PlayerGroupBannedUser.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "PlayerGroupBannedUser.h"
#include "projects/osclient/loottracker/LootTrackerUtils.h"

namespace jag::game {
    // 0x100024070: the linker folded this into eastl::pair<eastl::string, oldscape::option::IOption*>::~pair(), which has identical code
    PlayerGroupBannedUser::~PlayerGroupBannedUser();

    // 0x10002dfe0: the linker folded this into eastl::hash_node<eastl::string, false>::~hash_node(), which has identical code
    PlayerGroupBannedUser::~PlayerGroupBannedUser();

    // 0x1000b1ee0: the linker folded this into oldscape::minimenu::MinimenuGlobalEntryData::MinimenuGlobalEntryData(), which has identical code
    PlayerGroupBannedUser::PlayerGroupBannedUser();

    // 0x1000b25f0: the linker folded this into oldscape::minimenu::MinimenuGlobalEntryData::MinimenuGlobalEntryData(), which has identical code
    PlayerGroupBannedUser::PlayerGroupBannedUser();

    // 0x1004ba350, 64 bytes, base-object constructor, placed by class name and debug map
    // PlayerGroupBannedUser::PlayerGroupBannedUser(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&)
    void PlayerGroupBannedUser::PlayerGroupBannedUser(PacketT* param_1) {
        new (this) eastl::string();
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
            (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)param_1, (basic_string*)this,
            false);
    }

    // 0x1004ba390, 16 bytes, complete-object constructor, placed by class name and debug map
    // PlayerGroupBannedUser::PlayerGroupBannedUser(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&): jumps straight to the base-object constructor

} // namespace jag::game

namespace jag::oldscape::loottracker {
    // 0x1000b1ee0: the linker folded this into minimenu::MinimenuGlobalEntryData::MinimenuGlobalEntryData(), which has identical code
    SourceItem::SourceItem();

} // namespace jag::oldscape::loottracker
