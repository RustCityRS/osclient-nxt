// libs/graphics/runetek7/animation/VertexTransformData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "VertexTransformData.h"

namespace jag::graphics {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    VertexTransformData::GetBoneTransforms();

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    VertexTransformData::GetBoneTransforms() const;

    // 0x10002d850: the linker folded this into oldscape::option::Option<int>::GetDefaultValue() const, which has identical code
    VertexTransformData::GetBillboardLabelTransforms();

    // 0x10002d850: the linker folded this into oldscape::option::Option<int>::GetDefaultValue() const, which has identical code
    VertexTransformData::GetBillboardLabelTransforms() const;

    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    VertexTransformData::GetLabelDeltas();

    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    VertexTransformData::GetLabelDeltas() const;

    // 0x100950120, 400 bytes, placed by class name and debug map
    // VertexTransformData::SetMaxSize(unsigned long, unsigned long, unsigned long)
    void VertexTransformData::SetMaxSize(ulong param_1, ulong param_2, ulong param_3) {
        bool bVar1;
        ulong uVar2;
        HeapInterface* pHVar3;
        void* pvVar4;
        uchar* puVar5;

        uVar2 = HeapBeginPtr();
        if (((param_1 <= uVar2) && (uVar2 = (&field_16)->HeapBeginPtr(), param_2 <= uVar2)) &&
            (uVar2 = (&field_32)->HeapBeginPtr(), param_3 <= uVar2)) {
            return;
        }
        pHVar3 = (HeapInterface*)HeapInterface::Instance();
        pvVar4 = (void*)end();
        pHVar3->AlignedFree(pvVar4);
        uVar2 = param_2 * 4 + 15 & 18446744073709551600;
        pHVar3 = (HeapInterface*)HeapInterface::Instance();
        puVar5 = (uchar*)pHVar3->AlignedAlloc((param_3 * 4 + 15 & 18446744073709551600) + uVar2 + param_1 * 48, 16);
        bVar1 = is_aligned<char>((char*)puVar5, 16);
        if (!bVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("is_aligned(reinterpret_cast<size_t>(pData))",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/VertexTransformData.cpp",
                      47, (char*)0);
        }
        new (this) WrapArray<unsigned char>(puVar5, param_1);
        puVar5 = puVar5 + param_1 * 48;
        bVar1 = is_aligned<char>((char*)puVar5, 16);
        if (bVar1) {
            new (&field_16, puVar5, param_2) WrapArray<unsigned char>();
            bVar1 = is_aligned<char>((char*)(puVar5 + uVar2), 16);
            if (bVar1) {
                new (&field_32, puVar5 + uVar2, param_3) WrapArray<unsigned char>();
                ClearTransformData(this);
                return;
            }
            /* WARNING: Subroutine does not return */
            LogAssert("is_aligned(reinterpret_cast<size_t>(pData))",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/VertexTransformData.cpp",
                      55, (char*)0);
        }
        /* WARNING: Subroutine does not return */
        LogAssert("is_aligned(reinterpret_cast<size_t>(pData))",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/animation/"
                  "VertexTransformData.cpp",
                  51, (char*)0);
    }

