// libs/graphics/runetek7/fonts/Font.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class Font {
    public:
        void GetFontMetrics() const;
        Font(const shared_ptr<FontMetrics>& fontMetrics, SpriteAtlasManager* spriteAtlasManager,
             const shared_ptr<SpriteAtlas>& spriteAtlas);
        void LoadSpriteGlyphs(SpriteAtlasManager* spriteAtlasManager, const shared_ptr<SpriteAtlas>& spriteAtlas);
        void UpdateUVs();
        Font(const shared_ptr<FontMetrics>& fontMetrics, VectorFontSource* vectorFontSource,
             SpriteAtlasManager* spriteAtlasManager, const shared_ptr<SpriteAtlas>& spriteAtlas);
        void LoadVectorGlyphs(VectorFontSource* vectorFontSource, SpriteAtlasManager* spriteAtlasManager,
                              const shared_ptr<SpriteAtlas>& spriteAtlas);
        void GetUV(unsigned int arg1) const;
        shared_ptr<oldscape::dash3d::GroundDecor>* GetCharactersTexture();
        ~Font();
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullFont; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()

    private:
        uint8_t _unknown_0[8];
        long field_8;
        shared_ptr field_16;
        shared_ptr m_charactersTexture;
        uint8_t _unknown_48[8];
    };

    class FontKerningData {
    public:
        ~FontKerningData();
        FontKerningData();

        uint8_t _unknown_0[1];
    };

    // 0x1008e29a0
    shared_ptr<oldscape::dash3d::GroundDecor>* Font::GetCharactersTexture() {

        if (field_16->operator_cast_to_bool()) {
            if (!(m_charactersTexture->operator_cast_to_bool())) {
                UpdateUVs();
            }
        }
        return (shared_ptr<oldscape::dash3d::GroundDecor>*)m_charactersTexture;
    }

    // 0x100908450
    Font::~Font() {
        field_48.~vector();
        m_charactersTexture->~shared_ptr();
        field_16->~shared_ptr();
    }

} // namespace jag::graphics

namespace jag::oldscape {
    class FontHash {
    public:
        uint32_t operator()(const Font& font) const;

        uint8_t _unknown_0[1];
    };

} // namespace jag::oldscape
