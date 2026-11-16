// libs/graphics/runetek7/model/GeometryBatchCombineHelper.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "GeometryBatchCombineHelper.h"

namespace jag::graphics {
    // 0x100066b70: GeometryBatchCombineHelper::GetVertexCount() const has the same machine code as oldscape::widgets::Widget::GetTextColour() const

    // 0x1000e5d50: GeometryBatchCombineHelper::GetIndexCount() const has the same machine code as oldscape::rs2lib::CoordZoneSource::GetRotation() const

    // 0x10080c800
    GeometryBatchCombineHelper::GeometryBatchCombineHelper(GeometryBatchInstance* geometryBatchInstance, int arg2,
                                                           bool arg3)
        : field_0(nullptr), field_8(false), m_indexCount(0), m_vertexCount(0), field_20(1), field_24(1),
          field_32(nullptr) {
        Reset(geometryBatchInstance, arg2, arg3);
        field_40.reserve(256);
    }

    // 0x10080c8a0
    void GeometryBatchCombineHelper::Reset(GeometryBatchInstance* geometryBatchInstance, int arg2, bool arg3) {
        int iVar1;
        int iVar2;
        GeometryBatchInstance* this_00;
        vector<unsigned int>* pvVar3;

        field_0 = geometryBatchInstance;
        field_8 = arg3;
        m_indexCount = 0;
        m_vertexCount = 0;
        field_20 = 1;
        field_24 = 1;
        if (geometryBatchInstance != nullptr) {
            this_00 = (GeometryBatchInstance*)geometryBatchInstance->GetGeometryBatch();
            iVar1 = this_00->GetIndexCount();
            m_indexCount = m_indexCount + iVar1;
            iVar1 = this_00->GetVertexCount();
            m_vertexCount = m_vertexCount + iVar1;
            if (field_8 != false) {
                pvVar3 = (vector<unsigned int>*)this_00->GetBoneIDMap();
                iVar1 = pvVar3->size();
                pvVar3 = (vector<unsigned int>*)this_00->GetJointIDMap();
                iVar2 = pvVar3->size();
                field_20 = field_20 + iVar2 + iVar1;
                pvVar3 = (vector<unsigned int>*)this_00->GetMaterial();
                iVar1 = pvVar3->size();
                field_24 = field_24 + iVar1;
            }
        }
        if (arg2 == -1) {
            geometryBatchInstance = nullptr;
        }
        field_32 = geometryBatchInstance;
        field_40.clear();
    }

    // 0x10080c9b0
    bool GeometryBatchCombineHelper::IsCombinableWith(const GeometryBatchInstance& geometryBatchInstance) const {
        unsigned int uVar2;
        unsigned int uVar3;
        vector<unsigned int>* pvVar8;
        long lVar9;
        long lVar10;

        auto this_00 = geometryBatchInstance.GetGeometryBatch();
        int iVar1 = m_indexCount;
        int iVar7 = this_00->GetIndexCount();
        uint8_t bVar4 = ((GeometryBatch*)field_0->GetGeometryBatch())->HasFaceTransparency();
        uint8_t bVar5 = this_00->HasFaceTransparency();
        bool bVar6 = (bool)((bVar5 ^ bVar4 ^ 1) & (unsigned int)(iVar7 + iVar1) < 65536);
        if (bVar6 == true) {
            if (field_8 == false) {
                bVar6 = true;
            } else {
                uVar2 = field_20;
                pvVar8 = (vector<unsigned int>*)this_00->GetBoneIDMap();
                lVar9 = pvVar8->size();
                pvVar8 = (vector<unsigned int>*)this_00->GetJointIDMap();
                lVar10 = pvVar8->size();
                uVar3 = field_24;
                pvVar8 = (vector<unsigned int>*)this_00->GetMaterial();
                bVar6 = pvVar8->size() + (unsigned long)uVar3 < 33 && lVar10 + lVar9 + (unsigned long)uVar2 < 57;
            }
        }
        return bVar6;
    }

    // 0x10080ca70
    void GeometryBatchCombineHelper::Combine(const GeometryBatchInstance& geometryBatchInstance) {
        unsigned int uVar3;
        vector<unsigned int>* pvVar4;

        if (field_0 == nullptr) {
            LogAssert("m_destGeometryBatchInstance != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatchCombineHelper.cpp",
                      65, nullptr);
        }
        auto this_00 = geometryBatchInstance.GetGeometryBatch();
        if (field_32 == nullptr) {
            field_32 = geometryBatchInstance;
        }
        int iVar1 = this_00->GetIndexCount();
        m_indexCount = m_indexCount + iVar1;
        iVar1 = this_00->GetVertexCount();
        m_vertexCount = m_vertexCount + iVar1;
        if (field_8 != false) {
            pvVar4 = (vector<unsigned int>*)this_00->GetBoneIDMap();
            iVar1 = pvVar4->size();
            pvVar4 = (vector<unsigned int>*)this_00->GetJointIDMap();
            uVar3 = pvVar4->size() + iVar1 + field_20;
            field_20 = uVar3;
            if (56 < uVar3) {
                LogAssert("m_combinedBoneCount <= AnimationConstants::MAX_BONES_IN_BATCH",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatchCombineHelper.cpp",
                          76, nullptr);
            }
            pvVar4 = (vector<unsigned int>*)this_00->GetMaterial();
            iVar1 = pvVar4->size();
            uVar3 = iVar1 + field_24;
            field_24 = uVar3;
            if (32 < uVar3) {
                LogAssert("m_combinedLabelCount <= AnimationConstants::MAX_LABELS_IN_BATCH",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatchCombineHelper.cpp",
                          78, nullptr);
            }
        }
        field_40.push_back(geometryBatchInstance);
    }

    // 0x10080cbf0
    void GeometryBatchCombineHelper::FinishCombine() {
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
