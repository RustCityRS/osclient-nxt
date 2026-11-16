// libs/graphics/runetek7/animation/VertexTransformData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "VertexTransformData.h"

namespace jag::graphics {
    // 0x100009ca0: VertexTransformData::GetBoneTransforms() has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100009ca0: VertexTransformData::GetBoneTransforms() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x10002d850: VertexTransformData::GetBillboardLabelTransforms() has the same machine code as oldscape::option::Option<int>::GetDefaultValue() const

    // 0x10002d850: VertexTransformData::GetBillboardLabelTransforms() const has the same machine code as oldscape::option::Option<int>::GetDefaultValue() const

    // 0x1000b9950: VertexTransformData::GetLabelDeltas() has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x1000b9950: VertexTransformData::GetLabelDeltas() const has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x100950120
    void VertexTransformData::SetMaxSize(unsigned long arg1, unsigned long arg2, unsigned long arg3) {
        unsigned long uVar2 = HeapBeginPtr();
        if (((arg1 <= uVar2) && (uVar2 = field_16.HeapBeginPtr(), arg2 <= uVar2)) &&
            (uVar2 = field_32.HeapBeginPtr(), arg3 <= uVar2)) {
            return;
        }
        auto pHVar3 = HeapInterface::Instance();
        pHVar3->AlignedFree((void*)end());
        uVar2 = arg2 * 4 + 15 & 18446744073709551600;
        pHVar3 = HeapInterface::Instance();
        auto pPVar4 = pHVar3->AlignedAlloc((arg3 * 4 + 15 & 18446744073709551600) + uVar2 + arg1 * 48, 16);
        if (!(is_aligned<char>((unsigned long)pPVar4, 16))) {
            LogAssert("is_aligned(reinterpret_cast<size_t>(pData))",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/VertexTransformData.cpp",
                      47, nullptr);
        }
        new (this) WrapArray(pPVar4, arg1);
        pPVar4 = (Particle*)(pPVar4->m_rGBA + arg1 * 48 - 68);
        if (!(is_aligned<char>((unsigned long)pPVar4, 16))) {
            LogAssert("is_aligned(reinterpret_cast<size_t>(pData))",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/VertexTransformData.cpp",
                      51, nullptr);
        }
        new (&field_16) WrapArray(pPVar4, arg2);
        if (!(is_aligned<char>((unsigned long)(pPVar4->m_rGBA + (uVar2 - 68)), 16))) {
            LogAssert("is_aligned(reinterpret_cast<size_t>(pData))",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/VertexTransformData.cpp",
                      55, nullptr);
        }
        new (&field_32) WrapArray((Particle*)(pPVar4->m_rGBA + (uVar2 - 68)), arg3);
        ClearTransformData();
    }

