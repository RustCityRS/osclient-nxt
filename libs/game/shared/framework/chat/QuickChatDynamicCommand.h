// libs/game/shared/framework/chat/QuickChatDynamicCommand.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class QuickChatDynamicCommand {
    public:
        QuickChatDynamicCommand(int arg1, const char* str, int arg3, int arg4, int arg5);
        QuickChatDynamicCommand();
        long GetByID(int arg1);
        static QuickChatDynamicCommand const* LISTDIALOG; // = &enumArray
        static QuickChatDynamicCommand const*
            OBJDIALOG; // = &enumArray[1] /* QuickChatDynamicCommand(1, "OBJDIALOG", 2, 2, 0) */
        static QuickChatDynamicCommand const*
            COUNTDIALOG; // = &enumArray[2] /* QuickChatDynamicCommand(2, "COUNTDIALOG", 4, 4, 0) */
        static QuickChatDynamicCommand const*
            STAT_BASE; // = &enumArray[4] /* QuickChatDynamicCommand(4, "STAT_BASE", 1, 1, 1) */
        static QuickChatDynamicCommand const*
            ENUM_STRING; // = &enumArray[6] /* QuickChatDynamicCommand(6, "ENUM_STRING", 0, 4, 2) */
        static QuickChatDynamicCommand const*
            ENUM_STRING_CLAN; // = &enumArray[7] /* QuickChatDynamicCommand(7, "ENUM_STRING_CLAN", 0, 1, 1) */
        static QuickChatDynamicCommand const*
            TOSTRING_VARP; // = &enumArray[8] /* QuickChatDynamicCommand(8, "TOSTRING_VARP", 0, 4, 1) */
        static QuickChatDynamicCommand const*
            TOSTRING_VARBIT; // = &enumArray[9] /* QuickChatDynamicCommand(9, "TOSTRING_VARBIT", 0, 4, 1) */
        static QuickChatDynamicCommand const*
            OBJTRADEDIALOG; // = &enumArray[10] /* QuickChatDynamicCommand(10, "OBJTRADEDIALOG", 2, 2, 0) */
        static QuickChatDynamicCommand const*
            ENUM_STRING_STATBASE; // = &enumArray[11] /* QuickChatDynamicCommand(11, "ENUM_STRING_STATBASE", 0, 1, 2) */
        static QuickChatDynamicCommand const*
            ACC_GETCOUNT_WORLD; // = &enumArray[12] /* QuickChatDynamicCommand(12, "ACC_GETCOUNT_WORLD", 0, 1, 0) */
        static QuickChatDynamicCommand const*
            ACC_GETMEANCOMBATLEVEL; // = &enumArray[13] /* QuickChatDynamicCommand(13, "ACC_GETMEANCOMBATLEVEL", 0, 1, 0) */
        static QuickChatDynamicCommand const*
            TOSTRING_SHARED; // = &enumArray[14] /* QuickChatDynamicCommand(14, "TOSTRING_SHARED", 0, 4, 1) */
        static QuickChatDynamicCommand const*
            ACTIVECOMBATLEVEL; // = &enumArray[15] /* QuickChatDynamicCommand(15, "ACTIVECOMBATLEVEL", 0, 1, 0) */
        static QuickChatDynamicCommand const*
            ENUM_STRING_VARBIT; // = &enumArray[16] /* QuickChatDynamicCommand(16, "ENUM_STRING_VARBIT", 0, 4, 2) */
        static QuickChatDynamicCommand enumArray[17]; // initialised in its definition

    private:
        PlayerDataComparator<oldscape::social::FriendChatUser>* field_0;
        int field_8;
        int field_12;
        int field_16;
        int field_20;
        uint8_t _unknown_24[4];
    };

    // 0x1006e8fe0
    QuickChatDynamicCommand::QuickChatDynamicCommand(int arg1, const char* str, int arg3, int arg4, int arg5) {
        new (this) eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>(str);
        field_8 = arg1;
        field_12 = arg3;
        field_16 = arg4;
        field_20 = arg5;
    }

    // 0x1006e9030
    QuickChatDynamicCommand::QuickChatDynamicCommand() {
        new (this) eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>(nullptr);
        field_8 = -1;
        field_12 = 0;
        field_16 = 0;
        field_20 = 0;
    }

} // namespace jag
