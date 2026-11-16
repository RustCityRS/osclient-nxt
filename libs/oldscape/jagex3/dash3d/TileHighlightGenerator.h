// libs/oldscape/jagex3/dash3d/TileHighlightGenerator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::dash3d {
    class TileHighlightGenerator {
    public:
        class OutputVertex;
        TileHighlightGenerator(jag::math::Rect<int>, int, world&);
        Generate();
        ~TileHighlightGenerator();
        void LoadGroundTriangles();
        void ClipTriangles();
        void OffsetTriangles();
        void GenerateNormalsForTriangles();
        void LoadOutlineTriangles();
        ModelRSevenUnlit* CreateModelFromTriangles();
        void ClipTriangle(OutputTriangle const&, ClipPlane const&, eastl::vector<OutputTriangle, eastl::allocator>&);
        void LoadGroundTrianglesForTile(int, int);
        GetCornerHeights();
        CreateIndicesForTriangles();
        OutputVertex* ClipTriangleSingle(jag::math::Vector3T<float> const&, std::array<jag::math::Vector3T<float>, 2ul>,
                                         ClipPlane const&);
        void PushTwoBack(eastl::vector<OutputTriangle, eastl::allocator>&, std::array<OutputTriangle, 2ul> const&);
        OutputVertex* ClipTriangleDouble(std::array<jag::math::Vector3T<float>, 2ul>, jag::math::Vector3T<float> const&,
                                         ClipPlane const&);
        IntersectLinePlane(jag::math::Vector3T<float> const&, jag::math::Vector3T<float> const&,
                           jag::math::Vector3T<float> const&);

        // data members, from how the methods use this: 80 bytes
        int field_0;         // offset 0
        int field_4;         // offset 4
        int field_8;         // offset 8
        int field_12;        // offset 12
        undefined4 field_16; // offset 16
        char _unknown_20[4];
        world* field_24; // offset 24
        char _unknown_32[32];
        shared_ptr field_64; // offset 64
    };

    class TileHighlightGenerator::OutputVertex {
    public:
        OutputVertex();
        OutputVertex(jag::math::Vector3T<float>, jag::math::Vector3T<float>);
        OutputVertex* operator=(OutputVertex&&);
        OutputVertex(jag::math::Vector3T<float>);

        // data members, from how the methods use this: 24 bytes
        undefined4 field_0;  // offset 0
        undefined4 field_4;  // offset 4
        undefined4 field_8;  // offset 8
        undefined8 field_12; // offset 12
        undefined4 field_20; // offset 20
    };

    // 0x1002f1690, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // TileHighlightGenerator::TileHighlightGenerator(jag::math::Rect<int>, int, world&): jumps straight to the base-object constructor

    // 0x1002f1730, 16 bytes, complete-object destructor, inline, placed by class name
    // TileHighlightGenerator::~TileHighlightGenerator(): jumps straight to the base-object destructor

    // 0x1003060d0, 16 bytes, complete-object constructor, inline, placed by class name
    // TileHighlightGenerator::OutputVertex::OutputVertex(): jumps straight to the base-object constructor

    // 0x1003060e0, 16 bytes, complete-object constructor, inline, placed by class name
    // TileHighlightGenerator::OutputVertex::OutputVertex(jag::math::Vector3T<float>, jag::math::Vector3T<float>): jumps straight to the base-object constructor

    // 0x1003060f0, 48 bytes, inline, placed by class name
    // TileHighlightGenerator::OutputVertex::operator=(TileHighlightGenerator::OutputVertex&&)
    /* TileHighlightGenerator::OutputVertex::TEMPNAMEPLACEHOLDERVALUE(TileHighlightGenerator::OutputVertex&&)
    */

    OutputVertex* TileHighlightGenerator::OutputVertex::operator=(OutputVertex* param_1) {
        SetXYZ(param_1);
        (&field_12, (Vector3T*)&param_1->field_12)->SetXYZ();
        return this;
    }

    // 0x100306200, 16 bytes, complete-object constructor, inline, placed by class name
    // TileHighlightGenerator::OutputVertex::OutputVertex(jag::math::Vector3T<float>): jumps straight to the base-object constructor

    // 0x100325a20, 96 bytes, base-object constructor, inline, placed by class name
    // TileHighlightGenerator::TileHighlightGenerator(jag::math::Rect<int>, int, world&)
    void TileHighlightGenerator::TileHighlightGenerator(Rect* param_2, undefined4 param_3, world* param_4) {
        new (this) jag::math::Rect<unsigned int>(param_2);
        field_16 = param_3;
        field_24 = param_4;
        new (&field_32) eastl::vector<TileHighlightGenerator::OutputTriangle, eastl::allocator>();
        new (field_64, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x100325a80, 48 bytes, base-object destructor, inline, placed by class name
    // TileHighlightGenerator::~TileHighlightGenerator()
    void TileHighlightGenerator::~TileHighlightGenerator() {
        field_64->~shared_ptr();
        (&field_32)->~vector();
    }

    // 0x100326a00, 48 bytes, base-object constructor, inline, placed by class name
    // TileHighlightGenerator::OutputVertex::OutputVertex()
    void TileHighlightGenerator::OutputVertex::OutputVertex() {
        undefined8 uVar1;
        undefined* puVar2;

        puVar2 = PTR_ZERO_100ee66e8;
        field_8 = *(undefined4*)(PTR_ZERO_100ee66e8 + 8);
        uVar1 = *(undefined8*)puVar2;
        field_0 = (int)uVar1;
        field_4 = (int)((ulong)uVar1 >> 32);
        field_12 = *(undefined8*)puVar2;
        field_20 = *(undefined4*)(puVar2 + 8);
    }

    // 0x100326a30, 32 bytes, base-object constructor, inline, placed by class name
    // TileHighlightGenerator::OutputVertex::OutputVertex(jag::math::Vector3T<float>, jag::math::Vector3T<float>)
    void TileHighlightGenerator::OutputVertex::OutputVertex(undefined8 param_1, undefined4 param_2, undefined8 param_3,
                                                            undefined4 param_4, OutputVertex* this) {
        field_0 = (int)param_1;
        field_4 = (int)((ulong)param_1 >> 32);
        field_8 = param_2;
        field_12 = param_3;
        field_20 = param_4;
    }

    // 0x100326a50, 48 bytes, base-object constructor, inline, placed by class name
    // TileHighlightGenerator::OutputVertex::OutputVertex(jag::math::Vector3T<float>)
    void TileHighlightGenerator::OutputVertex::OutputVertex(undefined8 param_1, undefined4 param_2,
                                                            OutputVertex* this) {
        undefined* puVar1;

        field_0 = (int)param_1;
        field_4 = (int)((ulong)param_1 >> 32);
        field_8 = param_2;
        puVar1 = PTR_ZERO_100ee66e8;
        field_12 = *(undefined8*)PTR_ZERO_100ee66e8;
        field_20 = *(undefined4*)(puVar1 + 8);
    }

} // namespace jag::oldscape::dash3d
