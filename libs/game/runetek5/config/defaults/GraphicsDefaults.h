// libs/game/runetek5/config/defaults/GraphicsDefaults.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class GraphicsDefaults {
    public:
        uint GetMaxHeadbarsSimultaneous() const;
        uint GetMaxHitmarks() const;
        GetFont11pxRegularID() const;
        GetFont12pxRegularID() const;
        GetSpriteCompassID() const;
        GetSpriteModIconsID() const;
        uint GetMaxHeadbarsQueued() const;
        GetPlayerRecolSource() const;
        GetPlayerRematDest() const;
        GetObjStackColourMillions() const;
        int GetObjStackColourBillions() const;
        GetObjStackColourTrillions() const;
        int GetObjStackColourQuadrillions() const;
        GetPlayerRematSource() const;
        uint GetNpcChatTimeout() const;
        GetObjStackColourUnits() const;
        GetObjStackColourThousands() const;
        GetPlayerRecolDest() const;
        GraphicsDefaults(PacketT<Array<unsigned char, eastl::allocator>>&);
        ~GraphicsDefaults();
        GetFont12pxBoldID() const;
        GetSpriteMapFlagID() const;
        GetSpriteMapDotsID() const;
        GetSpriteOtherLevelID() const;
        GetSpriteCrossID() const;
        GetSpriteHintHeadIconsID() const;
        GetSpriteHintMapMarkersID() const;
        GetSpriteHintMapEdgeID() const;

        // data members, from how the methods use this: 340 bytes
        uint m_maxHitmarks; // offset 0
        char _unknown_4[52];
        uint m_maxHeadbarsQueued;       // offset 56
        uint m_maxHeadbarsSimultaneous; // offset 60
        uint field_64;                  // offset 64
        undefined4 field_68;            // offset 68
        undefined4 field_72;            // offset 72
        undefined4 field_76;            // offset 76
        undefined1 field_80;            // offset 80
        char _unknown_81[3];
        uint field_84; // offset 84
        uint field_88; // offset 88
        char _unknown_92[100];
        undefined1 field_192; // offset 192
        char _unknown_193[3];
        uint m_npcChatTimeout; // offset 196
        undefined1 field_200;  // offset 200
        char _unknown_201[3];
        uint field_204;       // offset 204
        undefined1 field_208; // offset 208
        char _unknown_209[3];
        undefined4 m_objStackColourUnits;     // offset 212
        undefined4 m_objStackColourThousands; // offset 216
        undefined4 m_objStackColourMillions;  // offset 220
        int m_objStackColourBillions;         // offset 224
        undefined4 m_objStackColourTrillions; // offset 228
        int m_objStackColourQuadrillions;     // offset 232
        uint field_236;                       // offset 236
        uint field_240;                       // offset 240
        uint field_244;                       // offset 244
        undefined4 m_font11pxRegularID;       // offset 248
        undefined4 field_252;                 // offset 252
        undefined4 m_font12pxBoldID;          // offset 256
        undefined4 m_spriteHintHeadIconsID;   // offset 260
        undefined4 m_spriteHintMapMarkersID;  // offset 264
        undefined4 m_spriteMapFlagID;         // offset 268
        int field_272;                        // offset 272
        int field_276;                        // offset 276
        undefined4 m_spriteCrossID;           // offset 280
        undefined4 m_spriteMapDotsID;         // offset 284
        undefined4 m_spriteModIconsID;        // offset 288
        undefined4 field_292;                 // offset 292
        undefined4 m_spriteCompassID;         // offset 296
        undefined4 m_spriteOtherLevelID;      // offset 300
        undefined4 m_spriteHintMapEdgeID;     // offset 304
        undefined4 field_308;                 // offset 308
        undefined4 field_312;                 // offset 312
        undefined4 field_316;                 // offset 316
        undefined4 field_320;                 // offset 320
        undefined4 field_324;                 // offset 324
        undefined4 field_328;                 // offset 328
        undefined4 field_332;                 // offset 332
        char _unknown_336[4];
    };

    // 0x1004198f0, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // GraphicsDefaults::GetNpcChatTimeout() const
    /* MapSquare::GetMapSquareZ() const */

    uint MapSquare::GetMapSquareZ() {
        return m_mapSquareZ;
    }

    // 0x100496cd0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // GraphicsDefaults::GetPlayerRecolDest() const
    /* NPCTypeList::GetBodyModelCache() */

    undefined1* NPCTypeList::GetBodyModelCache() {
        return &field_120;
    }

    // 0x10056fd00, 16 bytes, complete-object destructor, inline, placed by class name
    // GraphicsDefaults::~GraphicsDefaults(): jumps straight to the base-object destructor

    // 0x10056fd10, 80 bytes, base-object destructor, inline, placed by class name
    // GraphicsDefaults::~GraphicsDefaults()
    void GraphicsDefaults::~GraphicsDefaults() {
        (&field_168)->~Array();
        (&field_144)->~Array();
        (&field_120)->~Array();
        (&field_96)->~Array();
        (&field_32)->~Array();
        (&field_8)->~Array();
    }

    // 0x10097bac0, 16 bytes, inline, placed by class name
    // GraphicsDefaults::GetSpriteMapFlagID() const
    undefined4 GraphicsDefaults::GetSpriteMapFlagID() {
        return m_spriteMapFlagID;
    }

    // 0x10097bad0, 16 bytes, inline, placed by class name
    // GraphicsDefaults::GetSpriteMapDotsID() const
    undefined4 GraphicsDefaults::GetSpriteMapDotsID() {
        return m_spriteMapDotsID;
    }

    // 0x10097bae0, 16 bytes, inline, placed by class name
    // GraphicsDefaults::GetSpriteOtherLevelID() const
    undefined4 GraphicsDefaults::GetSpriteOtherLevelID() {
        return m_spriteOtherLevelID;
    }

    // 0x10097baf0, 16 bytes, inline, placed by class name
    // GraphicsDefaults::GetSpriteCrossID() const
    undefined4 GraphicsDefaults::GetSpriteCrossID() {
        return m_spriteCrossID;
    }

    // 0x10097bb00, 16 bytes, inline, placed by class name
    // GraphicsDefaults::GetSpriteHintHeadIconsID() const
    undefined4 GraphicsDefaults::GetSpriteHintHeadIconsID() {
        return m_spriteHintHeadIconsID;
    }

    // 0x10097bb10, 16 bytes, inline, placed by class name
    // GraphicsDefaults::GetSpriteHintMapMarkersID() const
    undefined4 GraphicsDefaults::GetSpriteHintMapMarkersID() {
        return m_spriteHintMapMarkersID;
    }

    // 0x10097bb20, 16 bytes, inline, placed by class name
    // GraphicsDefaults::GetSpriteHintMapEdgeID() const
    undefined4 GraphicsDefaults::GetSpriteHintMapEdgeID() {
        return m_spriteHintMapEdgeID;
    }

} // namespace jag::game

namespace jag::graphics {
    // 0x100496cd0: the linker folded this into game::GraphicsDefaults::GetPlayerRecolDest() const, which has identical code
    SpriteAtlasUsageMap::GetPending() const;

} // namespace jag::graphics
