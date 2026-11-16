// libs/game/runetek5/script/ClientTriggerType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ClientTriggerType.h"

namespace jag::game {
    // 0x100f382b0
    ClientTriggerType const* ClientTriggerType::OPWORLDMAPELEMENT1 =
        &enumArray[10] /* ClientTriggerType(10, "opworldmapelement1", false) */;

    // 0x100f382b8
    ClientTriggerType const* ClientTriggerType::OPWORLDMAPELEMENT2 =
        &enumArray[11] /* ClientTriggerType(11, "opworldmapelement2", false) */;

    // 0x100f382c0
    ClientTriggerType const* ClientTriggerType::OPWORLDMAPELEMENT3 =
        &enumArray[12] /* ClientTriggerType(12, "opworldmapelement3", false) */;

    // 0x100f382c8
    ClientTriggerType const* ClientTriggerType::OPWORLDMAPELEMENT4 =
        &enumArray[13] /* ClientTriggerType(13, "opworldmapelement4", false) */;

    // 0x100f382d0
    ClientTriggerType const* ClientTriggerType::OPWORLDMAPELEMENT5 =
        &enumArray[14] /* ClientTriggerType(14, "opworldmapelement5", false) */;

    // 0x100f382d8
    ClientTriggerType const* ClientTriggerType::WORLDMAPELEMENTMOUSEOVER =
        &enumArray[15] /* ClientTriggerType(15, "worldmapelementmouseover", true) */;

    // 0x100f382e0
    ClientTriggerType const* ClientTriggerType::WORLDMAPELEMENTMOUSELEAVE =
        &enumArray[16] /* ClientTriggerType(16, "worldmapelementmouseleave", true) */;

    // 0x100f382e8
    ClientTriggerType const* ClientTriggerType::WORLDMAPELEMENTMOUSEREPEAT =
        &enumArray[17] /* ClientTriggerType(17, "worldmapelementmouserepeat", true) */;

    // 0x100f382f0
    ClientTriggerType const* ClientTriggerType::VIDEO_END =
        &enumArray[18] /* ClientTriggerType(18, "video_end", false) */;

    // 0x100f382f8
    ClientTriggerType const* ClientTriggerType::JCOINS_UPDATED =
        &enumArray[19] /* ClientTriggerType(19, "jcoins_updated", false) */;

    // 0x100f38300
    ClientTriggerType const* ClientTriggerType::CUTSCENE_SUBTITLE =
        &enumArray[20] /* ClientTriggerType(20, "cutscene_subtitle", false) */;

    // 0x100f38308
    ClientTriggerType const* ClientTriggerType::LOYALTY_UPDATED =
        &enumArray[21] /* ClientTriggerType(21, "loyalty_updated", false) */;

    // 0x100f38310
    ClientTriggerType const* ClientTriggerType::PROCESS_NPC =
        &enumArray[22] /* ClientTriggerType(22, "process_npc", false) */;

    // 0x100f38318
    ClientTriggerType const* ClientTriggerType::PROCESS_PLAYER =
        &enumArray[23] /* ClientTriggerType(23, "process_player", false) */;

    // 0x100f38320
    ClientTriggerType const* ClientTriggerType::IF_PROCESS_ACTIVE_NPC =
        &enumArray[24] /* ClientTriggerType(24, "if_process_active_npc", false) */;

    // 0x100f38328
    ClientTriggerType const* ClientTriggerType::IF_PROCESS_ACTIVE_PLAYER =
        &enumArray[25] /* ClientTriggerType(25, "if_process_active_player", false) */;

    // 0x100f38330
    ClientTriggerType const* ClientTriggerType::IF_PROCESS_ACTIVE_LOC =
        &enumArray[26] /* ClientTriggerType(26, "if_process_active_loc", false) */;

    // 0x100f38338
    ClientTriggerType const* ClientTriggerType::IF_PROCESS_ACTIVE_OBJ =
        &enumArray[27] /* ClientTriggerType(27, "if_process_active_obj", false) */;

    // 0x100f38340
    ClientTriggerType const* ClientTriggerType::MINIMENU_EVENT =
        &enumArray[30] /* ClientTriggerType(30, "minimenu_event", false) */;

    // 0x100f38348
    ClientTriggerType const* ClientTriggerType::UPDATEOBJSTACK =
        &enumArray[45] /* ClientTriggerType(45, "updateobjstack", false) */;

    // 0x100f38350
    ClientTriggerType const* ClientTriggerType::UPDATEOBJCOUNT =
        &enumArray[46] /* ClientTriggerType(46, "updateobjcount", false) */;

    // 0x100f38358
    ClientTriggerType const* ClientTriggerType::PROC = &enumArray[73] /* ClientTriggerType(73, "proc", false) */;

    // 0x100f38360
    ClientTriggerType const* ClientTriggerType::CLIENTSCRIPT =
        &enumArray[76] /* ClientTriggerType(76, "clientscript", false) */;

