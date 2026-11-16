// libs/math/Types.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.math

namespace jag {
    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugAABB {
    public:
        DebugAABB(const math::AABB& aabb, const DebugDataBasic& debugDataBasic);
        DebugAABB(DebugAABB<DebugDataBasic>&& debugAABB);
        void GetCentrePos() const;
    };

    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugCapsule {
    public:
        DebugCapsule(const math::Capsule3D& capsule3D, const DebugDataBasic& debugDataBasic);
        void GetCentrePos() const;
    };

    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugCone {
    public:
        DebugCone(const math::Matrix44T<float>& matrix44, const DebugDataBasic& debugDataBasic);
        void GetCentrePos() const;
    };

    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugImage2D {
    public:
        DebugImage2D(const render::Texture* texture, const math::Rect<float>& rect,
                     const math::Vector2T<float>& vector21, const math::Vector2T<float>& vector22, bool arg5, bool arg6,
                     bool arg7, const DebugDataBasic& debugDataBasic);
        DebugImage2D(DebugImage2D<DebugDataBasic>&& debugImage2D);
    };

    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugImageCube {
    public:
        DebugImageCube(const render::Texture* texture, const math::Rect<float>& rect, bool arg3, bool arg4,
                       const DebugDataBasic& debugDataBasic);
        DebugImageCube(DebugImageCube<DebugDataBasic>&& debugImageCube);
    };

    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugLine {
    public:
        DebugLine(const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32,
                  const DebugDataBasic& debugDataBasic);
        void GetCentrePos() const;
    };

    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugOBB {
    public:
        DebugOBB(const math::OBB& obb, const DebugDataBasic& debugDataBasic);
        DebugOBB(DebugOBB<DebugDataBasic>&& debugOBB);
        uint64_t GetCentrePos() const;
    };

    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugText {
    public:
        DebugText(const math::Vector3T<float>& vector3, const eastl::string& str, const DebugDataBasic& debugDataBasic);
        DebugText(DebugText<DebugDataBasic>&& debugText);
    };

    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugText2D {
    public:
        DebugText2D(const math::Vector2T<float>& vector2, const eastl::string& str,
                    const DebugDataBasic& debugDataBasic);
        DebugText2D(DebugText2D<DebugDataBasic>&& debugText2D);
    };

    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugTri {
    public:
        DebugTri(const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32,
                 const math::Vector3T<float>& vector33, const DebugDataBasic& debugDataBasic);
        void GetCentrePos() const;
    };

    class PrimVertPosUVCol {
    public:
        PrimVertPosUVCol();
        static render::VertexElementDesc m_VertexElemDescs[3]; // initialised in its definition

        uint8_t _unknown_0[28];
    };

    // 0x103bd9ba0, set at startup by ___cxx_global_var_init.6
    render::VertexElementDesc PrimVertPosUVCol::m_VertexElemDescs[3] = {
        /* [0] */ VertexElementDesc(0, "aPos", 2, false, 0, 0),
        /* [1] */ VertexElementDesc(0, "aTexCoord", 1, false, 5, 0),
        /* [2] */ VertexElementDesc(0, "aColour", 3, false, 10, 0),
    };

    // 0x1009ce310
    PrimVertPosUVCol::PrimVertPosUVCol() : math::Vector3T() {
        new (&field_20) shared_ptr();
    }

    // 0x1009d07f0
    DebugAABB<DebugDataBasic>::DebugAABB(DebugAABB<DebugDataBasic>&& debugAABB) : math::AABB(debugAABB) {
        *(uint64_t*)(this + 32) = *(uint64_t*)(debugAABB + 32);
    }

    // 0x1009d0a50
    DebugOBB<DebugDataBasic>::DebugOBB(DebugOBB<DebugDataBasic>&& debugOBB) : math::OBB(debugOBB) {
        *(uint64_t*)(this + 80) = *(uint64_t*)(debugOBB + 80);
    }

    // 0x1009d0ff0
    DebugImage2D<DebugDataBasic>::DebugImage2D(DebugImage2D<DebugDataBasic>&& debugImage2D) {
        *(uint64_t*)this = *(uint64_t*)debugImage2D;
        new ((this + 8)) math::Float4(*((debugImage2D + 8)));
        uint64_t uVar1 = *(uint64_t*)(debugImage2D + 24);
        uint64_t uVar2 = *(uint64_t*)(debugImage2D + 32);
        uint64_t uVar3 = *(uint64_t*)(debugImage2D + 44);
        *(uint64_t*)(this + 36) = *(uint64_t*)(debugImage2D + 36);
        *(uint64_t*)(this + 44) = uVar3;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
    }

