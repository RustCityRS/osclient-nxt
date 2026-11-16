// libs/graphics/runetek7/scenegraph/VisFilters.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class DefaultVisTestFunctor {
    public:
        bool operator()(std::array<math::IntersectionType, 10ul>& intersectionTypes, const math::Frustum& frustum1,
                        const math::Frustum& frustum2, int arg4, const math::AABB& aabb, const math::OBB& obb) const;

        uint8_t _unknown_0[1];
    };

    class SunShadowPassVisTestFunctor {
    public:
        SunShadowPassVisTestFunctor();
        unsigned long operator()(std::array<math::IntersectionType, 10ul>& intersectionTypes, math::Frustum& frustum1,
                                 const math::Frustum& frustum2, int arg4, const math::AABB& aabb,
                                 const math::OBB& obb) const;
        static int32_t m_shadowCasterVolumeRadiusScale; // = 1062417203
        static bool m_shadowCasterAreaCulling;          // = 1
        static bool m_shadowCasterVolumeCulling;        // = 1
        static bool m_shadowCasterVolumeIntersection;
        static bool m_showShadowCasterVolumeCapsules;

    private:
        uint8_t _unknown_0[176];
        QueryPass* field_176;
        unsigned int field_184;
        uint8_t _unknown_188[4];
    };

    // 0x1001cf2c0
    bool DefaultVisTestFunctor::operator()(std::array<math::IntersectionType, 10ul>& intersectionTypes,
                                           const math::Frustum& frustum1, const math::Frustum& frustum2, int arg4,
                                           const math::AABB& aabb, const math::OBB& obb) const {
        char cVar1 = frustum2.TestIntersection(obb);
        char* pcVar2 = &intersectionTypes[(long)arg4];
        *pcVar2 = cVar1;
        return cVar1;
    }

    // 0x1001df300
    SunShadowPassVisTestFunctor::SunShadowPassVisTestFunctor()
        : math::Frustum(), field_176(nullptr), field_184(4294967295) {}

} // namespace jag::graphics