    // 0x1009509a0, 352 bytes, placed by class name
    // VertexTransformData::Resize(bool, unsigned long)
    void VertexTransformData::Resize(bool param_1, ulong param_2) {
        vector* pvVar1;
        ulong uVar2;
        Layout* pLVar3;
        WrapArray* pWVar4;
        undefined7 in_register_00000031;
        bool bVar5;
        VertexTransformData local_58;

        pvVar1 = SSOBeginPtr((type*)CONCAT71(in_register_00000031, param_1));
        uVar2 = pvVar1->HeapBeginPtr();
        bVar5 = uVar2 < param_2;
        if ((int)(type*)CONCAT71(in_register_00000031, param_1) != 0) {
            pLVar3 = (Layout*)GetScreen();
            uVar2 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar3);
            if ((uVar2 < param_2 * 4) && (bVar5 = true, 399 < param_2)) {
                /* WARNING: Subroutine does not return */
                LogAssert("size < AnimationConstants::MAX_LABELCOUNT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/VertexTransformData.cpp",
                          76, "AnimationState: More than maximum labels set in animation animation state: %i", param_2);
            }
            pLVar3 = (Layout*)GetDefaultValue();
            uVar2 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar3);
            if (uVar2 < param_2 * 8) {
                if (399 < param_2) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("size < AnimationConstants::MAX_BILLBOARDLABELCOUNT",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/VertexTransformData.cpp",
                              83, "AnimationState: More than maximum billboard labels set in animation state: %i",
                              param_2);
                }
                goto LAB_100950a75;
            }
        }
        if (!bVar5) {
            return;
        }
    LAB_100950a75:
        VertexTransformData(&local_58, this);
        Destroy(this);
        SetMaxSize(this, param_2, param_2, param_2);
        pvVar1 = local_58.SSOBeginPtr(param_2);
        SetBoneTransforms(this, pvVar1);
        pWVar4 = (WrapArray*)local_58.GetScreen();
        SetLabelDeltas(this, pWVar4);
        pWVar4 = (WrapArray*)local_58.GetDefaultValue();
        SetBillboardLabelTransforms(this, pWVar4);
        ~VertexTransformData(&local_58);
    }

    // 0x1009534d0, 192 bytes, base-object constructor, placed by class name
    // VertexTransformData::VertexTransformData(VertexTransformData const&)
    void VertexTransformData::VertexTransformData(VertexTransformData* param_1) {
        vector* pvVar1;
        type* ptVar2;
        Layout* pLVar3;
        ulong uVar4;
        ulong uVar5;
        WrapArray* pWVar6;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        new (&field_16, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_32, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        Destroy(this);
        pvVar1 = param_1->SSOBeginPtr(param_1);
        ptVar2 = (type*)pvVar1->HeapBeginPtr();
        pLVar3 = (Layout*)param_1->GetScreen();
        uVar4 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(pLVar3);
        pLVar3 = (Layout*)param_1->GetDefaultValue();
        uVar5 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(pLVar3);
        SetMaxSize(this, (ulong)ptVar2, uVar4, uVar5);
        pvVar1 = param_1->SSOBeginPtr(ptVar2);
        SetBoneTransforms(this, pvVar1);
        pWVar6 = (WrapArray*)param_1->GetScreen();
        SetLabelDeltas(this, pWVar6);
        pWVar6 = (WrapArray*)param_1->GetDefaultValue();
        SetBillboardLabelTransforms(this, pWVar6);
    }

    // 0x100953590, 112 bytes, placed by class name
    // VertexTransformData::SetBoneTransforms(WrapArray<math::Matrix43T<float> > const&)
    void VertexTransformData::SetBoneTransforms(WrapArray* param_1) {
        ulong uVar1;
        ulong* puVar2;
        Matrix43T* pMVar3;
        Matrix43T* pMVar4;
        ulong local_30;
        ulong local_28;

        local_30 = param_1->HeapBeginPtr();
        local_28 = HeapBeginPtr();
        puVar2 = std::min<unsigned long>(&local_30, &local_28);
        uVar1 = *puVar2;
        pMVar3 = (Matrix43T*)param_1->end();
        pMVar4 = (Matrix43T*)end();
        eastl::copy_n<math::Matrix43T<float> const*, unsigned long, math::Matrix43T<float>*>(pMVar3, uVar1, pMVar4);
    }

    // 0x100953600, 112 bytes, placed by class name
    // VertexTransformData::SetLabelDeltas(WrapArray<float> const&)
    void VertexTransformData::SetLabelDeltas(WrapArray* param_1) {
        ulong uVar1;
        ulong* puVar2;
        float* pfVar3;
        float* pfVar4;
        ulong local_30;
        ulong local_28;

        local_30 = param_1->HeapBeginPtr();
        local_28 = HeapBeginPtr();
        puVar2 = std::min<unsigned long>(&local_30, &local_28);
        uVar1 = *puVar2;
        pfVar3 = (float*)param_1->end();
        pfVar4 = (float*)(&field_16)->end();
        eastl::copy_n<float const*, unsigned long, float*>(pfVar3, uVar1, pfVar4);
    }

    // 0x100953670, 112 bytes, placed by class name
    // VertexTransformData::SetBillboardLabelTransforms(WrapArray<float> const&)
    void VertexTransformData::SetBillboardLabelTransforms(WrapArray* param_1) {
        ulong uVar1;
        ulong* puVar2;
        float* pfVar3;
        float* pfVar4;
        ulong local_30;
        ulong local_28;

        local_30 = param_1->HeapBeginPtr();
        local_28 = (&field_32)->HeapBeginPtr();
        puVar2 = std::min<unsigned long>(&local_30, &local_28);
        uVar1 = *puVar2;
        pfVar3 = (float*)param_1->end();
        pfVar4 = (float*)(&field_32)->end();
        eastl::copy_n<float const*, unsigned long, float*>(pfVar3, uVar1, pfVar4);
    }

    // 0x1009536e0, 16 bytes, complete-object constructor, placed by class name
    // VertexTransformData::VertexTransformData(VertexTransformData const&): jumps straight to the base-object constructor

    // 0x100953720, 80 bytes, placed by class name
    // VertexTransformData::ClearBoneTransforms()
    void VertexTransformData::ClearBoneTransforms() {
        Matrix43T<float>* this_00;
        Matrix43T<float>* pMVar1;

        this_00 = (Matrix43T<float>*)end();
        pMVar1 = (Matrix43T<float>*)end();
        for (; this_00 != pMVar1; this_00 = this_00 + 48) {
            this_00->SetToIdentity();
        }
    }

    // 0x100953770, 112 bytes, placed by class name
    // VertexTransformData::ClearLabelDeltas()
    void VertexTransformData::ClearLabelDeltas() {
        undefined8 uVar1;
        undefined8* puVar3;
        undefined8* puVar4;
        ulong uVar5;
        uint uVar6;
        ulong uVar7;
        undefined1* this_00;

        this_00 = &field_16;
        if (this_00->HeapBeginPtr() != 0) {
            uVar6 = 4;
            uVar7 = 0;
            do {
                puVar3 = (undefined8*)WrapArray<float>::operator[]((WrapArray<float>*)this_00, uVar7);
                puVar4 = (undefined8*)Array<float, eastl::allocator>::operator[](
                    (Array<float, eastl::allocator>*)&AnimationManager::IDENTITY_STATE_LABELS, 0);
                uVar1 = puVar4[1];
                *puVar3 = *puVar4;
                puVar3[1] = uVar1;
                uVar7 = (ulong)uVar6;
                uVar5 = this_00->HeapBeginPtr();
                uVar6 = uVar6 + 4;
            } while (uVar7 < uVar5);
        }
    }

    // 0x1009537e0, 128 bytes, placed by class name
    // VertexTransformData::ClearBillboardLabelTransforms()
    void VertexTransformData::ClearBillboardLabelTransforms() {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8* puVar5;
        undefined8* puVar6;
        ulong uVar7;
        uint uVar8;
        ulong uVar9;
        undefined1* this_00;

        this_00 = &field_32;
        if (this_00->HeapBeginPtr() != 0) {
            uVar8 = 8;
            uVar9 = 0;
            do {
                puVar5 = (undefined8*)WrapArray<float>::operator[]((WrapArray<float>*)this_00, uVar9);
                puVar6 = (undefined8*)Array<float, eastl::allocator>::operator[](
                    (Array<float, eastl::allocator>*)&AnimationManager::IDENTITY_STATE_BILLBOARD_LABELS, 0);
                uVar1 = puVar6[1];
                uVar2 = puVar6[2];
                uVar3 = puVar6[3];
                *puVar5 = *puVar6;
                puVar5[1] = uVar1;
                puVar5[2] = uVar2;
                puVar5[3] = uVar3;
                uVar9 = (ulong)uVar8;
                uVar7 = this_00->HeapBeginPtr();
                uVar8 = uVar8 + 8;
            } while (uVar9 < uVar7);
        }
    }

} // namespace jag::graphics

// 0x1009502f0, 16 bytes, placed by debug map only (low confidence)
// cos(float)
void cos(float param_1) {
    _cosf();
}
