// libs/graphics/runetek7/model/BillboardBatchCombineHelper.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "BillboardBatchCombineHelper.h"

namespace jag::graphics {
    // 0x100066b70: the linker folded this into oldscape::widgets::Widget::GetTextColour() const, which has identical code
    int BillboardBatchCombineHelper::GetVertexCount() const;

    // 0x1000e5d50: the linker folded this into oldscape::rs2lib::CoordZoneSource::GetRotation() const, which has identical code
    int BillboardBatchCombineHelper::GetIndexCount() const;

    // 0x100865850, 144 bytes, base-object constructor, placed by class name and debug map
    // BillboardBatchCombineHelper::BillboardBatchCombineHelper(BillboardBatchInstance*, int, bool)
    void BillboardBatchCombineHelper::BillboardBatchCombineHelper(BillboardBatchInstance* param_1, int param_2,
                                                                  bool param_3) {
        field_0 = (BillboardBatchInstance*)0;
        field_8 = false;
        m_indexCount = 0;
        m_vertexCount = 0;
        field_20 = 1;
        field_24 = 1;
        field_28 = 1;
        field_32 = (BillboardBatchInstance*)0;
        eastl::vector<BillboardBatchInstance_const*, BucketAllocatorEASTL>::vector();
        Reset(this, param_1, param_2, param_3);
        (&field_40, 256)->reserve();
    }

