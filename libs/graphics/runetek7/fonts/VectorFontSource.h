// libs/graphics/runetek7/fonts/VectorFontSource.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class VectorFontSource {
    public:
        IsValid() const;
        ulong RenderGlyphs(RGBAImage*, unsigned short, unsigned short,
                           eastl::fixed_vector<eastl::fixed_vector<unsigned short, 4ul, true, eastl::allocator>, 256ul,
                                               true, eastl::allocator> const&);
        ~VectorFontSource();
        GenerateMetrics();
        VectorFontSource(FT_FaceRec_*, int, unsigned char, VectorFontLoader*,
                         shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>> const&);
        VectorFontSource();
        static float /* 4 bytes */ m_renderScaleFactor; // = 1.0f

        // data members, from how the methods use this: 13672 bytes
        VectorFontLoader* field_0; // offset 0
        FT_FaceRec_* field_8;      // offset 8
        char _unknown_16[16];
        uint field_32;  // offset 32
        uchar field_36; // offset 36
        char field_37;  // offset 37
        char _unknown_38[12290];
        undefined2 field_12328; // offset 12328
        ushort field_12330;     // offset 12330
        uint field_12332;       // offset 12332
        uchar field_12336;      // offset 12336
        uchar field_12337;      // offset 12337
        byte field_12338;       // offset 12338
        byte field_12339;       // offset 12339
        char _unknown_12340[1332];
    };

    // 0x1008ea4f0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // VectorFontSource::VectorFontSource(): jumps straight to the base-object constructor

    // 0x1008ea590, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // RuntimeGeneratedFontMetrics::RuntimeGeneratedFontMetrics(): jumps straight to the base-object constructor

    // 0x1008ffaa0, 32 bytes, base-object constructor, inline, placed by class name
    // VectorFontSource::VectorFontSource()
    void VectorFontSource::VectorFontSource() {
        _func_decltype_nullptr* in_RSI;

        field_0 = (VectorFontLoader*)0;
        field_8 = (FT_FaceRec_*)0;
        new (&field_16, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

} // namespace jag::graphics
