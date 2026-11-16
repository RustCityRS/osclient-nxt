// projects/osclient/social/FriendData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::social {
    class FriendData {
    public:
        // virtual methods in vtable order
        virtual int CompareTo(const FriendData& friendData) const;
        FriendData();
        ~FriendData();

    private:
        uint8_t _unknown_8[128];
        int field_136;
        int field_140;
        uint8_t _unknown_144[40];
        uint8_t field_184;
        uint8_t field_185;
        uint8_t _unknown_186[14];
    };

    // 0x10013ae20
    FriendData::FriendData() : OnlinePlayerData<FriendData>() {}

    // 0x1001af820
    FriendData::~FriendData() {
        field_192.~basic_string();
    }

} // namespace jag::oldscape::social
