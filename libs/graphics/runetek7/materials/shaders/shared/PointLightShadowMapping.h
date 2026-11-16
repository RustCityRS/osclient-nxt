// libs/graphics/runetek7/materials/shaders/shared/PointLightShadowMapping.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class PointLightShadowMapping {
    public:
        PointLightShadowMapping();
        auto BuildPreProcessor();
        auto BuildUniforms();
        auto BuildSharedFragment();
        auto BuildFSFragment();
        void SetDiskFilter(ShadowMapFilter shadowMapFilter);
        static int32_t m_diskFilter[3]; // = { 5, 0, 0 }

        uint8_t _unknown_0[1];
    };

    // 0x100919310
    void PointLightShadowMapping::SetDiskFilter(ShadowMapFilter shadowMapFilter) {
        m_diskFilter = shadowMapFilter;
    }

} // namespace jag::graphics
