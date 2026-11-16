// libs/graphics/primitive/debugbasic/DebugPrimitiveCollectorBasic.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class DebugPrimitiveCollectorBasic {
    public:
        // virtual methods in vtable order
        virtual ~DebugPrimitiveCollectorBasic();
        virtual void AddTri(math::Vector3T<float> const&, math::Vector3T<float> const&, math::Vector3T<float> const&,
                            DebugDataBasic const&);
        virtual void AddLine(math::Vector3T<float> const&, math::Vector3T<float> const&, DebugDataBasic const&);
        virtual void AddSphere(math::Sphere const&, DebugDataBasic const&);
        virtual void AddEllipsoid(math::Vector3T<float> const&, math::Vector3T<float> const&, DebugDataBasic const&);
        virtual void AddCapsule(math::Capsule3D const&, DebugDataBasic const&);
        virtual void AddCone(math::Matrix44T<float> const&, DebugDataBasic const&);
        virtual void AddCylinder(math::Matrix44T<float> const&, DebugDataBasic const&);
        virtual void AddAABB(math::AABB const&, DebugDataBasic const&);
        virtual void AddOBB(math::OBB const&, DebugDataBasic const&);
        virtual void AddAxes(math::Vector3T<float> const&, math::Matrix33T<float> const&, float, DebugDataBasic const&);
        virtual void AddFrustum(math::Frustum const&, math::Matrix44T<float> const&, DebugDataBasic const&);
        virtual void AddPlane(math::Vector3T<float> const&, math::PlaneT<float> const&, int, int,
                              DebugDataBasic const&);
        virtual void AddImage2D(render::Texture const*, math::Rect<float> const&, math::Vector2T<float> const&,
                                math::Vector2T<float> const&, bool, bool, bool, DebugDataBasic const&);
        virtual void AddImageCube(render::Texture const*, math::Rect<float> const&, bool, bool, DebugDataBasic const&);
        virtual void AddImage3D(render::Texture const*, math::Rect<float> const&, bool, bool, DebugDataBasic const&);
        virtual void AddText(math::Vector3T<float> const&, eastl::string const&, DebugDataBasic const&);
        virtual void AddText2D(math::Vector2T<float> const&, eastl::string const&, DebugDataBasic const&);
        virtual void AddRect2D(math::Rect<int> const&, bool, DebugDataBasic const&);
        virtual void AddCircle2D(math::Vector2T<float> const&, float, bool, DebugDataBasic const&);
        void CreateCollector(char const*, DebugPrimitiveCollector<DebugDataBasic>::Config&);
        DebugPrimitiveCollectorBasic(DebugPrimitiveCollector<DebugDataBasic>::Config const&);
        void DestroyCollector(char const*);
        void DestroyAllCollectors();
        void GetCollector(char const*);
        void Clear();
        static /* 2544 bytes */ m_GlobalCollectors;

        // data members, from how the methods use this: 5752 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[544];
        undefined8 field_552; // offset 552
        undefined8 field_560; // offset 560
        undefined8 field_568; // offset 568
        undefined8 field_576; // offset 576
        undefined8 field_584; // offset 584
        undefined8 field_592; // offset 592
        undefined8 field_600; // offset 600
        undefined8 field_608; // offset 608
        undefined4 field_616; // offset 616
        char _unknown_620[5132];
    };

    template <
        typename...> // 17 instantiations, e.g. <DebugAABB<DebugDataBasic> >, <DebugCapsule<DebugDataBasic> >, <DebugCircle2D<DebugDataBasic> >
    class DebugPrimitiveRenderGroups {
    public:
        DebugPrimitiveRenderGroups(int);
        ~DebugPrimitiveRenderGroups();
        void Clear();
        void AddPrimitive(DebugTri<DebugDataBasic> const&, unsigned int);
        void AddPrimitive(DebugLine<DebugDataBasic> const&, unsigned int);
        void AddPrimitive(DebugEllipsoid<DebugDataBasic> const&, unsigned int);
        void AddPrimitive(DebugCapsule<DebugDataBasic> const&, unsigned int);
        void AddPrimitive(DebugCone<DebugDataBasic> const&, unsigned int);
        void AddPrimitive(DebugCylinder<DebugDataBasic> const&, unsigned int);
        void AddPrimitive(DebugAABB<DebugDataBasic> const&, unsigned int);
        void AddPrimitive(DebugOBB<DebugDataBasic> const&, unsigned int);
        void AddPrimitive(DebugFrustum<DebugDataBasic> const&, unsigned int);
        void AddPrimitive(DebugPlane<DebugDataBasic> const&, unsigned int);
        void AddPrimitive(DebugImage2D<DebugDataBasic> const&, unsigned int);
        void AddPrimitive(DebugImageCube<DebugDataBasic> const&, unsigned int);
        void AddPrimitive(DebugImage3D<DebugDataBasic> const&, unsigned int);
        void AddPrimitive(DebugText<DebugDataBasic> const&, unsigned int);
        void AddPrimitive(DebugText2D<DebugDataBasic> const&, unsigned int);
        void AddPrimitive(DebugRect2D<DebugDataBasic> const&, unsigned int);
        void AddPrimitive(DebugCircle2D<DebugDataBasic> const&, unsigned int);
        void GetRenderGroup(unsigned int);
    };

    // 0x1009c5ba0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugTri<DebugDataBasic> >::DebugPrimitiveRenderGroups(int): jumps straight to the base-object constructor

    // 0x1009c5bb0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugLine<DebugDataBasic> >::DebugPrimitiveRenderGroups(int): jumps straight to the base-object constructor

    // 0x1009c5bc0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugEllipsoid<DebugDataBasic> >::DebugPrimitiveRenderGroups(int): jumps straight to the base-object constructor

    // 0x1009c5bd0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugCapsule<DebugDataBasic> >::DebugPrimitiveRenderGroups(int): jumps straight to the base-object constructor

    // 0x1009c5be0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugCone<DebugDataBasic> >::DebugPrimitiveRenderGroups(int): jumps straight to the base-object constructor

    // 0x1009c5bf0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugCylinder<DebugDataBasic> >::DebugPrimitiveRenderGroups(int): jumps straight to the base-object constructor

    // 0x1009c5c00, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugAABB<DebugDataBasic> >::DebugPrimitiveRenderGroups(int): jumps straight to the base-object constructor

    // 0x1009c5c10, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugOBB<DebugDataBasic> >::DebugPrimitiveRenderGroups(int): jumps straight to the base-object constructor

    // 0x1009c5c20, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugFrustum<DebugDataBasic> >::DebugPrimitiveRenderGroups(int): jumps straight to the base-object constructor

    // 0x1009c5c30, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugPlane<DebugDataBasic> >::DebugPrimitiveRenderGroups(int): jumps straight to the base-object constructor

    // 0x1009c5c40, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugImage2D<DebugDataBasic> >::DebugPrimitiveRenderGroups(int): jumps straight to the base-object constructor

    // 0x1009c5c50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugImageCube<DebugDataBasic> >::DebugPrimitiveRenderGroups(int): jumps straight to the base-object constructor

    // 0x1009c5c60, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugImage3D<DebugDataBasic> >::DebugPrimitiveRenderGroups(int): jumps straight to the base-object constructor

    // 0x1009c5c70, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugText<DebugDataBasic> >::DebugPrimitiveRenderGroups(int): jumps straight to the base-object constructor

    // 0x1009c5c80, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugText2D<DebugDataBasic> >::DebugPrimitiveRenderGroups(int): jumps straight to the base-object constructor

    // 0x1009c5c90, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugRect2D<DebugDataBasic> >::DebugPrimitiveRenderGroups(int): jumps straight to the base-object constructor

    // 0x1009c5ca0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugCircle2D<DebugDataBasic> >::DebugPrimitiveRenderGroups(int): jumps straight to the base-object constructor

    // 0x1009c5cb0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugRect2D<DebugDataBasic> >::~DebugPrimitiveRenderGroups(): jumps straight to the base-object destructor

    // 0x1009c5cc0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugText2D<DebugDataBasic> >::~DebugPrimitiveRenderGroups(): jumps straight to the base-object destructor

    // 0x1009c5cd0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugText<DebugDataBasic> >::~DebugPrimitiveRenderGroups(): jumps straight to the base-object destructor

    // 0x1009c5ce0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugImage3D<DebugDataBasic> >::~DebugPrimitiveRenderGroups(): jumps straight to the base-object destructor

    // 0x1009c5cf0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugImageCube<DebugDataBasic> >::~DebugPrimitiveRenderGroups(): jumps straight to the base-object destructor

    // 0x1009c5d00, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugImage2D<DebugDataBasic> >::~DebugPrimitiveRenderGroups(): jumps straight to the base-object destructor

    // 0x1009c5d10, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugPlane<DebugDataBasic> >::~DebugPrimitiveRenderGroups(): jumps straight to the base-object destructor

    // 0x1009c5d20, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugFrustum<DebugDataBasic> >::~DebugPrimitiveRenderGroups(): jumps straight to the base-object destructor

    // 0x1009c5d30, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugOBB<DebugDataBasic> >::~DebugPrimitiveRenderGroups(): jumps straight to the base-object destructor

    // 0x1009c5d40, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugAABB<DebugDataBasic> >::~DebugPrimitiveRenderGroups(): jumps straight to the base-object destructor

    // 0x1009c5d50, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugCylinder<DebugDataBasic> >::~DebugPrimitiveRenderGroups(): jumps straight to the base-object destructor

    // 0x1009c5d60, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugCone<DebugDataBasic> >::~DebugPrimitiveRenderGroups(): jumps straight to the base-object destructor

    // 0x1009c5d70, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugCapsule<DebugDataBasic> >::~DebugPrimitiveRenderGroups(): jumps straight to the base-object destructor

    // 0x1009c5d80, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugEllipsoid<DebugDataBasic> >::~DebugPrimitiveRenderGroups(): jumps straight to the base-object destructor

    // 0x1009c5d90, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugLine<DebugDataBasic> >::~DebugPrimitiveRenderGroups(): jumps straight to the base-object destructor

    // 0x1009c5da0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugTri<DebugDataBasic> >::~DebugPrimitiveRenderGroups(): jumps straight to the base-object destructor

    // 0x1009c6070, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugTri<DebugDataBasic> >::Clear()
    void DebugPrimitiveRenderGroups<DebugTri<DebugDataBasic>>::Clear() {
        long lVar1;
        long lVar2;

        lVar1 = ((this + 64))->begin();
        lVar2 = ((this + 64))->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 32) {
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        }
    }

    // 0x1009c60c0, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugLine<DebugDataBasic> >::Clear()
    void DebugPrimitiveRenderGroups<DebugLine<DebugDataBasic>>::Clear() {
        long lVar1;
        long lVar2;

        lVar1 = ((this + 64))->begin();
        lVar2 = ((this + 64))->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 32) {
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        }
    }

    // 0x1009c6110, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugEllipsoid<DebugDataBasic> >::Clear()
    void DebugPrimitiveRenderGroups<DebugEllipsoid<DebugDataBasic>>::Clear() {
        long lVar1;
        long lVar2;

        lVar1 = ((this + 64))->begin();
        lVar2 = ((this + 64))->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 32) {
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        }
    }

    // 0x1009c6160, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugCapsule<DebugDataBasic> >::Clear()
    void DebugPrimitiveRenderGroups<DebugCapsule<DebugDataBasic>>::Clear() {
        long lVar1;
        long lVar2;

        lVar1 = ((this + 64))->begin();
        lVar2 = ((this + 64))->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 32) {
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        }
    }

    // 0x1009c61b0, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugCone<DebugDataBasic> >::Clear()
    void DebugPrimitiveRenderGroups<DebugCone<DebugDataBasic>>::Clear() {
        long lVar1;
        long lVar2;

        lVar1 = ((this + 64))->begin();
        lVar2 = ((this + 64))->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 32) {
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        }
    }

    // 0x1009c6200, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugCylinder<DebugDataBasic> >::Clear()
    void DebugPrimitiveRenderGroups<DebugCylinder<DebugDataBasic>>::Clear() {
        long lVar1;
        long lVar2;

        lVar1 = ((this + 64))->begin();
        lVar2 = ((this + 64))->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 32) {
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        }
    }

    // 0x1009c6250, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugAABB<DebugDataBasic> >::Clear()
    void DebugPrimitiveRenderGroups<DebugAABB<DebugDataBasic>>::Clear() {
        long lVar1;
        long lVar2;

        lVar1 = ((this + 64))->begin();
        lVar2 = ((this + 64))->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 32) {
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        }
    }

    // 0x1009c62a0, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugOBB<DebugDataBasic> >::Clear()
    void DebugPrimitiveRenderGroups<DebugOBB<DebugDataBasic>>::Clear() {
        long lVar1;
        long lVar2;

        lVar1 = ((this + 64))->begin();
        lVar2 = ((this + 64))->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 32) {
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        }
    }

    // 0x1009c62f0, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugFrustum<DebugDataBasic> >::Clear()
    void DebugPrimitiveRenderGroups<DebugFrustum<DebugDataBasic>>::Clear() {
        long lVar1;
        long lVar2;

        lVar1 = ((this + 64))->begin();
        lVar2 = ((this + 64))->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 32) {
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        }
    }

    // 0x1009c6340, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugPlane<DebugDataBasic> >::Clear()
    void DebugPrimitiveRenderGroups<DebugPlane<DebugDataBasic>>::Clear() {
        long lVar1;
        long lVar2;

        lVar1 = ((this + 64))->begin();
        lVar2 = ((this + 64))->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 32) {
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        }
    }

    // 0x1009c6390, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugImage2D<DebugDataBasic> >::Clear()
    void DebugPrimitiveRenderGroups<DebugImage2D<DebugDataBasic>>::Clear() {
        long lVar1;
        long lVar2;

        lVar1 = ((this + 64))->begin();
        lVar2 = ((this + 64))->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 32) {
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        }
    }

    // 0x1009c63e0, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugImageCube<DebugDataBasic> >::Clear()
    void DebugPrimitiveRenderGroups<DebugImageCube<DebugDataBasic>>::Clear() {
        long lVar1;
        long lVar2;

        lVar1 = ((this + 64))->begin();
        lVar2 = ((this + 64))->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 32) {
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        }
    }

    // 0x1009c6430, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugImage3D<DebugDataBasic> >::Clear()
    void DebugPrimitiveRenderGroups<DebugImage3D<DebugDataBasic>>::Clear() {
        long lVar1;
        long lVar2;

        lVar1 = ((this + 64))->begin();
        lVar2 = ((this + 64))->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 32) {
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        }
    }

    // 0x1009c6480, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugText<DebugDataBasic> >::Clear()
    void DebugPrimitiveRenderGroups<DebugText<DebugDataBasic>>::Clear() {
        long lVar1;
        long lVar2;

        lVar1 = ((this + 64))->begin();
        lVar2 = ((this + 64))->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 32) {
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        }
    }

    // 0x1009c64d0, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugText2D<DebugDataBasic> >::Clear()
    void DebugPrimitiveRenderGroups<DebugText2D<DebugDataBasic>>::Clear() {
        long lVar1;
        long lVar2;

        lVar1 = ((this + 64))->begin();
        lVar2 = ((this + 64))->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 32) {
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        }
    }

    // 0x1009c6520, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugRect2D<DebugDataBasic> >::Clear()
    void DebugPrimitiveRenderGroups<DebugRect2D<DebugDataBasic>>::Clear() {
        long lVar1;
        long lVar2;

        lVar1 = ((this + 64))->begin();
        lVar2 = ((this + 64))->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 32) {
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        }
    }

    // 0x1009c6570, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugCircle2D<DebugDataBasic> >::Clear()
    void DebugPrimitiveRenderGroups<DebugCircle2D<DebugDataBasic>>::Clear() {
        long lVar1;
        long lVar2;

        lVar1 = ((this + 64))->begin();
        lVar2 = ((this + 64))->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 32) {
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        }
    }

    // 0x1009cbe80, 16 bytes, complete-object destructor, inline, placed by class name
    // DebugPrimitiveCollectorBasic::~DebugPrimitiveCollectorBasic(): jumps straight to the base-object destructor

    // 0x1009cbe90, 32 bytes, deleting destructor, inline, placed by class name
    // DebugPrimitiveCollectorBasic::~DebugPrimitiveCollectorBasic()
    void DebugPrimitiveCollectorBasic::~DebugPrimitiveCollectorBasic() {
        ~DebugPrimitiveCollectorBasic(this);
        operator_delete(this);
    }

    // 0x1009cc150, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // DebugPrimitiveRenderGroups<DebugRect2D<DebugDataBasic> >::~DebugPrimitiveRenderGroups()
    void DebugPrimitiveRenderGroups<DebugRect2D<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
        ~mutex();
    }

    // 0x1009cc210, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // DebugPrimitiveRenderGroups<DebugText2D<DebugDataBasic> >::~DebugPrimitiveRenderGroups()
    void DebugPrimitiveRenderGroups<DebugText2D<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
        ~mutex();
    }

    // 0x1009cc2d0, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // DebugPrimitiveRenderGroups<DebugText<DebugDataBasic> >::~DebugPrimitiveRenderGroups()
    void DebugPrimitiveRenderGroups<DebugText<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
        ~mutex();
    }

    // 0x1009cc390, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // DebugPrimitiveRenderGroups<DebugImage3D<DebugDataBasic> >::~DebugPrimitiveRenderGroups()
    void DebugPrimitiveRenderGroups<DebugImage3D<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
        ~mutex();
    }

    // 0x1009cc450, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // DebugPrimitiveRenderGroups<DebugImageCube<DebugDataBasic> >::~DebugPrimitiveRenderGroups()
    void DebugPrimitiveRenderGroups<DebugImageCube<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
        ~mutex();
    }

    // 0x1009cc510, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // DebugPrimitiveRenderGroups<DebugImage2D<DebugDataBasic> >::~DebugPrimitiveRenderGroups()
    void DebugPrimitiveRenderGroups<DebugImage2D<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
        ~mutex();
    }

    // 0x1009cc5d0, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // DebugPrimitiveRenderGroups<DebugPlane<DebugDataBasic> >::~DebugPrimitiveRenderGroups()
    void DebugPrimitiveRenderGroups<DebugPlane<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
        ~mutex();
    }

    // 0x1009cc690, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // DebugPrimitiveRenderGroups<DebugFrustum<DebugDataBasic> >::~DebugPrimitiveRenderGroups()
    void DebugPrimitiveRenderGroups<DebugFrustum<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
        ~mutex();
    }

    // 0x1009cc750, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // DebugPrimitiveRenderGroups<DebugOBB<DebugDataBasic> >::~DebugPrimitiveRenderGroups()
    void DebugPrimitiveRenderGroups<DebugOBB<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
        ~mutex();
    }

    // 0x1009cc810, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // DebugPrimitiveRenderGroups<DebugAABB<DebugDataBasic> >::~DebugPrimitiveRenderGroups()
    void DebugPrimitiveRenderGroups<DebugAABB<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
        ~mutex();
    }

    // 0x1009cc8d0, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // DebugPrimitiveRenderGroups<DebugCylinder<DebugDataBasic> >::~DebugPrimitiveRenderGroups()
    void DebugPrimitiveRenderGroups<DebugCylinder<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
        ~mutex();
    }

    // 0x1009cc990, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // DebugPrimitiveRenderGroups<DebugCone<DebugDataBasic> >::~DebugPrimitiveRenderGroups()
    void DebugPrimitiveRenderGroups<DebugCone<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
        ~mutex();
    }

    // 0x1009cca50, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // DebugPrimitiveRenderGroups<DebugCapsule<DebugDataBasic> >::~DebugPrimitiveRenderGroups()
    void DebugPrimitiveRenderGroups<DebugCapsule<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
        ~mutex();
    }

    // 0x1009ccb10, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // DebugPrimitiveRenderGroups<DebugEllipsoid<DebugDataBasic> >::~DebugPrimitiveRenderGroups()
    void DebugPrimitiveRenderGroups<DebugEllipsoid<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
        ~mutex();
    }

    // 0x1009ccbd0, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // DebugPrimitiveRenderGroups<DebugLine<DebugDataBasic> >::~DebugPrimitiveRenderGroups()
    void DebugPrimitiveRenderGroups<DebugLine<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
        ~mutex();
    }

    // 0x1009ccc90, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // DebugPrimitiveRenderGroups<DebugTri<DebugDataBasic> >::~DebugPrimitiveRenderGroups()
    void DebugPrimitiveRenderGroups<DebugTri<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
        ~mutex();
    }

    // 0x1009cd550, 240 bytes, base-object destructor, inline, placed by class name
    // DebugPrimitiveCollectorBasic::~DebugPrimitiveCollectorBasic()
    void DebugPrimitiveCollectorBasic::~DebugPrimitiveCollectorBasic() {
        field_0 = &PTR__DebugPrimitiveCollectorBasic_100f1ca60;
        (&field_5744)->~DebugPrimitiveRenderGroups();
        (&field_5424)->~DebugPrimitiveRenderGroups();
        (&field_5104)->~DebugPrimitiveRenderGroups();
        (&field_4784)->~DebugPrimitiveRenderGroups();
        (&field_4464)->~DebugPrimitiveRenderGroups();
        (&field_4144)->~DebugPrimitiveRenderGroups();
        (&field_3824)->~DebugPrimitiveRenderGroups();
        (&field_3504)->~DebugPrimitiveRenderGroups();
        (&field_3184)->~DebugPrimitiveRenderGroups();
        (&field_2864)->~DebugPrimitiveRenderGroups();
        (&field_2544)->~DebugPrimitiveRenderGroups();
        (&field_2224)->~DebugPrimitiveRenderGroups();
        (&field_1904)->~DebugPrimitiveRenderGroups();
        (&field_1584)->~DebugPrimitiveRenderGroups();
        (&field_1264)->~DebugPrimitiveRenderGroups();
        (&field_944)->~DebugPrimitiveRenderGroups();
        (&field_624)->~DebugPrimitiveRenderGroups();
        ~DebugPrimitiveCollector();
    }

    // 0x1009cd640, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // DebugPrimitiveRenderGroups<DebugCircle2D<DebugDataBasic> >::~DebugPrimitiveRenderGroups(): jumps straight to the base-object destructor

    // 0x1009cd650, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // DebugPrimitiveRenderGroups<DebugCircle2D<DebugDataBasic> >::~DebugPrimitiveRenderGroups()
    void DebugPrimitiveRenderGroups<DebugCircle2D<DebugDataBasic>>::~DebugPrimitiveRenderGroups() {
        ((this + 64))->~array();
        ~mutex();
    }

} // namespace jag
