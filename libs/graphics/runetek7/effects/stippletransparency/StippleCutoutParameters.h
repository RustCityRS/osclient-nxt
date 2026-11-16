// libs/graphics/runetek7/effects/stippletransparency/StippleCutoutParameters.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class LightProbeVertex {
    public:
        LightProbeVertex();

        // data members, from how the methods use this: 20 bytes
        char _unknown_0[20];
    };

    class StippleCutoutParameters {
    public:
        GetPacked() const;
        StippleCutoutParameters();
        void Setup(math::AABB const&, float, math::Vector3T<float> const&, math::Matrix44T<float> const&,
                   math::Matrix44T<float> const&);
        void SetToIdentity();
        static float /* 4 bytes */ m_tweakViewFocusBaseDistance;  // = 2000.0f
        static /* 4 bytes */ m_tweakViewFocusVerticalOffsetMin;   // = 1060320051
        static /* 4 bytes */ m_tweakViewFocusVerticalOffsetMax;   // = 1061997773
        static /* 4 bytes */ m_tweakViewFocusMinimumTransparency; // = 1036831949
        static /* 4 bytes */ m_tweakViewFocusStart;               // = 1045220557
        static float /* 4 bytes */ m_tweakViewFocusRange;         // = 1.25f

        // data members, from how the methods use this: 32 bytes
        undefined4 field_0;  // offset 0
        undefined4 field_4;  // offset 4
        float field_8;       // offset 8
        float field_12;      // offset 12
        float field_16;      // offset 16
        float field_20;      // offset 20
        undefined4 field_24; // offset 24
        char _unknown_28[4];
    };

    // 0x10093dd30, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // StippleCutoutParameters::StippleCutoutParameters(): jumps straight to the base-object constructor

} // namespace jag::graphics
