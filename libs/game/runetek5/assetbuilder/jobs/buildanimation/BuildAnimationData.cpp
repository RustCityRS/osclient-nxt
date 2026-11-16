// libs/game/runetek5/assetbuilder/jobs/buildanimation/BuildAnimationData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "BuildAnimationData.h"

namespace jag::game {
    // 0x10065a9d0, 192 bytes, base-object constructor, placed by debug map only (low confidence)
    // BuildAnimationRequestData::BuildAnimationRequestData()
    void BuildAnimationRequestData::BuildAnimationRequestData() {
        _func_decltype_nullptr* in_RSI;

        new (this) std::mutex();
        new (&field_64, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_80) Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>();
        new (&field_104) Array<unsigned int, BucketAllocatorEASTL>();
        new (&field_128) Array<graphics::LabelData, BucketAllocatorEASTL>();
        new (&field_152, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x10065aad0, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // BuildAnimationRequestData::BuildAnimationRequestData(): jumps straight to the base-object constructor

    // 0x10065aae0, 32 bytes, base-object constructor, placed by debug map only (low confidence)
    // BuildAnimationResultData::BuildAnimationResultData()
    void BuildAnimationResultData::BuildAnimationResultData() {
        _func_decltype_nullptr* in_RSI;

        new (this) MakeSharedPool<BuildAnimationResultData, 96>();
        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
    }

    // 0x10065ab60, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // BuildAnimationResultData::BuildAnimationResultData(): jumps straight to the base-object constructor

} // namespace jag::game