    // 0x1009d1590
    DebugText<DebugDataBasic>::DebugText(DebugText<DebugDataBasic>&& debugText) {
        *(uint32_t*)(this + 8) = *(uint32_t*)(debugText + 8);
        *(uint64_t*)this = *(uint64_t*)debugText;
        new ((this + 16)) eastl::string(*((debugText + 16)));
        *(uint64_t*)(this + 48) = *(uint64_t*)(debugText + 48);
    }

    // 0x1009d1810
    DebugText2D<DebugDataBasic>::DebugText2D(DebugText2D<DebugDataBasic>&& debugText2D) {
        *(uint64_t*)this = *(uint64_t*)debugText2D;
        new ((this + 8)) eastl::string(*((debugText2D + 8)));
        *(uint64_t*)(this + 40) = *(uint64_t*)(debugText2D + 40);
    }

    // 0x1009d1b80
    DebugPrimitiveRenderGroups<DebugTri<DebugDataBasic>>::DebugPrimitiveRenderGroups(int arg1) : std::mutex() {
        new ((this + 64)) std::array<eastl::vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>>, 8ul>();
        vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>>* this_00 =
            (vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>>*)
                std::array<eastl::vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>>* pvVar1 =
            (vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>>*)
                std::array<eastl::vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>>, 8ul>::end();
        if (this_00 != pvVar1) {
            do {
                this_00->reserve((long)arg1);
                this_00 = this_00 + 32;
            } while (this_00 != pvVar1);
        }
    }

    // 0x1009d1ec0
    DebugPrimitiveRenderGroups<DebugLine<DebugDataBasic>>::DebugPrimitiveRenderGroups(int arg1) : std::mutex() {
        new ((this + 64)) std::array<eastl::vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>>, 8ul>();
        vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>>* this_00 =
            (vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>>*)
                std::array<eastl::vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>>* pvVar1 =
            (vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>>*)
                std::array<eastl::vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>>, 8ul>::end();
        if (this_00 != pvVar1) {
            do {
                this_00->reserve((long)arg1);
                this_00 = this_00 + 32;
            } while (this_00 != pvVar1);
        }
    }

    // 0x1009d21c0
    DebugPrimitiveRenderGroups<DebugEllipsoid<DebugDataBasic>>::DebugPrimitiveRenderGroups(int arg1) {
        vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>>* pvVar1;

        new (this) std::mutex();
        new ((this + 64)) std::array<eastl::vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>>, 8ul>();
        vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>>* this_00 =
            (vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>>*)
                std::array<eastl::vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>>, 8ul>::begin();
        pvVar1 = (vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>>*)
            std::array<eastl::vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>>, 8ul>::end();
        if (this_00 != pvVar1) {
            do {
                this_00->reserve((long)arg1);
                this_00 = this_00 + 32;
            } while (this_00 != pvVar1);
        }
    }

    // 0x1009d24c0
    DebugPrimitiveRenderGroups<DebugCapsule<DebugDataBasic>>::DebugPrimitiveRenderGroups(int arg1) : std::mutex() {
        new ((this + 64)) std::array<eastl::vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>>, 8ul>();
        vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>>* this_00 =
            (vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>>*)
                std::array<eastl::vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>>* pvVar1 =
            (vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>>*)
                std::array<eastl::vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>>, 8ul>::end();
        if (this_00 != pvVar1) {
            do {
                this_00->reserve((long)arg1);
                this_00 = this_00 + 32;
            } while (this_00 != pvVar1);
        }
    }

    // 0x1009d27c0
    DebugPrimitiveRenderGroups<DebugCone<DebugDataBasic>>::DebugPrimitiveRenderGroups(int arg1) : std::mutex() {
        new ((this + 64)) std::array<eastl::vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>>, 8ul>();
        vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>>* this_00 =
            (vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>>*)
                std::array<eastl::vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>>* pvVar1 =
            (vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>>*)
                std::array<eastl::vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>>, 8ul>::end();
        if (this_00 != pvVar1) {
            do {
                this_00->reserve((long)arg1);
                this_00 = this_00 + 32;
            } while (this_00 != pvVar1);
        }
    }

