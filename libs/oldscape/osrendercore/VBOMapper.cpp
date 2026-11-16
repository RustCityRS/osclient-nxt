// libs/oldscape/osrendercore/VBOMapper.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.osrendercore

#include "VBOMapper.h"
#include "libs/jtl/ResourceList.h"
#include "OSRenderCore.h"

namespace jag::oldscape {
    // 0x100198190: the linker folded this into PacketJ<Array<unsigned char, eastl::allocator> >::~PacketJ(), which has identical code
    VBOMapper::~VBOMapper();

    // 0x1001c0600, 112 bytes, placed by class name and debug map
    // VBOMapper::Unmap(render::VertexBuffer&)
    undefined8 VBOMapper::Unmap(VertexBuffer* param_1) {
        uint uVar1;
        undefined4 uVar2;
        undefined8 in_RAX;
        undefined8 uVar3;
        uint* puVar4;
        uint local_28;
        uint local_24;

        local_24 = (uint)((ulong)in_RAX >> 32);
        if (field_25 == '\0') {
            uVar2 = end();
            _local_28 = CONCAT44(local_24, uVar2);
            uVar2 = param_1->GetAliveCount();
            _local_28 = CONCAT44(uVar2, local_28);
            puVar4 = std::min<unsigned int>(&local_28, &local_24);
            uVar1 = *puVar4;
            uVar3 = data();
            param_1->Update(0, uVar1, uVar3, 0);
            field_24 = 0;
            uVar3 = 1;
        } else {
            uVar3 = param_1->Unmap();
        }
        return uVar3;
    }

    // 0x1001c0670, 176 bytes, placed by class name and debug map
    // VBOMapper::Map(render::VertexBuffer&, render::LockType, unsigned int, unsigned int, unsigned int)
    undefined8 VBOMapper::Map(vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* param_1,
                              ImPool<ImGuiTabBar>* param_2) {
        uint uVar1;
        ulong uVar2;
        undefined8 local_38[3];

        if (param_1[25] == (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>)0) {
            if (param_1[24] != (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>)0) {
                /* WARNING: Subroutine does not return */
                LogAssert("!m_inUse",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                          "VBOMapper.cpp",
                          17, (char*)0);
            }
            uVar2 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(param_1);
            uVar1 = ImPool<ImGuiTabBar>::GetAliveCount(param_2);
            if (uVar2 < uVar1) {
                uVar1 = ImPool<ImGuiTabBar>::GetAliveCount(param_2);
                param_1->set_max_size((ulong)uVar1, 3);
            }
            param_1[24] = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>)1;
            local_38[0] = param_1->data();
        } else {
            render::VertexBuffer::MapWrite((ResourceDataT<unsigned char const>*)local_38, param_2);
            local_38->~ResourceDataT();
        }
        return local_38[0];
    }

    // 0x1001c0820, 320 bytes, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread::UploadBuffers(bool)
    void OSRenderCore_RenderThread::UploadBuffers(bool param_1) {
        char cVar1;
        RenderState* pRVar2;
        shared_ptr* psVar3;
        shared_ptr* psVar4;
        Scene* this_00;
        GraphRoot* this_01;
        GraphNode* this_02;
        vector<eastl::pair<int, int>, eastl::allocator>* this_03;
        undefined8 uVar5;
        LightSubmissionRSeven* pLVar6;
        LightSubmissionRSeven* pLVar7;
        OverlayRSeven* pOVar8;
        OverlayRSeven* pOVar9;
        undefined1* puVar10;

        pRVar2 = (RenderState*)((field_32 + (long)(field_0[-3] + -32)))->GetRenderStateNXT();
        (&field_1580368, param_1)->UploadVertexBuffer();
        cVar1 = (&pRVar2->field_18104544)->empty();
        if (cVar1 == '\0') {
            tdp.AddData(pRVar2);
            (&pRVar2->field_18104544)->clear();
        }
        puVar10 = &pRVar2->field_17563848;
        cVar1 = puVar10->empty();
        if (cVar1 == '\0') {
            psVar3 = (shared_ptr*)puVar10->HeapBeginPtr();
            psVar4 = (shared_ptr*)puVar10->end();
            ProcessModelUpdates(psVar3, psVar4);
            this_00 = (Scene*)std::unique_ptr<rseven::Scene, std::default_delete<rseven::Scene>>::operator*(
                (unique_ptr<rseven::Scene, std::default_delete<rseven::Scene>>*)&field_16);
            this_01 = (GraphRoot*)this_00->GetSceneGraphRoot();
            this_02 = (GraphNode*)this_01->GetRoot();
            this_03 = (vector<eastl::pair<int, int>, eastl::allocator>*)this_02->GetChildren();
            uVar5 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(this_03);
            *(undefined8*)(pRVar2->field_19677552 + 11296) = uVar5;
            puVar10->resize(0);
        }
        puVar10 = &pRVar2->field_18088176;
        pLVar6 = (LightSubmissionRSeven*)puVar10->HeapBeginPtr();
        pLVar7 = (LightSubmissionRSeven*)puVar10->end();
        ProcessLightUpdates(pLVar6, pLVar7);
        eastl::vector<
            RenderState::LightSubmissionRSeven,
            eastl::fixed_vector_allocator<64ul, 255ul, 16ul, 0ul, true, eastl::allocator>>::resize((ulong)puVar10);
        puVar10 = &pRVar2->field_18104600;
        pOVar8 = (OverlayRSeven*)puVar10->HeapBeginPtr();
        pOVar9 = (OverlayRSeven*)puVar10->end();
        ProcessOverlayUpdates(pOVar8, pOVar9);
        puVar10->resize(0);
    }

} // namespace jag::oldscape

namespace jag {
    // 0x1001c07a0: the linker folded this into UISceneSettings::operator=(UISceneSettings const&), which has identical code
    UISceneSettings::operator=(UISceneSettings&&);

} // namespace jag
