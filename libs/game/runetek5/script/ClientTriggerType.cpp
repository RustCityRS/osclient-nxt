// libs/game/runetek5/script/ClientTriggerType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ClientTriggerType.h"

namespace jag::game {
    // 0x100f382b0, 8 bytes, __data
    ClientTriggerType const* ClientTriggerType::OPWORLDMAPELEMENT1 =
        &enumArray[10] /* ClientTriggerType(10, "opworldmapelement1", false) */;

    // 0x100f382b8, 8 bytes, __data
    ClientTriggerType const* ClientTriggerType::OPWORLDMAPELEMENT2 =
        &enumArray[11] /* ClientTriggerType(11, "opworldmapelement2", false) */;

    // 0x100f382c0, 8 bytes, __data
    ClientTriggerType const* ClientTriggerType::OPWORLDMAPELEMENT3 =
        &enumArray[12] /* ClientTriggerType(12, "opworldmapelement3", false) */;

    // 0x100f382c8, 8 bytes, __data
    ClientTriggerType const* ClientTriggerType::OPWORLDMAPELEMENT4 =
        &enumArray[13] /* ClientTriggerType(13, "opworldmapelement4", false) */;

    // 0x100f382d0, 8 bytes, __data
    ClientTriggerType const* ClientTriggerType::OPWORLDMAPELEMENT5 =
        &enumArray[14] /* ClientTriggerType(14, "opworldmapelement5", false) */;

    // 0x100f382d8, 8 bytes, __data
    ClientTriggerType const* ClientTriggerType::WORLDMAPELEMENTMOUSEOVER =
        &enumArray[15] /* ClientTriggerType(15, "worldmapelementmouseover", true) */;

    // 0x100f382e0, 8 bytes, __data
    ClientTriggerType const* ClientTriggerType::WORLDMAPELEMENTMOUSELEAVE =
        &enumArray[16] /* ClientTriggerType(16, "worldmapelementmouseleave", true) */;

    // 0x100f382e8, 8 bytes, __data
    ClientTriggerType const* ClientTriggerType::WORLDMAPELEMENTMOUSEREPEAT =
        &enumArray[17] /* ClientTriggerType(17, "worldmapelementmouserepeat", true) */;

    // 0x100f382f0, 8 bytes, __data
    ClientTriggerType const* ClientTriggerType::VIDEO_END =
        &enumArray[18] /* ClientTriggerType(18, "video_end", false) */;

    // 0x100f382f8, 8 bytes, __data
    ClientTriggerType const* ClientTriggerType::JCOINS_UPDATED =
        &enumArray[19] /* ClientTriggerType(19, "jcoins_updated", false) */;

    // 0x100f38300, 8 bytes, __data
    ClientTriggerType const* ClientTriggerType::CUTSCENE_SUBTITLE =
        &enumArray[20] /* ClientTriggerType(20, "cutscene_subtitle", false) */;

    // 0x100f38308, 8 bytes, __data
    ClientTriggerType const* ClientTriggerType::LOYALTY_UPDATED =
        &enumArray[21] /* ClientTriggerType(21, "loyalty_updated", false) */;

    // 0x100f38310, 8 bytes, __data
    ClientTriggerType const* ClientTriggerType::PROCESS_NPC =
        &enumArray[22] /* ClientTriggerType(22, "process_npc", false) */;

    // 0x100f38318, 8 bytes, __data
    ClientTriggerType const* ClientTriggerType::PROCESS_PLAYER =
        &enumArray[23] /* ClientTriggerType(23, "process_player", false) */;

    // 0x100f38320, 8 bytes, __data
    ClientTriggerType const* ClientTriggerType::IF_PROCESS_ACTIVE_NPC =
        &enumArray[24] /* ClientTriggerType(24, "if_process_active_npc", false) */;

    // 0x100f38328, 8 bytes, __data
    ClientTriggerType const* ClientTriggerType::IF_PROCESS_ACTIVE_PLAYER =
        &enumArray[25] /* ClientTriggerType(25, "if_process_active_player", false) */;

