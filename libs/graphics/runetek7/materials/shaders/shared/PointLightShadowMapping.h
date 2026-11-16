// libs/graphics/runetek7/materials/shaders/shared/PointLightShadowMapping.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class PointLightShadowMapping {
    public:
        PointLightShadowMapping();
        PointLightShadowMapping* BuildPreProcessor();
        PointLightShadowMapping* BuildUniforms();
        PointLightShadowMapping* BuildSharedFragment();
        PointLightShadowMapping* BuildFSFragment();
        void SetDiskFilter(ShadowMapFilter);
        static /* 12 bytes */ m_diskFilter; // = { 5, 0, 0 }

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100919310, 16 bytes, inline, placed by class name and debug map
    // PointLightShadowMapping::SetDiskFilter(ShadowMapFilter)
    void PointLightShadowMapping::SetDiskFilter(undefined4 param_1) {
        m_diskFilter = param_1;
    }

} // namespace jag::graphics
