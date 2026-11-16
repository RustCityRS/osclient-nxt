// libs/hal/render/resources/RenderResource.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "RenderResource.h"

namespace jag::render {
    // 0x100bdf8f0, 64 bytes, base-object constructor, placed by class name
    // RenderResource::RenderResource()
    void RenderResource::RenderResource() {
        field_0 = 1;
        field_4 = 0;
        if (Singleton<RenderDevice>::InstancePtr() == 0) {
            DisableMarkAsDead(this, 3);
        }
    }

    // 0x100bdf980, 112 bytes, placed by class name
    // RenderResource::DisableMarkAsDead(RenderResourceLivenessMethod)
    void RenderResource::DisableMarkAsDead(int param_2) {
        RenderDevice* pRVar3;
        RenderContext* this_00;

        if (param_2 == 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("livenessMethod != RenderResourceLivenessMethod::MARK_AS_DEAD",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/resources/"
                      "RenderResource.cpp",
                      60, (char*)0);
        }
        if (Singleton<RenderDevice>::InstancePtr() != 0) {
            pRVar3 = (RenderDevice*)((RenderResource*)this)->Instance();
            if (pRVar3->ShouldDefer() != '\0') {
                pRVar3 = (RenderDevice*)pRVar3->Instance();
                this_00 = (RenderContext*)pRVar3->GetPrimaryRenderContext();
                this_00->AddAliveObject(this);
            }
        }
        field_0 = param_2;
    }

    // 0x100bdfa30, 96 bytes, base-object destructor, placed by class name
    // RenderResource::~RenderResource()
    void RenderResource::~RenderResource() {
        char cVar1;
        RenderDevice* this_00;

        cVar1 = IsMarkAsDeadEnabled(this);
        if (cVar1 != '\0') {
            if (Singleton<RenderDevice>::InstancePtr() != 0) {
                this_00 = (RenderDevice*)((RenderResource*)this)->Instance();
                cVar1 = this_00->ShouldDefer();
                if ((cVar1 != '\0') && (field_4 == '\0')) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_markAsDeadCalled",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "resources/RenderResource.cpp",
                              25,
                              "MarkAsDead() was not called on object implementing RenderResource. This must be called "
                              "manually on destruction.");
                }
            }
        }
    }

    // 0x100be4be0, 80 bytes, placed by class name
    // RenderResource::UndoMarkAsDead() const
    void RenderResource::UndoMarkAsDead() {
        RenderContext* this_00;
        char cVar1;
        RenderDevice* pRVar2;

        cVar1 = IsMarkAsDeadEnabled(this);
        if (cVar1 != '\0') {
            pRVar2 = (RenderDevice*)((RenderResource*)this)->Instance();
            cVar1 = pRVar2->IsDeferredRendering();
            if (cVar1 != '\0') {
                field_4 = 0;
                pRVar2 = (RenderDevice*)pRVar2->Instance();
                this_00 = (RenderContext*)pRVar2->GetPrimaryRenderContext();
                this_00->RemoveDeadObject(this);
            }
        }
    }

    // 0x100be4c30, 80 bytes, placed by class name
    // RenderResource::MarkAsDead() const
    void RenderResource::MarkAsDead() {
        RenderContext* this_00;
        char cVar2;
        RenderDevice* pRVar3;

        cVar2 = IsMarkAsDeadEnabled(this);
        if (cVar2 != '\0') {
            if (Singleton<RenderDevice>::InstancePtr() != 0) {
                pRVar3 = (RenderDevice*)((RenderResource*)this)->Instance();
                cVar2 = pRVar3->ShouldDefer();
                if (cVar2 != '\0') {
                    field_4 = 1;
                    pRVar3 = (RenderDevice*)pRVar3->Instance();
                    this_00 = (RenderContext*)pRVar3->GetPrimaryRenderContext();
                    this_00->AddDeadObject(this);
                }
            }
        }
    }

    // 0x100be8700, 16 bytes, complete-object constructor, placed by class name
    // RenderResource::RenderResource(): jumps straight to the base-object constructor

    // 0x100be8720, 16 bytes, complete-object destructor, placed by class name
    // RenderResource::~RenderResource(): jumps straight to the base-object destructor

} // namespace jag::render
