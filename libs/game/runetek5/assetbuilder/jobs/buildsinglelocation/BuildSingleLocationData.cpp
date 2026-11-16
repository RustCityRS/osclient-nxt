// libs/game/runetek5/assetbuilder/jobs/buildsinglelocation/BuildSingleLocationData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "BuildSingleLocationData.h"

namespace jag::game {
    // 0x100644da0
    BuildSingleLocationRequestData::BuildSingleLocationRequestData() : shared_ptr() {
        new (&field_16) shared_ptr();
        new (&field_32) shared_ptr();
        field_48 = '\0';
        field_52 = 0;
        new (&field_56) Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>();
        new (&field_80) Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>();
        field_104 = 0;
        field_112 = 0;
    }

    // 0x100644e50
    BuildSingleLocationRequestData::BuildSingleLocationRequestData(
        const shared_ptr<LocType>& locType1, const shared_ptr<LocType>& locType2,
        const shared_ptr<graphics::Model>& model, Rotation90 rotation90, int arg5,
        Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&& arg6,
        Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&& arg7)
        : shared_ptr(locType1), field_16(locType2), field_32(model) {
        field_48 = (char)rotation90;
        field_52 = arg5;
        new (&field_56) Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>();
        new (&field_80) Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>();
        field_56.swap(arg6);
        field_80.swap(arg7);
    }

} // namespace jag::game
