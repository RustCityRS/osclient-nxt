// projects/osclient/social/PlayerDataComparator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 3 instantiations, e.g. <FriendChatUser>, <FriendData>, <IgnoreData>
    class PlayerDataComparator {
    public:
        // virtual methods in vtable order
        virtual void __pure_slot_0() = 0;
        PlayerDataComparator();
    };

    // 0x1001702b0, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // PlayerDataComparator<FriendData>::PlayerDataComparator()
    void PlayerDataComparator<FriendData>::PlayerDataComparator() {
        *(undefined**)this = PTR_vtable_100ee8b58 + 16;
    }

    // 0x100172ef0, 32 bytes, base-object constructor, inline, placed by class name
    // PlayerDataComparator<IgnoreData>::PlayerDataComparator()
    void PlayerDataComparator<IgnoreData>::PlayerDataComparator() {
        *(undefined**)this = PTR_vtable_100ee8b60 + 16;
    }

    // 0x100174a00, 32 bytes, base-object constructor, inline, placed by class name
    // PlayerDataComparator<FriendChatUser>::PlayerDataComparator()
    void PlayerDataComparator<FriendChatUser>::PlayerDataComparator() {
        *(undefined**)this = PTR_vtable_100ee8b68 + 16;
    }

} // namespace jag::oldscape::social
