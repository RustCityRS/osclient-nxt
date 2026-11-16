// libs/graphics/runetek7/model/BillboardBatchCombineHelper.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class BillboardBatchCombineHelper {
    public:
        GetVertexCount() const;
        GetIndexCount() const;
        ~BillboardBatchCombineHelper();
        BillboardBatchCombineHelper(BillboardBatchCombineHelper&&);
        BillboardBatchCombineHelper(BillboardBatchInstance*, int, bool);
        void Reset(BillboardBatchInstance*, int, bool);
        bool IsCombinableWith(BillboardBatchInstance const&) const;
        void Combine(BillboardBatchInstance const&);
        void FinishCombine();

        // data members, from how the methods use this: 48 bytes
        BillboardBatchInstance* field_0; // offset 0
        bool field_8;                    // offset 8
        char _unknown_9[3];
        int field_12;                     // offset 12
        int field_16;                     // offset 16
        uint field_20;                    // offset 20
        uint field_24;                    // offset 24
        uint field_28;                    // offset 28
        BillboardBatchInstance* field_32; // offset 32
        char _unknown_40[8];
    };

    // 0x100372b00, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // BillboardBatchCombineHelper::~BillboardBatchCombineHelper(): jumps straight to the base-object destructor

    // 0x100372b10, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // BillboardBatchCombineHelper::~BillboardBatchCombineHelper()
    void BillboardBatchCombineHelper::~BillboardBatchCombineHelper() {
        (&field_40)->~vector();
    }

    // 0x10084a1d0, 16 bytes, complete-object constructor, inline, placed by class name
    // BillboardBatchCombineHelper::BillboardBatchCombineHelper(BillboardBatchCombineHelper&&): jumps straight to the base-object constructor

    // 0x10084a2e0, 48 bytes, base-object constructor, inline, placed by class name
    // BillboardBatchCombineHelper::BillboardBatchCombineHelper(BillboardBatchCombineHelper&&)
    void BillboardBatchCombineHelper::BillboardBatchCombineHelper(BillboardBatchCombineHelper* param_1) {
        BillboardBatchInstance* pBVar1;
        uint uVar2;
        uint uVar3;
        uint uVar4;
        bool bVar5;
        undefined3 uVar6;
        int iVar7;

        field_32 = param_1->field_32;
        pBVar1 = param_1->field_0;
        bVar5 = param_1->field_8;
        uVar6 = *(undefined3*)&param_1->field_9;
        iVar7 = param_1->field_12;
        uVar2 = param_1->field_20;
        uVar3 = param_1->field_24;
        uVar4 = param_1->field_28;
        field_16 = param_1->field_16;
        field_20 = uVar2;
        field_24 = uVar3;
        field_28 = uVar4;
        field_0 = pBVar1;
        field_8 = bVar5;
        *(undefined3*)&field_9 = uVar6;
        field_12 = iVar7;
        new (&field_40, (vector*)&param_1->field_40)
            eastl::vector<BillboardBatchInstance_const*, BucketAllocatorEASTL>();
    }

} // namespace jag::graphics