    // 0x1009d2ac0
    DebugPrimitiveRenderGroups<DebugCylinder<DebugDataBasic>>::DebugPrimitiveRenderGroups(int arg1) {
        vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>>* this_00;

        new (this) std::mutex();
        new ((this + 64)) std::array<eastl::vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>>, 8ul>();
        this_00 = (vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>>*)
            std::array<eastl::vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>>* pvVar1 =
            (vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>>*)
                std::array<eastl::vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>>, 8ul>::end();
        if (this_00 != pvVar1) {
            do {
                this_00->reserve((long)arg1);
                this_00 = this_00 + 32;
            } while (this_00 != pvVar1);
        }
    }

    // 0x1009d2dc0
    DebugPrimitiveRenderGroups<DebugAABB<DebugDataBasic>>::DebugPrimitiveRenderGroups(int arg1) : std::mutex() {
        new ((this + 64)) std::array<eastl::vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>>, 8ul>();
        vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>>* this_00 =
            (vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>>*)
                std::array<eastl::vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>>* pvVar1 =
            (vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>>*)
                std::array<eastl::vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>>, 8ul>::end();
        if (this_00 != pvVar1) {
            do {
                this_00->reserve((long)arg1);
                this_00 = this_00 + 32;
            } while (this_00 != pvVar1);
        }
    }

    // 0x1009d30c0
    DebugPrimitiveRenderGroups<DebugOBB<DebugDataBasic>>::DebugPrimitiveRenderGroups(int arg1) : std::mutex() {
        new ((this + 64)) std::array<eastl::vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>>, 8ul>();
        vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>>* this_00 =
            (vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>>*)
                std::array<eastl::vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>>* pvVar1 =
            (vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>>*)
                std::array<eastl::vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>>, 8ul>::end();
        if (this_00 != pvVar1) {
            do {
                this_00->reserve((long)arg1);
                this_00 = this_00 + 32;
            } while (this_00 != pvVar1);
        }
    }

    // 0x1009d33c0
    DebugPrimitiveRenderGroups<DebugFrustum<DebugDataBasic>>::DebugPrimitiveRenderGroups(int arg1) : std::mutex() {
        new ((this + 64)) std::array<eastl::vector<eastl::pair<DebugFrustum<DebugDataBasic> const*, float>>, 8ul>();
        vector<eastl::pair<DebugFrustum<DebugDataBasic> const*, float>>* this_00 =
            (vector<eastl::pair<DebugFrustum<DebugDataBasic> const*, float>>*)
                std::array<eastl::vector<eastl::pair<DebugFrustum<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<DebugFrustum<DebugDataBasic> const*, float>>* pvVar1 =
            (vector<eastl::pair<DebugFrustum<DebugDataBasic> const*, float>>*)
                std::array<eastl::vector<eastl::pair<DebugFrustum<DebugDataBasic> const*, float>>, 8ul>::end();
        if (this_00 != pvVar1) {
            do {
                this_00->reserve((long)arg1);
                this_00 = this_00 + 32;
            } while (this_00 != pvVar1);
        }
    }

    // 0x1009d36c0
    DebugPrimitiveRenderGroups<DebugPlane<DebugDataBasic>>::DebugPrimitiveRenderGroups(int arg1) : std::mutex() {
        new ((this + 64)) std::array<eastl::vector<eastl::pair<DebugPlane<DebugDataBasic> const*, float>>, 8ul>();
        vector<eastl::pair<DebugPlane<DebugDataBasic> const*, float>>* this_00 =
            (vector<eastl::pair<DebugPlane<DebugDataBasic> const*, float>>*)
                std::array<eastl::vector<eastl::pair<DebugPlane<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<DebugPlane<DebugDataBasic> const*, float>>* pvVar1 =
            (vector<eastl::pair<DebugPlane<DebugDataBasic> const*, float>>*)
                std::array<eastl::vector<eastl::pair<DebugPlane<DebugDataBasic> const*, float>>, 8ul>::end();
        if (this_00 != pvVar1) {
            do {
                this_00->reserve((long)arg1);
                this_00 = this_00 + 32;
            } while (this_00 != pvVar1);
        }
    }

    // 0x1009d39c0
    DebugPrimitiveRenderGroups<DebugImage2D<DebugDataBasic>>::DebugPrimitiveRenderGroups(int arg1) : std::mutex() {
        new ((this + 64)) std::array<eastl::vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>>, 8ul>();
        vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>>* this_00 =
            (vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>>*)
                std::array<eastl::vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>>* pvVar1 =
            (vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>>*)
                std::array<eastl::vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>>, 8ul>::end();
        if (this_00 != pvVar1) {
            do {
                this_00->reserve((long)arg1);
                this_00 = this_00 + 32;
            } while (this_00 != pvVar1);
        }
    }

