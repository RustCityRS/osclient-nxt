// libs/graphics/runetek7/model/GeometryBatchCombineHelper.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "GeometryBatchCombineHelper.h"

namespace jag::graphics {
    // 0x100066b70: the linker folded this into oldscape::widgets::Widget::GetTextColour() const, which has identical code
    GeometryBatchCombineHelper::GetVertexCount() const;

    // 0x1000e5d50: the linker folded this into oldscape::rs2lib::CoordZoneSource::GetRotation() const, which has identical code
    GeometryBatchCombineHelper::GetIndexCount() const;

    // 0x10080c800, 144 bytes, base-object constructor, placed by class name and debug map
    // GeometryBatchCombineHelper::GeometryBatchCombineHelper(GeometryBatchInstance*, int, bool)
    void GeometryBatchCombineHelper::GeometryBatchCombineHelper(GeometryBatchInstance* param_1, int param_2,
                                                                bool param_3) {
        field_0 = (GeometryBatchInstance*)0;
        field_8 = false;
        field_12 = 0;
        field_16 = 0;
        field_20 = 1;
        field_24 = 1;
        field_32 = (GeometryBatchInstance*)0;
        eastl::vector<GeometryBatchInstance_const*, BucketAllocatorEASTL>::vector();
        Reset(this, param_1, param_2, param_3);
        (&field_40, 256)->reserve();
    }

    // 0x10080c8a0, 192 bytes, placed by class name and debug map
    // GeometryBatchCombineHelper::Reset(GeometryBatchInstance*, int, bool)
    void GeometryBatchCombineHelper::Reset(GeometryBatchInstance* param_1, int param_2, bool param_3) {
        int iVar1;
        int iVar2;
        GeometryBatch* this_00;
        vector<unsigned int, eastl::allocator>* pvVar3;

        field_0 = param_1;
        field_8 = param_3;
        field_12 = 0;
        field_16 = 0;
        field_20 = 1;
        field_24 = 1;
        if (param_1 != (GeometryBatchInstance*)0) {
            this_00 = (GeometryBatch*)param_1->GetGeometryBatch();
            iVar1 = this_00->GetIndexCount();
            field_12 = field_12 + iVar1;
            iVar1 = this_00->GetVertexCount();
            field_16 = field_16 + iVar1;
            if (field_8 != false) {
                pvVar3 = (vector<unsigned int, eastl::allocator>*)this_00->GetBoneIDMap();
                iVar1 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar3);
                pvVar3 = (vector<unsigned int, eastl::allocator>*)this_00->GetJointIDMap();
                iVar2 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar3);
                field_20 = field_20 + iVar2 + iVar1;
                pvVar3 = (vector<unsigned int, eastl::allocator>*)this_00->GetMaterial();
                iVar1 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar3);
                field_24 = field_24 + iVar1;
            }
        }
        if (param_2 == -1) {
            param_1 = (GeometryBatchInstance*)0;
        }
        field_32 = param_1;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    }

    // 0x10080c9a0, 16 bytes, complete-object constructor, placed by class name and debug map
    // GeometryBatchCombineHelper::GeometryBatchCombineHelper(GeometryBatchInstance*, int, bool): jumps straight to the base-object constructor

    // 0x10080c9b0, 192 bytes, placed by class name and debug map
    // GeometryBatchCombineHelper::IsCombinableWith(GeometryBatchInstance const&) const
    bool GeometryBatchCombineHelper::IsCombinableWith(GeometryBatchInstance* param_1) {
        int iVar1;
        uint uVar2;
        uint uVar3;
        byte bVar4;
        byte bVar5;
        bool bVar6;
        int iVar7;
        GeometryBatch* this_00;
        GeometryBatch* this_01;
        vector<unsigned int, eastl::allocator>* pvVar8;
        long lVar9;
        long lVar10;

        this_00 = (GeometryBatch*)param_1->GetGeometryBatch();
        iVar1 = field_12;
        iVar7 = this_00->GetIndexCount();
        this_01 = (GeometryBatch*)field_0->GetGeometryBatch();
        bVar4 = this_01->HasFaceTransparency();
        bVar5 = this_00->HasFaceTransparency();
        bVar6 = (bool)((bVar5 ^ bVar4 ^ 1) & (uint)(iVar7 + iVar1) < 65536);
        if (bVar6 == true) {
            if (field_8 == false) {
                bVar6 = true;
            } else {
                uVar2 = field_20;
                pvVar8 = (vector<unsigned int, eastl::allocator>*)this_00->GetBoneIDMap();
                lVar9 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar8);
                pvVar8 = (vector<unsigned int, eastl::allocator>*)this_00->GetJointIDMap();
                lVar10 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar8);
                uVar3 = field_24;
                pvVar8 = (vector<unsigned int, eastl::allocator>*)this_00->GetMaterial();
                bVar6 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar8) + (ulong)uVar3 < 33 &&
                        lVar10 + lVar9 + (ulong)uVar2 < 57;
            }
        }
        return bVar6;
    }

    // 0x10080ca70, 288 bytes, placed by class name and debug map
    // GeometryBatchCombineHelper::Combine(GeometryBatchInstance const&)
    void GeometryBatchCombineHelper::Combine(GeometryBatchInstance* param_1) {
        int iVar1;
        uint uVar3;
        GeometryBatch* this_00;
        vector<unsigned int, eastl::allocator>* pvVar4;
        GeometryBatchInstance* local_30;

        if (field_0 == (GeometryBatchInstance*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_destGeometryBatchInstance != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatchCombineHelper.cpp",
                      65, (char*)0);
        }
        this_00 = (GeometryBatch*)param_1->GetGeometryBatch();
        if (field_32 == (GeometryBatchInstance*)0) {
            field_32 = param_1;
        }
        iVar1 = this_00->GetIndexCount();
        field_12 = field_12 + iVar1;
        iVar1 = this_00->GetVertexCount();
        field_16 = field_16 + iVar1;
        if (field_8 != false) {
            pvVar4 = (vector<unsigned int, eastl::allocator>*)this_00->GetBoneIDMap();
            iVar1 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar4);
            pvVar4 = (vector<unsigned int, eastl::allocator>*)this_00->GetJointIDMap();
            uVar3 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar4) + iVar1 + field_20;
            field_20 = uVar3;
            if (56 < uVar3) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_combinedBoneCount <= AnimationConstants::MAX_BONES_IN_BATCH",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatchCombineHelper.cpp",
                          76, (char*)0);
            }
            pvVar4 = (vector<unsigned int, eastl::allocator>*)this_00->GetMaterial();
            iVar1 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar4);
            uVar3 = iVar1 + field_24;
            field_24 = uVar3;
            if (32 < uVar3) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_combinedLabelCount <= AnimationConstants::MAX_LABELS_IN_BATCH",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatchCombineHelper.cpp",
                          78, (char*)0);
            }
        }
        local_30 = param_1;
        (&field_40, &local_30)->push_back();
    }

    // 0x10080cbf0, 128 bytes, placed by class name and debug map
    // GeometryBatchCombineHelper::FinishCombine()
    void GeometryBatchCombineHelper::FinishCombine() {
        undefined8* puVar1;
        undefined8* puVar2;

        if (field_0 != (GeometryBatchInstance*)0) {
            (field_0, this)->Reserve();
            puVar1 = (undefined8*)(&field_40)->HeapBeginPtr();
            puVar2 = (undefined8*)(&field_40)->end();
            for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
                (field_0, (GeometryBatchInstance*)*puVar1, field_8)->Append();
            }
            Reset(this, (GeometryBatchInstance*)0, -1, false);
        }
    }

} // namespace jag::graphics
