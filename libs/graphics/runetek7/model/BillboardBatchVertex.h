// libs/graphics/runetek7/model/BillboardBatchVertex.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class BillboardBatchVertex {
    public:
        BillboardBatchVertex* operator=(BillboardBatchVertex const&);
        BillboardBatchVertex* operator=(BillboardBatchVertex&&);
        BillboardBatchVertex();

        // data members, from how the methods use this: 36 bytes
        undefined4 field_0;  // offset 0
        undefined4 field_4;  // offset 4
        undefined4 field_8;  // offset 8
        undefined8 field_12; // offset 12
        char _unknown_20[8];
        undefined8 field_28; // offset 28
    };

    class BillboardBatchVertexLP {
    public:
        void Set(BillboardBatchVertex const&);
        BillboardBatchVertexLP();

        // data members, from how the methods use this: 35 bytes
        undefined2 field_0; // offset 0
        undefined2 field_2; // offset 2
        undefined2 field_4; // offset 4
        short field_6;      // offset 6
        undefined4 field_8; // offset 8
        char _unknown_12[8];
        undefined2 field_20; // offset 20
        undefined1 field_22; // offset 22
        undefined1 field_23; // offset 23
        undefined1 field_24; // offset 24
        undefined1 field_25; // offset 25
        undefined1 field_26; // offset 26
        undefined1 field_27; // offset 27
        char _unknown_28[7];
    };

    // 0x100864b50, 64 bytes, inline, placed by class name and debug map
    // BillboardBatchVertex::operator=(BillboardBatchVertex const&)
    /* BillboardBatchVertex::TEMPNAMEPLACEHOLDERVALUE(BillboardBatchVertex&&)
    */

    BillboardBatchVertex* BillboardBatchVertex::operator=(BillboardBatchVertex* param_1) {
        SetXYZ(param_1);
        field_12 = param_1->field_12;
        math::Vector2T<float>::operator=((Vector2T<float>*)&field_20, (Vector2T*)&param_1->field_20);
        field_28 = param_1->field_28;
        return this;
    }

    // 0x100864b50: the linker folded this into BillboardBatchVertex::operator=(BillboardBatchVertex const&), which has identical code
    BillboardBatchVertex::operator=(BillboardBatchVertex&&);

    // 0x100865660, 144 bytes, inline, placed by debug map only (low confidence)
    // BillboardBatchVertexLP::Set(BillboardBatchVertex const&)
    void BillboardBatchVertexLP::Set(BillboardBatchVertex* param_1) {
        undefined8 uVar1;
        undefined4 local_20;
        undefined2 local_1c;

        uVar1 = math::Vector3TFromVector3<short>((math*)param_1, (Vector3T*)param_1);
        local_20 = (undefined4)uVar1;
        local_1c = (undefined2)((ulong)uVar1 >> 32);
        math::Vector3T<short>::operator=((Vector3T<short>*)this, (Vector3T*)&local_20);
        field_6 = (short)(int)*(float*)&param_1->field_12;
        field_8 = *(undefined4*)((long)&param_1->field_12 + 4);
        math::Vector2T<float>::operator=((Vector2T<float>*)&field_12, (Vector2T*)&param_1->field_20);
        field_20 = *(undefined2*)&param_1->field_28;
        field_24 = *(undefined1*)((long)&param_1->field_28 + 4);
        field_25 = *(undefined1*)((long)&param_1->field_28 + 5);
        field_26 = *(undefined1*)((long)&param_1->field_28 + 6);
        field_27 = *(undefined1*)((long)&param_1->field_28 + 7);
        field_22 = *(undefined1*)((long)&param_1->field_28 + 2);
        field_23 = *(undefined1*)((long)&param_1->field_28 + 3);
    }

    // 0x100882440, 16 bytes, complete-object constructor, inline, placed by class name
    // BillboardBatchVertex::BillboardBatchVertex(): jumps straight to the base-object constructor

    // 0x100882450, 48 bytes, base-object constructor, inline, placed by class name
    // BillboardBatchVertex::BillboardBatchVertex()
    void BillboardBatchVertex::BillboardBatchVertex() {
        new (this) math::Vector3T<int>();
        new (&field_20) math::Vector2T<int>();
    }

    // 0x100884770, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // BillboardBatchVertexLP::BillboardBatchVertexLP(): jumps straight to the base-object constructor

    // 0x100884870, 48 bytes, base-object constructor, inline, placed by class header (inline)
    // BillboardBatchVertexLP::BillboardBatchVertexLP()
    void BillboardBatchVertexLP::BillboardBatchVertexLP() {
        new (this) math::Vector3T<unsigned short>();
        new (&field_12) math::Vector2T<int>();
    }

} // namespace jag::graphics
