// libs/game/shared/framework/chat/QuickChatDynamicCommand.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.shared

#include "QuickChatDynamicCommand.h"

namespace jag {
    // 0x100f3f0b0, 8 bytes, __data
    QuickChatDynamicCommand const* QuickChatDynamicCommand::LISTDIALOG = &enumArray;

    // 0x100f3f0b8, 8 bytes, __data
    QuickChatDynamicCommand const* QuickChatDynamicCommand::OBJDIALOG =
        &enumArray[1] /* QuickChatDynamicCommand(1, "OBJDIALOG", 2, 2, 0) */;

    // 0x100f3f0c0, 8 bytes, __data
    QuickChatDynamicCommand const* QuickChatDynamicCommand::COUNTDIALOG =
        &enumArray[2] /* QuickChatDynamicCommand(2, "COUNTDIALOG", 4, 4, 0) */;

    // 0x100f3f0c8, 8 bytes, __data
    QuickChatDynamicCommand const* QuickChatDynamicCommand::STAT_BASE =
        &enumArray[4] /* QuickChatDynamicCommand(4, "STAT_BASE", 1, 1, 1) */;

    // 0x100f3f0d0, 8 bytes, __data
    QuickChatDynamicCommand const* QuickChatDynamicCommand::ENUM_STRING =
        &enumArray[6] /* QuickChatDynamicCommand(6, "ENUM_STRING", 0, 4, 2) */;

    // 0x100f3f0d8, 8 bytes, __data
    QuickChatDynamicCommand const* QuickChatDynamicCommand::ENUM_STRING_CLAN =
        &enumArray[7] /* QuickChatDynamicCommand(7, "ENUM_STRING_CLAN", 0, 1, 1) */;

    // 0x100f3f0e0, 8 bytes, __data
    QuickChatDynamicCommand const* QuickChatDynamicCommand::TOSTRING_VARP =
        &enumArray[8] /* QuickChatDynamicCommand(8, "TOSTRING_VARP", 0, 4, 1) */;

    // 0x100f3f0e8, 8 bytes, __data
    QuickChatDynamicCommand const* QuickChatDynamicCommand::TOSTRING_VARBIT =
        &enumArray[9] /* QuickChatDynamicCommand(9, "TOSTRING_VARBIT", 0, 4, 1) */;

    // 0x100f3f0f0, 8 bytes, __data
    QuickChatDynamicCommand const* QuickChatDynamicCommand::OBJTRADEDIALOG =
        &enumArray[10] /* QuickChatDynamicCommand(10, "OBJTRADEDIALOG", 2, 2, 0) */;

    // 0x100f3f0f8, 8 bytes, __data
    QuickChatDynamicCommand const* QuickChatDynamicCommand::ENUM_STRING_STATBASE =
        &enumArray[11] /* QuickChatDynamicCommand(11, "ENUM_STRING_STATBASE", 0, 1, 2) */;

    // 0x100f3f100, 8 bytes, __data
    QuickChatDynamicCommand const* QuickChatDynamicCommand::ACC_GETCOUNT_WORLD =
        &enumArray[12] /* QuickChatDynamicCommand(12, "ACC_GETCOUNT_WORLD", 0, 1, 0) */;

    // 0x100f3f108, 8 bytes, __data
    QuickChatDynamicCommand const* QuickChatDynamicCommand::ACC_GETMEANCOMBATLEVEL =
        &enumArray[13] /* QuickChatDynamicCommand(13, "ACC_GETMEANCOMBATLEVEL", 0, 1, 0) */;

    // 0x100f3f110, 8 bytes, __data
    QuickChatDynamicCommand const* QuickChatDynamicCommand::TOSTRING_SHARED =
        &enumArray[14] /* QuickChatDynamicCommand(14, "TOSTRING_SHARED", 0, 4, 1) */;

    // 0x100f3f118, 8 bytes, __data
    QuickChatDynamicCommand const* QuickChatDynamicCommand::ACTIVECOMBATLEVEL =
        &enumArray[15] /* QuickChatDynamicCommand(15, "ACTIVECOMBATLEVEL", 0, 1, 0) */;

    // 0x100f3f120, 8 bytes, __data
    QuickChatDynamicCommand const* QuickChatDynamicCommand::ENUM_STRING_VARBIT =
        &enumArray[16] /* QuickChatDynamicCommand(16, "ENUM_STRING_VARBIT", 0, 4, 2) */;

