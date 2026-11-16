// libs/graphics/runetek7/terrain/TerrainMaterial.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class TerrainMaterial {
    public:
        // virtual methods in vtable order
        virtual ~TerrainMaterial();
        TerrainMaterial();
        TerrainMaterial(TerrainMaterial&& terrainMaterial);
        TerrainMaterial(const TerrainMaterial& terrainMaterial);
        void InitRenderPassEffects();
        void SetTextureAtlasReference(const shared_ptr<TextureAtlasReference>& textureAtlasReference);
        void GetTextureAtlasReference() const;

    private:
        uint64_t field_8;
        uint8_t* field_16;
        uint8_t* field_24;
        unsigned char field_32;
        uint8_t _unknown_33[3];
        uint32_t field_36;
        int field_40;
        uint8_t _unknown_44[484];
        Callstack field_528;
    };

    // 0x1007b51a0
    void TerrainMaterial::SetTextureAtlasReference(const shared_ptr<TextureAtlasReference>& textureAtlasReference) {
        (*((field_528 + 8))) = textureAtlasReference;
    }

    // 0x1007b8920
    void TerrainMaterial::GetTextureAtlasReference() const {
        ((field_528 + 8))->end();
    }

    // 0x1007bcdc0
    TerrainMaterial::~TerrainMaterial() {
        ((field_528 + 8))->~shared_ptr();
    }

} // namespace jag::graphics
