// libs/game/runetek5/config/meltype/MapElementType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class MapElementType {
    public:
        class Polygon;
        // virtual methods in vtable order
        virtual ~MapElementType();
        virtual DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        virtual void PostDecode();
        int GetMyID() const;
        uint GetTextSize() const;
        uint GetSpriteID() const;
        void GetPolygon() const;
        byte IsMultiME() const;
        GetShowOnMiniMap() const;
        uint GetMinimapIconScale() const;
        uint GetHAlign() const;
        uint GetVAlign() const;
        GetShowOnWorldMap() const;
        uint GetCategory() const;
        GetListable() const;
        GetText() const;
        GetFlashSpriteID() const;
        uint GetTextBackgroundFillRGBA() const;
        uint GetTextBackgroundOutlineRGBA() const;
        uint GetTextMouseOverRGBA() const;
        uint GetTextRGBA() const;
        PacketView* GetSprite(graphics::RT7Core&, bool);
        PacketView* GetFlashSprite(graphics::RT7Core&);
        GetMultiME(PlayerVarDomain const*, ConfigProvider*);
        VariableTest(bool&, PlayerVarDomain const*, ConfigProvider*);
        MapElementType(BaseTemplateConfigTypeList<MapElementType>*, int);
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullMapElementType;

        // data members, from how the methods use this: 356 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        BaseTemplateConfigTypeList* field_24; // offset 24
        int m_myID;                           // offset 32
        char _unknown_36[4];
        shared_ptr field_40; // offset 40
        uint m_spriteID;     // offset 56
        uint field_60;       // offset 60
        char _unknown_64[64];
        uint m_textRGBA;                  // offset 128
        uint m_textMouseOverRGBA;         // offset 132
        uint m_textSize;                  // offset 136
        uint m_textBackgroundFillRGBA;    // offset 140
        uint m_textBackgroundOutlineRGBA; // offset 144
        undefined1 m_showOnWorldMap;      // offset 148
        undefined1 m_showOnMiniMap;       // offset 149
        bool field_150;                   // offset 150
        char _unknown_151[97];
        undefined4 field_248; // offset 248
        int field_252;        // offset 252
        int field_256;        // offset 256
        uint field_260;       // offset 260
        uint field_264;       // offset 264
        int field_268;        // offset 268
        int field_272;        // offset 272
        uint field_276;       // offset 276
        uint field_280;       // offset 280
        char _unknown_284[36];
        int field_320;         // offset 320
        int field_324;         // offset 324
        undefined1 m_listable; // offset 328
        char _unknown_329[3];
        uint m_category;            // offset 332
        undefined4 m_flashSpriteID; // offset 336
        uint m_minimapIconScale;    // offset 340
        uint m_hAlign;              // offset 344
        uint m_vAlign;              // offset 348
        char _unknown_352[4];
    };

    class MapElementType::Polygon {
    public:
        Polygon();
        ~Polygon();

        // data members, from how the methods use this: 120 bytes
        char _unknown_0[32];
        undefined8 field_32; // offset 32
        undefined8 field_40; // offset 40
        undefined8 field_48; // offset 48
        undefined8 field_56; // offset 56
        char _unknown_64[56];
    };

    // 0x1003c0b70, 32 bytes, inline, placed by class name and debug map
    // MapElementType::GetPolygon() const
    void MapElementType::GetPolygon() {
        (&field_312)->get();
    }

    // 0x1003c3a70, 32 bytes, inline, placed by class name
    // MapElementType::IsMultiME() const
    byte MapElementType::IsMultiME() {
        byte bVar1;

        bVar1 = (&field_288)->empty();
        return bVar1 ^ 1;
    }

    // 0x1003c3a90, 16 bytes, inline, placed by class name
    // MapElementType::GetShowOnMiniMap() const
    undefined1 MapElementType::GetShowOnMiniMap() {
        return m_showOnMiniMap;
    }

    // 0x1003c3d90, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MapElementType::GetMinimapIconScale() const
    /* graphics::Model::GetExternalID() const */

    int graphics::Model::GetExternalID() {
        return m_externalID;
    }

    // 0x1003c3e20, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MapElementType::GetHAlign() const
    /* WaterType::GetEmissiveMapMaterialID() const */

    uint WaterType::GetEmissiveMapMaterialID() {
        return m_emissiveMapMaterialID;
    }

    // 0x1003c3e30, 16 bytes, inline, placed by class name
    // MapElementType::GetVAlign() const
    uint MapElementType::GetVAlign() {
        return m_vAlign;
    }

    // 0x1003ca920, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MapElementType::GetShowOnWorldMap() const
    /* StaticPointLight::IsValid() const */

    undefined1 StaticPointLight::IsValid() {
        return m_valid;
    }

    // 0x1003cd500, 16 bytes, inline, placed by class name
    // MapElementType::GetCategory() const
    uint MapElementType::GetCategory() {
        return m_category;
    }

    // 0x1003cd860, 16 bytes, inline, placed by class name
    // MapElementType::GetListable() const
    undefined1 MapElementType::GetListable() {
        return m_listable;
    }

    // 0x1003cf160, 48 bytes, inline, placed by class name
    // MapElementType::GetText() const
    undefined8 MapElementType::GetText() {
        undefined8 uVar2;

        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() ==
            0) {
            uVar2 = 0;
        } else {
            uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        }
        return uVar2;
    }

    // 0x1003cf240, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MapElementType::GetFlashSpriteID() const
    /* graphics::Model::GetModelRawUniqueID() const */

    undefined4 graphics::Model::GetModelRawUniqueID() {
        return m_modelRawUniqueID;
    }

    // 0x1003cf280, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MapElementType::GetTextBackgroundFillRGBA() const
    /* graphics::AnimationParameters::GetAnimationLength() const */

    uint graphics::AnimationParameters::GetAnimationLength() {
        return m_animationLength;
    }

    // 0x1003cf290, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MapElementType::GetTextBackgroundOutlineRGBA() const
    /* AchievementType::GetRuneScore() const */

    uint AchievementType::GetRuneScore() {
        return m_runeScore;
    }

    // 0x1003cf2b0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MapElementType::GetTextMouseOverRGBA() const
    /* math::Histogram<unsigned int, 30>::GetMean() const */

    undefined4 math::Histogram<unsigned int, 30>::GetMean(Histogram<unsigned int, 30>* this) {
        return *(undefined4*)(this + 132);
    }

    // 0x1003cf2c0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MapElementType::GetTextRGBA() const
    /* HitmarkType::GetOverride() const */

    uint HitmarkType::GetOverride() {
        return m_override;
    }

    // 0x100518650, 32 bytes, deleting destructor, inline, placed by class name
    // MapElementType::~MapElementType()
    void MapElementType::~MapElementType() {
        ~MapElementType(this);
        operator_delete(this);
    }

    // 0x1005ad5e0, 16 bytes, complete-object destructor, inline, placed by class name
    // MapElementType::~MapElementType(): jumps straight to the base-object destructor

    // 0x1005ad5f0, 96 bytes, base-object destructor, inline, placed by class name
    // MapElementType::~MapElementType()
    void MapElementType::~MapElementType() {
        field_0 = &PTR__MapElementType_100f034e8;
        (&field_312)->~unique_ptr();
        (&field_288)->~Array();
        /* WARNING: Subroutine does not return */
        (&field_184)->~fixed_string();
    }

    // 0x1005ae160, 16 bytes, complete-object constructor, inline, placed by class name
    // MapElementType::MapElementType(BaseTemplateConfigTypeList<MapElementType>*, int): jumps straight to the base-object constructor

    // 0x1005ae170, 304 bytes, base-object constructor, inline, placed by class name
    // MapElementType::MapElementType(BaseTemplateConfigTypeList<MapElementType>*, int)
    void MapElementType::MapElementType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new (this) ConfigType<MapElementType>(param_1, param_2);
        new (this) MakeSharedPool<MapElementType, 512>();
        field_0 = &PTR__MapElementType_100f034e8;
        m_spriteID = 4294967295;
        field_60 = 4294967295;
        new (&field_64) eastl::fixed_string<char, 24, true, eastl::allocator>();
        m_textMouseOverRGBA = 4294967295;
        m_textSize = 0;
        m_textBackgroundFillRGBA = 0;
        m_textBackgroundOutlineRGBA = 0;
        m_showOnWorldMap = 1;
        m_showOnMiniMap = 0;
        field_150 = true;
        new (&field_152) eastl::vector<eastl::fixed_string<char, 8, true, eastl::allocator>, eastl::allocator>();
        new (&field_184) eastl::fixed_string<char, 24, true, eastl::allocator>();
        field_264 = 4294967295;
        field_268 = -1;
        field_272 = -1;
        field_276 = 4294967295;
        field_248 = 4294967295;
        field_252 = -1;
        field_256 = -1;
        field_260 = 4294967295;
        field_280 = 4294967295;
        new (&field_288) Array<int, eastl::allocator>();
        std::unique_ptr<MapElementType::Polygon, MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>::
            unique_ptr<true, void>(
                (unique_ptr<MapElementType::Polygon,
                            MakeUniquePool<MapElementType::Polygon, 256>::UniquePoolDeleter>*)&field_312);
        field_320 = 0;
        field_324 = 0;
        m_listable = 1;
        m_category = 4294967295;
        m_flashSpriteID = 4294967295;
        m_minimapIconScale = 4294967295;
        m_hAlign = 1;
        m_vAlign = 1;
    }

} // namespace jag::game