    // 0x1039bced8, 408 bytes, __common; set at startup by ___cxx_global_var_init.85
    QuickChatDynamicCommand QuickChatDynamicCommand::enumArray[17] = {
        /* [0] */ QuickChatDynamicCommand(0, "LISTDIALOG", 2, 2, 1),
        /* [1] */ QuickChatDynamicCommand(1, "OBJDIALOG", 2, 2, 0),
        /* [2] */ QuickChatDynamicCommand(2, "COUNTDIALOG", 4, 4, 0),
        /* [3] */ QuickChatDynamicCommand(),
        /* [4] */ QuickChatDynamicCommand(4, "STAT_BASE", 1, 1, 1),
        /* [5] */ QuickChatDynamicCommand(),
        /* [6] */ QuickChatDynamicCommand(6, "ENUM_STRING", 0, 4, 2),
        /* [7] */ QuickChatDynamicCommand(7, "ENUM_STRING_CLAN", 0, 1, 1),
        /* [8] */ QuickChatDynamicCommand(8, "TOSTRING_VARP", 0, 4, 1),
        /* [9] */ QuickChatDynamicCommand(9, "TOSTRING_VARBIT", 0, 4, 1),
        /* [10] */ QuickChatDynamicCommand(10, "OBJTRADEDIALOG", 2, 2, 0),
        /* [11] */ QuickChatDynamicCommand(11, "ENUM_STRING_STATBASE", 0, 1, 2),
        /* [12] */ QuickChatDynamicCommand(12, "ACC_GETCOUNT_WORLD", 0, 1, 0),
        /* [13] */ QuickChatDynamicCommand(13, "ACC_GETMEANCOMBATLEVEL", 0, 1, 0),
        /* [14] */ QuickChatDynamicCommand(14, "TOSTRING_SHARED", 0, 4, 1),
        /* [15] */ QuickChatDynamicCommand(15, "ACTIVECOMBATLEVEL", 0, 1, 0),
        /* [16] */ QuickChatDynamicCommand(16, "ENUM_STRING_VARBIT", 0, 4, 2),
    };

    // 0x1006e17c0, 112 bytes, placed by class name and debug map
    // QuickChatDynamicCommand::GetByID(int)
    long QuickChatDynamicCommand::GetByID(int param_1) {
        long lVar1;

        if (16 < (uint)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("id >= 0 && id < QuickChatDynamicCommand::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/framework/"
                      "chat/QuickChatDynamicCommand.cpp",
                      70, "QuickChatDynamicCommand: Invalid QuickChatDynamicCommand ID requested: %d", param_1);
        }
        lVar1 = std::array<QuickChatDynamicCommand, 17ul>::operator[]((long)param_1);
        if (*(int*)(lVar1 + 8) == -1) {
            /* WARNING: Subroutine does not return */
            LogAssert("enumArray[id].id != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/framework/"
                      "chat/QuickChatDynamicCommand.cpp",
                      71, (char*)0);
        }
        return lVar1;
    }

    // 0x10071fcb0, 608 bytes, placed by the data it initialises
    // ___cxx_global_var_init.85
    void ___cxx_global_var_init_85() {
        new (&QuickChatDynamicCommand::enumArray) QuickChatDynamicCommand(0, "LISTDIALOG", 2, 2, 1);
        new (&DAT_1039bcef0) QuickChatDynamicCommand(1, "OBJDIALOG", 2, 2, 0);
        new (&DAT_1039bcf08) QuickChatDynamicCommand(2, "COUNTDIALOG", 4, 4, 0);
        new (&DAT_1039bcf20) QuickChatDynamicCommand();
        new (&DAT_1039bcf38) QuickChatDynamicCommand(4, "STAT_BASE", 1, 1, 1);
        new (&DAT_1039bcf50) QuickChatDynamicCommand();
        new (&DAT_1039bcf68) QuickChatDynamicCommand(6, "ENUM_STRING", 0, 4, 2);
        new (&DAT_1039bcf80) QuickChatDynamicCommand(7, "ENUM_STRING_CLAN", 0, 1, 1);
        new (&DAT_1039bcf98) QuickChatDynamicCommand(8, "TOSTRING_VARP", 0, 4, 1);
        new (&DAT_1039bcfb0) QuickChatDynamicCommand(9, "TOSTRING_VARBIT", 0, 4, 1);
        new (&DAT_1039bcfc8) QuickChatDynamicCommand(10, "OBJTRADEDIALOG", 2, 2, 0);
        new (&DAT_1039bcfe0) QuickChatDynamicCommand(11, "ENUM_STRING_STATBASE", 0, 1, 2);
        new (&DAT_1039bcff8) QuickChatDynamicCommand(12, "ACC_GETCOUNT_WORLD", 0, 1, 0);
        new (&DAT_1039bd010) QuickChatDynamicCommand(13, "ACC_GETMEANCOMBATLEVEL", 0, 1, 0);
        new (&DAT_1039bd028) QuickChatDynamicCommand(14, "TOSTRING_SHARED", 0, 4, 1);
        new (&DAT_1039bd040) QuickChatDynamicCommand(15, "ACTIVECOMBATLEVEL", 0, 1, 0);
        new (&DAT_1039bd058) QuickChatDynamicCommand(16, "ENUM_STRING_VARBIT", 0, 4, 2);
    }

} // namespace jag
