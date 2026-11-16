// libs/graphics/runetek7/lighting/shadowmapping/ShadowMapCommon.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class LightShadowParams {
    public:
        LightShadowParams();

        // data members, from how the methods use this: 16 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[3];
        undefined4 field_4; // offset 4
        undefined8 field_8; // offset 8
    };

    // 0x1008ad920, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // LightShadowParams::LightShadowParams(): jumps straight to the base-object constructor

} // namespace jag

namespace jag::graphics {
    // 0x1008ada70, 32 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ShadowCubeMapAtlasData::ShadowCubeMapAtlasData(graphicutils::TextureAtlasSlotPacker const&, std::array<graphicutils::TextureAtlasSlot2D, 6ul> const&, unsigned int, unsigned int, unsigned int, unsigned int)
    /* ShadowCubeMapAtlasData::ShadowCubeMapAtlasData(graphicutils::TextureAtlasSlotPacker
   const&, std::array<graphicutils::TextureAtlasSlot2D, 6ul> const&, unsigned int, unsigned
   int, unsigned int, unsigned int) */

    void ShadowCubeMapAtlasData::ShadowCubeMapAtlasData(TextureAtlasSlotPacker* param_1, array* param_2, uint param_3,
                                                        uint param_4, uint param_5, uint param_6) {
        ShadowCubeMapAtlasData(this, param_1, param_2, param_3, param_4, param_5, param_6);
    }

} // namespace jag::graphics
