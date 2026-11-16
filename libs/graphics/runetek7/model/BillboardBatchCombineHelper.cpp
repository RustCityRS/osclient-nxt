// libs/graphics/runetek7/model/BillboardBatchCombineHelper.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "BillboardBatchCombineHelper.h"

namespace jag::graphics {
    // 0x100066b70: BillboardBatchCombineHelper::GetVertexCount() const has the same machine code as oldscape::widgets::Widget::GetTextColour() const

    // 0x1000e5d50: BillboardBatchCombineHelper::GetIndexCount() const has the same machine code as oldscape::rs2lib::CoordZoneSource::GetRotation() const

    // 0x100865850
    BillboardBatchCombineHelper::BillboardBatchCombineHelper(BillboardBatchInstance* billboardBatchInstance, int arg2,
                                                             bool arg3)
        : field_0(nullptr), field_8(false), m_indexCount(0), m_vertexCount(0), field_20(1), field_24(1), field_28(1),
          field_32(nullptr) {
        Reset(billboardBatchInstance, arg2, arg3);
        field_40.reserve(256);
    }

    // 0x1008658f0
    void BillboardBatchCombineHelper::Reset(BillboardBatchInstance* billboardBatchInstance, int arg2, bool arg3) {
        int iVar1;
        GeometryBatch* this_00;
        vector<unsigned int>* pvVar2;

        field_0 = billboardBatchInstance;
        field_8 = arg3;
        m_indexCount = 0;
        m_vertexCount = 0;
        field_20 = 1;
        field_24 = 1;
        field_28 = 1;
        if (billboardBatchInstance != nullptr) {
            this_00 = (GeometryBatch*)billboardBatchInstance->GetBillboardBatch();
            iVar1 = this_00->GetIndexCount();
            m_indexCount = m_indexCount + iVar1;
            iVar1 = this_00->GetVertexCount();
            m_vertexCount = m_vertexCount + iVar1;
            if (field_8 != false) {
                pvVar2 = (vector<unsigned int>*)this_00->GetBoneIDMap();
                iVar1 = pvVar2->size();
                field_20 = field_20 + iVar1;
                pvVar2 = (vector<unsigned int>*)this_00->get_overflow_allocator();
                iVar1 = pvVar2->size();
                field_24 = field_24 + iVar1;
                pvVar2 = (vector<unsigned int>*)this_00->GetBillboardLabelIDMap();
                iVar1 = pvVar2->size();
                field_28 = field_28 + iVar1;
            }
        }
        if (arg2 == -1) {
            billboardBatchInstance = nullptr;
        }
        field_32 = billboardBatchInstance;
        field_40.clear();
    }

    // 0x100865a30
    bool BillboardBatchCombineHelper::IsCombinableWith(const BillboardBatchInstance& billboardBatchInstance) const {
        unsigned int uVar2;
        unsigned int uVar3;
        vector<unsigned int>* pvVar5;
        long lVar6;
        long lVar7;

        auto this_00 = billboardBatchInstance.GetBillboardBatch();
        int iVar1 = m_indexCount;
        unsigned int uVar9 = this_00->GetIndexCount() + iVar1;
        bool bVar10 = uVar9 < 65536;
        if (uVar9 < 65536) {
            if (field_8 == false) {
                bVar10 = true;
            } else {
                uVar9 = field_20;
                pvVar5 = (vector<unsigned int>*)this_00->GetBoneIDMap();
                lVar6 = pvVar5->size();
                uVar2 = field_24;
                pvVar5 = (vector<unsigned int>*)this_00->get_overflow_allocator();
                lVar7 = pvVar5->size();
                uVar3 = field_28;
                pvVar5 = (vector<unsigned int>*)this_00->GetBillboardLabelIDMap();
                bVar10 = pvVar5->size() + (unsigned long)uVar3 < 11 &&
                         (lVar7 + (unsigned long)uVar2 < 33 && lVar6 + (unsigned long)uVar9 < 57);
            }
        }
        return bVar10;
    }

    // 0x100865ae0
    void BillboardBatchCombineHelper::Combine(const BillboardBatchInstance& billboardBatchInstance) {
        unsigned int uVar2;
        vector<unsigned int>* pvVar3;

        if (field_0 == nullptr) {
            LogAssert("m_destBillboardBatchInstance != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "BillboardBatchCombineHelper.cpp",
                      67, nullptr);
        }
        auto this_00 = billboardBatchInstance.GetBillboardBatch();
        if (field_32 == nullptr) {
            field_32 = billboardBatchInstance;
        }
        int iVar1 = this_00->GetIndexCount();
        m_indexCount = m_indexCount + iVar1;
        iVar1 = this_00->GetVertexCount();
        m_vertexCount = m_vertexCount + iVar1;
        if (field_8 != false) {
            pvVar3 = (vector<unsigned int>*)this_00->GetBoneIDMap();
            iVar1 = pvVar3->size();
            uVar2 = iVar1 + field_20;
            field_20 = uVar2;
            if (56 < uVar2) {
                LogAssert("m_combinedBoneCount <= AnimationConstants::MAX_BONES_IN_BATCH",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/BillboardBatchCombineHelper.cpp",
                          78, nullptr);
            }
            pvVar3 = (vector<unsigned int>*)this_00->get_overflow_allocator();
            iVar1 = pvVar3->size();
            uVar2 = iVar1 + field_24;
            field_24 = uVar2;
            if (32 < uVar2) {
                LogAssert("m_combinedFaceLabelCount <= AnimationConstants::MAX_LABELS_IN_BATCH",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/BillboardBatchCombineHelper.cpp",
                          80, nullptr);
            }
            pvVar3 = (vector<unsigned int>*)this_00->GetBillboardLabelIDMap();
            iVar1 = pvVar3->size();
            uVar2 = iVar1 + field_28;
            field_28 = uVar2;
            if (10 < uVar2) {
                LogAssert("m_combinedBillboardLabelCount <= AnimationConstants::MAX_BILLBOARDLABELS_IN_BATCH",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/BillboardBatchCombineHelper.cpp",
                          82, nullptr);
            }
        }
        field_40.push_back(billboardBatchInstance);
    }

    // 0x100865c80
    void BillboardBatchCombineHelper::FinishCombine() {
        uint64_t* puVar1;
        uint64_t* puVar2;

        if (field_0 != nullptr) {
            field_0->Reserve(*this);
            puVar1 = (uint64_t*)field_40.HeapBeginPtr();
            puVar2 = (uint64_t*)field_40.end();
            for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
                field_0->Append(*(*puVar1), field_8);
            }
            Reset(nullptr, -1, false);
        }
    }

} // namespace jag::graphics
