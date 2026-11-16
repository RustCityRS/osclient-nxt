// libs/game/runetek5/config/defaults/GraphicsDefaults.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class GraphicsDefaults {
    public:
        unsigned int GetMaxHeadbarsSimultaneous() const;
        unsigned int GetMaxHitmarks() const;
        uint32_t GetFont11pxRegularID() const;
        SpriteAtlasUsageType GetFont12pxRegularID() const;
        uint32_t GetSpriteCompassID() const;
        uint32_t GetSpriteModIconsID() const;
        unsigned int GetMaxHeadbarsQueued() const;
        uint8_t* GetPlayerRecolSource() const;
        uint8_t* GetPlayerRematDest() const;
        uint32_t GetObjStackColourMillions() const;
        int GetObjStackColourBillions() const;
        uint32_t GetObjStackColourTrillions() const;
        int GetObjStackColourQuadrillions() const;
        uint8_t* GetPlayerRematSource() const;
        unsigned int GetNpcChatTimeout() const;
        uint32_t GetObjStackColourUnits() const;
        uint32_t GetObjStackColourThousands() const;
        uint8_t* GetPlayerRecolDest() const;
        GraphicsDefaults(PacketT<Array<unsigned char>>& arg1);
        ~GraphicsDefaults();
        uint32_t GetFont12pxBoldID() const;
        uint32_t GetSpriteMapFlagID() const;
        uint32_t GetSpriteMapDotsID() const;
        uint32_t GetSpriteOtherLevelID() const;
        uint32_t GetSpriteCrossID() const;
        uint32_t GetSpriteHintHeadIconsID() const;
        uint32_t GetSpriteHintMapMarkersID() const;
        uint32_t GetSpriteHintMapEdgeID() const;

    private:
        unsigned int m_maxHitmarks;
        uint8_t _unknown_4[52];
        unsigned int m_maxHeadbarsQueued;
        unsigned int m_maxHeadbarsSimultaneous;
        unsigned int field_64;
        uint32_t field_68;
        uint32_t field_72;
        uint32_t field_76;
        uint8_t field_80;
        uint8_t _unknown_81[3];
        unsigned int field_84;
        unsigned int field_88;
        uint8_t _unknown_92[100];
        uint8_t field_192;
        uint8_t _unknown_193[3];
        unsigned int m_npcChatTimeout;
        uint8_t field_200;
        uint8_t _unknown_201[3];
        unsigned int field_204;
        uint8_t field_208;
        uint8_t _unknown_209[3];
        uint32_t m_objStackColourUnits;
        uint32_t m_objStackColourThousands;
        uint32_t m_objStackColourMillions;
        int m_objStackColourBillions;
        uint32_t m_objStackColourTrillions;
        int m_objStackColourQuadrillions;
        unsigned int field_236;
        unsigned int field_240;
        unsigned int field_244;
        uint32_t m_font11pxRegularID;
        uint32_t field_252;
        uint32_t m_font12pxBoldID;
        uint32_t m_spriteHintHeadIconsID;
        uint32_t m_spriteHintMapMarkersID;
        uint32_t m_spriteMapFlagID;
        int field_272;
        int field_276;
        uint32_t m_spriteCrossID;
        uint32_t m_spriteMapDotsID;
        uint32_t m_spriteModIconsID;
        uint32_t field_292;
        uint32_t m_spriteCompassID;
        uint32_t m_spriteOtherLevelID;
        uint32_t m_spriteHintMapEdgeID;
        uint32_t field_308;
        uint32_t field_312;
        uint32_t field_316;
        uint32_t field_320;
        uint32_t field_324;
        uint32_t field_328;
        uint32_t field_332;
        uint8_t _unknown_336[4];
    };

    // 0x1004198f0
    unsigned int GraphicsDefaults::GetNpcChatTimeout() const {
        return m_mapSquareZ;
    }

    // 0x100496cd0
    uint8_t* GraphicsDefaults::GetPlayerRecolDest() const {
        return &field_120;
    }

    // 0x10056fd10
    GraphicsDefaults::~GraphicsDefaults() {
        field_168.~Array();
        field_144.~Array();
        field_120.~Array();
        field_96.~Array();
        field_32.~Array();
        field_8.~Array();
    }

    // 0x10097bac0
    uint32_t GraphicsDefaults::GetSpriteMapFlagID() const {
        return m_spriteMapFlagID;
    }

    // 0x10097bad0
    uint32_t GraphicsDefaults::GetSpriteMapDotsID() const {
        return m_spriteMapDotsID;
    }

    // 0x10097bae0
    uint32_t GraphicsDefaults::GetSpriteOtherLevelID() const {
        return m_spriteOtherLevelID;
    }

    // 0x10097baf0
    uint32_t GraphicsDefaults::GetSpriteCrossID() const {
        return m_spriteCrossID;
    }

    // 0x10097bb00
    uint32_t GraphicsDefaults::GetSpriteHintHeadIconsID() const {
        return m_spriteHintHeadIconsID;
    }

    // 0x10097bb10
    uint32_t GraphicsDefaults::GetSpriteHintMapMarkersID() const {
        return m_spriteHintMapMarkersID;
    }

    // 0x10097bb20
    uint32_t GraphicsDefaults::GetSpriteHintMapEdgeID() const {
        return m_spriteHintMapEdgeID;
    }

} // namespace jag::game

namespace jag::graphics {
    // 0x100496cd0: SpriteAtlasUsageMap::GetPending() const has the same machine code as game::GraphicsDefaults::GetPlayerRecolDest() const

} // namespace jag::graphics
