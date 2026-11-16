// libs/game/runetek5/assetbuilder/jobs/buildanimation/BuildAnimationData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "BuildAnimationData.h"

namespace jag::game {
    // 0x10065a9d0
    BuildAnimationRequestData::BuildAnimationRequestData() : std::mutex() {
        new (&field_64) shared_ptr();
        new (&field_80) Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>();
        new (&field_104) Array<unsigned int, BucketAllocatorEASTL>();
        new (&field_128) Array<graphics::LabelData, BucketAllocatorEASTL>();
        new (&field_152) shared_ptr();
    }

    // 0x10065aae0
    BuildAnimationResultData::BuildAnimationResultData()
        : MakeSharedPool<BuildAnimationResultData, 96>(), shared_ptr() {}

} // namespace jag::game
