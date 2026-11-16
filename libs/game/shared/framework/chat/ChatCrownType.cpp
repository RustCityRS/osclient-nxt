// libs/game/shared/framework/chat/ChatCrownType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.shared

#include "ChatCrownType.h"

namespace jag {
    // 0x100f3f068, 8 bytes, __data
    ChatCrownType const* ChatCrownType::NONE = &enumArray;

    // 0x100f3f070, 8 bytes, __data
    ChatCrownType const* ChatCrownType::PLAYER_MOD = &enumArray[1] /* ChatCrownType(1, "PLAYER_MOD", 0, true, true) */;

    // 0x100f3f078, 8 bytes, __data
    ChatCrownType const* ChatCrownType::STAFF_MOD = &enumArray[2] /* ChatCrownType(2, "STAFF_MOD", 1, true, false) */;

    // 0x100f3f080, 8 bytes, __data
    ChatCrownType const* ChatCrownType::LOCAL_MOD = &enumArray[3] /* ChatCrownType(3, "LOCAL_MOD", 8, true, true) */;

    // 0x100f3f088, 8 bytes, __data
    ChatCrownType const* ChatCrownType::PREMIER_CLUB =
        &enumArray[4] /* ChatCrownType(4, "PREMIER_CLUB", 9, false, true) */;

    // 0x100f3f090, 8 bytes, __data
    ChatCrownType const* ChatCrownType::PREMIER_CLUB_PLAYER_MOD =
        &enumArray[5] /* ChatCrownType(5, "PREMIER_CLUB_PLAYER_MOD", 10, true, true) */;

    // 0x100f3f098, 8 bytes, __data
    ChatCrownType const* ChatCrownType::IRONMAN = &enumArray[6] /* ChatCrownType(6, "IRONMAN", 11, false, true) */;

    // 0x100f3f0a0, 8 bytes, __data
    ChatCrownType const* ChatCrownType::HARDCORE = &enumArray[7] /* ChatCrownType(7, "HARDCORE", 12, false, true) */;

    // 0x100f3f0a8, 8 bytes, __data
    ChatCrownType const* ChatCrownType::HARDCORE_IRONMAN =
        &enumArray[8] /* ChatCrownType(8, "HARDCORE_IRONMAN", 13, false, true) */;

    // 0x1039bce00, 216 bytes, __common; set at startup by ___cxx_global_var_init.72
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

    // 0x1006e1740, 64 bytes, placed by class name and debug map
    // ChatCrownType::GetByID(int)
    void ChatCrownType::GetByID(int param_1) {
        if (8 < (uint)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("id >= 0 && id < ChatCrownType::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/framework/"
                      "chat/ChatCrownType.cpp",
                      50, "ChatCrownType: Invalid ChatCrownType ID requested");
        }
        std::array<ChatCrownType, 9ul>::operator[]((long)param_1);
    }

    // 0x10071fb50, 352 bytes, placed by the data it initialises
    // ___cxx_global_var_init.72
    void ___cxx_global_var_init_72() {
        new (&ChatCrownType::enumArray) ChatCrownType(0, "NONE", -1, false, true);
        new (&DAT_1039bce18) ChatCrownType(1, "PLAYER_MOD", 0, true, true);
        new (&DAT_1039bce30) ChatCrownType(2, "STAFF_MOD", 1, true, false);
        new (&DAT_1039bce48) ChatCrownType(3, "LOCAL_MOD", 8, true, true);
        new (&DAT_1039bce60) ChatCrownType(4, "PREMIER_CLUB", 9, false, true);
        new (&DAT_1039bce78) ChatCrownType(5, "PREMIER_CLUB_PLAYER_MOD", 10, true, true);
        new (&DAT_1039bce90) ChatCrownType(6, "IRONMAN", 11, false, true);
        new (&DAT_1039bcea8) ChatCrownType(7, "HARDCORE", 12, false, true);
        new (&DAT_1039bcec0) ChatCrownType(8, "HARDCORE_IRONMAN", 13, false, true);
    }

} // namespace jag
