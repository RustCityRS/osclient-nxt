// libs/game/runetek5/assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class BuildCombinedLocationRequestData {
    public:
        void GetLocationContainerLocationList() const;
        BuildCombinedLocationRequestData(const eastl::vector<LocationContainerLocation>& locationContainerLocations,
                                         int arg2, int arg3);
        ~BuildCombinedLocationRequestData();

    private:
        vector<LocationContainerLocation>* field_0;
        int field_8;
        int field_12;
        uint8_t _unknown_16[104];
    };

    // 0x100449490
    int LocationAudioProperties::GenerateBackgroundSoundRandomRate() const {
        int iVar1 = field_12;
        return math::Rand(field_16 - iVar1) + iVar1;
    }

} // namespace jag::game
