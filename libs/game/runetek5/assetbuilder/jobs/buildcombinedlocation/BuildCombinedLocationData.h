// libs/game/runetek5/assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class BuildCombinedLocationRequestData {
    public:
        GetLocationContainerLocationList() const;
        BuildCombinedLocationRequestData(eastl::vector<LocationContainerLocation, eastl::allocator> const&, int, int);
        ~BuildCombinedLocationRequestData();

        // data members, from how the methods use this: 120 bytes
        vector* field_0; // offset 0
        int field_8;     // offset 8
        int field_12;    // offset 12
        char _unknown_16[104];
    };

    // 0x100449490, 32 bytes, inline, placed by debug map only (low confidence)
    // LocationAudioProperties::GenerateBackgroundSoundRandomRate() const
    int LocationAudioProperties::GenerateBackgroundSoundRandomRate() {
        int iVar1;

        iVar1 = field_12;
        return math::Rand(field_16 - iVar1) + iVar1;
    }

} // namespace jag::game
