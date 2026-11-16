// libs/game/runetek5/config/meltype/MapElementType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class MapElementType {
    public:
        class Polygon;
        // virtual methods in vtable order
        virtual ~MapElementType();
        virtual uint8_t* DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        virtual void PostDecode();
        int GetMyID() const;
        unsigned int GetTextSize() const;
        unsigned int GetSpriteID() const;
        void GetPolygon() const;
        bool IsMultiME() const;
        uint8_t GetShowOnMiniMap() const;
        unsigned int GetMinimapIconScale() const;
        unsigned int GetHAlign() const;
        unsigned int GetVAlign() const;
        uint8_t GetShowOnWorldMap() const;
        unsigned int GetCategory() const;
        uint8_t GetListable() const;
        char* GetText() const;
        int GetFlashSpriteID() const;
        unsigned int GetTextBackgroundFillRGBA() const;
        unsigned int GetTextBackgroundOutlineRGBA() const;
        unsigned int GetTextMouseOverRGBA() const;
        unsigned int GetTextRGBA() const;
        PacketView* GetSprite(graphics::RT7Core& rt7Core, bool arg2);
        PacketView* GetFlashSprite(graphics::RT7Core& rt7Core);
        auto GetMultiME(const PlayerVarDomain* playerVarDomain, ConfigProvider* configProvider);
        uint8_t* VariableTest(bool& arg1, const PlayerVarDomain* playerVarDomain, ConfigProvider* configProvider);
        MapElementType(BaseTemplateConfigTypeList<MapElementType>* baseTemplateConfigTypeList, int arg2);
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullMapElementType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()

    private:
        uint8_t _unknown_8[16];
        BaseTemplateConfigTypeList<MapElementType>* field_24;
        int m_myID;
        uint8_t _unknown_36[4];
        shared_ptr field_40;
        unsigned int m_spriteID;
        unsigned int field_60;
        uint8_t _unknown_64[64];
        unsigned int m_textRGBA;
        unsigned int m_textMouseOverRGBA;
        unsigned int m_textSize;
        unsigned int m_textBackgroundFillRGBA;
        unsigned int m_textBackgroundOutlineRGBA;
        uint8_t m_showOnWorldMap;
        uint8_t m_showOnMiniMap;
        bool field_150;
        uint8_t _unknown_151[97];
        uint32_t field_248;
        int field_252;
        int field_256;
        unsigned int field_260;
        unsigned int field_264;
        int field_268;
        int field_272;
        unsigned int field_276;
        unsigned int field_280;
        uint8_t _unknown_284[36];
        int field_320;
        int field_324;
        uint8_t m_listable;
        uint8_t _unknown_329[3];
        unsigned int m_category;
        uint32_t m_flashSpriteID;
        unsigned int m_minimapIconScale;
        unsigned int m_hAlign;
        unsigned int m_vAlign;
        uint8_t _unknown_352[4];
    };

    class MapElementType::Polygon {
    public:
        Polygon();
        ~Polygon();

    private:
        uint8_t _unknown_0[32];
        uint64_t field_32;
        uint64_t field_40;
        uint64_t field_48;
        uint64_t field_56;
        uint8_t _unknown_64[56];
    };

    // 0x1003c0b70
    void MapElementType::GetPolygon() const {
        field_312.get();
    }

    // 0x1003c3a70
    bool MapElementType::IsMultiME() const {
        return field_288.empty() ^ 1;
    }

    // 0x1003c3a90
    uint8_t MapElementType::GetShowOnMiniMap() const {
        return m_showOnMiniMap;
    }

    // 0x1003c3d90
    unsigned int MapElementType::GetMinimapIconScale() const {
        return m_externalID;
    }

    // 0x1003c3e20
    unsigned int MapElementType::GetHAlign() const {
        return m_emissiveMapMaterialID;
    }

    // 0x1003c3e30
    unsigned int MapElementType::GetVAlign() const {
        return m_vAlign;
    }

    // 0x1003ca920
    uint8_t MapElementType::GetShowOnWorldMap() const {
        return m_valid;
    }

    // 0x1003cd500
    unsigned int MapElementType::GetCategory() const {
        return m_category;
    }

    // 0x1003cd860
    uint8_t MapElementType::GetListable() const {
        return m_listable;
    }

    // 0x1003cf160
    char* MapElementType::GetText() const {
        char* pcVar2;

        if (field_64.size() == 0) {
            pcVar2 = nullptr;
        } else {
            pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        }
        return pcVar2;
    }

    // 0x1003cf240
    int MapElementType::GetFlashSpriteID() const {
        return m_modelRawUniqueID;
    }

    // 0x1003cf280
    unsigned int MapElementType::GetTextBackgroundFillRGBA() const {
        return m_animationLength;
    }

    // 0x1003cf290
    unsigned int MapElementType::GetTextBackgroundOutlineRGBA() const {
        return m_runeScore;
    }

    // 0x1003cf2b0
    unsigned int MapElementType::GetTextMouseOverRGBA() const {
        return *(uint32_t*)(this + 132);
    }

    // 0x1003cf2c0
    unsigned int MapElementType::GetTextRGBA() const {
        return m_override;
    }

    // 0x1005ad5f0
    MapElementType::~MapElementType() {
        field_312.~unique_ptr();
        field_288.~Array();
        field_184.~fixed_string();
    }

    // 0x1005ae170
    MapElementType::MapElementType(BaseTemplateConfigTypeList<MapElementType>* baseTemplateConfigTypeList, int arg2)
        : ConfigType<MapElementType>(baseTemplateConfigTypeList, arg2), MakeSharedPool<MapElementType, 512>(),
          m_spriteID(4294967295), field_60(4294967295), m_textMouseOverRGBA(4294967295), m_textSize(0),
          m_textBackgroundFillRGBA(0), m_textBackgroundOutlineRGBA(0), m_showOnWorldMap(1), m_showOnMiniMap(0),
          field_150(true), field_264(4294967295), field_268(-1), field_272(-1), field_276(4294967295),
          field_248(4294967295), field_252(-1), field_256(-1), field_260(4294967295), field_280(4294967295) {
        field_312.unique_ptr<true, void>();
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
