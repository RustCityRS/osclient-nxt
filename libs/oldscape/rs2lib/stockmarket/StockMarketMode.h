// libs/oldscape/rs2lib/stockmarket/StockMarketMode.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::rs2lib {
    class StockMarketMode {
    public:
        ~StockMarketMode();
        StockMarketMode(int arg1, eastl::string str, const ModeGame* modeGame, constants::ModeVariant modeVariant,
                        bool arg5, bool arg6);
        static StockMarketMode const* NONE;                  // = &enumArray
        static StockMarketMode const* RUNESCAPE;             // = &enumArray[1]
        static StockMarketMode const* RUNESCAPE_BETA0;       // = &enumArray[2]
        static StockMarketMode const* OLDSCHOOL;             // = &enumArray[3]
        static StockMarketMode const* OLDSCHOOL_DEADMAN;     // = &enumArray[4]
        static StockMarketMode const* OLDSCHOOL_SEASONAL;    // = &enumArray[5]
        static StockMarketMode const* OLDSCHOOL_ALTSEASONAL; // = &enumArray[6]
        static StockMarketMode const* OLDSCHOOL_TOURNAMENT;  // = &enumArray[7]
        static StockMarketMode const* OLDSCHOOL_PVPARENA;    // = &enumArray[8]
        static StockMarketMode const* OLDSCHOOL_SPEEDRUN;    // = &enumArray[9]
        static StockMarketMode const* OLDSCHOOL_NOSAVEMODE;  // = &enumArray[10]
        static StockMarketMode enumArray[11];                // initialised in its definition

    private:
        uint8_t _unknown_0[32];
        ModeGame* field_32;
        ModeVariant field_40;
        bool field_44;
        bool field_45;
        uint8_t _unknown_46[2];
        int field_48;
        uint8_t _unknown_52[4];
    };

    // 0x1002163f0
    StockMarketMode::StockMarketMode(int arg1, eastl::string str, const ModeGame* modeGame,
                                     constants::ModeVariant modeVariant, bool arg5, bool arg6)
        : eastl::string(*str), field_32(modeGame), field_40(modeVariant), field_44(arg5), field_45(arg6),
          field_48(arg1) {}

} // namespace jag::oldscape::rs2lib
