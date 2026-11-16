// libs/graphics/runetek7/terrain/TerrainVertex.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::rseven {
    class TerrainVertex {
    public:
        TerrainVertex* operator=(TerrainVertex const&);
        TerrainVertex();

        // data members, from how the methods use this: 28 bytes
        undefined4 field_0;  // offset 0
        undefined4 field_4;  // offset 4
        undefined4 field_8;  // offset 8
        undefined8 field_12; // offset 12
        undefined4 field_20; // offset 20
        undefined4 field_24; // offset 24
    };

    // 0x1001c7220, 48 bytes, inline, placed by class name
    // TerrainVertex::operator=(TerrainVertex const&)
    /* TerrainVertex::TEMPNAMEPLACEHOLDERVALUE(TerrainVertex
   const&) */

    TerrainVertex* TerrainVertex::operator=(TerrainVertex* param_1) {
        undefined4 uVar1;
        undefined4 uVar2;

        jag::math::Vector3T<int>::operator=((Vector3T<int>*)this, (Vector3T*)param_1);
        uVar1 = param_1->field_20;
        uVar2 = param_1->field_24;
        field_12 = param_1->field_12;
        field_20 = uVar1;
        field_24 = uVar2;
        return this;
    }

    // 0x1001dc6c0, 16 bytes, complete-object constructor, inline, placed by class name
    // TerrainVertex::TerrainVertex(): jumps straight to the base-object constructor

    // 0x1001dc6d0, 32 bytes, base-object constructor, inline, placed by class name
    // TerrainVertex::TerrainVertex()
    void TerrainVertex::TerrainVertex() {
        new (this) jag::math::Vector3T<int>();
        field_24 = 4294967295;
    }

} // namespace jag::oldscape::rseven

namespace jag::graphics {
    class TerrainVertex {
    public:
        TerrainVertex();

        // data members, from how the methods use this: 60 bytes
        undefined4 field_0; // offset 0
        undefined2 field_4; // offset 4
        char _unknown_6[2];
        undefined4 field_8;  // offset 8
        undefined8 field_12; // offset 12
        undefined8 field_20; // offset 20
        undefined1 field_28; // offset 28
        char _unknown_29[3];
        undefined8 field_32; // offset 32
        char _unknown_40[20];
    };

    // 0x1007b2000, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // TerrainVertex::TerrainVertex(): jumps straight to the base-object constructor

    // 0x1007bcce0, 48 bytes, base-object constructor, inline, placed by class name
    // TerrainVertex::TerrainVertex()
    void TerrainVertex::TerrainVertex() {
        new (this) TerrainBaseData();
        new (&field_40) math::Vector3T<int>();
        new (&field_52) math::Vector3T<int>();
    }

} // namespace jag::graphics
