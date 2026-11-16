// libs/game/shared/framework/chat/QuickChatDynamicCommand.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class QuickChatDynamicCommand {
    public:
        QuickChatDynamicCommand(int, char const*, int, int, int);
        QuickChatDynamicCommand();
        long GetByID(int);
        static QuickChatDynamicCommand const* /* 8 bytes */ LISTDIALOG; // = &enumArray
        static QuickChatDynamicCommand const*                           /* 8 bytes */
            OBJDIALOG;                        // = &enumArray[1] /* QuickChatDynamicCommand(1, "OBJDIALOG", 2, 2, 0) */
        static QuickChatDynamicCommand const* /* 8 bytes */
            COUNTDIALOG; // = &enumArray[2] /* QuickChatDynamicCommand(2, "COUNTDIALOG", 4, 4, 0) */
        static QuickChatDynamicCommand const* /* 8 bytes */
            STAT_BASE;                        // = &enumArray[4] /* QuickChatDynamicCommand(4, "STAT_BASE", 1, 1, 1) */
        static QuickChatDynamicCommand const* /* 8 bytes */
            ENUM_STRING; // = &enumArray[6] /* QuickChatDynamicCommand(6, "ENUM_STRING", 0, 4, 2) */
        static QuickChatDynamicCommand const* /* 8 bytes */
            ENUM_STRING_CLAN; // = &enumArray[7] /* QuickChatDynamicCommand(7, "ENUM_STRING_CLAN", 0, 1, 1) */
        static QuickChatDynamicCommand const* /* 8 bytes */
            TOSTRING_VARP; // = &enumArray[8] /* QuickChatDynamicCommand(8, "TOSTRING_VARP", 0, 4, 1) */
        static QuickChatDynamicCommand const* /* 8 bytes */
            TOSTRING_VARBIT; // = &enumArray[9] /* QuickChatDynamicCommand(9, "TOSTRING_VARBIT", 0, 4, 1) */
        static QuickChatDynamicCommand const* /* 8 bytes */
            OBJTRADEDIALOG; // = &enumArray[10] /* QuickChatDynamicCommand(10, "OBJTRADEDIALOG", 2, 2, 0) */
        static QuickChatDynamicCommand const* /* 8 bytes */
            ENUM_STRING_STATBASE; // = &enumArray[11] /* QuickChatDynamicCommand(11, "ENUM_STRING_STATBASE", 0, 1, 2) */
        static QuickChatDynamicCommand const* /* 8 bytes */
            ACC_GETCOUNT_WORLD; // = &enumArray[12] /* QuickChatDynamicCommand(12, "ACC_GETCOUNT_WORLD", 0, 1, 0) */
        static QuickChatDynamicCommand const* /* 8 bytes */
            ACC_GETMEANCOMBATLEVEL; // = &enumArray[13] /* QuickChatDynamicCommand(13, "ACC_GETMEANCOMBATLEVEL", 0, 1, 0) */
        static QuickChatDynamicCommand const* /* 8 bytes */
            TOSTRING_SHARED; // = &enumArray[14] /* QuickChatDynamicCommand(14, "TOSTRING_SHARED", 0, 4, 1) */
        static QuickChatDynamicCommand const* /* 8 bytes */
            ACTIVECOMBATLEVEL; // = &enumArray[15] /* QuickChatDynamicCommand(15, "ACTIVECOMBATLEVEL", 0, 1, 0) */
        static QuickChatDynamicCommand const* /* 8 bytes */
            ENUM_STRING_VARBIT; // = &enumArray[16] /* QuickChatDynamicCommand(16, "ENUM_STRING_VARBIT", 0, 4, 2) */
        static QuickChatDynamicCommand /* 408 bytes */ enumArray[17]; // initialised in its definition

        // data members, from how the methods use this: 28 bytes
        EntityHighlight** field_0; // offset 0
        int field_8;               // offset 8
        int field_12;              // offset 12
        int field_16;              // offset 16
        int field_20;              // offset 20
        char _unknown_24[4];
    };

    // 0x1006e17a0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // QuickChatDynamicCommand::QuickChatDynamicCommand(int, char const*, int, int, int): jumps straight to the base-object constructor

    // 0x1006e17b0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // QuickChatDynamicCommand::QuickChatDynamicCommand(): jumps straight to the base-object constructor

    // 0x1006e8fe0, 80 bytes, base-object constructor, inline, placed by class name
    // QuickChatDynamicCommand::QuickChatDynamicCommand(int, char const*, int, int, int)
    void QuickChatDynamicCommand::QuickChatDynamicCommand(int param_1, char* param_2, int param_3, int param_4,
                                                          int param_5) {
        new (this)
            eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>(param_2, param_2);
        field_8 = param_1;
        field_12 = param_3;
        field_16 = param_4;
        field_20 = param_5;
    }

    // 0x1006e9030, 48 bytes, base-object constructor, inline, placed by class name
    // QuickChatDynamicCommand::QuickChatDynamicCommand()
    void QuickChatDynamicCommand::QuickChatDynamicCommand() {
        BucketAllocatorEASTL* in_RDX;

        new (this) eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>(0, in_RDX);
        field_8 = -1;
        field_12 = 0;
        field_16 = 0;
        field_20 = 0;
    }

} // namespace jag
