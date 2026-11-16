// libs/oldscape/jagex3/dash3d/TileHighlightGenerator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::dash3d {
    class TileHighlightGenerator {
    public:
        class OutputVertex;
        TileHighlightGenerator(jag::math::Rect<int> rect, int arg2, world& world);
        uint8_t* Generate();
        ~TileHighlightGenerator();
        void LoadGroundTriangles();
        void ClipTriangles();
        void OffsetTriangles();
        void GenerateNormalsForTriangles();
        void LoadOutlineTriangles();
        auto CreateModelFromTriangles();
        void ClipTriangle(const OutputTriangle& outputTriangle, const ClipPlane& clipPlane,
                          eastl::vector<OutputTriangle>& outputTriangles);
        void LoadGroundTrianglesForTile(int arg1, int arg2);
        uint64_t GetCornerHeights();
        auto CreateIndicesForTriangles();
        TileHighlightGenerator* ClipTriangleSingle(const jag::math::Vector3T<float>& vector3,
                                                   std::array<jag::math::Vector3T<float>, 2ul> vector3s,
                                                   const ClipPlane& clipPlane);
        void PushTwoBack(eastl::vector<OutputTriangle>& outputTriangles1,
                         const std::array<OutputTriangle, 2ul>& outputTriangles2);
        TileHighlightGenerator* ClipTriangleDouble(std::array<jag::math::Vector3T<float>, 2ul> vector3s,
                                                   const jag::math::Vector3T<float>& vector3,
                                                   const ClipPlane& clipPlane);
        uint64_t IntersectLinePlane(const jag::math::Vector3T<float>& vector31,
                                    const jag::math::Vector3T<float>& vector32,
                                    const jag::math::Vector3T<float>& vector33);

    private:
        int field_0;
        int field_4;
        int field_8;
        int field_12;
        int field_16;
        uint8_t _unknown_20[4];
        OutputVertex field_24;
        uint8_t _unknown_48[24];
        OutputVertex field_72;
        OutputVertex field_96;
        OutputVertex field_120;
    };

    class TileHighlightGenerator::OutputVertex {
    public:
        OutputVertex();
        OutputVertex(jag::math::Vector3T<float> vector31, jag::math::Vector3T<float> vector32);
        OutputVertex* operator=(OutputVertex&& outputVertex);
        OutputVertex(jag::math::Vector3T<float> vector3);

    private:
        uint32_t field_0;
        uint32_t field_4;
        uint32_t field_8;
        uint64_t field_12;
        uint32_t field_20;
    };

    // 0x1003060f0
    OutputVertex* TileHighlightGenerator::OutputVertex::operator=(TileHighlightGenerator::OutputVertex&& outputVertex) {
        SetXYZ(outputVertex);
        field_12.SetXYZ(outputVertex.field_12);
        return this;
    }

    // 0x100325a20
    TileHighlightGenerator::TileHighlightGenerator(jag::math::Rect<int> rect, int arg2, world& world)
        : jag::math::Rect(*rect), field_16(arg2) {
        *(world**)field_24 = world;
        new ((field_24 + 8)) eastl::vector<TileHighlightGenerator::OutputTriangle>();
        new (&field_64) shared_ptr();
    }

    // 0x100325a80
    TileHighlightGenerator::~TileHighlightGenerator() {
        field_64.~shared_ptr();
        ((field_24 + 8))->~vector();
    }

    // 0x100326a00
    TileHighlightGenerator::OutputVertex::OutputVertex() {
        uint8_t* puVar2 = PTR_ZERO_100ee66e8;
        field_8 = *(uint32_t*)(PTR_ZERO_100ee66e8 + 8);
        uint64_t uVar1 = *(uint64_t*)puVar2;
        field_0 = (int)uVar1;
        field_4 = (int)((unsigned long)uVar1 >> 32);
        field_12 = *(uint64_t*)puVar2;
        field_20 = *(uint32_t*)(puVar2 + 8);
    }

    // 0x100326a30
    TileHighlightGenerator::OutputVertex::OutputVertex(jag::math::Vector3T<float> vector31,
                                                       jag::math::Vector3T<float> vector32) {
        uint64_t in_XMM0_Qa;
        uint32_t in_XMM1_Da;
        uint64_t in_XMM2_Qa;
        uint32_t in_XMM3_Da;

        field_0 = (int)in_XMM0_Qa;
        field_4 = (int)((unsigned long)in_XMM0_Qa >> 32);
        field_8 = in_XMM1_Da;
        field_12 = in_XMM2_Qa;
        field_20 = in_XMM3_Da;
    }

    // 0x100326a50
    TileHighlightGenerator::OutputVertex::OutputVertex(jag::math::Vector3T<float> vector3) {
        uint64_t in_XMM0_Qa;
        uint32_t in_XMM1_Da;

        field_0 = (int)in_XMM0_Qa;
        field_4 = (int)((unsigned long)in_XMM0_Qa >> 32);
        field_8 = in_XMM1_Da;
        uint8_t* puVar1 = PTR_ZERO_100ee66e8;
        field_12 = *(uint64_t*)PTR_ZERO_100ee66e8;
        field_20 = *(uint32_t*)(puVar1 + 8);
    }

} // namespace jag::oldscape::dash3d
