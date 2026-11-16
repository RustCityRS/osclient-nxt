// libs/game/runetek5/config/defaults/MapDefaults.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class MapDefaults {
    public:
        unsigned int GetDefaultWaterType() const;
        unsigned int GetDefaultEnvironmentMap() const;
        MapDefaults(PacketT<Array<unsigned char>>& arg1);

    private:
        unsigned int m_defaultEnvironmentMap;
        unsigned int m_defaultWaterType;
        uint8_t _unknown_8[4];
    };

} // namespace jag::game