    // 0x100f38330, 8 bytes, __data
    ClientTriggerType const* ClientTriggerType::IF_PROCESS_ACTIVE_LOC =
        &enumArray[26] /* ClientTriggerType(26, "if_process_active_loc", false) */;

    // 0x100f38338, 8 bytes, __data
    ClientTriggerType const* ClientTriggerType::IF_PROCESS_ACTIVE_OBJ =
        &enumArray[27] /* ClientTriggerType(27, "if_process_active_obj", false) */;

    // 0x100f38340, 8 bytes, __data
    ClientTriggerType const* ClientTriggerType::MINIMENU_EVENT =
        &enumArray[30] /* ClientTriggerType(30, "minimenu_event", false) */;

    // 0x100f38348, 8 bytes, __data
    ClientTriggerType const* ClientTriggerType::UPDATEOBJSTACK =
        &enumArray[45] /* ClientTriggerType(45, "updateobjstack", false) */;

    // 0x100f38350, 8 bytes, __data
    ClientTriggerType const* ClientTriggerType::UPDATEOBJCOUNT =
        &enumArray[46] /* ClientTriggerType(46, "updateobjcount", false) */;

    // 0x100f38358, 8 bytes, __data
    ClientTriggerType const* ClientTriggerType::PROC = &enumArray[73] /* ClientTriggerType(73, "proc", false) */;

    // 0x100f38360, 8 bytes, __data
    ClientTriggerType const* ClientTriggerType::CLIENTSCRIPT =
        &enumArray[76] /* ClientTriggerType(76, "clientscript", false) */;

    // 0x1039b45d8, 1232 bytes, __common; set at startup by ___cxx_global_var_init.1
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

    // 0x1003b6500, 64 bytes, placed by class name and debug map
    // ClientTriggerType::GetByID(unsigned int)
    void ClientTriggerType::GetByID(uint param_1) {
        if (76 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("id>=0 && id <ClientTriggerType::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/script/"
                      "ClientTriggerType.cpp",
                      105, "ClientTriggerType: Invalid ClientTriggerType ID requested");
        }
        std::array<ClientTriggerType, 77ul>::operator[]((ulong)param_1);
    }

