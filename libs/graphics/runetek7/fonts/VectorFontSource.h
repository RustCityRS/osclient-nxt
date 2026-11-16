// libs/graphics/runetek7/fonts/VectorFontSource.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class VectorFontSource {
    public:
        bool IsValid() const;
        unsigned long RenderGlyphs(RGBAImage* rgbaImage, unsigned short arg2, unsigned short arg3,
                                   const eastl::fixed_vector<eastl::fixed_vector<unsigned short, 4ul>, 256ul>& arg4);
        ~VectorFontSource();
        auto GenerateMetrics();
        VectorFontSource(FT_FaceRec_* fT_FaceRec_, int arg2, unsigned char arg3, VectorFontLoader* vectorFontLoader,
                         const shared_ptr<PacketT<Array<unsigned char>>>& arg5);
        VectorFontSource();
        static float m_renderScaleFactor; // = 1.0f

    private:
        VectorFontLoader* field_0;
        FT_FaceRec_* field_8;
        uint8_t _unknown_16[16];
        unsigned int field_32;
        unsigned char field_36;
        char field_37;
        uint8_t _unknown_38[13634];
    };

    // 0x1008ffaa0
    VectorFontSource::VectorFontSource() : field_0(nullptr), field_8(nullptr) {
        new (&field_16) shared_ptr();
    }

} // namespace jag::graphics
