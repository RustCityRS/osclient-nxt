// libs/graphics/runetek7/renderer/DrawableRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::graphics {
    class DrawableRenderer {
    public:
        // virtual methods in vtable order
        virtual ~DrawableRenderer();
        DrawableRenderer();
    };

    // 0x100009e70: DrawableRenderer::~DrawableRenderer() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1007d4030
    DrawableBatchRenderer::DrawableBatchRenderer() : DrawableRenderer() {}

    // 0x1007d4d40
    void ParticleCommonMaterials::GetMaterial(ParticleMaterial::MaterialType materialType) const {
        field_16[(long)(int)materialType];
    }

    // 0x1007d5b40
    uint32_t ParticleCommonMaterials::GetTextureUnitAtlas() const {
        return m_textureUnitAtlas;
    }

    // 0x1007d5b50
    uint32_t ParticleCommonMaterials::GetTextureUnitAtlasSettings() const {
        return m_textureUnitAtlasSettings;
    }

    // 0x1007d6510
    void ParticleCommonMaterials::FlagDirty() {
        field_3376 = 4294967295;
    }

    // 0x1009301c0
    DrawableRenderer::DrawableRenderer() {}

} // namespace jag::graphics
