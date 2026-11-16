// libs/graphics/runetek7/renderer/DrawableRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::graphics {
    class DrawableRenderer {
    public:
        // virtual methods in vtable order
        virtual ~DrawableRenderer();
        DrawableRenderer();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    DrawableRenderer::~DrawableRenderer();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    DrawableRenderer::~DrawableRenderer();

    // 0x10004af40: the linker folded this into std::__function::__func<std::__bind<void (oldscape::Client::*)(), oldscape::Client*&>, std::allocator<std::__bind<void (oldscape::Client::*)(), oldscape::Client*&> >, void (oldscape::ClientWindowMode)>::~__func(), which has identical code
    DrawableRenderer::~DrawableRenderer();

    // 0x1007d4030, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DrawableBatchRenderer::DrawableBatchRenderer()
    void DrawableBatchRenderer::DrawableBatchRenderer() {
        new (this) DrawableRenderer();
        field_0 = PTR_vtable_100ee8838 + 16;
    }

    // 0x1007d4060, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ParticleCommonMaterials::ParticleCommonMaterials(): jumps straight to the base-object constructor

    // 0x1007d4070, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ParticleData::ParticleData(): jumps straight to the base-object constructor

    // 0x1007d40b0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // ParticleData::~ParticleData(): jumps straight to the base-object destructor

    // 0x1007d40c0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // ParticleCommonMaterials::~ParticleCommonMaterials(): jumps straight to the base-object destructor

    // 0x1007d4d40, 32 bytes, inline, placed by debug map only (low confidence)
    // ParticleCommonMaterials::GetMaterial(ParticleMaterial::MaterialType) const
    void ParticleCommonMaterials::GetMaterial(int param_2) {
        std::array<ParticleMaterial, 6ul>::operator[]((array<ParticleMaterial, 6ul>*)&field_16, (long)param_2);
    }

    // 0x1007d5b40, 16 bytes, inline, placed by debug map only (low confidence)
    // ParticleCommonMaterials::GetTextureUnitAtlas() const
    undefined4 ParticleCommonMaterials::GetTextureUnitAtlas() {
        return m_textureUnitAtlas;
    }

    // 0x1007d5b50, 16 bytes, inline, placed by debug map only (low confidence)
    // ParticleCommonMaterials::GetTextureUnitAtlasSettings() const
    undefined4 ParticleCommonMaterials::GetTextureUnitAtlasSettings() {
        return m_textureUnitAtlasSettings;
    }

    // 0x1007d6510, 16 bytes, inline, placed by debug map only (low confidence)
    // ParticleCommonMaterials::FlagDirty()
    void ParticleCommonMaterials::FlagDirty() {
        field_3376 = -1;
    }

    // 0x1009301c0, 32 bytes, base-object constructor, inline, placed by class name
    // DrawableRenderer::DrawableRenderer()
    void DrawableRenderer::DrawableRenderer() {
        field_0 = PTR_vtable_100ee8798 + 16;
    }

} // namespace jag::graphics