    // 0x1039b45d8, set at startup by ___cxx_global_var_init.1
    ClientTriggerType ClientTriggerType::enumArray[77] = {
        /* [0] */ ClientTriggerType(),
        /* [1] */ ClientTriggerType(),
        /* [2] */ ClientTriggerType(),
        /* [3] */ ClientTriggerType(),
        /* [4] */ ClientTriggerType(),
        /* [5] */ ClientTriggerType(),
        /* [6] */ ClientTriggerType(),
        /* [7] */ ClientTriggerType(),
        /* [8] */ ClientTriggerType(),
        /* [9] */ ClientTriggerType(),
        /* [10] */ ClientTriggerType(10, "opworldmapelement1", false),
        /* [11] */ ClientTriggerType(11, "opworldmapelement2", false),
        /* [12] */ ClientTriggerType(12, "opworldmapelement3", false),
        /* [13] */ ClientTriggerType(13, "opworldmapelement4", false),
        /* [14] */ ClientTriggerType(14, "opworldmapelement5", false),
        /* [15] */ ClientTriggerType(15, "worldmapelementmouseover", true),
        /* [16] */ ClientTriggerType(16, "worldmapelementmouseleave", true),
        /* [17] */ ClientTriggerType(17, "worldmapelementmouserepeat", true),
        /* [18] */ ClientTriggerType(18, "video_end", false),
        /* [19] */ ClientTriggerType(19, "jcoins_updated", false),
        /* [20] */ ClientTriggerType(20, "cutscene_subtitle", false),
        /* [21] */ ClientTriggerType(21, "loyalty_updated", false),
        /* [22] */ ClientTriggerType(22, "process_npc", false),
        /* [23] */ ClientTriggerType(23, "process_player", false),
        /* [24] */ ClientTriggerType(24, "if_process_active_npc", false),
        /* [25] */ ClientTriggerType(25, "if_process_active_player", false),
        /* [26] */ ClientTriggerType(26, "if_process_active_loc", false),
        /* [27] */ ClientTriggerType(27, "if_process_active_obj", false),
        /* [28] */ ClientTriggerType(),
        /* [29] */ ClientTriggerType(),
        /* [30] */ ClientTriggerType(30, "minimenu_event", false),
        /* [31] */ ClientTriggerType(),
        /* [32] */ ClientTriggerType(),
        /* [33] */ ClientTriggerType(),
        /* [34] */ ClientTriggerType(),
        /* [35] */ ClientTriggerType(),
        /* [36] */ ClientTriggerType(),
        /* [37] */ ClientTriggerType(),
        /* [38] */ ClientTriggerType(),
        /* [39] */ ClientTriggerType(),
        /* [40] */ ClientTriggerType(),
        /* [41] */ ClientTriggerType(),
        /* [42] */ ClientTriggerType(),
        /* [43] */ ClientTriggerType(),
        /* [44] */ ClientTriggerType(),
        /* [45] */ ClientTriggerType(45, "updateobjstack", false),
        /* [46] */ ClientTriggerType(46, "updateobjcount", false),
        /* [47] */ ClientTriggerType(),
        /* [48] */ ClientTriggerType(),
        /* [49] */ ClientTriggerType(),
        /* [50] */ ClientTriggerType(),
        /* [51] */ ClientTriggerType(),
        /* [52] */ ClientTriggerType(),
        /* [53] */ ClientTriggerType(),
        /* [54] */ ClientTriggerType(),
        /* [55] */ ClientTriggerType(),
        /* [56] */ ClientTriggerType(),
        /* [57] */ ClientTriggerType(),
        /* [58] */ ClientTriggerType(),
        /* [59] */ ClientTriggerType(),
        /* [60] */ ClientTriggerType(),
        /* [61] */ ClientTriggerType(),
        /* [62] */ ClientTriggerType(),
        /* [63] */ ClientTriggerType(),
        /* [64] */ ClientTriggerType(),
        /* [65] */ ClientTriggerType(),
        /* [66] */ ClientTriggerType(),
        /* [67] */ ClientTriggerType(),
        /* [68] */ ClientTriggerType(),
        /* [69] */ ClientTriggerType(),
        /* [70] */ ClientTriggerType(),
        /* [71] */ ClientTriggerType(),
        /* [72] */ ClientTriggerType(),
        /* [73] */ ClientTriggerType(73, "proc", false),
        /* [74] */ ClientTriggerType(),
        /* [75] */ ClientTriggerType(),
        /* [76] */ ClientTriggerType(76, "clientscript", false),
    };

    // 0x1003b6500
    void ClientTriggerType::GetByID(unsigned int arg1) {
        uint32_t in_register_00000034;

        if (76 < (unsigned int)this) {
            LogAssert("id>=0 && id <ClientTriggerType::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/script/"
                      "ClientTriggerType.cpp",
                      105, "ClientTriggerType: Invalid ClientTriggerType ID requested");
        }
        (*((array<ClientTriggerType, 77ul>*)((unsigned long)this &
                                             4294967295)))[(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1)];
    }

} // namespace jag::game
