// libs/graphics/primitive/debug/DebugPrimitives.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugCircle2D {
    public:
        DebugCircle2D(math::Vector2T<float> const&, float, bool, DebugDataBasic const&);
    };

    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugFrustum {
    public:
        DebugFrustum(math::Frustum const&, DebugDataBasic const&);
    };

    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugImage3D {
    public:
        DebugImage3D(render::Texture const*, math::Rect<float> const&, bool, bool, DebugDataBasic const&);
    };

    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugPlane {
    public:
        DebugPlane(math::PlaneT<float> const&, DebugDataBasic const&);
    };

    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugRect2D {
    public:
        DebugRect2D(math::Rect<int> const&, bool, DebugDataBasic const&);
    };

    // 0x1009c6720, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugTri<DebugDataBasic>::DebugTri(math::Vector3T<float> const&, math::Vector3T<float> const&, math::Vector3T<float> const&, DebugDataBasic const&): jumps straight to the base-object constructor

    // 0x1009c6730, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugTri<DebugDataBasic> >::AddPrimitive(DebugTri<DebugDataBasic> const&, unsigned int)
    void DebugPrimitiveRenderGroups<DebugTri<DebugDataBasic>>::AddPrimitive(DebugTri* param_1, uint param_2) {
        vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>, eastl::allocator>* this_00;
        pair<render::TextureCube_const*, float const> local_38[16];
        TextureCube* local_28;
        float local_1c;

        this_00 = (vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
            operator[]((array<eastl::vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>, eastl::allocator>,
                              8ul>*)(this + 64),
                       (ulong)param_2);
        local_1c = 0.0;
        local_28 = (TextureCube*)param_1;
        eastl::pair<render::TextureCube_const*, float const>::pair<render::TextureCube_const*&, float&, void>(
            local_38, &local_28, &local_1c);
        eastl::vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>, eastl::allocator>::push_back(
            this_00, (pair*)local_38);
    }

    // 0x1009c68f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugLine<DebugDataBasic>::DebugLine(math::Vector3T<float> const&, math::Vector3T<float> const&, DebugDataBasic const&): jumps straight to the base-object constructor

    // 0x1009c6900, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugLine<DebugDataBasic> >::AddPrimitive(DebugLine<DebugDataBasic> const&, unsigned int)
    void DebugPrimitiveRenderGroups<DebugLine<DebugDataBasic>>::AddPrimitive(DebugLine* param_1, uint param_2) {
        vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>, eastl::allocator>* this_00;
        pair<render::TextureCube_const*, float const> local_38[16];
        TextureCube* local_28;
        float local_1c;

        this_00 = (vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
            operator[]((array<eastl::vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>, eastl::allocator>,
                              8ul>*)(this + 64),
                       (ulong)param_2);
        local_1c = 0.0;
        local_28 = (TextureCube*)param_1;
        eastl::pair<render::TextureCube_const*, float const>::pair<render::TextureCube_const*&, float&, void>(
            local_38, &local_28, &local_1c);
        eastl::vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>, eastl::allocator>::push_back(
            this_00, (pair*)local_38);
    }

    // 0x1009c6ad0, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugEllipsoid<DebugDataBasic> >::AddPrimitive(DebugEllipsoid<DebugDataBasic> const&, unsigned int)
    void DebugPrimitiveRenderGroups<DebugEllipsoid<DebugDataBasic>>::AddPrimitive(DebugEllipsoid* param_1,
                                                                                  uint param_2) {
        vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>, eastl::allocator>* this_00;
        pair<render::TextureCube_const*, float const> local_38[16];
        TextureCube* local_28;
        float local_1c;

        this_00 = (vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>, eastl::allocator>*)std::array<
            eastl::vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
        operator[]((array<eastl::vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>, eastl::allocator>,
                          8ul>*)(this + 64),
                   (ulong)param_2);
        local_1c = 0.0;
        local_28 = (TextureCube*)param_1;
        eastl::pair<render::TextureCube_const*, float const>::pair<render::TextureCube_const*&, float&, void>(
            local_38, &local_28, &local_1c);
        eastl::vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>, eastl::allocator>::push_back(
            this_00, (pair*)local_38);
    }

    // 0x1009c6d70, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugCapsule<DebugDataBasic>::DebugCapsule(math::Capsule3D const&, DebugDataBasic const&): jumps straight to the base-object constructor

    // 0x1009c6d80, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugCapsule<DebugDataBasic> >::AddPrimitive(DebugCapsule<DebugDataBasic> const&, unsigned int)
    void DebugPrimitiveRenderGroups<DebugCapsule<DebugDataBasic>>::AddPrimitive(DebugCapsule* param_1, uint param_2) {
        vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>, eastl::allocator>* this_00;
        pair<render::TextureCube_const*, float const> local_38[16];
        TextureCube* local_28;
        float local_1c;

        this_00 = (vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
            operator[]((array<eastl::vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>, eastl::allocator>,
                              8ul>*)(this + 64),
                       (ulong)param_2);
        local_1c = 0.0;
        local_28 = (TextureCube*)param_1;
        eastl::pair<render::TextureCube_const*, float const>::pair<render::TextureCube_const*&, float&, void>(
            local_38, &local_28, &local_1c);
        eastl::vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>, eastl::allocator>::push_back(
            this_00, (pair*)local_38);
    }

    // 0x1009c6fa0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugCone<DebugDataBasic>::DebugCone(math::Matrix44T<float> const&, DebugDataBasic const&): jumps straight to the base-object constructor

    // 0x1009c6fb0, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugCone<DebugDataBasic> >::AddPrimitive(DebugCone<DebugDataBasic> const&, unsigned int)
    void DebugPrimitiveRenderGroups<DebugCone<DebugDataBasic>>::AddPrimitive(DebugCone* param_1, uint param_2) {
        vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>, eastl::allocator>* this_00;
        pair<render::TextureCube_const*, float const> local_38[16];
        TextureCube* local_28;
        float local_1c;

        this_00 = (vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
            operator[]((array<eastl::vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>, eastl::allocator>,
                              8ul>*)(this + 64),
                       (ulong)param_2);
        local_1c = 0.0;
        local_28 = (TextureCube*)param_1;
        eastl::pair<render::TextureCube_const*, float const>::pair<render::TextureCube_const*&, float&, void>(
            local_38, &local_28, &local_1c);
        eastl::vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>, eastl::allocator>::push_back(
            this_00, (pair*)local_38);
    }

    // 0x1009c71a0, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugCylinder<DebugDataBasic> >::AddPrimitive(DebugCylinder<DebugDataBasic> const&, unsigned int)
    void DebugPrimitiveRenderGroups<DebugCylinder<DebugDataBasic>>::AddPrimitive(DebugCylinder* param_1, uint param_2) {
        vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>, eastl::allocator>* this_00;
        pair<render::TextureCube_const*, float const> local_38[16];
        TextureCube* local_28;
        float local_1c;

        this_00 = (vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
            operator[]((array<eastl::vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>, eastl::allocator>,
                              8ul>*)(this + 64),
                       (ulong)param_2);
        local_1c = 0.0;
        local_28 = (TextureCube*)param_1;
        eastl::pair<render::TextureCube_const*, float const>::pair<render::TextureCube_const*&, float&, void>(
            local_38, &local_28, &local_1c);
        eastl::vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>, eastl::allocator>::push_back(
            this_00, (pair*)local_38);
    }

    // 0x1009c7390, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugAABB<DebugDataBasic>::DebugAABB(math::AABB const&, DebugDataBasic const&): jumps straight to the base-object constructor

    // 0x1009c73a0, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugAABB<DebugDataBasic> >::AddPrimitive(DebugAABB<DebugDataBasic> const&, unsigned int)
    void DebugPrimitiveRenderGroups<DebugAABB<DebugDataBasic>>::AddPrimitive(DebugAABB* param_1, uint param_2) {
        vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>, eastl::allocator>* this_00;
        pair<render::TextureCube_const*, float const> local_38[16];
        TextureCube* local_28;
        float local_1c;

        this_00 = (vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
            operator[]((array<eastl::vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>, eastl::allocator>,
                              8ul>*)(this + 64),
                       (ulong)param_2);
        local_1c = 0.0;
        local_28 = (TextureCube*)param_1;
        eastl::pair<render::TextureCube_const*, float const>::pair<render::TextureCube_const*&, float&, void>(
            local_38, &local_28, &local_1c);
        eastl::vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>, eastl::allocator>::push_back(
            this_00, (pair*)local_38);
    }

    // 0x1009c75c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugOBB<DebugDataBasic>::DebugOBB(math::OBB const&, DebugDataBasic const&): jumps straight to the base-object constructor

    // 0x1009c75d0, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugOBB<DebugDataBasic> >::AddPrimitive(DebugOBB<DebugDataBasic> const&, unsigned int)
    void DebugPrimitiveRenderGroups<DebugOBB<DebugDataBasic>>::AddPrimitive(DebugOBB* param_1, uint param_2) {
        vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>, eastl::allocator>* this_00;
        pair<render::TextureCube_const*, float const> local_38[16];
        TextureCube* local_28;
        float local_1c;

        this_00 = (vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
            operator[]((array<eastl::vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>, eastl::allocator>,
                              8ul>*)(this + 64),
                       (ulong)param_2);
        local_1c = 0.0;
        local_28 = (TextureCube*)param_1;
        eastl::pair<render::TextureCube_const*, float const>::pair<render::TextureCube_const*&, float&, void>(
            local_38, &local_28, &local_1c);
        eastl::vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>, eastl::allocator>::push_back(
            this_00, (pair*)local_38);
    }

    // 0x1009c7c20, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugFrustum<DebugDataBasic>::DebugFrustum(math::Frustum const&, DebugDataBasic const&): jumps straight to the base-object constructor

    // 0x1009c7c30, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugFrustum<DebugDataBasic> >::AddPrimitive(DebugFrustum<DebugDataBasic> const&, unsigned int)
    void DebugPrimitiveRenderGroups<DebugFrustum<DebugDataBasic>>::AddPrimitive(DebugFrustum* param_1, uint param_2) {
        vector<eastl::pair<DebugFrustum<DebugDataBasic> const*, float>, eastl::allocator>* this_00;
        pair<render::TextureCube_const*, float const> local_38[16];
        TextureCube* local_28;
        float local_1c;

        this_00 = (vector<eastl::pair<DebugFrustum<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugFrustum<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
            operator[]((array<eastl::vector<eastl::pair<DebugFrustum<DebugDataBasic> const*, float>, eastl::allocator>,
                              8ul>*)(this + 64),
                       (ulong)param_2);
        local_1c = 0.0;
        local_28 = (TextureCube*)param_1;
        eastl::pair<render::TextureCube_const*, float const>::pair<render::TextureCube_const*&, float&, void>(
            local_38, &local_28, &local_1c);
        eastl::vector<eastl::pair<DebugFrustum<DebugDataBasic> const*, float>, eastl::allocator>::push_back(
            this_00, (pair*)local_38);
    }

    // 0x1009c81e0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugPlane<DebugDataBasic>::DebugPlane(math::PlaneT<float> const&, DebugDataBasic const&): jumps straight to the base-object constructor

    // 0x1009c81f0, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugPlane<DebugDataBasic> >::AddPrimitive(DebugPlane<DebugDataBasic> const&, unsigned int)
    void DebugPrimitiveRenderGroups<DebugPlane<DebugDataBasic>>::AddPrimitive(DebugPlane* param_1, uint param_2) {
        vector<eastl::pair<DebugPlane<DebugDataBasic> const*, float>, eastl::allocator>* this_00;
        pair<render::TextureCube_const*, float const> local_38[16];
        TextureCube* local_28;
        float local_1c;

        this_00 = (vector<eastl::pair<DebugPlane<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugPlane<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
            operator[]((array<eastl::vector<eastl::pair<DebugPlane<DebugDataBasic> const*, float>, eastl::allocator>,
                              8ul>*)(this + 64),
                       (ulong)param_2);
        local_1c = 0.0;
        local_28 = (TextureCube*)param_1;
        eastl::pair<render::TextureCube_const*, float const>::pair<render::TextureCube_const*&, float&, void>(
            local_38, &local_28, &local_1c);
        eastl::vector<eastl::pair<DebugPlane<DebugDataBasic> const*, float>, eastl::allocator>::push_back(
            this_00, (pair*)local_38);
    }

    // 0x1009c8400, 48 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugImage2D<DebugDataBasic>::DebugImage2D(render::Texture const*, math::Rect<float> const&, math::Vector2T<float> const&, math::Vector2T<float> const&, bool, bool, bool, DebugDataBasic const&)
    void DebugImage2D<DebugDataBasic>::DebugImage2D(Texture* param_1, Rect* param_2, Vector2T* param_3,
                                                    Vector2T* param_4, bool param_5, bool param_6, bool param_7,
                                                    DebugDataBasic* param_8) {
        DebugImage2D(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
    }

    // 0x1009c8430, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugImage2D<DebugDataBasic> >::AddPrimitive(DebugImage2D<DebugDataBasic> const&, unsigned int)
    void DebugPrimitiveRenderGroups<DebugImage2D<DebugDataBasic>>::AddPrimitive(DebugImage2D* param_1, uint param_2) {
        vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>, eastl::allocator>* this_00;
        pair<render::TextureCube_const*, float const> local_38[16];
        TextureCube* local_28;
        float local_1c;

        this_00 = (vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
            operator[]((array<eastl::vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>, eastl::allocator>,
                              8ul>*)(this + 64),
                       (ulong)param_2);
        local_1c = 0.0;
        local_28 = (TextureCube*)param_1;
        eastl::pair<render::TextureCube_const*, float const>::pair<render::TextureCube_const*&, float&, void>(
            local_38, &local_28, &local_1c);
        eastl::vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>, eastl::allocator>::push_back(
            this_00, (pair*)local_38);
    }

    // 0x1009c85f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugImageCube<DebugDataBasic>::DebugImageCube(render::Texture const*, math::Rect<float> const&, bool, bool, DebugDataBasic const&): jumps straight to the base-object constructor

    // 0x1009c8600, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugImageCube<DebugDataBasic> >::AddPrimitive(DebugImageCube<DebugDataBasic> const&, unsigned int)
    void DebugPrimitiveRenderGroups<DebugImageCube<DebugDataBasic>>::AddPrimitive(DebugImageCube* param_1,
                                                                                  uint param_2) {
        vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>, eastl::allocator>* this_00;
        pair<render::TextureCube_const*, float const> local_38[16];
        TextureCube* local_28;
        float local_1c;

        this_00 = (vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>, eastl::allocator>*)std::array<
            eastl::vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
        operator[]((array<eastl::vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>, eastl::allocator>,
                          8ul>*)(this + 64),
                   (ulong)param_2);
        local_1c = 0.0;
        local_28 = (TextureCube*)param_1;
        eastl::pair<render::TextureCube_const*, float const>::pair<render::TextureCube_const*&, float&, void>(
            local_38, &local_28, &local_1c);
        eastl::vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>, eastl::allocator>::push_back(
            this_00, (pair*)local_38);
    }

    // 0x1009c87c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugImage3D<DebugDataBasic>::DebugImage3D(render::Texture const*, math::Rect<float> const&, bool, bool, DebugDataBasic const&): jumps straight to the base-object constructor

    // 0x1009c87d0, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugImage3D<DebugDataBasic> >::AddPrimitive(DebugImage3D<DebugDataBasic> const&, unsigned int)
    void DebugPrimitiveRenderGroups<DebugImage3D<DebugDataBasic>>::AddPrimitive(DebugImage3D* param_1, uint param_2) {
        vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>, eastl::allocator>* this_00;
        pair<render::TextureCube_const*, float const> local_38[16];
        TextureCube* local_28;
        float local_1c;

        this_00 = (vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
            operator[]((array<eastl::vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>, eastl::allocator>,
                              8ul>*)(this + 64),
                       (ulong)param_2);
        local_1c = 0.0;
        local_28 = (TextureCube*)param_1;
        eastl::pair<render::TextureCube_const*, float const>::pair<render::TextureCube_const*&, float&, void>(
            local_38, &local_28, &local_1c);
        eastl::vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>, eastl::allocator>::push_back(
            this_00, (pair*)local_38);
    }

    // 0x1009c8990, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugText<DebugDataBasic>::DebugText(math::Vector3T<float> const&, eastl::string const&, DebugDataBasic const&): jumps straight to the base-object constructor

    // 0x1009c89a0, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugText<DebugDataBasic> >::AddPrimitive(DebugText<DebugDataBasic> const&, unsigned int)
    void DebugPrimitiveRenderGroups<DebugText<DebugDataBasic>>::AddPrimitive(DebugText* param_1, uint param_2) {
        vector<eastl::pair<DebugText<DebugDataBasic> const*, float>, eastl::allocator>* this_00;
        pair<render::TextureCube_const*, float const> local_38[16];
        TextureCube* local_28;
        float local_1c;

        this_00 = (vector<eastl::pair<DebugText<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugText<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
            operator[]((array<eastl::vector<eastl::pair<DebugText<DebugDataBasic> const*, float>, eastl::allocator>,
                              8ul>*)(this + 64),
                       (ulong)param_2);
        local_1c = 0.0;
        local_28 = (TextureCube*)param_1;
        eastl::pair<render::TextureCube_const*, float const>::pair<render::TextureCube_const*&, float&, void>(
            local_38, &local_28, &local_1c);
        eastl::vector<eastl::pair<DebugText<DebugDataBasic> const*, float>, eastl::allocator>::push_back(
            this_00, (pair*)local_38);
    }

    // 0x1009c8b60, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugText2D<DebugDataBasic>::DebugText2D(math::Vector2T<float> const&, eastl::string const&, DebugDataBasic const&): jumps straight to the base-object constructor

    // 0x1009c8b70, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugText2D<DebugDataBasic> >::AddPrimitive(DebugText2D<DebugDataBasic> const&, unsigned int)
    void DebugPrimitiveRenderGroups<DebugText2D<DebugDataBasic>>::AddPrimitive(DebugText2D* param_1, uint param_2) {
        vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>, eastl::allocator>* this_00;
        pair<render::TextureCube_const*, float const> local_38[16];
        TextureCube* local_28;
        float local_1c;

        this_00 = (vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
            operator[]((array<eastl::vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>, eastl::allocator>,
                              8ul>*)(this + 64),
                       (ulong)param_2);
        local_1c = 0.0;
        local_28 = (TextureCube*)param_1;
        eastl::pair<render::TextureCube_const*, float const>::pair<render::TextureCube_const*&, float&, void>(
            local_38, &local_28, &local_1c);
        eastl::vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>, eastl::allocator>::push_back(
            this_00, (pair*)local_38);
    }

    // 0x1009c8d50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugRect2D<DebugDataBasic>::DebugRect2D(math::Rect<int> const&, bool, DebugDataBasic const&): jumps straight to the base-object constructor

    // 0x1009c8d60, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugRect2D<DebugDataBasic> >::AddPrimitive(DebugRect2D<DebugDataBasic> const&, unsigned int)
    void DebugPrimitiveRenderGroups<DebugRect2D<DebugDataBasic>>::AddPrimitive(DebugRect2D* param_1, uint param_2) {
        vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>, eastl::allocator>* this_00;
        pair<render::TextureCube_const*, float const> local_38[16];
        TextureCube* local_28;
        float local_1c;

        this_00 = (vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
            operator[]((array<eastl::vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>, eastl::allocator>,
                              8ul>*)(this + 64),
                       (ulong)param_2);
        local_1c = 0.0;
        local_28 = (TextureCube*)param_1;
        eastl::pair<render::TextureCube_const*, float const>::pair<render::TextureCube_const*&, float&, void>(
            local_38, &local_28, &local_1c);
        eastl::vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>, eastl::allocator>::push_back(
            this_00, (pair*)local_38);
    }

    // 0x1009c8f20, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugCircle2D<DebugDataBasic>::DebugCircle2D(math::Vector2T<float> const&, float, bool, DebugDataBasic const&): jumps straight to the base-object constructor

    // 0x1009c8f30, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugCircle2D<DebugDataBasic> >::AddPrimitive(DebugCircle2D<DebugDataBasic> const&, unsigned int)
    void DebugPrimitiveRenderGroups<DebugCircle2D<DebugDataBasic>>::AddPrimitive(DebugCircle2D* param_1, uint param_2) {
        vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>, eastl::allocator>* this_00;
        pair<render::TextureCube_const*, float const> local_38[16];
        TextureCube* local_28;
        float local_1c;

        this_00 = (vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::
            operator[]((array<eastl::vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>, eastl::allocator>,
                              8ul>*)(this + 64),
                       (ulong)param_2);
        local_1c = 0.0;
        local_28 = (TextureCube*)param_1;
        eastl::pair<render::TextureCube_const*, float const>::pair<render::TextureCube_const*&, float&, void>(
            local_38, &local_28, &local_1c);
        eastl::vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>, eastl::allocator>::push_back(
            this_00, (pair*)local_38);
    }

} // namespace jag
