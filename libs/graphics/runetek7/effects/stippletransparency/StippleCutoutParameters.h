// libs/graphics/runetek7/effects/stippletransparency/StippleCutoutParameters.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class LightProbeVertex {
    public:
        LightProbeVertex();

        uint8_t _unknown_0[20];
    };

    class StippleCutoutParameters {
    public:
        void GetPacked() const;
        StippleCutoutParameters();
        void Setup(const math::AABB& aabb, float arg2, const math::Vector3T<float>& vector3,
                   const math::Matrix44T<float>& matrix441, const math::Matrix44T<float>& matrix442);
        void SetToIdentity();
        static float m_tweakViewFocusBaseDistance;          // = 2000.0f
        static int32_t m_tweakViewFocusVerticalOffsetMin;   // = 1060320051
        static int32_t m_tweakViewFocusVerticalOffsetMax;   // = 1061997773
        static int32_t m_tweakViewFocusMinimumTransparency; // = 1036831949
        static int32_t m_tweakViewFocusStart;               // = 1045220557
        static float m_tweakViewFocusRange;                 // = 1.25f

    private:
        uint32_t field_0;
        uint32_t field_4;
        float field_8;
        float field_12;
        float field_16;
        float field_20;
        uint32_t field_24;
        uint8_t _unknown_28[4];
    };

} // namespace jag::graphics
