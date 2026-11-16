// libs/game/shared/framework/chat/ChatCrownType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.shared

#include "ChatCrownType.h"

namespace jag {
    // 0x100f3f068
    ChatCrownType const* ChatCrownType::NONE = &enumArray;

    // 0x100f3f070
    ChatCrownType const* ChatCrownType::PLAYER_MOD = &enumArray[1] /* ChatCrownType(1, "PLAYER_MOD", 0, true, true) */;

    // 0x100f3f078
    ChatCrownType const* ChatCrownType::STAFF_MOD = &enumArray[2] /* ChatCrownType(2, "STAFF_MOD", 1, true, false) */;

    // 0x100f3f080
    ChatCrownType const* ChatCrownType::LOCAL_MOD = &enumArray[3] /* ChatCrownType(3, "LOCAL_MOD", 8, true, true) */;

    // 0x100f3f088
    ChatCrownType const* ChatCrownType::PREMIER_CLUB =
        &enumArray[4] /* ChatCrownType(4, "PREMIER_CLUB", 9, false, true) */;

    // 0x100f3f090
    ChatCrownType const* ChatCrownType::PREMIER_CLUB_PLAYER_MOD =
        &enumArray[5] /* ChatCrownType(5, "PREMIER_CLUB_PLAYER_MOD", 10, true, true) */;

    // 0x100f3f098
    ChatCrownType const* ChatCrownType::IRONMAN = &enumArray[6] /* ChatCrownType(6, "IRONMAN", 11, false, true) */;

    // 0x100f3f0a0
    ChatCrownType const* ChatCrownType::HARDCORE = &enumArray[7] /* ChatCrownType(7, "HARDCORE", 12, false, true) */;

    // 0x100f3f0a8
    ChatCrownType const* ChatCrownType::HARDCORE_IRONMAN =
        &enumArray[8] /* ChatCrownType(8, "HARDCORE_IRONMAN", 13, false, true) */;

    // 0x1039bce00, set at startup by ___cxx_global_var_init.72
    ChatCrownType ChatCrownType::enumArray[9] = {
        /* [0] */ ChatCrownType(0, "NONE", -1, false, true),
        /* [1] */ ChatCrownType(1, "PLAYER_MOD", 0, true, true),
        /* [2] */ ChatCrownType(2, "STAFF_MOD", 1, true, false),
        /* [3] */ ChatCrownType(3, "LOCAL_MOD", 8, true, true),
        /* [4] */ ChatCrownType(4, "PREMIER_CLUB", 9, false, true),
        /* [5] */ ChatCrownType(5, "PREMIER_CLUB_PLAYER_MOD", 10, true, true),
        /* [6] */ ChatCrownType(6, "IRONMAN", 11, false, true),
        /* [7] */ ChatCrownType(7, "HARDCORE", 12, false, true),
        /* [8] */ ChatCrownType(8, "HARDCORE_IRONMAN", 13, false, true),
    };

    // 0x1006e1740
    void ChatCrownType::GetByID(int arg1) {
        uint32_t in_register_00000034;

        if (8 < (unsigned int)this) {
            LogAssert("id >= 0 && id < ChatCrownType::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/framework/"
                      "chat/ChatCrownType.cpp",
                      50, "ChatCrownType: Invalid ChatCrownType ID requested");
        }
        (*((array<ChatCrownType, 9ul>*)(long)(int)(unsigned int)this))[(((uint64_t)in_register_00000034 << 32) |
                                                                        (uint32_t)arg1)];
    }

} // namespace jag
