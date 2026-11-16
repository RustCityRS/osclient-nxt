// libs/oldscape/rs2lib/stockmarket/StockMarketMode.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::rs2lib {
    class StockMarketMode {
    public:
        ~StockMarketMode();
        StockMarketMode(int, eastl::string, ModeGame const*, constants::ModeVariant, bool, bool);
        static StockMarketMode const* /* 8 bytes */ NONE;                  // = &enumArray
        static StockMarketMode const* /* 8 bytes */ RUNESCAPE;             // = &enumArray[1]
        static StockMarketMode const* /* 8 bytes */ RUNESCAPE_BETA0;       // = &enumArray[2]
        static StockMarketMode const* /* 8 bytes */ OLDSCHOOL;             // = &enumArray[3]
        static StockMarketMode const* /* 8 bytes */ OLDSCHOOL_DEADMAN;     // = &enumArray[4]
        static StockMarketMode const* /* 8 bytes */ OLDSCHOOL_SEASONAL;    // = &enumArray[5]
        static StockMarketMode const* /* 8 bytes */ OLDSCHOOL_ALTSEASONAL; // = &enumArray[6]
        static StockMarketMode const* /* 8 bytes */ OLDSCHOOL_TOURNAMENT;  // = &enumArray[7]
        static StockMarketMode const* /* 8 bytes */ OLDSCHOOL_PVPARENA;    // = &enumArray[8]
        static StockMarketMode const* /* 8 bytes */ OLDSCHOOL_SPEEDRUN;    // = &enumArray[9]
        static StockMarketMode const* /* 8 bytes */ OLDSCHOOL_NOSAVEMODE;  // = &enumArray[10]
        static StockMarketMode /* 616 bytes */ enumArray[11];              // initialised in its definition

        // data members, from how the methods use this: 56 bytes
        char _unknown_0[32];
        undefined8 field_32; // offset 32
        undefined4 field_40; // offset 40
        undefined1 field_44; // offset 44
        undefined1 field_45; // offset 45
        char _unknown_46[2];
        undefined4 field_48; // offset 48
        char _unknown_52[4];
    };

    // 0x100207590, 32 bytes, complete-object constructor, inline, placed by class name and debug map
    // StockMarketMode::StockMarketMode(int, eastl::string, ModeGame const*, constants::ModeVariant, bool, bool)
    void StockMarketMode::StockMarketMode() {
        StockMarketMode();
    }

    // 0x1002163f0, 80 bytes, base-object constructor, inline, placed by class name
    // StockMarketMode::StockMarketMode(int, eastl::string, ModeGame const*, constants::ModeVariant, bool, bool)
    void StockMarketMode::StockMarketMode(undefined4 param_1, basic_string* param_3, undefined8 param_4,
                                          undefined4 param_5, undefined1 param_6, undefined1 param_7) {
        new (this) eastl::string(param_3);
        field_32 = param_4;
        field_40 = param_5;
        field_44 = param_6;
        field_45 = param_7;
        field_48 = param_1;
    }

} // namespace jag::oldscape::rs2lib
