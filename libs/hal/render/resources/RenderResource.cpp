// libs/hal/render/resources/RenderResource.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "RenderResource.h"

namespace jag::render {
    // 0x100bdf8f0
    RenderResource::RenderResource() : field_0(1), field_4(0) {
        if (InstancePtr() == nullptr) {
            DisableMarkAsDead(3);
        }
    }

    // 0x100bdf980
    void RenderResource::DisableMarkAsDead(RenderResourceLivenessMethod renderResourceLivenessMethod) {
        if (renderResourceLivenessMethod == 1) {
            LogAssert("livenessMethod != RenderResourceLivenessMethod::MARK_AS_DEAD",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/resources/"
                      "RenderResource.cpp",
                      60, nullptr);
        }
        auto pRVar2 = InstancePtr();
        if (pRVar2 != nullptr) {
            pRVar2 = (RenderDevice*)Instance();
            if (pRVar2->ShouldDefer() != '\0') {
                pRVar2 = (RenderDevice*)pRVar2->Instance();
                ((RenderContext*)pRVar2->GetPrimaryRenderContext())->AddAliveObject(this);
            }
        }
        field_0 = renderResourceLivenessMethod;
    }

    // 0x100bdfa30
    RenderResource::~RenderResource() {
        RenderDevice* pRVar2;

        bool cVar1 = IsMarkAsDeadEnabled();
        if (cVar1) {
            pRVar2 = InstancePtr();
            if (pRVar2 != nullptr) {
                pRVar2 = (RenderDevice*)Instance();
                cVar1 = pRVar2->ShouldDefer();
                if ((cVar1) && (field_4 == '\0')) {
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

    // 0x100be4be0
    void RenderResource::UndoMarkAsDead() const {
        RenderDevice* pRVar2;

        if (IsMarkAsDeadEnabled()) {
            pRVar2 = (RenderDevice*)Instance();
            if (pRVar2->IsDeferredRendering()) {
                field_4 = 0;
                pRVar2 = (RenderDevice*)pRVar2->Instance();
                ((RenderContext*)pRVar2->GetPrimaryRenderContext())->RemoveDeadObject(this);
            }
        }
    }

    // 0x100be4c30
    void RenderResource::MarkAsDead() const {
        RenderDevice* pRVar2;

        if (IsMarkAsDeadEnabled()) {
            pRVar2 = InstancePtr();
            if (pRVar2 != nullptr) {
                pRVar2 = (RenderDevice*)Instance();
                if (pRVar2->ShouldDefer()) {
                    field_4 = 1;
                    pRVar2 = (RenderDevice*)pRVar2->Instance();
                    ((RenderContext*)pRVar2->GetPrimaryRenderContext())->AddDeadObject(this);
                }
            }
        }
    }

} // namespace jag::render
