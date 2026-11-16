// libs/game/runetek5/script/GoSubFrame.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class GoSubFrame {
    public:
        GoSubFrame();
        ~GoSubFrame();

        // data members, from how the methods use this: 80 bytes
        char _unknown_0[16];
        undefined4 field_16; // offset 16
        char _unknown_20[60];
    };

    // 0x1003b7b40, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // GoSubFrame::GoSubFrame(): jumps straight to the base-object constructor

    // 0x1003b7b50, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // GoSubFrame::~GoSubFrame(): jumps straight to the base-object destructor

    // 0x1003b7b60, 128 bytes, base-object constructor, inline, placed by class name and debug map
    // GoSubFrame::GoSubFrame()
    void GoSubFrame::GoSubFrame() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        field_16 = 4294967295;
        eastl::vector<int, BucketAllocatorEASTL>::vector();
        eastl::vector<VarValue, BucketAllocatorEASTL>::vector();
        eastl::vector<long long, BucketAllocatorEASTL>::vector();
    }

    // 0x1003b7cc0, 64 bytes, base-object destructor, inline, placed by class name and debug map
    // GoSubFrame::~GoSubFrame()
    void GoSubFrame::~GoSubFrame() {
        (&field_72)->~vector();
        (&field_48)->~vector();
        (&field_24)->~vector_set();
        ~shared_ptr();
    }

} // namespace jag::game
