// libs/oldscape/osrendercore/rseven/entities/Terrain.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::oldscape::rseven {
    class Terrain {
    public:
        // virtual methods in vtable order
        virtual ~Terrain();
        virtual void GatherDrawableElements(jag::graphics::DrawableQueue&, jag::graphics::RT7Core&,
                                            jag::math::Matrix44T<float> const&, jag::graphics::SceneViewData const&,
                                            jag::graphics::EffectManager const&);
        virtual void Destruct();
        void RenderThread_Build(MapRebuildSquare const&);
        Terrain(jag::graphics::GraphNode*, int, int);

        // data members, from how the methods use this: 204 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[8];
        undefined4 field_16; // offset 16
        char _unknown_20[108];
        int field_128;        // offset 128
        int field_132;        // offset 132
        undefined1 field_136; // offset 136
        char _unknown_137[39];
        shared_ptr field_176; // offset 176
        undefined1 field_192; // offset 192
        char _unknown_193[3];
        undefined4 field_196; // offset 196
        char _unknown_200[4];
    };

    class TerrainFace {
    public:
        TerrainFace();

        // data members, from how the methods use this: 92 bytes
        char _unknown_0[84];
        undefined4 field_84; // offset 84
        char _unknown_88[4];
    };

    // 0x1001d1f60, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // OSRenderCore_MaterialRawProvider::~OSRenderCore_MaterialRawProvider()
    void OSRenderCore_MaterialRawProvider::~OSRenderCore_MaterialRawProvider() {
        ~OSRenderCore_MaterialRawProvider(this);
        operator_delete(this);
    }

    // 0x1001d1f80, 16 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_MaterialRawProvider::IsReady()
    void OSRenderCore_MaterialRawProvider::IsReady() {
        (&field_24)->operator_cast_to_bool();
    }

    // 0x1001d1f90, 16 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_MaterialRawProvider::GetMaximumMaterialRawId()
    void OSRenderCore_MaterialRawProvider::GetMaximumMaterialRawId() {
        (&field_32)->size();
    }

    // 0x1001d1fa0, 64 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_MaterialRawProvider::GetMaterialsArchiveSettings() const
    undefined8 OSRenderCore_MaterialRawProvider::GetMaterialsArchiveSettings() {
        if (m_materialsArchiveSettings == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_materialsArchiveSettings != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                      "rseven/OSMaterialRawProvider.h",
                      36, "[OSMaterialRawProvider] - m_materialsArchiveSettings is null.");
        }
        return m_materialsArchiveSettings;
    }

    // 0x1001d1fe0, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // OSRenderCore_TextureDataProvider::~OSRenderCore_TextureDataProvider()
    void OSRenderCore_TextureDataProvider::~OSRenderCore_TextureDataProvider() {
        ~OSRenderCore_TextureDataProvider(this);
        operator_delete(this);
    }

    // 0x1001d2000, 16 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // OSRenderCore_TextureDataProvider::GetTexturesCompressedDXTArchive() const
    /* game::BaseConfigTypeList::GetConfigGroup() const */

    Js5ConfigGroup* game::BaseConfigTypeList::GetConfigGroup() {
        return m_pConfigGroup;
    }

    // 0x1001d2010, 16 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // OSRenderCore_TextureDataProvider::GetSpritesArchive() const
    /* jag::graphics::ParticleManager::GetHeightProvider() */

    ParticleManagerHeightProvider* jag::graphics::ParticleManager::GetHeightProvider() {
        return m_pHeightProvider;
    }

    // 0x1001d2020, 16 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_TextureDataProvider::GetTextureDataPNG(jag::graphics::TextureData&, TextureType const*, unsigned int)
    void OSRenderCore_TextureDataProvider::GetTextureDataPNG(TextureData* param_1, TextureType* param_2, uint param_3) {
        (*(code*)field_0[6])();
    }

    // 0x1001d2030, 48 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_TextureDataProvider::GetTextureDataDXT(jag::graphics::TextureData&, TextureType const*, unsigned int)
    void OSRenderCore_TextureDataProvider::GetTextureDataDXT(TextureData* param_1, TextureType* param_2, uint param_3) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                        "rseven/OSTextureDataProvider.h",
                        62, "Attempt to fetch DXT texture %d, but dxt not supported by os textures");
    }

    // 0x1001d2060, 48 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_TextureDataProvider::GetTextureDataETC(jag::graphics::TextureData&, TextureType const*, unsigned int)
    void OSRenderCore_TextureDataProvider::GetTextureDataETC(TextureData* param_1, TextureType* param_2, uint param_3) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                        "rseven/OSTextureDataProvider.h",
                        68, "Attempt to fetch ETC texture %d, but etc not supported by os textures");
    }

} // namespace jag::oldscape::rseven

namespace jag::oldscape {
    // 0x1001d1ee0, 32 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_Impl::GetAudioAPI()
    void OSRenderCore_Impl::GetAudioAPI() {
        (&field_16020856)->get();
    }

    // 0x1001d1f00, 32 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_Impl::OnResourcesCreatedOrDestroyed(bool)
    void OSRenderCore_Impl::OnResourcesCreatedOrDestroyed(bool param_1) {
        std::atomic<bool>::operator=((atomic<bool>*)&field_55398592, param_1);
    }

} // namespace jag::oldscape

namespace jag::game {
    // 0x1001d2000: the linker folded this into oldscape::rseven::OSRenderCore_TextureDataProvider::GetTexturesCompressedDXTArchive() const, which has identical code
    BaseConfigTypeList::GetConfigGroup() const;

} // namespace jag::game