    // 0x1009d3cc0
    DebugPrimitiveRenderGroups<DebugImageCube<DebugDataBasic>>::DebugPrimitiveRenderGroups(int arg1) {
        vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>>* pvVar1;

        new (this) std::mutex();
        new ((this + 64)) std::array<eastl::vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>>, 8ul>();
        vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>>* this_00 =
            (vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>>*)
                std::array<eastl::vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>>, 8ul>::begin();
        pvVar1 = (vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>>*)
            std::array<eastl::vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>>, 8ul>::end();
        if (this_00 != pvVar1) {
            do {
                this_00->reserve((long)arg1);
                this_00 = this_00 + 32;
            } while (this_00 != pvVar1);
        }
    }

    // 0x1009d3fc0
    DebugPrimitiveRenderGroups<DebugImage3D<DebugDataBasic>>::DebugPrimitiveRenderGroups(int arg1) : std::mutex() {
        new ((this + 64)) std::array<eastl::vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>>, 8ul>();
        vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>>* this_00 =
            (vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>>*)
                std::array<eastl::vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>>* pvVar1 =
            (vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>>*)
                std::array<eastl::vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>>, 8ul>::end();
        if (this_00 != pvVar1) {
            do {
                this_00->reserve((long)arg1);
                this_00 = this_00 + 32;
            } while (this_00 != pvVar1);
        }
    }

    // 0x1009d42c0
    DebugPrimitiveRenderGroups<DebugText<DebugDataBasic>>::DebugPrimitiveRenderGroups(int arg1) : std::mutex() {
        new ((this + 64)) std::array<eastl::vector<eastl::pair<DebugText<DebugDataBasic> const*, float>>, 8ul>();
        vector<eastl::pair<DebugText<DebugDataBasic> const*, float>>* this_00 =
            (vector<eastl::pair<DebugText<DebugDataBasic> const*, float>>*)
                std::array<eastl::vector<eastl::pair<DebugText<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<DebugText<DebugDataBasic> const*, float>>* pvVar1 =
            (vector<eastl::pair<DebugText<DebugDataBasic> const*, float>>*)
                std::array<eastl::vector<eastl::pair<DebugText<DebugDataBasic> const*, float>>, 8ul>::end();
        if (this_00 != pvVar1) {
            do {
                this_00->reserve((long)arg1);
                this_00 = this_00 + 32;
            } while (this_00 != pvVar1);
        }
    }

    // 0x1009d45c0
    DebugPrimitiveRenderGroups<DebugText2D<DebugDataBasic>>::DebugPrimitiveRenderGroups(int arg1) : std::mutex() {
        new ((this + 64)) std::array<eastl::vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>>, 8ul>();
        vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>>* this_00 =
            (vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>>*)
                std::array<eastl::vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>>* pvVar1 =
            (vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>>*)
                std::array<eastl::vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>>, 8ul>::end();
        if (this_00 != pvVar1) {
            do {
                this_00->reserve((long)arg1);
                this_00 = this_00 + 32;
            } while (this_00 != pvVar1);
        }
    }

    // 0x1009d48c0
    DebugPrimitiveRenderGroups<DebugRect2D<DebugDataBasic>>::DebugPrimitiveRenderGroups(int arg1) : std::mutex() {
        new ((this + 64)) std::array<eastl::vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>>, 8ul>();
        vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>>* this_00 =
            (vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>>*)
                std::array<eastl::vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>>* pvVar1 =
            (vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>>*)
                std::array<eastl::vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>>, 8ul>::end();
        if (this_00 != pvVar1) {
            do {
                this_00->reserve((long)arg1);
                this_00 = this_00 + 32;
            } while (this_00 != pvVar1);
        }
    }

    // 0x1009d4bc0
    DebugPrimitiveRenderGroups<DebugCircle2D<DebugDataBasic>>::DebugPrimitiveRenderGroups(int arg1) {
        vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>>* this_00;

        new (this) std::mutex();
        new ((this + 64)) std::array<eastl::vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>>, 8ul>();
        this_00 = (vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>>*)
            std::array<eastl::vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>>* pvVar1 =
            (vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>>*)
                std::array<eastl::vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>>, 8ul>::end();
        if (this_00 != pvVar1) {
            do {
                this_00->reserve((long)arg1);
                this_00 = this_00 + 32;
            } while (this_00 != pvVar1);
        }
    }

