// libs/game/runetek5/assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "BuildCombinedLocationData.h"

namespace jag::game {
    // 0x10064a5c0
    BuildCombinedLocationRequestData::BuildCombinedLocationRequestData(
        const eastl::vector<LocationContainerLocation>& locationContainerLocations, int arg2, int arg3)
        : field_0(locationContainerLocations), field_8(arg2), field_12(arg3) {

        new (&field_56) eastl::hash_map<unsigned int, BuildCombinedLocationRequestData_PerModelData>(local_20);
        new (&field_112) std::mutex();
    }

} // namespace jag::game
