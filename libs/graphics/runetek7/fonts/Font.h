// libs/graphics/runetek7/fonts/Font.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class Font {
    public:
        GetFontMetrics() const;
        Font(shared_ptr<FontMetrics> const&, SpriteAtlasManager*, shared_ptr<SpriteAtlas> const&);
        void LoadSpriteGlyphs(SpriteAtlasManager*, shared_ptr<SpriteAtlas> const&);
        void UpdateUVs();
        Font(shared_ptr<FontMetrics> const&, VectorFontSource*, SpriteAtlasManager*, shared_ptr<SpriteAtlas> const&);
        void LoadVectorGlyphs(VectorFontSource*, SpriteAtlasManager*, shared_ptr<SpriteAtlas> const&);
        void GetUV(unsigned int) const;
        GetCharactersTexture();
        ~Font();
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullFont;

        // data members, from how the methods use this: 56 bytes
        char _unknown_0[8];
        long field_8;                   // offset 8
        shared_ptr field_16;            // offset 16
        shared_ptr m_charactersTexture; // offset 32
        undefined1 field_48;            // offset 48
        char _unknown_49[7];
    };

    class FontKerningData {
    public:
        ~FontKerningData();
        FontKerningData();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1008e29a0, 64 bytes, inline, placed by class name and debug map
    // Font::GetCharactersTexture()
    undefined1* Font::GetCharactersTexture() {
        bool bVar1;

        bVar1 = field_16->operator_cast_to_bool();
        if (bVar1) {
            bVar1 = m_charactersTexture->operator_cast_to_bool();
            if (!bVar1) {
                UpdateUVs(this);
            }
        }
        return m_charactersTexture;
    }

    // 0x100908440, 16 bytes, complete-object destructor, inline, placed by class name
    // Font::~Font(): jumps straight to the base-object destructor

    // 0x100908450, 64 bytes, base-object destructor, inline, placed by class name
    // Font::~Font()
    void Font::~Font() {
        (&field_48)->~vector();
        m_charactersTexture->~shared_ptr();
        field_16->~shared_ptr();
        ~shared_ptr();
    }

} // namespace jag::graphics

namespace jag::oldscape {
    class FontHash {
    public:
        operator()(Font const&) const;

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

} // namespace jag::oldscape
