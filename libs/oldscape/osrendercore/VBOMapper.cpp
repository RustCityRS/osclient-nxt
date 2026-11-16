// libs/oldscape/osrendercore/VBOMapper.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.osrendercore

#include "VBOMapper.h"
#include "libs/jtl/ResourceList.h"
#include "OSRenderCore.h"

namespace jag::oldscape {
    // 0x100198190: VBOMapper::~VBOMapper() has the same machine code as PacketJ<Array<unsigned char>>::~PacketJ()

    // 0x1001c0600
    uint64_t VBOMapper::Unmap(render::VertexBuffer& vertexBuffer) {
        unsigned int arg2;
        uint32_t uVar1;
        uint64_t in_RAX;
        uint64_t uVar2;
        unsigned int* puVar3;
        void* arg3;
        unsigned int local_28;

        unsigned int local_24 = (unsigned int)((unsigned long)in_RAX >> 32);
        if (m_mappingSupport == '\0') {
            uVar1 = end();
            _local_28 = (((uint64_t)local_24 << 32) | (uint32_t)uVar1);
            uVar1 = vertexBuffer.GetAliveCount();
            _local_28 = (((uint64_t)uVar1 << 32) | (uint32_t)local_28);
            puVar3 = std::min<unsigned int>(local_28, local_24);
            arg2 = *puVar3;
            arg3 = (void*)data();
            vertexBuffer.Update(0, arg2, arg3, 0);
            field_24 = 0;
            uVar2 = 1;
        } else {
            uVar2 = vertexBuffer.Unmap();
        }
        return uVar2;
    }

    // 0x1001c0670
    ReturnValue VBOMapper::Map(render::VertexBuffer& vertexBuffer, render::LockType lockType, unsigned int arg3,
                               unsigned int arg4, unsigned int arg5) {
        unsigned int uVar1;
        unsigned long uVar2;
        return local_38;

        if (m_mappingSupport == '\0') {
            if (field_24 != '\0') {
                LogAssert("!m_inUse",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                          "VBOMapper.cpp",
                          17, nullptr);
            }
            uVar2 = end();
            uVar1 = vertexBuffer.GetAliveCount();
            if (uVar2 < uVar1) {
                uVar1 = vertexBuffer.GetAliveCount();
                set_max_size((unsigned long)uVar1, 3);
            }
            field_24 = 1;
            local_38[0] = (ReturnValue)data();
        } else {
            local_38 = vertexBuffer.MapWrite(lockType, arg3, arg4, arg5);
        }
        return local_38[0];
    }

    // 0x1001c0820
    void OSRenderCore_RenderThread::UploadBuffers(bool arg1) {
        shared_ptr<RenderState::ModelSubmissionRSeven>* modelSubmissionRSeven1;
        shared_ptr<RenderState::ModelSubmissionRSeven>* modelSubmissionRSeven2;
        GraphRoot* this_01;
        GraphNode* this_02;
        uint64_t uVar2;
        LightSubmissionRSeven* lightSubmissionRSeven1;
        LightSubmissionRSeven* lightSubmissionRSeven2;
        OverlayRSeven* overlayRSeven1;
        OverlayRSeven* overlayRSeven2;

        RenderState* renderState =
            (RenderState*)((OSRenderCore_RenderThread_Common*)(field_32 + (long)(this->_vptr[-3].GetUISize - 32)))
                ->GetRenderStateNXT();
        field_1580368.UploadVertexBuffer(arg1);
        if (!(renderState->field_18104544.empty())) {
            tdp.AddData(*renderState);
            renderState->field_18104544.clear();
        }
        uint8_t* puVar3 = &renderState->field_17563848;
        if (!(puVar3->empty())) {
            modelSubmissionRSeven1 = (shared_ptr<RenderState::ModelSubmissionRSeven>*)puVar3->HeapBeginPtr();
            modelSubmissionRSeven2 = (shared_ptr<RenderState::ModelSubmissionRSeven>*)puVar3->end();
            ProcessModelUpdates(modelSubmissionRSeven1, modelSubmissionRSeven2);
            this_01 = (*field_16)->GetSceneGraphRoot();
            this_02 = (GraphNode*)this_01->GetRoot();
            uVar2 = ((vector<eastl::pair<int, int>>*)this_02->GetChildren())->size();
            *(uint64_t*)(renderState->field_19677552 + 11296) = uVar2;
            puVar3->resize(0);
        }
        puVar3 = &renderState->field_18088176;
        lightSubmissionRSeven1 = (LightSubmissionRSeven*)puVar3->HeapBeginPtr();
        lightSubmissionRSeven2 = (LightSubmissionRSeven*)puVar3->end();
        ProcessLightUpdates(lightSubmissionRSeven1, lightSubmissionRSeven2);
        puVar3->resize(0);
        puVar3 = &renderState->field_18104600;
        overlayRSeven1 = (OverlayRSeven*)puVar3->HeapBeginPtr();
        overlayRSeven2 = (OverlayRSeven*)puVar3->end();
        ProcessOverlayUpdates(overlayRSeven1, overlayRSeven2);
        puVar3->resize(0);
    }

} // namespace jag::oldscape

namespace jag {
    // 0x1001c07a0: UISceneSettings::operator=(UISceneSettings&&) has the same machine code as UISceneSettings::operator=(UISceneSettings const&)

} // namespace jag
