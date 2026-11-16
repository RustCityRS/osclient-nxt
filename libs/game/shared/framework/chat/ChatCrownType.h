// libs/game/shared/framework/chat/ChatCrownType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class ChatCrownType {
    public:
        ChatCrownType(int arg1, const char* str, int arg3, bool arg4, bool arg5);
        void GetByID(int arg1);
        static ChatCrownType const* NONE;       // = &enumArray
        static ChatCrownType const* PLAYER_MOD; // = &enumArray[1] /* ChatCrownType(1, "PLAYER_MOD", 0, true, true) */
        static ChatCrownType const* STAFF_MOD;  // = &enumArray[2] /* ChatCrownType(2, "STAFF_MOD", 1, true, false) */
        static ChatCrownType const* LOCAL_MOD;  // = &enumArray[3] /* ChatCrownType(3, "LOCAL_MOD", 8, true, true) */
        static ChatCrownType const*
            PREMIER_CLUB; // = &enumArray[4] /* ChatCrownType(4, "PREMIER_CLUB", 9, false, true) */
        static ChatCrownType const*
            PREMIER_CLUB_PLAYER_MOD; // = &enumArray[5] /* ChatCrownType(5, "PREMIER_CLUB_PLAYER_MOD", 10, true, true) */
        static ChatCrownType const* IRONMAN;  // = &enumArray[6] /* ChatCrownType(6, "IRONMAN", 11, false, true) */
        static ChatCrownType const* HARDCORE; // = &enumArray[7] /* ChatCrownType(7, "HARDCORE", 12, false, true) */
        static ChatCrownType const*
            HARDCORE_IRONMAN; // = &enumArray[8] /* ChatCrownType(8, "HARDCORE_IRONMAN", 13, false, true) */
        static ChatCrownType enumArray[9]; // initialised in its definition

    private:
        PlayerDataComparator<oldscape::social::FriendChatUser>* field_0;
        int field_8;
        int field_12;
        bool field_16;
        bool field_17;
        uint8_t _unknown_18[2];
    };

    // 0x1006e8f90
    ChatCrownType::ChatCrownType(int arg1, const char* str, int arg3, bool arg4, bool arg5) {
        new (this) eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>(str);
        field_8 = arg1;
        field_12 = arg3;
        field_16 = arg4;
        field_17 = arg5;
    }

} // namespace jag
