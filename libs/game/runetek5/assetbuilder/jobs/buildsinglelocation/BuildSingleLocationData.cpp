// libs/game/runetek5/assetbuilder/jobs/buildsinglelocation/BuildSingleLocationData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "BuildSingleLocationData.h"

namespace jag::game {
    // 0x100644da0, 160 bytes, base-object constructor, placed by debug map only (low confidence)
    // BuildSingleLocationRequestData::BuildSingleLocationRequestData()
    void BuildSingleLocationRequestData::BuildSingleLocationRequestData() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        new (&field_16, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_32, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_48 = 0;
        field_52 = 0;
        new (&field_56) Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>();
        new (&field_80) Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>();
        field_104 = 0;
        field_112 = 0;
    }

    // 0x100644e40, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // BuildSingleLocationRequestData::BuildSingleLocationRequestData(): jumps straight to the base-object constructor

    // 0x100644e50, 208 bytes, base-object constructor, placed by debug map only (low confidence)
    // BuildSingleLocationRequestData::BuildSingleLocationRequestData(shared_ptr<LocType> const&, shared_ptr<LocType> const&, shared_ptr<graphics::Model> const&, Rotation90, int, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&&, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&&)
    void BuildSingleLocationRequestData::BuildSingleLocationRequestData(shared_ptr* param_1, shared_ptr* param_2,
                                                                        shared_ptr* param_3, undefined1 param_5,
                                                                        undefined4 param_6, Array* param_7,
                                                                        Array* param_8) {
        new (this) shared_ptr<oldscape::dash3d::Decor>(param_1);
        new (&field_16, param_2) shared_ptr<oldscape::dash3d::Decor>();
        new (&field_32, param_3) shared_ptr<oldscape::dash3d::Decor>();
        field_48 = param_5;
        field_52 = param_6;
        new (&field_56) Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>();
        new (&field_80) Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>();
        (&field_56, param_7)->swap();
        (&field_80, param_8)->swap();
    }

    // 0x100644f20, 32 bytes, complete-object constructor, placed by debug map only (low confidence)
    // BuildSingleLocationRequestData::BuildSingleLocationRequestData(shared_ptr<LocType> const&, shared_ptr<LocType> const&, shared_ptr<graphics::Model> const&, Rotation90, int, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&&, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&&)
    void BuildSingleLocationRequestData::BuildSingleLocationRequestData() {
        BuildSingleLocationRequestData();
    }

} // namespace jag::game
