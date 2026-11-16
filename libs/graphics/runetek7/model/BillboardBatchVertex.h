// libs/graphics/runetek7/model/BillboardBatchVertex.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class BillboardBatchVertex {
    public:
        BillboardBatchVertex* operator=(const BillboardBatchVertex& billboardBatchVertex);
        BillboardBatchVertex* operator=(BillboardBatchVertex&& billboardBatchVertex);
        BillboardBatchVertex();

    private:
        uint32_t field_0;
        uint32_t field_4;
        uint32_t field_8;
        uint64_t field_12;
        uint8_t _unknown_20[8];
        uint64_t field_28;
    };

    class BillboardBatchVertexLP {
    public:
        void Set(const BillboardBatchVertex& billboardBatchVertex);
        BillboardBatchVertexLP();

    private:
        uint16_t field_0;
        uint16_t field_2;
        uint16_t field_4;
        short field_6;
        uint32_t field_8;
        uint8_t _unknown_12[8];
        uint16_t field_20;
        uint8_t field_22;
        uint8_t field_23;
        uint8_t field_24;
        uint8_t field_25;
        uint8_t field_26;
        uint8_t field_27;
        uint8_t _unknown_28[7];
    };

    // 0x100864b50
    BillboardBatchVertex* BillboardBatchVertex::operator=(const BillboardBatchVertex& billboardBatchVertex) {
        SetXYZ(billboardBatchVertex);
        field_12 = billboardBatchVertex.field_12;
        field_20 = billboardBatchVertex.field_20;
        field_28 = billboardBatchVertex.field_28;
        return this;
    }

    // 0x100864b50: BillboardBatchVertex::operator=(BillboardBatchVertex&&) has the same machine code as BillboardBatchVertex::operator=(BillboardBatchVertex const&)

    // 0x100865660
    void BillboardBatchVertexLP::Set(const BillboardBatchVertex& billboardBatchVertex) {
        uint64_t uVar1 = math::Vector3TFromVector3<short>(billboardBatchVertex);
        uint32_t local_20 = (uint32_t)uVar1;
        uint16_t local_1c = (uint16_t)((unsigned long)uVar1 >> 32);
        *this = local_20;
        field_6 = (short)(int)*(float*)&billboardBatchVertex.field_12;
        field_8 = *(uint32_t*)((long)&billboardBatchVertex.field_12 + 4);
        field_12 = billboardBatchVertex.field_20;
        field_20 = *(uint16_t*)&billboardBatchVertex.field_28;
        field_24 = *(uint8_t*)((long)&billboardBatchVertex.field_28 + 4);
        field_25 = *(uint8_t*)((long)&billboardBatchVertex.field_28 + 5);
        field_26 = *(uint8_t*)((long)&billboardBatchVertex.field_28 + 6);
        field_27 = *(uint8_t*)((long)&billboardBatchVertex.field_28 + 7);
        field_22 = *(uint8_t*)((long)&billboardBatchVertex.field_28 + 2);
        field_23 = *(uint8_t*)((long)&billboardBatchVertex.field_28 + 3);
    }

    // 0x100882450
    BillboardBatchVertex::BillboardBatchVertex() : math::Vector3T() {}

    // 0x100884870
    BillboardBatchVertexLP::BillboardBatchVertexLP() : math::Vector3T() {}

} // namespace jag::graphics
