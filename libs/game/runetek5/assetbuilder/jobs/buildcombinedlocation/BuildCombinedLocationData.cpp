// libs/game/runetek5/assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "BuildCombinedLocationData.h"

namespace jag::game {
    // 0x10064a5c0, 112 bytes, base-object constructor, placed by debug map only (low confidence)
    // BuildCombinedLocationRequestData::BuildCombinedLocationRequestData(eastl::vector<LocationContainerLocation, eastl::allocator> const&, int, int)
    void BuildCombinedLocationRequestData::BuildCombinedLocationRequestData(vector* param_1, int param_2, int param_3) {
        allocator local_20[8];

        field_0 = param_1;
        field_8 = param_2;
        field_12 = param_3;
        new (&field_24) eastl::vector<BuildCombinedLocationRequest_Location, eastl::allocator>();
        eastl::allocator::allocator(local_20, "EASTL hash_map");
        new (&field_56, local_20)
            eastl::hash_map<unsigned int, BuildCombinedLocationRequestData_PerModelData, eastl::hash<unsigned int>,
                            eastl::equal_to<unsigned int>, eastl::allocator, false>();
        new (&field_112) std::mutex();
    }

    // 0x10064a670, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // BuildCombinedLocationRequestData::BuildCombinedLocationRequestData(eastl::vector<LocationContainerLocation, eastl::allocator> const&, int, int): jumps straight to the base-object constructor

} // namespace jag::game
