// libs/game/shared/framework/chat/ChatCrownType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class ChatCrownType {
    public:
        ChatCrownType(int, char const*, int, bool, bool);
        void GetByID(int);
        static ChatCrownType const* /* 8 bytes */ NONE; // = &enumArray
        static ChatCrownType const*                     /* 8 bytes */
            PLAYER_MOD;              // = &enumArray[1] /* ChatCrownType(1, "PLAYER_MOD", 0, true, true) */
        static ChatCrownType const*  /* 8 bytes */
            STAFF_MOD;               // = &enumArray[2] /* ChatCrownType(2, "STAFF_MOD", 1, true, false) */
        static ChatCrownType const*  /* 8 bytes */
            LOCAL_MOD;               // = &enumArray[3] /* ChatCrownType(3, "LOCAL_MOD", 8, true, true) */
        static ChatCrownType const*  /* 8 bytes */
            PREMIER_CLUB;            // = &enumArray[4] /* ChatCrownType(4, "PREMIER_CLUB", 9, false, true) */
        static ChatCrownType const*  /* 8 bytes */
            PREMIER_CLUB_PLAYER_MOD; // = &enumArray[5] /* ChatCrownType(5, "PREMIER_CLUB_PLAYER_MOD", 10, true, true) */
        static ChatCrownType const*  /* 8 bytes */
            IRONMAN;                 // = &enumArray[6] /* ChatCrownType(6, "IRONMAN", 11, false, true) */
        static ChatCrownType const*  /* 8 bytes */
            HARDCORE;                // = &enumArray[7] /* ChatCrownType(7, "HARDCORE", 12, false, true) */
        static ChatCrownType const*  /* 8 bytes */
            HARDCORE_IRONMAN;        // = &enumArray[8] /* ChatCrownType(8, "HARDCORE_IRONMAN", 13, false, true) */
        static ChatCrownType /* 216 bytes */ enumArray[9]; // initialised in its definition

        // data members, from how the methods use this: 20 bytes
        EntityHighlight** field_0; // offset 0
        int field_8;               // offset 8
        int field_12;              // offset 12
        bool field_16;             // offset 16
        bool field_17;             // offset 17
        char _unknown_18[2];
    };

    // 0x1006e1730, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ChatCrownType::ChatCrownType(int, char const*, int, bool, bool): jumps straight to the base-object constructor

    // 0x1006e8f90, 80 bytes, base-object constructor, inline, placed by class name
    // ChatCrownType::ChatCrownType(int, char const*, int, bool, bool)
    void ChatCrownType::ChatCrownType(int param_1, char* param_2, int param_3, bool param_4, bool param_5) {
        new (this)
            eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>(param_2, param_2);
        field_8 = param_1;
        field_12 = param_3;
        field_16 = param_4;
        field_17 = param_5;
    }

} // namespace jag
