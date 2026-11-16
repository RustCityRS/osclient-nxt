// projects/osclient/social/FriendData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::social {
    class FriendData {
    public:
        // virtual methods in vtable order
        virtual int CompareTo(FriendData const&) const;
        FriendData();
        ~FriendData();

        // data members, from how the methods use this: 200 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[128];
        int field_136; // offset 136
        int field_140; // offset 140
        char _unknown_144[40];
        undefined1 field_184; // offset 184
        undefined1 field_185; // offset 185
        char _unknown_186[14];
    };

    // 0x10013ae00, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // FriendData::FriendData(): jumps straight to the base-object constructor

    // 0x10013ae20, 80 bytes, base-object constructor, inline, placed by class name and debug map
    // FriendData::FriendData()
    void FriendData::FriendData() {
        new (this) OnlinePlayerData<FriendData>();
        field_0 = &PTR_CompareTo_100ef0fc0;
        new (&field_192) eastl::string();
    }

    // 0x1001af810, 16 bytes, complete-object destructor, inline, placed by class name
    // FriendData::~FriendData(): jumps straight to the base-object destructor

    // 0x1001af820, 48 bytes, base-object destructor, inline, placed by class name
    // FriendData::~FriendData()
    void FriendData::~FriendData() {
        (&field_192)->~basic_string();
        ~OnlinePlayerData();
    }

} // namespace jag::oldscape::social
