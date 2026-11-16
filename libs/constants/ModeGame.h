// libs/constants/ModeGame.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class ModeGame {
    public:
        ModeGame(unsigned int, char const*, char const*);
        void GetByID(unsigned int);
        static ModeGame const* /* 8 bytes */ RUNESCAPE; // = &enumArray
        static ModeGame const*                          /* 8 bytes */
            STELLARDAWN;       // = &enumArray[1] /* ModeGame(1, "stellardawn", "StellarDawn") */
        static ModeGame const* /* 8 bytes */
            ALTERNATEREALITY;  // = &enumArray[2] /* ModeGame(2, "alternatereality", "Alternate Reality") */
        static ModeGame const* /* 8 bytes */
            TRANSFORMERS;      // = &enumArray[3] /* ModeGame(3, "transformers", "Transformers") */
        static ModeGame const* /* 8 bytes */ SCRATCH; // = &enumArray[4] /* ModeGame(4, "scratch", "Scratch") */
        static ModeGame const*                        /* 8 bytes */
            OLDSCAPE; // = &enumArray[5] /* ModeGame(5, "oldscape", "Old School RuneScape") */
        static ModeGame /* 192 bytes */ enumArray[6]; // initialised in its definition

        // data members, from how the methods use this: 32 bytes
        EntityHighlight** field_0; // offset 0
        uint field_8;              // offset 8
        char _unknown_12[4];
        char* field_16; // offset 16
        char* field_24; // offset 24
    };

    // 0x100b89480, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ModeGame::ModeGame(unsigned int, char const*, char const*): jumps straight to the base-object constructor

    // 0x100b89630, 64 bytes, base-object constructor, inline, placed by class name
    // ModeGame::ModeGame(unsigned int, char const*, char const*)
    void ModeGame::ModeGame(uint param_1, char* param_2, char* param_3) {
        new (this)
            eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>(param_2, param_2);
        field_8 = param_1;
        field_16 = param_3;
        field_24 = param_2;
    }

} // namespace jag
