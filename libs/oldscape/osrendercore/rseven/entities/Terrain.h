// libs/oldscape/osrendercore/rseven/entities/Terrain.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::oldscape::rseven {
    class Terrain {
    public:
        // virtual methods in vtable order
        virtual ~Terrain();
        virtual void GatherDrawableElements(jag::graphics::DrawableQueue& drawableQueue,
                                            jag::graphics::RT7Core& rt7Core,
                                            const jag::math::Matrix44T<float>& matrix44,
                                            const jag::graphics::SceneViewData& sceneViewData,
                                            const jag::graphics::EffectManager& effectManager);
        virtual void Destruct();
        void RenderThread_Build(const MapRebuildSquare& mapRebuildSquare);
        Terrain(jag::graphics::GraphNode* graphNode, int arg2, int arg3);

    private:
        uint8_t _unknown_8[8];
        EntityType field_16;
        uint8_t _unknown_20[108];
        int field_128;
        int field_132;
        uint8_t field_136;
        uint8_t _unknown_137[39];
        shared_ptr field_176;
        uint8_t field_192;
        uint8_t _unknown_193[3];
        uint32_t field_196;
        uint8_t _unknown_200[4];
    };

    class TerrainFace {
    public:
        TerrainFace();

    private:
        uint8_t _unknown_0[84];
        uint32_t field_84;
        uint8_t _unknown_88[4];
    };

    // 0x1001d1f60
    OSRenderCore_MaterialRawProvider::~OSRenderCore_MaterialRawProvider() {
        ~OSRenderCore_MaterialRawProvider(this);
        operator delete(this);
    }

    // 0x1001d1f80
    void OSRenderCore_MaterialRawProvider::IsReady() {
        (&field_24)->operator_cast_to_bool();
    }

    // 0x1001d1f90
    void OSRenderCore_MaterialRawProvider::GetMaximumMaterialRawId() {
        field_32.size();
    }

    // 0x1001d1fa0
    uint64_t OSRenderCore_MaterialRawProvider::GetMaterialsArchiveSettings() const {
        if (m_materialsArchiveSettings == 0) {
            LogAssert("m_materialsArchiveSettings != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                      "rseven/OSMaterialRawProvider.h",
                      36, "[OSMaterialRawProvider] - m_materialsArchiveSettings is null.");
        }
        return m_materialsArchiveSettings;
    }

    // 0x1001d1fe0
    OSRenderCore_TextureDataProvider::~OSRenderCore_TextureDataProvider() {
        ~OSRenderCore_TextureDataProvider(this);
        operator delete(this);
    }

    // 0x1001d2000
    Js5ConfigGroup* OSRenderCore_TextureDataProvider::GetTexturesCompressedDXTArchive() const {
        return m_pConfigGroup;
    }

    // 0x1001d2010
    ParticleManagerHeightProvider* OSRenderCore_TextureDataProvider::GetSpritesArchive() const {
        return m_pHeightProvider;
    }

    // 0x1001d2020
    void OSRenderCore_TextureDataProvider::GetTextureDataPNG(jag::graphics::TextureData& textureData,
                                                             const TextureType* textureType, unsigned int arg3) {
        GetTextureDataUncompressed((TextureType*)textureData, (unsigned int)textureType);
    }

    // 0x1001d2030
    void OSRenderCore_TextureDataProvider::GetTextureDataDXT(jag::graphics::TextureData& textureData,
                                                             const TextureType* textureType, unsigned int arg3) {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                        "rseven/OSTextureDataProvider.h",
                        62, "Attempt to fetch DXT texture %d, but dxt not supported by os textures");
    }

    // 0x1001d2060
    void OSRenderCore_TextureDataProvider::GetTextureDataETC(jag::graphics::TextureData& textureData,
                                                             const TextureType* textureType, unsigned int arg3) {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                        "rseven/OSTextureDataProvider.h",
                        68, "Attempt to fetch ETC texture %d, but etc not supported by os textures");
    }

} // namespace jag::oldscape::rseven

namespace jag::oldscape {
    // 0x1001d1ee0
    void OSRenderCore_Impl::GetAudioAPI() {
        field_16020856.get();
    }

    // 0x1001d1f00
    void OSRenderCore_Impl::OnResourcesCreatedOrDestroyed(bool arg1) {
        field_55398592 = arg1;
    }

} // namespace jag::oldscape

namespace jag::game {
    // 0x1001d2000: BaseConfigTypeList::GetConfigGroup() const has the same machine code as oldscape::rseven::OSRenderCore_TextureDataProvider::GetTexturesCompressedDXTArchive() const

} // namespace jag::game
