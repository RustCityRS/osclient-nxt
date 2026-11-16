// projects/osclient/social/PlayerDataComparator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 3 instantiations, e.g. <FriendChatUser>, <FriendData>, <IgnoreData>
    class PlayerDataComparator {
    public:
        // virtual methods in vtable order
        virtual void __pure_slot_0() = 0;
        PlayerDataComparator();
    };

    // 0x1001702b0
    PlayerDataComparator<FriendData>::PlayerDataComparator() {}

    // 0x100172ef0
    PlayerDataComparator<IgnoreData>::PlayerDataComparator() {}

    // 0x100174a00
    PlayerDataComparator<FriendChatUser>::PlayerDataComparator() {}

} // namespace jag::oldscape::social
