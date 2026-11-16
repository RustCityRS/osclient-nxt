// libs/game/shared/framework/chat/QuickChatDynamicCommand.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.shared

#include "QuickChatDynamicCommand.h"

namespace jag {
    // 0x100f3f0b0
    QuickChatDynamicCommand const* QuickChatDynamicCommand::LISTDIALOG = &enumArray;

    // 0x100f3f0b8
    QuickChatDynamicCommand const* QuickChatDynamicCommand::OBJDIALOG =
        &enumArray[1] /* QuickChatDynamicCommand(1, "OBJDIALOG", 2, 2, 0) */;

    // 0x100f3f0c0
    QuickChatDynamicCommand const* QuickChatDynamicCommand::COUNTDIALOG =
        &enumArray[2] /* QuickChatDynamicCommand(2, "COUNTDIALOG", 4, 4, 0) */;

    // 0x100f3f0c8
    QuickChatDynamicCommand const* QuickChatDynamicCommand::STAT_BASE =
        &enumArray[4] /* QuickChatDynamicCommand(4, "STAT_BASE", 1, 1, 1) */;

    // 0x100f3f0d0
    QuickChatDynamicCommand const* QuickChatDynamicCommand::ENUM_STRING =
        &enumArray[6] /* QuickChatDynamicCommand(6, "ENUM_STRING", 0, 4, 2) */;

    // 0x100f3f0d8
    QuickChatDynamicCommand const* QuickChatDynamicCommand::ENUM_STRING_CLAN =
        &enumArray[7] /* QuickChatDynamicCommand(7, "ENUM_STRING_CLAN", 0, 1, 1) */;

    // 0x100f3f0e0
    QuickChatDynamicCommand const* QuickChatDynamicCommand::TOSTRING_VARP =
        &enumArray[8] /* QuickChatDynamicCommand(8, "TOSTRING_VARP", 0, 4, 1) */;

    // 0x100f3f0e8
    QuickChatDynamicCommand const* QuickChatDynamicCommand::TOSTRING_VARBIT =
        &enumArray[9] /* QuickChatDynamicCommand(9, "TOSTRING_VARBIT", 0, 4, 1) */;

    // 0x100f3f0f0
    QuickChatDynamicCommand const* QuickChatDynamicCommand::OBJTRADEDIALOG =
        &enumArray[10] /* QuickChatDynamicCommand(10, "OBJTRADEDIALOG", 2, 2, 0) */;

    // 0x100f3f0f8
    QuickChatDynamicCommand const* QuickChatDynamicCommand::ENUM_STRING_STATBASE =
        &enumArray[11] /* QuickChatDynamicCommand(11, "ENUM_STRING_STATBASE", 0, 1, 2) */;

    // 0x100f3f100
    QuickChatDynamicCommand const* QuickChatDynamicCommand::ACC_GETCOUNT_WORLD =
        &enumArray[12] /* QuickChatDynamicCommand(12, "ACC_GETCOUNT_WORLD", 0, 1, 0) */;

    // 0x100f3f108
    QuickChatDynamicCommand const* QuickChatDynamicCommand::ACC_GETMEANCOMBATLEVEL =
        &enumArray[13] /* QuickChatDynamicCommand(13, "ACC_GETMEANCOMBATLEVEL", 0, 1, 0) */;

    // 0x100f3f110
    QuickChatDynamicCommand const* QuickChatDynamicCommand::TOSTRING_SHARED =
        &enumArray[14] /* QuickChatDynamicCommand(14, "TOSTRING_SHARED", 0, 4, 1) */;

    // 0x100f3f118
    QuickChatDynamicCommand const* QuickChatDynamicCommand::ACTIVECOMBATLEVEL =
        &enumArray[15] /* QuickChatDynamicCommand(15, "ACTIVECOMBATLEVEL", 0, 1, 0) */;

    // 0x100f3f120
    QuickChatDynamicCommand const* QuickChatDynamicCommand::ENUM_STRING_VARBIT =
        &enumArray[16] /* QuickChatDynamicCommand(16, "ENUM_STRING_VARBIT", 0, 4, 2) */;

    // 0x1039bced8, set at startup by ___cxx_global_var_init.85
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

    // 0x1006e17c0
    long QuickChatDynamicCommand::GetByID(int arg1) {
        uint32_t in_register_00000034;

        if (16 < (unsigned int)this) {
            LogAssert("id >= 0 && id < QuickChatDynamicCommand::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/framework/"
                      "chat/QuickChatDynamicCommand.cpp",
                      70, "QuickChatDynamicCommand: Invalid QuickChatDynamicCommand ID requested: %d",
                      (unsigned long)this & 4294967295);
        }
        long lVar1 = (*((array<QuickChatDynamicCommand, 17ul>*)(long)(int)(unsigned int)this))[(
            ((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1)];
        if (*(int*)(lVar1 + 8) == -1) {
            LogAssert("enumArray[id].id != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/framework/"
                      "chat/QuickChatDynamicCommand.cpp",
                      71, nullptr);
        }
        return lVar1;
    }

} // namespace jag
