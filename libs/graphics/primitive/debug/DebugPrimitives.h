// libs/graphics/primitive/debug/DebugPrimitives.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugCircle2D {
    public:
        DebugCircle2D(const math::Vector2T<float>& vector2, float arg2, bool arg3,
                      const DebugDataBasic& debugDataBasic);
    };

    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugFrustum {
    public:
        DebugFrustum(const math::Frustum& frustum, const DebugDataBasic& debugDataBasic);
    };

    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugImage3D {
    public:
        DebugImage3D(const render::Texture* texture, const math::Rect<float>& rect, bool arg3, bool arg4,
                     const DebugDataBasic& debugDataBasic);
    };

    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugPlane {
    public:
        DebugPlane(const math::PlaneT<float>& plane, const DebugDataBasic& debugDataBasic);
    };

    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugRect2D {
    public:
        DebugRect2D(const math::Rect<int>& rect, bool arg2, const DebugDataBasic& debugDataBasic);
    };

    // 0x1009c6730
    void DebugPrimitiveRenderGroups<DebugTri<DebugDataBasic>>::AddPrimitive(const DebugTri<DebugDataBasic>& debugTri,
                                                                            unsigned int arg2) {
        pair<render::TextureCube const*, float const> local_38[16];

        vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>>* this_00 =
            (vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>>*)(*((this + 64)))[(unsigned long)arg2];
        local_38->pair<render::TextureCube const*&, float&, void>(debugTri, 0.0);
        this_00->push_back(*local_38);
    }

    // 0x1009c6900
    void DebugPrimitiveRenderGroups<DebugLine<DebugDataBasic>>::AddPrimitive(const DebugLine<DebugDataBasic>& debugLine,
                                                                             unsigned int arg2) {
        pair<render::TextureCube const*, float const> local_38[16];

        vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>>* this_00 =
            (vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>>*)(*((this + 64)))[(unsigned long)arg2];
        local_38->pair<render::TextureCube const*&, float&, void>(debugLine, 0.0);
        this_00->push_back(*local_38);
    }

    // 0x1009c6ad0
    void DebugPrimitiveRenderGroups<DebugEllipsoid<DebugDataBasic>>::AddPrimitive(
        const DebugEllipsoid<DebugDataBasic>& debugEllipsoid, unsigned int arg2) {
        pair<render::TextureCube const*, float const> local_38[16];

        vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>>* this_00 =
            (vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>>*)(*((this + 64)))[(unsigned long)arg2];
        local_38->pair<render::TextureCube const*&, float&, void>(debugEllipsoid, 0.0);
        this_00->push_back(*local_38);
    }

    // 0x1009c6d80
    void DebugPrimitiveRenderGroups<DebugCapsule<DebugDataBasic>>::AddPrimitive(
        const DebugCapsule<DebugDataBasic>& debugCapsule, unsigned int arg2) {
        pair<render::TextureCube const*, float const> local_38[16];

        vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>>* this_00 =
            (vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>>*)(*((this + 64)))[(unsigned long)arg2];
        local_38->pair<render::TextureCube const*&, float&, void>(debugCapsule, 0.0);
        this_00->push_back(*local_38);
    }

    // 0x1009c6fb0
    void DebugPrimitiveRenderGroups<DebugCone<DebugDataBasic>>::AddPrimitive(const DebugCone<DebugDataBasic>& debugCone,
                                                                             unsigned int arg2) {
        pair<render::TextureCube const*, float const> local_38[16];

        vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>>* this_00 =
            (vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>>*)(*((this + 64)))[(unsigned long)arg2];
        local_38->pair<render::TextureCube const*&, float&, void>(debugCone, 0.0);
        this_00->push_back(*local_38);
    }

    // 0x1009c71a0
    void DebugPrimitiveRenderGroups<DebugCylinder<DebugDataBasic>>::AddPrimitive(
        const DebugCylinder<DebugDataBasic>& debugCylinder, unsigned int arg2) {
        vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>>* this_00;
        pair<render::TextureCube const*, float const> local_38[16];

        this_00 =
            (vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>>*)(*((this + 64)))[(unsigned long)arg2];
        local_38->pair<render::TextureCube const*&, float&, void>(debugCylinder, 0.0);
        this_00->push_back(*local_38);
    }

    // 0x1009c73a0
    void DebugPrimitiveRenderGroups<DebugAABB<DebugDataBasic>>::AddPrimitive(const DebugAABB<DebugDataBasic>& debugAABB,
                                                                             unsigned int arg2) {
        pair<render::TextureCube const*, float const> local_38[16];

        vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>>* this_00 =
            (vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>>*)(*((this + 64)))[(unsigned long)arg2];
        local_38->pair<render::TextureCube const*&, float&, void>(debugAABB, 0.0);
        this_00->push_back(*local_38);
    }

    // 0x1009c75d0
    void DebugPrimitiveRenderGroups<DebugOBB<DebugDataBasic>>::AddPrimitive(const DebugOBB<DebugDataBasic>& debugOBB,
                                                                            unsigned int arg2) {
        pair<render::TextureCube const*, float const> local_38[16];

        vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>>* this_00 =
            (vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>>*)(*((this + 64)))[(unsigned long)arg2];
        local_38->pair<render::TextureCube const*&, float&, void>(debugOBB, 0.0);
        this_00->push_back(*local_38);
    }

    // 0x1009c7c30
    void DebugPrimitiveRenderGroups<DebugFrustum<DebugDataBasic>>::AddPrimitive(
        const DebugFrustum<DebugDataBasic>& debugFrustum, unsigned int arg2) {
        pair<render::TextureCube const*, float const> local_38[16];

        vector<eastl::pair<DebugFrustum<DebugDataBasic> const*, float>>* this_00 =
            (vector<eastl::pair<DebugFrustum<DebugDataBasic> const*, float>>*)(*((this + 64)))[(unsigned long)arg2];
        local_38->pair<render::TextureCube const*&, float&, void>(debugFrustum, 0.0);
        this_00->push_back(*local_38);
    }

    // 0x1009c81f0
    void
    DebugPrimitiveRenderGroups<DebugPlane<DebugDataBasic>>::AddPrimitive(const DebugPlane<DebugDataBasic>& debugPlane,
                                                                         unsigned int arg2) {
        pair<render::TextureCube const*, float const> local_38[16];

        vector<eastl::pair<DebugPlane<DebugDataBasic> const*, float>>* this_00 =
            (vector<eastl::pair<DebugPlane<DebugDataBasic> const*, float>>*)(*((this + 64)))[(unsigned long)arg2];
        local_38->pair<render::TextureCube const*&, float&, void>(debugPlane, 0.0);
        this_00->push_back(*local_38);
    }

    // 0x1009c8400
    DebugImage2D<DebugDataBasic>::DebugImage2D(const render::Texture* texture, const math::Rect<float>& rect,
                                               const math::Vector2T<float>& vector21,
                                               const math::Vector2T<float>& vector22, bool arg5, bool arg6, bool arg7,
                                               const DebugDataBasic& debugDataBasic) {
        DebugImage2D(this, texture, rect, vector21, vector22, arg5, arg6, arg7, debugDataBasic);
    }

    // 0x1009c8430
    void DebugPrimitiveRenderGroups<DebugImage2D<DebugDataBasic>>::AddPrimitive(
        const DebugImage2D<DebugDataBasic>& debugImage2D, unsigned int arg2) {
        pair<render::TextureCube const*, float const> local_38[16];

        vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>>* this_00 =
            (vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>>*)(*((this + 64)))[(unsigned long)arg2];
        local_38->pair<render::TextureCube const*&, float&, void>(debugImage2D, 0.0);
        this_00->push_back(*local_38);
    }

    // 0x1009c8600
    void DebugPrimitiveRenderGroups<DebugImageCube<DebugDataBasic>>::AddPrimitive(
        const DebugImageCube<DebugDataBasic>& debugImageCube, unsigned int arg2) {
        pair<render::TextureCube const*, float const> local_38[16];

        vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>>* this_00 =
            (vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>>*)(*((this + 64)))[(unsigned long)arg2];
        local_38->pair<render::TextureCube const*&, float&, void>(debugImageCube, 0.0);
        this_00->push_back(*local_38);
    }

    // 0x1009c87d0
    void DebugPrimitiveRenderGroups<DebugImage3D<DebugDataBasic>>::AddPrimitive(
        const DebugImage3D<DebugDataBasic>& debugImage3D, unsigned int arg2) {
        pair<render::TextureCube const*, float const> local_38[16];

        vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>>* this_00 =
            (vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>>*)(*((this + 64)))[(unsigned long)arg2];
        local_38->pair<render::TextureCube const*&, float&, void>(debugImage3D, 0.0);
        this_00->push_back(*local_38);
    }

    // 0x1009c89a0
    void DebugPrimitiveRenderGroups<DebugText<DebugDataBasic>>::AddPrimitive(const DebugText<DebugDataBasic>& debugText,
                                                                             unsigned int arg2) {
        pair<render::TextureCube const*, float const> local_38[16];

        vector<eastl::pair<DebugText<DebugDataBasic> const*, float>>* this_00 =
            (vector<eastl::pair<DebugText<DebugDataBasic> const*, float>>*)(*((this + 64)))[(unsigned long)arg2];
        local_38->pair<render::TextureCube const*&, float&, void>(debugText, 0.0);
        this_00->push_back(*local_38);
    }

    // 0x1009c8b70
    void DebugPrimitiveRenderGroups<DebugText2D<DebugDataBasic>>::AddPrimitive(
        const DebugText2D<DebugDataBasic>& debugText2D, unsigned int arg2) {
        pair<render::TextureCube const*, float const> local_38[16];

        vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>>* this_00 =
            (vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>>*)(*((this + 64)))[(unsigned long)arg2];
        local_38->pair<render::TextureCube const*&, float&, void>(debugText2D, 0.0);
        this_00->push_back(*local_38);
    }

    // 0x1009c8d60
    void DebugPrimitiveRenderGroups<DebugRect2D<DebugDataBasic>>::AddPrimitive(
        const DebugRect2D<DebugDataBasic>& debugRect2D, unsigned int arg2) {
        pair<render::TextureCube const*, float const> local_38[16];

        vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>>* this_00 =
            (vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>>*)(*((this + 64)))[(unsigned long)arg2];
        local_38->pair<render::TextureCube const*&, float&, void>(debugRect2D, 0.0);
        this_00->push_back(*local_38);
    }

    // 0x1009c8f30
    void DebugPrimitiveRenderGroups<DebugCircle2D<DebugDataBasic>>::AddPrimitive(
        const DebugCircle2D<DebugDataBasic>& debugCircle2D, unsigned int arg2) {
        vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>>* this_00;
        pair<render::TextureCube const*, float const> local_38[16];

        this_00 =
            (vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>>*)(*((this + 64)))[(unsigned long)arg2];
        local_38->pair<render::TextureCube const*&, float&, void>(debugCircle2D, 0.0);
        this_00->push_back(*local_38);
    }

} // namespace jag