    // 0x1008658f0, 192 bytes, placed by class name and debug map
    // BillboardBatchCombineHelper::Reset(BillboardBatchInstance*, int, bool)
    void BillboardBatchCombineHelper::Reset(BillboardBatchInstance* param_1, int param_2, bool param_3) {
        int iVar1;
        GeometryBatch* this_00;
        vector<unsigned int, eastl::allocator>* pvVar2;

        field_0 = param_1;
        field_8 = param_3;
        m_indexCount = 0;
        m_vertexCount = 0;
        field_20 = 1;
        field_24 = 1;
        field_28 = 1;
        if (param_1 != (BillboardBatchInstance*)0) {
            this_00 = (GeometryBatch*)param_1->GetBillboardBatch();
            iVar1 = this_00->GetIndexCount();
            m_indexCount = m_indexCount + iVar1;
            iVar1 = this_00->GetVertexCount();
            m_vertexCount = m_vertexCount + iVar1;
            if (field_8 != false) {
                pvVar2 = (vector<unsigned int, eastl::allocator>*)this_00->GetBoneIDMap();
                iVar1 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar2);
                field_20 = field_20 + iVar1;
                pvVar2 = (vector<unsigned int, eastl::allocator>*)this_00->get_overflow_allocator();
                iVar1 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar2);
                field_24 = field_24 + iVar1;
                pvVar2 = (vector<unsigned int, eastl::allocator>*)this_00->GetBillboardLabelIDMap();
                iVar1 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar2);
                field_28 = field_28 + iVar1;
            }
        }
        if (param_2 == -1) {
            param_1 = (BillboardBatchInstance*)0;
        }
        field_32 = param_1;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    }

    // 0x1008659f0, 16 bytes, complete-object constructor, placed by class name and debug map
    // BillboardBatchCombineHelper::BillboardBatchCombineHelper(BillboardBatchInstance*, int, bool): jumps straight to the base-object constructor

    // 0x100865a30, 176 bytes, placed by class name and debug map
    // BillboardBatchCombineHelper::IsCombinableWith(BillboardBatchInstance const&) const
    bool BillboardBatchCombineHelper::IsCombinableWith(BillboardBatchInstance* param_1) {
        int iVar1;
        uint uVar2;
        uint uVar3;
        GeometryBatch* this_00;
        vector<unsigned int, eastl::allocator>* pvVar5;
        long lVar6;
        long lVar7;
        uint uVar9;
        bool bVar10;

        this_00 = (GeometryBatch*)param_1->GetBillboardBatch();
        iVar1 = m_indexCount;
        uVar9 = this_00->GetIndexCount() + iVar1;
        bVar10 = uVar9 < 65536;
        if (uVar9 < 65536) {
            if (field_8 == false) {
                bVar10 = true;
            } else {
                uVar9 = field_20;
                pvVar5 = (vector<unsigned int, eastl::allocator>*)this_00->GetBoneIDMap();
                lVar6 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar5);
                uVar2 = field_24;
                pvVar5 = (vector<unsigned int, eastl::allocator>*)this_00->get_overflow_allocator();
                lVar7 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar5);
                uVar3 = field_28;
                pvVar5 = (vector<unsigned int, eastl::allocator>*)this_00->GetBillboardLabelIDMap();
                bVar10 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar5) + (ulong)uVar3 < 11 &&
                         (lVar7 + (ulong)uVar2 < 33 && lVar6 + (ulong)uVar9 < 57);
            }
        }
        return bVar10;
    }

    // 0x100865ae0, 320 bytes, placed by class name and debug map
    // BillboardBatchCombineHelper::Combine(BillboardBatchInstance const&)
    void BillboardBatchCombineHelper::Combine(BillboardBatchInstance* param_1) {
        int iVar1;
        uint uVar2;
        GeometryBatch* this_00;
        vector<unsigned int, eastl::allocator>* pvVar3;
        BillboardBatchInstance* local_28;

        if (field_0 == (BillboardBatchInstance*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_destBillboardBatchInstance != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "BillboardBatchCombineHelper.cpp",
                      67, (char*)0);
        }
        this_00 = (GeometryBatch*)param_1->GetBillboardBatch();
        if (field_32 == (BillboardBatchInstance*)0) {
            field_32 = param_1;
        }
        iVar1 = this_00->GetIndexCount();
        m_indexCount = m_indexCount + iVar1;
        iVar1 = this_00->GetVertexCount();
        m_vertexCount = m_vertexCount + iVar1;
        if (field_8 != false) {
            pvVar3 = (vector<unsigned int, eastl::allocator>*)this_00->GetBoneIDMap();
            iVar1 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar3);
            uVar2 = iVar1 + field_20;
            field_20 = uVar2;
            if (56 < uVar2) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_combinedBoneCount <= AnimationConstants::MAX_BONES_IN_BATCH",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/BillboardBatchCombineHelper.cpp",
                          78, (char*)0);
            }
            pvVar3 = (vector<unsigned int, eastl::allocator>*)this_00->get_overflow_allocator();
            iVar1 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar3);
            uVar2 = iVar1 + field_24;
            field_24 = uVar2;
            if (32 < uVar2) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_combinedFaceLabelCount <= AnimationConstants::MAX_LABELS_IN_BATCH",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/BillboardBatchCombineHelper.cpp",
                          80, (char*)0);
            }
            pvVar3 = (vector<unsigned int, eastl::allocator>*)this_00->GetBillboardLabelIDMap();
            iVar1 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar3);
            uVar2 = iVar1 + field_28;
            field_28 = uVar2;
            if (10 < uVar2) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_combinedBillboardLabelCount <= AnimationConstants::MAX_BILLBOARDLABELS_IN_BATCH",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/BillboardBatchCombineHelper.cpp",
                          82, (char*)0);
            }
        }
        local_28 = param_1;
        (&field_40, &local_28)->push_back();
    }

    // 0x100865c80, 128 bytes, placed by class name and debug map
    // BillboardBatchCombineHelper::FinishCombine()
    void BillboardBatchCombineHelper::FinishCombine() {
        undefined8* puVar1;
        undefined8* puVar2;

        if (field_0 != (BillboardBatchInstance*)0) {
            (field_0, this)->Reserve();
            puVar1 = (undefined8*)(&field_40)->HeapBeginPtr();
            puVar2 = (undefined8*)(&field_40)->end();
            for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
                (field_0, (BillboardBatchInstance*)*puVar1, field_8)->Append();
            }
            Reset(this, (BillboardBatchInstance*)0, -1, false);
        }
    }

} // namespace jag::graphics
