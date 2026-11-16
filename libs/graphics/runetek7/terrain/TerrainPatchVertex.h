// libs/graphics/runetek7/terrain/TerrainPatchVertex.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

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

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1001e9490, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // TerrainPatchVertex::TerrainPatchVertex(): jumps straight to the base-object constructor

    // 0x1001e9490: the linker folded this into TerrainPatchVertex::TerrainPatchVertex(), which has identical code
    TerrainPatchVertexPos::TerrainPatchVertexPos();

    // 0x1001e9490: the linker folded this into TerrainPatchVertex::TerrainPatchVertex(), which has identical code
    GeometryBatchVertexPosLP::GeometryBatchVertexPosLP();

    // 0x1001e9590, 16 bytes, base-object constructor, inline, placed by class name and debug map
    // TerrainPatchVertex::TerrainPatchVertex()
    /* TerrainPatchVertexPos::TerrainPatchVertexPos() */

    void TerrainPatchVertexPos::TerrainPatchVertexPos() {
        new (this) math::Vector3T<unsigned short>();
    }

    // 0x1001e9590: the linker folded this into TerrainPatchVertex::TerrainPatchVertex(), which has identical code
    TerrainPatchVertexPos::TerrainPatchVertexPos();

    // 0x1001e9590: the linker folded this into TerrainPatchVertex::TerrainPatchVertex(), which has identical code
    GeometryBatchVertexPosLP::GeometryBatchVertexPosLP();

} // namespace jag::graphics

namespace jag::oldscape::rseven {
    // 0x1001e9b30, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Mesh::Mesh(): jumps straight to the base-object constructor

    // 0x1001e9c20, 224 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Mesh::Mesh()
    void Mesh::Mesh() {
        allocator local_38[8];

        new (&field_8) eastl::vector<ModelVertex, eastl::allocator>();
        new (&field_40) eastl::vector<ModelFace, eastl::allocator>();
        eastl::allocator::allocator(local_38, "EASTL hash_set");
        new (&field_72, local_38)
            eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        eastl::allocator::allocator(local_38, "EASTL hash_set");
        new (&field_128, local_38)
            eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        eastl::allocator::allocator(local_38, "EASTL hash_set");
        new (&field_184, local_38)
            eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
    }

    // 0x1001e9e60, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Mesh::Mesh(Mesh&&): jumps straight to the base-object constructor

    // 0x1001e9fc0, 224 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Mesh::Mesh(Mesh&&)
    void Mesh::Mesh(Mesh* param_1) {
        field_0 = param_1->field_0;
        new (&field_8, (vector*)&param_1->field_8) eastl::vector<ModelVertex, eastl::allocator>();
        new (&field_40, (vector*)&param_1->field_40) eastl::vector<ModelFace, eastl::allocator>();
        new (&field_72, (hash_map*)&param_1->field_72)
            eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        new (&field_128, (hash_map*)&param_1->field_128)
            eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        new (&field_184, (hash_map*)&param_1->field_184)
            eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        field_244 = param_1->field_244;
        field_240 = param_1->field_240;
    }

    // 0x1001ea810, 128 bytes, inline, placed by debug map only (low confidence)
    // Mesh::operator=(Mesh&&)
    /* Mesh::TEMPNAMEPLACEHOLDERVALUE(Mesh&&) */

    Mesh* Mesh::operator=(Mesh* param_1) {
        field_0 = param_1->field_0;
        eastl::vector<ModelVertex, eastl::allocator>::operator=((vector<ModelVertex, eastl::allocator>*)&field_8,
                                                                (vector*)&param_1->field_8);
        eastl::vector<ModelFace, eastl::allocator>::operator=((vector<ModelFace, eastl::allocator>*)&field_40,
                                                              (vector*)&param_1->field_40);
        eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator=(
            (hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)&field_72,
            (hash_map*)&param_1->field_72);
        eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator=(
            (hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)&field_128,
            (hash_map*)&param_1->field_128);
        eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator=(
            (hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)&field_184,
            (hash_map*)&param_1->field_184);
        field_240 = param_1->field_240;
        field_244 = param_1->field_244;
        return this;
    }

} // namespace jag::oldscape::rseven

namespace jag::math {
    // 0x1001e95a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Vector3T<short>::Vector3T(): jumps straight to the base-object constructor

    // 0x1001e95b0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Vector3T<short>::Vector3T()
    /* Vector3T<unsigned short>::Vector3T() */

    void Vector3T<unsigned short>::Vector3T() {
        *(undefined4*)this = 0;
        *(undefined2*)(this + 4) = 0;
    }

} // namespace jag::math

namespace jag {
    // 0x1001eaa10, 112 bytes, inline, placed by debug map only (low confidence)
    // void PacketT<Array<unsigned char, eastl::allocator> >::pTPE<unsigned short>(unsigned short)
    void PacketT<Array<unsigned char, eastl::allocator>>::pTPE<unsigned short>(
        PacketT<Array<unsigned char, eastl::allocator>>* this, ushort param_1) {
        long lVar1;
        ulong uVar2;
        long lVar3;

        lVar1 = *(long*)(this + 24);
        uVar2 = end();
        if (uVar2 < lVar1 + 2U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + sizeof(T) <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      72, (char*)0);
        }
        lVar3 = data();
        lVar1 = *(long*)(this + 24);
        *(ushort*)(lVar3 + lVar1) = param_1;
        *(long*)(this + 24) = lVar1 + 2;
    }

    // 0x1001eaa80, 112 bytes, inline, placed by debug map only (low confidence)
    // void PacketT<Array<unsigned char, eastl::allocator> >::pTPE<int>(int)
    void
    PacketT<Array<unsigned char, eastl::allocator>>::pTPE<int>(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                               int param_1) {
        long lVar1;
        ulong uVar2;
        long lVar3;

        lVar1 = *(long*)(this + 24);
        uVar2 = end();
        if (uVar2 < lVar1 + 4U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + sizeof(T) <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      72, (char*)0);
        }
        lVar3 = data();
        lVar1 = *(long*)(this + 24);
        *(int*)(lVar3 + lVar1) = param_1;
        *(long*)(this + 24) = lVar1 + 4;
    }

} // namespace jag
