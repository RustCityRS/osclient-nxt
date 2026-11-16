// libs/game/runetek5/config/defaults/WorldMapDefaults.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class WorldMapDefaults {
    public:
        unsigned int GetF2POutlineColourRGBA() const;
        unsigned int GetF2PLayerColourRGBA() const;
        unsigned int GetF2PLayerMapID() const;
        unsigned int GetDropShadowColourRGBA() const;
        WorldMapDefaults(PacketT<Array<unsigned char>>& arg1);
        uint32_t GetFontID(int arg1, int arg2) const;

    private:
        unsigned int m_f2PLayerMapID;
        unsigned int m_f2PLayerColourRGBA;
        unsigned int m_f2POutlineColourRGBA;
        unsigned int field_12;
        unsigned int field_16;
        uint32_t field_20;
        unsigned int m_dropShadowColourRGBA;
        uint8_t _unknown_28[4];
    };

    // 0x1003cf2a0
    unsigned int WorldMapDefaults::GetDropShadowColourRGBA() const {
        return *(uint32_t*)&this[3]._vptr;
    }

} // namespace jag::game