    // 0x1009509a0
    void VertexTransformData::Resize(bool arg1, unsigned long arg2) {
        uint64_t in_register_00000031;
        VertexTransformData local_58;

        Layout* pLVar1 = (Layout*)SSOBeginPtr();
        unsigned long uVar2 = pLVar1->HeapBeginPtr();
        bool bVar4 = uVar2 < arg2;
        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) != 0) {
            pLVar1 = (Layout*)GetScreen();
            uVar2 = pLVar1->HeapBeginPtr();
            if ((uVar2 < arg2 * 4) && (bVar4 = true, 399 < arg2)) {
                LogAssert("size < AnimationConstants::MAX_LABELCOUNT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/VertexTransformData.cpp",
                          76, "AnimationState: More than maximum labels set in animation animation state: %i", arg2);
            }
            pLVar1 = (Layout*)GetDefaultValue();
            uVar2 = pLVar1->HeapBeginPtr();
            if (uVar2 < arg2 * 8) {
                if (399 < arg2) {
                    LogAssert("size < AnimationConstants::MAX_BILLBOARDLABELCOUNT",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/VertexTransformData.cpp",
                              83, "AnimationState: More than maximum billboard labels set in animation state: %i",
                              arg2);
                }
                goto LAB_100950a75;
            }
        }
        if (!bVar4) {
            return;
        }
    LAB_100950a75:
        VertexTransformData(&local_58, this);
        Destroy();
        SetMaxSize(arg2, arg2, arg2);
        auto wrapArray = local_58.SSOBeginPtr();
        SetBoneTransforms(*wrapArray);
        auto pWVar3 = local_58.GetScreen();
        SetLabelDeltas(*pWVar3);
        pWVar3 = (WrapArray<float>*)local_58.GetDefaultValue();
        SetBillboardLabelTransforms(*pWVar3);
        ~VertexTransformData(&local_58);
    }

    // 0x1009534d0
    VertexTransformData::VertexTransformData(const VertexTransformData& vertexTransformData) : shared_ptr() {
        new (&field_16) shared_ptr();
        new (&field_32) shared_ptr();
        Destroy();
        auto pLVar1 = vertexTransformData.SSOBeginPtr();
        unsigned long arg1 = pLVar1->HeapBeginPtr();
        pLVar1 = (Layout*)vertexTransformData.GetScreen();
        unsigned long arg2 = pLVar1->HeapBeginPtr();
        pLVar1 = (Layout*)vertexTransformData.GetDefaultValue();
        unsigned long arg3 = pLVar1->HeapBeginPtr();
        SetMaxSize(arg1, arg2, arg3);
        auto wrapArray = vertexTransformData.SSOBeginPtr();
        SetBoneTransforms(*wrapArray);
        auto pWVar2 = vertexTransformData.GetScreen();
        SetLabelDeltas(*pWVar2);
        pWVar2 = (WrapArray<float>*)vertexTransformData.GetDefaultValue();
        SetBillboardLabelTransforms(*pWVar2);
    }

    // 0x100953590
    void VertexTransformData::SetBoneTransforms(const WrapArray<math::Matrix43T<float>>& wrapArray) {
        unsigned long local_30 = wrapArray.HeapBeginPtr();
        unsigned long local_28 = HeapBeginPtr();
        auto puVar1 = std::min<unsigned long>(local_30, local_28);
        unsigned long arg2 = *puVar1;
        auto matrix431 = wrapArray.end();
        auto matrix432 = end();
        eastl::copy_n<math::Matrix43T<float> const*, unsigned long, math::Matrix43T<float>*>(matrix431, arg2,
                                                                                             matrix432);
    }

    // 0x100953600
    void VertexTransformData::SetLabelDeltas(const WrapArray<float>& wrapArray) {
        unsigned long local_30 = wrapArray.HeapBeginPtr();
        unsigned long local_28 = HeapBeginPtr();
        auto puVar1 = std::min<unsigned long>(local_30, local_28);
        unsigned long arg2 = *puVar1;
        auto arg1 = wrapArray.end();
        auto arg3 = field_16.end();
        eastl::copy_n<float const*, unsigned long, float*>(arg1, arg2, arg3);
    }

    // 0x100953670
    void VertexTransformData::SetBillboardLabelTransforms(const WrapArray<float>& wrapArray) {
        unsigned long local_30 = wrapArray.HeapBeginPtr();
        unsigned long local_28 = field_32.HeapBeginPtr();
        auto puVar1 = std::min<unsigned long>(local_30, local_28);
        unsigned long arg2 = *puVar1;
        auto arg1 = wrapArray.end();
        auto arg3 = field_32.end();
        eastl::copy_n<float const*, unsigned long, float*>(arg1, arg2, arg3);
    }

    // 0x100953720
    void VertexTransformData::ClearBoneTransforms() {
        auto this_00 = end();
        auto pMVar1 = end();
        for (; this_00 != pMVar1; this_00 = this_00 + 48) {
            this_00->SetToIdentity();
        }
    }

    // 0x100953770
    void VertexTransformData::ClearLabelDeltas() {
        uint64_t uVar1;
        uint64_t* puVar3;
        uint64_t* puVar4;
        unsigned long uVar5;
        unsigned int uVar6;
        unsigned long arg1;

        uint8_t* this_00 = &field_16;
        if (this_00->HeapBeginPtr() != 0) {
            uVar6 = 4;
            arg1 = 0;
            do {
                puVar3 = (uint64_t*)(*this_00)[arg1];
                puVar4 = (uint64_t*)(*((Array<float>*)&AnimationManager::IDENTITY_STATE_LABELS))[0];
                uVar1 = puVar4[1];
                *puVar3 = *puVar4;
                puVar3[1] = uVar1;
                arg1 = (unsigned long)uVar6;
                uVar5 = this_00->HeapBeginPtr();
                uVar6 = uVar6 + 4;
            } while (arg1 < uVar5);
        }
    }

    // 0x1009537e0
    void VertexTransformData::ClearBillboardLabelTransforms() {
        uint64_t uVar1;
        uint64_t uVar2;
        uint64_t uVar3;
        uint64_t* puVar5;
        uint64_t* puVar6;
        unsigned long uVar7;
        unsigned int uVar8;
        unsigned long arg1;

        uint8_t* this_00 = &field_32;
        if (this_00->HeapBeginPtr() != 0) {
            uVar8 = 8;
            arg1 = 0;
            do {
                puVar5 = (uint64_t*)(*this_00)[arg1];
                puVar6 = (uint64_t*)(*((Array<float>*)&AnimationManager::IDENTITY_STATE_BILLBOARD_LABELS))[0];
                uVar1 = puVar6[1];
                uVar2 = puVar6[2];
                uVar3 = puVar6[3];
                *puVar5 = *puVar6;
                puVar5[1] = uVar1;
                puVar5[2] = uVar2;
                puVar5[3] = uVar3;
                arg1 = (unsigned long)uVar8;
                uVar7 = this_00->HeapBeginPtr();
                uVar8 = uVar8 + 8;
            } while (arg1 < uVar7);
        }
    }

} // namespace jag::graphics

// 0x1009502f0
void cos(float arg1) {
    _cosf();
}
