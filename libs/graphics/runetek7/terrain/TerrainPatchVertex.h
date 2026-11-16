// libs/graphics/runetek7/terrain/TerrainPatchVertex.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::graphics {
    class TerrainPatchVertex {
    public:
        TerrainPatchVertex();
    };

    class TerrainPatchVertexPos {
    public:
        TerrainPatchVertexPos();

        uint8_t _unknown_0[1];
    };

    // 0x1001e9590
    TerrainPatchVertex::TerrainPatchVertex() : math::Vector3T() {}

    // 0x1001e9590: TerrainPatchVertexPos::TerrainPatchVertexPos() has the same machine code as TerrainPatchVertex::TerrainPatchVertex()

    // 0x1001e9590: GeometryBatchVertexPosLP::GeometryBatchVertexPosLP() has the same machine code as TerrainPatchVertex::TerrainPatchVertex()

} // namespace jag::graphics

namespace jag::oldscape::rseven {
    // 0x1001e9c20
    Mesh::Mesh() {

        new (&field_8) eastl::vector<ModelVertex>();
        new (&field_40) eastl::vector<ModelFace>();
        new (&field_72) eastl::hash_set(local_38);
        new (&field_128) eastl::hash_set(local_38);
        new (&field_184) eastl::hash_set(local_38);
    }

    // 0x1001e9fc0
    Mesh::Mesh(Mesh&& mesh)
        : field_0(mesh.field_0), field_8(mesh.field_8), field_40(mesh.field_40), field_72(mesh.field_72),
          field_128(mesh.field_128), field_184(mesh.field_184), field_244(mesh.field_244), field_240(mesh.field_240) {}

    // 0x1001ea810
    Mesh* Mesh::operator=(Mesh&& mesh) {
        field_0 = mesh.field_0;
        field_8 = mesh.field_8;
        field_40 = mesh.field_40;
        field_72 = mesh.field_72;
        field_128 = mesh.field_128;
        field_184 = mesh.field_184;
        field_240 = mesh.field_240;
        field_244 = mesh.field_244;
        return this;
    }

} // namespace jag::oldscape::rseven

namespace jag {
    // 0x1001eaa10
    void PacketT<Array<unsigned char>>::pTPE<unsigned short>(unsigned short arg1) {
        long lVar1 = *(long*)(this + 24);
        if (end() < lVar1 + 2U) {
            LogAssert("m_pos + sizeof(T) <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      72, nullptr);
        }
        long lVar3 = data();
        lVar1 = *(long*)(this + 24);
        *(unsigned short*)(lVar3 + lVar1) = arg1;
        *(long*)(this + 24) = lVar1 + 2;
    }

    // 0x1001eaa80
    void PacketT<Array<unsigned char>>::pTPE<int>(int arg1) {
        long lVar1 = *(long*)(this + 24);
        if (end() < lVar1 + 4U) {
            LogAssert("m_pos + sizeof(T) <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      72, nullptr);
        }
        long lVar3 = data();
        lVar1 = *(long*)(this + 24);
        *(int*)(lVar3 + lVar1) = arg1;
        *(long*)(this + 24) = lVar1 + 4;
    }

} // namespace jag

namespace jag::math {
    // 0x1001e95b0
    Vector3T<short>::Vector3T() {
        *(uint32_t*)this = 0;
        *(uint16_t*)(this + 4) = 0;
    }

} // namespace jag::math
