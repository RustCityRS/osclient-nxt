// libs/math/Types.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.math

namespace jag {
    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugAABB {
    public:
        DebugAABB(math::AABB const&, DebugDataBasic const&);
        DebugAABB(DebugAABB<DebugDataBasic>&&);
        void GetCentrePos() const;
    };

    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugCapsule {
    public:
        DebugCapsule(math::Capsule3D const&, DebugDataBasic const&);
        void GetCentrePos() const;
    };

    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugCone {
    public:
        DebugCone(math::Matrix44T<float> const&, DebugDataBasic const&);
        void GetCentrePos() const;
    };

    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugImage2D {
    public:
        DebugImage2D(render::Texture const*, math::Rect<float> const&, math::Vector2T<float> const&,
                     math::Vector2T<float> const&, bool, bool, bool, DebugDataBasic const&);
        DebugImage2D(DebugImage2D<DebugDataBasic>&&);
    };

    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugImageCube {
    public:
        DebugImageCube(render::Texture const*, math::Rect<float> const&, bool, bool, DebugDataBasic const&);
        DebugImageCube(DebugImageCube<DebugDataBasic>&&);
    };

    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugLine {
    public:
        DebugLine(math::Vector3T<float> const&, math::Vector3T<float> const&, DebugDataBasic const&);
        void GetCentrePos() const;
    };

    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugOBB {
    public:
        DebugOBB(math::OBB const&, DebugDataBasic const&);
        DebugOBB(DebugOBB<DebugDataBasic>&&);
        GetCentrePos() const;
    };

    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugText {
    public:
        DebugText(math::Vector3T<float> const&, eastl::string const&, DebugDataBasic const&);
        DebugText(DebugText<DebugDataBasic>&&);
    };

    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugText2D {
    public:
        DebugText2D(math::Vector2T<float> const&, eastl::string const&, DebugDataBasic const&);
        DebugText2D(DebugText2D<DebugDataBasic>&&);
    };

    template <typename...> // 1 instantiations, e.g. <DebugDataBasic>
    class DebugTri {
    public:
        DebugTri(math::Vector3T<float> const&, math::Vector3T<float> const&, math::Vector3T<float> const&,
                 DebugDataBasic const&);
        void GetCentrePos() const;
    };

    class PrimVertPosUVCol {
    public:
        PrimVertPosUVCol();
        static render::VertexElementDesc /* 128 bytes */ m_VertexElemDescs[3]; // initialised in its definition

        // data members, from how the methods use this: 28 bytes
        char _unknown_0[28];
    };

    // 0x103bd9ba0, 128 bytes, __common; set at startup by ___cxx_global_var_init.6
    render::VertexElementDesc PrimVertPosUVCol::m_VertexElemDescs[3] = {
        /* [0] */ VertexElementDesc(0, "aPos", 2, 0, 0, 0),
        /* [1] */ VertexElementDesc(0, "aTexCoord", 1, 0, 5, 0),
        /* [2] */ VertexElementDesc(0, "aColour", 3, 0, 10, 0),
    };

    // 0x1009ce300, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // PrimVertPosUVCol::PrimVertPosUVCol(): jumps straight to the base-object constructor

