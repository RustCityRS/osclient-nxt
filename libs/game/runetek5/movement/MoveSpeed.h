// libs/game/runetek5/movement/MoveSpeed.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class MoveSpeed {
    public:
        MoveSpeed(int, char const*);
        void GetByID(int);
        static MoveSpeed const* /* 8 bytes */ STATIONARY; // = &enumArray
        static MoveSpeed const* /* 8 bytes */ CRAWL;      // = &enumArray[1] /* MoveSpeed(0, "crawl") */
        static MoveSpeed const* /* 8 bytes */ WALK;       // = &enumArray[2] /* MoveSpeed(1, "walk") */
        static MoveSpeed const* /* 8 bytes */ RUN;        // = &enumArray[3] /* MoveSpeed(2, "run") */
        static MoveSpeed const* /* 8 bytes */ INSTANT;    // = &enumArray[4] /* MoveSpeed(3, "instant") */
        static MoveSpeed /* 80 bytes */ enumArray[5];     // initialised in its definition
    };

    // 0x1004a1f80, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // MoveSpeed::MoveSpeed(int, char const*): jumps straight to the base-object constructor

    // 0x1004a2ca0, 32 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MoveSpeed::MoveSpeed(int, char const*)
    /* game::VarLifetime::VarLifetime(unsigned int, char const*) */

    void game::VarLifetime::VarLifetime(uint param_1, char* param_2) {
        new (this)
            eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>(param_2, param_2);
        field_8 = param_1;
    }

} // namespace jag
