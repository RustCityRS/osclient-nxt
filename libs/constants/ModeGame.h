// libs/constants/ModeGame.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class ModeGame {
    public:
        ModeGame(unsigned int arg1, const char* str1, const char* str2);
        ModeGame* GetByID(unsigned int arg1);
        static ModeGame const* RUNESCAPE;   // = &enumArray
        static ModeGame const* STELLARDAWN; // = &enumArray[1] /* ModeGame(1, "stellardawn", "StellarDawn") */
        static ModeGame const*
            ALTERNATEREALITY; // = &enumArray[2] /* ModeGame(2, "alternatereality", "Alternate Reality") */
        static ModeGame const* TRANSFORMERS; // = &enumArray[3] /* ModeGame(3, "transformers", "Transformers") */
        static ModeGame const* SCRATCH;      // = &enumArray[4] /* ModeGame(4, "scratch", "Scratch") */
        static ModeGame const* OLDSCAPE;     // = &enumArray[5] /* ModeGame(5, "oldscape", "Old School RuneScape") */
        static ModeGame enumArray[6];        // initialised in its definition

    private:
        PlayerDataComparator<oldscape::social::FriendChatUser>* field_0;
        unsigned int field_8;
        uint8_t _unknown_12[4];
        char* field_16;
        char* field_24;
    };

    // 0x100b89630
    ModeGame::ModeGame(unsigned int arg1, const char* str1, const char* str2) {
        new (this) eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>(str1);
        field_8 = arg1;
        field_16 = str2;
        field_24 = str1;
    }

} // namespace jag
