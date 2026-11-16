// libs/game/runetek5/config/defaults/MapDefaults.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class MapDefaults {
    public:
        GetDefaultWaterType() const;
        GetDefaultEnvironmentMap() const;
        MapDefaults(PacketT<Array<unsigned char, eastl::allocator>>&);

        // data members, from how the methods use this: 12 bytes
        uint field_0; // offset 0
        uint field_4; // offset 4
        char _unknown_8[4];
    };

} // namespace jag::game
