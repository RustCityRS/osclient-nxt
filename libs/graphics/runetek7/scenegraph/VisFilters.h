// libs/graphics/runetek7/scenegraph/VisFilters.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class DefaultVisTestFunctor {
    public:
        bool operator()(std::array<math::IntersectionType, 10ul>&, math::Frustum const&, math::Frustum const&, int,
                        math::AABB const&, math::OBB const&) const;

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    class SunShadowPassVisTestFunctor {
    public:
        SunShadowPassVisTestFunctor();
        ulong operator()(std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum const&, int,
                         math::AABB const&, math::OBB const&) const;
        static /* 4 bytes */ m_shadowCasterVolumeRadiusScale; // = 1062417203
        static /* 1 bytes */ m_shadowCasterAreaCulling;       // = 1
        static /* 1 bytes */ m_shadowCasterVolumeCulling;     // = 1
        static /* 1 bytes */ m_shadowCasterVolumeIntersection;
        static /* 1 bytes */ m_showShadowCasterVolumeCapsules;

        // data members, from how the methods use this: 192 bytes
        char _unknown_0[176];
        QueryPass* field_176; // offset 176
        uint field_184;       // offset 184
        char _unknown_188[4];
    };

    // 0x1001cf2c0, 64 bytes, inline, placed by debug map only (low confidence)
    // DefaultVisTestFunctor::operator()(std::array<math::IntersectionType, 10ul>&, math::Frustum const&, math::Frustum const&, int, math::AABB const&, math::OBB const&) const
    /* DefaultVisTestFunctor::TEMPNAMEPLACEHOLDERVALUE(std::array<math::IntersectionType,
   10ul>&, math::Frustum const&, math::Frustum const&, int, math::AABB const&,
   math::OBB const&) const */

    bool DefaultVisTestFunctor::operator()(array* param_1, Frustum* param_2, Frustum* param_3, int param_4,
                                           AABB* param_5, OBB* param_6) {
        char cVar1;
        char* pcVar2;

        cVar1 = param_3->TestIntersection(param_6);
        pcVar2 = (char*)std::array<math::IntersectionType, 10ul>::operator[](
            (array<math::IntersectionType, 10ul>*)param_1, (long)param_4);
        *pcVar2 = cVar1;
        return cVar1 != '\0';
    }

    // 0x1001cf380, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // SunShadowPassVisTestFunctor::SunShadowPassVisTestFunctor(): jumps straight to the base-object constructor

    // 0x1001cf390, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // PointLightShadowPassVisTestFunctor::PointLightShadowPassVisTestFunctor(): jumps straight to the base-object constructor

    // 0x1001df300, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // SunShadowPassVisTestFunctor::SunShadowPassVisTestFunctor()
    void SunShadowPassVisTestFunctor::SunShadowPassVisTestFunctor() {
        new (this) math::Frustum();
        new (&field_160) math::Vector3T<int>();
        field_176 = (QueryPass*)0;
        field_184 = 4294967295;
    }

} // namespace jag::graphics
