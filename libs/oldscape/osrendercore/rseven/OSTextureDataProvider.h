// libs/oldscape/osrendercore/rseven/OSTextureDataProvider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::rseven {
    class OSRenderCore_TextureDataProvider
        : public jag::graphics::RT7TextureDataProvider // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~OSRenderCore_TextureDataProvider();
        virtual GetTexturesCompressedDXTArchive() const;
        virtual GetTexturesCompressedETCArchive() const;
        virtual GetTexturesUncompressedMippedArchive() const;
        virtual GetSpritesArchive() const;
        virtual GetTextureDataUncompressed(jag::graphics::TextureData&, TextureType const*, unsigned int);
        virtual void GetTextureDataPNG(jag::graphics::TextureData&, TextureType const*, unsigned int);
        virtual void GetTextureDataDXT(jag::graphics::TextureData&, TextureType const*, unsigned int);
        virtual void GetTextureDataETC(jag::graphics::TextureData&, TextureType const*, unsigned int);
        OSRenderCore_TextureDataProvider();
        void AddData(RenderState const&);
        void HandleRebuild(MapRebuildResults&);
        Gamma() const;
        SetGamma(float);

        // data members, from how the methods use this: 112 bytes, the first 48 are RT7TextureDataProvider
        char _unknown_48[32];
        undefined1 m_pTexturesCompressedDXTArchive[8]; // offset 80
        char _unknown_88[16];
        undefined1 m_pSpritesArchive[8]; // offset 104
    };

    // 0x1001bc4c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // OSRenderCore_TextureDataProvider::OSRenderCore_TextureDataProvider(): jumps straight to the base-object constructor

    // 0x1001bc4d0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // OSRenderCore_TextureDataProvider::~OSRenderCore_TextureDataProvider(): jumps straight to the base-object destructor

    // 0x1001c4510, 16 bytes, inline, placed by class header (inline)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // OSRenderCore_TextureDataProvider::Gamma() const
    /* game::EnvBloomSettings::GetBrightpassThreshold() const */

    float game::EnvBloomSettings::GetBrightpassThreshold() {
        return m_brightpassThreshold;
    }

    // 0x1001c4520, 16 bytes, inline, placed by class header (inline)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // OSRenderCore_TextureDataProvider::SetGamma(float)
    /* jag::math::Rect<float>::SetWidth(float) */

    void jag::math::Rect<float>::SetWidth(float param_1) {
        *(float*)(this + 8) = param_1;
    }

} // namespace jag::oldscape::rseven
