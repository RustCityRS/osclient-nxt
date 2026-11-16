// libs/graphics/runetek7/lighting/shadowmapping/ShadowMapCommon.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class LightShadowParams {
    public:
        LightShadowParams();

    private:
        uint8_t field_0;
        uint8_t _unknown_1[3];
        uint32_t field_4;
        uint64_t field_8;
    };

} // namespace jag

namespace jag::graphics {
    // 0x1008ada70
    ShadowCubeMapAtlasData::ShadowCubeMapAtlasData(
        const graphicutils::TextureAtlasSlotPacker& textureAtlasSlotPacker,
        const std::array<graphicutils::TextureAtlasSlot2D, 6ul>& textureAtlasSlot2Ds, unsigned int arg3,
        unsigned int arg4, unsigned int arg5, unsigned int arg6) {
        ShadowCubeMapAtlasData(textureAtlasSlotPacker, textureAtlasSlot2Ds, arg3, arg4, arg5, arg6);
    }

} // namespace jag::graphics