    // 0x1009ce310, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PrimVertPosUVCol::PrimVertPosUVCol()
    void PrimVertPosUVCol::PrimVertPosUVCol() {
        _func_decltype_nullptr* in_RSI;

        new (this) math::Vector3T<int>();
        new (&field_12) math::Vector2T<int>();
        new (&field_20, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x1009d07e0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugAABB<DebugDataBasic>::DebugAABB(DebugAABB<DebugDataBasic>&&): jumps straight to the base-object constructor

    // 0x1009d07f0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugAABB<DebugDataBasic>::DebugAABB(DebugAABB<DebugDataBasic>&&)
    void DebugAABB<DebugDataBasic>::DebugAABB(DebugAABB* param_1) {
        new (this) math::AABB(param_1);
        *(undefined8*)(this + 32) = *(undefined8*)(param_1 + 32);
    }

    // 0x1009d0a40, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugOBB<DebugDataBasic>::DebugOBB(DebugOBB<DebugDataBasic>&&): jumps straight to the base-object constructor

    // 0x1009d0a50, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugOBB<DebugDataBasic>::DebugOBB(DebugOBB<DebugDataBasic>&&)
    void DebugOBB<DebugDataBasic>::DebugOBB(DebugOBB* param_1) {
        new (this) math::OBB(param_1);
        *(undefined8*)(this + 80) = *(undefined8*)(param_1 + 80);
    }

    // 0x1009d0fe0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugImage2D<DebugDataBasic>::DebugImage2D(DebugImage2D<DebugDataBasic>&&): jumps straight to the base-object constructor

    // 0x1009d0ff0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugImage2D<DebugDataBasic>::DebugImage2D(DebugImage2D<DebugDataBasic>&&)
    void DebugImage2D<DebugDataBasic>::DebugImage2D(DebugImage2D* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        *(undefined8*)this = *(undefined8*)param_1;
        new ((this + 8)) math::Float4((Vector4T*)(param_1 + 8));
        uVar1 = *(undefined8*)(param_1 + 24);
        uVar2 = *(undefined8*)(param_1 + 32);
        uVar3 = *(undefined8*)(param_1 + 44);
        *(undefined8*)(this + 36) = *(undefined8*)(param_1 + 36);
        *(undefined8*)(this + 44) = uVar3;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = uVar2;
    }

    // 0x1009d1250, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugImageCube<DebugDataBasic>::DebugImageCube(DebugImageCube<DebugDataBasic>&&): jumps straight to the base-object constructor

    // 0x1009d1580, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugText<DebugDataBasic>::DebugText(DebugText<DebugDataBasic>&&): jumps straight to the base-object constructor

    // 0x1009d1590, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugText<DebugDataBasic>::DebugText(DebugText<DebugDataBasic>&&)
    void DebugText<DebugDataBasic>::DebugText(DebugText* param_1) {
        *(undefined4*)(this + 8) = *(undefined4*)(param_1 + 8);
        *(undefined8*)this = *(undefined8*)param_1;
        new ((this + 16)) eastl::string((basic_string*)(param_1 + 16));
        *(undefined8*)(this + 48) = *(undefined8*)(param_1 + 48);
    }

    // 0x1009d1800, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugText2D<DebugDataBasic>::DebugText2D(DebugText2D<DebugDataBasic>&&): jumps straight to the base-object constructor

    // 0x1009d1810, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugText2D<DebugDataBasic>::DebugText2D(DebugText2D<DebugDataBasic>&&)
    void DebugText2D<DebugDataBasic>::DebugText2D(DebugText2D* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        new ((this + 8)) eastl::string((basic_string*)(param_1 + 8));
        *(undefined8*)(this + 40) = *(undefined8*)(param_1 + 40);
    }

    // 0x1009d1b80, 160 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugTri<DebugDataBasic> >::DebugPrimitiveRenderGroups(int)
    void DebugPrimitiveRenderGroups<DebugTri<DebugDataBasic>>::DebugPrimitiveRenderGroups(int param_1) {
        array<eastl::vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>* this_00;
        vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>, eastl::allocator>* this_01;
        vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>, eastl::allocator>* pvVar1;

        new (this) std::mutex();
        this_00 =
            (array<eastl::vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>*)(this +
                                                                                                                64);
        std::array<eastl::vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::array(
            this_00);
        this_01 = (vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>, eastl::allocator>*)std::array<
            eastl::vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::begin(this_00);
        pvVar1 = (vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::end(
                this_00);
        if (this_01 != pvVar1) {
            do {
                eastl::vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>, eastl::allocator>::reserve(
                    this_01, (long)param_1);
                this_01 = this_01 + 32;
            } while (this_01 != pvVar1);
        }
    }

    // 0x1009d1ec0, 160 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugLine<DebugDataBasic> >::DebugPrimitiveRenderGroups(int)
    void DebugPrimitiveRenderGroups<DebugLine<DebugDataBasic>>::DebugPrimitiveRenderGroups(int param_1) {
        array<eastl::vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>* this_00;
        vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>, eastl::allocator>* this_01;
        vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>, eastl::allocator>* pvVar1;

        new (this) std::mutex();
        this_00 =
            (array<eastl::vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>*)(this +
                                                                                                                 64);
        std::array<eastl::vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::array(
            this_00);
        this_01 = (vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>, eastl::allocator>*)std::array<
            eastl::vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::begin(this_00);
        pvVar1 = (vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::end(
                this_00);
        if (this_01 != pvVar1) {
            do {
                eastl::vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>, eastl::allocator>::reserve(
                    this_01, (long)param_1);
                this_01 = this_01 + 32;
            } while (this_01 != pvVar1);
        }
    }

    // 0x1009d21c0, 160 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugEllipsoid<DebugDataBasic> >::DebugPrimitiveRenderGroups(int)
    void DebugPrimitiveRenderGroups<DebugEllipsoid<DebugDataBasic>>::DebugPrimitiveRenderGroups(int param_1) {
        array<eastl::vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>* this_00;
        vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>, eastl::allocator>* this_01;
        vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>, eastl::allocator>* pvVar1;

        new (this) std::mutex();
        this_00 = (array<eastl::vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>, eastl::allocator>,
                         8ul>*)(this + 64);
        std::array<eastl::vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>, eastl::allocator>,
                   8ul>::array(this_00);
        this_01 = (vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>, eastl::allocator>,
                       8ul>::begin(this_00);
        pvVar1 = (vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>, eastl::allocator>,
                       8ul>::end(this_00);
        if (this_01 != pvVar1) {
            do {
                eastl::vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>, eastl::allocator>::reserve(
                    this_01, (long)param_1);
                this_01 = this_01 + 32;
            } while (this_01 != pvVar1);
        }
    }

    // 0x1009d24c0, 160 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugCapsule<DebugDataBasic> >::DebugPrimitiveRenderGroups(int)
    void DebugPrimitiveRenderGroups<DebugCapsule<DebugDataBasic>>::DebugPrimitiveRenderGroups(int param_1) {
        array<eastl::vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>* this_00;
        vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>, eastl::allocator>* this_01;
        vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>, eastl::allocator>* pvVar1;

        new (this) std::mutex();
        this_00 = (array<eastl::vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>, eastl::allocator>,
                         8ul>*)(this + 64);
        std::array<eastl::vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>, eastl::allocator>,
                   8ul>::array(this_00);
        this_01 = (vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>, eastl::allocator>,
                       8ul>::begin(this_00);
        pvVar1 = (vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>, eastl::allocator>,
                       8ul>::end(this_00);
        if (this_01 != pvVar1) {
            do {
                eastl::vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>, eastl::allocator>::reserve(
                    this_01, (long)param_1);
                this_01 = this_01 + 32;
            } while (this_01 != pvVar1);
        }
    }

    // 0x1009d27c0, 160 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugCone<DebugDataBasic> >::DebugPrimitiveRenderGroups(int)
    void DebugPrimitiveRenderGroups<DebugCone<DebugDataBasic>>::DebugPrimitiveRenderGroups(int param_1) {
        array<eastl::vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>* this_00;
        vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>, eastl::allocator>* this_01;
        vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>, eastl::allocator>* pvVar1;

        new (this) std::mutex();
        this_00 =
            (array<eastl::vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>*)(this +
                                                                                                                 64);
        std::array<eastl::vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::array(
            this_00);
        this_01 = (vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>, eastl::allocator>*)std::array<
            eastl::vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::begin(this_00);
        pvVar1 = (vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::end(
                this_00);
        if (this_01 != pvVar1) {
            do {
                eastl::vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>, eastl::allocator>::reserve(
                    this_01, (long)param_1);
                this_01 = this_01 + 32;
            } while (this_01 != pvVar1);
        }
    }

    // 0x1009d2ac0, 160 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugCylinder<DebugDataBasic> >::DebugPrimitiveRenderGroups(int)
    void DebugPrimitiveRenderGroups<DebugCylinder<DebugDataBasic>>::DebugPrimitiveRenderGroups(int param_1) {
        array<eastl::vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>* this_00;
        vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>, eastl::allocator>* this_01;
        vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>, eastl::allocator>* pvVar1;

        new (this) std::mutex();
        this_00 = (array<eastl::vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>, eastl::allocator>,
                         8ul>*)(this + 64);
        std::array<eastl::vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>, eastl::allocator>,
                   8ul>::array(this_00);
        this_01 = (vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>, eastl::allocator>,
                       8ul>::begin(this_00);
        pvVar1 = (vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>, eastl::allocator>,
                       8ul>::end(this_00);
        if (this_01 != pvVar1) {
            do {
                eastl::vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>, eastl::allocator>::reserve(
                    this_01, (long)param_1);
                this_01 = this_01 + 32;
            } while (this_01 != pvVar1);
        }
    }

    // 0x1009d2dc0, 160 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugAABB<DebugDataBasic> >::DebugPrimitiveRenderGroups(int)
    void DebugPrimitiveRenderGroups<DebugAABB<DebugDataBasic>>::DebugPrimitiveRenderGroups(int param_1) {
        array<eastl::vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>* this_00;
        vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>, eastl::allocator>* this_01;
        vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>, eastl::allocator>* pvVar1;

        new (this) std::mutex();
        this_00 =
            (array<eastl::vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>*)(this +
                                                                                                                 64);
        std::array<eastl::vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::array(
            this_00);
        this_01 = (vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>, eastl::allocator>*)std::array<
            eastl::vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::begin(this_00);
        pvVar1 = (vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::end(
                this_00);
        if (this_01 != pvVar1) {
            do {
                eastl::vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>, eastl::allocator>::reserve(
                    this_01, (long)param_1);
                this_01 = this_01 + 32;
            } while (this_01 != pvVar1);
        }
    }

    // 0x1009d30c0, 160 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugOBB<DebugDataBasic> >::DebugPrimitiveRenderGroups(int)
    void DebugPrimitiveRenderGroups<DebugOBB<DebugDataBasic>>::DebugPrimitiveRenderGroups(int param_1) {
        array<eastl::vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>* this_00;
        vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>, eastl::allocator>* this_01;
        vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>, eastl::allocator>* pvVar1;

        new (this) std::mutex();
        this_00 =
            (array<eastl::vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>*)(this +
                                                                                                                64);
        std::array<eastl::vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::array(
            this_00);
        this_01 = (vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>, eastl::allocator>*)std::array<
            eastl::vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::begin(this_00);
        pvVar1 = (vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::end(
                this_00);
        if (this_01 != pvVar1) {
            do {
                eastl::vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>, eastl::allocator>::reserve(
                    this_01, (long)param_1);
                this_01 = this_01 + 32;
            } while (this_01 != pvVar1);
        }
    }

    // 0x1009d33c0, 160 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugFrustum<DebugDataBasic> >::DebugPrimitiveRenderGroups(int)
    void DebugPrimitiveRenderGroups<DebugFrustum<DebugDataBasic>>::DebugPrimitiveRenderGroups(int param_1) {
        array<eastl::vector<eastl::pair<DebugFrustum<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>* this_00;
        vector<eastl::pair<DebugFrustum<DebugDataBasic> const*, float>, eastl::allocator>* this_01;
        vector<eastl::pair<DebugFrustum<DebugDataBasic> const*, float>, eastl::allocator>* pvVar1;

        new (this) std::mutex();
        this_00 = (array<eastl::vector<eastl::pair<DebugFrustum<DebugDataBasic> const*, float>, eastl::allocator>,
                         8ul>*)(this + 64);
        std::array<eastl::vector<eastl::pair<DebugFrustum<DebugDataBasic> const*, float>, eastl::allocator>,
                   8ul>::array(this_00);
        this_01 = (vector<eastl::pair<DebugFrustum<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugFrustum<DebugDataBasic> const*, float>, eastl::allocator>,
                       8ul>::begin(this_00);
        pvVar1 = (vector<eastl::pair<DebugFrustum<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugFrustum<DebugDataBasic> const*, float>, eastl::allocator>,
                       8ul>::end(this_00);
        if (this_01 != pvVar1) {
            do {
                eastl::vector<eastl::pair<DebugFrustum<DebugDataBasic> const*, float>, eastl::allocator>::reserve(
                    this_01, (long)param_1);
                this_01 = this_01 + 32;
            } while (this_01 != pvVar1);
        }
    }

    // 0x1009d36c0, 160 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugPlane<DebugDataBasic> >::DebugPrimitiveRenderGroups(int)
    void DebugPrimitiveRenderGroups<DebugPlane<DebugDataBasic>>::DebugPrimitiveRenderGroups(int param_1) {
        array<eastl::vector<eastl::pair<DebugPlane<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>* this_00;
        vector<eastl::pair<DebugPlane<DebugDataBasic> const*, float>, eastl::allocator>* this_01;
        vector<eastl::pair<DebugPlane<DebugDataBasic> const*, float>, eastl::allocator>* pvVar1;

        new (this) std::mutex();
        this_00 =
            (array<eastl::vector<eastl::pair<DebugPlane<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>*)(this +
                                                                                                                  64);
        std::array<eastl::vector<eastl::pair<DebugPlane<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::array(
            this_00);
        this_01 = (vector<eastl::pair<DebugPlane<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugPlane<DebugDataBasic> const*, float>, eastl::allocator>,
                       8ul>::begin(this_00);
        pvVar1 = (vector<eastl::pair<DebugPlane<DebugDataBasic> const*, float>, eastl::allocator>*)std::array<
            eastl::vector<eastl::pair<DebugPlane<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::end(this_00);
        if (this_01 != pvVar1) {
            do {
                eastl::vector<eastl::pair<DebugPlane<DebugDataBasic> const*, float>, eastl::allocator>::reserve(
                    this_01, (long)param_1);
                this_01 = this_01 + 32;
            } while (this_01 != pvVar1);
        }
    }

    // 0x1009d39c0, 160 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugImage2D<DebugDataBasic> >::DebugPrimitiveRenderGroups(int)
    void DebugPrimitiveRenderGroups<DebugImage2D<DebugDataBasic>>::DebugPrimitiveRenderGroups(int param_1) {
        array<eastl::vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>* this_00;
        vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>, eastl::allocator>* this_01;
        vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>, eastl::allocator>* pvVar1;

        new (this) std::mutex();
        this_00 = (array<eastl::vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>, eastl::allocator>,
                         8ul>*)(this + 64);
        std::array<eastl::vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>, eastl::allocator>,
                   8ul>::array(this_00);
        this_01 = (vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>, eastl::allocator>,
                       8ul>::begin(this_00);
        pvVar1 = (vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>, eastl::allocator>,
                       8ul>::end(this_00);
        if (this_01 != pvVar1) {
            do {
                eastl::vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>, eastl::allocator>::reserve(
                    this_01, (long)param_1);
                this_01 = this_01 + 32;
            } while (this_01 != pvVar1);
        }
    }

    // 0x1009d3cc0, 160 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugImageCube<DebugDataBasic> >::DebugPrimitiveRenderGroups(int)
    void DebugPrimitiveRenderGroups<DebugImageCube<DebugDataBasic>>::DebugPrimitiveRenderGroups(int param_1) {
        array<eastl::vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>* this_00;
        vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>, eastl::allocator>* this_01;
        vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>, eastl::allocator>* pvVar1;

        new (this) std::mutex();
        this_00 = (array<eastl::vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>, eastl::allocator>,
                         8ul>*)(this + 64);
        std::array<eastl::vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>, eastl::allocator>,
                   8ul>::array(this_00);
        this_01 = (vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>, eastl::allocator>,
                       8ul>::begin(this_00);
        pvVar1 = (vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>, eastl::allocator>,
                       8ul>::end(this_00);
        if (this_01 != pvVar1) {
            do {
                eastl::vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>, eastl::allocator>::reserve(
                    this_01, (long)param_1);
                this_01 = this_01 + 32;
            } while (this_01 != pvVar1);
        }
    }

    // 0x1009d3fc0, 160 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugImage3D<DebugDataBasic> >::DebugPrimitiveRenderGroups(int)
    void DebugPrimitiveRenderGroups<DebugImage3D<DebugDataBasic>>::DebugPrimitiveRenderGroups(int param_1) {
        array<eastl::vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>* this_00;
        vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>, eastl::allocator>* this_01;
        vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>, eastl::allocator>* pvVar1;

        new (this) std::mutex();
        this_00 = (array<eastl::vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>, eastl::allocator>,
                         8ul>*)(this + 64);
        std::array<eastl::vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>, eastl::allocator>,
                   8ul>::array(this_00);
        this_01 = (vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>, eastl::allocator>,
                       8ul>::begin(this_00);
        pvVar1 = (vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>, eastl::allocator>,
                       8ul>::end(this_00);
        if (this_01 != pvVar1) {
            do {
                eastl::vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>, eastl::allocator>::reserve(
                    this_01, (long)param_1);
                this_01 = this_01 + 32;
            } while (this_01 != pvVar1);
        }
    }

    // 0x1009d42c0, 160 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugText<DebugDataBasic> >::DebugPrimitiveRenderGroups(int)
    void DebugPrimitiveRenderGroups<DebugText<DebugDataBasic>>::DebugPrimitiveRenderGroups(int param_1) {
        array<eastl::vector<eastl::pair<DebugText<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>* this_00;
        vector<eastl::pair<DebugText<DebugDataBasic> const*, float>, eastl::allocator>* this_01;
        vector<eastl::pair<DebugText<DebugDataBasic> const*, float>, eastl::allocator>* pvVar1;

        new (this) std::mutex();
        this_00 =
            (array<eastl::vector<eastl::pair<DebugText<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>*)(this +
                                                                                                                 64);
        std::array<eastl::vector<eastl::pair<DebugText<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::array(
            this_00);
        this_01 = (vector<eastl::pair<DebugText<DebugDataBasic> const*, float>, eastl::allocator>*)std::array<
            eastl::vector<eastl::pair<DebugText<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::begin(this_00);
        pvVar1 = (vector<eastl::pair<DebugText<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugText<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::end(
                this_00);
        if (this_01 != pvVar1) {
            do {
                eastl::vector<eastl::pair<DebugText<DebugDataBasic> const*, float>, eastl::allocator>::reserve(
                    this_01, (long)param_1);
                this_01 = this_01 + 32;
            } while (this_01 != pvVar1);
        }
    }

    // 0x1009d45c0, 160 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugText2D<DebugDataBasic> >::DebugPrimitiveRenderGroups(int)
    void DebugPrimitiveRenderGroups<DebugText2D<DebugDataBasic>>::DebugPrimitiveRenderGroups(int param_1) {
        array<eastl::vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>* this_00;
        vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>, eastl::allocator>* this_01;
        vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>, eastl::allocator>* pvVar1;

        new (this) std::mutex();
        this_00 = (array<eastl::vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>, eastl::allocator>,
                         8ul>*)(this + 64);
        std::array<eastl::vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::array(
            this_00);
        this_01 = (vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>, eastl::allocator>,
                       8ul>::begin(this_00);
        pvVar1 = (vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>, eastl::allocator>*)std::array<
            eastl::vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::end(this_00);
        if (this_01 != pvVar1) {
            do {
                eastl::vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>, eastl::allocator>::reserve(
                    this_01, (long)param_1);
                this_01 = this_01 + 32;
            } while (this_01 != pvVar1);
        }
    }

    // 0x1009d48c0, 160 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugRect2D<DebugDataBasic> >::DebugPrimitiveRenderGroups(int)
    void DebugPrimitiveRenderGroups<DebugRect2D<DebugDataBasic>>::DebugPrimitiveRenderGroups(int param_1) {
        array<eastl::vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>* this_00;
        vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>, eastl::allocator>* this_01;
        vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>, eastl::allocator>* pvVar1;

        new (this) std::mutex();
        this_00 = (array<eastl::vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>, eastl::allocator>,
                         8ul>*)(this + 64);
        std::array<eastl::vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::array(
            this_00);
        this_01 = (vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>, eastl::allocator>,
                       8ul>::begin(this_00);
        pvVar1 = (vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>, eastl::allocator>*)std::array<
            eastl::vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>::end(this_00);
        if (this_01 != pvVar1) {
            do {
                eastl::vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>, eastl::allocator>::reserve(
                    this_01, (long)param_1);
                this_01 = this_01 + 32;
            } while (this_01 != pvVar1);
        }
    }

    // 0x1009d4bc0, 160 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugPrimitiveRenderGroups<DebugCircle2D<DebugDataBasic> >::DebugPrimitiveRenderGroups(int)
    void DebugPrimitiveRenderGroups<DebugCircle2D<DebugDataBasic>>::DebugPrimitiveRenderGroups(int param_1) {
        array<eastl::vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>, eastl::allocator>, 8ul>* this_00;
        vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>, eastl::allocator>* this_01;
        vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>, eastl::allocator>* pvVar1;

        new (this) std::mutex();
        this_00 = (array<eastl::vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>, eastl::allocator>,
                         8ul>*)(this + 64);
        std::array<eastl::vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>, eastl::allocator>,
                   8ul>::array(this_00);
        this_01 = (vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>, eastl::allocator>,
                       8ul>::begin(this_00);
        pvVar1 = (vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>, eastl::allocator>*)
            std::array<eastl::vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>, eastl::allocator>,
                       8ul>::end(this_00);
        if (this_01 != pvVar1) {
            do {
                eastl::vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>, eastl::allocator>::reserve(
                    this_01, (long)param_1);
                this_01 = this_01 + 32;
            } while (this_01 != pvVar1);
        }
    }

    // 0x1009d4f20, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugTri<DebugDataBasic>::DebugTri(math::Vector3T<float> const&, math::Vector3T<float> const&, math::Vector3T<float> const&, DebugDataBasic const&)
    void DebugTri<DebugDataBasic>::DebugTri(Vector3T* param_1, Vector3T* param_2, Vector3T* param_3,
                                            DebugDataBasic* param_4) {
        *(undefined4*)(this + 8) = *(undefined4*)(param_1 + 8);
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined4*)(this + 20) = *(undefined4*)(param_2 + 8);
        *(undefined8*)(this + 12) = *(undefined8*)param_2;
        *(undefined8*)(this + 24) = *(undefined8*)param_3;
        *(undefined4*)(this + 32) = *(undefined4*)(param_3 + 8);
        *(undefined8*)(this + 36) = *(undefined8*)param_4;
    }

    // 0x1009d5170, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // DebugLine<DebugDataBasic>::DebugLine(math::Vector3T<float> const&, math::Vector3T<float> const&, DebugDataBasic const&)
    /* DebugEllipsoid<DebugDataBasic>::DebugEllipsoid(math::Vector3T<float> const&,
   math::Vector3T<float> const&, DebugDataBasic const&) */

    void DebugEllipsoid<DebugDataBasic>::DebugEllipsoid(Vector3T* param_1, Vector3T* param_2, DebugDataBasic* param_3) {
        *(undefined4*)(this + 8) = *(undefined4*)(param_1 + 8);
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)(this + 12) = *(undefined8*)param_2;
        *(undefined4*)(this + 20) = *(undefined4*)(param_2 + 8);
        *(undefined8*)(this + 24) = *(undefined8*)param_3;
    }

    // 0x1009d5560, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugCapsule<DebugDataBasic>::DebugCapsule(math::Capsule3D const&, DebugDataBasic const&)
    void DebugCapsule<DebugDataBasic>::DebugCapsule(Capsule3D* param_1, DebugDataBasic* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)&param_1->field_8;
        uVar3 = *(undefined8*)&param_1->field_24;
        *(undefined8*)(this + 16) = param_1->field_16;
        *(undefined8*)(this + 24) = uVar3;
        *(undefined8*)this = uVar1;
        *(undefined8*)(this + 8) = uVar2;
        *(undefined8*)(this + 32) = *(undefined8*)param_2;
    }

    // 0x1009d5790, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // DebugCone<DebugDataBasic>::DebugCone(math::Matrix44T<float> const&, DebugDataBasic const&)
    /* DebugCylinder<DebugDataBasic>::DebugCylinder(math::Matrix44T<float> const&,
   DebugDataBasic const&) */

    void DebugCylinder<DebugDataBasic>::DebugCylinder(Matrix44T* param_1, DebugDataBasic* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)&param_1->field_8;
        uVar3 = *(undefined8*)&param_1->field_16;
        uVar4 = *(undefined8*)&param_1->field_24;
        uVar5 = *(undefined8*)&param_1->field_32;
        uVar6 = *(undefined8*)&param_1->field_40;
        uVar7 = *(undefined8*)(param_1 + 1);
        *(undefined8*)(this + 48) = *(undefined8*)&param_1->field_48;
        *(undefined8*)(this + 56) = uVar7;
        *(undefined8*)(this + 32) = uVar5;
        *(undefined8*)(this + 40) = uVar6;
        *(undefined8*)(this + 16) = uVar3;
        *(undefined8*)(this + 24) = uVar4;
        *(undefined8*)this = uVar1;
        *(undefined8*)(this + 8) = uVar2;
        *(undefined8*)(this + 64) = *(undefined8*)param_2;
    }

    // 0x1009d5c00, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugAABB<DebugDataBasic>::DebugAABB(math::AABB const&, DebugDataBasic const&)
    void DebugAABB<DebugDataBasic>::DebugAABB(AABB* param_1, DebugDataBasic* param_2) {
        new (this) math::AABB(param_1);
        *(undefined8*)(this + 32) = *(undefined8*)param_2;
    }

    // 0x1009d5e20, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugOBB<DebugDataBasic>::DebugOBB(math::OBB const&, DebugDataBasic const&)
    void DebugOBB<DebugDataBasic>::DebugOBB(OBB* param_1, DebugDataBasic* param_2) {
        new (this) math::OBB(param_1);
        *(undefined8*)(this + 80) = *(undefined8*)param_2;
    }

    // 0x1009d6040, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugFrustum<DebugDataBasic>::DebugFrustum(math::Frustum const&, DebugDataBasic const&)
    void DebugFrustum<DebugDataBasic>::DebugFrustum(Frustum* param_1, DebugDataBasic* param_2) {
        _memcpy(this, param_1, 160);
        *(undefined8*)(this + 160) = *(undefined8*)param_2;
    }

    // 0x1009d6270, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugPlane<DebugDataBasic>::DebugPlane(math::PlaneT<float> const&, DebugDataBasic const&)
    void DebugPlane<DebugDataBasic>::DebugPlane(PlaneT* param_1, DebugDataBasic* param_2) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)(this + 8) = uVar1;
        *(undefined8*)(this + 16) = *(undefined8*)param_2;
    }

    // 0x1009d6490, 144 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugImage2D<DebugDataBasic>::DebugImage2D(render::Texture const*, math::Rect<float> const&, math::Vector2T<float> const&, math::Vector2T<float> const&, bool, bool, bool, DebugDataBasic const&)
    void DebugImage2D<DebugDataBasic>::DebugImage2D(Texture* param_1, Rect* param_2, Vector2T* param_3,
                                                    Vector2T* param_4, bool param_5, bool param_6, bool param_7,
                                                    DebugDataBasic* param_8) {
        *(Texture**)this = param_1;
        new ((this + 8)) math::Float4(param_2);
        *(undefined8*)(this + 24) = *(undefined8*)param_3;
        *(undefined8*)(this + 32) = *(undefined8*)param_4;
        this[40] = (DebugImage2D<DebugDataBasic>)param_5;
        this[41] = (DebugImage2D<DebugDataBasic>)param_6;
        this[42] = (DebugImage2D<DebugDataBasic>)param_7;
        *(undefined8*)(this + 44) = *(undefined8*)param_8;
        if (param_1 == (Texture*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pImage",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/primitive/debug/"
                      "DebugPrimitives.h",
                      195, (char*)0);
        }
    }

    // 0x1009d6720, 176 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugImageCube<DebugDataBasic>::DebugImageCube(render::Texture const*, math::Rect<float> const&, bool, bool, DebugDataBasic const&)
    void DebugImageCube<DebugDataBasic>::DebugImageCube(Texture* param_1, Rect* param_2, bool param_3, bool param_4,
                                                        DebugDataBasic* param_5) {
        undefined7 in_register_00000081;
        Point<float> local_50[8];
        Point<float> local_48[8];
        undefined8 local_40;

        local_40 = CONCAT71(in_register_00000081, param_4);
        math::Point<float>::Point(local_48, 0.0, 0.0);
        math::Point<float>::Point(local_50, 1.0, 1.0);
        new (this) DebugImage2D<DebugDataBasic>(param_1, param_2, local_48, local_50, param_3, SUB81(local_40, 0),
                                                false, param_5);
        if (param_1->GetMaxLineWidth() != 34067) {
            /* WARNING: Subroutine does not return */
            LogAssert("pImage->GetType() == render::TEXTURE_TYPE_CUBE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/primitive/debug/"
                      "DebugPrimitives.h",
                      222, (char*)0);
        }
    }

    // 0x1009d69d0, 176 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugImage3D<DebugDataBasic>::DebugImage3D(render::Texture const*, math::Rect<float> const&, bool, bool, DebugDataBasic const&)
    void DebugImage3D<DebugDataBasic>::DebugImage3D(Texture* param_1, Rect* param_2, bool param_3, bool param_4,
                                                    DebugDataBasic* param_5) {
        undefined7 in_register_00000081;
        Point<float> local_50[8];
        Point<float> local_48[8];
        undefined8 local_40;

        local_40 = CONCAT71(in_register_00000081, param_4);
        math::Point<float>::Point(local_48, 0.0, 0.0);
        math::Point<float>::Point(local_50, 1.0, 1.0);
        new (this) DebugImage2D<DebugDataBasic>(param_1, param_2, local_48, local_50, param_3, SUB81(local_40, 0),
                                                false, param_5);
        if (param_1->GetMaxLineWidth() != 32879) {
            /* WARNING: Subroutine does not return */
            LogAssert("pImage->GetType() == render::TEXTURE_TYPE_3D",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/primitive/debug/"
                      "DebugPrimitives.h",
                      238, (char*)0);
        }
    }

    // 0x1009d6c80, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugText<DebugDataBasic>::DebugText(math::Vector3T<float> const&, eastl::string const&, DebugDataBasic const&)
    void DebugText<DebugDataBasic>::DebugText(Vector3T* param_1, basic_string* param_2, DebugDataBasic* param_3) {
        *(undefined4*)(this + 8) = *(undefined4*)(param_1 + 8);
        *(undefined8*)this = *(undefined8*)param_1;
        new ((this + 16)) eastl::string(param_2);
        *(undefined8*)(this + 48) = *(undefined8*)param_3;
    }

    // 0x1009d6ec0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugText2D<DebugDataBasic>::DebugText2D(math::Vector2T<float> const&, eastl::string const&, DebugDataBasic const&)
    void DebugText2D<DebugDataBasic>::DebugText2D(Vector2T* param_1, basic_string* param_2, DebugDataBasic* param_3) {
        *(undefined8*)this = *(undefined8*)param_1;
        new ((this + 8)) eastl::string(param_2);
        *(undefined8*)(this + 40) = *(undefined8*)param_3;
    }

    // 0x1009d70f0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugRect2D<DebugDataBasic>::DebugRect2D(math::Rect<int> const&, bool, DebugDataBasic const&)
    void DebugRect2D<DebugDataBasic>::DebugRect2D(Rect* param_1, bool param_2, DebugDataBasic* param_3) {
        new (this) math::Rect<unsigned int>(param_1);
        this[16] = (DebugRect2D<DebugDataBasic>)param_2;
        *(undefined8*)(this + 20) = *(undefined8*)param_3;
    }

    // 0x1009d7320, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugCircle2D<DebugDataBasic>::DebugCircle2D(math::Vector2T<float> const&, float, bool, DebugDataBasic const&)
    void DebugCircle2D<DebugDataBasic>::DebugCircle2D(Vector2T* param_1, float param_2, bool param_3,
                                                      DebugDataBasic* param_4) {
        *(undefined8*)this = *(undefined8*)param_1;
        *(float*)(this + 8) = param_2;
        this[12] = (DebugCircle2D<DebugDataBasic>)param_3;
        *(undefined8*)(this + 16) = *(undefined8*)param_4;
    }

    // 0x1009d76e0, 80 bytes, inline, placed by debug map only (low confidence)
    // DebugTri<DebugDataBasic>::GetCentrePos() const
    void DebugTri<DebugDataBasic>::GetCentrePos() {
        undefined8 local_30[2];
        undefined8 local_20[2];

        local_20[0] = math::operator+((Vector3T*)this, (Vector3T*)(this + 12));
        local_30[0] = math::operator+((Vector3T*)local_20, (Vector3T*)(this + 24));
        math::operator/((Vector3T*)local_30, 3.0);
    }

    // 0x1009d7d20, 32 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SortDebugPrimitiveGroup<DebugTri<DebugDataBasic> >(math::Frustum const&, eastl::vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>, eastl::allocator>&)::{lambda(eastl::pair<DebugTri<DebugDataBasic> const*, float> const&, eastl::pair<DebugTri<DebugDataBasic> const*, float> const&)#1}::operator()(eastl::pair<DebugTri<DebugDataBasic> const*, float> const&, eastl::pair<DebugTri<DebugDataBasic> const*, float> const&) const
    /* SortDebugPrimitiveGroup<DebugLine<DebugDataBasic> >(math::Frustum const&,
   eastl::vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>,
   eastl::allocator>&)::{lambda(eastl::pair<DebugLine<DebugDataBasic> const*, float>
   const&, eastl::pair<DebugLine<DebugDataBasic> const*, float>
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<DebugLine<DebugDataBasic> const*,
   float> const&, eastl::pair<DebugLine<DebugDataBasic> const*, float> const&) const */

    bool jag::SortDebugPrimitiveGroup<DebugLine<DebugDataBasic>>(
        math::Frustum_const&, eastl::vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>, eastl::allocator>&)::{
        lambda(eastl::pair<DebugLine<DebugDataBasic> const*, float> const&,
               eastl::pair<DebugLine<DebugDataBasic> const*, float> const&) #1
    }
    ::operator()(_lambda_eastl__pair<DebugLine<DebugDataBasic> const*, float>
                     const__eastl__pair<DebugLine<DebugDataBasic> const*, float> const___1_* this,
                 pair * param_1, pair * param_2)

    {
        return *(float*)(param_2 + 8) <= *(float*)(param_1 + 8) && *(float*)(param_1 + 8) != *(float*)(param_2 + 8);
    }

    // 0x1009d8210, 64 bytes, inline, placed by debug map only (low confidence)
    // DebugLine<DebugDataBasic>::GetCentrePos() const
    void DebugLine<DebugDataBasic>::GetCentrePos() {
        undefined8 local_18[2];

        local_18[0] = math::operator+((Vector3T*)this, (Vector3T*)(this + 12));
        math::operator/((Vector3T*)local_18, 2.0);
    }

    // 0x1009d87f0, 16 bytes, inline, placed by debug map only (low confidence)
    // DebugAABB<DebugDataBasic>::GetCentrePos() const
    void DebugAABB<DebugDataBasic>::GetCentrePos() {
        GetCentrePos();
    }

    // 0x1009d8da0, 32 bytes, inline, placed by debug map only (low confidence)
    // DebugOBB<DebugDataBasic>::GetCentrePos() const
    undefined8 DebugOBB<DebugDataBasic>::GetCentrePos() {
        vector* pvVar1;
        type* in_RSI;

        pvVar1 = SSOBeginPtr(in_RSI);
        return *(undefined8*)pvVar1;
    }

    // 0x1009d9900, 16 bytes, inline, placed by debug map only (low confidence)
    // DebugCapsule<DebugDataBasic>::GetCentrePos() const
    void DebugCapsule<DebugDataBasic>::GetCentrePos() {
        math::Capsule3D::GetCentrePos();
    }

    // 0x1009d9eb0, 16 bytes, inline, placed by debug map only (low confidence)
    // DebugCone<DebugDataBasic>::GetCentrePos() const
    /* DebugCylinder<DebugDataBasic>::GetCentrePos() const */

    void DebugCylinder<DebugDataBasic>::GetCentrePos() {
        GetPos();
    }

    // 0x100bc3e80, 144 bytes, placed by the data it initialises
    // ___cxx_global_var_init.6
    void ___cxx_global_var_init_6() {
        new (&PrimVertPosUVCol::m_VertexElemDescs) render::VertexElementDesc(0, "aPos", 2, 0, 0, 0);
        new (&DAT_103bd9bc8) render::VertexElementDesc(0, "aTexCoord", 1, 0, 5, 0);
        new (&DAT_103bd9bf0) render::VertexElementDesc(0, "aColour", 3, 0, 10, 0);
    }

} // namespace jag

namespace jag::math {
    // 0x1009cdf30, 48 bytes, inline, placed by debug map only (low confidence)
    // std::array<unsigned short, 24ul> BOX_EDGE_LINE_INDICES<unsigned short>()
    /* std::array<unsigned short, 24ul> BOX_EDGE_LINE_INDICES<unsigned short>() */

    math* BOX_EDGE_LINE_INDICES<unsigned short>() {
        field_32 = 1970346312138756;
        field_40 = 1125925677039623;
        field_16 = 1125899907170305;
        field_24 = 1688858450657283;
        field_0 = 9.18355e-41;
        field_4 = 2.75508e-40;
        field_8 = 1.83675e-40;
        field_12 = 2.8026e-45;
        return this;
    }

    // 0x1009db030, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ColourStorage8888<RGBA8StorageLayout>::ColourStorage8888<ARGB8StorageLayout>(ColourStorage8888<ARGB8StorageLayout>)
    void ColourStorage8888<RGBA8StorageLayout>::ColourStorage8888<ARGB8StorageLayout>(undefined4 param_2) {
        Set(this, (uchar)((uint)param_2 >> 16), (uchar)((uint)param_2 >> 8), (uchar)param_2,
            (uchar)((uint)param_2 >> 24));
    }

    // 0x100c64040, 80 bytes, inline, placed by debug map only (low confidence)
    // std::array<int, 24ul> BOX_EDGE_LINE_INDICES<int>()
    /* std::array<int, 24ul> BOX_EDGE_LINE_INDICES<int>() */

    math* BOX_EDGE_LINE_INDICES<int>() {
        field_80 = 25769803783;
        field_88 = 17179869190;
        field_64 = 21474836484;
        field_72 = 30064771077;
        field_48 = 30064771075;
        field_56 = 25769803778;
        field_32 = 21474836481;
        field_40 = 17179869184;
        field_16 = 8589934595;
        field_24 = 2;
        *(mach_header**)this = &__mh_execute_header;
        field_8 = 1.4013e-45;
        field_12 = 4.2039e-45;
        return this;
    }

    // 0x100c64110, 224 bytes, placed by debug map only (low confidence)
    // GetRandomPointPlane(Random&, float, float, bool)
    undefined8 GetRandomPointPlane(Random* param_1, float param_2, float param_3, bool param_4) {
        int iVar1;
        undefined7 in_register_00000031;
        float fVar3;
        uint in_XMM0_Db;
        undefined8 uVar4;
        uint in_XMM0_Dc;
        uint in_XMM0_Dd;
        ColourHSL local_38;
        float local_28;
        uint uStack_24;
        uint uStack_20;
        uint uStack_1c;

        if ((int)CONCAT71(in_register_00000031, param_4) == 0) {
            local_28 = (float)param_1->FRandS(param_2);
            param_3 = (float)param_1->FRandS(param_3);
            fVar3 = local_28;
        } else {
            local_28 = param_2;
            uStack_24 = in_XMM0_Db;
            uStack_20 = in_XMM0_Dc;
            uStack_1c = in_XMM0_Dd;
            iVar1 = param_1->Rand(100);
            if (param_1->Rand(100) < 50) {
                if (49 < iVar1) {
                    local_28 = -local_28;
                    uStack_24 = uStack_24 ^ 2147483648;
                    uStack_20 = uStack_20 ^ 2147483648;
                    uStack_1c = uStack_1c ^ 2147483648;
                }
                param_3 = (float)param_1->FRandS(param_3);
                fVar3 = local_28;
            } else {
                fVar3 = (float)param_1->FRandS(local_28);
                if (49 < iVar1) {
                    param_3 = -param_3;
                }
            }
        }
        new (&local_38) ColourHSL(fVar3, 0.0, param_3);
        uVar4._0_4_ = local_38.field_0;
        uVar4._4_4_ = local_38.field_4;
        return uVar4;
    }

    // 0x100c64410, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Vector3T<float>::Vector3T(float): jumps straight to the base-object constructor

    // 0x100c64420, 160 bytes, placed by debug map only (low confidence)
    // GetRandomPointDisc(Random&, float, bool)
    undefined8 GetRandomPointDisc(Random* param_1, float param_2, bool param_3) {
        undefined3 in_register_00000031;
        float fVar1;
        undefined8 uVar2;
        undefined1 local_30[16];
        float local_20;
        float local_1c;

        local_1c = param_2;
        local_20 = (float)param_1->FRand(6.2831855);
        if (CONCAT31(in_register_00000031, param_3) == 0) {
            fVar1 = (float)param_1->FRand(1.0);
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

    // 0x100c64520, 240 bytes, placed by debug map only (low confidence)
    // GetRandomPointCone(Random&, float, float, float, bool)
    undefined8 GetRandomPointCone(Random* param_1, float param_2, float param_3, float param_4, bool param_5) {
        undefined7 in_register_00000031;
        float fVar1;
        undefined8 uVar2;
        undefined1 local_40[12];
        float local_34;
        float local_30;
        float local_28;
        float local_24;
        float local_20;
        float local_1c;

        local_34 = param_2;
        local_30 = param_3;
        local_20 = (float)param_1->FRand(1.0);
        local_24 = (float)param_1->FRand(6.2831855);
        local_1c = Lerp<float, float>(&local_34, &local_30, local_20);
        if ((int)CONCAT71(in_register_00000031, param_5) == 0) {
            fVar1 = (float)param_1->FRand(1.0);
            fVar1 = (float)::sqrt(fVar1);
            local_1c = local_1c * fVar1;
        }
        local_28 = (float)::cos(local_24);
        local_28 = local_28 * local_1c;
        local_20 = local_20 * param_4;
        fVar1 = (float)::sin(local_24);
        new (local_40) ColourHSL(local_28, local_20, local_1c * fVar1);
        uVar2._0_4_ = (float)local_40._0_4_;
        uVar2._4_4_ = (float)local_40._4_4_;
        return uVar2;
    }

} // namespace jag::math

// 0x100c644c0, 64 bytes, placed by debug map only (low confidence)
// sqrt(float)
undefined8 sqrt(float param_1) {
    uint in_XMM0_Db;
    undefined4 in_XMM0_Dc;
    undefined4 in_XMM0_Dd;
    undefined1 in_XMM1[16];
    undefined1 auVar1[16];
    float fVar2;

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = param_1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    fVar2 = param_1 * auVar1._0_4_;
    return CONCAT44(~(in_XMM0_Db & 2147483647) & in_XMM0_Db,
                    ~-(uint)(ABS(param_1) < 1.1754944e-38) & (uint)((fVar2 * auVar1._0_4_ + -3.0) * fVar2 * -0.5));
}

// 0x100c64500, 16 bytes, placed by debug map only (low confidence)
// cos(float)
void cos(float param_1) {
    _cosf();
}

// 0x100c64510, 16 bytes, placed by debug map only (low confidence)
// sin(float)
void sin(float param_1) {
    _sinf();
}