    // 0x1009d4f20
    DebugTri<DebugDataBasic>::DebugTri(const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32,
                                       const math::Vector3T<float>& vector33, const DebugDataBasic& debugDataBasic) {
        *(uint32_t*)(this + 8) = *(uint32_t*)(vector31 + 8);
        *(uint64_t*)this = *(uint64_t*)vector31;
        *(uint32_t*)(this + 20) = *(uint32_t*)(vector32 + 8);
        *(uint64_t*)(this + 12) = *(uint64_t*)vector32;
        *(uint64_t*)(this + 24) = *(uint64_t*)vector33;
        *(uint32_t*)(this + 32) = *(uint32_t*)(vector33 + 8);
        *(uint64_t*)(this + 36) = *(uint64_t*)debugDataBasic;
    }

    // 0x1009d5170
    DebugLine<DebugDataBasic>::DebugLine(const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32,
                                         const DebugDataBasic& debugDataBasic) {
        *(uint32_t*)(this + 8) = *(uint32_t*)(vector31 + 8);
        *(uint64_t*)this = *(uint64_t*)vector31;
        *(uint64_t*)(this + 12) = *(uint64_t*)vector32;
        *(uint32_t*)(this + 20) = *(uint32_t*)(vector32 + 8);
        *(uint64_t*)(this + 24) = *(uint64_t*)debugDataBasic;
    }

    // 0x1009d5560
    DebugCapsule<DebugDataBasic>::DebugCapsule(const math::Capsule3D& capsule3D, const DebugDataBasic& debugDataBasic) {
        uint64_t uVar1 = *(uint64_t*)capsule3D;
        uint64_t uVar2 = *(uint64_t*)&capsule3D.field_8;
        uint64_t uVar3 = *(uint64_t*)&capsule3D.field_24;
        *(uint64_t*)(this + 16) = capsule3D.m_endPoint;
        *(uint64_t*)(this + 24) = uVar3;
        *(uint64_t*)this = uVar1;
        *(uint64_t*)(this + 8) = uVar2;
        *(uint64_t*)(this + 32) = *(uint64_t*)debugDataBasic;
    }

    // 0x1009d5790
    DebugCone<DebugDataBasic>::DebugCone(const math::Matrix44T<float>& matrix44, const DebugDataBasic& debugDataBasic) {
        uint64_t uVar1 = *(uint64_t*)matrix44;
        uint64_t uVar2 = *(uint64_t*)(matrix44 + 8);
        uint64_t uVar3 = *(uint64_t*)(matrix44 + 16);
        uint64_t uVar4 = *(uint64_t*)(matrix44 + 24);
        uint64_t uVar5 = *(uint64_t*)(matrix44 + 32);
        uint64_t uVar6 = *(uint64_t*)(matrix44 + 40);
        uint64_t uVar7 = *(uint64_t*)(matrix44 + 56);
        *(uint64_t*)(this + 48) = *(uint64_t*)(matrix44 + 48);
        *(uint64_t*)(this + 56) = uVar7;
        *(uint64_t*)(this + 32) = uVar5;
        *(uint64_t*)(this + 40) = uVar6;
        *(uint64_t*)(this + 16) = uVar3;
        *(uint64_t*)(this + 24) = uVar4;
        *(uint64_t*)this = uVar1;
        *(uint64_t*)(this + 8) = uVar2;
        *(uint64_t*)(this + 64) = *(uint64_t*)debugDataBasic;
    }

    // 0x1009d5c00
    DebugAABB<DebugDataBasic>::DebugAABB(const math::AABB& aabb, const DebugDataBasic& debugDataBasic)
        : math::AABB(aabb) {
        *(uint64_t*)(this + 32) = *(uint64_t*)debugDataBasic;
    }

    // 0x1009d5e20
    DebugOBB<DebugDataBasic>::DebugOBB(const math::OBB& obb, const DebugDataBasic& debugDataBasic) : math::OBB(obb) {
        *(uint64_t*)(this + 80) = *(uint64_t*)debugDataBasic;
    }

    // 0x1009d6040
    DebugFrustum<DebugDataBasic>::DebugFrustum(const math::Frustum& frustum, const DebugDataBasic& debugDataBasic) {
        _memcpy(this, frustum, 160);
        *(uint64_t*)(this + 160) = *(uint64_t*)debugDataBasic;
    }

    // 0x1009d6270
    DebugPlane<DebugDataBasic>::DebugPlane(const math::PlaneT<float>& plane, const DebugDataBasic& debugDataBasic) {
        uint64_t uVar1 = *(uint64_t*)(plane + 8);
        *(uint64_t*)this = *(uint64_t*)plane;
        *(uint64_t*)(this + 8) = uVar1;
        *(uint64_t*)(this + 16) = *(uint64_t*)debugDataBasic;
    }

