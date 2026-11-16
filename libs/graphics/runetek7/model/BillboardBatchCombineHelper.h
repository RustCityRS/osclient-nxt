// libs/graphics/runetek7/model/BillboardBatchCombineHelper.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class BillboardBatchCombineHelper {
    public:
        int GetVertexCount() const;
        int GetIndexCount() const;
        ~BillboardBatchCombineHelper();
        BillboardBatchCombineHelper(BillboardBatchCombineHelper&& billboardBatchCombineHelper);
        BillboardBatchCombineHelper(BillboardBatchInstance* billboardBatchInstance, int arg2, bool arg3);
        void Reset(BillboardBatchInstance* billboardBatchInstance, int arg2, bool arg3);
        bool IsCombinableWith(const BillboardBatchInstance& billboardBatchInstance) const;
        void Combine(const BillboardBatchInstance& billboardBatchInstance);
        void FinishCombine();

    private:
        BillboardBatchInstance* field_0;
        bool field_8;
        uint8_t _unknown_9[3];
        int m_indexCount;
        int m_vertexCount;
        unsigned int field_20;
        unsigned int field_24;
        unsigned int field_28;
        BillboardBatchInstance* field_32;
        uint8_t _unknown_40[8];
    };

    // 0x100372b10
    BillboardBatchCombineHelper::~BillboardBatchCombineHelper() {
        field_40.~vector();
    }

    // 0x10084a2e0
    BillboardBatchCombineHelper::BillboardBatchCombineHelper(BillboardBatchCombineHelper&& billboardBatchCombineHelper)
        : field_32(billboardBatchCombineHelper.field_32) {
        BillboardBatchInstance* pBVar1 = billboardBatchCombineHelper.field_0;
        bool bVar5 = billboardBatchCombineHelper.field_8;
        uint32_t uVar6 = *(uint32_t*)&billboardBatchCombineHelper.field_9;
        int iVar7 = billboardBatchCombineHelper.m_indexCount;
        unsigned int uVar2 = billboardBatchCombineHelper.field_20;
        unsigned int uVar3 = billboardBatchCombineHelper.field_24;
        unsigned int uVar4 = billboardBatchCombineHelper.field_28;
        m_vertexCount = billboardBatchCombineHelper.m_vertexCount;
        field_20 = uVar2;
        field_24 = uVar3;
        field_28 = uVar4;
        field_0 = pBVar1;
        field_8 = bVar5;
        *(uint32_t*)&field_9 = uVar6;
        m_indexCount = iVar7;
        new (&field_40)
            eastl::vector<BillboardBatchInstance const*, BucketAllocatorEASTL>(billboardBatchCombineHelper.field_40);
    }

} // namespace jag::graphics
