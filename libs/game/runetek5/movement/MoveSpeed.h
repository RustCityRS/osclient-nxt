// libs/game/runetek5/movement/MoveSpeed.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class MoveSpeed {
    public:
        MoveSpeed(int arg1, const char* str);
        void GetByID(int arg1);
        static MoveSpeed const* STATIONARY; // = &enumArray
        static MoveSpeed const* CRAWL;      // = &enumArray[1] /* MoveSpeed(0, "crawl") */
        static MoveSpeed const* WALK;       // = &enumArray[2] /* MoveSpeed(1, "walk") */
        static MoveSpeed const* RUN;        // = &enumArray[3] /* MoveSpeed(2, "run") */
        static MoveSpeed const* INSTANT;    // = &enumArray[4] /* MoveSpeed(3, "instant") */
        static MoveSpeed enumArray[5];      // initialised in its definition
    };

    // 0x1004a2ca0
    MoveSpeed::MoveSpeed(int arg1, const char* str) {
        new (this) eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>(str);
        field_8 = arg1;
    }

} // namespace jag
