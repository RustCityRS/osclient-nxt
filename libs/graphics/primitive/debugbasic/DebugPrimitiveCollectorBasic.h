// libs/graphics/primitive/debugbasic/DebugPrimitiveCollectorBasic.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class DebugPrimitiveCollectorBasic {
    public:
        // virtual methods in vtable order
        virtual ~DebugPrimitiveCollectorBasic();
        virtual void AddTri(const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32,
                            const math::Vector3T<float>& vector33, const DebugDataBasic& debugDataBasic);
        virtual void AddLine(const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32,
                             const DebugDataBasic& debugDataBasic);
        virtual void AddSphere(const math::Sphere& sphere, const DebugDataBasic& debugDataBasic);
        virtual void AddEllipsoid(const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32,
                                  const DebugDataBasic& debugDataBasic);
        virtual void AddCapsule(const math::Capsule3D& capsule3D, const DebugDataBasic& debugDataBasic);
        virtual void AddCone(const math::Matrix44T<float>& matrix44, const DebugDataBasic& debugDataBasic);
        virtual void AddCylinder(const math::Matrix44T<float>& matrix44, const DebugDataBasic& debugDataBasic);
        virtual void AddAABB(const math::AABB& aabb, const DebugDataBasic& debugDataBasic);
        virtual void AddOBB(const math::OBB& obb, const DebugDataBasic& debugDataBasic);
        virtual void AddAxes(const math::Vector3T<float>& vector3, const math::Matrix33T<float>& matrix33, float arg3,
                             const DebugDataBasic& debugDataBasic);
        virtual void AddFrustum(const math::Frustum& frustum, const math::Matrix44T<float>& matrix44,
                                const DebugDataBasic& debugDataBasic);
        virtual void AddPlane(const math::Vector3T<float>& vector3, const math::PlaneT<float>& plane, int arg3,
                              int arg4, const DebugDataBasic& debugDataBasic);
        virtual void AddImage2D(const render::Texture* texture, const math::Rect<float>& rect,
                                const math::Vector2T<float>& vector21, const math::Vector2T<float>& vector22, bool arg5,
                                bool arg6, bool arg7, const DebugDataBasic& debugDataBasic);
        virtual void AddImageCube(const render::Texture* texture, const math::Rect<float>& rect, bool arg3, bool arg4,
                                  const DebugDataBasic& debugDataBasic);
        virtual void AddImage3D(const render::Texture* texture, const math::Rect<float>& rect, bool arg3, bool arg4,
                                const DebugDataBasic& debugDataBasic);
        virtual void AddText(const math::Vector3T<float>& vector3, const eastl::string& str,
                             const DebugDataBasic& debugDataBasic);
        virtual void AddText2D(const math::Vector2T<float>& vector2, const eastl::string& str,
                               const DebugDataBasic& debugDataBasic);
        virtual void AddRect2D(const math::Rect<int>& rect, bool arg2, const DebugDataBasic& debugDataBasic);
        virtual void AddCircle2D(const math::Vector2T<float>& vector2, float arg2, bool arg3,
                                 const DebugDataBasic& debugDataBasic);
        void CreateCollector(const char* str, DebugPrimitiveCollector<DebugDataBasic>::Config& config);
        DebugPrimitiveCollectorBasic(const DebugPrimitiveCollector<DebugDataBasic>::Config& config);
        void DestroyCollector(const char* str);
        void DestroyAllCollectors();
        long* GetCollector(const char* str);
        void Clear();
        static vector<unsigned long, eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true>> m_GlobalCollectors;

    private:
        uint8_t _unknown_8[544];
        uint64_t field_552;
        uint64_t field_560;
        uint64_t field_568;
        uint64_t field_576;
        uint64_t field_584;
        uint64_t field_592;
        uint64_t field_600;
        uint64_t field_608;
        uint32_t field_616;
        uint8_t _unknown_620[5132];
    };

    template <
        typename...> // 17 instantiations, e.g. <DebugAABB<DebugDataBasic> >, <DebugCapsule<DebugDataBasic> >, <DebugCircle2D<DebugDataBasic> >
    class DebugPrimitiveRenderGroups {
    public:
        DebugPrimitiveRenderGroups(int arg1);
        ~DebugPrimitiveRenderGroups();
        void Clear();
        void AddPrimitive(const DebugTri<DebugDataBasic>& debugTri, unsigned int arg2);
        void AddPrimitive(const DebugLine<DebugDataBasic>& debugLine, unsigned int arg2);
        void AddPrimitive(const DebugEllipsoid<DebugDataBasic>& debugEllipsoid, unsigned int arg2);
        void AddPrimitive(const DebugCapsule<DebugDataBasic>& debugCapsule, unsigned int arg2);
        void AddPrimitive(const DebugCone<DebugDataBasic>& debugCone, unsigned int arg2);
        void AddPrimitive(const DebugCylinder<DebugDataBasic>& debugCylinder, unsigned int arg2);
        void AddPrimitive(const DebugAABB<DebugDataBasic>& debugAABB, unsigned int arg2);
        void AddPrimitive(const DebugOBB<DebugDataBasic>& debugOBB, unsigned int arg2);
        void AddPrimitive(const DebugFrustum<DebugDataBasic>& debugFrustum, unsigned int arg2);
        void AddPrimitive(const DebugPlane<DebugDataBasic>& debugPlane, unsigned int arg2);
        void AddPrimitive(const DebugImage2D<DebugDataBasic>& debugImage2D, unsigned int arg2);
        void AddPrimitive(const DebugImageCube<DebugDataBasic>& debugImageCube, unsigned int arg2);
        void AddPrimitive(const DebugImage3D<DebugDataBasic>& debugImage3D, unsigned int arg2);
        void AddPrimitive(const DebugText<DebugDataBasic>& debugText, unsigned int arg2);
        void AddPrimitive(const DebugText2D<DebugDataBasic>& debugText2D, unsigned int arg2);
        void AddPrimitive(const DebugRect2D<DebugDataBasic>& debugRect2D, unsigned int arg2);
        void AddPrimitive(const DebugCircle2D<DebugDataBasic>& debugCircle2D, unsigned int arg2);
        void GetRenderGroup(unsigned int arg1);
    };

    // 0x1009c6070
    void DebugPrimitiveRenderGroups<DebugTri<DebugDataBasic>>::Clear() {
        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<int, int>>* pvVar1 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>>, 8ul>::end();
        for (; this_00 != pvVar1; this_00 = this_00 + 32) {
            this_00->clear();
        }
    }

    // 0x1009c60c0
    void DebugPrimitiveRenderGroups<DebugLine<DebugDataBasic>>::Clear() {
        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<int, int>>* pvVar1 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>>, 8ul>::end();
        for (; this_00 != pvVar1; this_00 = this_00 + 32) {
            this_00->clear();
        }
    }

    // 0x1009c6110
    void DebugPrimitiveRenderGroups<DebugEllipsoid<DebugDataBasic>>::Clear() {
        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<int, int>>* pvVar1 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>>, 8ul>::end();
        for (; this_00 != pvVar1; this_00 = this_00 + 32) {
            this_00->clear();
        }
    }

    // 0x1009c6160
    void DebugPrimitiveRenderGroups<DebugCapsule<DebugDataBasic>>::Clear() {
        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<int, int>>* pvVar1 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>>, 8ul>::end();
        for (; this_00 != pvVar1; this_00 = this_00 + 32) {
            this_00->clear();
        }
    }

    // 0x1009c61b0
    void DebugPrimitiveRenderGroups<DebugCone<DebugDataBasic>>::Clear() {
        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<int, int>>* pvVar1 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>>, 8ul>::end();
        for (; this_00 != pvVar1; this_00 = this_00 + 32) {
            this_00->clear();
        }
    }

    // 0x1009c6200
    void DebugPrimitiveRenderGroups<DebugCylinder<DebugDataBasic>>::Clear() {
        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<int, int>>* pvVar1 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>>, 8ul>::end();
        for (; this_00 != pvVar1; this_00 = this_00 + 32) {
            this_00->clear();
        }
    }

    // 0x1009c6250
    void DebugPrimitiveRenderGroups<DebugAABB<DebugDataBasic>>::Clear() {
        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<int, int>>* pvVar1 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>>, 8ul>::end();
        for (; this_00 != pvVar1; this_00 = this_00 + 32) {
            this_00->clear();
        }
    }

    // 0x1009c62a0
    void DebugPrimitiveRenderGroups<DebugOBB<DebugDataBasic>>::Clear() {
        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<int, int>>* pvVar1 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>>, 8ul>::end();
        for (; this_00 != pvVar1; this_00 = this_00 + 32) {
            this_00->clear();
        }
    }

    // 0x1009c62f0
    void DebugPrimitiveRenderGroups<DebugFrustum<DebugDataBasic>>::Clear() {
        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugFrustum<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<int, int>>* pvVar1 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugFrustum<DebugDataBasic> const*, float>>, 8ul>::end();
        for (; this_00 != pvVar1; this_00 = this_00 + 32) {
            this_00->clear();
        }
    }

    // 0x1009c6340
    void DebugPrimitiveRenderGroups<DebugPlane<DebugDataBasic>>::Clear() {
        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugPlane<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<int, int>>* pvVar1 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugPlane<DebugDataBasic> const*, float>>, 8ul>::end();
        for (; this_00 != pvVar1; this_00 = this_00 + 32) {
            this_00->clear();
        }
    }

    // 0x1009c6390
    void DebugPrimitiveRenderGroups<DebugImage2D<DebugDataBasic>>::Clear() {
        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<int, int>>* pvVar1 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>>, 8ul>::end();
        for (; this_00 != pvVar1; this_00 = this_00 + 32) {
            this_00->clear();
        }
    }

    // 0x1009c63e0
    void DebugPrimitiveRenderGroups<DebugImageCube<DebugDataBasic>>::Clear() {
        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<int, int>>* pvVar1 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>>, 8ul>::end();
        for (; this_00 != pvVar1; this_00 = this_00 + 32) {
            this_00->clear();
        }
    }

    // 0x1009c6430
    void DebugPrimitiveRenderGroups<DebugImage3D<DebugDataBasic>>::Clear() {
        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<int, int>>* pvVar1 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>>, 8ul>::end();
        for (; this_00 != pvVar1; this_00 = this_00 + 32) {
            this_00->clear();
        }
    }

    // 0x1009c6480
    void DebugPrimitiveRenderGroups<DebugText<DebugDataBasic>>::Clear() {
        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugText<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<int, int>>* pvVar1 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugText<DebugDataBasic> const*, float>>, 8ul>::end();
        for (; this_00 != pvVar1; this_00 = this_00 + 32) {
            this_00->clear();
        }
    }

    // 0x1009c64d0
    void DebugPrimitiveRenderGroups<DebugText2D<DebugDataBasic>>::Clear() {
        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<int, int>>* pvVar1 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>>, 8ul>::end();
        for (; this_00 != pvVar1; this_00 = this_00 + 32) {
            this_00->clear();
        }
    }

    // 0x1009c6520
    void DebugPrimitiveRenderGroups<DebugRect2D<DebugDataBasic>>::Clear() {
        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<int, int>>* pvVar1 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>>, 8ul>::end();
        for (; this_00 != pvVar1; this_00 = this_00 + 32) {
            this_00->clear();
        }
    }

    // 0x1009c6570
    void DebugPrimitiveRenderGroups<DebugCircle2D<DebugDataBasic>>::Clear() {
        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>>, 8ul>::begin();
        vector<eastl::pair<int, int>>* pvVar1 = (vector<eastl::pair<int, int>>*)
            std::array<eastl::vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>>, 8ul>::end();
        for (; this_00 != pvVar1; this_00 = this_00 + 32) {
            this_00->clear();
        }
    }

    // 0x1009cc150
    DebugPrimitiveRenderGroups<DebugRect2D<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
    }

    // 0x1009cc210
    DebugPrimitiveRenderGroups<DebugText2D<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
    }

    // 0x1009cc2d0
    DebugPrimitiveRenderGroups<DebugText<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
    }

    // 0x1009cc390
    DebugPrimitiveRenderGroups<DebugImage3D<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
    }

    // 0x1009cc450
    DebugPrimitiveRenderGroups<DebugImageCube<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
    }

    // 0x1009cc510
    DebugPrimitiveRenderGroups<DebugImage2D<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
    }

    // 0x1009cc5d0
    DebugPrimitiveRenderGroups<DebugPlane<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
    }

    // 0x1009cc690
    DebugPrimitiveRenderGroups<DebugFrustum<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
    }

    // 0x1009cc750
    DebugPrimitiveRenderGroups<DebugOBB<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
    }

    // 0x1009cc810
    DebugPrimitiveRenderGroups<DebugAABB<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
    }

    // 0x1009cc8d0
    DebugPrimitiveRenderGroups<DebugCylinder<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
    }

    // 0x1009cc990
    DebugPrimitiveRenderGroups<DebugCone<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
    }

    // 0x1009cca50
    DebugPrimitiveRenderGroups<DebugCapsule<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
    }

    // 0x1009ccb10
    DebugPrimitiveRenderGroups<DebugEllipsoid<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
    }

    // 0x1009ccbd0
    DebugPrimitiveRenderGroups<DebugLine<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
    }

    // 0x1009ccc90
    DebugPrimitiveRenderGroups<DebugTri<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
    }

    // 0x1009cd550
    DebugPrimitiveCollectorBasic::~DebugPrimitiveCollectorBasic() {
        field_5744.~DebugPrimitiveRenderGroups();
        field_5424.~DebugPrimitiveRenderGroups();
        field_5104.~DebugPrimitiveRenderGroups();
        field_4784.~DebugPrimitiveRenderGroups();
        field_4464.~DebugPrimitiveRenderGroups();
        field_4144.~DebugPrimitiveRenderGroups();
        field_3824.~DebugPrimitiveRenderGroups();
        field_3504.~DebugPrimitiveRenderGroups();
        field_3184.~DebugPrimitiveRenderGroups();
        field_2864.~DebugPrimitiveRenderGroups();
        field_2544.~DebugPrimitiveRenderGroups();
        field_2224.~DebugPrimitiveRenderGroups();
        field_1904.~DebugPrimitiveRenderGroups();
        field_1584.~DebugPrimitiveRenderGroups();
        field_1264.~DebugPrimitiveRenderGroups();
        field_944.~DebugPrimitiveRenderGroups();
        field_624.~DebugPrimitiveRenderGroups();
    }

    // 0x1009cd650
    DebugPrimitiveRenderGroups<DebugCircle2D<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
    }

} // namespace jag
