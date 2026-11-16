// libs/oldscape/osrendercore/rseven/OSTextureDataProvider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::rseven {
    class OSRenderCore_TextureDataProvider
        : public jag::graphics::RT7TextureDataProvider // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~OSRenderCore_TextureDataProvider();
        virtual Js5ConfigGroup* GetTexturesCompressedDXTArchive() const;
        virtual uint64_t GetTexturesCompressedETCArchive() const;
        virtual uint64_t GetTexturesUncompressedMippedArchive() const;
        virtual ParticleManagerHeightProvider* GetSpritesArchive() const;
        virtual uint8_t* GetTextureDataUncompressed(jag::graphics::TextureData& textureData,
                                                    const TextureType* textureType, unsigned int arg3);
        virtual void GetTextureDataPNG(jag::graphics::TextureData& textureData, const TextureType* textureType,
                                       unsigned int arg3);
        virtual void GetTextureDataDXT(jag::graphics::TextureData& textureData, const TextureType* textureType,
                                       unsigned int arg3);
        virtual void GetTextureDataETC(jag::graphics::TextureData& textureData, const TextureType* textureType,
                                       unsigned int arg3);
        OSRenderCore_TextureDataProvider();
        void AddData(const RenderState& renderState);
        void HandleRebuild(MapRebuildResults& mapRebuildResults);
        float Gamma() const;
        void SetGamma(float arg1);

    private:
        uint8_t _unknown_48[32];
        uint8_t m_pTexturesCompressedDXTArchive[8];
        uint8_t _unknown_88[16];
        uint8_t m_pSpritesArchive[8];
    };

    // 0x1001c4510
    float OSRenderCore_TextureDataProvider::Gamma() const {
        return m_brightpassThreshold;
    }

    // 0x1001c4520
    void OSRenderCore_TextureDataProvider::SetGamma(float arg1) {
        *(float*)(this + 8) = arg1;
    }

} // namespace jag::oldscape::rseven