    // 0x1009d6490
    DebugImage2D<DebugDataBasic>::DebugImage2D(const render::Texture* texture, const math::Rect<float>& rect,
                                               const math::Vector2T<float>& vector21,
                                               const math::Vector2T<float>& vector22, bool arg5, bool arg6, bool arg7,
                                               const DebugDataBasic& debugDataBasic) {
        *(Texture**)this = texture;
        new ((this + 8)) math::Float4(rect);
        *(uint64_t*)(this + 24) = *(uint64_t*)vector21;
        *(uint64_t*)(this + 32) = *(uint64_t*)vector22;
        this[40] = (DebugImage2D<DebugDataBasic>)arg5;
        this[41] = (DebugImage2D<DebugDataBasic>)arg6;
        this[42] = (DebugImage2D<DebugDataBasic>)arg7;
        *(uint64_t*)(this + 44) = *(uint64_t*)debugDataBasic;
        if (texture == nullptr) {
            LogAssert("pImage",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/primitive/debug/"
                      "DebugPrimitives.h",
                      195, nullptr);
        }
    }

    // 0x1009d6720
    DebugImageCube<DebugDataBasic>::DebugImageCube(const render::Texture* texture, const math::Rect<float>& rect,
                                                   bool arg3, bool arg4, const DebugDataBasic& debugDataBasic) {
        uint64_t in_register_00000081;

        uint64_t local_40 = (((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4);
        Point<float> local_48(0.0, 0.0);
        Point<float> local_50(1.0, 1.0);
        new (this) DebugImage2D(texture, rect, local_48, local_50, arg3, (uint8_t)local_40, false, debugDataBasic);
        if (texture->GetMaxLineWidth() != 34067) {
            LogAssert("pImage->GetType() == render::TEXTURE_TYPE_CUBE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/primitive/debug/"
                      "DebugPrimitives.h",
                      222, nullptr);
        }
    }

    // 0x1009d69d0
    DebugImage3D<DebugDataBasic>::DebugImage3D(const render::Texture* texture, const math::Rect<float>& rect, bool arg3,
                                               bool arg4, const DebugDataBasic& debugDataBasic) {
        uint64_t in_register_00000081;

        uint64_t local_40 = (((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4);
        Point<float> local_48(0.0, 0.0);
        Point<float> local_50(1.0, 1.0);
        new (this) DebugImage2D(texture, rect, local_48, local_50, arg3, (uint8_t)local_40, false, debugDataBasic);
        if (texture->GetMaxLineWidth() != 32879) {
            LogAssert("pImage->GetType() == render::TEXTURE_TYPE_3D",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/primitive/debug/"
                      "DebugPrimitives.h",
                      238, nullptr);
        }
    }

    // 0x1009d6c80
    DebugText<DebugDataBasic>::DebugText(const math::Vector3T<float>& vector3, const eastl::string& str,
                                         const DebugDataBasic& debugDataBasic) {
        *(uint32_t*)(this + 8) = *(uint32_t*)(vector3 + 8);
        *(uint64_t*)this = *(uint64_t*)vector3;
        new ((this + 16)) eastl::string(str);
        *(uint64_t*)(this + 48) = *(uint64_t*)debugDataBasic;
    }

    // 0x1009d6ec0
    DebugText2D<DebugDataBasic>::DebugText2D(const math::Vector2T<float>& vector2, const eastl::string& str,
                                             const DebugDataBasic& debugDataBasic) {
        *(uint64_t*)this = *(uint64_t*)vector2;
        new ((this + 8)) eastl::string(str);
        *(uint64_t*)(this + 40) = *(uint64_t*)debugDataBasic;
    }

    // 0x1009d70f0
    DebugRect2D<DebugDataBasic>::DebugRect2D(const math::Rect<int>& rect, bool arg2,
                                             const DebugDataBasic& debugDataBasic)
        : math::Rect(rect) {
        this[16] = (DebugRect2D<DebugDataBasic>)arg2;
        *(uint64_t*)(this + 20) = *(uint64_t*)debugDataBasic;
    }

    // 0x1009d7320
    DebugCircle2D<DebugDataBasic>::DebugCircle2D(const math::Vector2T<float>& vector2, float arg2, bool arg3,
                                                 const DebugDataBasic& debugDataBasic) {
        *(uint64_t*)this = *(uint64_t*)vector2;
        *(float*)(this + 8) = arg2;
        this[12] = (DebugCircle2D<DebugDataBasic>)arg3;
        *(uint64_t*)(this + 16) = *(uint64_t*)debugDataBasic;
    }

    // 0x1009d76e0
    void DebugTri<DebugDataBasic>::GetCentrePos() const {
        uint64_t local_30[2];
        uint64_t local_20[2];

        local_20[0] = *this + (*((this + 12)));
        local_30[0] = *local_20 + (*((this + 24)));
        *local_30 / *3.0;
    }

    // 0x1009d7d20
    bool SortDebugPrimitiveGroup<DebugTri<DebugDataBasic>>(
        math::Frustum const&, eastl::vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>>&)::{
        lambda(eastl::pair<DebugTri<DebugDataBasic> const*, float> const&,
               eastl::pair<DebugTri<DebugDataBasic> const*, float> const&) #1
    }
    ::operator()(eastl::pair<DebugTri<DebugDataBasic> const*, float> const& arg1,
                 eastl::pair<DebugTri<DebugDataBasic> const*, float> const& arg2) const {
        lambda(eastl::pair<DebugLine<DebugDataBasic> const*, float> const&,
               eastl::pair<DebugLine<DebugDataBasic> const*, float> const&) #1
    }
    ::operator()(_lambda_eastl__pair<DebugLine<DebugDataBasic> const*, float>
                     const__eastl__pair<DebugLine<DebugDataBasic> const*, float> const___1_* this,
                 pair<DebugOBB<DebugDataBasic> const*, float> arg1, pair<DebugOBB<DebugDataBasic> const*, float> arg2) {
        return *(float*)(arg2 + 8) <= *(float*)(arg1 + 8) && *(float*)(arg1 + 8) != *(float*)(arg2 + 8);
    }

    // 0x1009d8210
    void DebugLine<DebugDataBasic>::GetCentrePos() const {
        uint64_t local_18[2];

        local_18[0] = *this + (*((this + 12)));
        *local_18 / *2.0;
    }

    // 0x1009d87f0
    void DebugAABB<DebugDataBasic>::GetCentrePos() const {
        GetCentrePos();
    }

    // 0x1009d8da0
    uint64_t DebugOBB<DebugDataBasic>::GetCentrePos() const {
        auto puVar1 = SSOBeginPtr();
        return *puVar1;
    }

    // 0x1009d9900
    void DebugCapsule<DebugDataBasic>::GetCentrePos() const {
        GetCentrePos();
    }

    // 0x1009d9eb0
    void DebugCone<DebugDataBasic>::GetCentrePos() const {
        GetPos();
    }

} // namespace jag

namespace jag::math {
    // 0x1009cdf30
    std::array<unsigned short, 24ul> BOX_EDGE_LINE_INDICES<unsigned short>() {
        std::array<unsigned short, 24ul> result;
        &result[4] = (ReturnValue)1970346312138756;
        &result[5] = (ReturnValue)1125925677039623;
        &result[2] = (ReturnValue)1125899907170305;
        &result[3] = (ReturnValue)1688858450657283;
        result = (ReturnValue)844429225164800;
        &result[1] = (ReturnValue)8590065667;
        return result;
    }

    // 0x1009db030
    ColourStorage8888<RGBA8StorageLayout>::ColourStorage8888<ARGB8StorageLayout>(
        ColourStorage8888<ARGB8StorageLayout> colourStorage8888) {
        Set(this, (unsigned char)((unsigned long)colourStorage8888 >> 16),
            (unsigned char)(((unsigned long)colourStorage8888 & 4294967295) >> 8),
            (unsigned char)((unsigned long)colourStorage8888 & 4294967295),
            (unsigned char)((unsigned long)colourStorage8888 >> 24));
    }

    // 0x100c64040
    std::array<int, 24ul> BOX_EDGE_LINE_INDICES<int>() {
        std::array<int, 24ul> result;
        &result[10] = (ReturnValue)25769803783;
        &result[11] = (ReturnValue)17179869190;
        &result[8] = (ReturnValue)21474836484;
        &result[9] = (ReturnValue)30064771077;
        &result[6] = (ReturnValue)30064771075;
        &result[7] = (ReturnValue)25769803778;
        &result[4] = (ReturnValue)21474836481;
        &result[5] = (ReturnValue)17179869184;
        &result[2] = (ReturnValue)8589934595;
        &result[3] = (ReturnValue)2;
        result = (ReturnValue)&__mh_execute_header;
        &result[1] = (ReturnValue)12884901889;
        return result;
    }

    // 0x100c64110
    void GetRandomPointPlane(Random& random, float arg2, float arg3, bool arg4) {
        int iVar1;
        uint64_t in_register_00000031;
        float arg1;
        unsigned int in_XMM0_Db;
        uint64_t uVar3;
        unsigned int in_XMM0_Dc;
        unsigned int in_XMM0_Dd;
        float local_28;
        unsigned int uStack_24;
        unsigned int uStack_20;
        unsigned int uStack_1c;

        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg4) == 0) {
            local_28 = (float)random.FRandS(arg2);
            arg3 = (float)random.FRandS(arg3);
            arg1 = local_28;
        } else {
            local_28 = arg2;
            uStack_24 = in_XMM0_Db;
            uStack_20 = in_XMM0_Dc;
            uStack_1c = in_XMM0_Dd;
            iVar1 = random.Rand(100);
            if (random.Rand(100) < 50) {
                if (49 < iVar1) {
                    local_28 = -local_28;
                    uStack_24 = uStack_24 ^ 2147483648;
                    uStack_20 = uStack_20 ^ 2147483648;
                    uStack_1c = uStack_1c ^ 2147483648;
                }
                arg3 = (float)random.FRandS(arg3);
                arg1 = local_28;
            } else {
                arg1 = (float)random.FRandS(local_28);
                if (49 < iVar1) {
                    arg3 = -arg3;
                }
            }
        }
        ColourHSL local_38(arg1, 0.0, arg3);
        uVar3._0_4_ = local_38.field_0;
        uVar3._4_4_ = local_38.field_4;
        return uVar3;
    }

    // 0x100c64420
    void GetRandomPointDisc(Random& random, float arg2, bool arg3) {
        uint32_t in_register_00000031;
        float fVar1;
        uint64_t uVar2;
        uint8_t local_30[16];

        float local_1c = arg2;
        float local_20 = (float)random.FRand(6.2831855f);
        if ((((uint32_t)in_register_00000031 << 8) | (uint8_t)arg3) == 0) {
            fVar1 = (float)random.FRand(1.0);
            fVar1 = (float)::sqrt(fVar1);
            local_1c = local_1c * fVar1;
        }
        local_30._12_4_ = ::cos(local_20);
        local_30._12_4_ = (float)local_30._12_4_ * local_1c;
        fVar1 = (float)::sin(local_20);
        new (local_30) ColourHSL((float)local_30._12_4_, 0.0, local_1c * fVar1);
        uVar2._0_4_ = (float)local_30._0_4_;
        uVar2._4_4_ = (float)local_30._4_4_;
        return uVar2;
    }

    // 0x100c64520
    void GetRandomPointCone(Random& random, float arg2, float arg3, float arg4, bool arg5) {
        uint64_t in_register_00000031;
        float fVar1;
        uint64_t uVar2;
        uint8_t local_40[12];

        float local_34 = arg2;
        float local_30 = arg3;
        float local_20 = (float)random.FRand(1.0);
        float local_24 = (float)random.FRand(6.2831855f);
        float local_1c = Lerp<float, float>(&local_34, &local_30, local_20);
        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg5) == 0) {
            fVar1 = (float)random.FRand(1.0);
            fVar1 = (float)::sqrt(fVar1);
            local_1c = local_1c * fVar1;
        }
        float local_28 = (float)::cos(local_24);
        local_28 = local_28 * local_1c;
        local_20 = local_20 * arg4;
        fVar1 = (float)::sin(local_24);
        new (local_40) ColourHSL(local_28, local_20, local_1c * fVar1);
        uVar2._0_4_ = (float)local_40._0_4_;
        uVar2._4_4_ = (float)local_40._4_4_;
        return uVar2;
    }

} // namespace jag::math

// 0x100c644c0
void sqrt(float arg1) {
    unsigned int in_XMM0_Db;
    uint32_t in_XMM0_Dc;
    uint32_t in_XMM0_Dd;
    uint8_t in_XMM1[16];
    uint8_t auVar1[16];

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = arg1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    float fVar2 = arg1 * auVar1._0_4_;
    return (((uint64_t)(~(in_XMM0_Db & 2147483647) & in_XMM0_Db) << 32) |
            (uint32_t)(~-(unsigned int)(ABS(arg1) < 1.1754944e-38) &
                       (unsigned int)((fVar2 * auVar1._0_4_ - 3.0) * fVar2 * -0.5)));
}

// 0x100c64500
void cos(float arg1) {
    _cosf();
}

// 0x100c64510
void sin(float arg1) {
    _sinf();
}