    // 0x1003bb3e0, 1264 bytes, placed by the data it initialises
    // ___cxx_global_var_init.1
    void ___cxx_global_var_init_1() {
        new (&ClientTriggerType::enumArray) ClientTriggerType();
        new (&DAT_1039b45e8) ClientTriggerType();
        new (&DAT_1039b45f8) ClientTriggerType();
        new (&DAT_1039b4608) ClientTriggerType();
        new (&DAT_1039b4618) ClientTriggerType();
        new (&DAT_1039b4628) ClientTriggerType();
        new (&DAT_1039b4638) ClientTriggerType();
        new (&DAT_1039b4648) ClientTriggerType();
        new (&DAT_1039b4658) ClientTriggerType();
        new (&DAT_1039b4668) ClientTriggerType();
        new (&DAT_1039b4678) ClientTriggerType(10, "opworldmapelement1", false);
        new (&DAT_1039b4688) ClientTriggerType(11, "opworldmapelement2", false);
        new (&DAT_1039b4698) ClientTriggerType(12, "opworldmapelement3", false);
        new (&DAT_1039b46a8) ClientTriggerType(13, "opworldmapelement4", false);
        new (&DAT_1039b46b8) ClientTriggerType(14, "opworldmapelement5", false);
        new (&DAT_1039b46c8) ClientTriggerType(15, "worldmapelementmouseover", true);
        new (&DAT_1039b46d8) ClientTriggerType(16, "worldmapelementmouseleave", true);
        new (&DAT_1039b46e8) ClientTriggerType(17, "worldmapelementmouserepeat", true);
        new (&DAT_1039b46f8) ClientTriggerType(18, "video_end", false);
        new (&DAT_1039b4708) ClientTriggerType(19, "jcoins_updated", false);
        new (&DAT_1039b4718) ClientTriggerType(20, "cutscene_subtitle", false);
        new (&DAT_1039b4728) ClientTriggerType(21, "loyalty_updated", false);
        new (&DAT_1039b4738) ClientTriggerType(22, "process_npc", false);
        new (&DAT_1039b4748) ClientTriggerType(23, "process_player", false);
        new (&DAT_1039b4758) ClientTriggerType(24, "if_process_active_npc", false);
        new (&DAT_1039b4768) ClientTriggerType(25, "if_process_active_player", false);
        new (&DAT_1039b4778) ClientTriggerType(26, "if_process_active_loc", false);
        new (&DAT_1039b4788) ClientTriggerType(27, "if_process_active_obj", false);
        new (&DAT_1039b4798) ClientTriggerType();
        new (&DAT_1039b47a8) ClientTriggerType();
        new (&DAT_1039b47b8) ClientTriggerType(30, "minimenu_event", false);
        new (&DAT_1039b47c8) ClientTriggerType();
        new (&DAT_1039b47d8) ClientTriggerType();
        new (&DAT_1039b47e8) ClientTriggerType();
        new (&DAT_1039b47f8) ClientTriggerType();
        new (&DAT_1039b4808) ClientTriggerType();
        new (&DAT_1039b4818) ClientTriggerType();
        new (&DAT_1039b4828) ClientTriggerType();
        new (&DAT_1039b4838) ClientTriggerType();
        new (&DAT_1039b4848) ClientTriggerType();
        new (&DAT_1039b4858) ClientTriggerType();
        new (&DAT_1039b4868) ClientTriggerType();
        new (&DAT_1039b4878) ClientTriggerType();
        new (&DAT_1039b4888) ClientTriggerType();
        new (&DAT_1039b4898) ClientTriggerType();
        new (&DAT_1039b48a8) ClientTriggerType(45, "updateobjstack", false);
        new (&DAT_1039b48b8) ClientTriggerType(46, "updateobjcount", false);
        new (&DAT_1039b48c8) ClientTriggerType();
        new (&DAT_1039b48d8) ClientTriggerType();
        new (&DAT_1039b48e8) ClientTriggerType();
        new (&DAT_1039b48f8) ClientTriggerType();
        new (&DAT_1039b4908) ClientTriggerType();
        new (&DAT_1039b4918) ClientTriggerType();
        new (&DAT_1039b4928) ClientTriggerType();
        new (&DAT_1039b4938) ClientTriggerType();
        new (&DAT_1039b4948) ClientTriggerType();
        new (&DAT_1039b4958) ClientTriggerType();
        new (&DAT_1039b4968) ClientTriggerType();
        new (&DAT_1039b4978) ClientTriggerType();
        new (&DAT_1039b4988) ClientTriggerType();
        new (&DAT_1039b4998) ClientTriggerType();
        new (&DAT_1039b49a8) ClientTriggerType();
        new (&DAT_1039b49b8) ClientTriggerType();
        new (&DAT_1039b49c8) ClientTriggerType();
        new (&DAT_1039b49d8) ClientTriggerType();
        new (&DAT_1039b49e8) ClientTriggerType();
        new (&DAT_1039b49f8) ClientTriggerType();
        new (&DAT_1039b4a08) ClientTriggerType();
        new (&DAT_1039b4a18) ClientTriggerType();
        new (&DAT_1039b4a28) ClientTriggerType();
        new (&DAT_1039b4a38) ClientTriggerType();
        new (&DAT_1039b4a48) ClientTriggerType();
        new (&DAT_1039b4a58) ClientTriggerType();
        new (&DAT_1039b4a68) ClientTriggerType(73, "proc", false);
        new (&DAT_1039b4a78) ClientTriggerType();
        new (&DAT_1039b4a88) ClientTriggerType();
        new (&DAT_1039b4a98) ClientTriggerType(76, "clientscript", false);
    }

} // namespace jag::game
